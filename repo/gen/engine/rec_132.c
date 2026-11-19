#include "recomp.h"
#include "rec_mod.h"

void f_94ac00(void) {
  LOAD_REGS();
L_94ac00: /* 94ac00: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94ac03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ac04: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 94ac08: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 94ac0a: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 94ac0d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94ac13: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 94ac17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ac18: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 94ac1c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94ac20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ac21: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 94ac24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94ac25: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94ac2b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 94ac2f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 94ac32: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94ac38: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94ac3c: call 0x946740 */
  esp -= 4; W32(esp, 0x94ac41u); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 94ac41: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 94ac44: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 94ac48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ac49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ac4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ac4b: call 0x946740 */
  esp -= 4; W32(esp, 0x94ac50u); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 94ac50: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94ac54: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 94ac58: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ac5b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94ac5f: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 94ac63: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94ac67: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 94ac6b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94ac6d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94ac70: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 94ac72: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94ac74: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94ac76: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94ac79: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ac7b: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94ac7f: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 94ac82: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94ac85: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 94ac88: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94ac8b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ac8d: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 94ac90: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94ac92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ac94: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 94ac98: fsub dword ptr [esi + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x30u)));
/* 94ac9b: fabs  */
  ST0 = fabs(ST0);
/* 94ac9d: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 94aca3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94aca5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94aca8: jne 0x94acb1 */
  if (!zf) goto L_94acb1;
L_94acaa: /* 94acaa: xor eax, eax */
  eax = 0;
/* 94acac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94acad: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94acb0: ret  */
  esp += 4; SPILL(); return;
L_94acb1: /* 94acb1: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 94acb4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 94acb7: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 94acba: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 94acbd: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 94acc0: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94acc3: fsub dword ptr [eax + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x30u)));
/* 94acc6: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94acc9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94accd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94acd0: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94acd3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 94acd7: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94acda: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94acdd: xor eax, eax */
  eax = 0;
/* 94acdf: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 94ace3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94ace9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94acf0: /* 94acf0: fld dword ptr [esp + eax*4 + 4] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x4u)); FPUSH(v); }
/* 94acf4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94acf5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94acf8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94acfa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94acfc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94acfe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ad00: jl 0x94acf0 */
  if ((sf != of)) goto L_94acf0;
L_94ad02: /* 94ad02: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94ad08: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ad0a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ad0d: jne 0x94ad37 */
  if (!zf) goto L_94ad37;
L_94ad0f: /* 94ad0f: fsqrt  */
  ST0 = sqrt(ST0);
/* 94ad11: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 94ad17: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 94ad1b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ad1d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94ad21: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94ad25: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ad27: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 94ad2b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94ad2f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ad31: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 94ad35: jmp 0x94ad4f */
  goto L_94ad4f;
L_94ad37: /* 94ad37: mov dword ptr [esp + 4], 0x3f800000 */
  W32((uint32_t)(esp + 0x4u), 0x3f800000u);
/* 94ad3f: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 94ad47: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
L_94ad4f: /* 94ad4f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ad51: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 94ad55: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94ad57: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94ad5b: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94ad5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ad60: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94ad64: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94ad67: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ad69: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 94ad6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ad71: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94ad74: jp 0x94ad7d */
  if (pf) goto L_94ad7d;
L_94ad76: /* 94ad76: xor eax, eax */
  eax = 0;
/* 94ad78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ad79: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ad7c: ret  */
  esp += 4; SPILL(); return;
L_94ad7d: /* 94ad7d: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 94ad81: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 94ad85: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94ad8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ad8c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 94ad90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ad91: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94ad95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94ad96: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94ad9a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94ada0: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 94ada4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94ada8: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94adae: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94adb2: call 0x946740 */
  esp -= 4; W32(esp, 0x94adb7u); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 94adb7: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 94adba: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 94adbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94adbf: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 94adc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94adc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94adc5: call 0x946740 */
  esp -= 4; W32(esp, 0x94adcau); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 94adca: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94adce: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 94add2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94add5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94add9: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 94addd: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94ade1: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 94ade5: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94ade9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94adeb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94adef: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94adf1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94adf3: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 94adf7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94adf9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94adfb: fsub dword ptr [0x9f7c0c] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7c0cu)));
/* 94ae01: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94ae05: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94ae07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ae09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ae0b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ae0d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94ae10: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ae12: jp 0x94ae1b */
  if (pf) goto L_94ae1b;
L_94ae14: /* 94ae14: xor eax, eax */
  eax = 0;
/* 94ae16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ae17: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ae1a: ret  */
  esp += 4; SPILL(); return;
L_94ae1b: /* 94ae1b: mov eax, 1 */
  eax = 0x1u;
/* 94ae20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ae21: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ae24: ret  */
  esp += 4; SPILL(); return;
}

void f_94ae30(void) {
  LOAD_REGS();
L_94ae30: /* 94ae30: sub esp, 0xe78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94ae36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ae37: mov esi, dword ptr [esp + 0xe84] */
  esi = R32((uint32_t)(esp + 0xe84u));
/* 94ae3e: cmp dword ptr [esi + 0x1bc], 0xf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1bcu))); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ae45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ae46: mov edi, 1 */
  edi = 0x1u;
/* 94ae4b: mov dword ptr [esi + 0x1c8], edi */
  W32((uint32_t)(esi + 0x1c8u), edi);
/* 94ae51: je 0x94ae5e */
  if (zf) goto L_94ae5e;
L_94ae53: /* 94ae53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ae54: xor eax, eax */
  eax = 0;
/* 94ae56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ae57: add esp, 0xe78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ae5d: ret  */
  esp += 4; SPILL(); return;
L_94ae5e: /* 94ae5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ae5f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94ae60: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* 94ae62: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 94ae64: lea eax, [esp + 0x5f8] */
  eax = (uint32_t)(esp + 0x5f8u);
/* 94ae6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ae6c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 94ae70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ae71: mov dword ptr [esp + 0x24], 0x7f7fffff */
  W32((uint32_t)(esp + 0x24u), 0x7f7fffffu);
/* 94ae79: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 94ae81: call 0x977d70 */
  esp -= 4; W32(esp, 0x94ae86u); SPILL(); f_977d70(); if (g_unwind) return; RELOAD();
/* 94ae86: push 0x94a780 */
  { uint32_t v = 0x94a780u; esp -= 4; W32(esp, v); }
/* 94ae8b: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* 94ae8d: lea edx, [esp + 0x90] */
  edx = (uint32_t)(esp + 0x90u);
/* 94ae94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94ae95: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 94ae99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ae9a: call 0x9759d0 */
  esp -= 4; W32(esp, 0x94ae9fu); SPILL(); f_9759d0(); if (g_unwind) return; RELOAD();
/* 94ae9f: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 94aea3: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 94aeaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94aeab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94aeac: mov dword ptr [esp + 0x88], 0x32 */
  W32((uint32_t)(esp + 0x88u), 0x32u);
/* 94aeb7: mov dword ptr [esp + 0x84], edi */
  W32((uint32_t)(esp + 0x84u), edi);
/* 94aebe: mov dword ptr [esp + 0x8c], ecx */
  W32((uint32_t)(esp + 0x8cu), ecx);
/* 94aec5: call 0x94aac0 */
  esp -= 4; W32(esp, 0x94aecau); SPILL(); f_94aac0(); if (g_unwind) return; RELOAD();
/* 94aeca: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94aecd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_94aed0: /* 94aed0: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 94aed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94aed5: call 0x94a880 */
  esp -= 4; W32(esp, 0x94aedau); SPILL(); f_94a880(); if (g_unwind) return; RELOAD();
/* 94aeda: mov edi, eax */
  edi = eax;
/* 94aedc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94aedf: xor ebp, ebp */
  ebp = 0;
/* 94aee1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94aee3: je 0x94afb8 */
  if (zf) goto L_94afb8;
L_94aee9: /* 94aee9: cmp dword ptr [esp + 0x5c], 0x32 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94aeee: jge 0x94afb8 */
  if ((sf == of)) goto L_94afb8;
L_94aef4: /* 94aef4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94aef8: mov ebp, 1 */
  ebp = 0x1u;
/* 94aefd: fsub dword ptr [esi + 0x1b8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1b8u)));
/* 94af03: fcomp dword ptr [edi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xcu)));
  FPOP();
/* 94af06: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94af08: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94af0b: jp 0x94af18 */
  if (pf) goto L_94af18;
L_94af0d: /* 94af0d: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 94af10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94af12: je 0x94afb8 */
  if (zf) goto L_94afb8;
L_94af18: /* 94af18: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 94af1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94af1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94af1e: call 0x94a8a0 */
  esp -= 4; W32(esp, 0x94af23u); SPILL(); f_94a8a0(); if (g_unwind) return; RELOAD();
/* 94af23: mov edx, dword ptr [esp + 0xe94] */
  edx = R32((uint32_t)(esp + 0xe94u));
/* 94af2a: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 94af2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94af2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94af2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94af30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94af31: call 0x94a9c0 */
  esp -= 4; W32(esp, 0x94af36u); SPILL(); f_94a9c0(); if (g_unwind) return; RELOAD();
/* 94af36: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94af3a: mov ecx, dword ptr [esi + 0x1c0] */
  ecx = R32((uint32_t)(esi + 0x1c0u));
/* 94af40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94af41: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 94af45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94af46: call 0x94a740 */
  esp -= 4; W32(esp, 0x94af4bu); SPILL(); f_94a740(); if (g_unwind) return; RELOAD();
/* 94af4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94af4c: call 0x9469c0 */
  esp -= 4; W32(esp, 0x94af51u); SPILL(); f_9469c0(); if (g_unwind) return; RELOAD();
/* 94af51: mov ebx, dword ptr [edi + 0x10] */
  ebx = R32((uint32_t)(edi + 0x10u));
/* 94af54: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94af57: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94af5b: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 94af5e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 94af5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94af61: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 94af65: jne 0x94b06d */
  if (!zf) goto L_94b06d;
L_94af6b: /* 94af6b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94af6f: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 94af73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94af75: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94af78: jp 0x94b06d */
  if (pf) goto L_94b06d;
L_94af7e: /* 94af7e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94af82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94af84: je 0x94af94 */
  if (zf) goto L_94af94;
L_94af86: /* 94af86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94af87: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 94af8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94af8c: call 0x977e20 */
  esp -= 4; W32(esp, 0x94af91u); SPILL(); f_977e20(); if (g_unwind) return; RELOAD();
/* 94af91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94af94: /* 94af94: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94af98: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 94af9c: fsub dword ptr [esi + 0x1b8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1b8u)));
/* 94afa2: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 94afa6: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 94afaa: fcomp dword ptr [edi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xcu)));
  FPOP();
/* 94afad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94afaf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94afb2: jp 0x94b07b */
  if (pf) goto L_94b07b;
L_94afb8: /* 94afb8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94afbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94afbe: je 0x94b060 */
  if (zf) goto L_94b060;
L_94afc4: /* 94afc4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94afc6: je 0x94b060 */
  if (zf) goto L_94b060;
L_94afcc: /* 94afcc: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94afce: mov ebx, dword ptr [esp + 0xe8c] */
  ebx = R32((uint32_t)(esp + 0xe8cu));
/* 94afd5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94afdb: mov ebp, eax */
  ebp = eax;
/* 94afdd: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 94afe1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94afe2: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94afe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94afe5: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 94afe8: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94afee: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 94aff1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 94aff4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94affa: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 94affd: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94b001: fchs  */
  ST0 = -ST0;
/* 94b003: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 94b006: fadd dword ptr [ebx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x28u)));
/* 94b009: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94b00b: fstp dword ptr [ebx + 0x30] */
  WF32((uint32_t)(ebx + 0x30u), ST0); FPOP();
/* 94b00e: call 0x94a8a0 */
  esp -= 4; W32(esp, 0x94b013u); SPILL(); f_94a8a0(); if (g_unwind) return; RELOAD();
/* 94b013: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 94b016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b017: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94b019: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b01a: lea edi, [ebx + 0xc] */
  edi = (uint32_t)(ebx + 0xcu);
/* 94b01d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b01e: call 0x946c60 */
  esp -= 4; W32(esp, 0x94b023u); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94b023: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 94b026: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 94b02c: mov ebp, eax */
  ebp = eax;
/* 94b02e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b031: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b033: fadd dword ptr [ebx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x28u)));
/* 94b036: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b038: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94b03a: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 94b03c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 94b03e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b040: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b043: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 94b046: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 94b049: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b04c: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 94b04f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 94b052: je 0x94b060 */
  if (zf) goto L_94b060;
L_94b054: /* 94b054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b055: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94b056: call 0x94ac00 */
  esp -= 4; W32(esp, 0x94b05bu); SPILL(); f_94ac00(); if (g_unwind) return; RELOAD();
/* 94b05b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b05e: mov ebp, eax */
  ebp = eax;
L_94b060: /* 94b060: mov eax, ebp */
  eax = ebp;
/* 94b062: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94b063: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94b064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94b065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94b066: add esp, 0xe78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b06c: ret  */
  esp += 4; SPILL(); return;
L_94b06d: /* 94b06d: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 94b071: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b072: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b073: call 0x977e20 */
  esp -= 4; W32(esp, 0x94b078u); SPILL(); f_977e20(); if (g_unwind) return; RELOAD();
/* 94b078: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94b07b: /* 94b07b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b07c: call 0x947410 */
  esp -= 4; W32(esp, 0x94b081u); SPILL(); f_947410(); if (g_unwind) return; RELOAD();
/* 94b081: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b082: call 0x947490 */
  esp -= 4; W32(esp, 0x94b087u); SPILL(); f_947490(); if (g_unwind) return; RELOAD();
/* 94b087: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b08a: cmp ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b08d: mov dword ptr [esi + 0x1bc], 0xf */
  W32((uint32_t)(esi + 0x1bcu), 0xfu);
/* 94b097: jge 0x94aed0 */
  if ((sf == of)) goto L_94aed0;
L_94b09d: /* 94b09d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94b0a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b0a3: jne 0x94aed0 */
  if (!zf) goto L_94aed0;
L_94b0a9: /* 94b0a9: mov eax, 4 */
  eax = 0x4u;
/* 94b0ae: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_94b0b2: /* 94b0b2: mov ecx, dword ptr [0xaf40b4] */
  ecx = R32((uint32_t)(0xaf40b4u));
/* 94b0b8: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* 94b0bb: test dword ptr [esi + 0x1c4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1c4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b0c1: je 0x94b131 */
  if (zf) goto L_94b131;
L_94b0c3: /* 94b0c3: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 94b0c7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b0c9: je 0x94b0cf */
  if (zf) goto L_94b0cf;
L_94b0cb: /* 94b0cb: test ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b0cd: je 0x94b131 */
  if (zf) goto L_94b131;
L_94b0cf: /* 94b0cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b0d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94b0d2: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 94b0d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b0d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b0d8: call 0x946c60 */
  esp -= 4; W32(esp, 0x94b0ddu); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94b0dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b0e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b0e2: je 0x94b0f4 */
  if (zf) goto L_94b0f4;
L_94b0e4: /* 94b0e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94b0e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94b0e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b0e8: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 94b0ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b0ed: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 94b0f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b0f2: jmp 0x94b129 */
  goto L_94b129;
L_94b0f4: /* 94b0f4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b0f6: jne 0x94b131 */
  if (!zf) goto L_94b131;
L_94b0f8: /* 94b0f8: mov ecx, dword ptr [esi + 0x1c4] */
  ecx = R32((uint32_t)(esi + 0x1c4u));
/* 94b0fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b0ff: mov edx, edi */
  edx = edi;
/* 94b101: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94b102: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 94b104: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b105: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 94b109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b10a: call 0x946c60 */
  esp -= 4; W32(esp, 0x94b10fu); SPILL(); f_946c60(); if (g_unwind) return; RELOAD();
/* 94b10f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b112: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b114: je 0x94b131 */
  if (zf) goto L_94b131;
L_94b116: /* 94b116: mov ecx, dword ptr [esi + 0x1c4] */
  ecx = R32((uint32_t)(esi + 0x1c4u));
/* 94b11c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94b11d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b11e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b11f: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 94b123: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b124: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 94b128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_94b129: /* 94b129: call 0x94a7a0 */
  esp -= 4; W32(esp, 0x94b12eu); SPILL(); f_94a7a0(); if (g_unwind) return; RELOAD();
/* 94b12e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94b131: /* 94b131: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94b135: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94b138: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b13b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 94b13f: jl 0x94b0b2 */
  if ((sf != of)) goto L_94b0b2;
L_94b145: /* 94b145: jmp 0x94aed0 */
  goto L_94aed0;
}

void f_94b150(void) {
  LOAD_REGS();
L_94b150: /* 94b150: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94b156: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 94b15d: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 94b164: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94b166: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 94b169: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94b16c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94b16f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94b172: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94b175: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b177: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94b179: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94b17b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b17d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94b181: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 94b184: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94b187: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 94b18a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94b18c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b18e: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 94b191: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94b194: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b196: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94b19a: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 94b19d: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94b1a0: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 94b1a3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94b1a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b1a7: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 94b1aa: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94b1ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b1af: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94b1b3: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* 94b1b6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94b1b9: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* 94b1bc: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94b1bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b1c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94b1c3: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 94b1c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b1c8: fsubr dword ptr [esp + 0xb0] */
  ST0 = (F32((uint32_t)(esp + 0xb0u))) - ST0;
/* 94b1cf: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94b1d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b1d7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b1da: jp 0x94b208 */
  if (pf) goto L_94b208;
L_94b1dc: /* 94b1dc: fchs  */
  ST0 = -ST0;
/* 94b1de: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94b1e2: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94b1e8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94b1ec: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94b1f0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94b1f6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94b1fa: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94b1fe: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94b204: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_94b208: /* 94b208: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94b20b: xor ecx, ecx */
  ecx = 0;
/* 94b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_94b210: /* 94b210: fld dword ptr [esp + ecx + 0x10] */
  { double v = F32((uint32_t)(esp + ecx + 0x10u)); FPUSH(v); }
/* 94b214: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94b21a: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94b21c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b21e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b221: jp 0x94b225 */
  if (pf) goto L_94b225;
L_94b223: /* 94b223: fchs  */
  ST0 = -ST0;
L_94b225: /* 94b225: fstp dword ptr [esp + ecx + 4] */
  WF32((uint32_t)(esp + ecx + 0x4u), ST0); FPOP();
/* 94b229: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94b22c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94b22f: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b232: jl 0x94b210 */
  if ((sf != of)) goto L_94b210;
L_94b234: /* 94b234: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94b235: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94b236: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b237: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b238: mov ecx, 8 */
  ecx = 0x8u;
/* 94b23d: mov eax, 0xc479c000 */
  eax = 0xc479c000u;
/* 94b242: lea edi, [esp + 0x34] */
  edi = (uint32_t)(esp + 0x34u);
/* 94b246: xor edx, edx */
  edx = 0;
/* 94b248: lea esi, [esp + 0x5c] */
  esi = (uint32_t)(esp + 0x5cu);
/* 94b24c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 94b24e: mov edi, edi */
  edi = edi;
L_94b250: /* 94b250: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94b253: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94b257: je 0x94b25b */
  if (zf) goto L_94b25b;
L_94b259: /* 94b259: fchs  */
  ST0 = -ST0;
L_94b25b: /* 94b25b: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94b25e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94b262: je 0x94b266 */
  if (zf) goto L_94b266;
L_94b264: /* 94b264: fchs  */
  ST0 = -ST0;
L_94b266: /* 94b266: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94b269: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94b26d: je 0x94b271 */
  if (zf) goto L_94b271;
L_94b26f: /* 94b26f: fchs  */
  ST0 = -ST0;
L_94b271: /* 94b271: fstp dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 94b274: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 94b275: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94b278: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b27b: fstp dword ptr [esi - 0x10] */
  WF32((uint32_t)(esi + 0xfffffff0u), ST0); FPOP();
/* 94b27e: fstp dword ptr [esi - 0xc] */
  WF32((uint32_t)(esi + 0xfffffff4u), ST0); FPOP();
/* 94b281: jl 0x94b250 */
  if ((sf != of)) goto L_94b250;
L_94b283: /* 94b283: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 94b287: mov edx, dword ptr [esp + 0xc8] */
  edx = R32((uint32_t)(esp + 0xc8u));
/* 94b28e: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94b292: mov ebp, dword ptr [esp + 0xcc] */
  ebp = R32((uint32_t)(esp + 0xccu));
/* 94b299: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 94b29d: xor edi, edi */
  edi = 0;
/* 94b29f: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 94b2a3: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 94b2a9: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 94b2ad: lea ebx, [esp + 0x34] */
  ebx = (uint32_t)(esp + 0x34u);
/* 94b2b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b2b3: lea esi, [esp + 0x5c] */
  esi = (uint32_t)(esp + 0x5cu);
/* 94b2b7: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 94b2bb: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 94b2bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b2c1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 94b2c3: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
L_94b2c7: /* 94b2c7: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94b2c9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94b2cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b2d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b2d4: jnp 0x94b429 */
  if (!pf) goto L_94b429;
L_94b2da: /* 94b2da: mov eax, 1 */
  eax = 0x1u;
/* 94b2df: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
L_94b2e3: /* 94b2e3: mov ecx, eax */
  ecx = eax;
/* 94b2e5: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 94b2e7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94b2e9: je 0x94b41a */
  if (zf) goto L_94b41a;
L_94b2ef: /* 94b2ef: mov eax, dword ptr [esp + ecx*4 + 0x34] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x34u));
/* 94b2f3: cmp eax, 0xc479c000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc479c000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94b2f8: lea edi, [esp + ecx*4 + 0x34] */
  edi = (uint32_t)(esp + ecx*4 + 0x34u);
/* 94b2fc: jne 0x94b322 */
  if (!zf) goto L_94b322;
L_94b2fe: /* 94b2fe: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94b302: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 94b305: fmul dword ptr [esp + eax*4 + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax*4 + 0x5cu)));
/* 94b309: lea eax, [esp + eax*4 + 0x54] */
  eax = (uint32_t)(esp + eax*4 + 0x54u);
/* 94b30d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94b311: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94b314: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b316: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94b31a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94b31c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b31e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 94b320: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
L_94b322: /* 94b322: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 94b324: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94b32a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b32c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b32f: jp 0x94b412 */
  if (pf) goto L_94b412;
L_94b335: /* 94b335: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94b337: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94b33a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b33c: lea eax, [esp + ecx*4 + 0x54] */
  eax = (uint32_t)(esp + ecx*4 + 0x54u);
/* 94b340: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94b342: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 94b344: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94b346: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94b349: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94b34c: lea ecx, [ebp + ecx*4] */
  ecx = (uint32_t)(ebp + ecx*4);
/* 94b350: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94b354: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94b356: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94b359: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 94b360: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 94b363: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94b367: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 94b369: fchs  */
  ST0 = -ST0;
/* 94b36b: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 94b36f: fmul dword ptr [esi - 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff8u)));
/* 94b372: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b374: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94b378: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 94b37b: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 94b37f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94b383: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94b385: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 94b389: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94b38d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94b38f: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 94b391: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 94b397: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 94b39b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94b39d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94b3a1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94b3a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94b3a7: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 94b3a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94b3ab: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94b3af: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 94b3b3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94b3b5: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 94b3b8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94b3ba: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 94b3bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b3bf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94b3c3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94b3c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b3c7: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94b3ca: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94b3cc: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94b3d0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94b3d3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94b3d5: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 94b3d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b3da: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94b3dc: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 94b3df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b3e1: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94b3e4: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94b3e7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94b3eb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94b3ee: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 94b3f0: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 94b3f3: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94b3f5: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 94b3f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b3fa: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94b3fd: mov eax, dword ptr [esp + 0xc4] */
  eax = R32((uint32_t)(esp + 0xc4u));
/* 94b404: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94b407: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 94b409: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94b40a: mov ecx, edi */
  ecx = edi;
/* 94b40c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94b40e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 94b410: je 0x94b43d */
  if (zf) goto L_94b43d;
L_94b412: /* 94b412: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 94b416: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
L_94b41a: /* 94b41a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94b41c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b41f: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 94b423: jl 0x94b2e3 */
  if ((sf != of)) goto L_94b2e3;
L_94b429: /* 94b429: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94b42a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94b42d: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94b430: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b433: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 94b437: jl 0x94b2c7 */
  if ((sf != of)) goto L_94b2c7;
L_94b43d: /* 94b43d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94b43e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94b440: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94b441: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94b442: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94b443: add esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b449: ret  */
  esp += 4; SPILL(); return;
}

