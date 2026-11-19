#include "recomp.h"
#include "rec_mod.h"

void f_4f1fb0(void) {
  LOAD_REGS();
L_4f1fb0: /* 4f1fb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f1fb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f1fb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f1fb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f1fb7: mov ebx, ecx */
  ebx = ecx;
/* 4f1fb9: xor edi, edi */
  edi = 0;
/* 4f1fbb: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4f1fbd: mov esi, eax */
  esi = eax;
/* 4f1fbf: nop  */
L_4f1fc0: /* 4f1fc0: xor edx, edx */
  edx = 0;
/* 4f1fc2: mov ecx, esi */
  ecx = esi;
L_4f1fc4: /* 4f1fc4: fld dword ptr [ebx + ecx] */
  { double v = F32((uint32_t)(ebx + ecx)); FPUSH(v); }
/* 4f1fc7: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 4f1fc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f1fcb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f1fce: jp 0x4f1fed */
  if (pf) goto L_4f1fed;
L_4f1fd0: /* 4f1fd0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4f1fd1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f1fd4: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f1fd7: jl 0x4f1fc4 */
  if ((sf != of)) goto L_4f1fc4;
L_4f1fd9: /* 4f1fd9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4f1fda: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4f1fdd: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f1fe0: jl 0x4f1fc0 */
  if ((sf != of)) goto L_4f1fc0;
L_4f1fe2: /* 4f1fe2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f1fe3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f1fe4: mov eax, 1 */
  eax = 0x1u;
/* 4f1fe9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f1fea: ret 4 */
  esp += 8; SPILL(); return;
L_4f1fed: /* 4f1fed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f1fee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f1fef: xor eax, eax */
  eax = 0;
/* 4f1ff1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f1ff2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2020(void) {
  LOAD_REGS();
L_4f2020: /* 4f2020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f2024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f2025: call 0x4e4070 */
  esp -= 4; W32(esp, 0x4f202au); SPILL(); f_4e4070(); if (g_unwind) return; RELOAD();
/* 4f202a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4f202c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4f202e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f202f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2050(void) {
  LOAD_REGS();
L_4f2050: /* 4f2050: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2053: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2054: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2055: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 4f2059: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 4f205d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f2061: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* 4f2065: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2067: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f2069: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f206b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f206e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2070: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f2073: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2075: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f2078: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f207b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f207e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2081: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f2084: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2087: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f208a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f208d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f2090: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2092: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2094: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2096: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2098: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f209a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f209d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f20a0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f20a3: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f20a6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f20a9: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f20ac: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f20af: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f20b2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f20b4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f20b6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f20b8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f20ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f20bc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f20bf: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f20c2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f20c5: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f20c8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f20cb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f20ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f20d1: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f20d4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f20d6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f20d8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f20da: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f20dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f20de: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f20e0: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f20e2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f20e4: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f20e7: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f20ea: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f20ed: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f20f1: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f20f5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f20f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f20fb: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f20fe: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4f2102: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f2105: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f2109: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f210d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f210e: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 4f2111: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f2115: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2116: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2119: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f2160(void) {
  LOAD_REGS();
L_4f2160: /* 4f2160: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2163: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f2167: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 4f216b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f216e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f2171: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4f2173: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2177: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2178: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f217c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f2180: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2181: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4f2185: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 4f218d: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4f2191: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f2195: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f2199: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 4f219d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f219f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f21a1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f21a3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f21a6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f21a8: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f21ab: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f21ad: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f21b0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f21b3: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f21b6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f21b9: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f21bc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f21bf: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f21c2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f21c5: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f21c8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f21ca: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f21cc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f21ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f21d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f21d2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f21d5: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f21d8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f21db: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f21de: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f21e1: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f21e4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f21e7: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f21ea: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f21ec: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f21ee: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f21f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f21f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f21f4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f21f7: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f21fa: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f21fd: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f2200: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2203: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f2206: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2209: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f220c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f220e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2210: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2212: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2214: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2216: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2218: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f221a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f221c: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f221f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f2222: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f2225: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f2229: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 4f222d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4f222f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f2233: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 4f2236: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 4f223a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f223b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 4f223e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f2242: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2243: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2246: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f2290(void) {
  LOAD_REGS();
L_4f2290: /* 4f2290: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2293: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f2297: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 4f229b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f229e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f22a1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4f22a3: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f22a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f22a8: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f22ac: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f22b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f22b1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4f22b5: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 4f22bd: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4f22c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f22c5: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f22c9: lea edi, [esp + 0x20] */
  edi = (uint32_t)(esp + 0x20u);
/* 4f22cd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f22cf: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f22d1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f22d3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f22d6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f22d8: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f22db: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f22dd: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f22e0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f22e3: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f22e6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f22e9: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f22ec: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f22ef: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f22f2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f22f5: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f22f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f22fa: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f22fc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f22fe: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2300: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2302: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2305: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f2308: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f230b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f230e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2311: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f2314: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2317: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f231a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f231c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f231e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2320: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2322: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2324: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2327: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f232a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f232d: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f2330: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2333: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f2336: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2339: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f233c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f233e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2340: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2342: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2344: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2346: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2348: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f234a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f234c: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f234f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f2352: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f2355: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f2359: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 4f235d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4f235f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f2363: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 4f2366: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 4f236a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 4f236d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 4f2371: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f2375: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2376: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4f2379: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f237d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f237e: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2381: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f23d0(void) {
  LOAD_REGS();
L_4f23d0: /* 4f23d0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f23d3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f23d5: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 4f23d8: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 4f23dc: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4f23df: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 4f23e3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f23e6: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 4f23ea: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 4f23ed: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4f23f1: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4f23f4: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 4f23f8: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 4f23fb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4f23ff: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4f2402: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 4f2406: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 4f2409: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 4f240d: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 4f2410: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 4f2414: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 4f2417: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 4f241b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 4f241e: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 4f2422: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 4f2425: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 4f2429: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 4f242c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f242d: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 4f2431: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 4f2434: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 4f2437: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2438: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 4f243c: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 4f2440: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 4f2444: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4f2449: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 4f244d: mov edi, eax */
  edi = eax;
/* 4f244f: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 4f2453: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f2455: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2456: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2457: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f245a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2490(void) {
  LOAD_REGS();
L_4f2490: /* 4f2490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f2491: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f2494: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* 4f2497: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 4f249a: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* 4f249d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f249f: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* 4f24a2: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f24a5: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 4f24a8: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f24ab: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f24ad: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f24b0: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f24b3: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f24b6: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* 4f24b9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f24bb: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* 4f24be: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f24c1: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 4f24c4: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f24c7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f24c9: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 4f24cc: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f24cf: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f24d2: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f24d5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f24d7: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 4f24da: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f24dd: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f24e0: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f24e3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f24e5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f24e9: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 4f24eb: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f24ee: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 4f24f0: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f24f3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f24f5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4f24f7: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 4f24fa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f24fc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f24fe: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 4f2500: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f2503: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f2505: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f2508: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f250a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f250c: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 4f250f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2511: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 4f2514: fsubp st(5) */
  STI(5) = STI(5) - ST0;
  FPOP();
/* 4f2516: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2518: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f251b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f251d: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f2520: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2522: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f2526: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* 4f2529: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f252b: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* 4f252e: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 4f2530: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f2533: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f2535: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f2538: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f253a: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f253e: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* 4f2541: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2543: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* 4f2546: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2548: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f2549: ret  */
  esp += 4; SPILL(); return;
}