void f_94b450(void) {
  LOAD_REGS();
L_94b450: /* 94b450: mov eax, 0x1340 */
  eax = 0x1340u;
/* 94b455: call 0x99cc00 */
  esp -= 4; W32(esp, 0x94b45au); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 94b45a: cmp dword ptr [esp + 0x1358], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1358u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b462: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94b463: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94b464: mov ebp, dword ptr [esp + 0x1364] */
  ebp = R32((uint32_t)(esp + 0x1364u));
/* 94b46b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b46c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b46d: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 94b474: jl 0x94b7f1 */
  if ((sf != of)) goto L_94b7f1;
L_94b47a: /* 94b47a: mov ecx, dword ptr [esp + 0x135c] */
  ecx = R32((uint32_t)(esp + 0x135cu));
/* 94b481: mov ebx, dword ptr [esp + 0x1358] */
  ebx = R32((uint32_t)(esp + 0x1358u));
/* 94b488: mov esi, dword ptr [esp + 0x1354] */
  esi = R32((uint32_t)(esp + 0x1354u));
/* 94b48f: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 94b493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b494: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b495: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94b497: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94b498: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b499: call 0x946510 */
  esp -= 4; W32(esp, 0x94b49eu); SPILL(); f_946510(); if (g_unwind) return; RELOAD();
/* 94b49e: fcomp dword ptr [esp + 0x1370] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1370u)));
  FPOP();
/* 94b4a5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b4a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b4aa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b4ad: jnp 0x94b7f1 */
  if (!pf) goto L_94b7f1;
L_94b4b3: /* 94b4b3: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 94b4b6: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 94b4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94b4bb: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 94b4bf: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 94b4c4: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
/* 94b4cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b4cc: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 94b4d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b4d1: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 94b4d5: call 0x977b50 */
  esp -= 4; W32(esp, 0x94b4dau); SPILL(); f_977b50(); if (g_unwind) return; RELOAD();
/* 94b4da: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 94b4de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b4df: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 94b4e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b4e4: call 0x977be0 */
  esp -= 4; W32(esp, 0x94b4e9u); SPILL(); f_977be0(); if (g_unwind) return; RELOAD();
/* 94b4e9: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 94b4f0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b4f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b4f5: je 0x94b7f1 */
  if (zf) goto L_94b7f1;
L_94b4fb: /* 94b4fb: mov eax, dword ptr [esp + 0x1360] */
  eax = R32((uint32_t)(esp + 0x1360u));
/* 94b502: mov esi, dword ptr [esp + 0x1364] */
  esi = R32((uint32_t)(esp + 0x1364u));
/* 94b509: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 94b50c: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_94b510: /* 94b510: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 94b514: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b515: call 0x977ce0 */
  esp -= 4; W32(esp, 0x94b51au); SPILL(); f_977ce0(); if (g_unwind) return; RELOAD();
/* 94b51a: mov ecx, eax */
  ecx = eax;
/* 94b51c: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 94b520: mov edx, ecx */
  edx = ecx;
/* 94b522: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 94b525: fld dword ptr [edx + eax + 8] */
  { double v = F32((uint32_t)(edx + eax + 0x8u)); FPUSH(v); }
/* 94b529: lea edi, [edx + eax] */
  edi = (uint32_t)(edx + eax);
/* 94b52c: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b52f: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94b533: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 94b536: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b539: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b53b: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b53e: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 94b542: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b544: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94b546: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 94b548: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b54a: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94b54e: je 0x94b5c6 */
  if (zf) goto L_94b5c6;
L_94b550: /* 94b550: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 94b553: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94b556: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94b559: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 94b55c: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 94b55f: mov eax, dword ptr [esp + 0x1370] */
  eax = R32((uint32_t)(esp + 0x1370u));
/* 94b566: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94b569: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 94b56c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b56e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 94b570: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 94b572: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b574: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 94b577: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94b579: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 94b57c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94b57f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 94b582: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94b585: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b587: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 94b58a: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 94b58c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b58e: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 94b591: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94b594: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 94b597: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94b59a: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 94b59d: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94b5a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b5a2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 94b5a5: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 94b5a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b5a9: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 94b5ac: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94b5af: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 94b5b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 94b5b3: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 94b5b6: mov edx, dword ptr [esp + 0x1368] */
  edx = R32((uint32_t)(esp + 0x1368u));
/* 94b5bd: cmp dword ptr [ebp], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94b5c0: je 0x94b7f1 */
  if (zf) goto L_94b7f1;
L_94b5c6: /* 94b5c6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94b5ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b5cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b5cc: call 0x94e630 */
  esp -= 4; W32(esp, 0x94b5d1u); SPILL(); f_94e630(); if (g_unwind) return; RELOAD();
/* 94b5d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b5d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94b5d6: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 94b5da: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 94b5e2: jle 0x94b7e2 */
  if ((zf || sf != of)) goto L_94b7e2;
L_94b5e8: /* 94b5e8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 94b5ec: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94b5f0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94b5f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b5f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b5f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b5f7: call 0x94e6a0 */
  esp -= 4; W32(esp, 0x94b5fcu); SPILL(); f_94e6a0(); if (g_unwind) return; RELOAD();
/* 94b5fc: mov edx, eax */
  edx = eax;
/* 94b5fe: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94b602: mov ecx, edx */
  ecx = edx;
/* 94b604: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94b607: fld dword ptr [ecx + eax + 8] */
  { double v = F32((uint32_t)(ecx + eax + 0x8u)); FPUSH(v); }
/* 94b60b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94b60d: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b610: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b613: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94b616: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b619: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b61b: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94b61d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94b61f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b621: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 94b625: fcomp dword ptr [esp + 0x135c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x135cu)));
  FPOP();
/* 94b62c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b62e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94b631: jne 0x94b646 */
  if (!zf) goto L_94b646;
L_94b633: /* 94b633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b634: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 94b638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b639: call 0x977be0 */
  esp -= 4; W32(esp, 0x94b63eu); SPILL(); f_977be0(); if (g_unwind) return; RELOAD();
/* 94b63e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b641: jmp 0x94b7cd */
  goto L_94b7cd;
L_94b646: /* 94b646: test byte ptr [esp + 0x1360], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x1360u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94b64e: je 0x94b7cd */
  if (zf) goto L_94b7cd;
L_94b654: /* 94b654: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94b658: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94b65b: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 94b65f: mov edx, dword ptr [esp + 0x1370] */
  edx = R32((uint32_t)(esp + 0x1370u));
/* 94b666: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94b66a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 94b66d: fsub dword ptr [esp + 0x135c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x135cu)));
/* 94b674: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 94b677: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 94b679: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b67b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94b67d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94b681: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b683: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94b686: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94b68a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94b68d: fld dword ptr [esp + 0x135c] */
  { double v = F32((uint32_t)(esp + 0x135cu)); FPUSH(v); }
/* 94b694: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 94b698: fdivrp st(2) */
  STI(2) = ST0 / STI(2);
  FPOP();
/* 94b69a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94b69c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b69e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 94b6a0: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 94b6a4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94b6a8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b6aa: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94b6ad: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 94b6b1: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94b6b5: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94b6b8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b6ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b6bc: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 94b6bf: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94b6c3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 94b6c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b6c8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94b6cc: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94b6ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b6d0: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 94b6d3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94b6d5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b6d7: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 94b6da: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94b6de: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 94b6e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b6e3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94b6e7: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94b6ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b6ec: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* 94b6ef: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94b6f2: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 94b6f5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94b6f9: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 94b6fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b6fe: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94b702: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94b705: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b707: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* 94b70a: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94b70d: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 94b710: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b712: je 0x94b7be */
  if (zf) goto L_94b7be;
L_94b718: /* 94b718: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 94b71b: fld dword ptr [edx + eax*4 - 0xc] */
  { double v = F32((uint32_t)(edx + eax*4 + 0xfffffff4u)); FPUSH(v); }
/* 94b71f: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 94b722: fabs  */
  ST0 = fabs(ST0);
/* 94b724: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b72a: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94b72c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b72e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b731: jp 0x94b744 */
  if (pf) goto L_94b744;
L_94b733: /* 94b733: fabs  */
  ST0 = fabs(ST0);
/* 94b735: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b73b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b73d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b740: jnp 0x94b759 */
  if (!pf) goto L_94b759;
L_94b742: /* 94b742: jmp 0x94b7be */
  goto L_94b7be;
L_94b744: /* 94b744: fsub dword ptr [edx - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffff4u)));
/* 94b747: fdiv dword ptr [edx - 0xc] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffff4u)));
/* 94b74a: fabs  */
  ST0 = fabs(ST0);
/* 94b74c: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b752: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b754: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b757: jp 0x94b7be */
  if (pf) goto L_94b7be;
L_94b759: /* 94b759: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 94b75c: fabs  */
  ST0 = fabs(ST0);
/* 94b75e: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b764: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 94b767: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b769: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b76c: jp 0x94b77f */
  if (pf) goto L_94b77f;
L_94b76e: /* 94b76e: fabs  */
  ST0 = fabs(ST0);
/* 94b770: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b776: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b778: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b77b: jnp 0x94b794 */
  if (!pf) goto L_94b794;
L_94b77d: /* 94b77d: jmp 0x94b7be */
  goto L_94b7be;
L_94b77f: /* 94b77f: fsub dword ptr [edx - 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffff8u)));
/* 94b782: fdiv dword ptr [edx - 8] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffff8u)));
/* 94b785: fabs  */
  ST0 = fabs(ST0);
/* 94b787: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b78d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b78f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b792: jp 0x94b7be */
  if (pf) goto L_94b7be;
L_94b794: /* 94b794: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 94b797: fabs  */
  ST0 = fabs(ST0);
/* 94b799: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b79f: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 94b7a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b7a4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b7a7: jnp 0x94b7af */
  if (!pf) goto L_94b7af;
L_94b7a9: /* 94b7a9: fsub dword ptr [edx - 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffffcu)));
/* 94b7ac: fdiv dword ptr [edx - 4] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0xfffffffcu)));
L_94b7af: /* 94b7af: fabs  */
  ST0 = fabs(ST0);
/* 94b7b1: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94b7b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b7b9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b7bc: jnp 0x94b7cd */
  if (!pf) goto L_94b7cd;
L_94b7be: /* 94b7be: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 94b7c1: cmp eax, dword ptr [esp + 0x1368] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1368u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94b7c8: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 94b7cb: je 0x94b7f1 */
  if (zf) goto L_94b7f1;
L_94b7cd: /* 94b7cd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94b7d1: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 94b7d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94b7d6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b7d8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 94b7dc: jl 0x94b5e8 */
  if ((sf != of)) goto L_94b5e8;
L_94b7e2: /* 94b7e2: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 94b7e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94b7eb: jne 0x94b510 */
  if (!zf) goto L_94b510;
L_94b7f1: /* 94b7f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94b7f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94b7f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94b7f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94b7f5: add esp, 0x1340 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1340u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b7fb: ret  */
  esp += 4; SPILL(); return;
}

void f_94b800(void) {
  LOAD_REGS();
L_94b800: /* 94b800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94b804: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94b806: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94b809: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b80a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 94b80e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b80f: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 94b813: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b816: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 94b81c: jl 0x94b8ee */
  if ((sf != of)) goto L_94b8ee;
L_94b822: /* 94b822: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 94b825: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94b829: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94b82c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94b82f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94b832: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94b835: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b837: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94b839: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94b83b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b83d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 94b841: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 94b844: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94b847: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 94b84a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94b84c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b84e: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 94b851: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94b854: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b856: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 94b85a: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 94b85d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94b860: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 94b863: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94b865: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b867: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 94b86a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94b86d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b86f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94b873: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 94b876: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94b879: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 94b87c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94b87f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b881: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94b883: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 94b886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b888: fsubr dword ptr [esp + 0x20] */
  ST0 = (F32((uint32_t)(esp + 0x20u))) - ST0;
/* 94b88c: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94b890: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94b896: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b898: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b89b: jp 0x94b8d1 */
  if (pf) goto L_94b8d1;
L_94b89d: /* 94b89d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94b8a1: fchs  */
  ST0 = -ST0;
/* 94b8a3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94b8a7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94b8ab: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94b8b1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 94b8b5: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94b8b9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94b8bf: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 94b8c3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94b8c7: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94b8cd: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_94b8d1: /* 94b8d1: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 94b8d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b8d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b8d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b8d9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 94b8dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94b8df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94b8e0: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 94b8e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94b8e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94b8e6: call 0x94b450 */
  esp -= 4; W32(esp, 0x94b8ebu); SPILL(); f_94b450(); if (g_unwind) return; RELOAD();
/* 94b8eb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94b8ee: /* 94b8ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94b8ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94b8f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94b8f3: ret  */
  esp += 4; SPILL(); return;
}

void f_94b900(void) {
  LOAD_REGS();
L_94b900: /* 94b900: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94b903: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94b904: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94b905: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 94b909: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 94b90c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94b90d: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 94b911: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94b912: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 94b916: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94b919: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 94b91f: jl 0x94c25d */
  if ((sf != of)) goto L_94c25d;
L_94b925: /* 94b925: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 94b928: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 94b92c: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 94b92f: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b932: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 94b935: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b938: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b93a: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94b93c: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 94b93f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b941: fsubr dword ptr [esp + 0x40] */
  ST0 = (F32((uint32_t)(esp + 0x40u))) - ST0;
/* 94b945: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94b948: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b94b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94b94e: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b951: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b953: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94b955: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94b957: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b959: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 94b95c: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b95f: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 94b962: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94b964: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b966: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 94b969: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b96c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b96e: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 94b971: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b974: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 94b977: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94b979: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b97b: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 94b97e: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b981: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94b983: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94b987: fabs  */
  ST0 = fabs(ST0);
/* 94b989: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 94b98f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b991: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b994: jp 0x94ba63 */
  if (pf) goto L_94ba63;
L_94b99a: /* 94b99a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94b99c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94b99e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b9a0: fabs  */
  ST0 = fabs(ST0);
/* 94b9a2: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94b9a5: fadd dword ptr [0xa20e08] */
  ST0 = ST0 + (F32((uint32_t)(0xa20e08u)));
/* 94b9ab: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94b9ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94b9af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94b9b2: jnp 0x94c25b */
  if (!pf) goto L_94c25b;
L_94b9b8: /* 94b9b8: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 94b9bb: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 94b9bf: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 94b9c2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 94b9c6: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 94b9c9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94b9cb: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 94b9cf: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94b9d1: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 94b9d5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94b9d9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94b9db: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94b9de: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 94b9e2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94b9e6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94b9e8: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94b9eb: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 94b9ed: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94b9f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94b9f3: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 94b9f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94b9f8: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 94b9fb: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 94b9ff: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94ba01: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94ba03: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 94ba06: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 94ba0a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94ba0d: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 94ba10: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 94ba14: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94ba17: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94ba19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94ba1a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ba1c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94ba1e: jge 0x94c25d */
  if ((sf == of)) goto L_94c25d;
L_94ba24: /* 94ba24: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 94ba27: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 94ba2a: fchs  */
  ST0 = -ST0;
/* 94ba2c: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 94ba2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94ba31: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94ba34: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 94ba37: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 94ba3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ba3b: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 94ba3f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94ba41: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94ba43: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 94ba46: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 94ba4a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94ba4d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 94ba50: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 94ba54: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94ba57: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94ba59: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94ba5a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 94ba5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ba5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94ba5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ba5f: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ba62: ret  */
  esp += 4; SPILL(); return;
L_94ba63: /* 94ba63: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 94ba67: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 94ba6f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94ba71: xor eax, eax */
  eax = 0;
/* 94ba73: fchs  */
  ST0 = -ST0;
/* 94ba75: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 94ba79: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94ba7f: nop  */
L_94ba80: /* 94ba80: fld dword ptr [esp + eax*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x1cu)); FPUSH(v); }
/* 94ba84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94ba85: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ba88: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94ba8a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ba8c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94ba8e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ba90: jl 0x94ba80 */
  if ((sf != of)) goto L_94ba80;
L_94ba92: /* 94ba92: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94ba98: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ba9a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ba9d: jne 0x94bac5 */
  if (!zf) goto L_94bac5;
L_94ba9f: /* 94ba9f: fsqrt  */
  ST0 = sqrt(ST0);
/* 94baa1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 94baa7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94baa9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94baab: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94baaf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94bab3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bab5: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 94bab9: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 94babf: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94bac3: jmp 0x94badf */
  goto L_94badf;
L_94bac5: /* 94bac5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94bac7: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 94bacf: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 94bad7: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_94badf: /* 94badf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94bae3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bae5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94bae9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94baed: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94baef: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94baf3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94baf7: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94bafb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94baff: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94bb01: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94bb03: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94bb07: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94bb09: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 94bb0d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94bb0f: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 94bb13: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94bb15: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 94bb19: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94bb1d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94bb23: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94bb29: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 94bb2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94bb2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94bb31: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 94bb34: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94bb37: jp 0x94bb3b */
  if (pf) goto L_94bb3b;
L_94bb39: /* 94bb39: fchs  */
  ST0 = -ST0;
L_94bb3b: /* 94bb3b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94bb3f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bb41: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94bb45: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94bb49: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bb4b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94bb4f: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 94bb53: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 94bb57: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bb5a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94bb5e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bb60: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94bb64: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94bb68: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bb6a: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 94bb6e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94bb72: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bb74: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94bb78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94bb7a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bb7c: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94bb80: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94bb82: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94bb86: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 94bb8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94bb8e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94bb91: jp 0x94bdbd */
  if (pf) goto L_94bdbd;
L_94bb97: /* 94bb97: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94bb9b: fabs  */
  ST0 = fabs(ST0);
/* 94bb9d: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 94bba0: fadd dword ptr [0xa20e08] */
  ST0 = ST0 + (F32((uint32_t)(0xa20e08u)));
/* 94bba6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94bba8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94bbaa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94bbad: jnp 0x94c25d */
  if (!pf) goto L_94c25d;
L_94bbb3: /* 94bbb3: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bbb6: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94bbba: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bbbd: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94bbc1: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 94bbc5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94bbc9: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 94bbcd: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 94bbd0: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94bbd4: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 94bbd7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bbd9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bbdd: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94bbdf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bbe1: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 94bbe4: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94bbe6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bbea: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 94bbed: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bbf1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94bbf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bbf6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bbfa: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 94bbfd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bbff: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 94bc02: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 94bc05: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bc09: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 94bc0c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bc10: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94bc13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc15: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bc19: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 94bc1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc1e: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 94bc21: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 94bc24: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94bc26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94bc27: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94bc29: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94bc2b: jge 0x94c25d */
  if ((sf == of)) goto L_94c25d;
L_94bc31: /* 94bc31: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bc34: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94bc37: fchs  */
  ST0 = -ST0;
/* 94bc39: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 94bc3c: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bc3f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94bc43: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 94bc46: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94bc4a: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 94bc4e: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 94bc51: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94bc55: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 94bc58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc5a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bc5e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94bc60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc62: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94bc65: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94bc67: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bc6b: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 94bc6e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bc72: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94bc75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc77: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bc7b: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 94bc7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc80: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94bc83: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94bc86: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bc8a: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 94bc8d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bc91: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94bc94: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc96: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bc9a: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 94bc9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bc9f: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94bca2: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94bca5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94bca7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94bca8: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94bcaa: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94bcac: jge 0x94c25d */
  if ((sf == of)) goto L_94c25d;
L_94bcb2: /* 94bcb2: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bcb5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94bcb9: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bcbc: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94bcc0: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 94bcc3: fchs  */
  ST0 = -ST0;
/* 94bcc5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94bcc9: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94bccc: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 94bcd0: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 94bcd3: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 94bcd6: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94bcda: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 94bcdd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bcdf: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bce3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94bce5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bce7: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94bcea: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94bcec: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bcf0: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 94bcf3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bcf7: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94bcfa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bcfc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bd00: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 94bd03: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bd05: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94bd08: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94bd0b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bd0f: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 94bd12: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bd16: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94bd19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bd1b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bd1f: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 94bd22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bd24: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94bd27: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94bd2a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94bd2c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94bd2d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94bd2f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94bd31: jge 0x94c25d */
  if ((sf == of)) goto L_94c25d;
L_94bd37: /* 94bd37: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 94bd3a: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 94bd3d: fchs  */
  ST0 = -ST0;
/* 94bd3f: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94bd43: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94bd45: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 94bd49: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94bd4b: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94bd4e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94bd52: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 94bd55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94bd56: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 94bd5a: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 94bd5d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94bd61: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 94bd64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bd66: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94bd6a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94bd6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bd6e: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94bd71: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94bd73: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bd77: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 94bd7a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94bd7e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94bd81: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bd83: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bd87: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 94bd8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bd8c: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94bd8f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94bd92: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bd96: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 94bd99: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94bd9d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94bda0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bda2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bda6: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 94bda9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bdab: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94bdae: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94bdb1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94bdb3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94bdb4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94bdb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94bdb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94bdb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94bdb9: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94bdbc: ret  */
  esp += 4; SPILL(); return;
L_94bdbd: /* 94bdbd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94bdc3: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* 94bdc7: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 94bdcb: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 94bdcf: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 94bdd2: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 94bdd6: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94bdda: fst dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0);
/* 94bdde: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 94bde4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94bde6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94bde9: jne 0x94be63 */
  if (!zf) goto L_94be63;
L_94bdeb: /* 94bdeb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94bdef: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94bdf3: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94bdf7: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94bdfb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94bdff: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 94be03: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94be07: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 94be0a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94be0e: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 94be11: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94be13: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94be17: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94be19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94be1b: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 94be1e: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94be20: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94be24: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94be27: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94be2b: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 94be2e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94be30: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94be34: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 94be37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94be39: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 94be3c: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 94be3f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94be43: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94be46: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94be4a: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 94be4d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94be4f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94be53: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 94be56: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94be58: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 94be5b: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 94be5e: jmp 0x94bfcc */
  goto L_94bfcc;
L_94be63: /* 94be63: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94be67: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 94be6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94be6f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94be72: jne 0x94bfdb */
  if (!zf) goto L_94bfdb;
L_94be78: /* 94be78: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94be7c: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 94be80: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 94be86: fsqrt  */
  ST0 = sqrt(ST0);
/* 94be88: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94be8c: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 94be90: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94be94: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 94be98: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94be9c: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 94bea0: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94bea4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94bea8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94beaa: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 94beac: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94beb0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94beb4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94beb6: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 94beb8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94bebc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94bebe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94bec0: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94bec4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bec6: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 94beca: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 94bece: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94bed2: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 94bed5: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bed9: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 94bedc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bede: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bee2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94bee4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bee6: fadd dword ptr [ecx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x30u)));
/* 94bee9: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 94beeb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94beef: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94bef2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bef6: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 94bef9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94befb: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94beff: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 94bf02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bf04: fadd dword ptr [ecx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x34u)));
/* 94bf07: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 94bf0a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bf0e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94bf11: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bf15: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 94bf18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bf1a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bf1e: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 94bf21: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bf23: fadd dword ptr [ecx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x38u)));
/* 94bf26: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 94bf29: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94bf2b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94bf2c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94bf2e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94bf30: jge 0x94c25b */
  if ((sf == of)) goto L_94c25b;
L_94bf36: /* 94bf36: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 94bf3c: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 94bf3f: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94bf43: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94bf46: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 94bf49: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bf4b: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 94bf4f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94bf53: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94bf57: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bf59: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 94bf5d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94bf61: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94bf65: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94bf67: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 94bf6b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94bf6f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94bf71: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bf75: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 94bf78: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bf7c: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 94bf7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bf81: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bf85: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94bf87: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bf89: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94bf8c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94bf8e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bf92: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94bf95: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bf99: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 94bf9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bf9e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bfa2: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 94bfa5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bfa7: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94bfaa: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94bfad: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94bfb1: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94bfb4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94bfb8: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 94bfbb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bfbd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94bfc1: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 94bfc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94bfc6: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94bfc9: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
L_94bfcc: /* 94bfcc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94bfce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94bfcf: mov eax, ecx */
  eax = ecx;
/* 94bfd1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94bfd3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94bfd5: jge 0x94c25d */
  if ((sf == of)) goto L_94c25d;
L_94bfdb: /* 94bfdb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94bfdf: fadd dword ptr [edx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x14u)));
/* 94bfe2: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94bfe6: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 94bfea: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 94bff0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94bff2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94bff5: jne 0x94c086 */
  if (!zf) goto L_94c086;
L_94bffb: /* 94bffb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94bfff: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 94c002: fchs  */
  ST0 = -ST0;
/* 94c004: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94c006: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94c00a: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94c00e: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 94c011: fchs  */
  ST0 = -ST0;
/* 94c013: lea ecx, [ebx + edx*4] */
  ecx = (uint32_t)(ebx + edx*4);
/* 94c016: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94c01a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94c01e: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 94c022: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94c026: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c02a: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 94c02d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c031: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 94c034: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c036: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c03a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94c03c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c03e: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94c041: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94c043: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c047: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94c04a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c04e: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 94c051: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c053: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c057: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 94c05a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c05c: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94c05f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94c062: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c066: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94c069: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c06d: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 94c070: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c072: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c076: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 94c079: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c07b: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94c07e: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94c081: jmp 0x94c19e */
  goto L_94c19e;
L_94c086: /* 94c086: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 94c08a: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 94c090: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c092: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c095: jne 0x94c1ad */
  if (!zf) goto L_94c1ad;
L_94c09b: /* 94c09b: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 94c09f: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 94c0a2: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 94c0a6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94c0a8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 94c0ab: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 94c0ae: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 94c0b4: fsqrt  */
  ST0 = sqrt(ST0);
/* 94c0b6: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 94c0ba: fchs  */
  ST0 = -ST0;
/* 94c0bc: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94c0c0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c0c2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94c0c4: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94c0c8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94c0cc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94c0ce: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 94c0d2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94c0d6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94c0da: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94c0dc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 94c0de: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94c0e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94c0e4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94c0e8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c0ea: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 94c0ee: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94c0f2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94c0f6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c0f8: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 94c0fc: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 94c100: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94c104: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c108: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 94c10b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c10f: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 94c112: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c114: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c118: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94c11a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c11c: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94c11f: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94c121: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c125: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94c128: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c12c: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 94c12f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c131: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c135: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 94c138: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c13a: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94c13d: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94c140: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c144: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94c147: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c14b: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 94c14e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c150: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c154: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 94c157: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c159: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94c15c: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94c15f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94c161: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94c162: mov eax, ecx */
  eax = ecx;
/* 94c164: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c166: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94c168: jge 0x94c25b */
  if ((sf == of)) goto L_94c25b;
L_94c16e: /* 94c16e: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 94c174: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 94c178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c179: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c17a: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 94c17e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94c181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c182: call 0x94c290 */
  esp -= 4; W32(esp, 0x94c187u); SPILL(); f_94c290(); if (g_unwind) return; RELOAD();
/* 94c187: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94c189: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 94c18c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 94c190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c191: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 94c194: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c195: lea ecx, [ebx + eax*4] */
  ecx = (uint32_t)(ebx + eax*4);
/* 94c198: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c199: call 0x94c2c0 */
  esp -= 4; W32(esp, 0x94c19eu); SPILL(); f_94c2c0(); if (g_unwind) return; RELOAD();
L_94c19e: /* 94c19e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94c1a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94c1a1: mov eax, ecx */
  eax = ecx;
/* 94c1a3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c1a5: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94c1a7: jge 0x94c25d */
  if ((sf == of)) goto L_94c25d;
L_94c1ad: /* 94c1ad: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94c1b1: fcomp dword ptr [0xa08920] */
  fpu_com(ST0, F32((uint32_t)(0xa08920u)));
  FPOP();
/* 94c1b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c1b9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c1bc: jne 0x94c25d */
  if (!zf) goto L_94c25d;
L_94c1c2: /* 94c1c2: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 94c1c6: fcomp dword ptr [0xa08920] */
  fpu_com(ST0, F32((uint32_t)(0xa08920u)));
  FPOP();
/* 94c1cc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c1ce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c1d1: jne 0x94c25d */
  if (!zf) goto L_94c25d;
L_94c1d7: /* 94c1d7: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94c1db: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94c1df: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 94c1e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c1e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c1e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c1e6: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 94c1ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c1eb: call 0x94c270 */
  esp -= 4; W32(esp, 0x94c1f0u); SPILL(); f_94c270(); if (g_unwind) return; RELOAD();
/* 94c1f0: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 94c1f3: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 94c1f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c1f8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94c1fa: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 94c1fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c1fe: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 94c201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c202: call 0x94c2c0 */
  esp -= 4; W32(esp, 0x94c207u); SPILL(); f_94c2c0(); if (g_unwind) return; RELOAD();
/* 94c207: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94c209: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94c20a: mov eax, ecx */
  eax = ecx;
/* 94c20c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c20e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 94c210: jge 0x94c25d */
  if ((sf == of)) goto L_94c25d;
L_94c212: /* 94c212: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 94c216: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94c21a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c21b: fchs  */
  ST0 = -ST0;
/* 94c21d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94c220: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 94c224: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 94c228: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94c22c: fchs  */
  ST0 = -ST0;
/* 94c22e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94c231: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c232: call 0x94c270 */
  esp -= 4; W32(esp, 0x94c237u); SPILL(); f_94c270(); if (g_unwind) return; RELOAD();
/* 94c237: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 94c23a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 94c23e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c23f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94c241: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 94c244: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c245: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 94c248: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c249: call 0x94c2c0 */
  esp -= 4; W32(esp, 0x94c24eu); SPILL(); f_94c2c0(); if (g_unwind) return; RELOAD();
/* 94c24e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94c250: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94c251: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94c252: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 94c254: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c255: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94c256: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94c257: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c25a: ret  */
  esp += 4; SPILL(); return;
L_94c25b: /* 94c25b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94c25d: /* 94c25d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94c25e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c25f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94c260: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94c261: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c264: ret  */
  esp += 4; SPILL(); return;
}

void f_94c270(void) {
  LOAD_REGS();
L_94c270: /* 94c270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94c274: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94c278: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94c27c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94c27e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 94c282: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 94c285: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 94c288: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_94c290(void) {
  LOAD_REGS();
L_94c290: /* 94c290: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94c294: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94c298: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94c29a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94c29e: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 94c2a0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94c2a2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94c2a6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94c2a9: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 94c2ac: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94c2af: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 94c2b3: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94c2b6: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 94c2b9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94c2bc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_94c2c0(void) {
  LOAD_REGS();
L_94c2c0: /* 94c2c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94c2c4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94c2c8: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 94c2cb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94c2ce: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94c2d2: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 94c2d5: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94c2d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c2da: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94c2dc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94c2de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c2e0: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* 94c2e3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94c2e5: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 94c2e8: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94c2eb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94c2ee: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94c2f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c2f2: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 94c2f5: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94c2f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c2fa: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* 94c2fd: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 94c300: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 94c303: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94c306: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94c309: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94c30b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c30d: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 94c310: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94c313: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c315: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* 94c318: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 94c31b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_94c320(void) {
  LOAD_REGS();
L_94c320: /* 94c320: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 94c324: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c327: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94c32b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c32c: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 94c332: jl 0x94c402 */
  if ((sf != of)) goto L_94c402;
L_94c338: /* 94c338: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94c33c: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 94c33e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 94c340: and esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 94c346: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 94c347: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 94c34a: ja 0x94c402 */
  if ((!cf && !zf)) goto L_94c402;
L_94c350: /* 94c350: jmp dword ptr [esi*4 + 0x94c404] */
  switch (R32((uint32_t)(esi*4 + 0x94c404u))) {
    case 0x94c357u: goto L_94c357;
    case 0x94c373u: goto L_94c373;
    case 0x94c38fu: goto L_94c38f;
    case 0x94c3abu: goto L_94c3ab;
    case 0x94c402u: goto L_94c402;
    default: guest_badjump(0x94c350, R32((uint32_t)(esi*4 + 0x94c404u))); return;
  }
L_94c357: /* 94c357: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 94c35b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c35c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c35d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 94c361: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c362: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94c366: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c367: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c369: call 0x94b150 */
  esp -= 4; W32(esp, 0x94c36eu); SPILL(); f_94b150(); if (g_unwind) return; RELOAD();
/* 94c36e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c371: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c372: ret  */
  esp += 4; SPILL(); return;
L_94c373: /* 94c373: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 94c377: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c378: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c379: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 94c37d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c37e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94c382: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c383: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c385: call 0x94b800 */
  esp -= 4; W32(esp, 0x94c38au); SPILL(); f_94b800(); if (g_unwind) return; RELOAD();
/* 94c38a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c38d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c38e: ret  */
  esp += 4; SPILL(); return;
L_94c38f: /* 94c38f: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 94c393: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c394: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c395: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 94c399: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c39a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94c39e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c39f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c3a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c3a1: call 0x94b900 */
  esp -= 4; W32(esp, 0x94c3a6u); SPILL(); f_94b900(); if (g_unwind) return; RELOAD();
/* 94c3a6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c3a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c3aa: ret  */
  esp += 4; SPILL(); return;
L_94c3ab: /* 94c3ab: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 94c3af: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 94c3b5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 94c3b8: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 94c3bb: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94c3bf: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94c3c2: mov esi, dword ptr [ecx + 0x30] */
  esi = R32((uint32_t)(ecx + 0x30u));
/* 94c3c5: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 94c3c8: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94c3cb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c3cd: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94c3cf: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 94c3d2: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 94c3d4: mov esi, dword ptr [ecx + 0x34] */
  esi = R32((uint32_t)(ecx + 0x34u));
/* 94c3d7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 94c3da: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 94c3dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c3df: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 94c3e2: fsubr dword ptr [esp + 0x10] */
  ST0 = (F32((uint32_t)(esp + 0x10u))) - ST0;
/* 94c3e6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94c3e8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94c3ea: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 94c3ec: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94c3ee: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94c3f0: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94c3f3: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 94c3f6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94c3f9: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94c3fc: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 94c3ff: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_94c402: /* 94c402: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c403: ret  */
  esp += 4; SPILL(); return;
}

void f_94c430(void) {
  LOAD_REGS();
L_94c430: /* 94c430: sub esp, 0x4e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4e4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94c436: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94c437: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c438: mov esi, dword ptr [esp + 0x4f0] */
  esi = R32((uint32_t)(esp + 0x4f0u));
/* 94c43f: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 94c442: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 94c445: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 94c448: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 94c44c: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 94c44f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 94c453: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c457: fmul dword ptr [eax + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x38u)));
/* 94c45a: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 94c45e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94c462: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 94c465: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 94c468: mov ebx, dword ptr [esp + 0x4f4] */
  ebx = R32((uint32_t)(esp + 0x4f4u));
/* 94c46f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94c470: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 94c474: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c476: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c477: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c47b: lea edi, [ebx + 0x40] */
  edi = (uint32_t)(ebx + 0x40u);
/* 94c47e: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 94c481: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 94c484: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 94c488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c489: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c48b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94c48c: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 94c490: fld dword ptr [eax + 0x80] */
  { double v = F32((uint32_t)(eax + 0x80u)); FPUSH(v); }
/* 94c496: fmul dword ptr [0xa15904] */
  ST0 = ST0 * (F32((uint32_t)(0xa15904u)));
/* 94c49c: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94c4a0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c4a4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94c4aa: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 94c4ae: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94c4b2: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94c4b8: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 94c4bc: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94c4c0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94c4c6: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 94c4ca: call 0x946740 */
  esp -= 4; W32(esp, 0x94c4cfu); SPILL(); f_946740(); if (g_unwind) return; RELOAD();
/* 94c4cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94c4d0: call 0x9463b0 */
  esp -= 4; W32(esp, 0x94c4d5u); SPILL(); f_9463b0(); if (g_unwind) return; RELOAD();
/* 94c4d5: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94c4d9: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 94c4dc: mov esi, dword ptr [esp + 0x50c] */
  esi = R32((uint32_t)(esp + 0x50cu));
/* 94c4e3: fadd dword ptr [ebx + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x18u)));
/* 94c4e6: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94c4ea: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94c4ee: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 94c4f2: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 94c4f6: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 94c4fa: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94c4fe: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 94c505: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 94c509: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 94c50c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c50f: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 94c512: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c514: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 94c517: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94c51b: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 94c51f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c521: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 94c525: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 94c529: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94c52d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94c52f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c531: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94c533: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94c536: jp 0x94c53f */
  if (pf) goto L_94c53f;
L_94c538: /* 94c538: mov eax, 1 */
  eax = 0x1u;
/* 94c53d: jmp 0x94c541 */
  goto L_94c541;
L_94c53f: /* 94c53f: xor eax, eax */
  eax = 0;
L_94c541: /* 94c541: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94c543: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 94c546: jne 0x94c552 */
  if (!zf) goto L_94c552;
L_94c548: /* 94c548: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94c549: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c54a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94c54b: add esp, 0x4e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4e4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c551: ret  */
  esp += 4; SPILL(); return;
L_94c552: /* 94c552: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94c556: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94c557: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 94c55b: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 94c55f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c560: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 94c564: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 94c568: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c569: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 94c56b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c56c: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 94c570: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 94c573: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c574: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94c575: call 0x94c320 */
  esp -= 4; W32(esp, 0x94c57au); SPILL(); f_94c320(); if (g_unwind) return; RELOAD();
/* 94c57a: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 94c57e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c581: xor edi, edi */
  edi = 0;
/* 94c583: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94c585: jle 0x94c611 */
  if ((zf || sf != of)) goto L_94c611;
L_94c58b: /* 94c58b: xor ecx, ecx */
  ecx = 0;
/* 94c58d: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
L_94c591: /* 94c591: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c594: jge 0x94c611 */
  if ((sf == of)) goto L_94c611;
L_94c596: /* 94c596: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94c599: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94c59d: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 94c5a1: fchs  */
  ST0 = -ST0;
/* 94c5a3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c5a7: mov dword ptr [ecx + eax + 0xc], ebp */
  W32((uint32_t)(ecx + eax + 0xcu), ebp);
/* 94c5ab: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 94c5af: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c5b1: lea eax, [ecx + eax + 0xc] */
  eax = (uint32_t)(ecx + eax + 0xcu);
/* 94c5b5: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 94c5b8: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 94c5bc: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 94c5bf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94c5c2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94c5c4: fadd dword ptr [edx - 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff8u)));
/* 94c5c7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94c5c9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c5cd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c5cf: fadd dword ptr [edx - 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffffcu)));
/* 94c5d2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94c5d5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c5d9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c5db: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 94c5dd: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94c5e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94c5e2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94c5e6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94c5ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c5ee: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c5f1: jne 0x94c5fb */
  if (!zf) goto L_94c5fb;
L_94c5f3: /* 94c5f3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94c5f9: jmp 0x94c5ff */
  goto L_94c5ff;
L_94c5fb: /* 94c5fb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
L_94c5ff: /* 94c5ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94c602: fstp dword ptr [ecx + eax + 0x18] */
  WF32((uint32_t)(ecx + eax + 0x18u), ST0); FPOP();
/* 94c606: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94c607: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94c60a: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94c60d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c60f: jl 0x94c591 */
  if ((sf != of)) goto L_94c591;
L_94c611: /* 94c611: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 94c614: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94c618: fchs  */
  ST0 = -ST0;
/* 94c61a: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 94c61d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c621: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94c624: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c626: lea eax, [ecx + edx + 0xc] */
  eax = (uint32_t)(ecx + edx + 0xcu);
/* 94c62a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 94c62e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94c630: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 94c634: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 94c637: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94c63b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 94c63e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94c641: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94c643: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 94c647: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94c648: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94c64a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c64e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c650: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 94c654: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94c657: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94c65b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c65d: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 94c661: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94c664: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94c666: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c66a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94c670: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c672: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c675: jne 0x94c67f */
  if (!zf) goto L_94c67f;
L_94c677: /* 94c677: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94c67d: jmp 0x94c683 */
  goto L_94c683;
L_94c67f: /* 94c67f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
L_94c683: /* 94c683: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94c686: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94c687: fstp dword ptr [ecx + eax + 0x18] */
  WF32((uint32_t)(ecx + eax + 0x18u), ST0); FPOP();
/* 94c68b: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 94c68e: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 94c691: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94c692: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94c693: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94c694: add esp, 0x4e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4e4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c69a: ret  */
  esp += 4; SPILL(); return;
}

void f_94c6a0(void) {
  LOAD_REGS();
L_94c6a0: /* 94c6a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 94c6a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94c6a6: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 94c6a9: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 94c6ac: cmp byte ptr [edx], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 94c6af: jne 0x94c6c3 */
  if (!zf) goto L_94c6c3;
L_94c6b1: /* 94c6b1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94c6b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c6b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c6b8: call 0x94c430 */
  esp -= 4; W32(esp, 0x94c6bdu); SPILL(); f_94c430(); if (g_unwind) return; RELOAD();
/* 94c6bd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c6c0: ret 8 */
  esp += 12; SPILL(); return;
L_94c6c3: /* 94c6c3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 94c6c6: cmp byte ptr [edx], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 94c6c9: jne 0x94c6dd */
  if (!zf) goto L_94c6dd;
L_94c6cb: /* 94c6cb: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94c6cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c6d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c6d2: call 0x94c430 */
  esp -= 4; W32(esp, 0x94c6d7u); SPILL(); f_94c430(); if (g_unwind) return; RELOAD();
/* 94c6d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c6da: ret 8 */
  esp += 12; SPILL(); return;
L_94c6dd: /* 94c6dd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94c6e1: xor ecx, ecx */
  ecx = 0;
/* 94c6e3: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 94c6e6: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 94c6e9: xor eax, eax */
  eax = 0;
/* 94c6eb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_94c6f0(void) {
  LOAD_REGS();
L_94c6f0: /* 94c6f0: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94c6f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94c6f4: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 94c6f8: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 94c6fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94c6fc: mov ebp, dword ptr [esp + 0x64] */
  ebp = R32((uint32_t)(esp + 0x64u));
/* 94c700: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 94c703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c704: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 94c707: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94c70a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 94c70d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94c70f: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 94c712: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94c714: mov ecx, dword ptr [ecx + eax*4 + 4] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 94c718: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94c71b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94c71e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c720: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94c722: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 94c725: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94c726: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94c729: mov dword ptr [esp + 0x14], 2 */
  W32((uint32_t)(esp + 0x14u), 0x2u);
/* 94c731: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 94c739: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c73b: fst dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0);
/* 94c73f: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94c745: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c747: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c74a: jne 0x94c758 */
  if (!zf) goto L_94c758;
L_94c74c: /* 94c74c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 94c750: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 94c754: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94c756: jmp 0x94c77f */
  goto L_94c77f;
L_94c758: /* 94c758: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 94c75c: fcomp dword ptr [0xa216a8] */
  fpu_com(ST0, F32((uint32_t)(0xa216a8u)));
  FPOP();
/* 94c762: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c764: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94c767: jp 0x94c775 */
  if (pf) goto L_94c775;
L_94c769: /* 94c769: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 94c76d: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 94c771: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94c773: jmp 0x94c77f */
  goto L_94c77f;
L_94c775: /* 94c775: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 94c779: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_94c77f: /* 94c77f: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 94c783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c785: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 94c789: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c78a: call 0x94cd60 */
  esp -= 4; W32(esp, 0x94c78fu); SPILL(); f_94cd60(); if (g_unwind) return; RELOAD();
/* 94c78f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c790: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 94c794: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c795: call 0x94cd90 */
  esp -= 4; W32(esp, 0x94c79au); SPILL(); f_94cd90(); if (g_unwind) return; RELOAD();
/* 94c79a: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 94c79e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94c7a0: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 94c7a4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94c7a6: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 94c7aa: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 94c7ac: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 94c7af: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 94c7b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c7b4: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 94c7b7: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 94c7ba: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 94c7bd: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94c7c1: mov eax, 1 */
  eax = 0x1u;
/* 94c7c6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c7c8: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 94c7cc: jle 0x94c89a */
  if ((zf || sf != of)) goto L_94c89a;
L_94c7d2: /* 94c7d2: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 94c7d5: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 94c7d8: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94c7db: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 94c7de: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 94c7e1: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94c7e4: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94c7e7: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 94c7ea: mov ecx, dword ptr [edx + ecx*4 + 4] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 94c7ee: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94c7f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c7f3: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94c7f6: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 94c7f8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94c7fa: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94c7fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c7fe: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94c802: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94c808: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c80a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c80d: jne 0x94c819 */
  if (!zf) goto L_94c819;
L_94c80f: /* 94c80f: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 94c813: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 94c817: jmp 0x94c83c */
  goto L_94c83c;
L_94c819: /* 94c819: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c81d: fcomp dword ptr [0xa216a8] */
  fpu_com(ST0, F32((uint32_t)(0xa216a8u)));
  FPOP();
/* 94c823: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c825: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94c828: jp 0x94c834 */
  if (pf) goto L_94c834;
L_94c82a: /* 94c82a: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 94c82e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 94c832: jmp 0x94c83c */
  goto L_94c83c;
L_94c834: /* 94c834: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_94c83c: /* 94c83c: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 94c840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c841: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c842: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 94c846: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c847: call 0x94cd60 */
  esp -= 4; W32(esp, 0x94c84cu); SPILL(); f_94cd60(); if (g_unwind) return; RELOAD();
/* 94c84c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c84d: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 94c851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c852: call 0x94cd90 */
  esp -= 4; W32(esp, 0x94c857u); SPILL(); f_94cd90(); if (g_unwind) return; RELOAD();
/* 94c857: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94c85b: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 94c85f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c861: fcom dword ptr [esp + 0x60] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x60u)));
/* 94c865: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94c867: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94c86a: jne 0x94c884 */
  if (!zf) goto L_94c884;
L_94c86c: /* 94c86c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94c870: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94c874: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 94c878: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 94c87c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 94c87e: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 94c882: jmp 0x94c886 */
  goto L_94c886;
L_94c884: /* 94c884: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94c886: /* 94c886: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 94c88a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 94c88d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94c88e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c890: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 94c894: jl 0x94c7d2 */
  if ((sf != of)) goto L_94c7d2;
L_94c89a: /* 94c89a: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 94c89d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94c8a1: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94c8a4: mov ecx, dword ptr [eax + edx] */
  ecx = R32((uint32_t)(eax + edx));
/* 94c8a7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94c8a9: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 94c8ab: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 94c8ae: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 94c8b1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 94c8b4: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 94c8b7: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 94c8ba: xor eax, eax */
  eax = 0;
/* 94c8bc: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c8be: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 94c8c2: jle 0x94cd44 */
  if ((zf || sf != of)) goto L_94cd44;
L_94c8c8: /* 94c8c8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94c8cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94c8d0: /* 94c8d0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 94c8d4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 94c8d7: mov eax, dword ptr [edi + ecx + 0xc] */
  eax = R32((uint32_t)(edi + ecx + 0xcu));
/* 94c8db: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94c8dd: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 94c8e0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94c8e2: jl 0x94cd0f */
  if ((sf != of)) goto L_94cd0f;
L_94c8e8: /* 94c8e8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 94c8eb: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 94c8ee: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 94c8f1: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94c8f4: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 94c8f7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94c8f9: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 94c8fc: fsub dword ptr [esi + ecx] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx)));
/* 94c8ff: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94c901: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 94c905: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c906: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 94c90a: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 94c90e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94c911: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 94c915: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 94c918: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 94c91c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94c91f: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 94c923: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 94c926: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c927: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 94c92b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c92c: fst dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0);
/* 94c930: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 94c934: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 94c938: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c939: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 94c93d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c93e: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 94c942: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94c943: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94c944: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 94c948: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c94a: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 94c94e: fmul dword ptr [esp + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x5cu)));
/* 94c952: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94c954: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 94c956: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 94c95a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c95c: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 94c960: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 94c964: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c966: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94c96a: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 94c96e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c970: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 94c974: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94c976: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 94c978: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 94c97c: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 94c980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94c981: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94c983: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94c984: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94c985: call 0x99b300 */
  esp -= 4; W32(esp, 0x94c98au); SPILL(); f_99b300(); if (g_unwind) return; RELOAD();
/* 94c98a: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94c98e: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94c990: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 94c997: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94c99a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 94c99e: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 94c9a0: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94c9a4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c9a8: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94c9ab: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 94c9ae: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94c9b2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94c9b6: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94c9b9: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 94c9bc: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94c9c0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94c9c4: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 94c9c6: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94c9ca: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94c9ce: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 94c9d1: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94c9d5: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94c9d9: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 94c9dc: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 94c9df: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94c9e3: fchs  */
  ST0 = -ST0;
/* 94c9e5: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94c9e9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c9eb: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 94c9ef: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94c9f3: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94c9f7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94c9f9: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 94c9fd: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94ca01: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94ca05: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ca07: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 94ca09: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94ca0d: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 94ca10: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 94ca13: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ca15: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 94ca18: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ca1a: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94ca1c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94ca20: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94ca23: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 94ca27: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94ca29: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94ca2d: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 94ca31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ca33: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94ca37: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 94ca3b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ca3d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94ca41: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 94ca43: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 94ca45: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 94ca48: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 94ca4b: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 94ca4f: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 94ca52: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 94ca55: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 94ca59: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94ca5d: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94ca63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ca65: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ca68: jne 0x94caf4 */
  if (!zf) goto L_94caf4;
L_94ca6e: /* 94ca6e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94ca72: fsqrt  */
  ST0 = sqrt(ST0);
/* 94ca74: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 94ca7a: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94ca7e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ca80: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94ca84: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94ca88: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ca8a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94ca8e: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94ca92: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94ca94: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94ca98: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ca9a: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 94ca9e: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 94caa2: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94caa6: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 94caaa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94caac: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94caae: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 94cab2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cab4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94caba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94cabc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94cabf: jp 0x94cc31 */
  if (pf) goto L_94cc31;
L_94cac5: /* 94cac5: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94cac9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94cacf: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94cad3: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94cad7: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94cadd: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94cae1: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94cae5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94caeb: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94caef: jmp 0x94cc31 */
  goto L_94cc31;
L_94caf4: /* 94caf4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 94caf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94cafa: je 0x94cbb3 */
  if (zf) goto L_94cbb3;
L_94cb00: /* 94cb00: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94cb04: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94cb07: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94cb0b: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94cb0e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94cb10: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94cb14: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94cb16: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94cb1a: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94cb1d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94cb1f: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94cb23: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94cb26: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94cb2a: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94cb2c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94cb2e: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94cb32: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94cb36: fsqrt  */
  ST0 = sqrt(ST0);
/* 94cb38: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 94cb3e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 94cb42: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94cb44: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94cb48: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94cb4c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94cb50: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94cb54: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94cb58: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94cb5c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94cb60: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 94cb64: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 94cb68: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94cb6c: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 94cb70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cb72: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94cb74: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 94cb78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cb7a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94cb80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94cb82: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94cb85: jp 0x94cbc7 */
  if (pf) goto L_94cbc7;
L_94cb87: /* 94cb87: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94cb8b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94cb91: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94cb95: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94cb99: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94cb9f: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94cba3: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94cba7: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 94cbad: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94cbb1: jmp 0x94cbc7 */
  goto L_94cbc7;
L_94cbb3: /* 94cbb3: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 94cbb7: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94cbbb: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 94cbbf: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 94cbc3: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_94cbc7: /* 94cbc7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 94cbcd: xor eax, eax */
  eax = 0;
/* 94cbcf: nop  */
L_94cbd0: /* 94cbd0: fld dword ptr [esp + eax*4 + 0x34] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x34u)); FPUSH(v); }
/* 94cbd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94cbd5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94cbd8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94cbda: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94cbdc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94cbde: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94cbe0: jl 0x94cbd0 */
  if ((sf != of)) goto L_94cbd0;
L_94cbe2: /* 94cbe2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94cbe8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94cbea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94cbed: jne 0x94cc17 */
  if (!zf) goto L_94cc17;
L_94cbef: /* 94cbef: fsqrt  */
  ST0 = sqrt(ST0);
/* 94cbf1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 94cbf7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94cbfb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94cbfd: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94cc01: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94cc05: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94cc07: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94cc0b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94cc0f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94cc11: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94cc15: jmp 0x94cc2f */
  goto L_94cc2f;
L_94cc17: /* 94cc17: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 94cc1f: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 94cc27: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
L_94cc2f: /* 94cc2f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94cc31: /* 94cc31: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94cc35: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 94cc38: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94cc3c: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 94cc3f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cc41: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94cc45: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 94cc47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cc49: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94cc4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94cc51: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94cc54: jp 0x94cc5c */
  if (pf) goto L_94cc5c;
L_94cc56: /* 94cc56: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 94cc5a: jmp 0x94cc60 */
  goto L_94cc60;
L_94cc5c: /* 94cc5c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
L_94cc60: /* 94cc60: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94cc62: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 94cc66: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94cc6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94cc6b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94cc6e: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 94cc73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 94cc75: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cc77: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94cc7b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94cc7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cc80: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94cc84: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94cc86: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 94cc8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94cc8b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94cc8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cc8e: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94cc92: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94cc94: call 0x94cdb0 */
  esp -= 4; W32(esp, 0x94cc99u); SPILL(); f_94cdb0(); if (g_unwind) return; RELOAD();
/* 94cc99: fsubr dword ptr [esp + 0x3c] */
  ST0 = (F32((uint32_t)(esp + 0x3cu))) - ST0;
/* 94cc9d: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 94cca1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94cca4: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 94ccaa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94ccac: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94ccae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ccb0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ccb3: jne 0x94cd0d */
  if (!zf) goto L_94cd0d;
L_94ccb5: /* 94ccb5: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 94ccb9: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 94ccbd: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 94ccc1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94ccc5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94cccb: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94cccf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 94ccd1: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 94ccd5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 94ccd8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 94ccdb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ccdd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94cce0: jnp 0x94ccf9 */
  if (!pf) goto L_94ccf9;
L_94cce2: /* 94cce2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94cce6: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 94ccee: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 94ccf2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ccf4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ccf7: jne 0x94cd01 */
  if (!zf) goto L_94cd01;
L_94ccf9: /* 94ccf9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_94cd01: /* 94cd01: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 94cd05: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 94cd09: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94cd0b: jmp 0x94cd0f */
  goto L_94cd0f;
L_94cd0d: /* 94cd0d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94cd0f: /* 94cd0f: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 94cd13: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 94cd17: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 94cd1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94cd1b: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94cd1e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94cd20: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 94cd24: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 94cd28: jl 0x94c8d0 */
  if ((sf != of)) goto L_94c8d0;
L_94cd2e: /* 94cd2e: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 94cd32: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 94cd36: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 94cd3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94cd3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94cd3c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94cd3d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94cd3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94cd40: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94cd43: ret  */
  esp += 4; SPILL(); return;
L_94cd44: /* 94cd44: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 94cd48: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 94cd4c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94cd50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94cd51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94cd52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94cd53: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 94cd55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94cd56: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94cd59: ret  */
  esp += 4; SPILL(); return;
}