void f_4f2580(void) {
  LOAD_REGS();
L_4f2580: /* 4f2580: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2584: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2585: mov esi, ecx */
  esi = ecx;
/* 4f2587: call 0x4e1af0 */
  esp -= 4; W32(esp, 0x4f258cu); SPILL(); f_4e1af0(); if (g_unwind) return; RELOAD();
/* 4f258c: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f2592: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f2594: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f2597: jp 0x4f25a3 */
  if (pf) goto L_4f25a3;
L_4f2599: /* 4f2599: mov esi, 0x5a7698 */
  esi = 0x5a7698u;
/* 4f259e: jmp 0x4f288e */
  goto L_4f288e;
L_4f25a3: /* 4f25a3: fdivr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) / ST0;
/* 4f25a9: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 4f25ac: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 4f25af: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 4f25b2: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 4f25b5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f25b7: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 4f25ba: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 4f25bd: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 4f25c0: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 4f25c3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f25c5: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 4f25c8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 4f25cb: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 4f25ce: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 4f25d1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f25d3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f25d7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f25d9: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4f25dc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f25de: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 4f25e1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f25e3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f25e7: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 4f25ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f25ec: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f25ee: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f25f2: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 4f25f5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f25f8: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 4f25fb: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4f25fe: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2600: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 4f2603: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f2606: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2609: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 4f260c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f260e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2612: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f2614: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f2617: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f2619: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 4f261c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f261e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f2622: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 4f2625: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2627: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f2629: fchs  */
  ST0 = -ST0;
/* 4f262b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f262f: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 4f2632: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f2635: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 4f2638: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4f263b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f263d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f2641: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f2643: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f2646: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f2648: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4f264b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f264d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f2651: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 4f2654: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2656: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f2658: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f265c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f2660: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f2663: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f2667: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4f266a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f266c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f2670: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 4f2673: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2675: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f2677: fchs  */
  ST0 = -ST0;
/* 4f2679: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f267d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f267f: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f2682: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f2684: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f2687: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2689: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f268d: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f2690: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2692: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f2694: fchs  */
  ST0 = -ST0;
/* 4f2696: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f269a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f269c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f269e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f26a0: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f26a3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f26a5: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f26a9: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f26ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f26ae: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f26b0: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f26b4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f26b6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f26b8: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f26bb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f26bd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f26c1: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f26c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f26c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f26c8: fchs  */
  ST0 = -ST0;
/* 4f26ca: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f26ce: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f26d2: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f26d4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f26d8: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f26db: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f26dd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f26e1: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f26e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f26e6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f26e8: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f26ec: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 4f26ef: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 4f26f2: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 4f26f5: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 4f26f8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f26fa: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 4f26fd: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4f2700: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 4f2703: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 4f2706: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2708: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 4f270b: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 4f270e: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 4f2711: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 4f2714: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2716: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f271a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f271c: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f271f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f2721: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f2724: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2726: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f272a: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f272d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f272f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f2731: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f2735: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 4f2738: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f273b: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 4f273e: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4f2741: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2743: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 4f2746: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f2749: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 4f274c: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4f274f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2751: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2755: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f2757: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f2759: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f275b: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f275e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2760: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f2764: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f2767: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2769: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f276b: fchs  */
  ST0 = -ST0;
/* 4f276d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 4f2771: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 4f2774: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f2777: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4f277a: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4f277d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f277f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f2783: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f2785: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f2787: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f278a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f278c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f2790: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f2793: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2795: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f2797: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 4f279b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f279f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f27a1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f27a5: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f27a8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f27aa: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f27ae: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f27b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f27b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f27b5: fchs  */
  ST0 = -ST0;
/* 4f27b7: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 4f27bb: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 4f27be: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 4f27c1: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 4f27c4: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 4f27c7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f27c9: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4f27cc: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 4f27cf: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 4f27d2: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 4f27d5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f27d7: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4f27da: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 4f27dd: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 4f27e0: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 4f27e3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f27e5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f27e9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f27eb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f27ee: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f27f0: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f27f3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f27f5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f27f9: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f27fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f27fe: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f2800: fchs  */
  ST0 = -ST0;
/* 4f2802: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 4f2806: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 4f2809: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f280c: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 4f280f: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f2812: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2814: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2817: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 4f281a: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 4f281d: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f2820: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2822: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2826: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f2828: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f282a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f282c: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f282f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2831: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f2835: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f2838: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f283a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f283c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 4f2840: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 4f2843: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f2846: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 4f2849: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f284c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f284e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f2852: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f2854: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f2856: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f2859: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f285b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f285f: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 4f2862: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2864: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f2866: fchs  */
  ST0 = -ST0;
/* 4f2868: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 4f286c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f2870: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f2872: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f2876: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 4f2879: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f287b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f287f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 4f2882: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* 4f2886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2888: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f288a: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
L_4f288e: /* 4f288e: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 4f2892: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f2894: mov edi, eax */
  edi = eax;
/* 4f2896: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4f289b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f289d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f289e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f289f: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f28a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2980(void) {
  LOAD_REGS();
L_4f2980: /* 4f2980: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2983: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f2986: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 4f298a: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f298d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f298e: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f2991: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2992: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f2995: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 4f2999: mov edi, eax */
  edi = eax;
/* 4f299b: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 4f29a3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f29a5: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 4f29ad: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 4f29b5: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 4f29bd: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f29c1: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 4f29c9: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f29cc: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 4f29d4: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f29d7: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 4f29df: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f29e2: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f29e5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f29e7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f29eb: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f29ee: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 4f29f1: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f29f4: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f29f7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f29f9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f29fd: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f2a00: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f2a03: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f2a06: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f2a09: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2a0b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f2a0f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f2a11: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* 4f2a14: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f2a17: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f2a1a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2a1c: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f2a20: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f2a23: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f2a26: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f2a29: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f2a2b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2a2d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f2a31: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f2a34: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f2a37: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f2a3a: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f2a3d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2a3f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 4f2a43: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f2a46: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f2a49: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f2a4b: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* 4f2a4e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2a50: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 4f2a54: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f2a57: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f2a59: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f2a5c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f2a5f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4f2a64: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f2a66: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 4f2a6a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f2a6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2a6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2a6e: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2a71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2ac0(void) {
  LOAD_REGS();
L_4f2ac0: /* 4f2ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f2ac1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2ac2: mov esi, ecx */
  esi = ecx;
/* 4f2ac4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2ac5: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 4f2ac8: mov ebx, 3 */
  ebx = 0x3u;
/* 4f2acd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4f2ad0: /* 4f2ad0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 4f2ad2: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 4f2ad5: fld dword ptr [edi - 8] */
  { double v = F32((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 4f2ad8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f2ada: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 4f2adc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f2ade: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f2ae0: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 4f2ae2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f2ae4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 4f2ae6: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 4f2ae8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f2aea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f2aec: fcom qword ptr [0x5694b8] */
  fpu_com(ST0, F64((uint32_t)(0x5694b8u)));
/* 4f2af2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f2af4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f2af7: jne 0x4f2b23 */
  if (!zf) goto L_4f2b23;
L_4f2af9: /* 4f2af9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2afc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4f2aff: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4f2b04u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4f2b04: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4f2b0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2b0d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f2b0f: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 4f2b12: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 4f2b15: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f2b17: fmul dword ptr [edi - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffffcu)));
/* 4f2b1a: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 4f2b1d: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 4f2b1f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f2b21: jmp 0x4f2b25 */
  goto L_4f2b25;
L_4f2b23: /* 4f2b23: fstp st(0) */
  STI(0) = ST0; FPOP();
L_4f2b25: /* 4f2b25: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4f2b28: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 4f2b29: jne 0x4f2ad0 */
  if (!zf) goto L_4f2ad0;
L_4f2b2b: /* 4f2b2b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4f2b2f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4f2b34: mov edi, eax */
  edi = eax;
/* 4f2b36: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f2b38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2b39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2b3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f2b3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2b60(void) {
  LOAD_REGS();
L_4f2b60: /* 4f2b60: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2b63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2b64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2b65: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f2b68: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f2b6a: mov edx, eax */
  edx = eax;
/* 4f2b6c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 4f2b70: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2b74: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 4f2b77: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f2b7b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f2b7f: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f2b82: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 4f2b86: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f2b8a: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 4f2b8e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f2b91: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2b95: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 4f2b98: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 4f2b9c: mov edx, eax */
  edx = eax;
/* 4f2b9e: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 4f2ba2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f2ba6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f2baa: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 4f2bad: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 4f2bb1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f2bb5: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 4f2bb9: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4f2bbc: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2bc0: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 4f2bc3: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 4f2bc7: mov edx, eax */
  edx = eax;
/* 4f2bc9: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 4f2bcd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f2bd1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f2bd5: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 4f2bd8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 4f2bdc: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 4f2bdf: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f2be3: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 4f2be6: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 4f2bea: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f2bee: mov ecx, eax */
  ecx = eax;
/* 4f2bf0: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 4f2bf4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f2bf8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4f2bfc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 4f2c00: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 4f2c04: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 4f2c08: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f2c0c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 4f2c10: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f2c15: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* 4f2c19: mov edi, eax */
  edi = eax;
/* 4f2c1b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 4f2c1f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f2c21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2c22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2c23: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2c26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2c70(void) {
  LOAD_REGS();
L_4f2c70: /* 4f2c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2c71: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4f2c75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2c76: mov eax, ecx */
  eax = ecx;
/* 4f2c78: mov ecx, 0x10 */
  ecx = 0x10u;
/* 4f2c7d: mov edi, eax */
  edi = eax;
/* 4f2c7f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f2c81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2c82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2c83: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f2ca0(void) {
  LOAD_REGS();
L_4f2ca0: /* 4f2ca0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2ca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2ca4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2ca5: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 4f2ca9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 4f2cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f2cae: mov esi, ecx */
  esi = ecx;
/* 4f2cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2cb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2cb2: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4f2cb7u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4f2cb7: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 4f2cbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f2cbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2cbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2cbe: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4f2cc3u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4f2cc3: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 4f2cc7: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 4f2ccb: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f2ccf: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 4f2cd3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f2cd7: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 4f2cdb: mov edx, eax */
  edx = eax;
/* 4f2cdd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2ce0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2ce1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2ce3: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f2ce7: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 4f2ceb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2ced: fsubr dword ptr [esi + 0xc] */
  ST0 = (F32((uint32_t)(esi + 0xcu))) - ST0;
/* 4f2cf0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 4f2cf2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f2cf6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 4f2cf9: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4f2cfc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f2d00: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 4f2d03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2d04: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2d07: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f2d30(void) {
  LOAD_REGS();
L_4f2d30: /* 4f2d30: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2d33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2d34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2d35: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 4f2d39: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 4f2d3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f2d3e: mov esi, ecx */
  esi = ecx;
/* 4f2d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2d41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2d42: call 0x4e24fa */
  esp -= 4; W32(esp, 0x4f2d47u); SPILL(); f_4e24fa(); if (g_unwind) return; RELOAD();
/* 4f2d47: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2d4a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f2d4c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f2d50: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 4f2d52: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 4f2d56: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 4f2d5a: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 4f2d5e: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 4f2d62: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 4f2d66: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 4f2d6a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f2d6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f2d6d: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 4f2d70: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 4f2d74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f2d75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2d76: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 4f2d7a: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 4f2d7e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f2d80: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 4f2d83: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 4f2d87: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 4f2d8a: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 4f2d8e: call 0x4e1429 */
  esp -= 4; W32(esp, 0x4f2d93u); SPILL(); f_4e1429(); if (g_unwind) return; RELOAD();
/* 4f2d93: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 4f2d97: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 4f2d9b: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 4f2d9f: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 4f2da3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2da6: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 4f2daa: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4f2dae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f2daf: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 4f2db3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 4f2db7: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x4f2dbcu); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 4f2dbc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f2dc0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 4f2dc4: mov edx, eax */
  edx = eax;
/* 4f2dc6: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 4f2dc8: mov esi, ecx */
  esi = ecx;
/* 4f2dca: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4f2dcc: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4f2dcf: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4f2dd2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 4f2dd5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4f2dd8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f2ddb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f2ddf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2de0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f2de3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2de4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2de6: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f2dea: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f2dec: mov eax, ecx */
  eax = ecx;
/* 4f2dee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2df0: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 4f2df3: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f2df6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f2e40(void) {
  LOAD_REGS();
L_4f2e40: /* 4f2e40: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f2e43: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 4f2e47: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f2e4a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f2e4d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f2e4f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 4f2e53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f2e54: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 4f2e58: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 4f2e5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f2e5d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 4f2e61: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 4f2e69: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4f2e6d: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f2e71: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 4f2e75: lea edi, [esp + 0x10] */
  edi = (uint32_t)(esp + 0x10u);
/* 4f2e79: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2e7b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f2e7d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2e7f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f2e82: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2e84: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f2e87: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2e89: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f2e8c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2e8f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f2e92: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2e95: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f2e98: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2e9b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f2e9e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2ea1: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f2ea4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2ea6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2ea8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2eaa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2eac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2eae: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2eb1: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f2eb4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2eb7: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f2eba: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2ebd: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f2ec0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2ec3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f2ec6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2ec8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2eca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2ecc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2ece: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2ed0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2ed3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f2ed6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2ed9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f2edc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2edf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f2ee2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2ee5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f2ee8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2eea: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2eec: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2eee: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2ef0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2ef2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2ef4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f2ef6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f2ef8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f2efb: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f2efe: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f2f01: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 4f2f05: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 4f2f0d: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 4f2f15: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 4f2f1d: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 4f2f25: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 4f2f29: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f2f2d: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 4f2f31: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 4f2f35: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2f37: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f2f39: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2f3b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f2f3e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2f40: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f2f43: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f2f45: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f2f48: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2f4b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f2f4e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2f51: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f2f54: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2f57: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f2f5a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f2f5d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f2f60: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2f62: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2f64: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2f66: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2f68: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2f6a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2f6d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f2f70: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2f73: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f2f76: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2f79: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f2f7c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f2f7f: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f2f82: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2f84: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2f86: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2f88: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2f8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2f8c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2f8f: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f2f92: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2f95: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f2f98: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2f9b: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f2f9e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f2fa1: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f2fa4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2fa6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f2fa8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2faa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f2fac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2fae: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f2fb0: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f2fb2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f2fb4: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f2fb7: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f2fba: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f2fbd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f2fc1: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 4f2fc5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f2fc9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f2fcd: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 4f2fd1: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 4f2fd5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f2fd9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f2fda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f2fdb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2fdd: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f2fe1: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 4f2fe5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f2fe7: fsubr dword ptr [eax + 0xc] */
  ST0 = (F32((uint32_t)(eax + 0xcu))) - ST0;
/* 4f2fea: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f2fee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f2ff0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f2ff4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 4f2ff7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f2ffa: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f2ffe: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 4f3001: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f3005: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f3008: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f3090(void) {
  LOAD_REGS();
L_4f3090: /* 4f3090: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f3093: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 4f3097: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f309a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f309d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f309f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f30a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f30a4: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 4f30a8: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f30ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f30ad: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 4f30b1: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 4f30b9: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4f30bd: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f30c1: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 4f30c5: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 4f30c9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f30cb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f30cd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f30cf: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f30d2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f30d4: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f30d7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f30d9: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f30dc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f30df: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f30e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f30e5: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f30e8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f30eb: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f30ee: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f30f1: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f30f4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f30f6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f30f8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f30fa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f30fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f30fe: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3101: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f3104: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3107: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f310a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f310d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f3110: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3113: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f3116: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3118: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f311a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f311c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f311e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3120: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3123: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f3126: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3129: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f312c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f312f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f3132: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3135: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f3138: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f313a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f313c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f313e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3140: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3142: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3144: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f3146: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f3148: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f314b: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f314e: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f3151: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f3155: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f3159: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f315d: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 4f3161: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 4f3165: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 4f3169: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 4f316d: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 4f3171: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3172: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 4f3176: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 4f317a: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x4f317fu); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 4f317f: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 4f3183: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f3189: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f318b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f318e: jp 0x4f31ba */
  if (pf) goto L_4f31ba;
L_4f3190: /* 4f3190: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f3194: fmul dword ptr [0x5694f8] */
  ST0 = ST0 * (F32((uint32_t)(0x5694f8u)));
/* 4f319a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f319e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4f31a2: fmul dword ptr [0x5694f8] */
  ST0 = ST0 * (F32((uint32_t)(0x5694f8u)));
/* 4f31a8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f31ac: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f31b0: fmul dword ptr [0x5694f8] */
  ST0 = ST0 * (F32((uint32_t)(0x5694f8u)));
/* 4f31b6: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_4f31ba: /* 4f31ba: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f31be: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4f31c1: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 4f31c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f31c7: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* 4f31cf: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f31d1: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 4f31d5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f31d7: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f31da: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f31dc: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f31df: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f31e3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f31e7: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 4f31eb: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 4f31ef: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 4f31f3: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f31f7: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 4f31fb: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 4f31ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f3201: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f3203: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f3205: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f3208: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f320a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f320d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f320f: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f3212: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f3215: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f3218: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f321b: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f321e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f3221: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f3224: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f3227: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f322a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f322c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f322e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3230: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3232: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3234: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3237: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f323a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f323d: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f3240: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3243: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f3246: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3249: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f324c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f324e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f3250: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3252: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3254: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3256: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3259: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f325c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f325f: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f3262: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3265: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f3268: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f326b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f326e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3270: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f3272: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3274: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3276: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3278: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f327a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f327c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f327e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f3281: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f3284: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f3287: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 4f328b: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 4f328f: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 4f3293: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 4f3297: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 4f329b: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 4f329f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f32a3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f32a5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 4f32a9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 4f32ad: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f32b1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f32b4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4f32b8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f32bb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4f32bf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f32c3: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 4f32c7: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 4f32cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f32cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f32cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f32cf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4f32d3: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 4f32d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f32d9: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 4f32dc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 4f32e0: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f32e3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4f3390(void) {
  LOAD_REGS();
L_4f3390: /* 4f3390: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f3393: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 4f3397: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f339a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f339d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f339f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f33a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f33a4: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 4f33a8: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f33ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f33ad: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 4f33b1: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 4f33b9: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 4f33bd: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f33c1: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 4f33c5: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 4f33c9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f33cb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f33cd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f33cf: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f33d2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f33d4: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f33d7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f33d9: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f33dc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f33df: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f33e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f33e5: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f33e8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f33eb: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f33ee: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f33f1: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f33f4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f33f6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f33f8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f33fa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f33fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f33fe: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3401: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f3404: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3407: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f340a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f340d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f3410: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3413: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f3416: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3418: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f341a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f341c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f341e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3420: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3423: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f3426: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3429: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f342c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f342f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f3432: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3435: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f3438: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f343a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f343c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f343e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3440: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3442: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3444: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f3446: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f3448: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f344b: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f344e: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f3451: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 4f3455: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 4f3459: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f345d: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 4f3461: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 4f3465: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 4f3469: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 4f346d: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 4f3471: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3472: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 4f3476: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 4f347a: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x4f347fu); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 4f347f: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 4f3483: call 0x4e1af0 */
  esp -= 4; W32(esp, 0x4f3488u); SPILL(); f_4e1af0(); if (g_unwind) return; RELOAD();
/* 4f3488: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f348e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f3490: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f3493: jp 0x4f34bf */
  if (pf) goto L_4f34bf;
L_4f3495: /* 4f3495: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f3499: fmul dword ptr [0x5694f8] */
  ST0 = ST0 * (F32((uint32_t)(0x5694f8u)));
/* 4f349f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f34a3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4f34a7: fmul dword ptr [0x5694f8] */
  ST0 = ST0 * (F32((uint32_t)(0x5694f8u)));
/* 4f34ad: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f34b1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f34b5: fmul dword ptr [0x5694f8] */
  ST0 = ST0 * (F32((uint32_t)(0x5694f8u)));
/* 4f34bb: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_4f34bf: /* 4f34bf: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f34c3: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 4f34c6: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 4f34ca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f34cc: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* 4f34d4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4f34d6: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 4f34da: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f34dc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 4f34df: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 4f34e1: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 4f34e4: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4f34e8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 4f34ec: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 4f34f0: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 4f34f4: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 4f34f8: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f34fc: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 4f3500: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 4f3504: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f3506: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f3508: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f350a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f350d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f350f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f3512: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f3514: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f3517: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f351a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f351d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f3520: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f3523: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f3526: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f3529: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f352c: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f352f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3531: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f3533: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3535: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3537: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3539: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f353c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f353f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3542: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f3545: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3548: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f354b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f354e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f3551: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3553: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f3555: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3557: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3559: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f355b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f355e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f3561: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3564: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f3567: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f356a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f356d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3570: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f3573: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3575: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f3577: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3579: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f357b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f357d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f357f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f3581: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f3583: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f3586: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f3589: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f358c: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 4f3590: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 4f3594: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 4f3598: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 4f359c: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 4f35a0: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 4f35a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f35a8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f35aa: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 4f35ae: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 4f35b2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f35b6: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f35b9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4f35bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f35c0: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 4f35c4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f35c8: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 4f35cc: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 4f35d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f35d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f35d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f35d4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4f35d8: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 4f35dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f35de: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 4f35e1: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 4f35e5: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f35e8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4f3690(void) {
  LOAD_REGS();
L_4f3690: /* 4f3690: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f3693: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 4f3697: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f369a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f369d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f369f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4f36a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f36a4: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4f36a8: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f36ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f36ad: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f36b1: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 4f36b9: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 4f36bd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4f36c1: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 4f36c5: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 4f36c9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f36cb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 4f36cd: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f36cf: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 4f36d2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f36d4: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 4f36d7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f36d9: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f36dc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f36df: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f36e2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f36e5: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 4f36e8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f36eb: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 4f36ee: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f36f1: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 4f36f4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f36f6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f36f8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f36fa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f36fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f36fe: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3701: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 4f3704: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3707: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 4f370a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f370d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 4f3710: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 4f3713: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 4f3716: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3718: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f371a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f371c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f371e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3720: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3723: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 4f3726: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3729: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 4f372c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f372f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 4f3732: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 4f3735: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 4f3738: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f373a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 4f373c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f373e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 4f3740: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3742: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 4f3744: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 4f3746: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 4f3748: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 4f374b: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 4f374e: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 4f3751: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 4f3755: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f3758: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f375a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f375e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f3761: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3762: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f3766: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 4f3769: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 4f376d: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 4f3770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3771: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 4f3774: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 4f3777: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 4f377a: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 4f377d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f377f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f3781: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f3783: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f3785: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f3787: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4f3789: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f378b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f378d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f3791: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f3795: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f3797: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f3799: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f379b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f379d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4f379f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 4f37a1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 4f37a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f37a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 4f37a7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 4f37a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f37ab: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f37af: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f37b3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4f37b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f37b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f37b9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f37bb: jae 0x4f37c3 */
  if (!cf) goto L_4f37c3;
L_4f37bd: /* 4f37bd: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f37c1: jmp 0x4f37c7 */
  goto L_4f37c7;
L_4f37c3: /* 4f37c3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f37c7: /* 4f37c7: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f37cb: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 4f37cf: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f37d3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 4f37d7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f37db: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 4f37df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f37e1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f37e5: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 4f37e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f37eb: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f37ef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f37f3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4f37f5: jb 0x4f37fd */
  if (cf) goto L_4f37fd;
L_4f37f7: /* 4f37f7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f37f9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f37fd: /* 4f37fd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f3800: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4f3803: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x4f3808u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 4f3808: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f380c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 4f380f: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 4f3813: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 4f3817: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 4f381b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f381d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 4f3821: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f3824: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f3827: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 4f382b: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 4f382e: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 4f3832: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f3835: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f38b0(void) {
  LOAD_REGS();
L_4f38b0: /* 4f38b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f38b2: push 0x555518 */
  { uint32_t v = 0x555518u; esp -= 4; W32(esp, v); }
/* 4f38b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f38bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f38be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f38c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f38c6: xor eax, eax */
  eax = 0;
/* 4f38c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f38c9: mov esi, ecx */
  esi = ecx;
/* 4f38cb: mov ecx, 1 */
  ecx = 0x1u;
/* 4f38d0: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 4f38d4: mov dword ptr [esi + 4], 0x7e */
  W32((uint32_t)(esi + 0x4u), 0x7eu);
/* 4f38db: mov dword ptr [esi + 8], 0x7d0 */
  W32((uint32_t)(esi + 0x8u), 0x7d0u);
/* 4f38e2: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 4f38e5: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 4f38e8: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 4f38eb: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 4f38ee: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 4f38f1: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 4f38f4: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 4f38f7: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 4f38fa: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 4f38fd: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 4f3900: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 4f3903: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 4f3906: mov dword ptr [esi + 0x3c], 0xffffffff */
  W32((uint32_t)(esi + 0x3cu), 0xffffffffu);
/* 4f390d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4f3911: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 4f3915: mov dword ptr [esi], 0x569500 */
  W32((uint32_t)(esi), 0x569500u);
/* 4f391b: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4f391e: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 4f3921: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f3923: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3924: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x4f3927u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4f3927: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f392b: mov eax, esi */
  eax = esi;
/* 4f392d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f392e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f3935: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f3938: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3970(void) {
  LOAD_REGS();
L_4f3970: /* 4f3970: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 4f3973: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3990(void) {
  LOAD_REGS();
L_4f3990: /* 4f3990: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 4f3993: ret  */
  esp += 4; SPILL(); return;
}

void f_4f39b0(void) {
  LOAD_REGS();
L_4f39b0: /* 4f39b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f39b4: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 4f39b7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4f39b9: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 4f39bc: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* 4f39bf: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f39c3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f39c5: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* 4f39c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f39e0(void) {
  LOAD_REGS();
L_4f39e0: /* 4f39e0: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 4f39e6: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3a00(void) {
  LOAD_REGS();
L_4f3a00: /* 4f3a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3a01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3a02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4f3a06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3a07: mov esi, ecx */
  esi = ecx;
/* 4f3a09: call 0x4e2973 */
  esp -= 4; W32(esp, 0x4f3a0eu); SPILL(); f_4e2973(); if (g_unwind) return; RELOAD();
/* 4f3a0e: mov dword ptr [esi], 0x569500 */
  W32((uint32_t)(esi), 0x569500u);
/* 4f3a14: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 4f3a17: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4f3a1a: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 4f3a1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3a1e: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 4f3a21: mov eax, esi */
  eax = esi;
/* 4f3a23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3a24: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3a40(void) {
  LOAD_REGS();
L_4f3a40: /* 4f3a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3a41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3a42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4f3a46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3a47: mov esi, ecx */
  esi = ecx;
/* 4f3a49: call 0x4e2b71 */
  esp -= 4; W32(esp, 0x4f3a4eu); SPILL(); f_4e2b71(); if (g_unwind) return; RELOAD();
/* 4f3a4e: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 4f3a51: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4f3a54: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 4f3a57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3a58: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 4f3a5b: mov eax, esi */
  eax = esi;
/* 4f3a5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3a5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3a80(void) {
  LOAD_REGS();
L_4f3a80: /* 4f3a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3a81: mov esi, ecx */
  esi = ecx;
/* 4f3a83: call 0x4e3a44 */
  esp -= 4; W32(esp, 0x4f3a88u); SPILL(); f_4e3a44(); if (g_unwind) return; RELOAD();
/* 4f3a88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f3a8d: je 0x4f3a9b */
  if (zf) goto L_4f3a9b;
L_4f3a8f: /* 4f3a8f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f3a95: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f3a97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3a98: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x4f3a9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f3a9b: /* 4f3a9b: mov eax, esi */
  eax = esi;
/* 4f3a9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3a9e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3ac0(void) {
  LOAD_REGS();
L_4f3ac0: /* 4f3ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f3ac1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4f3ac5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f3ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3ac9: mov esi, ecx */
  esi = ecx;
/* 4f3acb: je 0x4f3afb */
  if (zf) goto L_4f3afb;
L_4f3acd: /* 4f3acd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4f3ad0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3ad1: push 0x4e3a44 */
  { uint32_t v = 0x4e3a44u; esp -= 4; W32(esp, v); }
/* 4f3ad6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4f3ad9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3ada: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 4f3adc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3add: call 0x554e72 */
  esp -= 4; W32(esp, 0x4f3ae2u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4f3ae2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f3ae5: je 0x4f3af3 */
  if (zf) goto L_4f3af3;
L_4f3ae7: /* 4f3ae7: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f3aed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f3aef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3af0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4f3af3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f3af3: /* 4f3af3: mov eax, edi */
  eax = edi;
/* 4f3af5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3af6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3af7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f3af8: ret 4 */
  esp += 8; SPILL(); return;
L_4f3afb: /* 4f3afb: mov ecx, esi */
  ecx = esi;
/* 4f3afd: call 0x4e3a44 */
  esp -= 4; W32(esp, 0x4f3b02u); SPILL(); f_4e3a44(); if (g_unwind) return; RELOAD();
/* 4f3b02: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f3b05: je 0x4f3b13 */
  if (zf) goto L_4f3b13;
L_4f3b07: /* 4f3b07: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f3b0d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f3b0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3b10: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x4f3b13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f3b13: /* 4f3b13: mov eax, esi */
  eax = esi;
/* 4f3b15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3b16: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f3b17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3b40(void) {
  LOAD_REGS();
L_4f3b40: /* 4f3b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3b41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4f3b45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3b46: mov eax, ecx */
  eax = ecx;
/* 4f3b48: mov ecx, 9 */
  ecx = 0x9u;
/* 4f3b4d: mov edi, eax */
  edi = eax;
/* 4f3b4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f3b51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3b52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3b53: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3b70(void) {
  LOAD_REGS();
L_4f3b70: /* 4f3b70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3b71: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4f3b75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3b76: mov eax, ecx */
  eax = ecx;
/* 4f3b78: mov ecx, 7 */
  ecx = 0x7u;
/* 4f3b7d: mov edi, eax */
  edi = eax;
/* 4f3b7f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f3b81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3b82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3b83: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3ba0(void) {
  LOAD_REGS();
L_4f3ba0: /* 4f3ba0: mov eax, ecx */
  eax = ecx;
/* 4f3ba2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f3ba6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f3ba8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f3baa: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4f3bad: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f3bb0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3bd0(void) {
  LOAD_REGS();
L_4f3bd0: /* 4f3bd0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f3bd3: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f3bd8: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3bf0(void) {
  LOAD_REGS();
L_4f3bf0: /* 4f3bf0: movzx eax, word ptr [ecx + 6] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x6u)));
/* 4f3bf4: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3c10(void) {
  LOAD_REGS();
L_4f3c10: /* 4f3c10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f3c14: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f3c18: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4f3c1b: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4f3c1d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 4f3c20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f3c40(void) {
  LOAD_REGS();
L_4f3c40: /* 4f3c40: mov eax, 0x6a1450 */
  eax = 0x6a1450u;
/* 4f3c45: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3c60(void) {
  LOAD_REGS();
L_4f3c60: /* 4f3c60: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f3c65: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f3c69: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f3c6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f3c6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f3c71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3c72: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f3c76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f3c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f3c79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f3c7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3c7b: push 0x6a1450 */
  { uint32_t v = 0x6a1450u; esp -= 4; W32(esp, v); }
/* 4f3c80: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x4f3c85u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 4f3c85: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f3c88: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3ca0(void) {
  LOAD_REGS();
L_4f3ca0: /* 4f3ca0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f3ca4: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3cc0(void) {
  LOAD_REGS();
L_4f3cc0: /* 4f3cc0: mov eax, 0x6a2930 */
  eax = 0x6a2930u;
/* 4f3cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3ce0(void) {
  LOAD_REGS();
L_4f3ce0: /* 4f3ce0: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f3ce5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f3ce9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f3ced: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f3cef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f3cf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3cf2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4f3cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f3cf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f3cf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f3cfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3cfb: push 0x6a2930 */
  { uint32_t v = 0x6a2930u; esp -= 4; W32(esp, v); }
/* 4f3d00: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x4f3d05u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 4f3d05: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f3d08: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3d20(void) {
  LOAD_REGS();
L_4f3d20: /* 4f3d20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f3d24: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3d40(void) {
  LOAD_REGS();
L_4f3d40: /* 4f3d40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f3d44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f3d46: je 0x4f3d4d */
  if (zf) goto L_4f3d4d;
L_4f3d48: /* 4f3d48: jmp 0x4e2fae */
  SPILL(); f_4e2fae(); return;
L_4f3d4d: /* 4f3d4d: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3d60(void) {
  LOAD_REGS();
L_4f3d60: /* 4f3d60: mov eax, ecx */
  eax = ecx;
/* 4f3d62: xor ecx, ecx */
  ecx = 0;
/* 4f3d64: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f3d66: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f3d69: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f3d6c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3d80(void) {
  LOAD_REGS();
L_4f3d80: /* 4f3d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f3d84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3d85: mov esi, ecx */
  esi = ecx;
/* 4f3d87: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f3d89: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 4f3d8f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f3d92: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f3d95: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f3d9au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f3d9a: mov eax, esi */
  eax = esi;
/* 4f3d9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3d9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3db0(void) {
  LOAD_REGS();
L_4f3db0: /* 4f3db0: mov eax, ecx */
  eax = ecx;
/* 4f3db2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3dd0(void) {
  LOAD_REGS();
L_4f3dd0: /* 4f3dd0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f3dd2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f3dd6: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 4f3dd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3df0(void) {
  LOAD_REGS();
L_4f3df0: /* 4f3df0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f3df2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f3df6: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 4f3df9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3e10(void) {
  LOAD_REGS();
L_4f3e10: /* 4f3e10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3e11: mov esi, ecx */
  esi = ecx;
/* 4f3e13: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f3e16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3e17: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4f3e1b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f3e1d: jl 0x4f3e36 */
  if ((sf != of)) goto L_4f3e36;
L_4f3e1f: /* 4f3e1f: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 4f3e24: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f3e29: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 4f3e2e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f3e33u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f3e33: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f3e36: /* 4f3e36: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f3e39: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f3e3b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4f3e3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3e3e: lea eax, [ecx + eax*2 - 2] */
  eax = (uint32_t)(ecx + eax*2 + 0xfffffffeu);
/* 4f3e42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3e43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3e60(void) {
  LOAD_REGS();
L_4f3e60: /* 4f3e60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f3e63: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f3e67: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f3e69: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4f3e6b: lea eax, [ecx + eax*2 - 2] */
  eax = (uint32_t)(ecx + eax*2 + 0xfffffffeu);
/* 4f3e6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3e90(void) {
  LOAD_REGS();
L_4f3e90: /* 4f3e90: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f3e93: cmp dword ptr [ecx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f3e96: je 0x4f3ea2 */
  if (zf) goto L_4f3ea2;
L_4f3e98: /* 4f3e98: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f3e9a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f3e9d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f3ea2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f3ea2: /* 4f3ea2: ret  */
  esp += 4; SPILL(); return;
}

void f_4f3ec0(void) {
  LOAD_REGS();
L_4f3ec0: /* 4f3ec0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f3ec4: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 4f3eca: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f3ecd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f3ecf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3ed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3ed1: jle 0x4f3eec */
  if ((zf || sf != of)) goto L_4f3eec;
L_4f3ed3: /* 4f3ed3: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_4f3ed7: /* 4f3ed7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f3ed9: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 4f3edb: mov di, word ptr [edi + edx*2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + edx*2))) & 0xffffu);
/* 4f3edf: cmp di, word ptr [esi] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esi)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f3ee2: je 0x4f3ef3 */
  if (zf) goto L_4f3ef3;
L_4f3ee4: /* 4f3ee4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4f3ee5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f3ee7: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f3eea: jl 0x4f3ed7 */
  if ((sf != of)) goto L_4f3ed7;
L_4f3eec: /* 4f3eec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3eed: xor eax, eax */
  eax = 0;
/* 4f3eef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3ef0: ret 8 */
  esp += 12; SPILL(); return;
L_4f3ef3: /* 4f3ef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3ef4: mov eax, 1 */
  eax = 0x1u;
/* 4f3ef9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3efa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f3f10(void) {
  LOAD_REGS();
L_4f3f10: /* 4f3f10: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f3f13: xor eax, eax */
  eax = 0;
/* 4f3f15: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f3f17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3f18: jle 0x4f3f30 */
  if ((zf || sf != of)) goto L_4f3f30;
L_4f3f1a: /* 4f3f1a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4f3f1e: mov si, word ptr [esi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4f3f21: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_4f3f23: /* 4f3f23: cmp word ptr [ecx], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f3f26: je 0x4f3f33 */
  if (zf) goto L_4f3f33;
L_4f3f28: /* 4f3f28: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f3f29: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f3f2c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f3f2e: jl 0x4f3f23 */
  if ((sf != of)) goto L_4f3f23;
L_4f3f30: /* 4f3f30: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4f3f33: /* 4f3f33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3f34: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3f50(void) {
  LOAD_REGS();
L_4f3f50: /* 4f3f50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3f51: mov eax, ecx */
  eax = ecx;
/* 4f3f53: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 4f3f56: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4f3f59: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f3f5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f3f5f: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 4f3f61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3f62: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4f3f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3f65: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x4f3f68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4f3f68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3f69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3f80(void) {
  LOAD_REGS();
L_4f3f80: /* 4f3f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f3f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f3f85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f3f86: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 4f3f89: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 4f3f8c: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f3f8f: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 4f3f92: jle 0x4f3fae */
  if ((zf || sf != of)) goto L_4f3fae;
L_4f3f94: /* 4f3f94: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 4f3f97: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f3f98: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f3f9b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f3f9d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f3fa0: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 4f3fa4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f3fa6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f3fa9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f3faeu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f3fae: /* 4f3fae: mov eax, edi */
  eax = edi;
/* 4f3fb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f3fb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f3fb2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f3fd0(void) {
  LOAD_REGS();
L_4f3fd0: /* 4f3fd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f3fd4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f3fd8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f3fda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f3fdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f3fdc: call 0x4e1a2d */
  esp -= 4; W32(esp, 0x4f3fe1u); SPILL(); f_4e1a2d(); if (g_unwind) return; RELOAD();
/* 4f3fe1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f4000(void) {
  LOAD_REGS();
L_4f4000: /* 4f4000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4001: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f4002: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4003: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4f4007: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f4009: mov esi, ecx */
  esi = ecx;
/* 4f400b: jge 0x4f4024 */
  if ((sf == of)) goto L_4f4024;
L_4f400d: /* 4f400d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4f4012: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4017: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4f401c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4021u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4021: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4024: /* 4f4024: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4027: jle 0x4f4040 */
  if ((zf || sf != of)) goto L_4f4040;
L_4f4029: /* 4f4029: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f402e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4033: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f4038: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f403du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f403d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4040: /* 4f4040: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4f4044: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f4047: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4f404a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f404c: jle 0x4f4065 */
  if ((zf || sf != of)) goto L_4f4065;
L_4f404e: /* 4f404e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f4053: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4058: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f405d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4062u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4062: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4065: /* 4f4065: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f4067: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4068: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4069: mov ecx, esi */
  ecx = esi;
/* 4f406b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f4070u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f4070: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4071: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4072: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f4073: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f40a0(void) {
  LOAD_REGS();
L_4f40a0: /* 4f40a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f40a4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4f40ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f40ae: mov dword ptr [esp + 4], 2 */
  W32((uint32_t)(esp + 0x4u), 0x2u);
/* 4f40b6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4f40d0(void) {
  LOAD_REGS();
L_4f40d0: /* 4f40d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f40d1: mov esi, ecx */
  esi = ecx;
/* 4f40d3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f40d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f40d7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f40da: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f40dd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f40df: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f40e2: jle 0x4f4100 */
  if ((zf || sf != of)) goto L_4f4100;
L_4f40e4: /* 4f40e4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f40e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f40e8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f40eb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f40ed: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f40f0: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f40f4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f40f6: mov ecx, esi */
  ecx = esi;
/* 4f40f8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f40fb: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f4100u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f4100: /* 4f4100: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f4104: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f4106: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 4f4109: mov word ptr [ecx + edi*2], ax */
  W16((uint32_t)(ecx + edi*2), (eax & 0xffffu));
/* 4f410d: mov eax, edi */
  eax = edi;
/* 4f410f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4110: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4111: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4140(void) {
  LOAD_REGS();
L_4f4140: /* 4f4140: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4144: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f4145: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f4147: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x4f414cu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 4f414c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4160(void) {
  LOAD_REGS();
L_4f4160: /* 4f4160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4161: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4f4165: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f4166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f4167: mov esi, ecx */
  esi = ecx;
/* 4f4169: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f416a: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f416d: xor eax, eax */
  eax = 0;
/* 4f416f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f4171: jle 0x4f4188 */
  if ((zf || sf != of)) goto L_4f4188;
L_4f4173: /* 4f4173: mov dx, word ptr [ebx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 4f4176: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_4f4178: /* 4f4178: cmp word ptr [ecx], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f417b: je 0x4f41bc */
  if (zf) goto L_4f41bc;
L_4f417d: /* 4f417d: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 4f4180: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f4181: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f4184: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4186: jl 0x4f4178 */
  if ((sf != of)) goto L_4f4178;
L_4f4188: /* 4f4188: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f418b: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f418e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4190: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f4193: jle 0x4f41b1 */
  if ((zf || sf != of)) goto L_4f41b1;
L_4f4195: /* 4f4195: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f4198: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f4199: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f419c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f419e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f41a1: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f41a5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f41a7: mov ecx, esi */
  ecx = esi;
/* 4f41a9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f41ac: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f41b1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f41b1: /* 4f41b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f41b3: mov dx, word ptr [ebx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 4f41b6: mov word ptr [ecx + edi*2], dx */
  W16((uint32_t)(ecx + edi*2), (edx & 0xffffu));
/* 4f41ba: mov eax, edi */
  eax = edi;
L_4f41bc: /* 4f41bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f41bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f41be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f41bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f41c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f41f0(void) {
  LOAD_REGS();
L_4f41f0: /* 4f41f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f41f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f41f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f41f3: mov edi, ecx */
  edi = ecx;
/* 4f41f5: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 4f41f8: xor esi, esi */
  esi = 0;
/* 4f41fa: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f41fc: jle 0x4f4222 */
  if ((zf || sf != of)) goto L_4f4222;
L_4f41fe: /* 4f41fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f41ff: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_4f4203: /* 4f4203: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4f4205: mov cx, word ptr [eax + esi*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + esi*2))) & 0xffffu);
/* 4f4209: cmp cx, word ptr [ebx] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f420c: jne 0x4f4219 */
  if (!zf) goto L_4f4219;
L_4f420e: /* 4f420e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f4210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f4211: mov ecx, edi */
  ecx = edi;
/* 4f4213: call 0x4e2748 */
  esp -= 4; W32(esp, 0x4f4218u); SPILL(); f_4e2748(); if (g_unwind) return; RELOAD();
/* 4f4218: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_4f4219: /* 4f4219: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f421c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4f421d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f421f: jl 0x4f4203 */
  if ((sf != of)) goto L_4f4203;
L_4f4221: /* 4f4221: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4f4222: /* 4f4222: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4f4225: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4226: mov eax, ebp */
  eax = ebp;
/* 4f4228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4229: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4f422b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f422c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4240(void) {
  LOAD_REGS();
L_4f4240: /* 4f4240: mov eax, ecx */
  eax = ecx;
/* 4f4242: xor ecx, ecx */
  ecx = 0;
/* 4f4244: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f4246: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f4249: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f424c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4260(void) {
  LOAD_REGS();
L_4f4260: /* 4f4260: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4262: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f4266: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4280(void) {
  LOAD_REGS();
L_4f4280: /* 4f4280: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4282: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f4286: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f42a0(void) {
  LOAD_REGS();
L_4f42a0: /* 4f42a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f42a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f42a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f42a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f42c0(void) {
  LOAD_REGS();
L_4f42c0: /* 4f42c0: mov eax, ecx */
  eax = ecx;
/* 4f42c2: xor ecx, ecx */
  ecx = 0;
/* 4f42c4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f42c6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f42c9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f42cc: ret  */
  esp += 4; SPILL(); return;
}

void f_4f42e0(void) {
  LOAD_REGS();
L_4f42e0: /* 4f42e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f42e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f42e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f42e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4300(void) {
  LOAD_REGS();
L_4f4300: /* 4f4300: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4302: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4306: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f4309: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4320(void) {
  LOAD_REGS();
L_4f4320: /* 4f4320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4324: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4326: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4329: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f432c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4340(void) {
  LOAD_REGS();
L_4f4340: /* 4f4340: mov eax, ecx */
  eax = ecx;
/* 4f4342: xor ecx, ecx */
  ecx = 0;
/* 4f4344: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f4346: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f4349: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f434c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4360(void) {
  LOAD_REGS();
L_4f4360: /* 4f4360: mov eax, ecx */
  eax = ecx;
/* 4f4362: xor ecx, ecx */
  ecx = 0;
/* 4f4364: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f4366: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f4369: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f436c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4380(void) {
  LOAD_REGS();
L_4f4380: /* 4f4380: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4382: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4386: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f4389: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f43a0(void) {
  LOAD_REGS();
L_4f43a0: /* 4f43a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f43a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f43a6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f43a9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f43ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f43c0(void) {
  LOAD_REGS();
L_4f43c0: /* 4f43c0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f43c3: xor eax, eax */
  eax = 0;
/* 4f43c5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f43c7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 4f43ca: ret  */
  esp += 4; SPILL(); return;
}

void f_4f43e0(void) {
  LOAD_REGS();
L_4f43e0: /* 4f43e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f43e3: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4400(void) {
  LOAD_REGS();
L_4f4400: /* 4f4400: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4402: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4420(void) {
  LOAD_REGS();
L_4f4420: /* 4f4420: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f4423: xor eax, eax */
  eax = 0;
/* 4f4425: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4427: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 4f442a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4440(void) {
  LOAD_REGS();
L_4f4440: /* 4f4440: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f4443: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4460(void) {
  LOAD_REGS();
L_4f4460: /* 4f4460: mov eax, ecx */
  eax = ecx;
/* 4f4462: xor ecx, ecx */
  ecx = 0;
/* 4f4464: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f4466: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f4469: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f446c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4480(void) {
  LOAD_REGS();
L_4f4480: /* 4f4480: mov eax, ecx */
  eax = ecx;
/* 4f4482: xor ecx, ecx */
  ecx = 0;
/* 4f4484: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f4486: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f4489: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f448c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f44a0(void) {
  LOAD_REGS();
L_4f44a0: /* 4f44a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f44a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f44a6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f44a9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f44ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f44c0(void) {
  LOAD_REGS();
L_4f44c0: /* 4f44c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f44c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f44c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f44c9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f44cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f44e0(void) {
  LOAD_REGS();
L_4f44e0: /* 4f44e0: mov eax, 1 */
  eax = 0x1u;
/* 4f44e5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4500(void) {
  LOAD_REGS();
L_4f4500: /* 4f4500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4501: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f4502: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4503: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4f4507: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f4509: mov esi, ecx */
  esi = ecx;
/* 4f450b: jge 0x4f4524 */
  if ((sf == of)) goto L_4f4524;
L_4f450d: /* 4f450d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4f4512: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4517: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4f451c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4521u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4521: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4524: /* 4f4524: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4527: jle 0x4f4540 */
  if ((zf || sf != of)) goto L_4f4540;
L_4f4529: /* 4f4529: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f452e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4533: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f4538: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f453du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f453d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4540: /* 4f4540: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4f4544: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f4547: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4f454a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f454c: jle 0x4f4565 */
  if ((zf || sf != of)) goto L_4f4565;
L_4f454e: /* 4f454e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f4553: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4558: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f455d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4562u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4562: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4565: /* 4f4565: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f4567: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4568: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4569: mov ecx, esi */
  ecx = esi;
/* 4f456b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f4570u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f4570: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4571: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4572: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f4573: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f45a0(void) {
  LOAD_REGS();
L_4f45a0: /* 4f45a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f45a4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4f45ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f45ae: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 4f45b6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4f45d0(void) {
  LOAD_REGS();
L_4f45d0: /* 4f45d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f45d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f45d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f45d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f45f0(void) {
  LOAD_REGS();
L_4f45f0: /* 4f45f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f45f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f45f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f45f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4f45f7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f45f9: mov esi, ecx */
  esi = ecx;
/* 4f45fb: jge 0x4f4614 */
  if ((sf == of)) goto L_4f4614;
L_4f45fd: /* 4f45fd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4f4602: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4607: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4f460c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4611u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4611: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4614: /* 4f4614: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4617: jle 0x4f4630 */
  if ((zf || sf != of)) goto L_4f4630;
L_4f4619: /* 4f4619: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f461e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4623: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f4628: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f462du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f462d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4630: /* 4f4630: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4f4634: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f4637: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4f463a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f463c: jle 0x4f4655 */
  if ((zf || sf != of)) goto L_4f4655;
L_4f463e: /* 4f463e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f4643: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4648: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f464d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4652u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4652: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4655: /* 4f4655: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f4657: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4658: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4659: mov ecx, esi */
  ecx = esi;
/* 4f465b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f4660u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f4660: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4661: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4662: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f4663: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f4690(void) {
  LOAD_REGS();
L_4f4690: /* 4f4690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4694: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4f469b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f469e: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 4f46a6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4f46c0(void) {
  LOAD_REGS();
L_4f46c0: /* 4f46c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f46c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f46c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f46c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f46e0(void) {
  LOAD_REGS();
L_4f46e0: /* 4f46e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f46e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f46e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f46e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4f46e7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f46e9: mov esi, ecx */
  esi = ecx;
/* 4f46eb: jge 0x4f4704 */
  if ((sf == of)) goto L_4f4704;
L_4f46ed: /* 4f46ed: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4f46f2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f46f7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4f46fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4701u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4701: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4704: /* 4f4704: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4707: jle 0x4f4720 */
  if ((zf || sf != of)) goto L_4f4720;
L_4f4709: /* 4f4709: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f470e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4713: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f4718: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f471du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f471d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4720: /* 4f4720: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4f4724: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f4727: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4f472a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f472c: jle 0x4f4745 */
  if ((zf || sf != of)) goto L_4f4745;
L_4f472e: /* 4f472e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f4733: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4738: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f473d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4742u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4742: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4745: /* 4f4745: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f4747: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4748: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4749: mov ecx, esi */
  ecx = esi;
/* 4f474b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f4750u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f4750: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4751: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4752: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f4753: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f4780(void) {
  LOAD_REGS();
L_4f4780: /* 4f4780: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4782: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4786: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f4789: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f47a0(void) {
  LOAD_REGS();
L_4f47a0: /* 4f47a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f47a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f47a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f47a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f47c0(void) {
  LOAD_REGS();
L_4f47c0: /* 4f47c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f47c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f47c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f47c9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f47cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f47e0(void) {
  LOAD_REGS();
L_4f47e0: /* 4f47e0: mov eax, 1 */
  eax = 0x1u;
/* 4f47e5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4800(void) {
  LOAD_REGS();
L_4f4800: /* 4f4800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4804: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4806: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4809: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f480c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4820(void) {
  LOAD_REGS();
L_4f4820: /* 4f4820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4824: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4826: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 4f4829: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 4f482c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4840(void) {
  LOAD_REGS();
L_4f4840: /* 4f4840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4844: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4846: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 4f4849: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 4f484c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4860(void) {
  LOAD_REGS();
L_4f4860: /* 4f4860: mov eax, ecx */
  eax = ecx;
/* 4f4862: xor ecx, ecx */
  ecx = 0;
/* 4f4864: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f4866: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f4869: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f486c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4880(void) {
  LOAD_REGS();
L_4f4880: /* 4f4880: mov eax, ecx */
  eax = ecx;
/* 4f4882: xor ecx, ecx */
  ecx = 0;
/* 4f4884: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f4886: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f4889: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f488c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f48a0(void) {
  LOAD_REGS();
L_4f48a0: /* 4f48a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f48a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f48a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f48a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f48c0(void) {
  LOAD_REGS();
L_4f48c0: /* 4f48c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f48c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f48c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f48c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4f48c7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f48c9: mov esi, ecx */
  esi = ecx;
/* 4f48cb: jge 0x4f48e4 */
  if ((sf == of)) goto L_4f48e4;
L_4f48cd: /* 4f48cd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 4f48d2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f48d7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 4f48dc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f48e1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f48e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f48e4: /* 4f48e4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f48e7: jle 0x4f4900 */
  if ((zf || sf != of)) goto L_4f4900;
L_4f48e9: /* 4f48e9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 4f48ee: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f48f3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 4f48f8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f48fdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f48fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4900: /* 4f4900: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4f4904: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f4907: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 4f490a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f490c: jle 0x4f4925 */
  if ((zf || sf != of)) goto L_4f4925;
L_4f490e: /* 4f490e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 4f4913: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f4918: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 4f491d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f4922u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f4922: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f4925: /* 4f4925: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f4927: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f4928: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4929: mov ecx, esi */
  ecx = esi;
/* 4f492b: call 0x4e438b */
  esp -= 4; W32(esp, 0x4f4930u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 4f4930: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4931: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4932: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f4933: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f4960(void) {
  LOAD_REGS();
L_4f4960: /* 4f4960: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4964: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4f496b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f496e: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 4f4976: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4f4990(void) {
  LOAD_REGS();
L_4f4990: /* 4f4990: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4992: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4996: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 4f4999: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f49b0(void) {
  LOAD_REGS();
L_4f49b0: /* 4f49b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f49b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f49b6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 4f49b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f49d0(void) {
  LOAD_REGS();
L_4f49d0: /* 4f49d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f49d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f49d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f49d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f49f0(void) {
  LOAD_REGS();
L_4f49f0: /* 4f49f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f49f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f49f6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f49f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4a10(void) {
  LOAD_REGS();
L_4f4a10: /* 4f4a10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4a14: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4a16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4a19: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4a1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4a30(void) {
  LOAD_REGS();
L_4f4a30: /* 4f4a30: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4a32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4a36: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f4a39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4a50(void) {
  LOAD_REGS();
L_4f4a50: /* 4f4a50: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4a52: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4a56: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 4f4a59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4a70(void) {
  LOAD_REGS();
L_4f4a70: /* 4f4a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f4a71: mov esi, ecx */
  esi = ecx;
/* 4f4a73: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f4a76: je 0x4f4ac0 */
  if (zf) goto L_4f4ac0;
L_4f4a78: /* 4f4a78: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f4a7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4a7d: je 0x4f4aa8 */
  if (zf) goto L_4f4aa8;
L_4f4a7f: /* 4f4a7f: nop  */
L_4f4a80: /* 4f4a80: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f4a83: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4f4a86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4a88: je 0x4f4a9e */
  if (zf) goto L_4f4a9e;
L_4f4a8a: /* 4f4a8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_4f4a90: /* 4f4a90: cmp eax, 0x5f0318 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0318u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f4a95: je 0x4f4ac0 */
  if (zf) goto L_4f4ac0;
L_4f4a97: /* 4f4a97: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 4f4a9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4a9c: jne 0x4f4a90 */
  if (!zf) goto L_4f4a90;
L_4f4a9e: /* 4f4a9e: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 4f4aa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4aa3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f4aa6: jne 0x4f4a80 */
  if (!zf) goto L_4f4a80;
L_4f4aa8: /* 4f4aa8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f4aaa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f4aac: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x4f4aafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4f4aaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4ab1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4f4ab3: je 0x4f4abb */
  if (zf) goto L_4f4abb;
L_4f4ab5: /* 4f4ab5: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 4f4ab8: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_4f4abb: /* 4f4abb: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f4abe: jne 0x4f4a78 */
  if (!zf) goto L_4f4a78;
L_4f4ac0: /* 4f4ac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4ac1: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4af0(void) {
  LOAD_REGS();
L_4f4af0: /* 4f4af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f4af1: mov esi, ecx */
  esi = ecx;
/* 4f4af3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f4af6: je 0x4f4b43 */
  if (zf) goto L_4f4b43;
L_4f4af8: /* 4f4af8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4af9: mov edi, 0x8000 */
  edi = 0x8000u;
/* 4f4afe: mov edi, edi */
  edi = edi;
L_4f4b00: /* 4f4b00: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f4b03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b05: je 0x4f4b2a */
  if (zf) goto L_4f4b2a;
L_4f4b07: /* 4f4b07: jmp 0x4f4b10 */
  goto L_4f4b10;
L_4f4b10: /* 4f4b10: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f4b13: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 4f4b16: test dword ptr [ecx + 0x498], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b1c: jne 0x4f4b42 */
  if (!zf) goto L_4f4b42;
L_4f4b1e: /* 4f4b1e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 4f4b21: mov eax, edx */
  eax = edx;
/* 4f4b23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b25: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 4f4b28: jne 0x4f4b10 */
  if (!zf) goto L_4f4b10;
L_4f4b2a: /* 4f4b2a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f4b2c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4b2e: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x4f4b31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4f4b31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b33: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4f4b35: je 0x4f4b3d */
  if (zf) goto L_4f4b3d;
L_4f4b37: /* 4f4b37: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 4f4b3a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_4f4b3d: /* 4f4b3d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f4b40: jne 0x4f4b00 */
  if (!zf) goto L_4f4b00;
L_4f4b42: /* 4f4b42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f4b43: /* 4f4b43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4b44: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4b09(void) {
  LOAD_REGS();
  goto L_4f4b09;
L_4f4b00: /* 4f4b00: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f4b03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b05: je 0x4f4b2a */
  if (zf) goto L_4f4b2a;
L_4f4b07: /* 4f4b07: jmp 0x4f4b10 */
  goto L_4f4b10;
L_4f4b09: /* 4f4b09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4f4b10: /* 4f4b10: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f4b13: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 4f4b16: test dword ptr [ecx + 0x498], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b1c: jne 0x4f4b42 */
  if (!zf) goto L_4f4b42;
L_4f4b1e: /* 4f4b1e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 4f4b21: mov eax, edx */
  eax = edx;
/* 4f4b23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b25: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 4f4b28: jne 0x4f4b10 */
  if (!zf) goto L_4f4b10;
L_4f4b2a: /* 4f4b2a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f4b2c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4b2e: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x4f4b31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4f4b31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f4b33: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4f4b35: je 0x4f4b3d */
  if (zf) goto L_4f4b3d;
L_4f4b37: /* 4f4b37: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 4f4b3a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_4f4b3d: /* 4f4b3d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f4b40: jne 0x4f4b00 */
  if (!zf) goto L_4f4b00;
L_4f4b42: /* 4f4b42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4b43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4b44: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4b70(void) {
  LOAD_REGS();
L_4f4b70: /* 4f4b70: mov eax, ecx */
  eax = ecx;
/* 4f4b72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4b90(void) {
  LOAD_REGS();
L_4f4b90: /* 4f4b90: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4b92: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4b96: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 4f4b99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4bb0(void) {
  LOAD_REGS();
L_4f4bb0: /* 4f4bb0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4bb2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4bb6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 4f4bb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4bd0(void) {
  LOAD_REGS();
L_4f4bd0: /* 4f4bd0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4bd2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4bd6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 4f4bd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4bf0(void) {
  LOAD_REGS();
L_4f4bf0: /* 4f4bf0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f4bf2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4bf6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 4f4bf9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4c10(void) {
  LOAD_REGS();
L_4f4c10: /* 4f4c10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4c14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f4c16: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 4f4c19: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f4c1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4c30(void) {
  LOAD_REGS();
L_4f4c30: /* 4f4c30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4c34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f4c36: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 4f4c39: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f4c3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4c50(void) {
  LOAD_REGS();
L_4f4c50: /* 4f4c50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4c54: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4c56: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 4f4c59: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4c5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4c70(void) {
  LOAD_REGS();
L_4f4c70: /* 4f4c70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4c74: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4c76: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 4f4c79: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4c7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4c90(void) {
  LOAD_REGS();
L_4f4c90: /* 4f4c90: mov eax, 1 */
  eax = 0x1u;
/* 4f4c95: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4cb0(void) {
  LOAD_REGS();
L_4f4cb0: /* 4f4cb0: mov eax, 1 */
  eax = 0x1u;
/* 4f4cb5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4cd0(void) {
  LOAD_REGS();
L_4f4cd0: /* 4f4cd0: mov eax, 1 */
  eax = 0x1u;
/* 4f4cd5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4cf0(void) {
  LOAD_REGS();
L_4f4cf0: /* 4f4cf0: mov eax, 1 */
  eax = 0x1u;
/* 4f4cf5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4d10(void) {
  LOAD_REGS();
L_4f4d10: /* 4f4d10: mov eax, 1 */
  eax = 0x1u;
/* 4f4d15: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4d30(void) {
  LOAD_REGS();
L_4f4d30: /* 4f4d30: mov eax, 1 */
  eax = 0x1u;
/* 4f4d35: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4d50(void) {
  LOAD_REGS();
L_4f4d50: /* 4f4d50: mov eax, 1 */
  eax = 0x1u;
/* 4f4d55: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4d70(void) {
  LOAD_REGS();
L_4f4d70: /* 4f4d70: mov eax, 1 */
  eax = 0x1u;
/* 4f4d75: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4d90(void) {
  LOAD_REGS();
L_4f4d90: /* 4f4d90: mov eax, 1 */
  eax = 0x1u;
/* 4f4d95: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4db0(void) {
  LOAD_REGS();
L_4f4db0: /* 4f4db0: mov eax, 1 */
  eax = 0x1u;
/* 4f4db5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4dd0(void) {
  LOAD_REGS();
L_4f4dd0: /* 4f4dd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4dd4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4dd6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4dd9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4ddc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4df0(void) {
  LOAD_REGS();
L_4f4df0: /* 4f4df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4df4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4df6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4df9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4dfc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4e10(void) {
  LOAD_REGS();
L_4f4e10: /* 4f4e10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4e14: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4e16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4e19: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4e1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4e30(void) {
  LOAD_REGS();
L_4f4e30: /* 4f4e30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4e34: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4e36: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4e39: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4e3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4e50(void) {
  LOAD_REGS();
L_4f4e50: /* 4f4e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4e54: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f4e56: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f4e59: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f4e5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f4e70(void) {
  LOAD_REGS();
L_4f4e70: /* 4f4e70: mov eax, 1 */
  eax = 0x1u;
/* 4f4e75: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4e90(void) {
  LOAD_REGS();
L_4f4e90: /* 4f4e90: mov eax, 1 */
  eax = 0x1u;
/* 4f4e95: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4eb0(void) {
  LOAD_REGS();
L_4f4eb0: /* 4f4eb0: mov eax, 1 */
  eax = 0x1u;
/* 4f4eb5: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4ed0(void) {
  LOAD_REGS();
L_4f4ed0: /* 4f4ed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4ed4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4f4edb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f4ede: mov dword ptr [esp + 4], 0xc */
  W32((uint32_t)(esp + 0x4u), 0xcu);
/* 4f4ee6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4f4f00(void) {
  LOAD_REGS();
L_4f4f00: /* 4f4f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4f04: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4f4f0b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f4f0e: mov dword ptr [esp + 4], 0xc */
  W32((uint32_t)(esp + 0x4u), 0xcu);
/* 4f4f16: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4f4f30(void) {
  LOAD_REGS();
L_4f4f30: /* 4f4f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f4f34: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 4f4f3b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f4f3e: mov dword ptr [esp + 4], 0xc */
  W32((uint32_t)(esp + 0x4u), 0xcu);
/* 4f4f46: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_4f4f60(void) {
  LOAD_REGS();
L_4f4f60: /* 4f4f60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4f64: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f4f68: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4f6a: jl 0x4f4f76 */
  if ((sf != of)) goto L_4f4f76;
L_4f4f6c: /* 4f4f6c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f4f70: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4f72: jge 0x4f4f76 */
  if ((sf == of)) goto L_4f4f76;
L_4f4f74: /* 4f4f74: mov eax, ecx */
  eax = ecx;
L_4f4f76: /* 4f4f76: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4f90(void) {
  LOAD_REGS();
L_4f4f90: /* 4f4f90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f4f94: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f4f98: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4f4f9a: jb 0x4f4fa6 */
  if (cf) goto L_4f4fa6;
L_4f4f9c: /* 4f4f9c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f4fa0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4f4fa2: jae 0x4f4fa6 */
  if (!cf) goto L_4f4fa6;
L_4f4fa4: /* 4f4fa4: mov eax, ecx */
  eax = ecx;
L_4f4fa6: /* 4f4fa6: ret  */
  esp += 4; SPILL(); return;
}

void f_4f4fc0(void) {
  LOAD_REGS();
L_4f4fc0: /* 4f4fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f4fc1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f4fc5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f4fc8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f4fc9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f4fcc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f4fcf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f4fd1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f4fd4: jle 0x4f4ff2 */
  if ((zf || sf != of)) goto L_4f4ff2;
L_4f4fd6: /* 4f4fd6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f4fd9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f4fda: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f4fdd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f4fdf: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f4fe2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f4fe6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f4fe8: mov ecx, esi */
  ecx = esi;
/* 4f4fea: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f4fed: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f4ff2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f4ff2: /* 4f4ff2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f4ff4: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f4ff7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f4ff8: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f4ffb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f4ffc: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5010(void) {
  LOAD_REGS();
L_4f5010: /* 4f5010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5011: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5015: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5018: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5019: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f501c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f501f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5021: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5024: jle 0x4f5042 */
  if ((zf || sf != of)) goto L_4f5042;
L_4f5026: /* 4f5026: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5029: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f502a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f502d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f502f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5032: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5036: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f5038: mov ecx, esi */
  ecx = esi;
/* 4f503a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f503d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5042u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5042: /* 4f5042: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f5044: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f5047: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5048: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f504b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f504c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5060(void) {
  LOAD_REGS();
L_4f5060: /* 4f5060: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f5064: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f5068: lea eax, [eax + ecx - 1] */
  eax = (uint32_t)(eax + ecx + 0xffffffffu);
/* 4f506c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4f506d: not ecx */
  ecx = ~ecx;
/* 4f506f: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f5071: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5090(void) {
  LOAD_REGS();
L_4f5090: /* 4f5090: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f5094: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 4f5098: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f509a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f509d: jne 0x4f50a4 */
  if (!zf) goto L_4f50a4;
L_4f509f: /* 4f509f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f50a3: ret  */
  esp += 4; SPILL(); return;
L_4f50a4: /* 4f50a4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f50a8: ret  */
  esp += 4; SPILL(); return;
}

void f_4f50c0(void) {
  LOAD_REGS();
L_4f50c0: /* 4f50c0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f50c4: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f50ca: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f50ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f50d0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f50d3: je 0x4f50d7 */
  if (zf) goto L_4f50d7;
L_4f50d5: /* 4f50d5: fchs  */
  ST0 = -ST0;
L_4f50d7: /* 4f50d7: ret  */
  esp += 4; SPILL(); return;
}

void f_4f50f0(void) {
  LOAD_REGS();
L_4f50f0: /* 4f50f0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f50f4: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 4f50f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f50fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f50fd: jp 0x4f5104 */
  if (pf) goto L_4f5104;
L_4f50ff: /* 4f50ff: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f5103: ret  */
  esp += 4; SPILL(); return;
L_4f5104: /* 4f5104: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f5108: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5120(void) {
  LOAD_REGS();
L_4f5120: /* 4f5120: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f5124: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 4f5128: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f512a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f512d: jp 0x4f5134 */
  if (pf) goto L_4f5134;
L_4f512f: /* 4f512f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f5133: ret  */
  esp += 4; SPILL(); return;
L_4f5134: /* 4f5134: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f5138: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 4f513c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f513e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f5141: jp 0x4f5148 */
  if (pf) goto L_4f5148;
L_4f5143: /* 4f5143: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f5147: ret  */
  esp += 4; SPILL(); return;
L_4f5148: /* 4f5148: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f514c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5160(void) {
  LOAD_REGS();
L_4f5160: /* 4f5160: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f5164: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f516a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f516c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f516f: jne 0x4f517e */
  if (!zf) goto L_4f517e;
L_4f5171: /* 4f5171: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 4f5179: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f517d: ret  */
  esp += 4; SPILL(); return;
L_4f517e: /* 4f517e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f5182: mov dword ptr [esp + 4], 0xffffffff */
  W32((uint32_t)(esp + 0x4u), 0xffffffffu);
/* 4f518a: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f5190: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f5192: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f5195: jnp 0x4f519f */
  if (!pf) goto L_4f519f;
L_4f5197: /* 4f5197: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
L_4f519f: /* 4f519f: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f51a3: ret  */
  esp += 4; SPILL(); return;
}

void f_4f51d0(void) {
  LOAD_REGS();
L_4f51d0: /* 4f51d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f51d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f51d6: jge 0x4f51da */
  if ((sf == of)) goto L_4f51da;
L_4f51d8: /* 4f51d8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_4f51da: /* 4f51da: ret  */
  esp += 4; SPILL(); return;
}

void f_4f51f0(void) {
  LOAD_REGS();
L_4f51f0: /* 4f51f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f51f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f51f5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f51f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f51f9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f51fc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f51ff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5201: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5204: jle 0x4f5222 */
  if ((zf || sf != of)) goto L_4f5222;
L_4f5206: /* 4f5206: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5209: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f520a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f520d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f520f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5212: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5216: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f5218: mov ecx, esi */
  ecx = esi;
/* 4f521a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f521d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5222u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5222: /* 4f5222: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5224: lea eax, [ecx + edi*2] */
  eax = (uint32_t)(ecx + edi*2);
/* 4f5227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5229: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5240(void) {
  LOAD_REGS();
L_4f5240: /* 4f5240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5241: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5245: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5248: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5249: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f524c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f524f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5251: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5254: jle 0x4f5272 */
  if ((zf || sf != of)) goto L_4f5272;
L_4f5256: /* 4f5256: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5259: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f525a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f525d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f525f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5262: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5266: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4f5268: mov ecx, esi */
  ecx = esi;
/* 4f526a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f526d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5272u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5272: /* 4f5272: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f5274: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f5276: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5277: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5278: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5290(void) {
  LOAD_REGS();
L_4f5290: /* 4f5290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5291: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5295: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5298: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5299: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f529c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f529f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f52a1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f52a4: jle 0x4f52c2 */
  if ((zf || sf != of)) goto L_4f52c2;
L_4f52a6: /* 4f52a6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f52a9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f52aa: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f52ad: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f52af: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f52b2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f52b6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f52b8: mov ecx, esi */
  ecx = esi;
/* 4f52ba: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f52bd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f52c2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f52c2: /* 4f52c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f52c4: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f52c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f52c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f52c9: ret  */
  esp += 4; SPILL(); return;
}

void f_4f52e0(void) {
  LOAD_REGS();
L_4f52e0: /* 4f52e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f52e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f52e5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f52e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f52e9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f52ec: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f52ef: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f52f1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f52f4: jle 0x4f5312 */
  if ((zf || sf != of)) goto L_4f5312;
L_4f52f6: /* 4f52f6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f52f9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f52fa: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f52fd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f52ff: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5302: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5306: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f5308: mov ecx, esi */
  ecx = esi;
/* 4f530a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f530d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5312u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5312: /* 4f5312: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5314: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f5317: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5318: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5319: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5330(void) {
  LOAD_REGS();
L_4f5330: /* 4f5330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5331: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5335: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5338: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5339: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f533c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f533f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5341: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5344: jle 0x4f5362 */
  if ((zf || sf != of)) goto L_4f5362;
L_4f5346: /* 4f5346: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5349: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f534a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f534d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f534f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5352: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5356: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f5358: mov ecx, esi */
  ecx = esi;
/* 4f535a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f535d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5362u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5362: /* 4f5362: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5364: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f5367: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5368: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5369: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5380(void) {
  LOAD_REGS();
L_4f5380: /* 4f5380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5381: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5385: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5388: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5389: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f538c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f538f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5391: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5394: jle 0x4f53b2 */
  if ((zf || sf != of)) goto L_4f53b2;
L_4f5396: /* 4f5396: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5399: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f539a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f539d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f539f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f53a2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f53a6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f53a8: mov ecx, esi */
  ecx = esi;
/* 4f53aa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f53ad: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f53b2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f53b2: /* 4f53b2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f53b4: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f53b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f53b8: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f53bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f53bc: ret  */
  esp += 4; SPILL(); return;
}

void f_4f53d0(void) {
  LOAD_REGS();
L_4f53d0: /* 4f53d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f53d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f53d5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f53d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f53d9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f53dc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f53df: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f53e1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f53e4: jle 0x4f5402 */
  if ((zf || sf != of)) goto L_4f5402;
L_4f53e6: /* 4f53e6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f53e9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f53ea: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f53ed: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f53ef: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f53f2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f53f6: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 4f53f8: mov ecx, esi */
  ecx = esi;
/* 4f53fa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f53fd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5402u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5402: /* 4f5402: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f5404: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 4f5407: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5408: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 4f540b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f540c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5420(void) {
  LOAD_REGS();
L_4f5420: /* 4f5420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5421: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5425: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5428: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5429: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f542c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f542f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5431: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5434: jle 0x4f5452 */
  if ((zf || sf != of)) goto L_4f5452;
L_4f5436: /* 4f5436: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5439: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f543a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f543d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f543f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5442: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5446: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f5448: mov ecx, esi */
  ecx = esi;
/* 4f544a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f544d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5452u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5452: /* 4f5452: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5454: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f5457: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5459: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5470(void) {
  LOAD_REGS();
L_4f5470: /* 4f5470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5471: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5475: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5478: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5479: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f547c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f547f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5481: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5484: jle 0x4f54a2 */
  if ((zf || sf != of)) goto L_4f54a2;
L_4f5486: /* 4f5486: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5489: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f548a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f548d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f548f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5492: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5496: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4f5498: mov ecx, esi */
  ecx = esi;
/* 4f549a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f549d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f54a2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f54a2: /* 4f54a2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f54a4: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 4f54a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f54a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f54a9: ret  */
  esp += 4; SPILL(); return;
}

void f_4f54c0(void) {
  LOAD_REGS();
L_4f54c0: /* 4f54c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f54c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f54c5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f54c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f54c9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f54cc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f54cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f54d1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f54d4: jle 0x4f54f2 */
  if ((zf || sf != of)) goto L_4f54f2;
L_4f54d6: /* 4f54d6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f54d9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f54da: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f54dd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f54df: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f54e2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f54e6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f54e8: mov ecx, esi */
  ecx = esi;
/* 4f54ea: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f54ed: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f54f2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f54f2: /* 4f54f2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f54f4: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f54f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f54f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f54f9: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5510(void) {
  LOAD_REGS();
L_4f5510: /* 4f5510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5511: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5515: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5518: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5519: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f551c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f551f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5521: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5524: jle 0x4f5542 */
  if ((zf || sf != of)) goto L_4f5542;
L_4f5526: /* 4f5526: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5529: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f552a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f552d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f552f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5532: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5536: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4f5538: mov ecx, esi */
  ecx = esi;
/* 4f553a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f553d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5542u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5542: /* 4f5542: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5544: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* 4f5547: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5548: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5549: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5560(void) {
  LOAD_REGS();
L_4f5560: /* 4f5560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5561: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5565: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5568: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5569: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f556c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f556f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5571: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5574: jle 0x4f5592 */
  if ((zf || sf != of)) goto L_4f5592;
L_4f5576: /* 4f5576: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5579: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f557a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f557d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f557f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5582: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5586: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4f5588: mov ecx, esi */
  ecx = esi;
/* 4f558a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f558d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5592u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5592: /* 4f5592: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5594: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 4f5597: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5598: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5599: ret  */
  esp += 4; SPILL(); return;
}

void f_4f55b0(void) {
  LOAD_REGS();
L_4f55b0: /* 4f55b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f55b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f55b5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f55b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f55b9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f55bc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f55bf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f55c1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f55c4: jle 0x4f55e2 */
  if ((zf || sf != of)) goto L_4f55e2;
L_4f55c6: /* 4f55c6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f55c9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f55ca: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f55cd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f55cf: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f55d2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f55d6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4f55d8: mov ecx, esi */
  ecx = esi;
/* 4f55da: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f55dd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f55e2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f55e2: /* 4f55e2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f55e4: lea eax, [ecx + edi*8] */
  eax = (uint32_t)(ecx + edi*8);
/* 4f55e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f55e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f55e9: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5600(void) {
  LOAD_REGS();
L_4f5600: /* 4f5600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5601: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5605: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5608: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5609: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f560c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f560f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5611: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5614: jle 0x4f5632 */
  if ((zf || sf != of)) goto L_4f5632;
L_4f5616: /* 4f5616: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5619: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f561a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f561d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f561f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5622: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5626: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 4f5628: mov ecx, esi */
  ecx = esi;
/* 4f562a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f562d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5632u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5632: /* 4f5632: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5634: mov eax, edi */
  eax = edi;
/* 4f5636: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 4f5639: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f563a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f563c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f563d: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5650(void) {
  LOAD_REGS();
L_4f5650: /* 4f5650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5651: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5655: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5658: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5659: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f565c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f565f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5661: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5664: jle 0x4f5682 */
  if ((zf || sf != of)) goto L_4f5682;
L_4f5666: /* 4f5666: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5669: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f566a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f566d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f566f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5672: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5676: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 4f5678: mov ecx, esi */
  ecx = esi;
/* 4f567a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f567d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5682u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5682: /* 4f5682: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f5684: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 4f5687: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5688: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f568b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f568c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f56a0(void) {
  LOAD_REGS();
L_4f56a0: /* 4f56a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f56a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f56a5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f56a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f56a9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f56ac: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f56af: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f56b1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f56b4: jle 0x4f56d2 */
  if ((zf || sf != of)) goto L_4f56d2;
L_4f56b6: /* 4f56b6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f56b9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f56ba: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f56bd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f56bf: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f56c2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f56c6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f56c8: mov ecx, esi */
  ecx = esi;
/* 4f56ca: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f56cd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f56d2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f56d2: /* 4f56d2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f56d4: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f56d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f56d8: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f56db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f56dc: ret  */
  esp += 4; SPILL(); return;
}

void f_4f56f0(void) {
  LOAD_REGS();
L_4f56f0: /* 4f56f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f56f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f56f5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f56f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f56f9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f56fc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f56ff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5701: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5704: jle 0x4f5722 */
  if ((zf || sf != of)) goto L_4f5722;
L_4f5706: /* 4f5706: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5709: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f570a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f570d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f570f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5712: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5716: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f5718: mov ecx, esi */
  ecx = esi;
/* 4f571a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f571d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5722u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5722: /* 4f5722: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f5724: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f5727: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5728: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f572b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f572c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5740(void) {
  LOAD_REGS();
L_4f5740: /* 4f5740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5741: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f5745: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4f5748: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5749: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4f574c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f574f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f5751: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f5754: jle 0x4f5772 */
  if ((zf || sf != of)) goto L_4f5772;
L_4f5756: /* 4f5756: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f5759: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f575a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f575d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f575f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5762: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f5766: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f5768: mov ecx, esi */
  ecx = esi;
/* 4f576a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f576d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5772u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5772: /* 4f5772: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f5774: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f5777: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5778: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 4f577b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f577c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5790(void) {
  LOAD_REGS();
L_4f5790: /* 4f5790: mov eax, ecx */
  eax = ecx;
/* 4f5792: mov dword ptr [eax], 0x56956c */
  W32((uint32_t)(eax), 0x56956cu);
/* 4f5798: ret  */
  esp += 4; SPILL(); return;
}

void f_4f57b0(void) {
  LOAD_REGS();
L_4f57b0: /* 4f57b0: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f57b5: push 0x5a3898 */
  { uint32_t v = 0x5a3898u; esp -= 4; W32(esp, v); }
/* 4f57ba: push 0x5a3850 */
  { uint32_t v = 0x5a3850u; esp -= 4; W32(esp, v); }
/* 4f57bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f57c0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f57c5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f57c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f57c8: xor eax, eax */
  eax = 0;
/* 4f57ca: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f57e0(void) {
  LOAD_REGS();
L_4f57e0: /* 4f57e0: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f57e5: push 0x5a38b0 */
  { uint32_t v = 0x5a38b0u; esp -= 4; W32(esp, v); }
/* 4f57ea: push 0x5a3850 */
  { uint32_t v = 0x5a3850u; esp -= 4; W32(esp, v); }
/* 4f57ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f57f0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f57f5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f57f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f57f8: xor eax, eax */
  eax = 0;
/* 4f57fa: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4f5810(void) {
  LOAD_REGS();
L_4f5810: /* 4f5810: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f5815: push 0x5a38cc */
  { uint32_t v = 0x5a38ccu; esp -= 4; W32(esp, v); }
/* 4f581a: push 0x5a3850 */
  { uint32_t v = 0x5a3850u; esp -= 4; W32(esp, v); }
/* 4f581f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5820: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f5825u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f5825: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5828: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5840(void) {
  LOAD_REGS();
L_4f5840: /* 4f5840: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f5845: push 0x5a38e0 */
  { uint32_t v = 0x5a38e0u; esp -= 4; W32(esp, v); }
/* 4f584a: push 0x5a3850 */
  { uint32_t v = 0x5a3850u; esp -= 4; W32(esp, v); }
/* 4f584f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5850: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f5855u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f5855: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5858: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5870(void) {
  LOAD_REGS();
L_4f5870: /* 4f5870: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f5875: push 0x5a3904 */
  { uint32_t v = 0x5a3904u; esp -= 4; W32(esp, v); }
/* 4f587a: push 0x5a3850 */
  { uint32_t v = 0x5a3850u; esp -= 4; W32(esp, v); }
/* 4f587f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5880: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f5885u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f5885: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5888: ret  */
  esp += 4; SPILL(); return;
}

void f_4f58a0(void) {
  LOAD_REGS();
L_4f58a0: /* 4f58a0: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f58a5: push 0x5a3924 */
  { uint32_t v = 0x5a3924u; esp -= 4; W32(esp, v); }
/* 4f58aa: push 0x5a3850 */
  { uint32_t v = 0x5a3850u; esp -= 4; W32(esp, v); }
/* 4f58af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f58b0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f58b5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f58b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f58b8: ret  */
  esp += 4; SPILL(); return;
}

void f_4f58d0(void) {
  LOAD_REGS();
L_4f58d0: /* 4f58d0: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f58d5: push 0x5a3954 */
  { uint32_t v = 0x5a3954u; esp -= 4; W32(esp, v); }
/* 4f58da: push 0x5a3850 */
  { uint32_t v = 0x5a3850u; esp -= 4; W32(esp, v); }
/* 4f58df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f58e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f58e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f58e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f58e8: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5900(void) {
  LOAD_REGS();
L_4f5900: /* 4f5900: mov eax, ecx */
  eax = ecx;
/* 4f5902: mov dword ptr [eax], 0x569594 */
  W32((uint32_t)(eax), 0x569594u);
/* 4f5908: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5920(void) {
  LOAD_REGS();
L_4f5920: /* 4f5920: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f5925: push 0x5a3988 */
  { uint32_t v = 0x5a3988u; esp -= 4; W32(esp, v); }
/* 4f592a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f592b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f5930u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f5930: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5933: xor eax, eax */
  eax = 0;
/* 4f5935: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4f5950(void) {
  LOAD_REGS();
L_4f5950: /* 4f5950: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 4f5955: push 0x5a39f0 */
  { uint32_t v = 0x5a39f0u; esp -= 4; W32(esp, v); }
/* 4f595a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f595b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x4f5960u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 4f5960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5963: xor eax, eax */
  eax = 0;
/* 4f5965: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4f5980(void) {
  LOAD_REGS();
L_4f5980: /* 4f5980: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4f5983: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f59a0(void) {
  LOAD_REGS();
L_4f59a0: /* 4f59a0: xor eax, eax */
  eax = 0;
/* 4f59a2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4f59c0(void) {
  LOAD_REGS();
L_4f59c0: /* 4f59c0: mov eax, 1 */
  eax = 0x1u;
/* 4f59c5: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_4f59e0(void) {
  LOAD_REGS();
L_4f59e0: /* 4f59e0: xor eax, eax */
  eax = 0;
/* 4f59e2: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_4f5a00(void) {
  LOAD_REGS();
L_4f5a00: /* 4f5a00: xor eax, eax */
  eax = 0;
/* 4f5a02: xor edx, edx */
  edx = 0;
/* 4f5a04: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5a20(void) {
  LOAD_REGS();
L_4f5a20: /* 4f5a20: xor eax, eax */
  eax = 0;
/* 4f5a22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5a40(void) {
  LOAD_REGS();
L_4f5a40: /* 4f5a40: xor eax, eax */
  eax = 0;
/* 4f5a42: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f5a60(void) {
  LOAD_REGS();
L_4f5a60: /* 4f5a60: xor eax, eax */
  eax = 0;
/* 4f5a62: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4f5a80(void) {
  LOAD_REGS();
L_4f5a80: /* 4f5a80: xor eax, eax */
  eax = 0;
/* 4f5a82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5aa0(void) {
  LOAD_REGS();
L_4f5aa0: /* 4f5aa0: mov eax, ecx */
  eax = ecx;
/* 4f5aa2: mov dword ptr [eax], 0x5695dc */
  W32((uint32_t)(eax), 0x5695dcu);
/* 4f5aa8: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5ac0(void) {
  LOAD_REGS();
L_4f5ac0: /* 4f5ac0: mov eax, ecx */
  eax = ecx;
/* 4f5ac2: mov dword ptr [eax], 0x5695dc */
  W32((uint32_t)(eax), 0x5695dcu);
/* 4f5ac8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5ae0(void) {
  LOAD_REGS();
L_4f5ae0: /* 4f5ae0: mov eax, ecx */
  eax = ecx;
/* 4f5ae2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5b00(void) {
  LOAD_REGS();
L_4f5b00: /* 4f5b00: mov eax, ecx */
  eax = ecx;
/* 4f5b02: mov dword ptr [eax], 0x5695ec */
  W32((uint32_t)(eax), 0x5695ecu);
/* 4f5b08: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5b20(void) {
  LOAD_REGS();
L_4f5b20: /* 4f5b20: mov eax, ecx */
  eax = ecx;
/* 4f5b22: mov dword ptr [eax], 0x5695ec */
  W32((uint32_t)(eax), 0x5695ecu);
/* 4f5b28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5b40(void) {
  LOAD_REGS();
L_4f5b40: /* 4f5b40: mov eax, ecx */
  eax = ecx;
/* 4f5b42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5b60(void) {
  LOAD_REGS();
L_4f5b60: /* 4f5b60: mov eax, ecx */
  eax = ecx;
/* 4f5b62: mov dword ptr [eax], 0x5695f8 */
  W32((uint32_t)(eax), 0x5695f8u);
/* 4f5b68: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5b80(void) {
  LOAD_REGS();
L_4f5b80: /* 4f5b80: mov eax, ecx */
  eax = ecx;
/* 4f5b82: mov dword ptr [eax], 0x5695f8 */
  W32((uint32_t)(eax), 0x5695f8u);
/* 4f5b88: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5ba0(void) {
  LOAD_REGS();
L_4f5ba0: /* 4f5ba0: mov eax, ecx */
  eax = ecx;
/* 4f5ba2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5bc0(void) {
  LOAD_REGS();
L_4f5bc0: /* 4f5bc0: mov eax, ecx */
  eax = ecx;
/* 4f5bc2: mov dword ptr [eax], 0x569604 */
  W32((uint32_t)(eax), 0x569604u);
/* 4f5bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5be0(void) {
  LOAD_REGS();
L_4f5be0: /* 4f5be0: mov eax, ecx */
  eax = ecx;
/* 4f5be2: mov dword ptr [eax], 0x569604 */
  W32((uint32_t)(eax), 0x569604u);
/* 4f5be8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5c00(void) {
  LOAD_REGS();
L_4f5c00: /* 4f5c00: mov eax, ecx */
  eax = ecx;
/* 4f5c02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5c20(void) {
  LOAD_REGS();
L_4f5c20: /* 4f5c20: mov eax, ecx */
  eax = ecx;
/* 4f5c22: xor ecx, ecx */
  ecx = 0;
/* 4f5c24: mov edx, 1 */
  edx = 0x1u;
/* 4f5c29: mov dword ptr [eax + 4], 0x7e */
  W32((uint32_t)(eax + 0x4u), 0x7eu);
/* 4f5c30: mov dword ptr [eax + 8], 0x7d0 */
  W32((uint32_t)(eax + 0x8u), 0x7d0u);
/* 4f5c37: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f5c3a: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4f5c3d: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 4f5c40: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 4f5c43: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 4f5c46: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 4f5c49: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 4f5c4c: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 4f5c4f: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 4f5c52: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 4f5c55: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 4f5c58: mov dword ptr [eax + 0x3c], 0xffffffff */
  W32((uint32_t)(eax + 0x3cu), 0xffffffffu);
/* 4f5c5f: mov dword ptr [eax], 0x569610 */
  W32((uint32_t)(eax), 0x569610u);
/* 4f5c65: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4f5c68: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5c90(void) {
  LOAD_REGS();
L_4f5c90: /* 4f5c90: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 4f5c96: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5cb0(void) {
  LOAD_REGS();
L_4f5cb0: /* 4f5cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f5cb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5cb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5cb6: mov esi, ecx */
  esi = ecx;
/* 4f5cb8: call 0x4e2973 */
  esp -= 4; W32(esp, 0x4f5cbdu); SPILL(); f_4e2973(); if (g_unwind) return; RELOAD();
/* 4f5cbd: mov dword ptr [esi], 0x569610 */
  W32((uint32_t)(esi), 0x569610u);
/* 4f5cc3: mov eax, esi */
  eax = esi;
/* 4f5cc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5cc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5ce0(void) {
  LOAD_REGS();
L_4f5ce0: /* 4f5ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f5ce4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5ce5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5ce6: mov esi, ecx */
  esi = ecx;
/* 4f5ce8: call 0x4e2b71 */
  esp -= 4; W32(esp, 0x4f5cedu); SPILL(); f_4e2b71(); if (g_unwind) return; RELOAD();
/* 4f5ced: mov eax, esi */
  eax = esi;
/* 4f5cef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5cf0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5d10(void) {
  LOAD_REGS();
L_4f5d10: /* 4f5d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5d11: mov esi, ecx */
  esi = ecx;
/* 4f5d13: call 0x4e1e74 */
  esp -= 4; W32(esp, 0x4f5d18u); SPILL(); f_4e1e74(); if (g_unwind) return; RELOAD();
/* 4f5d18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5d1d: je 0x4f5d2b */
  if (zf) goto L_4f5d2b;
L_4f5d1f: /* 4f5d1f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f5d25: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f5d27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5d28: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x4f5d2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f5d2b: /* 4f5d2b: mov eax, esi */
  eax = esi;
/* 4f5d2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5d2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5d50(void) {
  LOAD_REGS();
L_4f5d50: /* 4f5d50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f5d51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4f5d55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5d58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5d59: mov esi, ecx */
  esi = ecx;
/* 4f5d5b: je 0x4f5d8b */
  if (zf) goto L_4f5d8b;
L_4f5d5d: /* 4f5d5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 4f5d60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5d61: push 0x4e1e74 */
  { uint32_t v = 0x4e1e74u; esp -= 4; W32(esp, v); }
/* 4f5d66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4f5d69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5d6a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4f5d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5d6d: call 0x554e72 */
  esp -= 4; W32(esp, 0x4f5d72u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 4f5d72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5d75: je 0x4f5d83 */
  if (zf) goto L_4f5d83;
L_4f5d77: /* 4f5d77: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f5d7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 4f5d7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5d80: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x4f5d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f5d83: /* 4f5d83: mov eax, edi */
  eax = edi;
/* 4f5d85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5d86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5d87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f5d88: ret 4 */
  esp += 8; SPILL(); return;
L_4f5d8b: /* 4f5d8b: mov ecx, esi */
  ecx = esi;
/* 4f5d8d: call 0x4e1e74 */
  esp -= 4; W32(esp, 0x4f5d92u); SPILL(); f_4e1e74(); if (g_unwind) return; RELOAD();
/* 4f5d92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5d95: je 0x4f5da3 */
  if (zf) goto L_4f5da3;
L_4f5d97: /* 4f5d97: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 4f5d9d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f5d9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5da0: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x4f5da3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_4f5da3: /* 4f5da3: mov eax, esi */
  eax = esi;
/* 4f5da5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5da6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f5da7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5dd0(void) {
  LOAD_REGS();
L_4f5dd0: /* 4f5dd0: mov eax, ecx */
  eax = ecx;
/* 4f5dd2: xor ecx, ecx */
  ecx = 0;
/* 4f5dd4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f5dd6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f5dd9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f5ddc: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5df0(void) {
  LOAD_REGS();
L_4f5df0: /* 4f5df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f5df1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 4f5df5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f5df6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5df7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5df8: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f5dfc: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 4f5dff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f5e00: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f5e03: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f5e05: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5e08: mov esi, ecx */
  esi = ecx;
/* 4f5e0a: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 4f5e0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5e0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f5e0e: call dword ptr [ebp + 4] */
  { uint32_t t = R32((uint32_t)(ebp + 0x4u)); esp -= 4; W32(esp, 0x4f5e11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4f5e11: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4f5e14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5e16: je 0x4f5e37 */
  if (zf) goto L_4f5e37;
L_4f5e18: /* 4f5e18: mov eax, edi */
  eax = edi;
/* 4f5e1a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f5e1b: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f5e1e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f5e20: mov ecx, edi */
  ecx = edi;
/* 4f5e22: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4f5e25: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4f5e27: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4f5e29: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f5e2c: mov cl, byte ptr [eax + ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebx))) & 0xffu);
/* 4f5e2f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f5e31: dec dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4f5e33: and cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4f5e35: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
L_4f5e37: /* 4f5e37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5e38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5e39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f5e3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f5e3b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f5e60(void) {
  LOAD_REGS();
L_4f5e60: /* 4f5e60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f5e62: mov dword ptr [esp + 8], 4 */
  W32((uint32_t)(esp + 0x8u), 0x4u);
/* 4f5e6a: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_4f5e80(void) {
  LOAD_REGS();
L_4f5e80: /* 4f5e80: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f5e83: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4f5e87: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f5e8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f5e8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5e8e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f5e92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f5e93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5e94: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 4f5e98: call 0x4e1a2d */
  esp -= 4; W32(esp, 0x4f5e9du); SPILL(); f_4e1a2d(); if (g_unwind) return; RELOAD();
/* 4f5e9d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f5ea1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4f5ea5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f5ea9: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 4f5eac: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 4f5eaf: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f5eb3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 4f5eb7: add edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4f5eb9: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 4f5ebd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f5ec1: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4f5ec5: xor eax, eax */
  eax = 0;
/* 4f5ec7: mov ebx, ecx */
  ebx = ecx;
/* 4f5ec9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4f5ecc: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4f5ecf: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 4f5ed1: mov ecx, ebx */
  ecx = ebx;
/* 4f5ed3: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 4f5ed5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5ed6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f5ed7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5eda: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4f5f00(void) {
  LOAD_REGS();
L_4f5f00: /* 4f5f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5f01: mov esi, ecx */
  esi = ecx;
/* 4f5f03: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f5f05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5f06: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4f5f0a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f5f0c: je 0x4f5f47 */
  if (zf) goto L_4f5f47;
L_4f5f0e: /* 4f5f0e: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f5f12: je 0x4f5f20 */
  if (zf) goto L_4f5f20;
L_4f5f14: /* 4f5f14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5f15: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x4f5f1au); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 4f5f1a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5f1d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f5f1e: jmp 0x4f5f22 */
  goto L_4f5f22;
L_4f5f20: /* 4f5f20: xor eax, eax */
  eax = 0;
L_4f5f22: /* 4f5f22: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f5f24: mov ecx, esi */
  ecx = esi;
/* 4f5f26: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f5f29: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f5f2c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5f31u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f5f31: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f5f34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5f36: je 0x4f5f47 */
  if (zf) goto L_4f5f47;
L_4f5f38: /* 4f5f38: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f5f3a: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f5f3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f5f3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5f3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f5f3f: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4f5f44u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4f5f44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f5f47: /* 4f5f47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f5f48: mov eax, esi */
  eax = esi;
/* 4f5f4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f5f4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f5f70(void) {
  LOAD_REGS();
L_4f5f70: /* 4f5f70: xor eax, eax */
  eax = 0;
/* 4f5f72: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f5f74: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 4f5f77: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f5f7a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5f7fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f5f7f: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5f90(void) {
  LOAD_REGS();
L_4f5f90: /* 4f5f90: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f5f93: cmp dword ptr [ecx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f5f96: je 0x4f5fa2 */
  if (zf) goto L_4f5fa2;
L_4f5f98: /* 4f5f98: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f5f9a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4f5f9d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f5fa2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f5fa2: /* 4f5fa2: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5fc0(void) {
  LOAD_REGS();
L_4f5fc0: /* 4f5fc0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f5fc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5fc5: je 0x4f5fca */
  if (zf) goto L_4f5fca;
L_4f5fc7: /* 4f5fc7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f5fc9: ret  */
  esp += 4; SPILL(); return;
L_4f5fca: /* 4f5fca: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4f5fcf: ret  */
  esp += 4; SPILL(); return;
}

void f_4f5fe0(void) {
  LOAD_REGS();
L_4f5fe0: /* 4f5fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f5fe1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f5fe2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5fe3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4f5fe7: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f5feb: mov esi, ecx */
  esi = ecx;
/* 4f5fed: je 0x4f6055 */
  if (zf) goto L_4f6055;
L_4f5fef: /* 4f5fef: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 4f5ff2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f5ff3: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x4f5ff8u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 4f5ff8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f5ffb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f5ffd: je 0x4f6040 */
  if (zf) goto L_4f6040;
L_4f5fff: /* 4f5fff: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4f6002: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f6004: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f6007: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f600a: jle 0x4f6028 */
  if ((zf || sf != of)) goto L_4f6028;
L_4f600c: /* 4f600c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f600f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f6010: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f6013: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f6015: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f6018: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f601c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f601e: mov ecx, esi */
  ecx = esi;
/* 4f6020: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f6023: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f6028u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f6028: /* 4f6028: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f602a: lea edx, [ecx + ebx*2 - 2] */
  edx = (uint32_t)(ecx + ebx*2 + 0xfffffffeu);
/* 4f602e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f602f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6030: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x4f6035u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 4f6035: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6038: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6039: mov eax, esi */
  eax = esi;
/* 4f603b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f603c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f603d: ret 4 */
  esp += 8; SPILL(); return;
L_4f6040: /* 4f6040: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f6041: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6042: mov ecx, esi */
  ecx = esi;
/* 4f6044: call 0x4e437c */
  esp -= 4; W32(esp, 0x4f6049u); SPILL(); f_4e437c(); if (g_unwind) return; RELOAD();
/* 4f6049: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f604b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f604c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f604d: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x4f6052u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 4f6052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f6055: /* 4f6055: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6056: mov eax, esi */
  eax = esi;
/* 4f6058: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6059: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f605a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6080(void) {
  LOAD_REGS();
L_4f6080: /* 4f6080: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f6084: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f6087: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6089: je 0x4f6096 */
  if (zf) goto L_4f6096;
L_4f608b: /* 4f608b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4f608d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 4f6091: jmp 0x4e180c */
  SPILL(); f_4e180c(); return;
L_4f6096: /* 4f6096: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4f609b: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 4f609f: jmp 0x4e180c */
  SPILL(); f_4e180c(); return;
}

void f_4f60c0(void) {
  LOAD_REGS();
L_4f60c0: /* 4f60c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f60c1: mov bx, word ptr [esp + 8] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
/* 4f60c6: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4f60c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f60ca: mov esi, ecx */
  esi = ecx;
/* 4f60cc: je 0x4f611b */
  if (zf) goto L_4f611b;
L_4f60ce: /* 4f60ce: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f60d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f60d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f60d4: je 0x4f60db */
  if (zf) goto L_4f60db;
L_4f60d6: /* 4f60d6: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 4f60d9: jmp 0x4f60dd */
  goto L_4f60dd;
L_4f60db: /* 4f60db: xor edi, edi */
  edi = 0;
L_4f60dd: /* 4f60dd: xor ecx, ecx */
  ecx = 0;
/* 4f60df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f60e1: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4f60e4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4f60e5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f60e7: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f60ea: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f60ed: jle 0x4f610b */
  if ((zf || sf != of)) goto L_4f610b;
L_4f60ef: /* 4f60ef: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f60f2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f60f3: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f60f6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f60f8: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f60fb: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 4f60ff: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f6101: mov ecx, esi */
  ecx = esi;
/* 4f6103: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4f6106: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f610bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f610b: /* 4f610b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f610d: mov word ptr [eax + edi*2], bx */
  W16((uint32_t)(eax + edi*2), (ebx & 0xffffu));
/* 4f6111: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f6113: mov word ptr [ecx + edi*2 + 2], 0 */
  W16((uint32_t)(ecx + edi*2 + 0x2u), 0x0u);
/* 4f611a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4f611b: /* 4f611b: mov eax, esi */
  eax = esi;
/* 4f611d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f611e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f611f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6150(void) {
  LOAD_REGS();
L_4f6150: /* 4f6150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6151: mov esi, ecx */
  esi = ecx;
/* 4f6153: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f6156: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f6159: jle 0x4f6177 */
  if ((zf || sf != of)) goto L_4f6177;
L_4f615b: /* 4f615b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f615d: mov dx, word ptr [ecx + eax*2 - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*2 + 0xfffffffcu))) & 0xffffu);
/* 4f6162: cmp dx, word ptr [0x5a3a58] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(0x5a3a58u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6169: je 0x4f6177 */
  if (zf) goto L_4f6177;
L_4f616b: /* 4f616b: push 0x5a3a58 */
  { uint32_t v = 0x5a3a58u; esp -= 4; W32(esp, v); }
/* 4f6170: mov ecx, esi */
  ecx = esi;
/* 4f6172: call 0x4e180c */
  esp -= 4; W32(esp, 0x4f6177u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
L_4f6177: /* 4f6177: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f617b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f617c: mov ecx, esi */
  ecx = esi;
/* 4f617e: call 0x4e180c */
  esp -= 4; W32(esp, 0x4f6183u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 4f6183: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6184: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f61a0(void) {
  LOAD_REGS();
L_4f61a0: /* 4f61a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f61a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f61a5: mov esi, ecx */
  esi = ecx;
/* 4f61a7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4f61aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f61ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f61ad: je 0x4f61b3 */
  if (zf) goto L_4f61b3;
L_4f61af: /* 4f61af: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 4f61b1: jmp 0x4f61b8 */
  goto L_4f61b8;
L_4f61b3: /* 4f61b3: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_4f61b8: /* 4f61b8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f61bb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f61be: jle 0x4f61dc */
  if ((zf || sf != of)) goto L_4f61dc;
L_4f61c0: /* 4f61c0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f61c2: mov dx, word ptr [ecx + eax*2 - 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*2 + 0xfffffffcu))) & 0xffffu);
/* 4f61c7: cmp dx, word ptr [0x5a3a58] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(0x5a3a58u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f61ce: je 0x4f61dc */
  if (zf) goto L_4f61dc;
L_4f61d0: /* 4f61d0: push 0x5a3a58 */
  { uint32_t v = 0x5a3a58u; esp -= 4; W32(esp, v); }
/* 4f61d5: mov ecx, esi */
  ecx = esi;
/* 4f61d7: call 0x4e180c */
  esp -= 4; W32(esp, 0x4f61dcu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
L_4f61dc: /* 4f61dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f61dd: mov ecx, esi */
  ecx = esi;
/* 4f61df: call 0x4e180c */
  esp -= 4; W32(esp, 0x4f61e4u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 4f61e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f61e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f61e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6210(void) {
  LOAD_REGS();
L_4f6210: /* 4f6210: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6213: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6215: je 0x4f621b */
  if (zf) goto L_4f621b;
L_4f6217: /* 4f6217: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f6219: jmp 0x4f6220 */
  goto L_4f6220;
L_4f621b: /* 4f621b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6220: /* 4f6220: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f6224: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f6225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6226: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f622bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f622b: xor edx, edx */
  edx = 0;
/* 4f622d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6230: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f6232: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 4f6235: mov eax, edx */
  eax = edx;
/* 4f6237: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6250(void) {
  LOAD_REGS();
L_4f6250: /* 4f6250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f6254: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f6257: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6259: je 0x4f625f */
  if (zf) goto L_4f625f;
L_4f625b: /* 4f625b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f625d: jmp 0x4f6264 */
  goto L_4f6264;
L_4f625f: /* 4f625f: mov edx, 0x5ed66c */
  edx = 0x5ed66cu;
L_4f6264: /* 4f6264: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6267: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6269: je 0x4f626f */
  if (zf) goto L_4f626f;
L_4f626b: /* 4f626b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f626d: jmp 0x4f6274 */
  goto L_4f6274;
L_4f626f: /* 4f626f: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6274: /* 4f6274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6276: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f627bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f627b: xor ecx, ecx */
  ecx = 0;
/* 4f627d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6280: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f6282: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 4f6285: mov eax, ecx */
  eax = ecx;
/* 4f6287: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f62a0(void) {
  LOAD_REGS();
L_4f62a0: /* 4f62a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f62a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f62a5: je 0x4f62ab */
  if (zf) goto L_4f62ab;
L_4f62a7: /* 4f62a7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f62a9: jmp 0x4f62b0 */
  goto L_4f62b0;
L_4f62ab: /* 4f62ab: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f62b0: /* 4f62b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f62b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f62b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f62b6: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f62bbu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f62bb: xor edx, edx */
  edx = 0;
/* 4f62bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f62c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f62c2: setl dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 4f62c5: mov eax, edx */
  eax = edx;
/* 4f62c7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f62e0(void) {
  LOAD_REGS();
L_4f62e0: /* 4f62e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f62e4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f62e7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f62e9: je 0x4f62ef */
  if (zf) goto L_4f62ef;
L_4f62eb: /* 4f62eb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f62ed: jmp 0x4f62f4 */
  goto L_4f62f4;
L_4f62ef: /* 4f62ef: mov edx, 0x5ed66c */
  edx = 0x5ed66cu;
L_4f62f4: /* 4f62f4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f62f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f62f9: je 0x4f62ff */
  if (zf) goto L_4f62ff;
L_4f62fb: /* 4f62fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f62fd: jmp 0x4f6304 */
  goto L_4f6304;
L_4f62ff: /* 4f62ff: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6304: /* 4f6304: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6306: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f630bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f630b: xor ecx, ecx */
  ecx = 0;
/* 4f630d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6310: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f6312: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 4f6315: mov eax, ecx */
  eax = ecx;
/* 4f6317: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6330(void) {
  LOAD_REGS();
L_4f6330: /* 4f6330: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6333: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6335: je 0x4f633b */
  if (zf) goto L_4f633b;
L_4f6337: /* 4f6337: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f6339: jmp 0x4f6340 */
  goto L_4f6340;
L_4f633b: /* 4f633b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6340: /* 4f6340: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f6344: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f6345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6346: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f634bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f634b: xor edx, edx */
  edx = 0;
/* 4f634d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6350: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f6352: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 4f6355: mov eax, edx */
  eax = edx;
/* 4f6357: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6370(void) {
  LOAD_REGS();
L_4f6370: /* 4f6370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f6374: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f6377: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6379: je 0x4f637f */
  if (zf) goto L_4f637f;
L_4f637b: /* 4f637b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f637d: jmp 0x4f6384 */
  goto L_4f6384;
L_4f637f: /* 4f637f: mov edx, 0x5ed66c */
  edx = 0x5ed66cu;
L_4f6384: /* 4f6384: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6387: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6389: je 0x4f638f */
  if (zf) goto L_4f638f;
L_4f638b: /* 4f638b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f638d: jmp 0x4f6394 */
  goto L_4f6394;
L_4f638f: /* 4f638f: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6394: /* 4f6394: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6396: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f639bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f639b: xor ecx, ecx */
  ecx = 0;
/* 4f639d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f63a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f63a2: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 4f63a5: mov eax, ecx */
  eax = ecx;
/* 4f63a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f63c0(void) {
  LOAD_REGS();
L_4f63c0: /* 4f63c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f63c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f63c5: je 0x4f63cb */
  if (zf) goto L_4f63cb;
L_4f63c7: /* 4f63c7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f63c9: jmp 0x4f63d0 */
  goto L_4f63d0;
L_4f63cb: /* 4f63cb: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f63d0: /* 4f63d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f63d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f63d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f63d6: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f63dbu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f63db: xor edx, edx */
  edx = 0;
/* 4f63dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f63e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f63e2: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 4f63e5: mov eax, edx */
  eax = edx;
/* 4f63e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6400(void) {
  LOAD_REGS();
L_4f6400: /* 4f6400: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f6404: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f6407: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6409: je 0x4f640f */
  if (zf) goto L_4f640f;
L_4f640b: /* 4f640b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f640d: jmp 0x4f6414 */
  goto L_4f6414;
L_4f640f: /* 4f640f: mov edx, 0x5ed66c */
  edx = 0x5ed66cu;
L_4f6414: /* 4f6414: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6417: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6419: je 0x4f641f */
  if (zf) goto L_4f641f;
L_4f641b: /* 4f641b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f641d: jmp 0x4f6424 */
  goto L_4f6424;
L_4f641f: /* 4f641f: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6424: /* 4f6424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6425: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6426: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f642bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f642b: xor ecx, ecx */
  ecx = 0;
/* 4f642d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6430: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f6432: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 4f6435: mov eax, ecx */
  eax = ecx;
/* 4f6437: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6450(void) {
  LOAD_REGS();
L_4f6450: /* 4f6450: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6453: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6455: je 0x4f645b */
  if (zf) goto L_4f645b;
L_4f6457: /* 4f6457: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f6459: jmp 0x4f6460 */
  goto L_4f6460;
L_4f645b: /* 4f645b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6460: /* 4f6460: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f6464: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f6465: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6466: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f646bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f646b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f646e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4f6470: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4f6472: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f6473: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6490(void) {
  LOAD_REGS();
L_4f6490: /* 4f6490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f6494: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f6497: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6499: je 0x4f649f */
  if (zf) goto L_4f649f;
L_4f649b: /* 4f649b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f649d: jmp 0x4f64a4 */
  goto L_4f64a4;
L_4f649f: /* 4f649f: mov edx, 0x5ed66c */
  edx = 0x5ed66cu;
L_4f64a4: /* 4f64a4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f64a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f64a9: je 0x4f64bf */
  if (zf) goto L_4f64bf;
L_4f64ab: /* 4f64ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f64ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f64ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f64af: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f64b4u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f64b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f64b7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4f64b9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4f64bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f64bc: ret 4 */
  esp += 8; SPILL(); return;
L_4f64bf: /* 4f64bf: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4f64c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f64c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f64c6: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f64cbu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f64cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f64ce: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4f64d0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4f64d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f64d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6500(void) {
  LOAD_REGS();
L_4f6500: /* 4f6500: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6503: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6505: je 0x4f650b */
  if (zf) goto L_4f650b;
L_4f6507: /* 4f6507: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f6509: jmp 0x4f6510 */
  goto L_4f6510;
L_4f650b: /* 4f650b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f6510: /* 4f6510: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f6514: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f6515: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6516: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f651bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f651b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f651e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4f6520: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4f6522: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4f6524: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6540(void) {
  LOAD_REGS();
L_4f6540: /* 4f6540: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f6544: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f6547: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6549: je 0x4f654f */
  if (zf) goto L_4f654f;
L_4f654b: /* 4f654b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f654d: jmp 0x4f6554 */
  goto L_4f6554;
L_4f654f: /* 4f654f: mov edx, 0x5ed66c */
  edx = 0x5ed66cu;
L_4f6554: /* 4f6554: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f6557: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6559: je 0x4f6570 */
  if (zf) goto L_4f6570;
L_4f655b: /* 4f655b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f655d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f655e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f655f: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f6564u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f6564: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6567: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4f6569: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4f656b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4f656d: ret 4 */
  esp += 8; SPILL(); return;
L_4f6570: /* 4f6570: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4f6575: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6577: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f657cu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f657c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f657f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4f6581: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4f6583: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4f6585: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f65b0(void) {
  LOAD_REGS();
L_4f65b0: /* 4f65b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f65b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f65b6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f65b7: mov ebp, ecx */
  ebp = ecx;
/* 4f65b9: jne 0x4f6604 */
  if (!zf) goto L_4f6604;
L_4f65bb: /* 4f65bb: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4f65be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f65c0: je 0x4f65c7 */
  if (zf) goto L_4f65c7;
L_4f65c2: /* 4f65c2: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 4f65c5: jmp 0x4f65cc */
  goto L_4f65cc;
L_4f65c7: /* 4f65c7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_4f65cc: /* 4f65cc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f65d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f65d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f65d2: call 0x4e2220 */
  esp -= 4; W32(esp, 0x4f65d7u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 4f65d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f65da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f65dc: je 0x4f65fd */
  if (zf) goto L_4f65fd;
L_4f65de: /* 4f65de: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 4f65e1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f65e3: je 0x4f65f0 */
  if (zf) goto L_4f65f0;
L_4f65e5: /* 4f65e5: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 4f65e8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4f65ea: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f65ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f65ed: ret 8 */
  esp += 12; SPILL(); return;
L_4f65f0: /* 4f65f0: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
/* 4f65f5: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4f65f7: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f65f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f65fa: ret 8 */
  esp += 12; SPILL(); return;
L_4f65fd: /* 4f65fd: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4f6600: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f6601: ret 8 */
  esp += 12; SPILL(); return;
L_4f6604: /* 4f6604: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 4f6607: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6609: je 0x4f660e */
  if (zf) goto L_4f660e;
L_4f660b: /* 4f660b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4f660c: jmp 0x4f6610 */
  goto L_4f6610;
L_4f660e: /* 4f660e: xor eax, eax */
  eax = 0;
L_4f6610: /* 4f6610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f6611: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4f6612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f6614: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6615: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6616: jl 0x4f664d */
  if ((sf != of)) goto L_4f664d;
L_4f6618: /* 4f6618: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 4f661c: xor ebx, ebx */
  ebx = 0;
/* 4f661e: mov bx, word ptr [edi] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
L_4f6621: /* 4f6621: xor edx, edx */
  edx = 0;
/* 4f6623: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6626: je 0x4f6643 */
  if (zf) goto L_4f6643;
L_4f6628: /* 4f6628: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 4f662b: mov ecx, ebx */
  ecx = ebx;
/* 4f662d: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
L_4f6630: /* 4f6630: cmp word ptr [esi], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6633: jne 0x4f6643 */
  if (!zf) goto L_4f6643;
L_4f6635: /* 4f6635: mov cx, word ptr [edi + edx*2 + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + edx*2 + 0x2u))) & 0xffffu);
/* 4f663a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4f663b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4f663e: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6641: jne 0x4f6630 */
  if (!zf) goto L_4f6630;
L_4f6643: /* 4f6643: cmp word ptr [edi + edx*2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + edx*2))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6648: je 0x4f6650 */
  if (zf) goto L_4f6650;
L_4f664a: /* 4f664a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 4f664b: jns 0x4f6621 */
  if (!sf) goto L_4f6621;
L_4f664d: /* 4f664d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4f6650: /* 4f6650: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6651: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6652: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f6653: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f6654: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f6690(void) {
  LOAD_REGS();
L_4f6690: /* 4f6690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f6694: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 4f6697: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6699: je 0x4f66a6 */
  if (zf) goto L_4f66a6;
L_4f669b: /* 4f669b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4f669d: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 4f66a1: jmp 0x4e1055 */
  SPILL(); f_4e1055(); return;
L_4f66a6: /* 4f66a6: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4f66ab: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 4f66af: jmp 0x4e1055 */
  SPILL(); f_4e1055(); return;
}

void f_4f66d0(void) {
  LOAD_REGS();
L_4f66d0: /* 4f66d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f66d1: mov esi, ecx */
  esi = ecx;
/* 4f66d3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f66d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f66d6: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4f66da: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f66dc: je 0x4f6717 */
  if (zf) goto L_4f6717;
L_4f66de: /* 4f66de: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4f66e2: je 0x4f66f0 */
  if (zf) goto L_4f66f0;
L_4f66e4: /* 4f66e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f66e5: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x4f66eau); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 4f66ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f66ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f66ee: jmp 0x4f66f2 */
  goto L_4f66f2;
L_4f66f0: /* 4f66f0: xor eax, eax */
  eax = 0;
L_4f66f2: /* 4f66f2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f66f4: mov ecx, esi */
  ecx = esi;
/* 4f66f6: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f66f9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f66fc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f6701u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f6701: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f6704: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6706: je 0x4f6717 */
  if (zf) goto L_4f6717;
L_4f6708: /* 4f6708: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f670a: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f670c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f670d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f670e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f670f: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4f6714u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4f6714: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f6717: /* 4f6717: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6718: mov eax, esi */
  eax = esi;
/* 4f671a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f671b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6740(void) {
  LOAD_REGS();
L_4f6740: /* 4f6740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6742: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4f6746: mov esi, ecx */
  esi = ecx;
/* 4f6748: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f674a: je 0x4f6782 */
  if (zf) goto L_4f6782;
L_4f674c: /* 4f674c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f674f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4f6751: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f6754: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4f6757: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f675cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 4f675c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4f675f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6761: je 0x4f6782 */
  if (zf) goto L_4f6782;
L_4f6763: /* 4f6763: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4f6766: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6768: je 0x4f676e */
  if (zf) goto L_4f676e;
L_4f676a: /* 4f676a: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 4f676c: jmp 0x4f6773 */
  goto L_4f6773;
L_4f676e: /* 4f676e: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_4f6773: /* 4f6773: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4f6775: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f6777: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6778: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6779: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f677a: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4f677fu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4f677f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f6782: /* 4f6782: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6783: mov eax, esi */
  eax = esi;
/* 4f6785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6786: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f67b0(void) {
  LOAD_REGS();
L_4f67b0: /* 4f67b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f67b1: mov esi, ecx */
  esi = ecx;
/* 4f67b3: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 4f67b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f67b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f67b9: jge 0x4f67d2 */
  if ((sf == of)) goto L_4f67d2;
L_4f67bb: /* 4f67bb: push 0x624 */
  { uint32_t v = 0x624u; esp -= 4; W32(esp, v); }
/* 4f67c0: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f67c5: push 0x5a3a78 */
  { uint32_t v = 0x5a3a78u; esp -= 4; W32(esp, v); }
/* 4f67ca: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f67cfu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f67cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f67d2: /* 4f67d2: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 4f67d5: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4f67d9: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 4f67dc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4f67df: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f67e1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f67e3: jle 0x4f67fc */
  if ((zf || sf != of)) goto L_4f67fc;
L_4f67e5: /* 4f67e5: push 0x625 */
  { uint32_t v = 0x625u; esp -= 4; W32(esp, v); }
/* 4f67ea: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 4f67ef: push 0x5a3a5c */
  { uint32_t v = 0x5a3a5cu; esp -= 4; W32(esp, v); }
/* 4f67f4: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f67f9u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f67f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f67fc: /* 4f67fc: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 4f67ff: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 4f6801: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 4f6804: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f6808: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6809: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f680b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f680c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f680d: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x4f6812u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 4f6812: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 4f6815: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6818: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f681a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f681b: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 4f681e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f681f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f6850(void) {
  LOAD_REGS();
L_4f6850: /* 4f6850: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f6852: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6858: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 4f685b: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f685e: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6870(void) {
  LOAD_REGS();
L_4f6870: /* 4f6870: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f6872: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6878: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 4f687b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 4f687e: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6890(void) {
  LOAD_REGS();
L_4f6890: /* 4f6890: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f6892: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6898: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 4f689b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4f689e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f68a2: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4f68a4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f68a7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f68c0(void) {
  LOAD_REGS();
L_4f68c0: /* 4f68c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f68c2: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f68c8: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 4f68cb: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f68cf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4f68d2: not edx */
  edx = ~edx;
/* 4f68d4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f68d6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f68d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f68f0(void) {
  LOAD_REGS();
L_4f68f0: /* 4f68f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f68f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f68f4: jl 0x4f6910 */
  if ((sf != of)) goto L_4f6910;
L_4f68f6: /* 4f68f6: cmp eax, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f68fc: jge 0x4f6910 */
  if ((sf == of)) goto L_4f6910;
L_4f68fe: /* 4f68fe: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6904: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6908: je 0x4f6910 */
  if (zf) goto L_4f6910;
L_4f690a: /* 4f690a: mov eax, 1 */
  eax = 0x1u;
/* 4f690f: ret  */
  esp += 4; SPILL(); return;
L_4f6910: /* 4f6910: xor eax, eax */
  eax = 0;
/* 4f6912: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6930(void) {
  LOAD_REGS();
L_4f6930: /* 4f6930: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 4f6935: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6937: je 0x4f694a */
  if (zf) goto L_4f694a;
L_4f6939: /* 4f6939: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f693d: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6943: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 4f6946: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f6949: ret  */
  esp += 4; SPILL(); return;
L_4f694a: /* 4f694a: mov eax, 0x5a3a80 */
  eax = 0x5a3a80u;
/* 4f694f: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6960(void) {
  LOAD_REGS();
L_4f6960: /* 4f6960: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 4f6965: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6967: je 0x4f6984 */
  if (zf) goto L_4f6984;
L_4f6969: /* 4f6969: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f696d: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6973: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 4f6976: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 4f6979: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f697c: je 0x4f6984 */
  if (zf) goto L_4f6984;
L_4f697e: /* 4f697e: mov eax, 1 */
  eax = 0x1u;
/* 4f6983: ret  */
  esp += 4; SPILL(); return;
L_4f6984: /* 4f6984: xor eax, eax */
  eax = 0;
/* 4f6986: ret  */
  esp += 4; SPILL(); return;
}

void f_4f69a0(void) {
  LOAD_REGS();
L_4f69a0: /* 4f69a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f69a4: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f69aa: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 4f69ad: ret  */
  esp += 4; SPILL(); return;
}

void f_4f69c0(void) {
  LOAD_REGS();
L_4f69c0: /* 4f69c0: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4f69c3: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f69c9: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 4f69cc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f69cf: ret  */
  esp += 4; SPILL(); return;
}

void f_4f69e0(void) {
  LOAD_REGS();
L_4f69e0: /* 4f69e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f69e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f69e3: je 0x4f6a07 */
  if (zf) goto L_4f6a07;
L_4f69e5: /* 4f69e5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f69e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4f69f0: /* 4f69f0: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 4f69f3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f69f5: jl 0x4f6a00 */
  if ((sf != of)) goto L_4f6a00;
L_4f69f7: /* 4f69f7: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 4f69fa: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4f69fc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f69fe: jl 0x4f6a0d */
  if ((sf != of)) goto L_4f6a0d;
L_4f6a00: /* 4f6a00: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 4f6a03: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6a05: jne 0x4f69f0 */
  if (!zf) goto L_4f69f0;
L_4f6a07: /* 4f6a07: xor eax, eax */
  eax = 0;
/* 4f6a09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6a0a: ret 4 */
  esp += 8; SPILL(); return;
L_4f6a0d: /* 4f6a0d: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 4f6a10: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 4f6a13: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4f6a15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4f6a18: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 4f6a1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6a1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6a30(void) {
  LOAD_REGS();
L_4f6a30: /* 4f6a30: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 4f6a33: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6a50(void) {
  LOAD_REGS();
L_4f6a50: /* 4f6a50: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 4f6a53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6a55: je 0x4f6a7a */
  if (zf) goto L_4f6a7a;
L_4f6a57: /* 4f6a57: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 4f6a5a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6a5c: je 0x4f6a6b */
  if (zf) goto L_4f6a6b;
L_4f6a5e: /* 4f6a5e: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 4f6a61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6a62: call 0x4e2b8f */
  esp -= 4; W32(esp, 0x4f6a67u); SPILL(); f_4e2b8f(); if (g_unwind) return; RELOAD();
/* 4f6a67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6a6a: ret  */
  esp += 4; SPILL(); return;
L_4f6a6b: /* 4f6a6b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 4f6a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6a71: call 0x4e2b8f */
  esp -= 4; W32(esp, 0x4f6a76u); SPILL(); f_4e2b8f(); if (g_unwind) return; RELOAD();
/* 4f6a76: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6a79: ret  */
  esp += 4; SPILL(); return;
L_4f6a7a: /* 4f6a7a: xor eax, eax */
  eax = 0;
/* 4f6a7c: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6a90(void) {
  LOAD_REGS();
L_4f6a90: /* 4f6a90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6a92: je 0x4f6aa3 */
  if (zf) goto L_4f6aa3;
L_4f6a94: /* 4f6a94: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_4f6a98: /* 4f6a98: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6a9a: je 0x4f6aa8 */
  if (zf) goto L_4f6aa8;
L_4f6a9c: /* 4f6a9c: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 4f6a9f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6aa1: jne 0x4f6a98 */
  if (!zf) goto L_4f6a98;
L_4f6aa3: /* 4f6aa3: xor eax, eax */
  eax = 0;
/* 4f6aa5: ret 4 */
  esp += 8; SPILL(); return;
L_4f6aa8: /* 4f6aa8: mov eax, 1 */
  eax = 0x1u;
/* 4f6aad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6ac0(void) {
  LOAD_REGS();
L_4f6ac0: /* 4f6ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6ac1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6ac2: mov edi, ecx */
  edi = ecx;
/* 4f6ac4: call 0x4e292d */
  esp -= 4; W32(esp, 0x4f6ac9u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 4f6ac9: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6acf: mov esi, eax */
  esi = eax;
/* 4f6ad1: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 4f6ad4: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 4f6ad7: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4f6ada: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6adb: push 0x5a3aa4 */
  { uint32_t v = 0x5a3aa4u; esp -= 4; W32(esp, v); }
/* 4f6ae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6ae1: call 0x4e4183 */
  esp -= 4; W32(esp, 0x4f6ae6u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 4f6ae6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6ae9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6aea: mov eax, esi */
  eax = esi;
/* 4f6aec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6aed: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6b00(void) {
  LOAD_REGS();
L_4f6b00: /* 4f6b00: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 4f6b03: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6b20(void) {
  LOAD_REGS();
L_4f6b20: /* 4f6b20: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 4f6b23: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6b40(void) {
  LOAD_REGS();
L_4f6b40: /* 4f6b40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f6b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6b42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6b43: mov edi, ecx */
  edi = ecx;
/* 4f6b45: call 0x4e292d */
  esp -= 4; W32(esp, 0x4f6b4au); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 4f6b4a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6b4c: mov ebx, eax */
  ebx = eax;
/* 4f6b4e: mov esi, edi */
  esi = edi;
/* 4f6b50: je 0x4f6b7a */
  if (zf) goto L_4f6b7a;
L_4f6b52: /* 4f6b52: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4f6b55: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 4f6b5b: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 4f6b5e: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4f6b61: push 0x5a3ac4 */
  { uint32_t v = 0x5a3ac4u; esp -= 4; W32(esp, v); }
/* 4f6b66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6b67: call 0x4e26df */
  esp -= 4; W32(esp, 0x4f6b6cu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 4f6b6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6b6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6b71: je 0x4f6ba4 */
  if (zf) goto L_4f6ba4;
L_4f6b73: /* 4f6b73: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 4f6b76: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6b78: jne 0x4f6b52 */
  if (!zf) goto L_4f6b52;
L_4f6b7a: /* 4f6b7a: mov eax, 0x5a3ac0 */
  eax = 0x5a3ac0u;
L_4f6b7f: /* 4f6b7f: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 4f6b82: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 4f6b88: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 4f6b8b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f6b8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f6b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6b90: push 0x5a3ab4 */
  { uint32_t v = 0x5a3ab4u; esp -= 4; W32(esp, v); }
/* 4f6b95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f6b96: call 0x4e4183 */
  esp -= 4; W32(esp, 0x4f6b9bu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 4f6b9b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6b9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6b9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6ba0: mov eax, ebx */
  eax = ebx;
/* 4f6ba2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f6ba3: ret  */
  esp += 4; SPILL(); return;
L_4f6ba4: /* 4f6ba4: mov eax, 0x5a3ab0 */
  eax = 0x5a3ab0u;
/* 4f6ba9: jmp 0x4f6b7f */
  goto L_4f6b7f;
}

void f_4f6bd0(void) {
  LOAD_REGS();
L_4f6bd0: /* 4f6bd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4f6bd1: mov ebp, esp */
  ebp = esp;
/* 4f6bd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4f6bd5: push 0x555530 */
  { uint32_t v = 0x555530u; esp -= 4; W32(esp, v); }
/* 4f6bda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4f6be0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6be1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4f6be8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f6beb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f6bec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4f6bef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6bf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6bf1: xor eax, eax */
  eax = 0;
/* 4f6bf3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4f6bf6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4f6bf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_4f6c00: /* 4f6c00: cmp eax, dword ptr [ecx + 0x4d4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4d4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f6c06: jge 0x4f6c26 */
  if ((sf == of)) goto L_4f6c26;
L_4f6c08: /* 4f6c08: mov esi, dword ptr [ecx + 0x4d0] */
  esi = R32((uint32_t)(ecx + 0x4d0u));
/* 4f6c0e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 4f6c11: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 4f6c14: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6c16: jne 0x4f6c23 */
  if (!zf) goto L_4f6c23;
L_4f6c18: /* 4f6c18: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 4f6c1b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4f6c1e: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4f6c20: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
L_4f6c23: /* 4f6c23: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4f6c24: jmp 0x4f6c00 */
  goto L_4f6c00;
L_4f6c26: /* 4f6c26: jne 0x4f6c76 */
  if (!zf) goto L_4f6c76;
L_4f6c28: /* 4f6c28: mov edi, dword ptr [ecx + 0x4d4] */
  edi = R32((uint32_t)(ecx + 0x4d4u));
/* 4f6c2e: mov eax, dword ptr [ecx + 0x4d8] */
  eax = R32((uint32_t)(ecx + 0x4d8u));
/* 4f6c34: lea esi, [ecx + 0x4d0] */
  esi = (uint32_t)(ecx + 0x4d0u);
/* 4f6c3a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 4f6c3d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4f6c3f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f6c42: jle 0x4f6c60 */
  if ((zf || sf != of)) goto L_4f6c60;
L_4f6c44: /* 4f6c44: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 4f6c47: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f6c48: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f6c4b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4f6c4d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4f6c50: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 4f6c54: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4f6c56: mov ecx, esi */
  ecx = esi;
/* 4f6c58: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4f6c5b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x4f6c60u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_4f6c60: /* 4f6c60: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4f6c62: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 4f6c65: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 4f6c68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6c6a: je 0x4f6c76 */
  if (zf) goto L_4f6c76;
L_4f6c6c: /* 4f6c6c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4f6c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f6c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f6c71: call 0x4e2fdb */
  esp -= 4; W32(esp, 0x4f6c76u); SPILL(); f_4e2fdb(); if (g_unwind) return; RELOAD();
L_4f6c76: /* 4f6c76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4f6c79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6c7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6c7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4f6c82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f6c83: mov esp, ebp */
  esp = ebp;
/* 4f6c85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4f6c86: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f6c89(void) {
  LOAD_REGS();
L_4f6c89: /* 4f6c89: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4f6c8c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 4f6c91: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 4f6c94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4f6c95: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 4f6c98: call 0x554df6 */
  esp -= 4; W32(esp, 0x4f6c9du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_4f6c9d(); return;
}

void f_4f6c9d(void) {
  LOAD_REGS();
L_4f6c9d: /* 4f6c9d: push 0x56967c */
  { uint32_t v = 0x56967cu; esp -= 4; W32(esp, v); }
/* 4f6ca2: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 4f6ca7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x4f6cacu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 4f6cac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6caf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f6cb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4f6cb3: call 0x554df6 */
  esp -= 4; W32(esp, 0x4f6cb8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_4f6cb8: guest_badaddr(0x4f6cb8); return;
}

void f_4f6d00(void) {
  LOAD_REGS();
L_4f6d00: /* 4f6d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6d01: mov esi, ecx */
  esi = ecx;
/* 4f6d03: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4f6d05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6d06: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 4f6d0c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x4f6d0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4f6d0f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6d11: je 0x4f6d2a */
  if (zf) goto L_4f6d2a;
L_4f6d13: /* 4f6d13: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 4f6d18: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 4f6d1d: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 4f6d22: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f6d27u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f6d27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f6d2a: /* 4f6d2a: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 4f6d30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6d31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6d32: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6d50(void) {
  LOAD_REGS();
L_4f6d50: /* 4f6d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6d51: mov esi, ecx */
  esi = ecx;
/* 4f6d53: mov eax, dword ptr [esi + 0x4ec] */
  eax = R32((uint32_t)(esi + 0x4ecu));
/* 4f6d59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6d5b: jne 0x4f6d74 */
  if (!zf) goto L_4f6d74;
L_4f6d5d: /* 4f6d5d: push 0x222 */
  { uint32_t v = 0x222u; esp -= 4; W32(esp, v); }
/* 4f6d62: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 4f6d67: push 0x5a3b50 */
  { uint32_t v = 0x5a3b50u; esp -= 4; W32(esp, v); }
/* 4f6d6c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x4f6d71u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 4f6d71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4f6d74: /* 4f6d74: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 4f6d7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6d7b: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6d90(void) {
  LOAD_REGS();
L_4f6d90: /* 4f6d90: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4f6d93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6d95: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f6d99: je 0x4f6dab */
  if (zf) goto L_4f6dab;
L_4f6d9b: /* 4f6d9b: jmp 0x4f6da0 */
  goto L_4f6da0;
L_4f6da0: /* 4f6da0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6da2: je 0x4f6db5 */
  if (zf) goto L_4f6db5;
L_4f6da4: /* 4f6da4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 4f6da7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6da9: jne 0x4f6da0 */
  if (!zf) goto L_4f6da0;
L_4f6dab: /* 4f6dab: xor eax, eax */
  eax = 0;
/* 4f6dad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6daf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4f6db2: ret 4 */
  esp += 8; SPILL(); return;
L_4f6db5: /* 4f6db5: mov eax, 1 */
  eax = 0x1u;
/* 4f6dba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6d9d(void) {
  LOAD_REGS();
L_4f6d9d: /* 4f6d9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_4f6da0: /* 4f6da0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6da2: je 0x4f6db5 */
  if (zf) goto L_4f6db5;
L_4f6da4: /* 4f6da4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 4f6da7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6da9: jne 0x4f6da0 */
  if (!zf) goto L_4f6da0;
L_4f6dab: /* 4f6dab: xor eax, eax */
  eax = 0;
/* 4f6dad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6daf: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4f6db2: ret 4 */
  esp += 8; SPILL(); return;
L_4f6db5: /* 4f6db5: mov eax, 1 */
  eax = 0x1u;
/* 4f6dba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f6dd0(void) {
  LOAD_REGS();
L_4f6dd0: /* 4f6dd0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f6dd4: mov eax, ecx */
  eax = ecx;
/* 4f6dd6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f6dda: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4f6ddd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f6de1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f6de4: mov dword ptr [eax], 0x5691ec */
  W32((uint32_t)(eax), 0x5691ecu);
/* 4f6dea: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* 4f6ded: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4f6def: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f6df3: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4f6df6: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 4f6df9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4f6e10(void) {
  LOAD_REGS();
L_4f6e10: /* 4f6e10: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f6e14: cmp edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6e17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f6e18: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4f6e1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f6e1d: jne 0x4f6e3c */
  if (!zf) goto L_4f6e3c;
L_4f6e1f: /* 4f6e1f: cmp esi, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6e22: jne 0x4f6e3c */
  if (!zf) goto L_4f6e3c;
L_4f6e24: /* 4f6e24: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 4f6e27: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f6e2b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4f6e2d: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 4f6e30: add dword ptr [eax + 0x10], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x10u), r);
  }
/* 4f6e37: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 4f6e3a: jmp 0x4f6e93 */
  goto L_4f6e93;
L_4f6e3c: /* 4f6e3c: mov eax, edx */
  eax = edx;
/* 4f6e3e: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4f6e41: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4f6e43: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4f6e46: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4f6e48: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f6e4d: mov eax, dword ptr [ecx + eax*4 + 0x24] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x24u));
/* 4f6e51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6e53: je 0x4f6e69 */
  if (zf) goto L_4f6e69;
L_4f6e55: /* 4f6e55: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 4f6e57: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6e59: jne 0x4f6e62 */
  if (!zf) goto L_4f6e62;
L_4f6e5b: /* 4f6e5b: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 4f6e5e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4f6e60: je 0x4f6e70 */
  if (zf) goto L_4f6e70;
L_4f6e62: /* 4f6e62: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 4f6e65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6e67: jne 0x4f6e55 */
  if (!zf) goto L_4f6e55;
L_4f6e69: /* 4f6e69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6e6a: xor eax, eax */
  eax = 0;
/* 4f6e6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6e6d: ret 0x10 */
  esp += 20; SPILL(); return;
L_4f6e70: /* 4f6e70: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f6e73: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f6e77: mov dword ptr [ecx + 0xc], esi */
  W32((uint32_t)(ecx + 0xcu), esi);
/* 4f6e7a: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 4f6e7d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4f6e7f: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* 4f6e82: mov cx, word ptr [ecx + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 4f6e86: add edi, 0x1000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4f6e8c: mov word ptr [eax + 0xc], cx */
  W16((uint32_t)(eax + 0xcu), (ecx & 0xffffu));
/* 4f6e90: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
L_4f6e93: /* 4f6e93: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 4f6e96: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 4f6e9a: lea eax, [edx + ecx - 1] */
  eax = (uint32_t)(edx + ecx + 0xffffffffu);
/* 4f6e9e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4f6e9f: not ecx */
  ecx = ~ecx;
/* 4f6ea1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f6ea2: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4f6ea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f6ea5: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4f6ee0(void) {
  LOAD_REGS();
L_4f6ee0: /* 4f6ee0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f6ee1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f6ee4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f6ee6: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f6eea: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f6eec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6eee: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6ef1: jne 0x4f6ef9 */
  if (!zf) goto L_4f6ef9;
L_4f6ef3: /* 4f6ef3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f6ef5: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f6ef9: /* 4f6ef9: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4f6efc: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 4f6f00: fcom dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
/* 4f6f04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6f06: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6f09: je 0x4f6f11 */
  if (zf) goto L_4f6f11;
L_4f6f0b: /* 4f6f0b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f6f0d: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f6f11: /* 4f6f11: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f6f12: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6f30(void) {
  LOAD_REGS();
L_4f6f30: /* 4f6f30: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f6f33: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f6f36: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f6f3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6f3e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6f41: je 0x4f6f45 */
  if (zf) goto L_4f6f45;
L_4f6f43: /* 4f6f43: fchs  */
  ST0 = -ST0;
L_4f6f45: /* 4f6f45: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f6f49: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f6f4c: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f6f52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6f54: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6f57: je 0x4f6f5b */
  if (zf) goto L_4f6f5b;
L_4f6f59: /* 4f6f59: fchs  */
  ST0 = -ST0;
L_4f6f5b: /* 4f6f5b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f6f5f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f6f61: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f6f67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6f69: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6f6c: je 0x4f6f70 */
  if (zf) goto L_4f6f70;
L_4f6f6e: /* 4f6f6e: fchs  */
  ST0 = -ST0;
L_4f6f70: /* 4f6f70: fcom dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
/* 4f6f74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6f76: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6f79: je 0x4f6f81 */
  if (zf) goto L_4f6f81;
L_4f6f7b: /* 4f6f7b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f6f7d: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f6f81: /* 4f6f81: fcom dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
/* 4f6f85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6f87: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f6f8a: je 0x4f6f92 */
  if (zf) goto L_4f6f92;
L_4f6f8c: /* 4f6f8c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f6f8e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
L_4f6f92: /* 4f6f92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f6f95: ret  */
  esp += 4; SPILL(); return;
}

void f_4f6fc0(void) {
  LOAD_REGS();
L_4f6fc0: /* 4f6fc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f6fc1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f6fc4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f6fc6: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f6fca: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f6fcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6fce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f6fd1: jp 0x4f6fd9 */
  if (pf) goto L_4f6fd9;
L_4f6fd3: /* 4f6fd3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f6fd5: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f6fd9: /* 4f6fd9: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4f6fdc: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 4f6fe0: fcom dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
/* 4f6fe4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f6fe6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f6fe9: jnp 0x4f6ff1 */
  if (!pf) goto L_4f6ff1;
L_4f6feb: /* 4f6feb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f6fed: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f6ff1: /* 4f6ff1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f6ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_4f7010(void) {
  LOAD_REGS();
L_4f7010: /* 4f7010: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f7012: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f7018: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f701a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f701d: je 0x4f7021 */
  if (zf) goto L_4f7021;
L_4f701f: /* 4f701f: fchs  */
  ST0 = -ST0;
L_4f7021: /* 4f7021: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f7027: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7029: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f702c: jp 0x4f7072 */
  if (pf) goto L_4f7072;
L_4f702e: /* 4f702e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7031: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f7037: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7039: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f703c: je 0x4f7040 */
  if (zf) goto L_4f7040;
L_4f703e: /* 4f703e: fchs  */
  ST0 = -ST0;
L_4f7040: /* 4f7040: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f7046: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7048: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f704b: jp 0x4f7072 */
  if (pf) goto L_4f7072;
L_4f704d: /* 4f704d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f7050: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f7056: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7058: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f705b: je 0x4f705f */
  if (zf) goto L_4f705f;
L_4f705d: /* 4f705d: fchs  */
  ST0 = -ST0;
L_4f705f: /* 4f705f: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f7065: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7067: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f706a: jp 0x4f7072 */
  if (pf) goto L_4f7072;
L_4f706c: /* 4f706c: mov eax, 1 */
  eax = 0x1u;
/* 4f7071: ret  */
  esp += 4; SPILL(); return;
L_4f7072: /* 4f7072: xor eax, eax */
  eax = 0;
/* 4f7074: ret  */
  esp += 4; SPILL(); return;
}

void f_4f70a0(void) {
  LOAD_REGS();
L_4f70a0: /* 4f70a0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f70a2: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f70a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f70aa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f70ad: je 0x4f70b1 */
  if (zf) goto L_4f70b1;
L_4f70af: /* 4f70af: fchs  */
  ST0 = -ST0;
L_4f70b1: /* 4f70b1: fcomp dword ptr [0x5696bc] */
  fpu_com(ST0, F32((uint32_t)(0x5696bcu)));
  FPOP();
/* 4f70b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f70b9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f70bc: jne 0x4f70d3 */
  if (!zf) goto L_4f70d3;
L_4f70be: /* 4f70be: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f70c2: xor ecx, ecx */
  ecx = 0;
/* 4f70c4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f70c6: mov dword ptr [eax + 4], 0x3f800000 */
  W32((uint32_t)(eax + 0x4u), 0x3f800000u);
/* 4f70cd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f70d0: ret 4 */
  esp += 8; SPILL(); return;
L_4f70d3: /* 4f70d3: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f70d6: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f70dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f70de: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f70e1: je 0x4f70e5 */
  if (zf) goto L_4f70e5;
L_4f70e3: /* 4f70e3: fchs  */
  ST0 = -ST0;
L_4f70e5: /* 4f70e5: fcomp dword ptr [0x5696bc] */
  fpu_com(ST0, F32((uint32_t)(0x5696bcu)));
  FPOP();
/* 4f70eb: xor ecx, ecx */
  ecx = 0;
/* 4f70ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f70ef: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f70f2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f70f6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f70f9: jne 0x4f7107 */
  if (!zf) goto L_4f7107;
L_4f70fb: /* 4f70fb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f70fd: mov dword ptr [eax + 8], 0x3f800000 */
  W32((uint32_t)(eax + 0x8u), 0x3f800000u);
/* 4f7104: ret 4 */
  esp += 8; SPILL(); return;
L_4f7107: /* 4f7107: mov dword ptr [eax], 0x3f800000 */
  W32((uint32_t)(eax), 0x3f800000u);
/* 4f710d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f7110: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f7140(void) {
  LOAD_REGS();
L_4f7140: /* 4f7140: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7143: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 4f7147: fchs  */
  ST0 = -ST0;
/* 4f7149: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f714d: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f7150: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7154: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7156: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7158: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f715b: jnp 0x4f7178 */
  if (!pf) goto L_4f7178;
L_4f715d: /* 4f715d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f715f: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f7163: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 4f7167: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7169: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f716c: jp 0x4f7174 */
  if (pf) goto L_4f7174;
L_4f716e: /* 4f716e: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f7172: jmp 0x4f7178 */
  goto L_4f7178;
L_4f7174: /* 4f7174: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_4f7178: /* 4f7178: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f717c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f717f: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7183: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7185: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7187: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f718a: jnp 0x4f71a7 */
  if (!pf) goto L_4f71a7;
L_4f718c: /* 4f718c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f718e: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f7192: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 4f7196: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7198: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f719b: jp 0x4f71a3 */
  if (pf) goto L_4f71a3;
L_4f719d: /* 4f719d: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f71a1: jmp 0x4f71a7 */
  goto L_4f71a7;
L_4f71a3: /* 4f71a3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_4f71a7: /* 4f71a7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f71ab: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f71ad: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f71b1: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f71b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f71b5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f71b8: jnp 0x4f71e5 */
  if (!pf) goto L_4f71e5;
L_4f71ba: /* 4f71ba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f71bc: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f71c0: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 4f71c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f71c6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f71c9: jp 0x4f71e1 */
  if (pf) goto L_4f71e1;
L_4f71cb: /* 4f71cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f71cf: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f71d3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f71d5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f71d8: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f71db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f71de: ret 8 */
  esp += 12; SPILL(); return;
L_4f71e1: /* 4f71e1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_4f71e5: /* 4f71e5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4f71e9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4f71eb: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4f71ee: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 4f71f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f71f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7230(void) {
  LOAD_REGS();
L_4f7230: /* 4f7230: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7233: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f7237: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f7239: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f723a: mov esi, ecx */
  esi = ecx;
/* 4f723c: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 4f723e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 4f7242: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f7246: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f7249: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 4f724c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f7250: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4f7253: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 4f7257: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 4f725a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f725b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f725c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 4f7260: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f7264: call 0x4e14e7 */
  esp -= 4; W32(esp, 0x4f7269u); SPILL(); f_4e14e7(); if (g_unwind) return; RELOAD();
/* 4f7269: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4f726b: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 4f726d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4f7270: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4f7273: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 4f7276: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 4f7279: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f727a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f727d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f72a0(void) {
  LOAD_REGS();
L_4f72a0: /* 4f72a0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f72a2: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 4f72a5: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f72ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f72ad: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f72b0: je 0x4f72b4 */
  if (zf) goto L_4f72b4;
L_4f72b2: /* 4f72b2: fchs  */
  ST0 = -ST0;
L_4f72b4: /* 4f72b4: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f72ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f72bc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f72bf: jp 0x4f72e9 */
  if (pf) goto L_4f72e9;
L_4f72c1: /* 4f72c1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f72c4: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 4f72c7: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f72cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f72cf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f72d2: je 0x4f72d6 */
  if (zf) goto L_4f72d6;
L_4f72d4: /* 4f72d4: fchs  */
  ST0 = -ST0;
L_4f72d6: /* 4f72d6: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f72dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f72de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f72e1: jp 0x4f72e9 */
  if (pf) goto L_4f72e9;
L_4f72e3: /* 4f72e3: mov eax, 1 */
  eax = 0x1u;
/* 4f72e8: ret  */
  esp += 4; SPILL(); return;
L_4f72e9: /* 4f72e9: xor eax, eax */
  eax = 0;
/* 4f72eb: ret  */
  esp += 4; SPILL(); return;
}

void f_4f7310(void) {
  LOAD_REGS();
L_4f7310: /* 4f7310: mov eax, ecx */
  eax = ecx;
/* 4f7312: ret  */
  esp += 4; SPILL(); return;
}

void f_4f7330(void) {
  LOAD_REGS();
L_4f7330: /* 4f7330: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f7334: mov eax, ecx */
  eax = ecx;
/* 4f7336: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f7338: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f733c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f733f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f7343: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f7346: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f734a: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 4f734d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f734f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f7353: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f7356: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f735a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f735d: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_4f7370(void) {
  LOAD_REGS();
L_4f7370: /* 4f7370: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f7371: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f7374: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f7377: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f7379: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f737f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7381: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7384: jne 0x4f7396 */
  if (!zf) goto L_4f7396;
L_4f7386: /* 4f7386: mov dword ptr [esp], 1 */
  W32((uint32_t)(esp), 0x1u);
/* 4f738e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7390: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 4f7394: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f7395: ret  */
  esp += 4; SPILL(); return;
L_4f7396: /* 4f7396: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f739c: mov dword ptr [esp], 0xffffffff */
  W32((uint32_t)(esp), 0xffffffffu);
/* 4f73a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f73a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f73a9: jnp 0x4f73b3 */
  if (!pf) goto L_4f73b3;
L_4f73ab: /* 4f73ab: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
L_4f73b3: /* 4f73b3: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 4f73b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f73b8: ret  */
  esp += 4; SPILL(); return;
}

void f_4f73e0(void) {
  LOAD_REGS();
L_4f73e0: /* 4f73e0: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f73e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4f73e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f73e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f73e6: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4f73ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4f73eb: mov esi, ecx */
  esi = ecx;
/* 4f73ed: call 0x4e1c17 */
  esp -= 4; W32(esp, 0x4f73f2u); SPILL(); f_4e1c17(); if (g_unwind) return; RELOAD();
/* 4f73f2: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 4f73f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f73f7: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 4f73fa: mov ebx, eax */
  ebx = eax;
/* 4f73fc: call 0x4e1c17 */
  esp -= 4; W32(esp, 0x4f7401u); SPILL(); f_4e1c17(); if (g_unwind) return; RELOAD();
/* 4f7401: mov esi, eax */
  esi = eax;
/* 4f7403: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 4f7407: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f740c: mov edi, eax */
  edi = eax;
/* 4f740e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f7410: mov esi, ebx */
  esi = ebx;
/* 4f7412: lea edi, [eax + 0x30] */
  edi = (uint32_t)(eax + 0x30u);
/* 4f7415: mov ecx, 0xc */
  ecx = 0xcu;
/* 4f741a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 4f741c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f741d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f741e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4f741f: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f7422: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f7450(void) {
  LOAD_REGS();
L_4f7450: /* 4f7450: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 4f7453: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4f7457: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f7458: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4f745b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4f745d: and esi, 0xfffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4f7463: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4f7469: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4f746f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 4f7472: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f7474: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4f7477: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f7478: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f7490(void) {
  LOAD_REGS();
L_4f7490: /* 4f7490: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4f7493: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f7495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f7496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f7497: jge 0x4f749b */
  if ((sf == of)) goto L_4f749b;
L_4f7499: /* 4f7499: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_4f749b: /* 4f749b: mov edi, eax */
  edi = eax;
/* 4f749d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4f74a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f74a2: jge 0x4f74a6 */
  if ((sf == of)) goto L_4f74a6;
L_4f74a4: /* 4f74a4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_4f74a6: /* 4f74a6: mov esi, eax */
  esi = eax;
/* 4f74a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4f74aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4f74ac: jge 0x4f74b0 */
  if ((sf == of)) goto L_4f74b0;
L_4f74ae: /* 4f74ae: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_4f74b0: /* 4f74b0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f74b1: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 4f74b6: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x4f74b6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4f74b8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f74bc: mov eax, esi */
  eax = esi;
/* 4f74be: mov esi, 0xffff */
  esi = 0xffffu;
/* 4f74c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4f74c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f74c6: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4f74c6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4f74c8: mov eax, edi */
  eax = edi;
/* 4f74ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f74cb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 4f74ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4f74cf: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4f74cf);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4f74d1: mov eax, ecx */
  eax = ecx;
/* 4f74d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f74d4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 4f74d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f7500(void) {
  LOAD_REGS();
L_4f7500: /* 4f7500: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f7504: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 4f7508: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f750a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f750d: jp 0x4f7515 */
  if (pf) goto L_4f7515;
L_4f750f: /* 4f750f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f7513: jmp 0x4f7519 */
  goto L_4f7519;
L_4f7515: /* 4f7515: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f7519: /* 4f7519: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f751b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f751f: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 4f7523: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7525: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7528: jne 0x4f7536 */
  if (!zf) goto L_4f7536;
L_4f752a: /* 4f752a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 4f752e: mov eax, ecx */
  eax = ecx;
/* 4f7530: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f7533: ret 8 */
  esp += 12; SPILL(); return;
L_4f7536: /* 4f7536: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f753a: mov eax, ecx */
  eax = ecx;
/* 4f753c: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f753f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7570(void) {
  LOAD_REGS();
L_4f7570: /* 4f7570: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f7574: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f7577: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4f757a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f757c: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4f757e: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7580: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7584: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7586: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7589: jp 0x4f758f */
  if (pf) goto L_4f758f;
L_4f758b: /* 4f758b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f758d: jmp 0x4f7591 */
  goto L_4f7591;
L_4f758f: /* 4f758f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
L_4f7591: /* 4f7591: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f7595: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f7597: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7599: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f759b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f759e: jne 0x4f75a6 */
  if (!zf) goto L_4f75a6;
L_4f75a0: /* 4f75a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f75a2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f75a6: /* 4f75a6: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f75a9: mov eax, ecx */
  eax = ecx;
/* 4f75ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f75c0(void) {
  LOAD_REGS();
L_4f75c0: /* 4f75c0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f75c4: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4f75c7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f75cb: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4f75cd: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f75cf: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f75d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f75d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f75d8: jp 0x4f75de */
  if (pf) goto L_4f75de;
L_4f75da: /* 4f75da: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f75dc: jmp 0x4f75e0 */
  goto L_4f75e0;
L_4f75de: /* 4f75de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
L_4f75e0: /* 4f75e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f75e4: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f75e6: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f75e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f75ea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f75ed: jne 0x4f75f5 */
  if (!zf) goto L_4f75f5;
L_4f75ef: /* 4f75ef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f75f1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f75f5: /* 4f75f5: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f75f8: mov eax, ecx */
  eax = ecx;
/* 4f75fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7610(void) {
  LOAD_REGS();
L_4f7610: /* 4f7610: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7613: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f7617: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f7619: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 4f761d: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f761f: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7623: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7625: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7628: jp 0x4f762e */
  if (pf) goto L_4f762e;
L_4f762a: /* 4f762a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f762c: jmp 0x4f7630 */
  goto L_4f7630;
L_4f762e: /* 4f762e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
L_4f7630: /* 4f7630: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f7634: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f7636: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7638: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f763a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f763d: jne 0x4f7645 */
  if (!zf) goto L_4f7645;
L_4f763f: /* 4f763f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7641: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f7645: /* 4f7645: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f7648: mov eax, ecx */
  eax = ecx;
/* 4f764a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7660(void) {
  LOAD_REGS();
L_4f7660: /* 4f7660: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f7664: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7667: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 4f766a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f766c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 4f766e: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7670: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7674: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7676: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7679: jp 0x4f767f */
  if (pf) goto L_4f767f;
L_4f767b: /* 4f767b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f767d: jmp 0x4f7681 */
  goto L_4f7681;
L_4f767f: /* 4f767f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
L_4f7681: /* 4f7681: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f7685: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f7687: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7689: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f768b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f768e: jne 0x4f7696 */
  if (!zf) goto L_4f7696;
L_4f7690: /* 4f7690: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7692: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f7696: /* 4f7696: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f7699: mov eax, ecx */
  eax = ecx;
/* 4f769b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f76b0(void) {
  LOAD_REGS();
L_4f76b0: /* 4f76b0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f76b4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f76b7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f76bb: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f76bd: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f76bf: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f76c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f76c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f76c8: jp 0x4f76ce */
  if (pf) goto L_4f76ce;
L_4f76ca: /* 4f76ca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f76cc: jmp 0x4f76d0 */
  goto L_4f76d0;
L_4f76ce: /* 4f76ce: fld st(1) */
  { double v = STI(1); FPUSH(v); }
L_4f76d0: /* 4f76d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f76d4: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f76d6: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f76d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f76da: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f76dd: jne 0x4f76e5 */
  if (!zf) goto L_4f76e5;
L_4f76df: /* 4f76df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f76e1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f76e5: /* 4f76e5: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f76e8: mov eax, ecx */
  eax = ecx;
/* 4f76ea: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7700(void) {
  LOAD_REGS();
L_4f7700: /* 4f7700: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f7704: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4f770a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f770c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f770f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4f7713: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f7715: fcom dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
/* 4f7719: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f771b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f771e: jp 0x4f7724 */
  if (pf) goto L_4f7724;
L_4f7720: /* 4f7720: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f7722: jmp 0x4f7728 */
  goto L_4f7728;
L_4f7724: /* 4f7724: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f7728: /* 4f7728: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f772c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f772e: fcom dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
/* 4f7732: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7734: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7737: je 0x4f773f */
  if (zf) goto L_4f773f;
L_4f7739: /* 4f7739: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f773b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f773f: /* 4f773f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f7742: mov eax, ecx */
  eax = ecx;
/* 4f7744: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7770(void) {
  LOAD_REGS();
L_4f7770: /* 4f7770: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4f7774: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4f7777: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f777a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4f777c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f777e: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7780: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7784: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7786: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7789: jp 0x4f778f */
  if (pf) goto L_4f778f;
L_4f778b: /* 4f778b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f778d: jmp 0x4f7791 */
  goto L_4f7791;
L_4f778f: /* 4f778f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
L_4f7791: /* 4f7791: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f7795: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f7797: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7799: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f779b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f779e: jne 0x4f77a6 */
  if (!zf) goto L_4f77a6;
L_4f77a0: /* 4f77a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f77a2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_4f77a6: /* 4f77a6: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f77a9: mov eax, ecx */
  eax = ecx;
/* 4f77ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f77c0(void) {
  LOAD_REGS();
L_4f77c0: /* 4f77c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f77c1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f77c4: fchs  */
  ST0 = -ST0;
/* 4f77c6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f77c8: fchs  */
  ST0 = -ST0;
/* 4f77ca: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f77cc: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f77d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f77d2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f77d5: jp 0x4f77db */
  if (pf) goto L_4f77db;
L_4f77d7: /* 4f77d7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f77d9: jmp 0x4f77dd */
  goto L_4f77dd;
L_4f77db: /* 4f77db: fld st(1) */
  { double v = STI(1); FPUSH(v); }
L_4f77dd: /* 4f77dd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f77e1: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f77e3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f77e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f77e7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f77ea: jne 0x4f77f2 */
  if (!zf) goto L_4f77f2;
L_4f77ec: /* 4f77ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f77ee: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f77f2: /* 4f77f2: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f77f5: mov eax, ecx */
  eax = ecx;
/* 4f77f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f77f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4f7810(void) {
  LOAD_REGS();
L_4f7810: /* 4f7810: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f7811: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7814: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f7816: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f781a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f781c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f781e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7821: jne 0x4f7829 */
  if (!zf) goto L_4f7829;
L_4f7823: /* 4f7823: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7825: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f7829: /* 4f7829: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f782a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f7840(void) {
  LOAD_REGS();
L_4f7840: /* 4f7840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f7841: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7844: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f7846: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f784a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f784c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f784e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7851: jp 0x4f7859 */
  if (pf) goto L_4f7859;
L_4f7853: /* 4f7853: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7855: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f7859: /* 4f7859: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f785a: ret  */
  esp += 4; SPILL(); return;
}

void f_4f7870(void) {
  LOAD_REGS();
L_4f7870: /* 4f7870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f7871: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7874: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f7876: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f787a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f787c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f787e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7881: jne 0x4f7889 */
  if (!zf) goto L_4f7889;
L_4f7883: /* 4f7883: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7885: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
L_4f7889: /* 4f7889: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f788c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f788e: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7892: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7894: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7896: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7899: jp 0x4f78a3 */
  if (pf) goto L_4f78a3;
L_4f789b: /* 4f789b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f789d: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 4f78a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f78a2: ret  */
  esp += 4; SPILL(); return;
L_4f78a3: /* 4f78a3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4f78a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4f78a6: ret  */
  esp += 4; SPILL(); return;
}

void f_4f78c0(void) {
  LOAD_REGS();
L_4f78c0: /* 4f78c0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f78c2: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f78c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f78ca: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f78cd: je 0x4f78d1 */
  if (zf) goto L_4f78d1;
L_4f78cf: /* 4f78cf: fchs  */
  ST0 = -ST0;
L_4f78d1: /* 4f78d1: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f78d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f78d9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f78dc: jp 0x4f7903 */
  if (pf) goto L_4f7903;
L_4f78de: /* 4f78de: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f78e1: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 4f78e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f78e9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f78ec: je 0x4f78f0 */
  if (zf) goto L_4f78f0;
L_4f78ee: /* 4f78ee: fchs  */
  ST0 = -ST0;
L_4f78f0: /* 4f78f0: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 4f78f6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f78f8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f78fb: jp 0x4f7903 */
  if (pf) goto L_4f7903;
L_4f78fd: /* 4f78fd: mov eax, 1 */
  eax = 0x1u;
/* 4f7902: ret  */
  esp += 4; SPILL(); return;
L_4f7903: /* 4f7903: xor eax, eax */
  eax = 0;
/* 4f7905: ret  */
  esp += 4; SPILL(); return;
}

void f_4f7930(void) {
  LOAD_REGS();
L_4f7930: /* 4f7930: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4f7934: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4f7935: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4f7939: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4f793c: mov esi, ecx */
  esi = ecx;
/* 4f793e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 4f7941: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4f7945: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f7949: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f794f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7951: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7954: jnp 0x4f797e */
  if (!pf) goto L_4f797e;
L_4f7956: /* 4f7956: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4f795a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f795b: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4f7961: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f7963: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 4f7967: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f796a: call 0x4e392c */
  esp -= 4; W32(esp, 0x4f796fu); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4f796f: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 4f7973: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 4f7977: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f797a: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
L_4f797e: /* 4f797e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4f7980: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4f7984: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 4f7986: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 4f798a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f798e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4f798f: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 4f7995: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4f7996: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7998: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f799b: jnp 0x4f79c5 */
  if (!pf) goto L_4f79c5;
L_4f799d: /* 4f799d: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 4f79a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4f79a2: fmul qword ptr [0x569470] */
  ST0 = ST0 * (F64((uint32_t)(0x569470u)));
/* 4f79a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4f79aa: fdiv dword ptr [esp + 4] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4u)));
/* 4f79ae: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4f79b1: call 0x4e392c */
  esp -= 4; W32(esp, 0x4f79b6u); SPILL(); f_4e392c(); if (g_unwind) return; RELOAD();
/* 4f79b6: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 4f79ba: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4f79be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f79c1: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
L_4f79c5: /* 4f79c5: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 4f79c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f79cb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f79ce: jp 0x4f79d4 */
  if (pf) goto L_4f79d4;
L_4f79d0: /* 4f79d0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f79d2: jmp 0x4f79d8 */
  goto L_4f79d8;
L_4f79d4: /* 4f79d4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_4f79d8: /* 4f79d8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f79dc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 4f79de: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 4f79e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f79e4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f79e7: je 0x4f79ef */
  if (zf) goto L_4f79ef;
L_4f79e9: /* 4f79e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f79eb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_4f79ef: /* 4f79ef: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 4f79f2: mov eax, ecx */
  eax = ecx;
/* 4f79f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f79f7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7a40(void) {
  LOAD_REGS();
L_4f7a40: /* 4f7a40: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7a43: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f7a47: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 4f7a4a: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 4f7a4d: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f7a50: fadd dword ptr [edx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x10u)));
/* 4f7a53: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7a55: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f7a59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7a5b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7a5e: jp 0x4f7a66 */
  if (pf) goto L_4f7a66;
L_4f7a60: /* 4f7a60: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4f7a64: jmp 0x4f7a6c */
  goto L_4f7a6c;
L_4f7a66: /* 4f7a66: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7a68: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_4f7a6c: /* 4f7a6c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7a6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7a70: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7a73: jne 0x4f7a81 */
  if (!zf) goto L_4f7a81;
L_4f7a75: /* 4f7a75: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7a79: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7a7b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f7a7f: jmp 0x4f7a85 */
  goto L_4f7a85;
L_4f7a81: /* 4f7a81: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_4f7a85: /* 4f7a85: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 4f7a88: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 4f7a8b: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4f7a8e: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4f7a91: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7a93: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f7a97: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7a99: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7a9c: jp 0x4f7aa4 */
  if (pf) goto L_4f7aa4;
L_4f7a9e: /* 4f7a9e: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7aa2: jmp 0x4f7aaa */
  goto L_4f7aaa;
L_4f7aa4: /* 4f7aa4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7aa6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_4f7aaa: /* 4f7aaa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7aac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7aae: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7ab1: jne 0x4f7abf */
  if (!zf) goto L_4f7abf;
L_4f7ab3: /* 4f7ab3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7ab7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7ab9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 4f7abd: jmp 0x4f7ac3 */
  goto L_4f7ac3;
L_4f7abf: /* 4f7abf: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_4f7ac3: /* 4f7ac3: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4f7ac6: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4f7ac9: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4f7acb: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4f7acd: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7acf: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f7ad3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7ad5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7ad8: jp 0x4f7ae0 */
  if (pf) goto L_4f7ae0;
L_4f7ada: /* 4f7ada: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7ade: jmp 0x4f7ae6 */
  goto L_4f7ae6;
L_4f7ae0: /* 4f7ae0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7ae2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_4f7ae6: /* 4f7ae6: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7ae8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7aea: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7aed: jne 0x4f7afb */
  if (!zf) goto L_4f7afb;
L_4f7aef: /* 4f7aef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f7af3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7af5: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 4f7af9: jmp 0x4f7aff */
  goto L_4f7aff;
L_4f7afb: /* 4f7afb: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
L_4f7aff: /* 4f7aff: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f7b03: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f7b07: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f7b0b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f7b0d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f7b11: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f7b14: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f7b18: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4f7b1b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f7b1f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4f7b22: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4f7b26: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 4f7b29: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 4f7b2c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f7b2f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7b80(void) {
  LOAD_REGS();
L_4f7b80: /* 4f7b80: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7b83: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f7b87: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f7b8a: fsub dword ptr [edx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x14u)));
/* 4f7b8d: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f7b90: fsub dword ptr [edx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x10u)));
/* 4f7b93: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7b95: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f7b99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7b9b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7b9e: jp 0x4f7ba6 */
  if (pf) goto L_4f7ba6;
L_4f7ba0: /* 4f7ba0: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4f7ba4: jmp 0x4f7bac */
  goto L_4f7bac;
L_4f7ba6: /* 4f7ba6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7ba8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_4f7bac: /* 4f7bac: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7bae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7bb0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7bb3: jne 0x4f7bc1 */
  if (!zf) goto L_4f7bc1;
L_4f7bb5: /* 4f7bb5: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7bb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7bbb: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f7bbf: jmp 0x4f7bc5 */
  goto L_4f7bc5;
L_4f7bc1: /* 4f7bc1: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_4f7bc5: /* 4f7bc5: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f7bc8: fsub dword ptr [edx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xcu)));
/* 4f7bcb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f7bce: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 4f7bd1: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7bd3: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f7bd7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7bd9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7bdc: jp 0x4f7be4 */
  if (pf) goto L_4f7be4;
L_4f7bde: /* 4f7bde: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7be2: jmp 0x4f7bea */
  goto L_4f7bea;
L_4f7be4: /* 4f7be4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7be6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_4f7bea: /* 4f7bea: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7bec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7bee: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7bf1: jne 0x4f7bff */
  if (!zf) goto L_4f7bff;
L_4f7bf3: /* 4f7bf3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7bf7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7bf9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 4f7bfd: jmp 0x4f7c03 */
  goto L_4f7c03;
L_4f7bff: /* 4f7bff: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_4f7c03: /* 4f7c03: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7c06: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 4f7c09: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f7c0b: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 4f7c0d: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7c0f: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f7c13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7c15: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7c18: jp 0x4f7c20 */
  if (pf) goto L_4f7c20;
L_4f7c1a: /* 4f7c1a: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7c1e: jmp 0x4f7c26 */
  goto L_4f7c26;
L_4f7c20: /* 4f7c20: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7c22: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_4f7c26: /* 4f7c26: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7c28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7c2a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7c2d: jne 0x4f7c3b */
  if (!zf) goto L_4f7c3b;
L_4f7c2f: /* 4f7c2f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f7c33: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7c35: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 4f7c39: jmp 0x4f7c3f */
  goto L_4f7c3f;
L_4f7c3b: /* 4f7c3b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
L_4f7c3f: /* 4f7c3f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f7c43: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f7c47: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f7c4b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f7c4d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f7c51: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f7c54: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f7c58: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4f7c5b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f7c5f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4f7c62: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4f7c66: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 4f7c69: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 4f7c6c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f7c6f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7cc0(void) {
  LOAD_REGS();
L_4f7cc0: /* 4f7cc0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7cc3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f7cc7: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4f7cca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f7ccc: fadd dword ptr [ecx + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x14u)));
/* 4f7ccf: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f7cd3: fadd dword ptr [ecx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x10u)));
/* 4f7cd6: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7cda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7cdc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7cdf: jp 0x4f7ce7 */
  if (pf) goto L_4f7ce7;
L_4f7ce1: /* 4f7ce1: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4f7ce5: jmp 0x4f7cef */
  goto L_4f7cef;
L_4f7ce7: /* 4f7ce7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7ceb: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_4f7cef: /* 4f7cef: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7cf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7cf5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7cf8: jne 0x4f7d00 */
  if (!zf) goto L_4f7d00;
L_4f7cfa: /* 4f7cfa: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f7cfe: jmp 0x4f7d0a */
  goto L_4f7d0a;
L_4f7d00: /* 4f7d00: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7d04: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7d06: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_4f7d0a: /* 4f7d0a: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4f7d0d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f7d0f: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 4f7d12: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f7d16: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 4f7d19: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7d1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7d1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7d22: jp 0x4f7d2a */
  if (pf) goto L_4f7d2a;
L_4f7d24: /* 4f7d24: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7d28: jmp 0x4f7d32 */
  goto L_4f7d32;
L_4f7d2a: /* 4f7d2a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7d2e: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_4f7d32: /* 4f7d32: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7d36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7d38: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7d3b: jne 0x4f7d43 */
  if (!zf) goto L_4f7d43;
L_4f7d3d: /* 4f7d3d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f7d41: jmp 0x4f7d4d */
  goto L_4f7d4d;
L_4f7d43: /* 4f7d43: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7d47: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7d49: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_4f7d4d: /* 4f7d4d: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4f7d4f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 4f7d51: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 4f7d54: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f7d58: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 4f7d5a: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7d5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7d60: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7d63: jp 0x4f7d6b */
  if (pf) goto L_4f7d6b;
L_4f7d65: /* 4f7d65: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7d69: jmp 0x4f7d73 */
  goto L_4f7d73;
L_4f7d6b: /* 4f7d6b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f7d6f: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
L_4f7d73: /* 4f7d73: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7d77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7d79: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7d7c: jne 0x4f7d84 */
  if (!zf) goto L_4f7d84;
L_4f7d7e: /* 4f7d7e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f7d82: jmp 0x4f7d8e */
  goto L_4f7d8e;
L_4f7d84: /* 4f7d84: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f7d88: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7d8a: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
L_4f7d8e: /* 4f7d8e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f7d92: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 4f7d96: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f7d9a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f7d9c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f7da0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f7da3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f7da7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f7daa: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f7dae: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f7db1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f7db5: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4f7db8: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4f7dbb: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f7dbe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7e20(void) {
  LOAD_REGS();
L_4f7e20: /* 4f7e20: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7e23: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f7e27: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4f7e2a: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f7e2d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f7e2f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f7e33: fsubr dword ptr [ecx + 0x10] */
  ST0 = (F32((uint32_t)(ecx + 0x10u))) - ST0;
/* 4f7e36: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7e3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7e3c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7e3f: jp 0x4f7e47 */
  if (pf) goto L_4f7e47;
L_4f7e41: /* 4f7e41: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4f7e45: jmp 0x4f7e4f */
  goto L_4f7e4f;
L_4f7e47: /* 4f7e47: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7e4b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_4f7e4f: /* 4f7e4f: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7e53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7e55: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7e58: jne 0x4f7e60 */
  if (!zf) goto L_4f7e60;
L_4f7e5a: /* 4f7e5a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 4f7e5e: jmp 0x4f7e6a */
  goto L_4f7e6a;
L_4f7e60: /* 4f7e60: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7e64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7e66: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_4f7e6a: /* 4f7e6a: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4f7e6d: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f7e70: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f7e72: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f7e76: fsubr dword ptr [ecx + 8] */
  ST0 = (F32((uint32_t)(ecx + 0x8u))) - ST0;
/* 4f7e79: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7e7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7e7f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7e82: jp 0x4f7e8a */
  if (pf) goto L_4f7e8a;
L_4f7e84: /* 4f7e84: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7e88: jmp 0x4f7e92 */
  goto L_4f7e92;
L_4f7e8a: /* 4f7e8a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7e8e: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_4f7e92: /* 4f7e92: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7e96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7e98: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7e9b: jne 0x4f7ea3 */
  if (!zf) goto L_4f7ea3;
L_4f7e9d: /* 4f7e9d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 4f7ea1: jmp 0x4f7ead */
  goto L_4f7ead;
L_4f7ea3: /* 4f7ea3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f7ea7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7ea9: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_4f7ead: /* 4f7ead: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4f7eaf: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f7eb2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 4f7eb4: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 4f7eb8: fsubr dword ptr [ecx] */
  ST0 = (F32((uint32_t)(ecx))) - ST0;
/* 4f7eba: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7ebe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7ec0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7ec3: jp 0x4f7ecb */
  if (pf) goto L_4f7ecb;
L_4f7ec5: /* 4f7ec5: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7ec9: jmp 0x4f7ed3 */
  goto L_4f7ed3;
L_4f7ecb: /* 4f7ecb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f7ecf: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
L_4f7ed3: /* 4f7ed3: fcom dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
/* 4f7ed7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7ed9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7edc: jne 0x4f7ee4 */
  if (!zf) goto L_4f7ee4;
L_4f7ede: /* 4f7ede: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 4f7ee2: jmp 0x4f7eee */
  goto L_4f7eee;
L_4f7ee4: /* 4f7ee4: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f7ee8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7eea: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
L_4f7eee: /* 4f7eee: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f7ef2: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 4f7ef6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f7efa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f7efc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f7f00: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f7f03: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f7f07: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f7f0a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f7f0e: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f7f11: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f7f15: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4f7f18: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4f7f1b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f7f1e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f7f80(void) {
  LOAD_REGS();
L_4f7f80: /* 4f7f80: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f7f83: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f7f87: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f7f8a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f7f8e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f7f91: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7f93: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7f97: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7f99: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7f9c: jp 0x4f7fa4 */
  if (pf) goto L_4f7fa4;
L_4f7f9e: /* 4f7f9e: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4f7fa2: jmp 0x4f7faa */
  goto L_4f7faa;
L_4f7fa4: /* 4f7fa4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7fa6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_4f7faa: /* 4f7faa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7fac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7fae: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7fb1: jne 0x4f7fbf */
  if (!zf) goto L_4f7fbf;
L_4f7fb3: /* 4f7fb3: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 4f7fb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7fb9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f7fbd: jmp 0x4f7fc3 */
  goto L_4f7fc3;
L_4f7fbf: /* 4f7fbf: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_4f7fc3: /* 4f7fc3: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f7fc7: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f7fca: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f7fce: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f7fd1: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f7fd3: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f7fd7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7fd9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f7fdc: jp 0x4f7fe4 */
  if (pf) goto L_4f7fe4;
L_4f7fde: /* 4f7fde: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f7fe2: jmp 0x4f7fea */
  goto L_4f7fea;
L_4f7fe4: /* 4f7fe4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f7fe6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_4f7fea: /* 4f7fea: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f7fec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f7fee: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f7ff1: jne 0x4f7fff */
  if (!zf) goto L_4f7fff;
L_4f7ff3: /* 4f7ff3: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f7ff7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f7ff9: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 4f7ffd: jmp 0x4f8003 */
  goto L_4f8003;
L_4f7fff: /* 4f7fff: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_4f8003: /* 4f8003: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f8007: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f800a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f800e: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f8010: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f8012: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f8016: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8018: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f801b: jp 0x4f8023 */
  if (pf) goto L_4f8023;
L_4f801d: /* 4f801d: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f8021: jmp 0x4f8029 */
  goto L_4f8029;
L_4f8023: /* 4f8023: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8025: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_4f8029: /* 4f8029: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f802b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f802d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8030: jne 0x4f803e */
  if (!zf) goto L_4f803e;
L_4f8032: /* 4f8032: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f8036: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8038: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 4f803c: jmp 0x4f8042 */
  goto L_4f8042;
L_4f803e: /* 4f803e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
L_4f8042: /* 4f8042: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f8046: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 4f804a: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f804e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f8050: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f8054: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f8057: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f805b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f805e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f8062: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f8065: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f8069: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4f806c: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4f806f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8072: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f80c0(void) {
  LOAD_REGS();
L_4f80c0: /* 4f80c0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f80c3: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f80c7: fdivr qword ptr [0x5694a8] */
  ST0 = (F64((uint32_t)(0x5694a8u))) / ST0;
/* 4f80cd: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f80d1: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f80d4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f80d8: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 4f80db: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f80dd: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f80e1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f80e3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f80e6: jp 0x4f80ee */
  if (pf) goto L_4f80ee;
L_4f80e8: /* 4f80e8: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4f80ec: jmp 0x4f80f4 */
  goto L_4f80f4;
L_4f80ee: /* 4f80ee: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f80f0: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_4f80f4: /* 4f80f4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f80f6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f80f8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f80fb: jne 0x4f8109 */
  if (!zf) goto L_4f8109;
L_4f80fd: /* 4f80fd: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 4f8101: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8103: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f8107: jmp 0x4f810d */
  goto L_4f810d;
L_4f8109: /* 4f8109: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_4f810d: /* 4f810d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f8111: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f8114: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f8118: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f811b: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f811d: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f8121: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8123: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f8126: jp 0x4f812e */
  if (pf) goto L_4f812e;
L_4f8128: /* 4f8128: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f812c: jmp 0x4f8134 */
  goto L_4f8134;
L_4f812e: /* 4f812e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8130: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_4f8134: /* 4f8134: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8136: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8138: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f813b: jne 0x4f8149 */
  if (!zf) goto L_4f8149;
L_4f813d: /* 4f813d: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f8141: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8143: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 4f8147: jmp 0x4f814d */
  goto L_4f814d;
L_4f8149: /* 4f8149: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_4f814d: /* 4f814d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f8151: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f8154: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 4f8158: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f815a: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f815c: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f8160: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8162: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f8165: jp 0x4f816d */
  if (pf) goto L_4f816d;
L_4f8167: /* 4f8167: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f816b: jmp 0x4f8173 */
  goto L_4f8173;
L_4f816d: /* 4f816d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f816f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_4f8173: /* 4f8173: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8175: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8177: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f817a: jne 0x4f8188 */
  if (!zf) goto L_4f8188;
L_4f817c: /* 4f817c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f8180: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8182: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 4f8186: jmp 0x4f818c */
  goto L_4f818c;
L_4f8188: /* 4f8188: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
L_4f818c: /* 4f818c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f8190: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 4f8194: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4f8198: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f819a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4f819e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f81a1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4f81a5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f81a8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 4f81ac: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f81af: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 4f81b3: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4f81b6: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4f81b9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f81bc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8200(void) {
  LOAD_REGS();
L_4f8200: /* 4f8200: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8203: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 4f8207: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 4f820a: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 4f820d: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f8210: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 4f8213: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f8215: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f8219: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f821b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f821e: jp 0x4f8226 */
  if (pf) goto L_4f8226;
L_4f8220: /* 4f8220: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 4f8224: jmp 0x4f822c */
  goto L_4f822c;
L_4f8226: /* 4f8226: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8228: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_4f822c: /* 4f822c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f822e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8230: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8233: jne 0x4f8241 */
  if (!zf) goto L_4f8241;
L_4f8235: /* 4f8235: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f8239: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f823b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 4f823f: jmp 0x4f8245 */
  goto L_4f8245;
L_4f8241: /* 4f8241: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_4f8245: /* 4f8245: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 4f8248: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 4f824b: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 4f824e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 4f8251: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f8253: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f8257: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8259: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f825c: jp 0x4f8264 */
  if (pf) goto L_4f8264;
L_4f825e: /* 4f825e: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 4f8262: jmp 0x4f826a */
  goto L_4f826a;
L_4f8264: /* 4f8264: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8266: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_4f826a: /* 4f826a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f826c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f826e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f8271: jne 0x4f827f */
  if (!zf) goto L_4f827f;
L_4f8273: /* 4f8273: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f8277: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8279: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 4f827d: jmp 0x4f8283 */
  goto L_4f8283;
L_4f827f: /* 4f827f: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_4f8283: /* 4f8283: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 4f8286: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 4f8289: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 4f828b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4f828d: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f828f: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 4f8293: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8295: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f8298: jp 0x4f82a0 */
  if (pf) goto L_4f82a0;
L_4f829a: /* 4f829a: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f829e: jmp 0x4f82a6 */
  goto L_4f82a6;
L_4f82a0: /* 4f82a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f82a2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_4f82a6: /* 4f82a6: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f82a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f82aa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f82ad: jne 0x4f82bb */
  if (!zf) goto L_4f82bb;
L_4f82af: /* 4f82af: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 4f82b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f82b5: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 4f82b9: jmp 0x4f82bf */
  goto L_4f82bf;
L_4f82bb: /* 4f82bb: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
L_4f82bf: /* 4f82bf: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 4f82c3: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f82c7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f82cb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4f82cd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f82d1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4f82d4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f82d8: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4f82db: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f82df: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4f82e2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4f82e6: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 4f82e9: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 4f82ec: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f82ef: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4f8340(void) {
  LOAD_REGS();
L_4f8340: /* 4f8340: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4f8343: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 4f8346: fchs  */
  ST0 = -ST0;
/* 4f8348: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 4f834b: fchs  */
  ST0 = -ST0;
/* 4f834d: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f834f: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f8353: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8355: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f8358: jp 0x4f8360 */
  if (pf) goto L_4f8360;
L_4f835a: /* 4f835a: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 4f835e: jmp 0x4f8366 */
  goto L_4f8366;
L_4f8360: /* 4f8360: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f8362: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_4f8366: /* 4f8366: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f8368: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f836a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f836d: jne 0x4f837b */
  if (!zf) goto L_4f837b;
L_4f836f: /* 4f836f: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 4f8373: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f8375: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4f8379: jmp 0x4f837f */
  goto L_4f837f;
L_4f837b: /* 4f837b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_4f837f: /* 4f837f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 4f8382: fchs  */
  ST0 = -ST0;
/* 4f8384: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 4f8387: fchs  */
  ST0 = -ST0;
/* 4f8389: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f838b: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f838f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f8391: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f8394: jp 0x4f839c */
  if (pf) goto L_4f839c;
L_4f8396: /* 4f8396: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 4f839a: jmp 0x4f83a2 */
  goto L_4f83a2;
L_4f839c: /* 4f839c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f839e: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_4f83a2: /* 4f83a2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f83a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f83a6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f83a9: jne 0x4f83b7 */
  if (!zf) goto L_4f83b7;
L_4f83ab: /* 4f83ab: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 4f83af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f83b1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 4f83b5: jmp 0x4f83bb */
  goto L_4f83bb;
L_4f83b7: /* 4f83b7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
L_4f83bb: /* 4f83bb: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 4f83be: fchs  */
  ST0 = -ST0;
/* 4f83c0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4f83c2: fchs  */
  ST0 = -ST0;
/* 4f83c4: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 4f83c6: fst dword ptr [esp] */
  WF32((uint32_t)(esp), ST0);
/* 4f83ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f83cc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4f83cf: jp 0x4f83d7 */
  if (pf) goto L_4f83d7;
L_4f83d1: /* 4f83d1: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 4f83d5: jmp 0x4f83dd */
  goto L_4f83dd;
L_4f83d7: /* 4f83d7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4f83d9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
L_4f83dd: /* 4f83dd: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4f83df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4f83e1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4f83e4: jne 0x4f83f2 */
  if (!zf) goto L_4f83f2;
L_4f83e6: /* 4f83e6: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 4f83ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4f83ec: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 4f83f0: jmp 0x4f83f6 */
  goto L_4f83f6;
L_4f83f2: /* 4f83f2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
L_4f83f6: /* 4f83f6: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4f83fa: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4f83fe: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4f8402: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4f8404: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4f8408: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 4f840b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4f840f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4f8412: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4f8416: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 4f8419: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 4f841d: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4f8420: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 4f8423: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4f8426: ret 4 */
  esp += 8; SPILL(); return;
}