void f_94cd60(void) {
  LOAD_REGS();
L_94cd60: /* 94cd60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94cd64: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94cd66: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94cd6a: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 94cd6c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94cd70: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94cd72: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94cd75: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 94cd78: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 94cd7b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94cd7e: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 94cd81: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 94cd84: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_94cd90(void) {
  LOAD_REGS();
L_94cd90: /* 94cd90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94cd94: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94cd98: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94cd9b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94cd9e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94cda1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94cda4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cda6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94cda8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94cdaa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cdac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_94cdb0(void) {
  LOAD_REGS();
L_94cdb0: /* 94cdb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94cdb3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94cdb7: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 94cdba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94cdbb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94cdbc: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 94cdc0: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94cdc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94cdc3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 94cdc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94cdc6: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 94cdca: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 94cdce: jl 0x94cdd4 */
  if ((sf != of)) goto L_94cdd4;
L_94cdd0: /* 94cdd0: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94cdd2: jl 0x94cdd6 */
  if ((sf != of)) goto L_94cdd6;
L_94cdd4: /* 94cdd4: xor ebp, ebp */
  ebp = 0;
L_94cdd6: /* 94cdd6: mov eax, ebp */
  eax = ebp;
/* 94cdd8: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94cddb: fld dword ptr [eax + esi + 4] */
  { double v = F32((uint32_t)(eax + esi + 0x4u)); FPUSH(v); }
/* 94cddf: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94cde1: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 94cde5: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94cde8: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 94cdeb: cmp edx, -2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94cdee: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94cdf1: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94cdf4: mov dword ptr [esp + 0x28], 0xfffffffe */
  W32((uint32_t)(esp + 0x28u), 0xfffffffeu);
/* 94cdfc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cdfe: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 94ce00: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94ce02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ce04: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94ce08: jg 0x94ce20 */
  if ((!zf && sf == of)) goto L_94ce20;
L_94ce0a: /* 94ce0a: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 94ce0e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94ce12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ce13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ce14: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 94ce16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94ce17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ce18: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ce1b: ret  */
  esp += 4; SPILL(); return;
L_94ce1c: /* 94ce1c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_94ce20: /* 94ce20: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ce22: je 0x94cec1 */
  if (zf) goto L_94cec1;
L_94ce28: /* 94ce28: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94ce2c: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 94ce30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ce32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ce35: je 0x94ced3 */
  if (zf) goto L_94ced3;
L_94ce3b: /* 94ce3b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94ce3c: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 94ce40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ce41: mov edi, ebp */
  edi = ebp;
/* 94ce43: call 0x94e630 */
  esp -= 4; W32(esp, 0x94ce48u); SPILL(); f_94e630(); if (g_unwind) return; RELOAD();
/* 94ce48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ce4b: xor ebx, ebx */
  ebx = 0;
/* 94ce4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94ce4f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94ce53: jle 0x94ceac */
  if ((zf || sf != of)) goto L_94ceac;
L_94ce55: /* 94ce55: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94ce59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ce5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ce5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ce5c: call 0x94e6a0 */
  esp -= 4; W32(esp, 0x94ce61u); SPILL(); f_94e6a0(); if (g_unwind) return; RELOAD();
/* 94ce61: mov ecx, eax */
  ecx = eax;
/* 94ce63: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94ce67: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ce6a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ce6c: je 0x94cea3 */
  if (zf) goto L_94cea3;
L_94ce6e: /* 94ce6e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 94ce72: mov eax, ecx */
  eax = ecx;
/* 94ce74: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94ce77: fld dword ptr [eax + edx + 4] */
  { double v = F32((uint32_t)(eax + edx + 0x4u)); FPUSH(v); }
/* 94ce7b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94ce7d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94ce80: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94ce83: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94ce86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ce88: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 94ce8a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94ce8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94ce8e: fcom dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
/* 94ce92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94ce94: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94ce97: jne 0x94cea1 */
  if (!zf) goto L_94cea1;
L_94ce99: /* 94ce99: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94ce9d: mov ebp, ecx */
  ebp = ecx;
/* 94ce9f: jmp 0x94cea3 */
  goto L_94cea3;
L_94cea1: /* 94cea1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94cea3: /* 94cea3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94cea7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 94cea8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ceaa: jl 0x94ce55 */
  if ((sf != of)) goto L_94ce55;
L_94ceac: /* 94ceac: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 94ceb0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 94ceb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94ceb5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ceb7: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 94cebb: jl 0x94ce1c */
  if ((sf != of)) goto L_94ce1c;
L_94cec1: /* 94cec1: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 94cec5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94cec9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ceca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94cecb: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 94cecd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94cece: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94cecf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ced2: ret  */
  esp += 4; SPILL(); return;
L_94ced3: /* 94ced3: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 94ced7: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94cedb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94cedc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94cedd: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 94cedf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94cee0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94cee1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94cee4: ret  */
  esp += 4; SPILL(); return;
}

void f_94cef0(void) {
  LOAD_REGS();
L_94cef0: /* 94cef0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94cef3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 94cef7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 94cefa: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94cefe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ceff: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94cf02: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94cf03: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 94cf05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94cf06: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 94cf09: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 94cf0d: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 94cf10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94cf11: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 94cf15: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 94cf19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94cf20: /* 94cf20: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 94cf23: mov ecx, dword ptr [ebx + eax*4 + 8] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x8u));
/* 94cf27: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94cf2b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94cf2e: mov edi, dword ptr [ecx + ebp + 0xc] */
  edi = R32((uint32_t)(ecx + ebp + 0xcu));
/* 94cf32: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 94cf35: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94cf37: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 94cf3a: mov eax, dword ptr [ebx + eax*4 + 8] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x8u));
/* 94cf3e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94cf41: fld dword ptr [eax + ebp] */
  { double v = F32((uint32_t)(eax + ebp)); FPUSH(v); }
/* 94cf44: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94cf46: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 94cf48: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94cf49: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94cf4c: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 94cf50: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 94cf53: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94cf56: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 94cf59: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94cf5b: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 94cf5e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94cf61: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94cf63: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94cf66: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cf68: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94cf6a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94cf6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cf6e: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94cf72: jge 0x94cff6 */
  if ((sf == of)) goto L_94cff6;
L_94cf78: /* 94cf78: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 94cf7c: lea ebp, [ebp + edi*4] */
  ebp = (uint32_t)(ebp + edi*4);
/* 94cf80: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94cf82: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 94cf86: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 94cf8a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 94cf8e: mov edi, edi */
  edi = edi;
L_94cf90: /* 94cf90: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 94cf94: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 94cf96: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 94cf99: mov eax, dword ptr [ebx + eax*4 + 8] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x8u));
/* 94cf9d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94cfa0: fld dword ptr [eax + ebp] */
  { double v = F32((uint32_t)(eax + ebp)); FPUSH(v); }
/* 94cfa3: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94cfa5: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 94cfa7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94cfaa: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 94cfad: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94cfb0: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 94cfb3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94cfb6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94cfb8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94cfbb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cfbd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94cfbf: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94cfc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94cfc3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94cfc7: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 94cfcb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94cfcd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94cfcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94cfd1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94cfd4: jne 0x94cfde */
  if (!zf) goto L_94cfde;
L_94cfd6: /* 94cfd6: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94cfda: mov esi, edi */
  esi = edi;
/* 94cfdc: jmp 0x94cfe0 */
  goto L_94cfe0;
L_94cfde: /* 94cfde: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94cfe0: /* 94cfe0: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 94cfe4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 94cfe8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94cfeb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 94cfec: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 94cff0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 94cff4: jne 0x94cf90 */
  if (!zf) goto L_94cf90;
L_94cff6: /* 94cff6: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94cffa: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* 94cffe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d000: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d003: je 0x94cf20 */
  if (zf) goto L_94cf20;
L_94d009: /* 94d009: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d00d: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 94d010: fchs  */
  ST0 = -ST0;
/* 94d012: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 94d016: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d018: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d01b: jne 0x94d031 */
  if (!zf) goto L_94d031;
L_94d01d: /* 94d01d: mov edx, dword ptr [ebx + ecx*4 + 4] */
  edx = R32((uint32_t)(ebx + ecx*4 + 0x4u));
/* 94d021: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 94d025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d026: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d027: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d028: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94d02a: xor eax, eax */
  eax = 0;
/* 94d02c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d02d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d030: ret  */
  esp += 4; SPILL(); return;
L_94d031: /* 94d031: mov ebx, dword ptr [ebx + ecx*4 + 0xc] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0xcu));
/* 94d035: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 94d039: mov eax, ebx */
  eax = ebx;
/* 94d03b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d03e: fld dword ptr [eax + ecx + 8] */
  { double v = F32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 94d042: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d044: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d047: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94d04a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d04d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d04f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94d051: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94d053: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d055: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94d05b: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 94d05f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94d061: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d063: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d066: jne 0x94d07b */
  if (!zf) goto L_94d07b;
L_94d068: /* 94d068: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 94d06c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d06d: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 94d06f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d070: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d071: mov eax, 1 */
  eax = 0x1u;
/* 94d076: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d077: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d07a: ret  */
  esp += 4; SPILL(); return;
L_94d07b: /* 94d07b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 94d07f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d080: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d081: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 94d083: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d084: mov eax, 2 */
  eax = 0x2u;
/* 94d089: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d08a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d08d: ret  */
  esp += 4; SPILL(); return;
}

void f_94d090(void) {
  LOAD_REGS();
L_94d090: /* 94d090: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94d093: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94d097: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d098: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 94d09c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d09d: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 94d0a0: mov ecx, ebp */
  ecx = ebp;
/* 94d0a2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94d0a5: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 94d0a8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d0ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d0ac: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94d0af: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 94d0b2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d0b5: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 94d0b8: mov eax, dword ptr [esi + eax*4 + 4] */
  eax = R32((uint32_t)(esi + eax*4 + 0x4u));
/* 94d0bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d0bd: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 94d0bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d0c1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94d0c3: mov ebx, dword ptr [ebx + 0x14] */
  ebx = R32((uint32_t)(ebx + 0x14u));
/* 94d0c6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d0c8: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d0cb: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d0cd: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94d0d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d0d2: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 94d0d6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94d0d9: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 94d0e1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94d0e4: mov dword ptr [esp + 0x44], 1 */
  W32((uint32_t)(esp + 0x44u), 0x1u);
/* 94d0ec: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94d0ef: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94d0f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d0f4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94d0f6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94d0f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d0fa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d0fc: jle 0x94d164 */
  if ((zf || sf != of)) goto L_94d164;
L_94d0fe: /* 94d0fe: mov edi, edi */
  edi = edi;
L_94d100: /* 94d100: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 94d103: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 94d106: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d109: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94d10c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94d10f: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 94d112: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d115: mov eax, dword ptr [esi + eax*4 + 4] */
  eax = R32((uint32_t)(esi + eax*4 + 0x4u));
/* 94d119: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d11c: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d11e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d120: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94d122: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d124: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d126: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94d129: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94d12c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94d12f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94d132: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d134: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94d136: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94d138: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d13a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d13c: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 94d140: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94d142: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d144: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d147: jne 0x94d157 */
  if (!zf) goto L_94d157;
L_94d149: /* 94d149: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94d14d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d14f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94d153: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
L_94d157: /* 94d157: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94d15b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94d15c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94d15e: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 94d162: jl 0x94d100 */
  if ((sf != of)) goto L_94d100;
L_94d164: /* 94d164: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94d16a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d16c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d16f: jp 0x94d188 */
  if (pf) goto L_94d188;
L_94d171: /* 94d171: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 94d175: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d176: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d177: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d178: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 94d17e: mov eax, 3 */
  eax = 0x3u;
/* 94d183: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d184: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d187: ret  */
  esp += 4; SPILL(); return;
L_94d188: /* 94d188: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 94d18c: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94d18f: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94d191: mov ebp, dword ptr [ecx + 0xc] */
  ebp = R32((uint32_t)(ecx + 0xcu));
/* 94d194: lea eax, [ebp + ebp*4] */
  eax = (uint32_t)(ebp + ebp*4);
/* 94d198: mov ebx, dword ptr [esi + eax*4 + 8] */
  ebx = R32((uint32_t)(esi + eax*4 + 0x8u));
/* 94d19c: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 94d19f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94d1a2: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 94d1a5: fld dword ptr [ebx + edi] */
  { double v = F32((uint32_t)(ebx + edi)); FPUSH(v); }
/* 94d1a8: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94d1aa: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d1ad: fsub dword ptr [eax + edi] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi)));
/* 94d1b0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d1b2: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 94d1b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d1b8: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 94d1bb: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 94d1bd: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d1c0: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 94d1c4: mov ebx, ebp */
  ebx = ebp;
/* 94d1c6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 94d1c7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94d1cb: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 94d1cf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d1d1: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d1d5: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94d1d9: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d1dd: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94d1e1: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d1e5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d1e7: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94d1ea: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d1ec: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94d1ef: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d1f1: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94d1f5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94d1f7: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94d1fb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94d1fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d200: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94d204: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94d208: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94d20b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d20d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94d20f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d211: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94d213: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 94d215: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 94d218: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d21b: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 94d21e: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d221: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 94d224: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94d226: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 94d228: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94d22c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94d22e: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94d232: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d234: jge 0x94d300 */
  if ((sf == of)) goto L_94d300;
L_94d23a: /* 94d23a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_94d240: /* 94d240: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 94d243: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 94d246: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94d249: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 94d24c: fld dword ptr [ebx + edi] */
  { double v = F32((uint32_t)(ebx + edi)); FPUSH(v); }
/* 94d24f: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94d251: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d254: fsub dword ptr [eax + edi] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi)));
/* 94d257: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d259: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 94d25c: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d25f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 94d262: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 94d264: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d267: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 94d26b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94d26f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d271: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d275: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94d279: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d27d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94d281: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d285: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d287: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94d28a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d28c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94d28f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d291: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94d295: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94d297: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94d29b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94d29e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d2a0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94d2a4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94d2a7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 94d2a9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94d2ab: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 94d2ad: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94d2af: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 94d2b1: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 94d2b4: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d2b7: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 94d2ba: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d2bd: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 94d2c1: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94d2c3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d2c5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94d2c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d2c9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d2cb: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 94d2cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d2d1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94d2d5: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 94d2d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d2d9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94d2dd: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94d2df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d2e1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d2e4: jne 0x94d2f0 */
  if (!zf) goto L_94d2f0;
L_94d2e6: /* 94d2e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d2e8: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 94d2ec: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_94d2f0: /* 94d2f0: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 94d2f3: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 94d2f4: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94d2f6: jl 0x94d240 */
  if ((sf != of)) goto L_94d240;
L_94d2fc: /* 94d2fc: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_94d300: /* 94d300: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 94d306: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d308: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d30b: jp 0x94d324 */
  if (pf) goto L_94d324;
L_94d30d: /* 94d30d: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 94d311: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 94d315: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d316: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d317: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d318: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94d31a: mov eax, 2 */
  eax = 0x2u;
/* 94d31f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d320: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d323: ret  */
  esp += 4; SPILL(); return;
L_94d324: /* 94d324: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 94d328: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 94d32b: mov esi, dword ptr [ecx + eax*4 + 4] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 94d32f: mov ebp, dword ptr [ecx + eax*4 + 8] */
  ebp = R32((uint32_t)(ecx + eax*4 + 0x8u));
/* 94d333: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 94d336: mov ecx, ebp */
  ecx = ebp;
/* 94d338: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94d33b: fld dword ptr [ecx + edi] */
  { double v = F32((uint32_t)(ecx + edi)); FPUSH(v); }
/* 94d33e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94d340: mov eax, esi */
  eax = esi;
/* 94d342: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d345: fsub dword ptr [eax + edi] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi)));
/* 94d348: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d34a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94d34d: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d350: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94d353: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d356: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94d358: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 94d35a: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 94d35d: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d360: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 94d363: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d366: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94d368: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d36a: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94d36c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d36e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d370: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94d372: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d374: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94d37a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d37c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d37f: jp 0x94d399 */
  if (pf) goto L_94d399;
L_94d381: /* 94d381: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 94d385: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d387: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d388: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d38a: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 94d38c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d38e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d38f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d391: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d392: xor eax, eax */
  eax = 0;
/* 94d394: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d395: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d398: ret  */
  esp += 4; SPILL(); return;
L_94d399: /* 94d399: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d39b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94d39d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 94d39f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94d3a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d3a3: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 94d3a5: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 94d3a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d3a9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d3ab: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94d3ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d3af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d3b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d3b3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d3b6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d3b8: jne 0x94d3ca */
  if (!zf) goto L_94d3ca;
L_94d3ba: /* 94d3ba: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 94d3be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d3bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d3c0: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 94d3c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d3c3: xor eax, eax */
  eax = 0;
/* 94d3c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d3c6: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d3c9: ret  */
  esp += 4; SPILL(); return;
L_94d3ca: /* 94d3ca: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 94d3ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d3cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d3d0: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 94d3d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d3d3: mov eax, 1 */
  eax = 0x1u;
/* 94d3d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d3d9: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d3dc: ret  */
  esp += 4; SPILL(); return;
}

void f_94d3e0(void) {
  LOAD_REGS();
L_94d3e0: /* 94d3e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94d3e3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94d3e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d3e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d3e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d3ea: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 94d3ee: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94d3f0: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 94d3f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d3f5: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 94d3f9: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 94d3fb: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 94d3ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d400: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94d404: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 94d408: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d40c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94d40d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94d410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d411: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 94d414: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 94d418: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94d41c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94d41f: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 94d422: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94d426: call 0x94d090 */
  esp -= 4; W32(esp, 0x94d42bu); SPILL(); f_94d090(); if (g_unwind) return; RELOAD();
/* 94d42b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94d42f: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 94d433: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 94d436: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d439: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 94d43d: jmp 0x94d443 */
  goto L_94d443;
L_94d43f: /* 94d43f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_94d443: /* 94d443: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d445: je 0x94d493 */
  if (zf) goto L_94d493;
L_94d447: /* 94d447: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d449: je 0x94d46f */
  if (zf) goto L_94d46f;
L_94d44b: /* 94d44b: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 94d44f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94d450: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94d454: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 94d458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d459: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94d45d: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 94d461: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94d462: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d463: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94d464: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d465: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d466: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d467: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d468: call 0x94de30 */
  esp -= 4; W32(esp, 0x94d46du); SPILL(); f_94de30(); if (g_unwind) return; RELOAD();
/* 94d46d: jmp 0x94d4dd */
  goto L_94d4dd;
L_94d46f: /* 94d46f: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 94d473: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94d474: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 94d478: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 94d47c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94d47d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94d481: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 94d485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d486: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d487: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94d488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94d489: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d48a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d48b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d48c: call 0x94db20 */
  esp -= 4; W32(esp, 0x94d491u); SPILL(); f_94db20(); if (g_unwind) return; RELOAD();
/* 94d491: jmp 0x94d4dd */
  goto L_94d4dd;
L_94d493: /* 94d493: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d495: je 0x94d4bb */
  if (zf) goto L_94d4bb;
L_94d497: /* 94d497: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 94d49b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d49c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94d4a0: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 94d4a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94d4a5: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 94d4a9: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 94d4ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94d4ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d4af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d4b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94d4b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d4b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d4b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d4b4: call 0x94d6e0 */
  esp -= 4; W32(esp, 0x94d4b9u); SPILL(); f_94d6e0(); if (g_unwind) return; RELOAD();
/* 94d4b9: jmp 0x94d4dd */
  goto L_94d4dd;
L_94d4bb: /* 94d4bb: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 94d4bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94d4c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 94d4c4: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 94d4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d4c9: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 94d4cd: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 94d4d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94d4d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d4d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94d4d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94d4d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d4d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d4d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d4d8: call 0x94d510 */
  esp -= 4; W32(esp, 0x94d4ddu); SPILL(); f_94d510(); if (g_unwind) return; RELOAD();
L_94d4dd: /* 94d4dd: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d4e0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 94d4e2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 94d4e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94d4e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94d4e7: jne 0x94d43f */
  if (!zf) goto L_94d43f;
L_94d4ed: /* 94d4ed: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 94d4f1: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94d4f5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 94d4f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d4fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d4fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d4fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94d4fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d4ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d502: ret  */
  esp += 4; SPILL(); return;
}

void f_94d510(void) {
  LOAD_REGS();
L_94d510: /* 94d510: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94d513: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 94d517: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94d519: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 94d51d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d51e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 94d522: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d523: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d524: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 94d528: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 94d52a: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94d52d: fld dword ptr [ecx + ebx] */
  { double v = F32((uint32_t)(ecx + ebx)); FPUSH(v); }
/* 94d530: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94d532: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 94d534: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 94d538: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94d53b: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d53e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94d542: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94d545: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d548: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 94d54c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 94d550: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94d554: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d556: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94d55a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d55d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d55f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94d563: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d566: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d568: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94d56a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d56c: fadd dword ptr [0xa214dc] */
  ST0 = ST0 + (F32((uint32_t)(0xa214dcu)));
/* 94d572: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94d574: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d576: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d579: jp 0x94d5a7 */
  if (pf) goto L_94d5a7;
L_94d57b: /* 94d57b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94d57d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d57f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 94d583: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94d585: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 94d588: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 94d58b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 94d58e: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 94d592: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d593: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 94d596: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d597: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 94d59d: mov eax, 1 */
  eax = 0x1u;
/* 94d5a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d5a3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d5a6: ret  */
  esp += 4; SPILL(); return;
L_94d5a7: /* 94d5a7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94d5ab: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94d5ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d5af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d5b2: jp 0x94d5ba */
  if (pf) goto L_94d5ba;
L_94d5b4: /* 94d5b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d5b6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_94d5ba: /* 94d5ba: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 94d5bd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94d5c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d5c4: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 94d5c7: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 94d5ca: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94d5cc: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 94d5d0: jge 0x94d684 */
  if ((sf == of)) goto L_94d684;
L_94d5d6: /* 94d5d6: mov ebp, dword ptr [edi + 8] */
  ebp = R32((uint32_t)(edi + 0x8u));
/* 94d5d9: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 94d5dc: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94d5de: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
/* 94d5e1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
L_94d5e5: /* 94d5e5: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 94d5e7: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 94d5ea: mov eax, dword ptr [ebp + eax*4 + 8] */
  eax = R32((uint32_t)(ebp + eax*4 + 0x8u));
/* 94d5ee: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d5f1: fld dword ptr [eax + ebx] */
  { double v = F32((uint32_t)(eax + ebx)); FPUSH(v); }
/* 94d5f4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d5f6: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 94d5f8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94d5fb: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 94d5fe: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94d601: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 94d604: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94d606: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d608: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d60a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d60d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d60f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94d611: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d614: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d616: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 94d61a: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94d620: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d622: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d625: jnp 0x94d668 */
  if (!pf) goto L_94d668;
L_94d627: /* 94d627: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 94d62b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d62d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 94d631: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d633: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d635: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 94d639: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d63b: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 94d63f: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 94d645: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94d647: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94d64b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94d64d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94d64f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d651: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d654: jne 0x94d66e */
  if (!zf) goto L_94d66e;
L_94d656: /* 94d656: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d658: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 94d65c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d65e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94d662: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94d666: jmp 0x94d66e */
  goto L_94d66e;
L_94d668: /* 94d668: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d66a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d66c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94d66e: /* 94d66e: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94d672: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94d675: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 94d676: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 94d67a: jne 0x94d5e5 */
  if (!zf) goto L_94d5e5;
L_94d680: /* 94d680: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
L_94d684: /* 94d684: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94d686: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d688: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 94d68a: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 94d68e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d68f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94d691: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d693: jge 0x94d6bf */
  if ((sf == of)) goto L_94d6bf;
L_94d695: /* 94d695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94d697: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 94d69b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94d69d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 94d6a0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 94d6a3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 94d6a6: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 94d6aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d6ab: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 94d6ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d6af: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 94d6b5: mov eax, 1 */
  eax = 0x1u;
/* 94d6ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d6bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d6be: ret  */
  esp += 4; SPILL(); return;
L_94d6bf: /* 94d6bf: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 94d6c3: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 94d6c7: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 94d6c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d6ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d6cb: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 94d6d1: xor eax, eax */
  eax = 0;
/* 94d6d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d6d4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d6d7: ret  */
  esp += 4; SPILL(); return;
}

void f_94d6e0(void) {
  LOAD_REGS();
L_94d6e0: /* 94d6e0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94d6e3: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 94d6e7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 94d6e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94d6ea: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 94d6ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94d6ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94d6ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94d6f0: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 94d6f4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 94d6f7: mov eax, dword ptr [edx + ecx*4 + 4] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x4u));
/* 94d6fb: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 94d6fe: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 94d700: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 94d704: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d707: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* 94d70a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 94d70d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94d711: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d714: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 94d717: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d719: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 94d71b: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 94d71f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94d722: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 94d72a: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 94d72d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94d730: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94d732: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 94d735: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 94d739: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 94d73d: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 94d741: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 94d745: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94d747: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94d749: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d74b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94d74d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94d74f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d751: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 94d755: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d757: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d75b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94d75f: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d763: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 94d767: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d76b: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d76f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 94d773: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94d775: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 94d777: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94d77b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94d77e: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94d781: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 94d785: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94d788: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94d78b: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94d78f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d793: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d796: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94d79a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d79d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d79f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94d7a3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d7a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d7a7: fst dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0);
/* 94d7ab: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d7af: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 94d7b5: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94d7b9: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 94d7bd: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94d7c1: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 94d7c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d7c7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94d7cb: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94d7cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d7d1: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 94d7d5: fcom dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
/* 94d7db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d7dd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d7e0: jnp 0x94d7ea */
  if (!pf) goto L_94d7ea;
L_94d7e2: /* 94d7e2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_94d7ea: /* 94d7ea: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 94d7ee: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 94d7f0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 94d7f4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94d7f8: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 94d7fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94d7fd: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* 94d805: jne 0x94d9f2 */
  if (!zf) goto L_94d9f2;
L_94d80b: /* 94d80b: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94d80f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d812: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94d816: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d819: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d81b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94d81f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d821: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d823: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 94d827: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94d82b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d82d: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 94d82f: fld dword ptr [0xa214dc] */
  { double v = F32((uint32_t)(0xa214dcu)); FPUSH(v); }
/* 94d835: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 94d837: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 94d83b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d83d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d840: jp 0x94d88f */
  if (pf) goto L_94d88f;
L_94d842: /* 94d842: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d844: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 94d848: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94d84c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94d84d: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 94d851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94d852: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94d853: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94d854: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 94d858: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94d85c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94d85e: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 94d860: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94d862: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94d866: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94d868: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 94d86b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94d86e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94d872: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94d874: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 94d877: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 94d87b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94d87e: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 94d884: mov eax, 1 */
  eax = 0x1u;
/* 94d889: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d88b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94d88e: ret  */
  esp += 4; SPILL(); return;
L_94d88f: /* 94d88f: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94d893: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 94d895: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d897: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94d89a: jp 0x94d8a2 */
  if (pf) goto L_94d8a2;
L_94d89c: /* 94d89c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d89e: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
L_94d8a2: /* 94d8a2: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 94d8a5: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94d8a9: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 94d8ac: mov eax, ebx */
  eax = ebx;
/* 94d8ae: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d8b1: fmul dword ptr [eax + edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + edi + 0x8u)));
/* 94d8b5: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d8b7: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d8bb: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94d8be: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d8c0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d8c4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94d8c6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94d8ca: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94d8cd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d8cf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94d8d3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94d8d6: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94d8da: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94d8dc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d8de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94d8e0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d8e3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94d8e5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d8e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d8ea: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 94d8ec: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d8ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d8f0: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94d8f4: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94d8fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d8fc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d8ff: jne 0x94d945 */
  if (!zf) goto L_94d945;
L_94d901: /* 94d901: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 94d905: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d907: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 94d90b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d90d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d90f: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 94d913: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d915: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 94d919: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 94d91f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94d923: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94d925: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94d927: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d929: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d92c: jne 0x94d94b */
  if (!zf) goto L_94d94b;
L_94d92e: /* 94d92e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94d932: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d934: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94d938: mov ebp, ebx */
  ebp = ebx;
/* 94d93a: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 94d93e: mov ebx, 2 */
  ebx = 0x2u;
/* 94d943: jmp 0x94d94f */
  goto L_94d94f;
L_94d945: /* 94d945: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d947: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d949: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94d94b: /* 94d94b: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
L_94d94f: /* 94d94f: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 94d952: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d956: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94d959: fmul dword ptr [eax + edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + edi + 0x4u)));
/* 94d95d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94d95f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94d963: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94d966: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d968: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94d96c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 94d96f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 94d973: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94d975: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d977: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94d97b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94d97d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94d981: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 94d984: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94d986: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94d988: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 94d98b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94d98d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 94d990: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d992: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 94d994: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94d996: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d998: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 94d99c: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94d9a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d9a4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d9a7: jne 0x94d9fe */
  if (!zf) goto L_94d9fe;
L_94d9a9: /* 94d9a9: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 94d9ad: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d9af: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 94d9b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d9b5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94d9b7: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 94d9bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94d9bd: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 94d9c1: fsub dword ptr [0xa214dc] */
  ST0 = ST0 - (F32((uint32_t)(0xa214dcu)));
/* 94d9c7: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 94d9cb: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 94d9cf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94d9d1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94d9d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94d9d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94d9d8: jne 0x94da04 */
  if (!zf) goto L_94da04;
L_94d9da: /* 94d9da: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 94d9de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d9e0: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94d9e4: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 94d9e7: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 94d9eb: mov ebx, 2 */
  ebx = 0x2u;
/* 94d9f0: jmp 0x94da04 */
  goto L_94da04;
L_94d9f2: /* 94d9f2: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 94d9f6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94d9f8: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94d9fc: jmp 0x94da04 */
  goto L_94da04;
L_94d9fe: /* 94d9fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94da00: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94da02: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94da04: /* 94da04: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94da08: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94da0e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94da10: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94da13: jne 0x94da4a */
  if (!zf) goto L_94da4a;
L_94da15: /* 94da15: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94da19: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94da1b: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 94da1f: fst dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0);
/* 94da23: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 94da27: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94da29: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94da2d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94da2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94da31: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94da34: jne 0x94da8a */
  if (!zf) goto L_94da8a;
L_94da36: /* 94da36: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94da3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94da3c: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 94da40: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 94da44: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 94da48: jmp 0x94da88 */
  goto L_94da88;
L_94da4a: /* 94da4a: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94da4e: fcomp dword ptr [0xa216a8] */
  fpu_com(ST0, F32((uint32_t)(0xa216a8u)));
  FPOP();
/* 94da54: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94da56: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94da59: jp 0x94da8a */
  if (pf) goto L_94da8a;
L_94da5b: /* 94da5b: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 94da5f: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 94da63: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94da65: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 94da69: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94da6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94da6d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94da70: jp 0x94da8a */
  if (pf) goto L_94da8a;
L_94da72: /* 94da72: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 94da76: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94da78: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 94da7c: fchs  */
  ST0 = -ST0;
/* 94da7e: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94da82: fchs  */
  ST0 = -ST0;
/* 94da84: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
L_94da88: /* 94da88: xor ebx, ebx */
  ebx = 0;
L_94da8a: /* 94da8a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94da8e: fdiv dword ptr [esp + 0x48] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x48u)));
/* 94da92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94da94: jne 0x94dab6 */
  if (!zf) goto L_94dab6;
L_94da96: /* 94da96: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94da98: jl 0x94dac2 */
  if ((sf != of)) goto L_94dac2;
L_94da9a: /* 94da9a: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 94da9e: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 94daa2: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94daa4: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 94daa8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94daa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94daaa: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 94daac: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 94daae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94daaf: xor eax, eax */
  eax = 0;
/* 94dab1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94dab2: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94dab5: ret  */
  esp += 4; SPILL(); return;
L_94dab6: /* 94dab6: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 94daba: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 94dabe: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94dac0: jmp 0x94dad2 */
  goto L_94dad2;
L_94dac2: /* 94dac2: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 94dac6: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 94daca: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94dacc: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_94dad2: /* 94dad2: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 94dad6: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 94dada: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 94dadc: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 94dae0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94dae1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94dae2: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 94dae6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94dae7: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94daeb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94daec: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94daee: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 94daf0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94daf2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 94daf6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94daf8: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 94dafb: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94dafe: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94db02: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94db04: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 94db07: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94db0a: mov eax, 1 */
  eax = 0x1u;
/* 94db0f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94db11: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94db14: ret  */
  esp += 4; SPILL(); return;
}

void f_94db20(void) {
  LOAD_REGS();
L_94db20: /* 94db20: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94db23: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94db27: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94db29: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94db2d: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 94db30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94db31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94db32: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 94db34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94db35: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 94db39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94db3a: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 94db3d: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94db40: mov ebx, dword ptr [ecx + edi + 0xc] */
  ebx = R32((uint32_t)(ecx + edi + 0xcu));
/* 94db44: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94db46: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 94db4a: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 94db4d: mov eax, dword ptr [edx + eax*4 + 4] */
  eax = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 94db51: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94db54: fld dword ptr [eax + ebp] */
  { double v = F32((uint32_t)(eax + ebp)); FPUSH(v); }
/* 94db57: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94db59: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 94db5b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 94db5f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94db62: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 94db66: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 94db69: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94db6c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 94db6e: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 94db71: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 94db75: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 94db77: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94db79: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 94db7c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94db7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94db81: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 94db84: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94db87: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94db89: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 94db8d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94db90: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 94db92: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94db94: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 94db96: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94db99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94db9b: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 94db9f: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94dba3: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94dba9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94dbab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94dbae: jne 0x94dc17 */
  if (!zf) goto L_94dc17;
L_94dbb0: /* 94dbb0: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94dbb4: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94dbb8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94dbba: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 94dbbc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94dbbe: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94dbc2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94dbc5: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 94dbc8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94dbcb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 94dbcf: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94dbd2: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 94dbd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94dbd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94dbd7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94dbda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94dbdb: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 94dbdf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94dbe0: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 94dbe4: fsubr dword ptr [esp + 0x2c] */
  ST0 = (F32((uint32_t)(esp + 0x2cu))) - ST0;
/* 94dbe8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94dbea: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94dbec: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 94dbee: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94dbf0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94dbf2: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94dbf5: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 94dbf8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94dbfb: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94dbfe: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 94dc02: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 94dc05: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94dc08: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 94dc0e: mov eax, 1 */
  eax = 0x1u;
/* 94dc13: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94dc16: ret  */
  esp += 4; SPILL(); return;
L_94dc17: /* 94dc17: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94dc1b: fcomp dword ptr [0xa216a8] */
  fpu_com(ST0, F32((uint32_t)(0xa216a8u)));
  FPOP();
/* 94dc21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94dc23: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94dc26: jne 0x94dd2b */
  if (!zf) goto L_94dd2b;
L_94dc2c: /* 94dc2c: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
L_94dc34: /* 94dc34: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94dc38: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 94dc40: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_94dc46: /* 94dc46: cmp ebx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94dc49: jge 0x94dd88 */
  if ((sf == of)) goto L_94dd88;
L_94dc4f: /* 94dc4f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94dc53: lea edx, [ebx + ebx*4] */
  edx = (uint32_t)(ebx + ebx*4);
/* 94dc56: lea eax, [eax + edx*4 + 8] */
  eax = (uint32_t)(eax + edx*4 + 0x8u);
/* 94dc5a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94dc5e: mov edi, edi */
  edi = edi;
L_94dc60: /* 94dc60: mov edx, dword ptr [eax - 4] */
  edx = R32((uint32_t)(eax + 0xfffffffcu));
/* 94dc63: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 94dc65: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94dc68: fld dword ptr [eax + ebp] */
  { double v = F32((uint32_t)(eax + ebp)); FPUSH(v); }
/* 94dc6b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94dc6d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 94dc70: fsub dword ptr [edx + ebp] */
  ST0 = ST0 - (F32((uint32_t)(edx + ebp)));
/* 94dc73: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94dc75: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94dc78: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 94dc7b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94dc7e: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 94dc81: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94dc83: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94dc86: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 94dc88: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94dc8b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94dc8d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 94dc91: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94dc93: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94dc95: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94dc98: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94dc9a: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 94dc9e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94dca0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94dca3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94dca5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94dca7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94dca9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94dcab: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94dcae: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94dcb2: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94dcb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94dcb7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 94dcbb: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94dcbd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94dcbf: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 94dcc3: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94dcc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94dccb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94dcce: jnp 0x94dd6b */
  if (!pf) goto L_94dd6b;
L_94dcd4: /* 94dcd4: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94dcd6: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 94dcd8: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 94dcdb: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 94dcde: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 94dce1: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 94dce4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94dce6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94dce8: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 94dcec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94dcee: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94dcf0: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 94dcf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94dcf6: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 94dcfa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94dcfc: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94dd00: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94dd02: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94dd06: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94dd08: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94dd0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94dd0c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94dd0f: jne 0x94dd6d */
  if (!zf) goto L_94dd6d;
L_94dd11: /* 94dd11: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94dd13: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 94dd17: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94dd19: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 94dd21: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 94dd25: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 94dd29: jmp 0x94dd6d */
  goto L_94dd6d;
L_94dd2b: /* 94dd2b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94dd2f: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 94dd37: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 94dd3b: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 94dd3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94dd41: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94dd44: jp 0x94dc34 */
  if (pf) goto L_94dc34;
L_94dd4a: /* 94dd4a: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 94dd4e: mov dword ptr [esp + 0x20], 3 */
  W32((uint32_t)(esp + 0x20u), 0x3u);
/* 94dd56: fchs  */
  ST0 = -ST0;
/* 94dd58: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 94dd60: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 94dd64: fchs  */
  ST0 = -ST0;
/* 94dd66: jmp 0x94dc46 */
  goto L_94dc46;
L_94dd6b: /* 94dd6b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_94dd6d: /* 94dd6d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94dd71: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 94dd74: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 94dd75: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94dd78: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94dd7a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 94dd7e: jl 0x94dc60 */
  if ((sf != of)) goto L_94dc60;
L_94dd84: /* 94dd84: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
L_94dd88: /* 94dd88: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94dd8c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 94dd8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94dd90: jne 0x94ddb6 */
  if (!zf) goto L_94ddb6;
L_94dd92: /* 94dd92: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94dd96: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 94dd98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94dd9a: jl 0x94ddc2 */
  if ((sf != of)) goto L_94ddc2;
L_94dd9c: /* 94dd9c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 94dda0: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 94dda4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94dda5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 94dda7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94ddab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ddac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94ddad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 94ddaf: xor eax, eax */
  eax = 0;
/* 94ddb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ddb2: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ddb5: ret  */
  esp += 4; SPILL(); return;
L_94ddb6: /* 94ddb6: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 94ddba: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 94ddbe: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94ddc0: jmp 0x94ddcc */
  goto L_94ddcc;
L_94ddc2: /* 94ddc2: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 94ddc6: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
L_94ddcc: /* 94ddcc: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 94ddce: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 94ddd2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94ddd4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 94ddd6: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 94ddd8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94ddda: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94dddc: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 94dddf: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 94dde2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94dde5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 94dde8: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 94ddeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ddec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94dded: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94ddf0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94ddf1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94ddf5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ddf6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 94ddf8: fsubr dword ptr [esp + 0x2c] */
  ST0 = (F32((uint32_t)(esp + 0x2cu))) - ST0;
/* 94ddfc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94ddfe: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94de00: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 94de02: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94de04: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94de06: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94de09: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 94de0c: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94de0f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94de12: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 94de15: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94de18: mov eax, 1 */
  eax = 0x1u;
/* 94de1d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94de20: ret  */
  esp += 4; SPILL(); return;
}

void f_94de30(void) {
  LOAD_REGS();
L_94de30: /* 94de30: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 94de34: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 94de36: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94de3a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94de3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94de3f: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94de43: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94de49: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 94de4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94de4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94de4f: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 94de53: jle 0x94dee7 */
  if ((zf || sf != of)) goto L_94dee7;
L_94de59: /* 94de59: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 94de5c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94de5d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94de5e: mov ebx, eax */
  ebx = eax;
L_94de60: /* 94de60: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 94de62: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94de64: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94de67: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94de6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94de6c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 94de6f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94de72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94de74: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 94de78: fcomp dword ptr [0xa214dc] */
  fpu_com(ST0, F32((uint32_t)(0xa214dcu)));
  FPOP();
/* 94de7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94de80: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94de83: jnp 0x94dedb */
  if (!pf) goto L_94dedb;
L_94de85: /* 94de85: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 94de88: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 94de8b: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 94de8e: mov eax, dword ptr [ebp + eax*4 + 4] */
  eax = R32((uint32_t)(ebp + eax*4 + 0x4u));
/* 94de92: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 94de94: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94de97: fld dword ptr [eax + ebp] */
  { double v = F32((uint32_t)(eax + ebp)); FPUSH(v); }
/* 94de9a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94de9c: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 94de9e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 94dea1: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 94dea4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 94dea7: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 94deaa: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 94dead: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94deaf: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 94deb2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94deb4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94deb6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 94deb8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94deba: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 94debe: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94dec0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 94dec4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94dec6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 94dec8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94deca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94decd: jne 0x94dedb */
  if (!zf) goto L_94dedb;
L_94decf: /* 94decf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ded1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94ded3: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 94ded7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_94dedb: /* 94dedb: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94dede: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 94dedf: jne 0x94de60 */
  if (!zf) goto L_94de60;
L_94dee5: /* 94dee5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94dee6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_94dee7: /* 94dee7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94deeb: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94deed: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 94deef: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 94def3: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 94def5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 94def7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94def9: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 94defc: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 94deff: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 94df02: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94df04: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 94df07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94df08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94df09: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 94df0c: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 94df0f: mov eax, 1 */
  eax = 0x1u;
/* 94df14: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94df16: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 94df18: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 94df1a: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94df1c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94df1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94df20: ret  */
  esp += 4; SPILL(); return;
}

void f_94df30(void) {
  LOAD_REGS();
L_94df30: /* 94df30: mov eax, dword ptr [0xcfb090] */
  eax = R32((uint32_t)(0xcfb090u));
/* 94df35: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94df39: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 94df3d: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94df40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94df41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94df43: push 0xaf40d0 */
  { uint32_t v = 0xaf40d0u; esp -= 4; W32(esp, v); }
/* 94df48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94df4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94df4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94df4c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 94df4e: call 0x953480 */
  esp -= 4; W32(esp, 0x94df53u); SPILL(); f_953480(); if (g_unwind) return; RELOAD();
/* 94df53: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94df56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94df58: je 0x94df5d */
  if (zf) goto L_94df5d;
L_94df5a: /* 94df5a: xor eax, eax */
  eax = 0;
/* 94df5c: ret  */
  esp += 4; SPILL(); return;
L_94df5d: /* 94df5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94df5e: mov esi, dword ptr [0xcf8b4c] */
  esi = R32((uint32_t)(0xcf8b4cu));
/* 94df64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94df65: xor edi, edi */
  edi = 0;
/* 94df67: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94df69: je 0x94df8c */
  if (zf) goto L_94df8c;
L_94df6b: /* 94df6b: nop  */
/* 94df6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94df70: /* 94df70: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 94df73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94df75: je 0x94df8c */
  if (zf) goto L_94df8c;
L_94df77: /* 94df77: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 94df7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94df7b: call 0x94f340 */
  esp -= 4; W32(esp, 0x94df80u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94df80: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 94df83: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94df86: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94df88: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94df8a: jne 0x94df70 */
  if (!zf) goto L_94df70;
L_94df8c: /* 94df8c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94df90: mov ecx, dword ptr [0xcf8b80] */
  ecx = R32((uint32_t)(0xcf8b80u));
/* 94df96: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 94df99: mov edx, dword ptr [0xcf8b84] */
  edx = R32((uint32_t)(0xcf8b84u));
/* 94df9f: mov dword ptr [eax + 0x18], edi */
  W32((uint32_t)(eax + 0x18u), edi);
/* 94dfa2: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 94dfa5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94dfa6: mov dword ptr [0xcf2f10], eax */
  W32((uint32_t)(0xcf2f10u), eax);
/* 94dfab: mov eax, 1 */
  eax = 0x1u;
/* 94dfb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94dfb1: ret  */
  esp += 4; SPILL(); return;
}

void f_94dfc0(void) {
  LOAD_REGS();
L_94dfc0: /* 94dfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94dfc1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94dfc5: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 94dfc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94dfc9: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94dfcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94dfcd: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x94dfd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94dfd3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 94dfd6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 94dfd7: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94dfda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94dfdb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 94dfde: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x94dfe4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94dfe4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 94dfe6: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 94dfe9: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 94dfec: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 94dfef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94dff0: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x94dff6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94dff6: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 94dff9: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 94dffc: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94dfff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e000: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x94e006u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94e006: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 94e009: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e00a: ret  */
  esp += 4; SPILL(); return;
}

void f_94e010(void) {
  LOAD_REGS();
L_94e010: /* 94e010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e011: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94e015: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94e018: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e019: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94e01fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94e01f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94e021: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e022: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94e028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94e028: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 94e02b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e02c: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94e032u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94e032: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 94e035: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e036: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94e03cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94e03c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e03d: ret  */
  esp += 4; SPILL(); return;
}

void f_94e040(void) {
  LOAD_REGS();
L_94e040: /* 94e040: mov eax, dword ptr [0xcf2f10] */
  eax = R32((uint32_t)(0xcf2f10u));
/* 94e045: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94e048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e049: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 94e04d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e04f: je 0x94e058 */
  if (zf) goto L_94e058;
L_94e051: /* 94e051: xor eax, eax */
  eax = 0;
/* 94e053: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e054: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e057: ret  */
  esp += 4; SPILL(); return;
L_94e058: /* 94e058: mov ecx, dword ptr [0xcf8b74] */
  ecx = R32((uint32_t)(0xcf8b74u));
/* 94e05e: xor eax, eax */
  eax = 0;
/* 94e060: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e062: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e063: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e064: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 94e068: je 0x94e0a5 */
  if (zf) goto L_94e0a5;
L_94e06a: /* 94e06a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_94e070: /* 94e070: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e073: je 0x94e0a5 */
  if (zf) goto L_94e0a5;
L_94e075: /* 94e075: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 94e078: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 94e07a: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 94e07c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e07f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94e081: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 94e083: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 94e086: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 94e089: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 94e08c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 94e08f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e093: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 94e096: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e09a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94e09b: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 94e09f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 94e0a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e0a3: jne 0x94e070 */
  if (!zf) goto L_94e070;
L_94e0a5: /* 94e0a5: mov ecx, dword ptr [0xcf8b4c] */
  ecx = R32((uint32_t)(0xcf8b4cu));
/* 94e0ab: xor eax, eax */
  eax = 0;
/* 94e0ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e0af: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94e0b3: je 0x94e0ee */
  if (zf) goto L_94e0ee;
L_94e0b5: /* 94e0b5: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 94e0b8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e0ba: je 0x94e0ee */
  if (zf) goto L_94e0ee;
L_94e0bc: /* 94e0bc: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 94e0bf: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 94e0c2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 94e0c4: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e0c7: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94e0c9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 94e0cb: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 94e0ce: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 94e0d1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 94e0d4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 94e0d7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94e0db: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 94e0de: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 94e0e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94e0e3: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94e0e7: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 94e0ea: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e0ec: jne 0x94e0b5 */
  if (!zf) goto L_94e0b5;
L_94e0ee: /* 94e0ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e0ef: mov ebp, dword ptr [0xcf8b4c] */
  ebp = R32((uint32_t)(0xcf8b4cu));
/* 94e0f5: xor eax, eax */
  eax = 0;
/* 94e0f7: xor ebx, ebx */
  ebx = 0;
/* 94e0f9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e0fb: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 94e0ff: je 0x94e22a */
  if (zf) goto L_94e22a;
L_94e105: /* 94e105: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 94e108: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e10a: je 0x94e22a */
  if (zf) goto L_94e22a;
L_94e110: /* 94e110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e111: call 0x95a520 */
  esp -= 4; W32(esp, 0x94e116u); SPILL(); f_95a520(); if (g_unwind) return; RELOAD();
/* 94e116: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 94e11a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 94e11d: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94e120: mov dword ptr [ecx + edx + 0xc], ebx */
  W32((uint32_t)(ecx + edx + 0xcu), ebx);
/* 94e124: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 94e127: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e12a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e12c: je 0x94e14c */
  if (zf) goto L_94e14c;
L_94e12e: /* 94e12e: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 94e131: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94e133: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e135: je 0x94e14c */
  if (zf) goto L_94e14c;
L_94e137: /* 94e137: mov edi, dword ptr [eax + 0xc] */
  edi = R32((uint32_t)(eax + 0xcu));
/* 94e13a: and edi, 0xfeffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfeffffffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 94e140: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94e143: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 94e146: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94e148: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e14a: jne 0x94e137 */
  if (!zf) goto L_94e137;
L_94e14c: /* 94e14c: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 94e14f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e150: call 0x94f340 */
  esp -= 4; W32(esp, 0x94e155u); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94e155: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 94e158: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94e15a: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94e15e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 94e161: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e166: je 0x94e210 */
  if (zf) goto L_94e210;
L_94e16c: /* 94e16c: lea edi, [ebx + ebx*4] */
  edi = (uint32_t)(ebx + ebx*4);
/* 94e16f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_94e172: /* 94e172: test byte ptr [eax + 0xf], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xfu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 94e176: jne 0x94e210 */
  if (!zf) goto L_94e210;
L_94e17c: /* 94e17c: or dword ptr [eax + 0xc], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 94e183: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94e185: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 94e188: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 94e18b: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 94e18e: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 94e191: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 94e192: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 94e196: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 94e199: sub edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 94e19c: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e19e: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 94e1a2: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 94e1a5: jne 0x94e1d2 */
  if (!zf) goto L_94e1d2;
L_94e1a7: /* 94e1a7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 94e1aa: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 94e1ad: mov dword ptr [edi + ebx + 0xc], ecx */
  W32((uint32_t)(edi + ebx + 0xcu), ecx);
/* 94e1b1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 94e1b4: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 94e1b7: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 94e1ba: mov dword ptr [edi + ebx + 0x10], ecx */
  W32((uint32_t)(edi + ebx + 0x10u), ecx);
/* 94e1be: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 94e1c1: mov dword ptr [edi + ecx + 4], edx */
  W32((uint32_t)(edi + ecx + 0x4u), edx);
/* 94e1c5: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 94e1c8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94e1cc: mov dword ptr [edi + edx + 8], ecx */
  W32((uint32_t)(edi + edx + 0x8u), ecx);
/* 94e1d0: jmp 0x94e1f8 */
  goto L_94e1f8;
L_94e1d2: /* 94e1d2: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 94e1d5: mov dword ptr [edi + ebx + 0xc], ecx */
  W32((uint32_t)(edi + ebx + 0xcu), ecx);
/* 94e1d9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 94e1dc: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 94e1df: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 94e1e2: mov dword ptr [edi + ebx + 0x10], ecx */
  W32((uint32_t)(edi + ebx + 0x10u), ecx);
/* 94e1e6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 94e1e9: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 94e1ed: mov dword ptr [edi + ecx + 4], ebx */
  W32((uint32_t)(edi + ecx + 0x4u), ebx);
/* 94e1f1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 94e1f4: mov dword ptr [edi + ecx + 8], edx */
  W32((uint32_t)(edi + ecx + 0x8u), edx);
L_94e1f8: /* 94e1f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94e1fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e1fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e1fc: call 0x957ce0 */
  esp -= 4; W32(esp, 0x94e201u); SPILL(); f_957ce0(); if (g_unwind) return; RELOAD();
/* 94e201: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 94e205: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e20a: jne 0x94e172 */
  if (!zf) goto L_94e172;
L_94e210: /* 94e210: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 94e214: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 94e218: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94e219: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 94e21d: mov ebp, dword ptr [ebp + 0x1c] */
  ebp = R32((uint32_t)(ebp + 0x1cu));
/* 94e220: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94e222: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e224: jne 0x94e105 */
  if (!zf) goto L_94e105;
L_94e22a: /* 94e22a: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 94e22d: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e230: mov dword ptr [eax + edx + 0xc], ebx */
  W32((uint32_t)(eax + edx + 0xcu), ebx);
/* 94e234: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 94e237: xor eax, eax */
  eax = 0;
/* 94e239: xor edi, edi */
  edi = 0;
/* 94e23b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94e23d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 94e241: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94e242: jle 0x94e2bf */
  if ((zf || sf != of)) goto L_94e2bf;
L_94e248: /* 94e248: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94e24a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e24d: mov dword ptr [eax + ecx + 0xc], edi */
  W32((uint32_t)(eax + ecx + 0xcu), edi);
/* 94e251: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 94e255: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e256: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94e258: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 94e25a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e25b: call 0x94e320 */
  esp -= 4; W32(esp, 0x94e260u); SPILL(); f_94e320(); if (g_unwind) return; RELOAD();
/* 94e260: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 94e263: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 94e266: mov eax, dword ptr [ecx + eax*4 + 0xc] */
  eax = R32((uint32_t)(ecx + eax*4 + 0xcu));
/* 94e26a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e26d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 94e271: mov ebx, eax */
  ebx = eax;
L_94e273: /* 94e273: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 94e277: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e278: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94e27a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e27b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e27c: call 0x94e320 */
  esp -= 4; W32(esp, 0x94e281u); SPILL(); f_94e320(); if (g_unwind) return; RELOAD();
/* 94e281: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 94e285: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 94e288: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e289: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 94e28c: mov eax, dword ptr [ecx + eax*4 + 0xc] */
  eax = R32((uint32_t)(ecx + eax*4 + 0xcu));
/* 94e290: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94e292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e293: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e294: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 94e298: call 0x94e320 */
  esp -= 4; W32(esp, 0x94e29du); SPILL(); f_94e320(); if (g_unwind) return; RELOAD();
/* 94e29d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 94e2a0: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 94e2a3: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 94e2a7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e2aa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94e2ab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e2ad: jne 0x94e273 */
  if (!zf) goto L_94e273;
L_94e2af: /* 94e2af: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e2b3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 94e2b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94e2b7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94e2b9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 94e2bd: jl 0x94e248 */
  if ((sf != of)) goto L_94e248;
L_94e2bf: /* 94e2bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94e2c1: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e2c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e2c5: mov dword ptr [eax + edx + 0xc], edi */
  W32((uint32_t)(eax + edx + 0xcu), edi);
/* 94e2c9: call 0x94e380 */
  esp -= 4; W32(esp, 0x94e2ceu); SPILL(); f_94e380(); if (g_unwind) return; RELOAD();
/* 94e2ce: xor esi, esi */
  esi = 0;
/* 94e2d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 94e2d2: mov dword ptr [0xcf2f10], esi */
  W32((uint32_t)(0xcf2f10u), esi);
/* 94e2d8: call 0x94fb90 */
  esp -= 4; W32(esp, 0x94e2ddu); SPILL(); f_94fb90(); if (g_unwind) return; RELOAD();
/* 94e2dd: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 94e2e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e2e2: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 94e2e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e2e7: call 0x953ae0 */
  esp -= 4; W32(esp, 0x94e2ecu); SPILL(); f_953ae0(); if (g_unwind) return; RELOAD();
/* 94e2ec: mov eax, dword ptr [0xcf2f14] */
  eax = R32((uint32_t)(0xcf2f14u));
/* 94e2f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e2f4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e2f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e2f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94e2f8: je 0x94e307 */
  if (zf) goto L_94e307;
L_94e2fa: /* 94e2fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e2fb: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x94e301u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 94e301: mov dword ptr [0xcf2f14], esi */
  W32((uint32_t)(0xcf2f14u), esi);
L_94e307: /* 94e307: mov eax, 1 */
  eax = 0x1u;
/* 94e30c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e30d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e310: ret  */
  esp += 4; SPILL(); return;
}

void f_94e320(void) {
  LOAD_REGS();
L_94e320: /* 94e320: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e324: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e325: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e326: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e327: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 94e32b: xor eax, eax */
  eax = 0;
/* 94e32d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94e32f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e330: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* 94e333: jl 0x94e344 */
  if ((sf != of)) goto L_94e344;
L_94e335: /* 94e335: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 94e338: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94e33b: mov edi, dword ptr [ecx + eax + 0x1c] */
  edi = R32((uint32_t)(ecx + eax + 0x1cu));
/* 94e33f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94e341: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
L_94e344: /* 94e344: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94e346: jge 0x94e373 */
  if ((sf == of)) goto L_94e373;
L_94e348: /* 94e348: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 94e34c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 94e350: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 94e353: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
L_94e356: /* 94e356: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e358: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 94e35b: je 0x94e363 */
  if (zf) goto L_94e363;
L_94e35d: /* 94e35d: mov edx, dword ptr [edx + ecx + 8] */
  edx = R32((uint32_t)(edx + ecx + 0x8u));
/* 94e361: jmp 0x94e367 */
  goto L_94e367;
L_94e363: /* 94e363: mov edx, dword ptr [edx + ecx + 4] */
  edx = R32((uint32_t)(edx + ecx + 0x4u));
L_94e367: /* 94e367: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e369: je 0x94e373 */
  if (zf) goto L_94e373;
L_94e36b: /* 94e36b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94e36c: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94e36f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94e371: jl 0x94e356 */
  if ((sf != of)) goto L_94e356;
L_94e373: /* 94e373: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e374: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e375: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94e376: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94e377: ret  */
  esp += 4; SPILL(); return;
}

void f_94e380(void) {
  LOAD_REGS();
L_94e380: /* 94e380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e381: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e382: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 94e386: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 94e389: xor ebp, ebp */
  ebp = 0;
/* 94e38b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94e38d: jle 0x94e3fe */
  if ((zf || sf != of)) goto L_94e3fe;
L_94e38f: /* 94e38f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e391: xor ebx, ebx */
  ebx = 0;
L_94e393: /* 94e393: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 94e396: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 94e398: mov ecx, dword ptr [edx + ebx + 4] */
  ecx = R32((uint32_t)(edx + ebx + 0x4u));
/* 94e39c: mov eax, dword ptr [edx + ebx + 8] */
  eax = R32((uint32_t)(edx + ebx + 0x8u));
/* 94e3a0: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94e3a2: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94e3a5: fld dword ptr [ecx + esi] */
  { double v = F32((uint32_t)(ecx + esi)); FPUSH(v); }
/* 94e3a8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94e3aa: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e3ad: fsub dword ptr [eax + esi] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi)));
/* 94e3b0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94e3b2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94e3b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 94e3b8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94e3bb: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 94e3be: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94e3c0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 94e3c2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 94e3c4: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94e3c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94e3c8: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 94e3ca: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 94e3cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 94e3ce: fsqrt  */
  ST0 = sqrt(ST0);
/* 94e3d0: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 94e3d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94e3d4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94e3d6: fst dword ptr [edx] */
  WF32((uint32_t)(edx), ST0);
/* 94e3d8: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 94e3de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 94e3e0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 94e3e3: jnp 0x94e3ef */
  if (!pf) goto L_94e3ef;
L_94e3e5: /* 94e3e5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 94e3eb: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 94e3ed: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
L_94e3ef: /* 94e3ef: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 94e3f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94e3f4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 94e3f5: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94e3f8: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94e3fa: jl 0x94e393 */
  if ((sf != of)) goto L_94e393;
L_94e3fc: /* 94e3fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e3fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_94e3fe: /* 94e3fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e3ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94e400: ret  */
  esp += 4; SPILL(); return;
}

void f_94e410(void) {
  LOAD_REGS();
L_94e410: /* 94e410: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e414: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e418: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e419: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94e41d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e41e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e41f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e420: call 0x94df30 */
  esp -= 4; W32(esp, 0x94e425u); SPILL(); f_94df30(); if (g_unwind) return; RELOAD();
/* 94e425: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e428: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e42a: jne 0x94e42e */
  if (!zf) goto L_94e42e;
L_94e42c: /* 94e42c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e42d: ret  */
  esp += 4; SPILL(); return;
L_94e42e: /* 94e42e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e42f: call 0x94dfc0 */
  esp -= 4; W32(esp, 0x94e434u); SPILL(); f_94dfc0(); if (g_unwind) return; RELOAD();
/* 94e434: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e435: call 0x94e040 */
  esp -= 4; W32(esp, 0x94e43au); SPILL(); f_94e040(); if (g_unwind) return; RELOAD();
/* 94e43a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e43d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e43e: ret  */
  esp += 4; SPILL(); return;
}

void f_94e440(void) {
  LOAD_REGS();
L_94e440: /* 94e440: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 94e443: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 94e447: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e449: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94e44d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e44e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e44f: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 94e451: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 94e453: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 94e456: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 94e459: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 94e45c: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 94e45f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e461: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 94e465: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94e468: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e469: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 94e46b: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 94e46d: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 94e470: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 94e473: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 94e476: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 94e479: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e47b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 94e47f: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 94e481: mov dword ptr [edx + 0x20], ebx */
  W32((uint32_t)(edx + 0x20u), ebx);
/* 94e484: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 94e487: mov dword ptr [edx + 0x24], ebx */
  W32((uint32_t)(edx + 0x24u), ebx);
/* 94e48a: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 94e48d: mov dword ptr [edx + 0x28], ebx */
  W32((uint32_t)(edx + 0x28u), ebx);
/* 94e490: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94e492: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 94e494: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94e497: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94e49a: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 94e49d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94e4a0: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 94e4a3: mov esi, 1 */
  esi = 0x1u;
/* 94e4a8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 94e4aa: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 94e4ac: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 94e4b0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 94e4b3: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 94e4b6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 94e4ba: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 94e4bd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 94e4c0: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 94e4c3: mov edi, 3 */
  edi = 0x3u;
/* 94e4c8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 94e4ca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94e4cc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94e4d0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94e4d2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94e4d4: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 94e4d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94e4d8: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 94e4dc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 94e4de: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 94e4e0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94e4e2: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 94e4e5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 94e4e9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94e4eb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 94e4ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 94e4f1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 94e4f3: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 94e4f6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 94e4f9: xor ecx, ecx */
  ecx = 0;
/* 94e4fb: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 94e4fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94e500: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 94e503: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 94e505: mov dword ptr [edx + 0x1c], edi */
  W32((uint32_t)(edx + 0x1cu), edi);
/* 94e508: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 94e50b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 94e50e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 94e511: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 94e514: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 94e517: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 94e51a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 94e51d: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* 94e520: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 94e523: mov dword ptr [edx + 0x18], esi */
  W32((uint32_t)(edx + 0x18u), esi);
/* 94e526: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94e529: mov edx, 2 */
  edx = 0x2u;
/* 94e52e: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 94e531: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94e534: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 94e537: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94e53a: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* 94e53d: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94e540: mov dword ptr [ebx + 0x2c], edx */
  W32((uint32_t)(ebx + 0x2cu), edx);
/* 94e543: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94e546: mov dword ptr [ebx + 0x30], ecx */
  W32((uint32_t)(ebx + 0x30u), ecx);
/* 94e549: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94e54c: mov dword ptr [ebx + 0x34], ecx */
  W32((uint32_t)(ebx + 0x34u), ecx);
/* 94e54f: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* 94e552: mov dword ptr [ebx + 0x38], ecx */
  W32((uint32_t)(ebx + 0x38u), ecx);
/* 94e555: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 94e558: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 94e55a: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 94e55d: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 94e560: mov ebx, dword ptr [eax + 0xc] */
  ebx = R32((uint32_t)(eax + 0xcu));
/* 94e563: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 94e566: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 94e568: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 94e56b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94e56d: mov dword ptr [ecx + 0x1c], esi */
  W32((uint32_t)(ecx + 0x1cu), esi);
/* 94e570: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94e572: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 94e575: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e577: mov dword ptr [edx + 0x3c], edi */
  W32((uint32_t)(edx + 0x3cu), edi);
/* 94e57a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e57b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e57c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94e57d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e580: ret  */
  esp += 4; SPILL(); return;
}

void f_94e590(void) {
  LOAD_REGS();
L_94e590: /* 94e590: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 94e594: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94e598: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 94e59b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e59e: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 94e5a1: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 94e5a4: sub eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94e5a7: ret  */
  esp += 4; SPILL(); return;
}

void f_94e5b0(void) {
  LOAD_REGS();
L_94e5b0: /* 94e5b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 94e5b4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94e5b8: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 94e5bb: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 94e5be: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e5c1: mov eax, dword ptr [edx + eax + 0xc] */
  eax = R32((uint32_t)(edx + eax + 0xcu));
/* 94e5c5: add eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94e5c9: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 94e5cc: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 94e5cf: ret  */
  esp += 4; SPILL(); return;
}

void f_94e5d0(void) {
  LOAD_REGS();
L_94e5d0: /* 94e5d0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e5d4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e5d8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94e5dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e5dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e5de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e5df: call 0x94e5b0 */
  esp -= 4; W32(esp, 0x94e5e4u); SPILL(); f_94e5b0(); if (g_unwind) return; RELOAD();
/* 94e5e4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 94e5e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e5ea: ret  */
  esp += 4; SPILL(); return;
}

void f_94e5f0(void) {
  LOAD_REGS();
L_94e5f0: /* 94e5f0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e5f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e5f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e5f9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94e5fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e5fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e5ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e600: call 0x94e5d0 */
  esp -= 4; W32(esp, 0x94e605u); SPILL(); f_94e5d0(); if (g_unwind) return; RELOAD();
/* 94e605: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94e607: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e60a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e60d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94e60f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e610: ret  */
  esp += 4; SPILL(); return;
}

void f_94e620(void) {
  LOAD_REGS();
L_94e620: /* 94e620: jmp 0x94e5f0 */
  SPILL(); f_94e5f0(); return;
}

void f_94e630(void) {
  LOAD_REGS();
L_94e630: /* 94e630: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 94e634: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 94e638: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94e63a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 94e63d: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* 94e640: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 94e643: sub eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94e646: ret  */
  esp += 4; SPILL(); return;
}

void f_94e650(void) {
  LOAD_REGS();
L_94e650: /* 94e650: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94e654: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e658: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e65a: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 94e65d: mov ecx, dword ptr [ecx + edx + 0xc] */
  ecx = R32((uint32_t)(ecx + edx + 0xcu));
/* 94e661: add ecx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94e665: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 94e668: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 94e66b: ret  */
  esp += 4; SPILL(); return;
}

void f_94e670(void) {
  LOAD_REGS();
L_94e670: /* 94e670: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e674: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e679: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94e67d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e67e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e67f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e680: call 0x94e650 */
  esp -= 4; W32(esp, 0x94e685u); SPILL(); f_94e650(); if (g_unwind) return; RELOAD();
/* 94e685: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 94e688: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 94e68b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e68e: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 94e691: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e692: ret  */
  esp += 4; SPILL(); return;
}

void f_94e6a0(void) {
  LOAD_REGS();
L_94e6a0: /* 94e6a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e6a4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e6a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e6a9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94e6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e6ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e6af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e6b0: call 0x94e650 */
  esp -= 4; W32(esp, 0x94e6b5u); SPILL(); f_94e650(); if (g_unwind) return; RELOAD();
/* 94e6b5: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 94e6b8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 94e6bb: mov eax, dword ptr [eax + edx*4 + 8] */
  eax = R32((uint32_t)(eax + edx*4 + 0x8u));
/* 94e6bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e6c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e6c3: ret  */
  esp += 4; SPILL(); return;
}

void f_94e6d0(void) {
  LOAD_REGS();
L_94e6d0: /* 94e6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e6d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e6d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 94e6d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e6d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e6d8: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 94e6db: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e6dd: je 0x94e6ea */
  if (zf) goto L_94e6ea;
L_94e6df: /* 94e6df: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94e6e1: lea edi, [edi + eax*4 + 4] */
  edi = (uint32_t)(edi + eax*4 + 0x4u);
/* 94e6e5: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e6e8: jne 0x94e6fc */
  if (!zf) goto L_94e6fc;
L_94e6ea: /* 94e6ea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e6eb: call 0x94ef40 */
  esp -= 4; W32(esp, 0x94e6f0u); SPILL(); f_94ef40(); if (g_unwind) return; RELOAD();
/* 94e6f0: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94e6f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94e6f5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e6f8: lea edi, [eax + ecx*4 + 4] */
  edi = (uint32_t)(eax + ecx*4 + 0x4u);
L_94e6fc: /* 94e6fc: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 94e6fe: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 94e702: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 94e703: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94e705: jl 0x94e70b */
  if ((sf != of)) goto L_94e70b;
L_94e707: /* 94e707: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94e709: jle 0x94e740 */
  if ((zf || sf != of)) goto L_94e740;
L_94e70b: /* 94e70b: mov edx, dword ptr [0xcf2f4c] */
  edx = R32((uint32_t)(0xcf2f4cu));
/* 94e711: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e712: push 0xaf40d8 */
  { uint32_t v = 0xaf40d8u; esp -= 4; W32(esp, v); }
/* 94e717: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e718: call 0x953470 */
  esp -= 4; W32(esp, 0x94e71du); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94e71d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94e720: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94e726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e727: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 94e72c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e72d: call 0x94f230 */
  esp -= 4; W32(esp, 0x94e732u); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94e732: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94e734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94e736: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94e738: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94e73du); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94e73d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94e740: /* 94e740: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 94e742: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 94e745: lea eax, [edx + esi*4 + 4] */
  eax = (uint32_t)(edx + esi*4 + 0x4u);
/* 94e749: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 94e74b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  esi = r;
  }
/* 94e74c: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 94e74f: mov edx, esi */
  edx = esi;
/* 94e751: je 0x94e76b */
  if (zf) goto L_94e76b;
L_94e753: /* 94e753: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 94e755: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 94e757: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 94e75a: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94e75d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 94e75e: jne 0x94e753 */
  if (!zf) goto L_94e753;
L_94e760: /* 94e760: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 94e764: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e765: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e766: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94e767: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 94e769: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94e76a: ret  */
  esp += 4; SPILL(); return;
L_94e76b: /* 94e76b: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 94e76f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e771: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94e772: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94e774: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94e775: ret  */
  esp += 4; SPILL(); return;
}

void f_94e780(void) {
  LOAD_REGS();
L_94e780: /* 94e780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e781: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 94e785: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e786: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 94e78a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94e78c: xor edx, edx */
  edx = 0;
/* 94e78e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e790: je 0x94e7be */
  if (zf) goto L_94e7be;
L_94e792: /* 94e792: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 94e795: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94e797: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e799: je 0x94e7be */
  if (zf) goto L_94e7be;
L_94e79b: /* 94e79b: nop  */
/* 94e79c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94e7a0: /* 94e7a0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94e7a3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 94e7a5: jae 0x94e7bc */
  if (!cf) goto L_94e7bc;
L_94e7a7: /* 94e7a7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94e7a9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 94e7aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e7ac: jne 0x94e7a0 */
  if (!zf) goto L_94e7a0;
L_94e7ae: /* 94e7ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e7af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e7b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e7b1: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x94e7b6u); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 94e7b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e7b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e7ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e7bb: ret  */
  esp += 4; SPILL(); return;
L_94e7bc: /* 94e7bc: je 0x94e7c9 */
  if (zf) goto L_94e7c9;
L_94e7be: /* 94e7be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e7bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e7c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e7c1: call 0x94e6d0 */
  esp -= 4; W32(esp, 0x94e7c6u); SPILL(); f_94e6d0(); if (g_unwind) return; RELOAD();
/* 94e7c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94e7c9: /* 94e7c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e7ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e7cb: ret  */
  esp += 4; SPILL(); return;
}

void f_94e7d0(void) {
  LOAD_REGS();
L_94e7d0: /* 94e7d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e7d1: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 94e7d5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e7d7: je 0x94e814 */
  if (zf) goto L_94e814;
L_94e7d9: /* 94e7d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e7da: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 94e7de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94e7e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e7e2: je 0x94e7f2 */
  if (zf) goto L_94e7f2;
L_94e7e4: /* 94e7e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94e7e6: mov edx, dword ptr [eax + ecx*4 + 4] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x4u));
/* 94e7ea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e7ec: lea ecx, [eax + ecx*4 + 4] */
  ecx = (uint32_t)(eax + ecx*4 + 0x4u);
/* 94e7f0: jne 0x94e803 */
  if (!zf) goto L_94e803;
L_94e7f2: /* 94e7f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e7f3: call 0x94ef40 */
  esp -= 4; W32(esp, 0x94e7f8u); SPILL(); f_94ef40(); if (g_unwind) return; RELOAD();
/* 94e7f8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94e7fa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e7fc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e7ff: lea ecx, [eax + edx*4 + 4] */
  ecx = (uint32_t)(eax + edx*4 + 0x4u);
L_94e803: /* 94e803: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94e805: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 94e808: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 94e80a: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 94e80c: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 94e813: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_94e814: /* 94e814: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e815: ret  */
  esp += 4; SPILL(); return;
}

void f_94e820(void) {
  LOAD_REGS();
L_94e820: /* 94e820: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94e824: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e826: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e828: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e829: je 0x94e8bb */
  if (zf) goto L_94e8bb;
L_94e82f: /* 94e82f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94e831: mov esi, dword ptr [ecx + eax*4 + 4] */
  esi = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 94e835: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e837: je 0x94e83c */
  if (zf) goto L_94e83c;
L_94e839: /* 94e839: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 94e83a: jmp 0x94e83e */
  goto L_94e83e;
L_94e83c: /* 94e83c: mov esi, eax */
  esi = eax;
L_94e83e: /* 94e83e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 94e842: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e845: jne 0x94e852 */
  if (!zf) goto L_94e852;
L_94e847: /* 94e847: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e848: call 0x94f020 */
  esp -= 4; W32(esp, 0x94e84du); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 94e84d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e850: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_94e852: /* 94e852: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94e854: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e856: mov ebx, dword ptr [eax + edx*4 + 4] */
  ebx = R32((uint32_t)(eax + edx*4 + 0x4u));
/* 94e85a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e85c: lea ecx, [eax + edx*4 + 4] */
  ecx = (uint32_t)(eax + edx*4 + 0x4u);
/* 94e860: jne 0x94e866 */
  if (!zf) goto L_94e866;
L_94e862: /* 94e862: mov ebx, edx */
  ebx = edx;
/* 94e864: jmp 0x94e867 */
  goto L_94e867;
L_94e866: /* 94e866: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_94e867: /* 94e867: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94e868: lea ebp, [ebx + esi] */
  ebp = (uint32_t)(ebx + esi);
/* 94e86b: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94e86d: jle 0x94e891 */
  if ((zf || sf != of)) goto L_94e891;
L_94e86f: /* 94e86f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e871: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 94e875: call 0x94ea00 */
  esp -= 4; W32(esp, 0x94e87au); SPILL(); f_94ea00(); if (g_unwind) return; RELOAD();
/* 94e87a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 94e87c: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 94e880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e881: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94e886u); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94e886: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94e888: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94e88a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e88d: lea ecx, [eax + ecx*4 + 4] */
  ecx = (uint32_t)(eax + ecx*4 + 0x4u);
L_94e891: /* 94e891: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 94e892: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94e894: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 94e896: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94e897: jle 0x94e8bb */
  if ((zf || sf != of)) goto L_94e8bb;
L_94e899: /* 94e899: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 94e89d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94e89f: lea ecx, [esi*4 + 4] */
  ecx = (uint32_t)(esi*4 + 0x4u);
/* 94e8a6: lea esi, [edx + 4] */
  esi = (uint32_t)(edx + 0x4u);
/* 94e8a9: mov edx, ecx */
  edx = ecx;
/* 94e8ab: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94e8ae: lea edi, [eax + ebx*4 + 4] */
  edi = (uint32_t)(eax + ebx*4 + 0x4u);
/* 94e8b2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94e8b4: mov ecx, edx */
  ecx = edx;
/* 94e8b6: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94e8b9: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
L_94e8bb: /* 94e8bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e8bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e8bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94e8be: ret  */
  esp += 4; SPILL(); return;
}

void f_94e8c0(void) {
  LOAD_REGS();
L_94e8c0: /* 94e8c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e8c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94e8c5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94e8c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e8c9: je 0x94e8d6 */
  if (zf) goto L_94e8d6;
L_94e8cb: /* 94e8cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94e8cd: lea edx, [eax + ecx*4 + 4] */
  edx = (uint32_t)(eax + ecx*4 + 0x4u);
/* 94e8d1: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94e8d4: jne 0x94e8e7 */
  if (!zf) goto L_94e8e7;
L_94e8d6: /* 94e8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e8d7: call 0x94ef40 */
  esp -= 4; W32(esp, 0x94e8dcu); SPILL(); f_94ef40(); if (g_unwind) return; RELOAD();
/* 94e8dc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94e8de: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94e8e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e8e3: lea edx, [eax + edx*4 + 4] */
  edx = (uint32_t)(eax + edx*4 + 0x4u);
L_94e8e7: /* 94e8e7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 94e8e9: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 94e8ec: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 94e8ee: mov esi, dword ptr [eax + ecx*4 - 4] */
  esi = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 94e8f2: lea edx, [eax + ecx*4 - 4] */
  edx = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* 94e8f6: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 94e8f9: mov dword ptr [eax + ecx*4 + 4], 0 */
  W32((uint32_t)(eax + ecx*4 + 0x4u), 0x0u);
/* 94e901: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94e905: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 94e907: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e908: ret  */
  esp += 4; SPILL(); return;
}

void f_94e910(void) {
  LOAD_REGS();
L_94e910: /* 94e910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e911: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94e915: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e917: je 0x94e9a9 */
  if (zf) goto L_94e9a9;
L_94e91d: /* 94e91d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94e91f: mov eax, dword ptr [esi + ecx*4 + 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x4u));
/* 94e923: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e925: je 0x94e92a */
  if (zf) goto L_94e92a;
L_94e927: /* 94e927: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 94e928: jmp 0x94e92c */
  goto L_94e92c;
L_94e92a: /* 94e92a: mov eax, ecx */
  eax = ecx;
L_94e92c: /* 94e92c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94e92e: jg 0x94e957 */
  if ((!zf && sf == of)) goto L_94e957;
L_94e930: /* 94e930: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e932: je 0x94e957 */
  if (zf) goto L_94e957;
L_94e934: /* 94e934: mov edx, dword ptr [esi + eax*4 + 4] */
  edx = R32((uint32_t)(esi + eax*4 + 0x4u));
/* 94e938: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e93a: je 0x94e9a9 */
  if (zf) goto L_94e9a9;
L_94e93c: /* 94e93c: mov edx, dword ptr [0xcf2f4c] */
  edx = R32((uint32_t)(0xcf2f4cu));
/* 94e942: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 94e943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e944: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 94e948: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e949: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94e94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e94e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e94f: push 0xaf4188 */
  { uint32_t v = 0xaf4188u; esp -= 4; W32(esp, v); }
/* 94e954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e955: jmp 0x94e96e */
  goto L_94e96e;
L_94e957: /* 94e957: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 94e95b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e95c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 94e960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e961: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94e962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e963: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94e968: push 0xaf4130 */
  { uint32_t v = 0xaf4130u; esp -= 4; W32(esp, v); }
/* 94e96d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_94e96e: /* 94e96e: call 0x953470 */
  esp -= 4; W32(esp, 0x94e973u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94e973: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94e979: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e97c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e97d: push 0xaf4120 */
  { uint32_t v = 0xaf4120u; esp -= 4; W32(esp, v); }
/* 94e982: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94e983: call 0x94f230 */
  esp -= 4; W32(esp, 0x94e988u); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94e988: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e98b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e98c: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 94e994: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 94e99c: mov dword ptr [esp + 4], 5 */
  W32((uint32_t)(esp + 0x4u), 0x5u);
/* 94e9a4: jmp 0x9535b0 */
  SPILL(); f_9535b0(); return;
L_94e9a9: /* 94e9a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94e9aa: ret  */
  esp += 4; SPILL(); return;
}

void f_94e9b0(void) {
  LOAD_REGS();
L_94e9b0: /* 94e9b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e9b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 94e9b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e9b7: je 0x94e9fa */
  if (zf) goto L_94e9fa;
L_94e9b9: /* 94e9b9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 94e9bb: mov edx, dword ptr [ebx + eax*4 + 4] */
  edx = R32((uint32_t)(ebx + eax*4 + 0x4u));
/* 94e9bf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e9c1: je 0x94e9c6 */
  if (zf) goto L_94e9c6;
L_94e9c3: /* 94e9c3: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 94e9c4: jmp 0x94e9c8 */
  goto L_94e9c8;
L_94e9c6: /* 94e9c6: mov edx, eax */
  edx = eax;
L_94e9c8: /* 94e9c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94e9c9: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* 94e9cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94e9cd: mov ecx, esi */
  ecx = esi;
/* 94e9cf: mov eax, esi */
  eax = esi;
/* 94e9d1: lea edi, [esi + edx*4] */
  edi = (uint32_t)(esi + edx*4);
L_94e9d4: /* 94e9d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94e9d6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 94e9d8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94e9db: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94e9de: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94e9e0: jne 0x94e9d4 */
  if (!zf) goto L_94e9d4;
L_94e9e2: /* 94e9e2: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94e9e5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 94e9e7: jbe 0x94e9d4 */
  if ((cf | zf)) goto L_94e9d4;
L_94e9e9: /* 94e9e9: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94e9eb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 94e9ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94e9ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94e9f0: call 0x94f570 */
  esp -= 4; W32(esp, 0x94e9f5u); SPILL(); f_94f570(); if (g_unwind) return; RELOAD();
/* 94e9f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94e9f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94e9f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_94e9fa: /* 94e9fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94e9fb: ret  */
  esp += 4; SPILL(); return;
}

void f_94ea00(void) {
  LOAD_REGS();
L_94ea00: /* 94ea00: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 94ea04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94ea06: jge 0x94ea0a */
  if ((sf == of)) goto L_94ea0a;
L_94ea08: /* 94ea08: xor ecx, ecx */
  ecx = 0;
L_94ea0a: /* 94ea0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ea0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ea0c: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 94ea10: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94ea12: mov esi, dword ptr [edi + eax*4 + 4] */
  esi = R32((uint32_t)(edi + eax*4 + 0x4u));
/* 94ea16: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ea18: je 0x94ea1d */
  if (zf) goto L_94ea1d;
L_94ea1a: /* 94ea1a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 94ea1b: jmp 0x94ea1f */
  goto L_94ea1f;
L_94ea1d: /* 94ea1d: mov esi, eax */
  esi = eax;
L_94ea1f: /* 94ea1f: lea eax, [esi + ecx] */
  eax = (uint32_t)(esi + ecx);
/* 94ea22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ea23: call 0x94f020 */
  esp -= 4; W32(esp, 0x94ea28u); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 94ea28: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94ea2a: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 94ea2d: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 94ea30: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ea33: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 94ea36: mov dword ptr [eax + edx*4 + 4], ecx */
  W32((uint32_t)(eax + edx*4 + 0x4u), ecx);
/* 94ea3a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94ea3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ea3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ea3e: ret  */
  esp += 4; SPILL(); return;
}

void f_94ea40(void) {
  LOAD_REGS();
L_94ea40: /* 94ea40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ea41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94ea45: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ea47: je 0x94ea94 */
  if (zf) goto L_94ea94;
L_94ea49: /* 94ea49: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 94ea4c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94ea50: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ea52: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 94ea55: je 0x94ea65 */
  if (zf) goto L_94ea65;
L_94ea57: /* 94ea57: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ea59: je 0x94ea94 */
  if (zf) goto L_94ea94;
L_94ea5b: /* 94ea5b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 94ea5e: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94ea61: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ea63: jne 0x94ea57 */
  if (!zf) goto L_94ea57;
L_94ea65: /* 94ea65: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ea68: je 0x94ea94 */
  if (zf) goto L_94ea94;
L_94ea6a: /* 94ea6a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94ea6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ea6d: lea ecx, [esi + ecx*4 + 4] */
  ecx = (uint32_t)(esi + ecx*4 + 0x4u);
/* 94ea71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ea72: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 94ea74: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ea76: lea ebx, [edi - 1] */
  ebx = (uint32_t)(edi + 0xffffffffu);
/* 94ea79: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 94ea7b: jne 0x94ea81 */
  if (!zf) goto L_94ea81;
L_94ea7d: /* 94ea7d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 94ea7f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_94ea81: /* 94ea81: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 94ea83: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 94ea86: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 94ea88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ea89: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 94ea8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ea8c: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 94ea92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ea93: ret  */
  esp += 4; SPILL(); return;
L_94ea94: /* 94ea94: xor eax, eax */
  eax = 0;
/* 94ea96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ea97: ret  */
  esp += 4; SPILL(); return;
}

void f_94eaa0(void) {
  LOAD_REGS();
L_94eaa0: /* 94eaa0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 94eaa4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eaa6: je 0x94eadc */
  if (zf) goto L_94eadc;
L_94eaa8: /* 94eaa8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 94eaab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eaad: je 0x94eadc */
  if (zf) goto L_94eadc;
L_94eaaf: /* 94eaaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94eab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94eab2: mov esi, dword ptr [ecx + edx*4 + 4] */
  esi = R32((uint32_t)(ecx + edx*4 + 0x4u));
/* 94eab6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eab8: je 0x94eacc */
  if (zf) goto L_94eacc;
L_94eaba: /* 94eaba: mov eax, dword ptr [ecx + esi*4 - 4] */
  eax = R32((uint32_t)(ecx + esi*4 + 0xfffffffcu));
/* 94eabe: mov dword ptr [ecx + esi*4 - 4], 0 */
  W32((uint32_t)(ecx + esi*4 + 0xfffffffcu), 0x0u);
/* 94eac6: dec dword ptr [ecx + edx*4 + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4 + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx + edx*4 + 0x4u), r);
  }
/* 94eaca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94eacb: ret  */
  esp += 4; SPILL(); return;
L_94eacc: /* 94eacc: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 94eacf: mov dword ptr [ecx + edx*4], 0 */
  W32((uint32_t)(ecx + edx*4), 0x0u);
/* 94ead6: mov dword ptr [ecx + edx*4 + 4], edx */
  W32((uint32_t)(ecx + edx*4 + 0x4u), edx);
/* 94eada: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94eadb: ret  */
  esp += 4; SPILL(); return;
L_94eadc: /* 94eadc: xor eax, eax */
  eax = 0;
/* 94eade: ret  */
  esp += 4; SPILL(); return;
}

void f_94eae0(void) {
  LOAD_REGS();
L_94eae0: /* 94eae0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94eae1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 94eae5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94eae6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 94eaea: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94eaec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94eaed: lea edi, [esi + eax*4 + 4] */
  edi = (uint32_t)(esi + eax*4 + 0x4u);
/* 94eaf1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 94eaf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eaf5: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 94eaf8: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 94eafa: jne 0x94eb00 */
  if (!zf) goto L_94eb00;
L_94eafc: /* 94eafc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94eafe: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_94eb00: /* 94eb00: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94eb02: jl 0x94eb08 */
  if ((sf != of)) goto L_94eb08;
L_94eb04: /* 94eb04: cmp ebx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94eb06: jl 0x94eb39 */
  if ((sf != of)) goto L_94eb39;
L_94eb08: /* 94eb08: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94eb0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94eb0e: push 0xaf40d8 */
  { uint32_t v = 0xaf40d8u; esp -= 4; W32(esp, v); }
/* 94eb13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94eb14: call 0x953470 */
  esp -= 4; W32(esp, 0x94eb19u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94eb19: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94eb1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94eb20: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 94eb25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94eb26: call 0x94f230 */
  esp -= 4; W32(esp, 0x94eb2bu); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94eb2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94eb2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94eb2f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94eb31: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94eb36u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94eb36: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94eb39: /* 94eb39: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 94eb3b: mov eax, dword ptr [esi + ebx*4 + 4] */
  eax = R32((uint32_t)(esi + ebx*4 + 0x4u));
/* 94eb3f: lea ecx, [esi + edx*4] */
  ecx = (uint32_t)(esi + edx*4);
/* 94eb42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94eb44: mov dword ptr [esi + ebx*4 + 4], edx */
  W32((uint32_t)(esi + ebx*4 + 0x4u), edx);
/* 94eb48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94eb49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94eb4a: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 94eb50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94eb51: ret  */
  esp += 4; SPILL(); return;
}

void f_94eb60(void) {
  LOAD_REGS();
L_94eb60: /* 94eb60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94eb61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94eb62: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 94eb66: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94eb68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94eb69: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 94eb6d: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 94eb6f: jl 0x94eb82 */
  if ((sf != of)) goto L_94eb82;
L_94eb71: /* 94eb71: mov eax, dword ptr [edi + ebx*4 + 4] */
  eax = R32((uint32_t)(edi + ebx*4 + 0x4u));
/* 94eb75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eb77: je 0x94eb7e */
  if (zf) goto L_94eb7e;
L_94eb79: /* 94eb79: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 94eb7a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94eb7c: jge 0x94eb82 */
  if ((sf == of)) goto L_94eb82;
L_94eb7e: /* 94eb7e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94eb80: jl 0x94ebb3 */
  if ((sf != of)) goto L_94ebb3;
L_94eb82: /* 94eb82: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94eb87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94eb88: push 0xaf40d8 */
  { uint32_t v = 0xaf40d8u; esp -= 4; W32(esp, v); }
/* 94eb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94eb8e: call 0x953470 */
  esp -= 4; W32(esp, 0x94eb93u); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94eb93: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94eb99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94eb9a: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 94eb9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94eba0: call 0x94f230 */
  esp -= 4; W32(esp, 0x94eba5u); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94eba5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94eba7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94eba9: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94ebab: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94ebb0u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94ebb0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94ebb3: /* 94ebb3: mov eax, dword ptr [edi + esi*4 + 4] */
  eax = R32((uint32_t)(edi + esi*4 + 0x4u));
/* 94ebb7: lea ecx, [edi + esi*4 + 4] */
  ecx = (uint32_t)(edi + esi*4 + 0x4u);
/* 94ebbb: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 94ebbe: mov edi, edi */
  edi = edi;
L_94ebc0: /* 94ebc0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94ebc2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94ebc4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94ebc7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94ebca: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ebcc: jne 0x94ebc0 */
  if (!zf) goto L_94ebc0;
L_94ebce: /* 94ebce: mov ecx, dword ptr [edi + ebx*4 + 4] */
  ecx = R32((uint32_t)(edi + ebx*4 + 0x4u));
/* 94ebd2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ebd4: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 94ebd7: mov dword ptr [edi + ebx*4 + 4], edx */
  W32((uint32_t)(edi + ebx*4 + 0x4u), edx);
/* 94ebdb: jne 0x94ebe3 */
  if (!zf) goto L_94ebe3;
L_94ebdd: /* 94ebdd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 94ebdf: mov dword ptr [edi + ebx*4 + 4], ecx */
  W32((uint32_t)(edi + ebx*4 + 0x4u), ecx);
L_94ebe3: /* 94ebe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ebe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ebe5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ebe6: ret  */
  esp += 4; SPILL(); return;
}

void f_94ebf0(void) {
  LOAD_REGS();
L_94ebf0: /* 94ebf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ebf1: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 94ebf5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ebf7: je 0x94ec48 */
  if (zf) goto L_94ec48;
L_94ebf9: /* 94ebf9: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 94ebfc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94ec00: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ec02: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 94ec05: je 0x94ec15 */
  if (zf) goto L_94ec15;
L_94ec07: /* 94ec07: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ec09: je 0x94ec48 */
  if (zf) goto L_94ec48;
L_94ec0b: /* 94ec0b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 94ec0e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94ec11: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ec13: jne 0x94ec07 */
  if (!zf) goto L_94ec07;
L_94ec15: /* 94ec15: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ec18: je 0x94ec48 */
  if (zf) goto L_94ec48;
L_94ec1a: /* 94ec1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ec1b: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 94ec1e: mov edi, edi */
  edi = edi;
L_94ec20: /* 94ec20: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94ec22: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94ec24: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94ec27: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94ec2a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ec2c: jne 0x94ec20 */
  if (!zf) goto L_94ec20;
L_94ec2e: /* 94ec2e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 94ec30: mov edx, dword ptr [edi + ecx*4 + 4] */
  edx = R32((uint32_t)(edi + ecx*4 + 0x4u));
/* 94ec34: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ec36: lea ecx, [edi + ecx*4 + 4] */
  ecx = (uint32_t)(edi + ecx*4 + 0x4u);
/* 94ec3a: lea esi, [edx - 1] */
  esi = (uint32_t)(edx + 0xffffffffu);
/* 94ec3d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 94ec3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ec40: jne 0x94ec4a */
  if (!zf) goto L_94ec4a;
L_94ec42: /* 94ec42: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 94ec44: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94ec46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ec47: ret  */
  esp += 4; SPILL(); return;
L_94ec48: /* 94ec48: xor eax, eax */
  eax = 0;
L_94ec4a: /* 94ec4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ec4b: ret  */
  esp += 4; SPILL(); return;
}

void f_94ec50(void) {
  LOAD_REGS();
L_94ec50: /* 94ec50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ec51: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 94ec55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ec56: call 0x94f340 */
  esp -= 4; W32(esp, 0x94ec5bu); SPILL(); f_94f340(); if (g_unwind) return; RELOAD();
/* 94ec5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ec5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ec60: jne 0x94ec64 */
  if (!zf) goto L_94ec64;
L_94ec62: /* 94ec62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ec63: ret  */
  esp += 4; SPILL(); return;
L_94ec64: /* 94ec64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ec65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ec66: call 0x94f020 */
  esp -= 4; W32(esp, 0x94ec6bu); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 94ec6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ec6e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ec70: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 94ec74: je 0x94ecb7 */
  if (zf) goto L_94ecb7;
L_94ec76: /* 94ec76: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 94ec79: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94ec7c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ec7e: je 0x94ecb7 */
  if (zf) goto L_94ecb7;
L_94ec80: /* 94ec80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94ec81: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 94ec85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_94ec86: /* 94ec86: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94ec87: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94ec8a: call 0x9538c0 */
  esp -= 4; W32(esp, 0x94ec8fu); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 94ec8f: mov ecx, ebp */
  ecx = ebp;
/* 94ec91: mov edx, ecx */
  edx = ecx;
/* 94ec93: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94ec96: mov edi, eax */
  edi = eax;
/* 94ec98: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94ec9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ec9b: mov ecx, edx */
  ecx = edx;
/* 94ec9d: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 94eca1: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94eca4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94eca5: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 94eca7: call 0x94e7d0 */
  esp -= 4; W32(esp, 0x94ecacu); SPILL(); f_94e7d0(); if (g_unwind) return; RELOAD();
/* 94ecac: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 94ecae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ecb1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ecb3: jne 0x94ec86 */
  if (!zf) goto L_94ec86;
L_94ecb5: /* 94ecb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ecb6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_94ecb7: /* 94ecb7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 94ecbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ecbc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ecbd: ret  */
  esp += 4; SPILL(); return;
}

void f_94ecc0(void) {
  LOAD_REGS();
L_94ecc0: /* 94ecc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ecc1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 94ecc5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94ecc7: mov eax, dword ptr [ebx + ecx*4 + 4] */
  eax = R32((uint32_t)(ebx + ecx*4 + 0x4u));
/* 94eccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eccd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ecce: je 0x94ecd3 */
  if (zf) goto L_94ecd3;
L_94ecd0: /* 94ecd0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 94ecd1: jmp 0x94ecd5 */
  goto L_94ecd5;
L_94ecd3: /* 94ecd3: mov eax, ecx */
  eax = ecx;
L_94ecd5: /* 94ecd5: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 94ecd9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 94ecdb: mov ecx, dword ptr [esi + edx*4 + 4] */
  ecx = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 94ecdf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ece1: je 0x94ece6 */
  if (zf) goto L_94ece6;
L_94ece3: /* 94ece3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 94ece4: jmp 0x94ece8 */
  goto L_94ece8;
L_94ece6: /* 94ece6: mov ecx, edx */
  ecx = edx;
L_94ece8: /* 94ece8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ecea: je 0x94ecf1 */
  if (zf) goto L_94ecf1;
L_94ecec: /* 94ecec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94eced: xor eax, eax */
  eax = 0;
/* 94ecef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ecf0: ret  */
  esp += 4; SPILL(); return;
L_94ecf1: /* 94ecf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ecf3: jne 0x94ecfd */
  if (!zf) goto L_94ecfd;
L_94ecf5: /* 94ecf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ecf6: mov eax, 1 */
  eax = 0x1u;
/* 94ecfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ecfc: ret  */
  esp += 4; SPILL(); return;
L_94ecfd: /* 94ecfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ecfe: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 94ed05: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 94ed08: lea esi, [ebx + 4] */
  esi = (uint32_t)(ebx + 0x4u);
/* 94ed0b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 94ed0d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 94ed0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ed10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ed11: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 94ed14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ed15: ret  */
  esp += 4; SPILL(); return;
}

void f_94ed20(void) {
  LOAD_REGS();
L_94ed20: /* 94ed20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94ed24: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 94ed28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ed29: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 94ed2d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94ed2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ed2f: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 94ed33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ed34: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 94ed37: xor edi, edi */
  edi = 0;
/* 94ed39: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 94ed3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_94ed40: /* 94ed40: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ed42: jne 0x94ed48 */
  if (!zf) goto L_94ed48;
L_94ed44: /* 94ed44: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94ed45: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_94ed48: /* 94ed48: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ed4a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94ed4c: je 0x94ed58 */
  if (zf) goto L_94ed58;
L_94ed4e: /* 94ed4e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ed50: jne 0x94ed66 */
  if (!zf) goto L_94ed66;
L_94ed52: /* 94ed52: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94ed53: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94ed56: jmp 0x94ed66 */
  goto L_94ed66;
L_94ed58: /* 94ed58: cmp dword ptr [edx], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ed5a: je 0x94ed66 */
  if (zf) goto L_94ed66;
L_94ed5c: /* 94ed5c: mov esi, ecx */
  esi = ecx;
/* 94ed5e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 94ed5f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94ed62: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ed64: je 0x94ed78 */
  if (zf) goto L_94ed78;
L_94ed66: /* 94ed66: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 94ed68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ed6a: je 0x94ed7f */
  if (zf) goto L_94ed7f;
L_94ed6c: /* 94ed6c: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 94ed6e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94ed71: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94ed74: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ed76: je 0x94ed40 */
  if (zf) goto L_94ed40;
L_94ed78: /* 94ed78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ed79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ed7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94ed7b: xor eax, eax */
  eax = 0;
/* 94ed7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ed7e: ret  */
  esp += 4; SPILL(); return;
L_94ed7f: /* 94ed7f: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ed82: jne 0x94ed78 */
  if (!zf) goto L_94ed78;
L_94ed84: /* 94ed84: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ed87: jne 0x94ed78 */
  if (!zf) goto L_94ed78;
L_94ed89: /* 94ed89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ed8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ed8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94ed8c: mov eax, 1 */
  eax = 0x1u;
/* 94ed91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ed92: ret  */
  esp += 4; SPILL(); return;
}

void f_94eda0(void) {
  LOAD_REGS();
L_94eda0: /* 94eda0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94eda4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94eda5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94eda6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 94edaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94edab: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 94edaf: lea ecx, [edx + 4] */
  ecx = (uint32_t)(edx + 0x4u);
/* 94edb2: lea edi, [edx + edi*4 + 4] */
  edi = (uint32_t)(edx + edi*4 + 0x4u);
/* 94edb6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 94edba: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 94edbd: lea esi, [esi + edx*4 + 4] */
  esi = (uint32_t)(esi + edx*4 + 0x4u);
L_94edc1: /* 94edc1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94edc3: jne 0x94edc8 */
  if (!zf) goto L_94edc8;
L_94edc5: /* 94edc5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_94edc8: /* 94edc8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94edca: jne 0x94edcf */
  if (!zf) goto L_94edcf;
L_94edcc: /* 94edcc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_94edcf: /* 94edcf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94edd1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94edd3: je 0x94ede7 */
  if (zf) goto L_94ede7;
L_94edd5: /* 94edd5: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 94edd7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 94edda: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94eddd: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94eddf: je 0x94edc1 */
  if (zf) goto L_94edc1;
L_94ede1: /* 94ede1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ede2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ede3: xor eax, eax */
  eax = 0;
/* 94ede5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ede6: ret  */
  esp += 4; SPILL(); return;
L_94ede7: /* 94ede7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94ede9: xor ecx, ecx */
  ecx = 0;
/* 94edeb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eded: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 94edf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94edf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94edf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94edf3: mov eax, ecx */
  eax = ecx;
/* 94edf5: ret  */
  esp += 4; SPILL(); return;
}

void f_94ee00(void) {
  LOAD_REGS();
L_94ee00: /* 94ee00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ee01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94ee05: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94ee07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ee09: je 0x94ee57 */
  if (zf) goto L_94ee57;
L_94ee0b: /* 94ee0b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94ee0d: mov edx, dword ptr [0xcf2f28] */
  edx = R32((uint32_t)(0xcf2f28u));
/* 94ee13: lea eax, [eax*4 + 8] */
  eax = (uint32_t)(eax*4 + 0x8u);
/* 94ee1a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ee1c: jg 0x94ee47 */
  if ((!zf && sf == of)) goto L_94ee47;
L_94ee1e: /* 94ee1e: inc dword ptr [0xcf2f64] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f64u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f64u), r);
  }
/* 94ee24: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 94ee2a: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 94ee2d: mov eax, dword ptr [0xcf2f30] */
  eax = R32((uint32_t)(0xcf2f30u));
/* 94ee32: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94ee34: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 94ee37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94ee39: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94ee3b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 94ee3d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 94ee3f: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 94ee45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ee46: ret  */
  esp += 4; SPILL(); return;
L_94ee47: /* 94ee47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ee48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94ee49: call 0x953a60 */
  esp -= 4; W32(esp, 0x94ee4eu); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94ee4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ee51: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_94ee57: /* 94ee57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ee58: ret  */
  esp += 4; SPILL(); return;
}

void f_94ee60(void) {
  LOAD_REGS();
L_94ee60: /* 94ee60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ee61: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 94ee65: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 94ee67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ee69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ee6a: je 0x94ee94 */
  if (zf) goto L_94ee94;
L_94ee6c: /* 94ee6c: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 94ee6f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94ee71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ee73: je 0x94ee94 */
  if (zf) goto L_94ee94;
L_94ee75: /* 94ee75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ee76: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 94ee7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_94ee80: /* 94ee80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ee81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94ee82: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 94ee85: call 0x953a60 */
  esp -= 4; W32(esp, 0x94ee8au); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94ee8a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94ee8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ee8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ee91: jne 0x94ee80 */
  if (!zf) goto L_94ee80;
L_94ee93: /* 94ee93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_94ee94: /* 94ee94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ee95: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94ee9au); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94ee9a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94ee9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ee9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94ee9f: ret  */
  esp += 4; SPILL(); return;
}

void f_94eea0(void) {
  LOAD_REGS();
L_94eea0: /* 94eea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94eea1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 94eea5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 94eea7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eea9: je 0x94eece */
  if (zf) goto L_94eece;
L_94eeab: /* 94eeab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 94eead: mov edx, dword ptr [0xcf2f28] */
  edx = R32((uint32_t)(0xcf2f28u));
/* 94eeb3: lea ecx, [ecx*4 + 8] */
  ecx = (uint32_t)(ecx*4 + 0x8u);
/* 94eeba: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94eebc: jle 0x94eece */
  if ((zf || sf != of)) goto L_94eece;
L_94eebe: /* 94eebe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94eebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94eec0: call 0x953a60 */
  esp -= 4; W32(esp, 0x94eec5u); SPILL(); f_953a60(); if (g_unwind) return; RELOAD();
/* 94eec5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94eec8: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_94eece: /* 94eece: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94eecf: ret  */
  esp += 4; SPILL(); return;
}

void f_94eed0(void) {
  LOAD_REGS();
L_94eed0: /* 94eed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94eed4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eed6: je 0x94eef2 */
  if (zf) goto L_94eef2;
L_94eed8: /* 94eed8: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 94eedb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94eedd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eedf: je 0x94eef2 */
  if (zf) goto L_94eef2;
L_94eee1: /* 94eee1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
L_94eee5: /* 94eee5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94eee8: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94eeea: je 0x94eef5 */
  if (zf) goto L_94eef5;
L_94eeec: /* 94eeec: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94eeee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eef0: jne 0x94eee5 */
  if (!zf) goto L_94eee5;
L_94eef2: /* 94eef2: xor eax, eax */
  eax = 0;
/* 94eef4: ret  */
  esp += 4; SPILL(); return;
L_94eef5: /* 94eef5: mov eax, 1 */
  eax = 0x1u;
/* 94eefa: ret  */
  esp += 4; SPILL(); return;
}

void f_94ef00(void) {
  LOAD_REGS();
L_94ef00: /* 94ef00: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 94ef04: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 94ef06: mov ecx, dword ptr [edx + eax*4 + 4] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 94ef0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ef0c: je 0x94ef11 */
  if (zf) goto L_94ef11;
L_94ef0e: /* 94ef0e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 94ef0f: jmp 0x94ef13 */
  goto L_94ef13;
L_94ef11: /* 94ef11: mov ecx, eax */
  ecx = eax;
L_94ef13: /* 94ef13: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ef15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ef16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ef17: jg 0x94ef34 */
  if ((!zf && sf == of)) goto L_94ef34;
L_94ef19: /* 94ef19: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94ef1c: xor eax, eax */
  eax = 0;
/* 94ef1e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 94ef20: jle 0x94ef34 */
  if ((zf || sf != of)) goto L_94ef34;
L_94ef22: /* 94ef22: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_94ef26: /* 94ef26: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 94ef28: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94ef2b: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94ef2d: je 0x94ef37 */
  if (zf) goto L_94ef37;
L_94ef2f: /* 94ef2f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 94ef30: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94ef32: jl 0x94ef26 */
  if ((sf != of)) goto L_94ef26;
L_94ef34: /* 94ef34: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_94ef37: /* 94ef37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94ef38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94ef39: ret  */
  esp += 4; SPILL(); return;
}

void f_94ef40(void) {
  LOAD_REGS();
L_94ef40: /* 94ef40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94ef41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94ef42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 94ef46: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 94ef48: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ef4a: je 0x94efd7 */
  if (zf) goto L_94efd7;
L_94ef50: /* 94ef50: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 94ef53: mov esi, dword ptr [ebp + eax*4 + 4] */
  esi = R32((uint32_t)(ebp + eax*4 + 0x4u));
/* 94ef57: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94ef59: je 0x94ef5e */
  if (zf) goto L_94ef5e;
L_94ef5b: /* 94ef5b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 94ef5c: jmp 0x94ef60 */
  goto L_94ef60;
L_94ef5e: /* 94ef5e: mov esi, eax */
  esi = eax;
L_94ef60: /* 94ef60: mov eax, dword ptr [0xcf2f7c] */
  eax = R32((uint32_t)(0xcf2f7cu));
/* 94ef65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94ef66: mov ebx, dword ptr [0xcf2f78] */
  ebx = R32((uint32_t)(0xcf2f78u));
/* 94ef6c: lea edx, [esi + esi] */
  edx = (uint32_t)(esi + esi);
/* 94ef6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94ef70: lea ecx, [eax + esi + 1] */
  ecx = (uint32_t)(eax + esi + 0x1u);
/* 94ef74: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 94ef75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 94ef76: mov dword ptr [0xcf2f78], ebx */
  W32((uint32_t)(0xcf2f78u), ebx);
/* 94ef7c: mov dword ptr [0xcf2f7c], ecx */
  W32((uint32_t)(0xcf2f7cu), ecx);
/* 94ef82: call 0x94f020 */
  esp -= 4; W32(esp, 0x94ef87u); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 94ef87: mov ebx, eax */
  ebx = eax;
/* 94ef89: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 94ef8c: mov ecx, eax */
  ecx = eax;
/* 94ef8e: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
/* 94ef91: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* 94ef94: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94ef96: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94ef98: mov dword ptr [ebx + ecx*4 + 4], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x4u), eax);
/* 94ef9c: mov ecx, dword ptr [0xcf2f48] */
  ecx = R32((uint32_t)(0xcf2f48u));
/* 94efa2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94efa5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94efa7: je 0x94efc3 */
  if (zf) goto L_94efc3;
L_94efa9: /* 94efa9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 94efac: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94efaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94efb1: je 0x94efc3 */
  if (zf) goto L_94efc3;
L_94efb3: /* 94efb3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 94efb6: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 94efb8: jne 0x94efbd */
  if (!zf) goto L_94efbd;
L_94efba: /* 94efba: mov dword ptr [ecx - 4], ebx */
  W32((uint32_t)(ecx + 0xfffffffcu), ebx);
L_94efbd: /* 94efbd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 94efbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94efc1: jne 0x94efb3 */
  if (!zf) goto L_94efb3;
L_94efc3: /* 94efc3: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 94efc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94efc8: call 0x94ee00 */
  esp -= 4; W32(esp, 0x94efcdu); SPILL(); f_94ee00(); if (g_unwind) return; RELOAD();
/* 94efcd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94efd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94efd1: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 94efd3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94efd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94efd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94efd6: ret  */
  esp += 4; SPILL(); return;
L_94efd7: /* 94efd7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 94efd9: call 0x94f020 */
  esp -= 4; W32(esp, 0x94efdeu); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 94efde: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94efe1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 94efe3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94efe4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94efe5: ret  */
  esp += 4; SPILL(); return;
}

void f_94eff0(void) {
  LOAD_REGS();
L_94eff0: /* 94eff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 94eff4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94eff6: je 0x94f010 */
  if (zf) goto L_94f010;
L_94eff8: /* 94eff8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94effa: mov ecx, dword ptr [eax + edx*4 + 4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x4u));
/* 94effe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f000: jne 0x94f006 */
  if (!zf) goto L_94f006;
L_94f002: /* 94f002: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 94f005: ret  */
  esp += 4; SPILL(); return;
L_94f006: /* 94f006: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f009: jle 0x94f010 */
  if ((zf || sf != of)) goto L_94f010;
L_94f00b: /* 94f00b: mov eax, dword ptr [eax + ecx*4 - 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* 94f00f: ret  */
  esp += 4; SPILL(); return;
L_94f010: /* 94f010: xor eax, eax */
  eax = 0;
/* 94f012: ret  */
  esp += 4; SPILL(); return;
}

void f_94f020(void) {
  LOAD_REGS();
L_94f020: /* 94f020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f021: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f022: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 94f026: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f028: jne 0x94f02f */
  if (!zf) goto L_94f02f;
L_94f02a: /* 94f02a: mov edi, 1 */
  edi = 0x1u;
L_94f02f: /* 94f02f: mov eax, dword ptr [0xcf2f28] */
  eax = R32((uint32_t)(0xcf2f28u));
/* 94f034: lea esi, [edi*4 + 8] */
  esi = (uint32_t)(edi*4 + 0x8u);
/* 94f03b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 94f03d: ja 0x94f09f */
  if ((!cf && !zf)) goto L_94f09f;
L_94f03f: /* 94f03f: mov eax, dword ptr [0xcf2f38] */
  eax = R32((uint32_t)(0xcf2f38u));
/* 94f044: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 94f047: mov edx, dword ptr [0xcf2f30] */
  edx = R32((uint32_t)(0xcf2f30u));
/* 94f04d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 94f050: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 94f052: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 94f055: je 0x94f065 */
  if (zf) goto L_94f065;
L_94f057: /* 94f057: inc dword ptr [0xcf2f54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcf2f54u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xcf2f54u), r);
  }
/* 94f05d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 94f05f: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 94f061: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 94f063: jmp 0x94f06e */
  goto L_94f06e;
L_94f065: /* 94f065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f066: call 0x9538c0 */
  esp -= 4; W32(esp, 0x94f06bu); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 94f06b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f06e: /* 94f06e: mov ecx, dword ptr [0xcf2f38] */
  ecx = R32((uint32_t)(0xcf2f38u));
/* 94f074: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 94f077: mov ecx, dword ptr [0xcf2f34] */
  ecx = R32((uint32_t)(0xcf2f34u));
/* 94f07d: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 94f080: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 94f082: jle 0x94f0a8 */
  if ((zf || sf != of)) goto L_94f0a8;
L_94f084: /* 94f084: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 94f086: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94f089: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 94f08b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 94f08d: mov dword ptr [eax + edi*4 + 4], 1 */
  W32((uint32_t)(eax + edi*4 + 0x4u), 0x1u);
/* 94f095: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f096: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 94f09d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f09e: ret  */
  esp += 4; SPILL(); return;
L_94f09f: /* 94f09f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f0a0: call 0x9538c0 */
  esp -= 4; W32(esp, 0x94f0a5u); SPILL(); f_9538c0(); if (g_unwind) return; RELOAD();
/* 94f0a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f0a8: /* 94f0a8: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 94f0aa: mov dword ptr [eax + edi*4 + 4], 1 */
  W32((uint32_t)(eax + edi*4 + 0x4u), 0x1u);
/* 94f0b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f0b3: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 94f0ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f0bb: ret  */
  esp += 4; SPILL(); return;
}

void f_94f0c0(void) {
  LOAD_REGS();
L_94f0c0: /* 94f0c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f0c1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 94f0c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 94f0c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f0c7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 94f0cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f0cc: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 94f0d0: mov eax, esi */
  eax = esi;
/* 94f0d2: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 94f0d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 94f0d5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 94f0d9: jns 0x94f10c */
  if (!sf) goto L_94f10c;
L_94f0db: /* 94f0db: mov eax, dword ptr [0xcf2f4c] */
  eax = R32((uint32_t)(0xcf2f4cu));
/* 94f0e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 94f0e1: push 0xaf40d8 */
  { uint32_t v = 0xaf40d8u; esp -= 4; W32(esp, v); }
/* 94f0e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 94f0e7: call 0x953470 */
  esp -= 4; W32(esp, 0x94f0ecu); SPILL(); f_953470(); if (g_unwind) return; RELOAD();
/* 94f0ec: mov ecx, dword ptr [0xcf2f4c] */
  ecx = R32((uint32_t)(0xcf2f4cu));
/* 94f0f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 94f0f3: push 0xcf2eb4 */
  { uint32_t v = 0xcf2eb4u; esp -= 4; W32(esp, v); }
/* 94f0f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 94f0f9: call 0x94f230 */
  esp -= 4; W32(esp, 0x94f0feu); SPILL(); f_94f230(); if (g_unwind) return; RELOAD();
/* 94f0fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 94f102: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 94f104: call 0x9535b0 */
  esp -= 4; W32(esp, 0x94f109u); SPILL(); f_9535b0(); if (g_unwind) return; RELOAD();
/* 94f109: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_94f10c: /* 94f10c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 94f110: lea esi, [esi + ebp - 1] */
  esi = (uint32_t)(esi + ebp + 0xffffffffu);
/* 94f114: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 94f115: call 0x94f020 */
  esp -= 4; W32(esp, 0x94f11au); SPILL(); f_94f020(); if (g_unwind) return; RELOAD();
/* 94f11a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 94f11c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 94f11f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 94f120: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94f123: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 94f126: mov dword ptr [eax + edx*4 + 4], esi */
  W32((uint32_t)(eax + edx*4 + 0x4u), esi);
/* 94f12a: lea edx, [eax + ebp*4 + 4] */
  edx = (uint32_t)(eax + ebp*4 + 0x4u);
/* 94f12e: ja 0x94f161 */
  if ((!cf && !zf)) goto L_94f161;
L_94f130: /* 94f130: jmp dword ptr [edi*4 + 0x94f200] */
  switch (R32((uint32_t)(edi*4 + 0x94f200u))) {
    case 0x94f137u: goto L_94f137;
    case 0x94f141u: goto L_94f141;
    case 0x94f14bu: goto L_94f14b;
    case 0x94f155u: goto L_94f155;
    case 0x94f184u: goto L_94f184;
    case 0x94f197u: goto L_94f197;
    case 0x94f1a9u: goto L_94f1a9;
    case 0x94f1b3u: goto L_94f1b3;
    case 0x94f1bdu: goto L_94f1bd;
    case 0x94f1f4u: goto L_94f1f4;
    default: guest_badjump(0x94f130, R32((uint32_t)(edi*4 + 0x94f200u))); return;
  }
L_94f137: /* 94f137: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f139: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f13b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f13e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_94f141: /* 94f141: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f143: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f145: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f148: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_94f14b: /* 94f14b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f14d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f14f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f152: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_94f155: /* 94f155: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f157: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f159: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f15c: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94f15f: jmp 0x94f184 */
  goto L_94f184;
L_94f161: /* 94f161: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 94f168: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 94f16c: mov ebp, ecx */
  ebp = ecx;
/* 94f16e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94f171: mov esi, ebx */
  esi = ebx;
/* 94f173: mov edi, edx */
  edi = edx;
/* 94f175: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94f177: mov ecx, ebp */
  ecx = ebp;
/* 94f179: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94f17c: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 94f17e: mov ecx, ebp */
  ecx = ebp;
/* 94f180: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f182: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_94f184: /* 94f184: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 94f188: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 94f18b: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 94f18e: ja 0x94f1d7 */
  if ((!cf && !zf)) goto L_94f1d7;
L_94f190: /* 94f190: jmp dword ptr [ecx*4 + 0x94f214] */
  switch (R32((uint32_t)(ecx*4 + 0x94f214u))) {
    case 0x94f197u: goto L_94f197;
    case 0x94f1a9u: goto L_94f1a9;
    case 0x94f1b3u: goto L_94f1b3;
    case 0x94f1bdu: goto L_94f1bd;
    case 0x94f1f4u: goto L_94f1f4;
    default: guest_badjump(0x94f190, R32((uint32_t)(ecx*4 + 0x94f214u))); return;
  }
L_94f197: /* 94f197: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f199: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f19a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f19b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f19d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f1a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94f1a1: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 94f1a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94f1a8: ret  */
  esp += 4; SPILL(); return;
L_94f1a9: /* 94f1a9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f1ab: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f1ad: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f1b0: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_94f1b3: /* 94f1b3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f1b5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f1b7: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f1ba: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_94f1bd: /* 94f1bd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 94f1bf: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f1c1: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 94f1c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f1c5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f1c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f1c9: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 94f1cb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 94f1ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94f1cf: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 94f1d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94f1d6: ret  */
  esp += 4; SPILL(); return;
L_94f1d7: /* 94f1d7: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 94f1de: mov ecx, ebp */
  ecx = ebp;
/* 94f1e0: mov esi, ebx */
  esi = ebx;
/* 94f1e2: mov ebx, ecx */
  ebx = ecx;
/* 94f1e4: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 94f1e7: mov edi, edx */
  edi = edx;
/* 94f1e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 94f1eb: mov ecx, ebx */
  ecx = ebx;
/* 94f1ed: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 94f1f0: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 94f1f2: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_94f1f4: /* 94f1f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 94f1f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 94f1f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 94f1f7: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 94f1fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 94f1fe: ret  */
  esp += 4; SPILL(); return;
}
