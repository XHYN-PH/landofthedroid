#include "recomp.h"
#include "rec_mod.h"

void f_ffb90d(void) {
  LOAD_REGS();
L_ffb90d: /* ffb90d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffb910: /* ffb910: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ffb914: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffb917: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ffb91b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffb91f: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* ffb923: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ffb927: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffb92b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffb92e: call 0x1009244 */
  esp -= 4; W32(esp, 0xffb933u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* ffb933: fstp dword ptr [ebx + edi*8] */
  WF32((uint32_t)(ebx + edi*8), ST0); FPOP();
/* ffb936: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffb93a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffb93d: call 0x100923e */
  esp -= 4; W32(esp, 0xffb942u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* ffb942: fchs  */
  ST0 = -ST0;
/* ffb944: fstp dword ptr [ebx + edi*8 + 4] */
  WF32((uint32_t)(ebx + edi*8 + 0x4u), ST0); FPOP();
/* ffb948: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffb94c: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ffb950: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffb954: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* ffb958: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ffb95c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffb960: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffb963: call 0x1009244 */
  esp -= 4; W32(esp, 0xffb968u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* ffb968: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ffb96c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffb96e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffb972: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffb975: call 0x100923e */
  esp -= 4; W32(esp, 0xffb97au); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* ffb97a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ffb97e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ffb982: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb985: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffb988: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ffb98c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ffb990: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb993: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffb994: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb997: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb99a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb99c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffb9a0: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ffb9a4: jl 0xffb910 */
  if ((sf != of)) goto L_ffb910;
L_ffb9aa: /* ffb9aa: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffb9ad: mov eax, ecx */
  eax = ecx;
/* ffb9af: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb9b0: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ffb9b3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb9b5: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffb9b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  cf = 0;
  of = 0;
  }
/* ffb9ba: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffb9be: jle 0xffba38 */
  if ((zf || sf != of)) goto L_ffba38;
L_ffb9c4: /* ffb9c4: fld dword ptr [0x100a168] */
  { double v = F32((uint32_t)(0x100a168u)); FPUSH(v); }
/* ffb9ca: mov dword ptr [esp + 0x1c], 2 */
  W32((uint32_t)(esp + 0x1cu), 0x2u);
/* ffb9d2: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* ffb9d6: lea ebx, [ebx + ecx*4] */
  ebx = (uint32_t)(ebx + ecx*4);
/* ffb9d9: mov esi, eax */
  esi = eax;
/* ffb9db: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffb9df: nop  */
L_ffb9e0: /* ffb9e0: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffb9e4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffb9e7: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* ffb9eb: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ffb9ef: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* ffb9f3: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ffb9f7: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffb9fb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffb9fe: call 0x1009244 */
  esp -= 4; W32(esp, 0xffba03u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* ffba03: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* ffba09: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* ffba0b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffba0f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffba12: call 0x100923e */
  esp -= 4; W32(esp, 0xffba17u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* ffba17: fmul qword ptr [0x100a228] */
  ST0 = ST0 * (F64((uint32_t)(0x100a228u)));
/* ffba1d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ffba21: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* ffba24: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffba27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffba2a: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* ffba2d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ffba2e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ffba32: jne 0xffb9e0 */
  if (!zf) goto L_ffb9e0;
L_ffba34: /* ffba34: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_ffba38: /* ffba38: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffba3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  ecx = r;
  }
/* ffba3d: mov edi, 1 */
  edi = 0x1u;
/* ffba42: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* ffba44: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffba48: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* ffba4b: mov edx, 1 */
  edx = 0x1u;
/* ffba50: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  edi = r;
  }
/* ffba51: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ffba53: xor esi, esi */
  esi = 0;
/* ffba55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffba57: jle 0xffbaa1 */
  if ((zf || sf != of)) goto L_ffbaa1;
L_ffba59: /* ffba59: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* ffba5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffba60: /* ffba60: xor ebx, ebx */
  ebx = 0;
/* ffba62: xor ecx, ecx */
  ecx = 0;
/* ffba64: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffba66: je 0xffba86 */
  if (zf) goto L_ffba86;
L_ffba68: /* ffba68: mov eax, edx */
  eax = edx;
/* ffba6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffba70: /* ffba70: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ffba72: je 0xffba7d */
  if (zf) goto L_ffba7d;
L_ffba74: /* ffba74: mov eax, 1 */
  eax = 0x1u;
/* ffba79: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* ffba7b: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  cf = 0;
  ebx = r;
  }
L_ffba7d: /* ffba7d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ecx = r;
  }
/* ffba7e: mov eax, edx */
  eax = edx;
/* ffba80: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* ffba82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffba84: jne 0xffba70 */
  if (!zf) goto L_ffba70;
L_ffba86: /* ffba86: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffba8a: mov ecx, ebx */
  ecx = ebx;
/* ffba8c: not ecx */
  ecx = ~ecx;
/* ffba8e: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ffba90: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ffba91: mov dword ptr [eax + esi*8], ecx */
  W32((uint32_t)(eax + esi*8), ecx);
/* ffba94: mov dword ptr [eax + esi*8 + 4], ebx */
  W32((uint32_t)(eax + esi*8 + 0x4u), ebx);
/* ffba98: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ffba9c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffba9d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffba9f: jl 0xffba60 */
  if ((sf != of)) goto L_ffba60;
L_ffbaa1: /* ffbaa1: fld dword ptr [0x100a1f8] */
  { double v = F32((uint32_t)(0x100a1f8u)); FPUSH(v); }
/* ffbaa7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffbaaa: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* ffbaae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffbaaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffbab0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffbab1: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* ffbab4: mov esp, ebp */
  esp = ebp;
/* ffbab6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffbab7: ret  */
  esp += 4; SPILL(); return;
}

void f_ffbac0(void) {
  LOAD_REGS();
L_ffbac0: /* ffbac0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffbac3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffbac6: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* ffbac9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbacd: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* ffbad0: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* ffbad3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbad7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffbad9: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* ffbadc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbae0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* ffbae3: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* ffbae5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* ffbae9: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbaed: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* ffbaf1: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* ffbaf4: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbaf8: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* ffbafc: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* ffbaff: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* ffbb02: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* ffbb05: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbb09: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffbb0c: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* ffbb0f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbb13: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbb17: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* ffbb1b: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ffbb1d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbb21: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* ffbb25: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffbb28: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffbb2b: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* ffbb2e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbb32: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffbb35: fadd dword ptr [eax + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x1cu)));
/* ffbb38: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbb3c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffbb40: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* ffbb44: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ffbb47: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbb4b: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* ffbb4f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffbb52: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbb56: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* ffbb5a: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* ffbb5d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbb61: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* ffbb65: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* ffbb68: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffbb6b: ret  */
  esp += 4; SPILL(); return;
}

void f_ffbb70(void) {
  LOAD_REGS();
L_ffbb70: /* ffbb70: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffbb73: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffbb76: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* ffbb79: fsub dword ptr [eax + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x24u)));
/* ffbb7c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbb80: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffbb82: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* ffbb84: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbb88: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffbb8a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* ffbb8c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffbb8e: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* ffbb91: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* ffbb94: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* ffbb97: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbb9b: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* ffbb9f: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbba5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ffbba7: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbbab: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* ffbbaf: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbbb5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffbbb8: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffbbbb: fsub dword ptr [eax + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x2cu)));
/* ffbbbe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbbc2: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* ffbbc5: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* ffbbc9: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* ffbbcc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbbd0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffbbd3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* ffbbd6: fadd dword ptr [eax + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x28u)));
/* ffbbd9: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ffbbdd: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* ffbbe0: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffbbe3: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ffbbe6: fadd dword ptr [eax + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x2cu)));
/* ffbbe9: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* ffbbec: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* ffbbef: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* ffbbf2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbbf6: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* ffbbf9: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* ffbbfc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbc00: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* ffbc03: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* ffbc06: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* ffbc09: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* ffbc0c: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* ffbc0f: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* ffbc12: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbc16: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* ffbc1a: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbc20: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* ffbc23: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbc27: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* ffbc2b: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbc31: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* ffbc34: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* ffbc37: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* ffbc3a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbc3e: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* ffbc41: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* ffbc45: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* ffbc48: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbc4c: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* ffbc4f: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* ffbc52: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* ffbc55: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ffbc59: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* ffbc5c: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffbc5f: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* ffbc62: fadd dword ptr [eax + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3cu)));
/* ffbc65: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* ffbc68: call 0xffbac0 */
  esp -= 4; W32(esp, 0xffbc6du); SPILL(); f_ffbac0(); if (g_unwind) return; RELOAD();
/* ffbc6d: mov eax, ecx */
  eax = ecx;
/* ffbc6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffbc72: jmp 0xffbac0 */
  SPILL(); f_ffbac0(); return;
}

void f_ffbc80(void) {
  LOAD_REGS();
L_ffbc80: /* ffbc80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffbc83: fld dword ptr [eax + 0x78] */
  { double v = F32((uint32_t)(eax + 0x78u)); FPUSH(v); }
/* ffbc86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffbc87: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* ffbc8a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbc8e: fld dword ptr [eax + 0x7c] */
  { double v = F32((uint32_t)(eax + 0x7cu)); FPUSH(v); }
/* ffbc91: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ffbc95: fsub dword ptr [eax + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x3cu)));
/* ffbc98: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbc9c: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* ffbc9f: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ffbca3: fadd dword ptr [eax + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x78u)));
/* ffbca6: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* ffbca9: fstp dword ptr [eax + 0x78] */
  WF32((uint32_t)(eax + 0x78u), ST0); FPOP();
/* ffbcac: fld dword ptr [eax + 0x7c] */
  { double v = F32((uint32_t)(eax + 0x7cu)); FPUSH(v); }
/* ffbcaf: fadd dword ptr [eax + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3cu)));
/* ffbcb2: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* ffbcb5: fstp dword ptr [eax + 0x7c] */
  WF32((uint32_t)(eax + 0x7cu), ST0); FPOP();
/* ffbcb8: fld dword ptr [eax + 0x70] */
  { double v = F32((uint32_t)(eax + 0x70u)); FPUSH(v); }
/* ffbcbb: fsub dword ptr [eax + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x30u)));
/* ffbcbe: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbcc2: fld dword ptr [eax + 0x74] */
  { double v = F32((uint32_t)(eax + 0x74u)); FPUSH(v); }
/* ffbcc5: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* ffbcc8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbccc: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* ffbccf: fadd dword ptr [eax + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x70u)));
/* ffbcd2: fstp dword ptr [eax + 0x70] */
  WF32((uint32_t)(eax + 0x70u), ST0); FPOP();
/* ffbcd5: fld dword ptr [eax + 0x74] */
  { double v = F32((uint32_t)(eax + 0x74u)); FPUSH(v); }
/* ffbcd8: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* ffbcdb: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* ffbcde: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbce2: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbce8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbcec: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbcf2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffbcf4: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* ffbcf7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbcfb: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbd01: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbd05: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbd0b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffbd0d: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* ffbd10: fld dword ptr [eax + 0x68] */
  { double v = F32((uint32_t)(eax + 0x68u)); FPUSH(v); }
/* ffbd13: fsub dword ptr [eax + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x28u)));
/* ffbd16: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbd1a: fld dword ptr [eax + 0x6c] */
  { double v = F32((uint32_t)(eax + 0x6cu)); FPUSH(v); }
/* ffbd1d: fsub dword ptr [eax + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x2cu)));
/* ffbd20: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbd24: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* ffbd27: fadd dword ptr [eax + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x68u)));
/* ffbd2a: fstp dword ptr [eax + 0x68] */
  WF32((uint32_t)(eax + 0x68u), ST0); FPOP();
/* ffbd2d: fld dword ptr [eax + 0x6c] */
  { double v = F32((uint32_t)(eax + 0x6cu)); FPUSH(v); }
/* ffbd30: fadd dword ptr [eax + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x2cu)));
/* ffbd33: fstp dword ptr [eax + 0x6c] */
  WF32((uint32_t)(eax + 0x6cu), ST0); FPOP();
/* ffbd36: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbd3a: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* ffbd3e: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbd44: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* ffbd47: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbd4b: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* ffbd4f: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbd55: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* ffbd58: fld dword ptr [eax + 0x60] */
  { double v = F32((uint32_t)(eax + 0x60u)); FPUSH(v); }
/* ffbd5b: fsub dword ptr [eax + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x20u)));
/* ffbd5e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbd62: fld dword ptr [eax + 0x64] */
  { double v = F32((uint32_t)(eax + 0x64u)); FPUSH(v); }
/* ffbd65: fsub dword ptr [eax + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x24u)));
/* ffbd68: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbd6c: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* ffbd6f: fadd dword ptr [eax + 0x60] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x60u)));
/* ffbd72: fstp dword ptr [eax + 0x60] */
  WF32((uint32_t)(eax + 0x60u), ST0); FPOP();
/* ffbd75: fld dword ptr [eax + 0x64] */
  { double v = F32((uint32_t)(eax + 0x64u)); FPUSH(v); }
/* ffbd78: fadd dword ptr [eax + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x24u)));
/* ffbd7b: fstp dword ptr [eax + 0x64] */
  WF32((uint32_t)(eax + 0x64u), ST0); FPOP();
/* ffbd7e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbd82: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbd88: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbd8c: lea esi, [eax + 0x40] */
  esi = (uint32_t)(eax + 0x40u);
/* ffbd8f: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbd95: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffbd97: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* ffbd9a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbd9e: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbda4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbda8: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbdae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffbdb0: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* ffbdb3: fld dword ptr [eax + 0x58] */
  { double v = F32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* ffbdb6: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* ffbdb9: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbdbd: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffbdc0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ffbdc4: fsub dword ptr [eax + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x5cu)));
/* ffbdc7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbdcb: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* ffbdce: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ffbdd2: fadd dword ptr [eax + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x58u)));
/* ffbdd5: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* ffbdd8: fstp dword ptr [eax + 0x58] */
  WF32((uint32_t)(eax + 0x58u), ST0); FPOP();
/* ffbddb: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffbdde: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* ffbde1: fadd dword ptr [eax + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x5cu)));
/* ffbde4: fstp dword ptr [eax + 0x5c] */
  WF32((uint32_t)(eax + 0x5cu), ST0); FPOP();
/* ffbde7: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* ffbdea: fsub dword ptr [eax + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x50u)));
/* ffbded: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbdf1: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* ffbdf4: fsub dword ptr [eax + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x54u)));
/* ffbdf7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbdfb: fld dword ptr [eax + 0x50] */
  { double v = F32((uint32_t)(eax + 0x50u)); FPUSH(v); }
/* ffbdfe: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* ffbe01: fstp dword ptr [eax + 0x50] */
  WF32((uint32_t)(eax + 0x50u), ST0); FPOP();
/* ffbe04: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* ffbe07: fadd dword ptr [eax + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x54u)));
/* ffbe0a: fstp dword ptr [eax + 0x54] */
  WF32((uint32_t)(eax + 0x54u), ST0); FPOP();
/* ffbe0d: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbe11: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbe17: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbe1b: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbe21: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffbe23: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* ffbe26: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbe2a: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbe30: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbe34: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbe3a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffbe3c: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* ffbe3f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffbe42: fsub dword ptr [eax + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x48u)));
/* ffbe45: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbe49: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffbe4c: fsub dword ptr [eax + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4cu)));
/* ffbe4f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbe53: fld dword ptr [eax + 0x48] */
  { double v = F32((uint32_t)(eax + 0x48u)); FPUSH(v); }
/* ffbe56: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* ffbe59: fstp dword ptr [eax + 0x48] */
  WF32((uint32_t)(eax + 0x48u), ST0); FPOP();
/* ffbe5c: fld dword ptr [eax + 0x4c] */
  { double v = F32((uint32_t)(eax + 0x4cu)); FPUSH(v); }
/* ffbe5f: fadd dword ptr [eax + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xcu)));
/* ffbe62: fstp dword ptr [eax + 0x4c] */
  WF32((uint32_t)(eax + 0x4cu), ST0); FPOP();
/* ffbe65: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbe69: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* ffbe6d: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbe73: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffbe76: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbe7a: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* ffbe7e: fmul dword ptr [0x100a230] */
  ST0 = ST0 * (F32((uint32_t)(0x100a230u)));
/* ffbe84: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ffbe87: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffbe89: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* ffbe8b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffbe8f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffbe92: fsub dword ptr [eax + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x44u)));
/* ffbe95: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbe99: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* ffbe9b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* ffbe9d: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* ffbe9f: fld dword ptr [eax + 0x44] */
  { double v = F32((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* ffbea2: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* ffbea5: fstp dword ptr [eax + 0x44] */
  WF32((uint32_t)(eax + 0x44u), ST0); FPOP();
/* ffbea8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbeac: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbeb2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbeb6: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbebc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffbebe: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ffbec0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbec4: fmul dword ptr [0x100a238] */
  ST0 = ST0 * (F32((uint32_t)(0x100a238u)));
/* ffbeca: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffbece: fmul dword ptr [0x100a234] */
  ST0 = ST0 * (F32((uint32_t)(0x100a234u)));
/* ffbed4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffbed6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffbed9: call 0xffbb70 */
  esp -= 4; W32(esp, 0xffbedeu); SPILL(); f_ffbb70(); if (g_unwind) return; RELOAD();
/* ffbede: mov eax, esi */
  eax = esi;
/* ffbee0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffbee1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffbee4: jmp 0xffbb70 */
  SPILL(); f_ffbb70(); return;
}

void f_ffbef0(void) {
  LOAD_REGS();
L_ffbef0: /* ffbef0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffbef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffbef4: mov esi, ecx */
  esi = ecx;
/* ffbef6: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* ffbef8: lea eax, [edi + esi*4 - 0x20] */
  eax = (uint32_t)(edi + esi*4 + 0xffffffe0u);
/* ffbefc: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffbefe: lea ecx, [eax + ecx*4 + 0x1c] */
  ecx = (uint32_t)(eax + ecx*4 + 0x1cu);
/* ffbf02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_ffbf03: /* ffbf03: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffbf06: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* ffbf09: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbf0d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffbf0f: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* ffbf12: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbf16: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffbf19: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* ffbf1c: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* ffbf1f: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffbf22: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* ffbf24: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffbf26: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbf2a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffbf2d: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbf31: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffbf33: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffbf35: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* ffbf38: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbf3c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffbf3e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbf42: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffbf45: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffbf47: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* ffbf4a: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ffbf4d: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* ffbf50: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbf54: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* ffbf57: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* ffbf5a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbf5e: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ffbf61: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* ffbf64: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffbf67: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* ffbf6a: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* ffbf6d: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ffbf70: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbf74: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* ffbf77: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbf7b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* ffbf7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffbf80: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* ffbf83: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbf87: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* ffbf8a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbf8e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* ffbf91: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffbf93: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* ffbf96: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* ffbf99: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* ffbf9c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbfa0: fld dword ptr [ecx - 0x10] */
  { double v = F32((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* ffbfa3: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* ffbfa6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffbfaa: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffbfad: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffbfb0: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ffbfb3: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffbfb6: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffbfb9: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffbfbc: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbfc0: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* ffbfc3: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbfc7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* ffbfca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffbfcc: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffbfcf: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffbfd3: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* ffbfd6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffbfda: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* ffbfdd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffbfdf: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ffbfe2: fld dword ptr [ecx - 0x1c] */
  { double v = F32((uint32_t)(ecx + 0xffffffe4u)); FPUSH(v); }
/* ffbfe5: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* ffbfe7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ffbfeb: fld dword ptr [ecx - 0x18] */
  { double v = F32((uint32_t)(ecx + 0xffffffe8u)); FPUSH(v); }
/* ffbfee: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffbff1: fsub dword ptr [eax + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x24u)));
/* ffbff4: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffbff7: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffbffa: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffbffc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffc000: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* ffc003: fadd dword ptr [eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x20u)));
/* ffc006: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ffc009: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* ffc00c: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* ffc00f: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ffc012: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffc016: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* ffc019: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffc01d: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* ffc020: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc022: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* ffc025: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* ffc029: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* ffc02c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ffc030: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* ffc033: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc035: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* ffc038: jae 0xffbf03 */
  if (!cf) goto L_ffbf03;
L_ffc03e: /* ffc03e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc041: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc050(void) {
  LOAD_REGS();
L_ffc050: /* ffc050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffc051: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc052: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ffc056: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc057: mov edi, ecx */
  edi = ecx;
/* ffc059: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ffc05b: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ffc05e: lea eax, [ebx + edi*4 - 0x20] */
  eax = (uint32_t)(ebx + edi*4 + 0xffffffe0u);
/* ffc062: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc064: lea ecx, [eax + ecx*4 + 0x1c] */
  ecx = (uint32_t)(eax + ecx*4 + 0x1cu);
/* ffc068: jmp 0xffc070 */
  goto L_ffc070;
L_ffc070: /* ffc070: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffc073: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* ffc076: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc07a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffc07c: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* ffc07f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc083: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffc086: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* ffc089: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* ffc08c: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffc08f: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* ffc091: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffc093: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc097: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc09a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc09e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc0a2: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* ffc0a5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc0a9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0ab: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc0af: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc0b2: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc0b4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc0b6: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* ffc0b9: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ffc0bc: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* ffc0bf: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc0c3: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* ffc0c6: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* ffc0c9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc0cd: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* ffc0d0: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* ffc0d3: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffc0d6: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* ffc0d9: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* ffc0dc: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ffc0df: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc0e3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc0e6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc0ea: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc0ee: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* ffc0f1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc0f5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0f7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc0fb: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc0fe: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc100: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc102: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* ffc105: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* ffc108: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* ffc10b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc10f: fld dword ptr [ecx - 0x10] */
  { double v = F32((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* ffc112: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* ffc115: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc119: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffc11c: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffc11f: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ffc122: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffc125: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffc128: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffc12b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc12f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc132: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc136: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc138: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc13a: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffc13d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc141: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc143: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc147: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc14a: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc14c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc14e: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ffc151: fld dword ptr [ecx - 0x1c] */
  { double v = F32((uint32_t)(ecx + 0xffffffe4u)); FPUSH(v); }
/* ffc154: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc157: fsub dword ptr [eax + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x20u)));
/* ffc15a: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc15d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc161: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffc164: fsub dword ptr [eax + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x24u)));
/* ffc167: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc16b: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* ffc16e: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* ffc171: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ffc174: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffc177: fadd dword ptr [eax + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x24u)));
/* ffc17a: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ffc17d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc181: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc184: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc188: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc18a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc18c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* ffc18f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc193: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc195: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc199: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc19c: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc19e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc1a0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc1a2: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* ffc1a5: jae 0xffc070 */
  if (!cf) goto L_ffc070;
L_ffc1ab: /* ffc1ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc1ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc1ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ffc1ae: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc06a(void) {
  LOAD_REGS();
L_ffc06a: /* ffc06a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffc070: /* ffc070: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffc073: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* ffc076: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc07a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffc07c: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* ffc07f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc083: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffc086: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* ffc089: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* ffc08c: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffc08f: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* ffc091: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffc093: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc097: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc09a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc09e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc0a2: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* ffc0a5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc0a9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0ab: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc0af: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc0b2: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc0b4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc0b6: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* ffc0b9: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ffc0bc: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* ffc0bf: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc0c3: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* ffc0c6: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* ffc0c9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc0cd: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* ffc0d0: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* ffc0d3: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffc0d6: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* ffc0d9: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* ffc0dc: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ffc0df: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc0e3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc0e6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc0ea: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc0ee: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* ffc0f1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc0f5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc0f7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc0fb: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc0fe: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc100: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc102: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* ffc105: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* ffc108: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* ffc10b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc10f: fld dword ptr [ecx - 0x10] */
  { double v = F32((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* ffc112: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* ffc115: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc119: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffc11c: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffc11f: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ffc122: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffc125: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffc128: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffc12b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc12f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc132: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc136: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc138: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc13a: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffc13d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc141: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc143: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc147: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc14a: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc14c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc14e: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ffc151: fld dword ptr [ecx - 0x1c] */
  { double v = F32((uint32_t)(ecx + 0xffffffe4u)); FPUSH(v); }
/* ffc154: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc157: fsub dword ptr [eax + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x20u)));
/* ffc15a: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc15d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffc161: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffc164: fsub dword ptr [eax + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x24u)));
/* ffc167: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc16b: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* ffc16e: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* ffc171: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* ffc174: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffc177: fadd dword ptr [eax + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x24u)));
/* ffc17a: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ffc17d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc181: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc184: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc188: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc18a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc18c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* ffc18f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc193: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ffc195: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffc199: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* ffc19c: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc19e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc1a0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc1a2: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* ffc1a5: jae 0xffc070 */
  if (!cf) goto L_ffc070;
L_ffc1ab: /* ffc1ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc1ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc1ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ffc1ae: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc1b0(void) {
  LOAD_REGS();
L_ffc1b0: /* ffc1b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffc1b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* ffc1b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffc1b7: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* ffc1ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc1bb: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ffc1bf: sub ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ffc1c2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffc1c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc1c5: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* ffc1c9: jle 0xffc1d6 */
  if ((zf || sf != of)) goto L_ffc1d6;
L_ffc1cb: /* ffc1cb: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ffc1cf: mov ecx, esi */
  ecx = esi;
/* ffc1d1: call 0xffbef0 */
  esp -= 4; W32(esp, 0xffc1d6u); SPILL(); f_ffbef0(); if (g_unwind) return; RELOAD();
L_ffc1d6: /* ffc1d6: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* ffc1d7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ffc1d9: mov ecx, 1 */
  ecx = 0x1u;
/* ffc1de: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffc1e2: jle 0xffc23c */
  if ((zf || sf != of)) goto L_ffc23c;
L_ffc1e4: /* ffc1e4: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ffc1e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffc1e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffc1f0: /* ffc1f0: mov ebp, 1 */
  ebp = 0x1u;
/* ffc1f5: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* ffc1f7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ffc1f9: jle 0xffc22b */
  if ((zf || sf != of)) goto L_ffc22b;
L_ffc1fb: /* ffc1fb: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* ffc1ff: mov edi, 4 */
  edi = 0x4u;
/* ffc204: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* ffc206: sar esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
  }
L_ffc208: /* ffc208: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ffc20c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc20d: mov ecx, esi */
  ecx = esi;
/* ffc20f: call 0xffc050 */
  esp -= 4; W32(esp, 0xffc214u); SPILL(); f_ffc050(); if (g_unwind) return; RELOAD();
/* ffc214: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* ffc21b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc21e: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* ffc220: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* ffc221: jne 0xffc208 */
  if (!zf) goto L_ffc208;
L_ffc223: /* ffc223: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* ffc227: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_ffc22b: /* ffc22b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ffc22f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffc230: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* ffc231: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ffc235: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ffc239: jne 0xffc1f0 */
  if (!zf) goto L_ffc1f0;
L_ffc23b: /* ffc23b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ffc23c: /* ffc23c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffc23e: jle 0xffc260 */
  if ((zf || sf != of)) goto L_ffc260;
L_ffc240: /* ffc240: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ffc244: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* ffc245: shr esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* ffc248: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffc249: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffc250: /* ffc250: mov eax, edi */
  eax = edi;
/* ffc252: call 0xffbc80 */
  esp -= 4; W32(esp, 0xffc257u); SPILL(); f_ffbc80(); if (g_unwind) return; RELOAD();
/* ffc257: add edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffc25d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ffc25e: jne 0xffc250 */
  if (!zf) goto L_ffc250;
L_ffc260: /* ffc260: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc261: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffc263: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc266: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc270(void) {
  LOAD_REGS();
L_ffc270: /* ffc270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc271: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ffc275: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffc277: je 0xffc2ab */
  if (zf) goto L_ffc2ab;
L_ffc279: /* ffc279: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ffc27c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffc27e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc27f: mov edi, dword ptr [0x100a040] */
  edi = R32((uint32_t)(0x100a040u));
/* ffc285: je 0xffc28d */
  if (zf) goto L_ffc28d;
L_ffc287: /* ffc287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffc288: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffc28au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffc28a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffc28d: /* ffc28d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ffc290: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffc292: je 0xffc29a */
  if (zf) goto L_ffc29a;
L_ffc294: /* ffc294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffc295: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffc297u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffc297: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffc29a: /* ffc29a: xor eax, eax */
  eax = 0;
/* ffc29c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ffc29e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ffc2a1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ffc2a4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ffc2a7: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* ffc2aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_ffc2ab: /* ffc2ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc2ac: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc2b0(void) {
  LOAD_REGS();
L_ffc2b0: /* ffc2b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffc2b2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffc2b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffc2b6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffc2b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc2b8: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* ffc2bb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* ffc2be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc2bf: mov edi, ecx */
  edi = ecx;
/* ffc2c1: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ffc2c3: lea ebp, [edx + edi*4] */
  ebp = (uint32_t)(edx + edi*4);
/* ffc2c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* ffc2c9: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* ffc2cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffc2d0: /* ffc2d0: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ffc2d2: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* ffc2d5: fld dword ptr [ebp + edi*4 + 4] */
  { double v = F32((uint32_t)(ebp + edi*4 + 0x4u)); FPUSH(v); }
/* ffc2d9: fsub dword ptr [ebp + ebx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ebx*4 + 0x4u)));
/* ffc2dd: lea edi, [ebp + edi*4] */
  edi = (uint32_t)(ebp + edi*4);
/* ffc2e1: lea ebx, [ebp + ebx*4] */
  ebx = (uint32_t)(ebp + ebx*4);
/* ffc2e5: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc2e8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc2ec: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* ffc2ee: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* ffc2f0: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ffc2f4: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ffc2f8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc2fa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc2fe: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc301: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc303: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ffc307: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ffc30b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc30e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc312: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc314: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc316: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ffc31a: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* ffc31d: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* ffc320: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffc326: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc32a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ffc32c: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* ffc32e: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffc334: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ffc338: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffc33c: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* ffc340: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* ffc342: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc346: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* ffc34a: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* ffc34d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffc351: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* ffc355: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* ffc358: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffc35c: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* ffc360: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffc362: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* ffc365: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* ffc368: fld dword ptr [ebp + edi*4 + 4] */
  { double v = F32((uint32_t)(ebp + edi*4 + 0x4u)); FPUSH(v); }
/* ffc36c: fsub dword ptr [ebp + ebx*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + ebx*4 + 0x4u)));
/* ffc370: lea edi, [ebp + edi*4] */
  edi = (uint32_t)(ebp + edi*4);
/* ffc374: lea ebx, [ebp + ebx*4] */
  ebx = (uint32_t)(ebp + ebx*4);
/* ffc378: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc37c: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* ffc37e: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* ffc380: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ffc384: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ffc388: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* ffc38b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc38f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* ffc392: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc394: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ffc398: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ffc39c: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* ffc39f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc3a3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* ffc3a6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc3a8: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ffc3ac: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* ffc3af: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* ffc3b2: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffc3b8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffc3bc: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ffc3be: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* ffc3c0: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffc3c6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc3c9: lea edi, [ecx - 0xc] */
  edi = (uint32_t)(ecx + 0xfffffff4u);
/* ffc3cc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ffc3d0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffc3d4: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc3d7: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* ffc3db: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffc3de: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc3e0: fstp dword ptr [edx - 8] */
  WF32((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* ffc3e3: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc3e7: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* ffc3eb: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffc3ee: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffc3f2: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* ffc3f6: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* ffc3f9: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffc3fd: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* ffc401: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ffc404: jb 0xffc2d0 */
  if (cf) goto L_ffc2d0;
L_ffc40a: /* ffc40a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc40b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc40c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffc40d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffc40e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc411: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc420(void) {
  LOAD_REGS();
L_ffc420: /* ffc420: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffc423: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffc424: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* ffc428: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ffc42a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffc42b: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ffc42f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc430: mov esi, eax */
  esi = eax;
/* ffc432: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffc435: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* ffc437: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* ffc43a: lea edx, [ebp + edx*4] */
  edx = (uint32_t)(ebp + edx*4);
/* ffc43e: lea ebp, [eax*4] */
  ebp = (uint32_t)(eax*4);
/* ffc445: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffc448: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc449: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ffc44d: lea ecx, [edi + esi*4 - 0x1c] */
  ecx = (uint32_t)(edi + esi*4 + 0xffffffe4u);
/* ffc451: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ffc455: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* ffc459: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc45b: jmp 0xffc460 */
  goto L_ffc460;
L_ffc460: /* ffc460: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffc463: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc466: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* ffc469: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc46c: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc46f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc471: fchs  */
  ST0 = -ST0;
/* ffc473: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc476: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ffc479: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc47b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* ffc47d: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc480: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* ffc483: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* ffc486: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ffc489: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc48b: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* ffc48e: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc491: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc494: fchs  */
  ST0 = -ST0;
/* ffc496: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* ffc499: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* ffc49c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc49e: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* ffc4a1: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc4a4: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* ffc4a7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ffc4aa: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc4ad: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc4af: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* ffc4b2: jae 0xffc460 */
  if (!cf) goto L_ffc460;
L_ffc4b4: /* ffc4b4: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffc4b7: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ffc4bb: lea ecx, [edi + esi*4 - 0x20] */
  ecx = (uint32_t)(edi + esi*4 + 0xffffffe0u);
/* ffc4bf: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_ffc4c1: /* ffc4c1: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* ffc4c4: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc4c7: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* ffc4ca: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc4cd: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffc4d0: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc4d3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc4d5: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc4d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc4da: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* ffc4dd: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* ffc4e0: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* ffc4e3: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffc4e6: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc4e9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc4eb: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* ffc4ee: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* ffc4f1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc4f3: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc4f6: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc4f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc4fb: fstp dword ptr [edx - 8] */
  WF32((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* ffc4fe: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc501: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc503: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffc506: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* ffc509: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc50b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* ffc50e: jae 0xffc4c1 */
  if (!cf) goto L_ffc4c1;
L_ffc510: /* ffc510: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* ffc514: lea eax, [ebp + esi*4] */
  eax = (uint32_t)(ebp + esi*4);
/* ffc518: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc519: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffc51d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffc51e: mov eax, ebx */
  eax = ebx;
/* ffc520: call 0xffc1b0 */
  esp -= 4; W32(esp, 0xffc525u); SPILL(); f_ffc1b0(); if (g_unwind) return; RELOAD();
/* ffc525: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc528: mov edx, ebp */
  edx = ebp;
/* ffc52a: mov eax, ebx */
  eax = ebx;
/* ffc52c: call 0xffc2b0 */
  esp -= 4; W32(esp, 0xffc531u); SPILL(); f_ffc2b0(); if (g_unwind) return; RELOAD();
/* ffc531: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffc534: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ffc538: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* ffc53f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc541: mov edi, edx */
  edi = edx;
/* ffc543: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
L_ffc546: /* ffc546: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffc549: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc54c: fmul dword ptr [ecx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff4u)));
/* ffc54f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc552: fld dword ptr [ecx - 0x28] */
  { double v = F32((uint32_t)(ecx + 0xffffffd8u)); FPUSH(v); }
/* ffc555: lea ebx, [ecx - 0xc] */
  ebx = (uint32_t)(ecx + 0xfffffff4u);
/* ffc558: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc55a: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffc55d: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc560: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc562: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc564: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* ffc567: fld dword ptr [ecx - 0x2c] */
  { double v = F32((uint32_t)(ecx + 0xffffffd4u)); FPUSH(v); }
/* ffc56a: fmul dword ptr [eax - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe0u)));
/* ffc56d: fld dword ptr [eax - 0x1c] */
  { double v = F32((uint32_t)(eax + 0xffffffe4u)); FPUSH(v); }
/* ffc570: fmul dword ptr [ecx - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffd8u)));
/* ffc573: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc575: fchs  */
  ST0 = -ST0;
/* ffc577: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* ffc57a: fld dword ptr [ecx - 0x24] */
  { double v = F32((uint32_t)(ecx + 0xffffffdcu)); FPUSH(v); }
/* ffc57d: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ffc580: fld dword ptr [ecx - 0x20] */
  { double v = F32((uint32_t)(ecx + 0xffffffe0u)); FPUSH(v); }
/* ffc583: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* ffc586: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc588: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* ffc58b: fld dword ptr [ecx - 0x20] */
  { double v = F32((uint32_t)(ecx + 0xffffffe0u)); FPUSH(v); }
/* ffc58e: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ffc591: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* ffc594: fmul dword ptr [ecx - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffdcu)));
/* ffc597: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc599: fchs  */
  ST0 = -ST0;
/* ffc59b: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* ffc59e: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc5a1: fmul dword ptr [ecx - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe4u)));
/* ffc5a4: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ffc5a7: fmul dword ptr [ecx - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe8u)));
/* ffc5aa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc5ac: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* ffc5af: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc5b2: fmul dword ptr [ecx - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe8u)));
/* ffc5b5: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ffc5b8: fmul dword ptr [ecx - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe4u)));
/* ffc5bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc5bd: fchs  */
  ST0 = -ST0;
/* ffc5bf: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* ffc5c2: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* ffc5c5: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffc5c8: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ffc5cb: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffc5ce: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc5d0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* ffc5d2: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ffc5d5: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffc5d8: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* ffc5db: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffc5de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc5e0: fchs  */
  ST0 = -ST0;
/* ffc5e2: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* ffc5e5: jb 0xffc546 */
  if (cf) goto L_ffc546;
L_ffc5eb: /* ffc5eb: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ffc5ef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ffc5f3: mov edx, 2 */
  edx = 0x2u;
/* ffc5f8: mov eax, edi */
  eax = edi;
/* ffc5fa: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc5fc: lea ecx, [ecx + ebp + 8] */
  ecx = (uint32_t)(ecx + ebp + 0x8u);
/* ffc600: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
L_ffc603: /* ffc603: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* ffc606: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc609: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* ffc60d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffc611: mov dword ptr [edx - 0xc], esi */
  W32((uint32_t)(edx + 0xfffffff4u), esi);
/* ffc614: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc617: fchs  */
  ST0 = -ST0;
/* ffc619: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ffc61c: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* ffc61f: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* ffc623: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffc627: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ffc629: fchs  */
  ST0 = -ST0;
/* ffc62b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc62e: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ffc631: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* ffc634: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* ffc638: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffc63c: mov dword ptr [edx - 4], esi */
  W32((uint32_t)(edx + 0xfffffffcu), esi);
/* ffc63f: fchs  */
  ST0 = -ST0;
/* ffc641: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffc644: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* ffc646: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* ffc64a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc64e: mov dword ptr [edx - 8], esi */
  W32((uint32_t)(edx + 0xfffffff8u), esi);
/* ffc651: fchs  */
  ST0 = -ST0;
/* ffc653: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* ffc656: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc658: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffc65b: jb 0xffc603 */
  if (cf) goto L_ffc603;
L_ffc65d: /* ffc65d: mov ecx, edi */
  ecx = edi;
/* ffc65f: mov eax, edi */
  eax = edi;
/* ffc661: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc662: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc663: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffc664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ffc665: /* ffc665: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffc668: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc66b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* ffc66d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffc670: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* ffc673: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffc676: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* ffc679: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffc67b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ffc67e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ffc682: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc685: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffc687: ja 0xffc665 */
  if ((!cf && !zf)) goto L_ffc665;
L_ffc689: /* ffc689: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc68c: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc45d(void) {
  LOAD_REGS();
L_ffc45d: /* ffc45d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffc460: /* ffc460: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffc463: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc466: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* ffc469: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc46c: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc46f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc471: fchs  */
  ST0 = -ST0;
/* ffc473: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc476: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ffc479: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc47b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* ffc47d: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc480: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* ffc483: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* ffc486: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ffc489: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc48b: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* ffc48e: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc491: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc494: fchs  */
  ST0 = -ST0;
/* ffc496: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* ffc499: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* ffc49c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc49e: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* ffc4a1: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc4a4: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* ffc4a7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ffc4aa: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc4ad: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc4af: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* ffc4b2: jae 0xffc460 */
  if (!cf) goto L_ffc460;
L_ffc4b4: /* ffc4b4: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffc4b7: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ffc4bb: lea ecx, [edi + esi*4 - 0x20] */
  ecx = (uint32_t)(edi + esi*4 + 0xffffffe0u);
/* ffc4bf: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_ffc4c1: /* ffc4c1: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* ffc4c4: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc4c7: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* ffc4ca: sub ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc4cd: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffc4d0: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc4d3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc4d5: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc4d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc4da: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* ffc4dd: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* ffc4e0: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* ffc4e3: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffc4e6: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* ffc4e9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc4eb: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* ffc4ee: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* ffc4f1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc4f3: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc4f6: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc4f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc4fb: fstp dword ptr [edx - 8] */
  WF32((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* ffc4fe: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* ffc501: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc503: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffc506: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* ffc509: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc50b: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* ffc50e: jae 0xffc4c1 */
  if (!cf) goto L_ffc4c1;
L_ffc510: /* ffc510: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* ffc514: lea eax, [ebp + esi*4] */
  eax = (uint32_t)(ebp + esi*4);
/* ffc518: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc519: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffc51d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffc51e: mov eax, ebx */
  eax = ebx;
/* ffc520: call 0xffc1b0 */
  esp -= 4; W32(esp, 0xffc525u); SPILL(); f_ffc1b0(); if (g_unwind) return; RELOAD();
/* ffc525: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc528: mov edx, ebp */
  edx = ebp;
/* ffc52a: mov eax, ebx */
  eax = ebx;
/* ffc52c: call 0xffc2b0 */
  esp -= 4; W32(esp, 0xffc531u); SPILL(); f_ffc2b0(); if (g_unwind) return; RELOAD();
/* ffc531: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffc534: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ffc538: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* ffc53f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc541: mov edi, edx */
  edi = edx;
/* ffc543: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
L_ffc546: /* ffc546: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffc549: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc54c: fmul dword ptr [ecx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff4u)));
/* ffc54f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc552: fld dword ptr [ecx - 0x28] */
  { double v = F32((uint32_t)(ecx + 0xffffffd8u)); FPUSH(v); }
/* ffc555: lea ebx, [ecx - 0xc] */
  ebx = (uint32_t)(ecx + 0xfffffff4u);
/* ffc558: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc55a: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffc55d: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc560: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc562: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc564: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* ffc567: fld dword ptr [ecx - 0x2c] */
  { double v = F32((uint32_t)(ecx + 0xffffffd4u)); FPUSH(v); }
/* ffc56a: fmul dword ptr [eax - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe0u)));
/* ffc56d: fld dword ptr [eax - 0x1c] */
  { double v = F32((uint32_t)(eax + 0xffffffe4u)); FPUSH(v); }
/* ffc570: fmul dword ptr [ecx - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffd8u)));
/* ffc573: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc575: fchs  */
  ST0 = -ST0;
/* ffc577: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* ffc57a: fld dword ptr [ecx - 0x24] */
  { double v = F32((uint32_t)(ecx + 0xffffffdcu)); FPUSH(v); }
/* ffc57d: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ffc580: fld dword ptr [ecx - 0x20] */
  { double v = F32((uint32_t)(ecx + 0xffffffe0u)); FPUSH(v); }
/* ffc583: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* ffc586: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc588: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* ffc58b: fld dword ptr [ecx - 0x20] */
  { double v = F32((uint32_t)(ecx + 0xffffffe0u)); FPUSH(v); }
/* ffc58e: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ffc591: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* ffc594: fmul dword ptr [ecx - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffdcu)));
/* ffc597: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc599: fchs  */
  ST0 = -ST0;
/* ffc59b: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* ffc59e: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc5a1: fmul dword ptr [ecx - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe4u)));
/* ffc5a4: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ffc5a7: fmul dword ptr [ecx - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe8u)));
/* ffc5aa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc5ac: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* ffc5af: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffc5b2: fmul dword ptr [ecx - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe8u)));
/* ffc5b5: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ffc5b8: fmul dword ptr [ecx - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffe4u)));
/* ffc5bb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc5bd: fchs  */
  ST0 = -ST0;
/* ffc5bf: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* ffc5c2: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* ffc5c5: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffc5c8: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ffc5cb: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffc5ce: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc5d0: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* ffc5d2: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ffc5d5: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffc5d8: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* ffc5db: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffc5de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc5e0: fchs  */
  ST0 = -ST0;
/* ffc5e2: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* ffc5e5: jb 0xffc546 */
  if (cf) goto L_ffc546;
L_ffc5eb: /* ffc5eb: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ffc5ef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ffc5f3: mov edx, 2 */
  edx = 0x2u;
/* ffc5f8: mov eax, edi */
  eax = edi;
/* ffc5fa: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc5fc: lea ecx, [ecx + ebp + 8] */
  ecx = (uint32_t)(ecx + ebp + 0x8u);
/* ffc600: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
L_ffc603: /* ffc603: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* ffc606: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc609: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* ffc60d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffc611: mov dword ptr [edx - 0xc], esi */
  W32((uint32_t)(edx + 0xfffffff4u), esi);
/* ffc614: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc617: fchs  */
  ST0 = -ST0;
/* ffc619: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ffc61c: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* ffc61f: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* ffc623: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffc627: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ffc629: fchs  */
  ST0 = -ST0;
/* ffc62b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc62e: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ffc631: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* ffc634: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* ffc638: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffc63c: mov dword ptr [edx - 4], esi */
  W32((uint32_t)(edx + 0xfffffffcu), esi);
/* ffc63f: fchs  */
  ST0 = -ST0;
/* ffc641: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffc644: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* ffc646: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* ffc64a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffc64e: mov dword ptr [edx - 8], esi */
  W32((uint32_t)(edx + 0xfffffff8u), esi);
/* ffc651: fchs  */
  ST0 = -ST0;
/* ffc653: lea esi, [ecx - 8] */
  esi = (uint32_t)(ecx + 0xfffffff8u);
/* ffc656: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ffc658: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffc65b: jb 0xffc603 */
  if (cf) goto L_ffc603;
L_ffc65d: /* ffc65d: mov ecx, edi */
  ecx = edi;
/* ffc65f: mov eax, edi */
  eax = edi;
/* ffc661: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc662: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc663: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffc664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ffc665: /* ffc665: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffc668: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc66b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* ffc66d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffc670: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* ffc673: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffc676: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* ffc679: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffc67b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ffc67e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ffc682: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc685: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffc687: ja 0xffc665 */
  if ((!cf && !zf)) goto L_ffc665;
L_ffc689: /* ffc689: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc68c: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc690(void) {
  LOAD_REGS();
L_ffc690: /* ffc690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffc691: mov ebp, esp */
  ebp = esp;
/* ffc693: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffc696: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffc697: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc698: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc699: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ffc69c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ffc69e: mov ecx, eax */
  ecx = eax;
/* ffc6a0: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ffc6a2: mov ebx, eax */
  ebx = eax;
/* ffc6a4: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* ffc6a7: mov ecx, eax */
  ecx = eax;
/* ffc6a9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffc6ac: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ffc6af: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc6b2: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ffc6b5: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffc6b8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ffc6bb: sar ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ffc6be: call 0x1009200 */
  esp -= 4; W32(esp, 0xffc6c3u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffc6c3: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffc6c6: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* ffc6cd: mov esi, esp */
  esi = esp;
/* ffc6cf: lea edx, [ecx + esi] */
  edx = (uint32_t)(ecx + esi);
/* ffc6d2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ffc6d5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffc6d8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc6da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffc6dd: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* ffc6e0: lea eax, [edx + 4] */
  eax = (uint32_t)(edx + 0x4u);
/* ffc6e3: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* ffc6e6: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ffc6e9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc6eb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ffc6ee: xor ecx, ecx */
  ecx = 0;
/* ffc6f0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffc6f2: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* ffc6f5: jle 0xffc754 */
  if ((zf || sf != of)) goto L_ffc754;
L_ffc6f7: /* ffc6f7: jmp 0xffc700 */
  goto L_ffc700;
L_ffc6f9: /* ffc6f9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffc6fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffc700: /* ffc700: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* ffc703: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc706: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* ffc709: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffc70c: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* ffc70e: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc711: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc714: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ffc717: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ffc71a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffc71d: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* ffc71f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffc722: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ffc725: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffc728: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc72b: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffc72e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc730: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc732: fstp dword ptr [edx + ecx*4 - 8] */
  WF32((uint32_t)(edx + ecx*4 + 0xfffffff8u), ST0); FPOP();
/* ffc736: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffc739: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc73b: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffc73e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc741: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc743: fstp dword ptr [edx + ecx*4 - 4] */
  WF32((uint32_t)(edx + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* ffc747: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffc74a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc74d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc74f: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* ffc752: jl 0xffc6f9 */
  if ((sf != of)) goto L_ffc6f9;
L_ffc754: /* ffc754: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffc757: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc75a: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* ffc75d: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffc760: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc762: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc764: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ffc767: jge 0xffc7bd */
  if ((sf == of)) goto L_ffc7bd;
L_ffc769: /* ffc769: mov ebx, dword ptr [ebp - 0xc] */
  ebx = R32((uint32_t)(ebp + 0xfffffff4u));
L_ffc76c: /* ffc76c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffc76f: fld dword ptr [edx - 8] */
  { double v = F32((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* ffc772: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffc775: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* ffc777: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc77a: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* ffc77d: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc780: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ffc783: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffc786: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ffc788: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffc78b: fsub dword ptr [ebx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xfffffff8u)));
/* ffc78e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc790: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ffc793: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffc796: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc799: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffc79c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc79e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc7a0: fstp dword ptr [edx + ecx*4 - 8] */
  WF32((uint32_t)(edx + ecx*4 + 0xfffffff8u), ST0); FPOP();
/* ffc7a4: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffc7a7: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc7a9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffc7ac: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc7af: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc7b1: fstp dword ptr [edx + ecx*4 - 4] */
  WF32((uint32_t)(edx + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* ffc7b5: cmp ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc7b8: jl 0xffc76c */
  if ((sf != of)) goto L_ffc76c;
L_ffc7ba: /* ffc7ba: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
L_ffc7bd: /* ffc7bd: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffc7c0: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* ffc7c3: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffc7c5: cmp ecx, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc7c8: jge 0xffc821 */
  if ((sf == of)) goto L_ffc821;
L_ffc7ca: /* ffc7ca: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffc7cd: jmp 0xffc7d2 */
  goto L_ffc7d2;
L_ffc7cf: /* ffc7cf: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_ffc7d2: /* ffc7d2: fld dword ptr [ebx - 8] */
  { double v = F32((uint32_t)(ebx + 0xfffffff8u)); FPUSH(v); }
/* ffc7d5: sub ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ffc7d8: fchs  */
  ST0 = -ST0;
/* ffc7da: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffc7dd: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* ffc7df: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* ffc7e2: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc7e5: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc7e8: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ffc7eb: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* ffc7ed: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffc7f0: fchs  */
  ST0 = -ST0;
/* ffc7f2: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffc7f4: fsub dword ptr [edx - 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xfffffff8u)));
/* ffc7f7: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ffc7fa: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffc7fd: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc800: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffc803: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc805: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc807: fstp dword ptr [ebx + ecx*4 - 8] */
  WF32((uint32_t)(ebx + ecx*4 + 0xfffffff8u), ST0); FPOP();
/* ffc80b: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffc80e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc810: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffc813: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ffc816: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc818: fstp dword ptr [ebx + ecx*4 - 4] */
  WF32((uint32_t)(ebx + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* ffc81c: cmp ecx, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc81f: jl 0xffc7cf */
  if ((sf != of)) goto L_ffc7cf;
L_ffc821: /* ffc821: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffc824: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffc827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffc828: lea eax, [ebx + esi] */
  eax = (uint32_t)(ebx + esi);
/* ffc82b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffc82c: mov eax, edi */
  eax = edi;
/* ffc82e: call 0xffc1b0 */
  esp -= 4; W32(esp, 0xffc833u); SPILL(); f_ffc1b0(); if (g_unwind) return; RELOAD();
/* ffc833: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc836: mov edx, esi */
  edx = esi;
/* ffc838: mov eax, edi */
  eax = edi;
/* ffc83a: call 0xffc2b0 */
  esp -= 4; W32(esp, 0xffc83fu); SPILL(); f_ffc2b0(); if (g_unwind) return; RELOAD();
/* ffc83f: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ffc842: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ffc845: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffc848: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc84a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc84c: xor ebx, ebx */
  ebx = 0;
/* ffc84e: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc851: jl 0xffc93c */
  if ((sf != of)) goto L_ffc93c;
L_ffc857: /* ffc857: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ffc85a: mov dword ptr [ebp + 0xc], 3 */
  W32((uint32_t)(ebp + 0xcu), 0x3u);
/* ffc861: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc864: jmp 0xffc869 */
  goto L_ffc869;
L_ffc866: /* ffc866: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
L_ffc869: /* ffc869: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffc86b: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffc86e: fmul dword ptr [esi - 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff8u)));
/* ffc871: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffc874: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffc877: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffc87a: fmul dword ptr [esi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xffffffecu)));
/* ffc87d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffc880: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffc883: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffc886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc888: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* ffc88b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* ffc88e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* ffc891: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc894: fstp dword ptr [edx - 0x18] */
  WF32((uint32_t)(edx + 0xffffffe8u), ST0); FPOP();
/* ffc897: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffc89a: fmul dword ptr [esi - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xffffffe0u)));
/* ffc89d: fld dword ptr [esi - 0x1c] */
  { double v = F32((uint32_t)(esi + 0xffffffe4u)); FPUSH(v); }
/* ffc8a0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ffc8a2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc8a4: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc8a7: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* ffc8aa: fld dword ptr [esi - 0x14] */
  { double v = F32((uint32_t)(esi + 0xffffffecu)); FPUSH(v); }
/* ffc8ad: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* ffc8b0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffc8b3: fmul dword ptr [esi - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xffffffe8u)));
/* ffc8b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc8b8: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc8bb: fstp dword ptr [edx - 0x14] */
  WF32((uint32_t)(edx + 0xffffffecu), ST0); FPOP();
/* ffc8be: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffc8c1: fmul dword ptr [esi - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xffffffe8u)));
/* ffc8c4: fld dword ptr [esi - 0x14] */
  { double v = F32((uint32_t)(esi + 0xffffffecu)); FPUSH(v); }
/* ffc8c7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* ffc8ca: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc8cc: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc8cf: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ffc8d2: fld dword ptr [esi - 0xc] */
  { double v = F32((uint32_t)(esi + 0xfffffff4u)); FPUSH(v); }
/* ffc8d5: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* ffc8d8: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* ffc8db: fmul dword ptr [esi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff0u)));
/* ffc8de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc8e0: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc8e3: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* ffc8e6: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* ffc8e9: fmul dword ptr [esi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff0u)));
/* ffc8ec: fld dword ptr [esi - 0xc] */
  { double v = F32((uint32_t)(esi + 0xfffffff4u)); FPUSH(v); }
/* ffc8ef: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* ffc8f2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc8f4: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc8f7: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffc8fa: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* ffc8fd: fmul dword ptr [esi - 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff8u)));
/* ffc900: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* ffc903: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* ffc906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc908: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc90b: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* ffc90e: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* ffc911: fmul dword ptr [esi - 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff8u)));
/* ffc914: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* ffc917: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* ffc91a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc91c: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc91f: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffc922: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffc925: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffc928: add ecx, -0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffc92b: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc92e: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* ffc931: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc933: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ffc936: jl 0xffc866 */
  if ((sf != of)) goto L_ffc866;
L_ffc93c: /* ffc93c: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc93e: jge 0xffc97a */
  if ((sf == of)) goto L_ffc97a;
L_ffc940: /* ffc940: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffc942: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ffc945: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* ffc947: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffc94a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffc94d: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffc950: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* ffc953: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffc956: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffc957: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffc959: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc95c: fstp dword ptr [edx + ebx*4 - 4] */
  WF32((uint32_t)(edx + ebx*4 + 0xfffffffcu), ST0); FPOP();
/* ffc960: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* ffc963: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffc966: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffc968: fmul dword ptr [esi - 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffff8u)));
/* ffc96b: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* ffc96e: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ffc971: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ffc973: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* ffc976: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffc978: jl 0xffc940 */
  if ((sf != of)) goto L_ffc940;
L_ffc97a: /* ffc97a: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* ffc97d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc97e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc97f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffc980: mov esp, ebp */
  esp = ebp;
/* ffc982: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffc983: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc990(void) {
  LOAD_REGS();
L_ffc990: /* ffc990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffc991: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc992: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ffc996: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
/* ffc999: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* ffc99b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffc99d: add esi, 0xe28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffc9a3: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xffc9a9u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ffc9a9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* ffc9ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffc9af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc9b0: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* ffc9b3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* ffc9b6: mov dword ptr [eax], 0xc61c3c00 */
  W32((uint32_t)(eax), 0xc61c3c00u);
/* ffc9bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffc9bd: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc9c0(void) {
  LOAD_REGS();
L_ffc9c0: /* ffc9c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ffc9c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffc9c6: je 0xffc9de */
  if (zf) goto L_ffc9de;
L_ffc9c8: /* ffc9c8: xor ecx, ecx */
  ecx = 0;
/* ffc9ca: mov edx, eax */
  edx = eax;
/* ffc9cc: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* ffc9ce: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* ffc9d1: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* ffc9d4: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* ffc9d8: jmp dword ptr [0x100a040] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_ffc9de: /* ffc9de: ret  */
  esp += 4; SPILL(); return;
}

void f_ffc9e0(void) {
  LOAD_REGS();
L_ffc9e0: /* ffc9e0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ffc9e4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffc9e6: je 0xffc9ff */
  if (zf) goto L_ffc9ff;
L_ffc9e8: /* ffc9e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffc9e9: mov ecx, 0x2e9 */
  ecx = 0x2e9u;
/* ffc9ee: xor eax, eax */
  eax = 0;
/* ffc9f0: mov edi, edx */
  edi = edx;
/* ffc9f2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffc9f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffc9f5: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ffc9f9: jmp dword ptr [0x100a040] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_ffc9ff: /* ffc9ff: ret  */
  esp += 4; SPILL(); return;
}

void f_ffca00(void) {
  LOAD_REGS();
L_ffca00: /* ffca00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffca01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffca02: push 0xba4 */
  { uint32_t v = 0xba4u; esp -= 4; W32(esp, v); }
/* ffca07: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xffca0du); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ffca0d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ffca11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffca14: mov ecx, 0x2e9 */
  ecx = 0x2e9u;
/* ffca19: mov edi, eax */
  edi = eax;
/* ffca1b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffca1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffca1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffca1f: ret  */
  esp += 4; SPILL(); return;
}

void f_ffca20(void) {
  LOAD_REGS();
L_ffca20: /* ffca20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffca21: mov ebp, esp */
  ebp = esp;
/* ffca23: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ffca26: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffca29: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ffca2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffca2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffca2e: xor esi, esi */
  esi = 0;
/* ffca30: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffca34: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* ffca3c: mov edi, eax */
  edi = eax;
/* ffca3e: mov dword ptr [esp + 0x14], 0x1a */
  W32((uint32_t)(esp + 0x14u), 0x1au);
/* ffca46: jmp 0xffca50 */
  goto L_ffca50;
L_ffca50: /* ffca50: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffca54: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* ffca59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffca5b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffca5e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ffca62: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffca66: fmul dword ptr [0x100a0e0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0e0u)));
/* ffca6c: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ffca70: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffca74: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffca77: call 0x1009180 */
  esp -= 4; W32(esp, 0xffca7cu); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* ffca7c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffca7e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffca81: push 0x40080000 */
  { uint32_t v = 0x40080000u; esp -= 4; W32(esp, v); }
/* ffca86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffca88: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* ffca8c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffca8f: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ffca93: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffca97: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffca9a: call 0x1009180 */
  esp -= 4; W32(esp, 0xffca9fu); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* ffca9f: fmul qword ptr [0x100a0d8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0d8u)));
/* ffcaa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcaa8: fadd qword ptr [esp + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x20u)));
/* ffcaac: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffcab0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcab4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcab7: push 0x3ff75c29 */
  { uint32_t v = 0x3ff75c29u; esp -= 4; W32(esp, v); }
/* ffcabc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffcabe: call 0x1009180 */
  esp -= 4; W32(esp, 0xffcac3u); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* ffcac3: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* ffcac7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcaca: fsub qword ptr [0x100a0d0] */
  ST0 = ST0 - (F64((uint32_t)(0x100a0d0u)));
/* ffcad0: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* ffcad4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffcad6: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* ffcad9: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffcadf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcae2: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xffcae8u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ffcae8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcaeb: call 0x1009188 */
  esp -= 4; W32(esp, 0xffcaf0u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffcaf0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffcaf2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ffcaf4: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffcaf8: jge 0xffcb3d */
  if ((sf == of)) goto L_ffcb3d;
L_ffcafa: /* ffcafa: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ffcafd: mov edx, eax */
  edx = eax;
/* ffcaff: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* ffcb03: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffcb05: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* ffcb09: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffcb0d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffcb11: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* ffcb15: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffcb19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffcb20: /* ffcb20: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffcb23: jge 0xffcb3d */
  if ((sf == of)) goto L_ffcb3d;
L_ffcb25: /* ffcb25: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ffcb29: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffcb2d: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* ffcb31: mov dword ptr [ebx + esi*4], ecx */
  W32((uint32_t)(ebx + esi*4), ecx);
/* ffcb34: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffcb35: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffcb37: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* ffcb3b: jl 0xffcb20 */
  if ((sf != of)) goto L_ffcb20;
L_ffcb3d: /* ffcb3d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ffcb41: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ffcb45: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ffcb46: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffcb49: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffcb4a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ffcb4e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ffcb52: jne 0xffca50 */
  if (!zf) goto L_ffca50;
L_ffcb58: /* ffcb58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffcb59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffcb5a: mov esp, ebp */
  esp = ebp;
/* ffcb5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffcb5d: ret  */
  esp += 4; SPILL(); return;
}

void f_ffca48(void) {
  LOAD_REGS();
L_ffca48: /* ffca48: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ffca4f: nop  */
L_ffca50: /* ffca50: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffca54: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* ffca59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffca5b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffca5e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ffca62: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffca66: fmul dword ptr [0x100a0e0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0e0u)));
/* ffca6c: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ffca70: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffca74: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffca77: call 0x1009180 */
  esp -= 4; W32(esp, 0xffca7cu); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* ffca7c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffca7e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffca81: push 0x40080000 */
  { uint32_t v = 0x40080000u; esp -= 4; W32(esp, v); }
/* ffca86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffca88: fsubr qword ptr [esp + 0x20] */
  ST0 = (F64((uint32_t)(esp + 0x20u))) - ST0;
/* ffca8c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffca8f: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ffca93: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffca97: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffca9a: call 0x1009180 */
  esp -= 4; W32(esp, 0xffca9fu); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* ffca9f: fmul qword ptr [0x100a0d8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0d8u)));
/* ffcaa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcaa8: fadd qword ptr [esp + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x20u)));
/* ffcaac: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffcab0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcab4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcab7: push 0x3ff75c29 */
  { uint32_t v = 0x3ff75c29u; esp -= 4; W32(esp, v); }
/* ffcabc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffcabe: call 0x1009180 */
  esp -= 4; W32(esp, 0xffcac3u); SPILL(); f_1009180(); if (g_unwind) return; RELOAD();
/* ffcac3: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* ffcac7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcaca: fsub qword ptr [0x100a0d0] */
  ST0 = ST0 - (F64((uint32_t)(0x100a0d0u)));
/* ffcad0: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* ffcad4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffcad6: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* ffcad9: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffcadf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcae2: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xffcae8u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ffcae8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcaeb: call 0x1009188 */
  esp -= 4; W32(esp, 0xffcaf0u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffcaf0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffcaf2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ffcaf4: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffcaf8: jge 0xffcb3d */
  if ((sf == of)) goto L_ffcb3d;
L_ffcafa: /* ffcafa: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ffcafd: mov edx, eax */
  edx = eax;
/* ffcaff: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* ffcb03: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffcb05: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* ffcb09: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffcb0d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffcb11: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* ffcb15: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ffcb19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffcb20: /* ffcb20: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffcb23: jge 0xffcb3d */
  if ((sf == of)) goto L_ffcb3d;
L_ffcb25: /* ffcb25: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ffcb29: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ffcb2d: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* ffcb31: mov dword ptr [ebx + esi*4], ecx */
  W32((uint32_t)(ebx + esi*4), ecx);
/* ffcb34: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffcb35: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffcb37: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* ffcb3b: jl 0xffcb20 */
  if ((sf != of)) goto L_ffcb20;
L_ffcb3d: /* ffcb3d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ffcb41: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ffcb45: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ffcb46: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffcb49: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffcb4a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ffcb4e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ffcb52: jne 0xffca50 */
  if (!zf) goto L_ffca50;
L_ffcb58: /* ffcb58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffcb59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffcb5a: mov esp, ebp */
  esp = ebp;
/* ffcb5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffcb5d: ret  */
  esp += 4; SPILL(); return;
}

void f_ffcb60(void) {
  LOAD_REGS();
L_ffcb60: /* ffcb60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcb61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcb62: mov esi, ecx */
  esi = ecx;
/* ffcb64: mov edi, eax */
  edi = eax;
/* ffcb66: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* ffcb69: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffcb6b: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* ffcb6e: mov esi, 7 */
  esi = 0x7u;
L_ffcb73: /* ffcb73: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* ffcb76: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* ffcb79: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcb7b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcb7e: jp 0xffcb86 */
  if (pf) goto L_ffcb86;
L_ffcb80: /* ffcb80: mov eax, dword ptr [edx - 0xc] */
  eax = R32((uint32_t)(edx + 0xfffffff4u));
/* ffcb83: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
L_ffcb86: /* ffcb86: fld dword ptr [edi + ecx] */
  { double v = F32((uint32_t)(edi + ecx)); FPUSH(v); }
/* ffcb89: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ffcb8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcb8d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcb90: jp 0xffcb97 */
  if (pf) goto L_ffcb97;
L_ffcb92: /* ffcb92: mov eax, dword ptr [edi + ecx] */
  eax = R32((uint32_t)(edi + ecx));
/* ffcb95: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_ffcb97: /* ffcb97: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* ffcb9a: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* ffcb9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcb9f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcba2: jp 0xffcbaa */
  if (pf) goto L_ffcbaa;
L_ffcba4: /* ffcba4: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* ffcba7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_ffcbaa: /* ffcbaa: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ffcbac: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* ffcbaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcbb1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcbb4: jp 0xffcbbb */
  if (pf) goto L_ffcbbb;
L_ffcbb6: /* ffcbb6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffcbb8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_ffcbbb: /* ffcbbb: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* ffcbbe: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* ffcbc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcbc3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcbc6: jp 0xffcbce */
  if (pf) goto L_ffcbce;
L_ffcbc8: /* ffcbc8: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffcbcb: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_ffcbce: /* ffcbce: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ffcbd1: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* ffcbd4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcbd6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcbd9: jp 0xffcbe1 */
  if (pf) goto L_ffcbe1;
L_ffcbdb: /* ffcbdb: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ffcbde: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_ffcbe1: /* ffcbe1: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* ffcbe4: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* ffcbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcbe9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcbec: jp 0xffcbf4 */
  if (pf) goto L_ffcbf4;
L_ffcbee: /* ffcbee: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* ffcbf1: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
L_ffcbf4: /* ffcbf4: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* ffcbf7: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* ffcbfa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcbfc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffcbff: jp 0xffcc07 */
  if (pf) goto L_ffcc07;
L_ffcc01: /* ffcc01: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* ffcc04: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
L_ffcc07: /* ffcc07: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffcc0a: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffcc0d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ffcc0e: jne 0xffcb73 */
  if (!zf) goto L_ffcb73;
L_ffcc14: /* ffcc14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffcc15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffcc16: ret  */
  esp += 4; SPILL(); return;
}

void f_ffcc20(void) {
  LOAD_REGS();
L_ffcc20: /* ffcc20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcc21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcc22: mov esi, ecx */
  esi = ecx;
/* ffcc24: mov edi, eax */
  edi = eax;
/* ffcc26: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* ffcc29: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffcc2b: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* ffcc2e: mov esi, 7 */
  esi = 0x7u;
L_ffcc33: /* ffcc33: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* ffcc36: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* ffcc39: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcc3b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffcc3e: jne 0xffcc46 */
  if (!zf) goto L_ffcc46;
L_ffcc40: /* ffcc40: mov eax, dword ptr [edx - 0xc] */
  eax = R32((uint32_t)(edx + 0xfffffff4u));
/* ffcc43: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
L_ffcc46: /* ffcc46: fld dword ptr [edi + ecx] */
  { double v = F32((uint32_t)(edi + ecx)); FPUSH(v); }
/* ffcc49: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ffcc4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcc4d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffcc50: jne 0xffcc57 */
  if (!zf) goto L_ffcc57;
L_ffcc52: /* ffcc52: mov eax, dword ptr [edi + ecx] */
  eax = R32((uint32_t)(edi + ecx));
/* ffcc55: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_ffcc57: /* ffcc57: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* ffcc5a: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* ffcc5d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcc5f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffcc62: jne 0xffcc6a */
  if (!zf) goto L_ffcc6a;
L_ffcc64: /* ffcc64: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* ffcc67: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_ffcc6a: /* ffcc6a: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ffcc6c: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* ffcc6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcc71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffcc74: jne 0xffcc7b */
  if (!zf) goto L_ffcc7b;
L_ffcc76: /* ffcc76: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffcc78: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_ffcc7b: /* ffcc7b: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* ffcc7e: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* ffcc81: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcc83: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffcc86: jne 0xffcc8e */
  if (!zf) goto L_ffcc8e;
L_ffcc88: /* ffcc88: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffcc8b: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_ffcc8e: /* ffcc8e: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ffcc91: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* ffcc94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcc96: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffcc99: jne 0xffcca1 */
  if (!zf) goto L_ffcca1;
L_ffcc9b: /* ffcc9b: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ffcc9e: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_ffcca1: /* ffcca1: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* ffcca4: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* ffcca7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffcca9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffccac: jne 0xffccb4 */
  if (!zf) goto L_ffccb4;
L_ffccae: /* ffccae: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* ffccb1: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
L_ffccb4: /* ffccb4: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* ffccb7: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* ffccba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffccbc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffccbf: jne 0xffccc7 */
  if (!zf) goto L_ffccc7;
L_ffccc1: /* ffccc1: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* ffccc4: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
L_ffccc7: /* ffccc7: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffccca: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffcccd: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ffccce: jne 0xffcc33 */
  if (!zf) goto L_ffcc33;
L_ffccd4: /* ffccd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffccd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffccd6: ret  */
  esp += 4; SPILL(); return;
}

void f_ffcce0(void) {
  LOAD_REGS();
L_ffcce0: /* ffcce0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffcce1: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ffcce7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffcce8: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* ffccec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffcced: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ffccf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffccf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffccf3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffccf7: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ffccfb: mov ebx, eax */
  ebx = eax;
/* ffccfd: mov esi, ebp */
  esi = ebp;
/* ffccff: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* ffcd02: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* ffcd05: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ffcd07: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffcd09: mov ebx, ebp */
  ebx = ebp;
/* ffcd0b: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* ffcd0e: sub ebx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ffcd12: mov ebp, 7 */
  ebp = 0x7u;
/* ffcd17: jmp 0xffcd20 */
  goto L_ffcd20;
L_ffcd20: /* ffcd20: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd24: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffcd27: fmul dword ptr [eax - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffdcu)));
/* ffcd2a: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffcd2d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd31: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffcd34: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* ffcd35: fmul dword ptr [edx - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffd0u)));
/* ffcd38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd3a: fstp dword ptr [ecx - 0x28] */
  WF32((uint32_t)(ecx + 0xffffffd8u), ST0); FPOP();
/* ffcd3d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd41: fmul dword ptr [eax + esi - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi + 0xffffffe0u)));
/* ffcd45: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd49: fmul dword ptr [eax - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe0u)));
/* ffcd4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd4e: fstp dword ptr [eax + edi - 0x20] */
  WF32((uint32_t)(eax + edi + 0xffffffe0u), ST0); FPOP();
/* ffcd52: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd56: fmul dword ptr [ecx + ebx - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + ebx + 0xffffffe0u)));
/* ffcd5a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd5e: fmul dword ptr [eax - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe4u)));
/* ffcd61: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd63: fstp dword ptr [ecx - 0x20] */
  WF32((uint32_t)(ecx + 0xffffffe0u), ST0); FPOP();
/* ffcd66: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd6a: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* ffcd6d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd71: fmul dword ptr [edx - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffdcu)));
/* ffcd74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd76: fstp dword ptr [ecx - 0x1c] */
  WF32((uint32_t)(ecx + 0xffffffe4u), ST0); FPOP();
/* ffcd79: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd7d: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ffcd80: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd84: fmul dword ptr [edx - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffe0u)));
/* ffcd87: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd89: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* ffcd8c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd90: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* ffcd93: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd97: fmul dword ptr [edx - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffe4u)));
/* ffcd9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd9c: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ffcd9f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcda3: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* ffcda6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcdaa: fmul dword ptr [edx - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffe8u)));
/* ffcdad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcdaf: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffcdb2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcdb6: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ffcdb9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcdbd: fmul dword ptr [edx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffecu)));
/* ffcdc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcdc2: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffcdc5: jne 0xffcd20 */
  if (!zf) goto L_ffcd20;
L_ffcdcb: /* ffcdcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffcdcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffcdcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffcdce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffcdcf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ffcdd0: ret  */
  esp += 4; SPILL(); return;
}

void f_ffcd19(void) {
  LOAD_REGS();
L_ffcd19: /* ffcd19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffcd20: /* ffcd20: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd24: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffcd27: fmul dword ptr [eax - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffdcu)));
/* ffcd2a: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffcd2d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd31: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffcd34: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* ffcd35: fmul dword ptr [edx - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffd0u)));
/* ffcd38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd3a: fstp dword ptr [ecx - 0x28] */
  WF32((uint32_t)(ecx + 0xffffffd8u), ST0); FPOP();
/* ffcd3d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd41: fmul dword ptr [eax + esi - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + esi + 0xffffffe0u)));
/* ffcd45: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd49: fmul dword ptr [eax - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe0u)));
/* ffcd4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd4e: fstp dword ptr [eax + edi - 0x20] */
  WF32((uint32_t)(eax + edi + 0xffffffe0u), ST0); FPOP();
/* ffcd52: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd56: fmul dword ptr [ecx + ebx - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + ebx + 0xffffffe0u)));
/* ffcd5a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd5e: fmul dword ptr [eax - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe4u)));
/* ffcd61: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd63: fstp dword ptr [ecx - 0x20] */
  WF32((uint32_t)(ecx + 0xffffffe0u), ST0); FPOP();
/* ffcd66: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd6a: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* ffcd6d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd71: fmul dword ptr [edx - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffdcu)));
/* ffcd74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd76: fstp dword ptr [ecx - 0x1c] */
  WF32((uint32_t)(ecx + 0xffffffe4u), ST0); FPOP();
/* ffcd79: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd7d: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ffcd80: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd84: fmul dword ptr [edx - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffe0u)));
/* ffcd87: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd89: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* ffcd8c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcd90: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* ffcd93: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcd97: fmul dword ptr [edx - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffe4u)));
/* ffcd9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcd9c: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ffcd9f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcda3: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* ffcda6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcdaa: fmul dword ptr [edx - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffe8u)));
/* ffcdad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcdaf: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ffcdb2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffcdb6: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ffcdb9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcdbd: fmul dword ptr [edx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xffffffecu)));
/* ffcdc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcdc2: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ffcdc5: jne 0xffcd20 */
  if (!zf) goto L_ffcd20;
L_ffcdcb: /* ffcdcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffcdcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffcdcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffcdce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffcdcf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ffcdd0: ret  */
  esp += 4; SPILL(); return;
}

void f_ffcde0(void) {
  LOAD_REGS();
L_ffcde0: /* ffcde0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffcde1: mov ebp, esp */
  ebp = esp;
/* ffcde3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ffcde6: sub esp, 0xaac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xaacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffcdec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffcdef: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* ffcdf2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffcdf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcdf4: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* ffcdf7: fstp qword ptr [esp + 0x2c] */
  WF64((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ffcdfb: fld qword ptr [esp + 0x2c] */
  { double v = F64((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffcdff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffce00: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* ffce02: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* ffce08: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffce0b: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffce0e: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffce13: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* ffce17: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffce19: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* ffce1c: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* ffce1f: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffce22: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffce25: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffce2a: mov ebx, 0xfffffff1 */
  ebx = 0xfffffff1u;
/* ffce2f: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* ffce33: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffce35: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* ffce39: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ffce3d: mov dword ptr [esp + 0x28], 0x38 */
  W32((uint32_t)(esp + 0x28u), 0x38u);
L_ffce45: /* ffce45: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
/* ffce48: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffce4c: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffce50: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffce54: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffce58: fmul qword ptr [0x100a250] */
  ST0 = ST0 * (F64((uint32_t)(0x100a250u)));
/* ffce5e: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* ffce62: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* ffce66: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffce6a: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffce6e: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffce72: fmul qword ptr [0x100a250] */
  ST0 = ST0 * (F64((uint32_t)(0x100a250u)));
/* ffce78: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* ffce7c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffce80: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffce84: fadd dword ptr [0x100a248] */
  ST0 = ST0 + (F32((uint32_t)(0x100a248u)));
/* ffce8a: fmul dword ptr [0x100a244] */
  ST0 = ST0 * (F32((uint32_t)(0x100a244u)));
/* ffce90: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ffce94: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ffce98: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ffce9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffce9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffce9e: call 0x1009250 */
  esp -= 4; W32(esp, 0xffcea3u); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffcea3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcea4: fstp qword ptr [esp + 0x24] */
  WF64((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffcea8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcea9: call 0x1009250 */
  esp -= 4; W32(esp, 0xffceaeu); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffceae: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* ffceb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffceb5: fmul qword ptr [0x100a0f8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0f8u)));
/* ffcebb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcebe: call 0x1009178 */
  esp -= 4; W32(esp, 0xffcec3u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffcec3: fmul qword ptr [0x100a0b8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0b8u)));
/* ffcec9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffceca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcecb: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ffcecf: call 0x1009250 */
  esp -= 4; W32(esp, 0xffced4u); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffced4: fmul qword ptr [0x100a0f0] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0f0u)));
/* ffceda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcedd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcee0: call 0x1009178 */
  esp -= 4; W32(esp, 0xffcee5u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffcee5: fmul qword ptr [0x100a0a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0a8u)));
/* ffceeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffceec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffceed: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* ffcef1: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ffcef5: call 0x1009250 */
  esp -= 4; W32(esp, 0xffcefau); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffcefa: fmul qword ptr [0x100a0e8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0e8u)));
/* ffcf00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcf03: fadd qword ptr [esp + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x20u)));
/* ffcf07: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ffcf0b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ffcf0f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcf12: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xffcf18u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ffcf18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcf1b: call 0x1009188 */
  esp -= 4; W32(esp, 0xffcf20u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffcf20: cmp eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffcf23: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffcf27: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffcf2b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ffcf2f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffcf33: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* ffcf37: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* ffcf3b: jge 0xffcf61 */
  if ((sf == of)) goto L_ffcf61;
L_ffcf3d: /* ffcf3d: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ffcf43: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* ffcf47: fmul dword ptr [eax*4 + 0x100b480] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0x100b480u)));
/* ffcf4e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffcf52: fmul dword ptr [eax*4 + 0x100b484] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0x100b484u)));
/* ffcf59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffcf5b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ffcf5f: jmp 0xffcf6b */
  goto L_ffcf6b;
L_ffcf61: /* ffcf61: mov edx, dword ptr [0x100b4e4] */
  edx = R32((uint32_t)(0x100b4e4u));
/* ffcf67: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_ffcf6b: /* ffcf6b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffcf6f: fadd dword ptr [0x100a248] */
  ST0 = ST0 + (F32((uint32_t)(0x100a248u)));
/* ffcf75: fmul dword ptr [0x100a244] */
  ST0 = ST0 * (F32((uint32_t)(0x100a244u)));
/* ffcf7b: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffcf7f: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ffcf83: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ffcf87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcf88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcf89: call 0x1009250 */
  esp -= 4; W32(esp, 0xffcf8eu); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffcf8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcf8f: fstp qword ptr [esp + 0x1c] */
  WF64((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ffcf93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcf94: call 0x1009250 */
  esp -= 4; W32(esp, 0xffcf99u); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffcf99: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* ffcf9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcfa0: fmul qword ptr [0x100a0f8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0f8u)));
/* ffcfa6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcfa9: call 0x1009178 */
  esp -= 4; W32(esp, 0xffcfaeu); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffcfae: fmul qword ptr [0x100a0b8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0b8u)));
/* ffcfb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcfb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcfb6: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffcfba: call 0x1009250 */
  esp -= 4; W32(esp, 0xffcfbfu); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffcfbf: fmul qword ptr [0x100a0f0] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0f0u)));
/* ffcfc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcfc8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcfcb: call 0x1009178 */
  esp -= 4; W32(esp, 0xffcfd0u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffcfd0: fmul qword ptr [0x100a0a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0a8u)));
/* ffcfd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffcfd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffcfd8: fadd qword ptr [esp + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x20u)));
/* ffcfdc: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffcfe0: call 0x1009250 */
  esp -= 4; W32(esp, 0xffcfe5u); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ffcfe5: fmul qword ptr [0x100a0e8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0e8u)));
/* ffcfeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffcfee: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* ffcff2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ffcff6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ffcffa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffcffd: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xffd003u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ffd003: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd006: call 0x1009188 */
  esp -= 4; W32(esp, 0xffd00bu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffd00b: cmp eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd00e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffd012: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffd016: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffd01a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd01e: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* ffd022: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* ffd026: jge 0xffd04c */
  if ((sf == of)) goto L_ffd04c;
L_ffd028: /* ffd028: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ffd02e: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* ffd032: fmul dword ptr [eax*4 + 0x100b480] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0x100b480u)));
/* ffd039: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd03d: fmul dword ptr [eax*4 + 0x100b484] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0x100b484u)));
/* ffd044: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffd046: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffd04a: jmp 0xffd055 */
  goto L_ffd055;
L_ffd04c: /* ffd04c: mov eax, dword ptr [0x100b4e4] */
  eax = R32((uint32_t)(0x100b4e4u));
/* ffd051: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_ffd055: /* ffd055: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffd059: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* ffd05d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd05f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffd062: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffd066: jnp 0xffd06c */
  if (!pf) goto L_ffd06c;
L_ffd068: /* ffd068: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
L_ffd06c: /* ffd06c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ffd070: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ffd072: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffd076: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffd077: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd07a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffd07b: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* ffd07f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* ffd083: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffd087: jne 0xffce45 */
  if (!zf) goto L_ffce45;
L_ffd08d: /* ffd08d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ffd090: mov edi, 5 */
  edi = 0x5u;
L_ffd095: /* ffd095: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ffd097: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ffd09a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ffd09d: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* ffd0a2: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd0a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffd0a6: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd0a9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffd0ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffd0ad: call 0xffcce0 */
  esp -= 4; W32(esp, 0xffd0b2u); SPILL(); f_ffcce0(); if (g_unwind) return; RELOAD();
/* ffd0b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd0b5: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffd0b8: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ffd0b9: jne 0xffd095 */
  if (!zf) goto L_ffd095;
L_ffd0bb: /* ffd0bb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffd0be: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ffd0c1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffd0c3: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffd0cb: lea ebx, [esp + 0x118] */
  ebx = (uint32_t)(esp + 0x118u);
/* ffd0d2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ffd0d6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ffd0da: jmp 0xffd0e4 */
  goto L_ffd0e4;
L_ffd0dc: /* ffd0dc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ffd0e0: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
L_ffd0e4: /* ffd0e4: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* ffd0e7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* ffd0e9: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffd0ed: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd0f0: xor eax, eax */
  eax = 0;
L_ffd0f2: /* ffd0f2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* ffd0f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffd0f7: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd0fa: fadd dword ptr [ecx + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4 + 0xfffffffcu)));
/* ffd0fe: fstp dword ptr [ecx + eax*4 - 4] */
  WF32((uint32_t)(ecx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ffd102: jl 0xffd0f2 */
  if ((sf != of)) goto L_ffd0f2;
L_ffd104: /* ffd104: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd108: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd10d: lea esi, [esp + 0x38] */
  esi = (uint32_t)(esp + 0x38u);
/* ffd111: mov edi, ebx */
  edi = ebx;
/* ffd113: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffd117: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd119: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffd11d: fmul dword ptr [0x100a240] */
  ST0 = ST0 * (F32((uint32_t)(0x100a240u)));
/* ffd123: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffd127: xor eax, eax */
  eax = 0;
/* ffd129: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffd130: /* ffd130: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* ffd133: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffd134: cmp eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd137: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* ffd13b: fstp dword ptr [ebx + eax*4 - 4] */
  WF32((uint32_t)(ebx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ffd13f: jl 0xffd130 */
  if ((sf != of)) goto L_ffd130;
L_ffd141: /* ffd141: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffd143: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffd146: mov ecx, ebx */
  ecx = ebx;
/* ffd148: call 0xffcc20 */
  esp -= 4; W32(esp, 0xffd14du); SPILL(); f_ffcc20(); if (g_unwind) return; RELOAD();
/* ffd14d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffd151: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* ffd155: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffd156: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffd159: add ebx, 0xe0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffd15f: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd162: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffd166: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* ffd16a: jl 0xffd0dc */
  if ((sf != of)) goto L_ffd0dc;
L_ffd170: /* ffd170: mov edi, 1 */
  edi = 0x1u;
/* ffd175: lea esi, [esp + 0x1f8] */
  esi = (uint32_t)(esp + 0x1f8u);
/* ffd17c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffd180: /* ffd180: lea eax, [esi - 0xe0] */
  eax = (uint32_t)(esi + 0xffffff20u);
/* ffd186: mov ecx, esi */
  ecx = esi;
/* ffd188: call 0xffcb60 */
  esp -= 4; W32(esp, 0xffd18du); SPILL(); f_ffcb60(); if (g_unwind) return; RELOAD();
/* ffd18d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffd190: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* ffd193: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd196: mov eax, esi */
  eax = esi;
/* ffd198: call 0xffcb60 */
  esp -= 4; W32(esp, 0xffd19du); SPILL(); f_ffcb60(); if (g_unwind) return; RELOAD();
/* ffd19d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffd19e: add esi, 0xe0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffd1a4: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd1a7: jl 0xffd180 */
  if ((sf != of)) goto L_ffd180;
L_ffd1a9: /* ffd1a9: xor ebx, ebx */
  ebx = 0;
/* ffd1ab: jmp 0xffd1b0 */
  goto L_ffd1b0;
L_ffd1b0: /* ffd1b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ffd1b3: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* ffd1b6: xor edx, edx */
  edx = 0;
/* ffd1b8: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* ffd1bc: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ffd1bf: nop  */
L_ffd1c0: /* ffd1c0: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffd1c3: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1cb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd1ce: je 0xffd273 */
  if (zf) goto L_ffd273;
L_ffd1d4: /* ffd1d4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffd1d6: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1de: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd1e1: je 0xffd254 */
  if (zf) goto L_ffd254;
L_ffd1e3: /* ffd1e3: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* ffd1e6: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1ee: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd1f1: je 0xffd257 */
  if (zf) goto L_ffd257;
L_ffd1f3: /* ffd1f3: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffd1f6: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1fe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd201: je 0xffd25c */
  if (zf) goto L_ffd25c;
L_ffd203: /* ffd203: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* ffd206: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd20c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd20e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd211: je 0xffd261 */
  if (zf) goto L_ffd261;
L_ffd213: /* ffd213: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* ffd216: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd21c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd21e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd221: je 0xffd266 */
  if (zf) goto L_ffd266;
L_ffd223: /* ffd223: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* ffd226: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd22c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd22e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd231: je 0xffd26b */
  if (zf) goto L_ffd26b;
L_ffd233: /* ffd233: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* ffd236: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd23c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd23e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd241: je 0xffd270 */
  if (zf) goto L_ffd270;
L_ffd243: /* ffd243: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd246: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd249: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd24c: jl 0xffd1c0 */
  if ((sf != of)) goto L_ffd1c0;
L_ffd252: /* ffd252: jmp 0xffd273 */
  goto L_ffd273;
L_ffd254: /* ffd254: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ffd255: jmp 0xffd273 */
  goto L_ffd273;
L_ffd257: /* ffd257: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd25a: jmp 0xffd273 */
  goto L_ffd273;
L_ffd25c: /* ffd25c: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd25f: jmp 0xffd273 */
  goto L_ffd273;
L_ffd261: /* ffd261: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd264: jmp 0xffd273 */
  goto L_ffd273;
L_ffd266: /* ffd266: add edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd269: jmp 0xffd273 */
  goto L_ffd273;
L_ffd26b: /* ffd26b: add edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd26e: jmp 0xffd273 */
  goto L_ffd273;
L_ffd270: /* ffd270: add edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_ffd273: /* ffd273: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* ffd277: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd27b: mov ecx, 0x37 */
  ecx = 0x37u;
/* ffd280: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffd284: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* ffd286: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* ffd289: lea edx, [esi + 0xe4] */
  edx = (uint32_t)(esi + 0xe4u);
/* ffd28f: nop  */
L_ffd290: /* ffd290: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ffd292: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd298: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd29a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd29d: je 0xffd2a8 */
  if (zf) goto L_ffd2a8;
L_ffd29f: /* ffd29f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ffd2a0: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffd2a3: cmp ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd2a6: jg 0xffd290 */
  if ((!zf && sf == of)) goto L_ffd290;
L_ffd2a8: /* ffd2a8: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffd2ac: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd2b0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffd2b1: cmp ebx, 0xb */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd2b4: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* ffd2b7: jl 0xffd1b0 */
  if ((sf != of)) goto L_ffd1b0;
L_ffd2bd: /* ffd2bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffd2be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffd2bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffd2c0: mov esp, ebp */
  esp = ebp;
/* ffd2c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffd2c3: ret  */
  esp += 4; SPILL(); return;
}

void f_ffd1ad(void) {
  LOAD_REGS();
L_ffd1ad: /* ffd1ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffd1b0: /* ffd1b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ffd1b3: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* ffd1b6: xor edx, edx */
  edx = 0;
/* ffd1b8: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* ffd1bc: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* ffd1bf: nop  */
L_ffd1c0: /* ffd1c0: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* ffd1c3: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1cb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd1ce: je 0xffd273 */
  if (zf) goto L_ffd273;
L_ffd1d4: /* ffd1d4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffd1d6: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1de: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd1e1: je 0xffd254 */
  if (zf) goto L_ffd254;
L_ffd1e3: /* ffd1e3: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* ffd1e6: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1ee: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd1f1: je 0xffd257 */
  if (zf) goto L_ffd257;
L_ffd1f3: /* ffd1f3: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ffd1f6: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd1fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd1fe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd201: je 0xffd25c */
  if (zf) goto L_ffd25c;
L_ffd203: /* ffd203: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* ffd206: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd20c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd20e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd211: je 0xffd261 */
  if (zf) goto L_ffd261;
L_ffd213: /* ffd213: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* ffd216: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd21c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd21e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd221: je 0xffd266 */
  if (zf) goto L_ffd266;
L_ffd223: /* ffd223: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* ffd226: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd22c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd22e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd231: je 0xffd26b */
  if (zf) goto L_ffd26b;
L_ffd233: /* ffd233: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* ffd236: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd23c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd23e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd241: je 0xffd270 */
  if (zf) goto L_ffd270;
L_ffd243: /* ffd243: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd246: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd249: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd24c: jl 0xffd1c0 */
  if ((sf != of)) goto L_ffd1c0;
L_ffd252: /* ffd252: jmp 0xffd273 */
  goto L_ffd273;
L_ffd254: /* ffd254: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ffd255: jmp 0xffd273 */
  goto L_ffd273;
L_ffd257: /* ffd257: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd25a: jmp 0xffd273 */
  goto L_ffd273;
L_ffd25c: /* ffd25c: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd25f: jmp 0xffd273 */
  goto L_ffd273;
L_ffd261: /* ffd261: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd264: jmp 0xffd273 */
  goto L_ffd273;
L_ffd266: /* ffd266: add edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd269: jmp 0xffd273 */
  goto L_ffd273;
L_ffd26b: /* ffd26b: add edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd26e: jmp 0xffd273 */
  goto L_ffd273;
L_ffd270: /* ffd270: add edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_ffd273: /* ffd273: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* ffd277: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd27b: mov ecx, 0x37 */
  ecx = 0x37u;
/* ffd280: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffd284: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* ffd286: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* ffd289: lea edx, [esi + 0xe4] */
  edx = (uint32_t)(esi + 0xe4u);
/* ffd28f: nop  */
L_ffd290: /* ffd290: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ffd292: fcomp dword ptr [0x100a23c] */
  fpu_com(ST0, F32((uint32_t)(0x100a23cu)));
  FPOP();
/* ffd298: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd29a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd29d: je 0xffd2a8 */
  if (zf) goto L_ffd2a8;
L_ffd29f: /* ffd29f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ffd2a0: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffd2a3: cmp ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd2a6: jg 0xffd290 */
  if ((!zf && sf == of)) goto L_ffd290;
L_ffd2a8: /* ffd2a8: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ffd2ac: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd2b0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffd2b1: cmp ebx, 0xb */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd2b4: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* ffd2b7: jl 0xffd1b0 */
  if ((sf != of)) goto L_ffd1b0;
L_ffd2bd: /* ffd2bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffd2be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffd2bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffd2c0: mov esp, ebp */
  esp = ebp;
/* ffd2c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffd2c3: ret  */
  esp += 4; SPILL(); return;
}

void f_ffd2d0(void) {
  LOAD_REGS();
L_ffd2d0: /* ffd2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffd2d1: mov ebp, esp */
  ebp = esp;
/* ffd2d3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ffd2d6: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffd2d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffd2da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffd2db: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ffd2de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffd2df: xor eax, eax */
  eax = 0;
/* ffd2e1: mov ecx, 0xd */
  ecx = 0xdu;
/* ffd2e6: mov edi, esi */
  edi = esi;
/* ffd2e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffd2ea: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffd2ed: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ffd2ef: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* ffd2f2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffd2f5: fild dword ptr [edi] */
  { double v = (double)(int32_t)R32((uint32_t)(edi)); FPUSH(v); }
/* ffd2f7: mov dword ptr [esp + 0x18], 0xffffff9d */
  W32((uint32_t)(esp + 0x18u), 0xffffff9du);
/* ffd2ff: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* ffd307: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* ffd30b: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ffd30f: fmul dword ptr [0x100a664] */
  ST0 = ST0 * (F32((uint32_t)(0x100a664u)));
/* ffd315: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd318: call 0x1009172 */
  esp -= 4; W32(esp, 0xffd31du); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffd31d: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* ffd322: fstp qword ptr [esp + 0x54] */
  WF64((uint32_t)(esp + 0x54u), ST0); FPOP();
/* ffd326: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffd328: call 0x1009172 */
  esp -= 4; W32(esp, 0xffd32du); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffd32d: fdivr qword ptr [esp + 0x58] */
  ST0 = (F64((uint32_t)(esp + 0x58u))) / ST0;
/* ffd331: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd334: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffd33a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd33d: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xffd343u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ffd343: fsub qword ptr [0x100a0d0] */
  ST0 = ST0 - (F64((uint32_t)(0x100a0d0u)));
/* ffd349: call 0x1009188 */
  esp -= 4; W32(esp, 0xffd34eu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffd34e: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* ffd351: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* ffd354: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffd358: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* ffd35b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffd35f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffd363: fmul dword ptr [0x100a660] */
  ST0 = ST0 * (F32((uint32_t)(0x100a660u)));
/* ffd369: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* ffd36d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd370: call 0x1009172 */
  esp -= 4; W32(esp, 0xffd375u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffd375: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffd37b: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* ffd37e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ecx = r;
  }
/* ffd37f: mov edx, 1 */
  edx = 0x1u;
/* ffd384: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffd38a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ffd38c: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* ffd390: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ffd394: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ffd398: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* ffd39c: fild dword ptr [edi] */
  { double v = (double)(int32_t)R32((uint32_t)(edi)); FPUSH(v); }
/* ffd39e: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ffd3a2: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* ffd3a6: call 0x1009188 */
  esp -= 4; W32(esp, 0xffd3abu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffd3ab: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffd3af: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffd3b5: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* ffd3b8: fsub dword ptr [0x100a660] */
  ST0 = ST0 - (F32((uint32_t)(0x100a660u)));
/* ffd3be: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* ffd3c2: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* ffd3c6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd3c9: call 0x1009172 */
  esp -= 4; W32(esp, 0xffd3ceu); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffd3ce: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffd3d4: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* ffd3d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esp = r;
  }
/* ffd3da: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ecx = r;
  }
/* ffd3db: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffd3e1: mov eax, 1 */
  eax = 0x1u;
/* ffd3e6: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* ffd3e8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* ffd3ec: fild dword ptr [esp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffd3f0: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffd3f4: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ffd3f8: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffd3fe: call 0x1009188 */
  esp -= 4; W32(esp, 0xffd403u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffd403: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* ffd406: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* ffd409: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffd40b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffd40c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffd40e: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* ffd411: je 0xffd42a */
  if (zf) goto L_ffd42a;
L_ffd413: /* ffd413: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ffd416: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* ffd41d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffd41e: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xffd424u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ffd424: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd427: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_ffd42a: /* ffd42a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ffd42d: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ffd430: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffd431: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* ffd435: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xffd43bu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ffd43b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffd43c: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* ffd43f: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xffd445u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ffd445: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* ffd448: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* ffd44b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ffd44e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd451: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffd453: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* ffd456: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ffd458: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* ffd45b: je 0xffd473 */
  if (zf) goto L_ffd473;
L_ffd45d: /* ffd45d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ffd461: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* ffd464: mov edx, eax */
  edx = eax;
/* ffd466: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffd469: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffd46a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffd46b: call 0xffca20 */
  esp -= 4; W32(esp, 0xffd470u); SPILL(); f_ffca20(); if (g_unwind) return; RELOAD();
/* ffd470: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffd473: /* ffd473: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ffd476: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffd478: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffd480: jle 0xffd701 */
  if ((zf || sf != of)) goto L_ffd701;
L_ffd486: /* ffd486: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* ffd489: mov eax, edi */
  eax = edi;
/* ffd48b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffd48c: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xffd48c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ffd48e: mov ebx, eax */
  ebx = eax;
/* ffd490: mov edi, eax */
  edi = eax;
/* ffd492: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* ffd495: xor eax, eax */
  eax = 0;
/* ffd497: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffd49b: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffd49f: nop  */
L_ffd4a0: /* ffd4a0: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffd4a4: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffd4a8: imul edx, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  edx = (uint32_t)r;
  }
/* ffd4ad: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffd4b1: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* ffd4b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffd4b8: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ffd4bc: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* ffd4c0: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ffd4c4: fmul dword ptr [0x100a0c0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0c0u)));
/* ffd4ca: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd4cd: call 0x1009178 */
  esp -= 4; W32(esp, 0xffd4d2u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffd4d2: fmul qword ptr [0x100a0b8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0b8u)));
/* ffd4d8: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffd4dc: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffd4e0: fmul dword ptr [0x100a0b0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0b0u)));
/* ffd4e6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd4e9: call 0x1009178 */
  esp -= 4; W32(esp, 0xffd4eeu); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffd4ee: fmul qword ptr [0x100a0a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0a8u)));
/* ffd4f4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffd4f7: mov ecx, dword ptr [eax + 0x670] */
  ecx = R32((uint32_t)(eax + 0x670u));
/* ffd4fd: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ffd501: fadd qword ptr [esp + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x48u)));
/* ffd505: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ffd509: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* ffd50d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd50f: fmul dword ptr [0x100a0a0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0a0u)));
/* ffd515: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd518: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd51a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffd51c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* ffd520: jge 0xffd5ef */
  if ((sf == of)) goto L_ffd5ef;
L_ffd526: /* ffd526: mov ecx, edx */
  ecx = edx;
/* ffd528: mov eax, ebx */
  eax = ebx;
/* ffd52a: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ffd52d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ffd531: mov eax, edi */
  eax = edi;
/* ffd533: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ffd536: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ffd53a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffd540: /* ffd540: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ffd544: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffd548: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* ffd54d: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* ffd551: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* ffd555: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffd558: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffd55c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffd560: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffd564: fmul dword ptr [0x100a0c0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0c0u)));
/* ffd56a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd56d: call 0x1009178 */
  esp -= 4; W32(esp, 0xffd572u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffd572: fmul qword ptr [0x100a0b8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0b8u)));
/* ffd578: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffd57c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ffd580: fmul dword ptr [0x100a0b0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0b0u)));
/* ffd586: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd589: call 0x1009178 */
  esp -= 4; W32(esp, 0xffd58eu); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffd58e: fmul qword ptr [0x100a0a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0a8u)));
/* ffd594: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffd597: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd59a: fadd qword ptr [esp + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x40u)));
/* ffd59e: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* ffd5a2: fmul dword ptr [0x100a0a0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0a0u)));
/* ffd5a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffd5aa: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffd5ae: fsub dword ptr [eax + 0x668] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x668u)));
/* ffd5b4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* ffd5b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd5b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd5bb: jne 0xffd5ef */
  if (!zf) goto L_ffd5ef;
L_ffd5bd: /* ffd5bd: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ffd5c1: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ffd5c5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ffd5c9: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd5cb: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd5cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffd5ce: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ffd5d2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffd5d5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ffd5d9: mov edx, dword ptr [ecx + 0x670] */
  edx = R32((uint32_t)(ecx + 0x670u));
/* ffd5df: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd5e1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ffd5e5: cmp edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd5e9: jl 0xffd540 */
  if ((sf != of)) goto L_ffd540;
L_ffd5ef: /* ffd5ef: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ffd5f3: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd5f6: jge 0xffd6ca */
  if ((sf == of)) goto L_ffd6ca;
L_ffd5fc: /* ffd5fc: mov ecx, ebx */
  ecx = ebx;
/* ffd5fe: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* ffd601: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ffd605: mov ecx, edi */
  ecx = edi;
/* ffd607: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* ffd60a: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* ffd60e: mov edi, edi */
  edi = edi;
L_ffd610: /* ffd610: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffd613: mov edx, dword ptr [ecx + 0x674] */
  edx = R32((uint32_t)(ecx + 0x674u));
/* ffd619: add edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd61d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd61f: jl 0xffd6a6 */
  if ((sf != of)) goto L_ffd6a6;
L_ffd625: /* ffd625: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ffd629: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ffd62d: imul eax, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  eax = (uint32_t)r;
  }
/* ffd632: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* ffd636: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ffd63a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffd63d: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffd641: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffd645: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffd649: fmul dword ptr [0x100a0c0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0c0u)));
/* ffd64f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd652: call 0x1009178 */
  esp -= 4; W32(esp, 0xffd657u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffd657: fmul qword ptr [0x100a0b8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0b8u)));
/* ffd65d: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffd661: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ffd665: fmul dword ptr [0x100a0b0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0b0u)));
/* ffd66b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd66e: call 0x1009178 */
  esp -= 4; W32(esp, 0xffd673u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ffd673: fmul qword ptr [0x100a0a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0a8u)));
/* ffd679: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffd67c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd67f: fadd qword ptr [esp + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x40u)));
/* ffd683: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* ffd687: fmul dword ptr [0x100a0a0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0a0u)));
/* ffd68d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffd68f: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffd693: fadd dword ptr [ecx + 0x66c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x66cu)));
/* ffd699: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* ffd69b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffd69d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffd6a0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ffd6a4: jne 0xffd6ca */
  if (!zf) goto L_ffd6ca;
L_ffd6a6: /* ffd6a6: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ffd6aa: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ffd6ae: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd6b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffd6b1: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* ffd6b5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ffd6b8: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd6ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd6bc: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ffd6c0: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ffd6c4: jl 0xffd610 */
  if ((sf != of)) goto L_ffd610;
L_ffd6ca: /* ffd6ca: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ffd6ce: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ffd6d1: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ffd6d4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd6d6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffd6da: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* ffd6dd: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffd6e1: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffd6e5: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffd6e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffd6e8: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffd6ec: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ffd6ef: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffd6f1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd6f3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffd6f7: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* ffd6fb: jl 0xffd4a0 */
  if ((sf != of)) goto L_ffd4a0;
L_ffd701: /* ffd701: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ffd704: xor edi, edi */
  edi = 0;
/* ffd706: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffd708: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* ffd70c: jle 0xffd783 */
  if ((zf || sf != of)) goto L_ffd783;
L_ffd712: /* ffd712: mov ebx, eax */
  ebx = eax;
L_ffd714: /* ffd714: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffd718: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffd71b: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffd71f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffd723: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffd729: fadd dword ptr [0x100a660] */
  ST0 = ST0 + (F32((uint32_t)(0x100a660u)));
/* ffd72f: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* ffd733: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* ffd737: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffd73a: call 0x1009172 */
  esp -= 4; W32(esp, 0xffd73fu); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffd73f: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffd745: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* ffd748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esp = r;
  }
/* ffd74b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ecx = r;
  }
/* ffd74c: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffd752: mov edx, 1 */
  edx = 0x1u;
/* ffd757: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ffd759: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* ffd75d: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ffd761: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ffd765: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* ffd769: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffd76f: call 0x1009188 */
  esp -= 4; W32(esp, 0xffd774u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffd774: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* ffd777: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* ffd77a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffd77b: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd77d: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* ffd781: jl 0xffd714 */
  if ((sf != of)) goto L_ffd714;
L_ffd783: /* ffd783: mov edi, dword ptr [0x100a03c] */
  edi = R32((uint32_t)(0x100a03cu));
/* ffd789: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* ffd78b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffd78du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffd78d: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* ffd791: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffd792: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ffd795: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffd797u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffd797: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffd798: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ffd79b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffd79du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffd79d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd7a0: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* ffd7a3: xor ebx, ebx */
  ebx = 0;
L_ffd7a5: /* ffd7a5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* ffd7a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffd7a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffd7a9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ffd7ac: mov dword ptr [ebx + edx], eax */
  W32((uint32_t)(ebx + edx), eax);
/* ffd7af: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffd7b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd7b5: cmp ebx, 0x44 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd7b8: jl 0xffd7a5 */
  if ((sf != of)) goto L_ffd7a5;
L_ffd7ba: /* ffd7ba: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
L_ffd7c2: /* ffd7c2: xor ebx, ebx */
  ebx = 0;
L_ffd7c4: /* ffd7c4: push 0xe8 */
  { uint32_t v = 0xe8u; esp -= 4; W32(esp, v); }
/* ffd7c9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffd7cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffd7cb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ffd7ce: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ffd7d2: mov ecx, dword ptr [ecx + edx] */
  ecx = R32((uint32_t)(ecx + edx));
/* ffd7d5: mov dword ptr [ebx + ecx], eax */
  W32((uint32_t)(ebx + ecx), eax);
/* ffd7d8: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffd7db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffd7de: cmp ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd7e1: jl 0xffd7c4 */
  if ((sf != of)) goto L_ffd7c4;
L_ffd7e3: /* ffd7e3: mov eax, edx */
  eax = edx;
/* ffd7e5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffd7e8: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffd7eb: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffd7ef: jl 0xffd7c2 */
  if ((sf != of)) goto L_ffd7c2;
L_ffd7f1: /* ffd7f1: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ffd7f4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffd7f6: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* ffd7f9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ffd7fc: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd7ff: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd804: mov esi, 0x100b4f0 */
  esi = 0x100b4f0u;
/* ffd809: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd80b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffd80e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffd810: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* ffd813: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd816: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd81b: mov esi, 0x100b5d0 */
  esi = 0x100b5d0u;
/* ffd820: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd822: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffd825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffd827: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* ffd82a: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd82d: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd832: mov esi, 0x100b6b0 */
  esi = 0x100b6b0u;
/* ffd837: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd839: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffd83c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffd83e: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* ffd841: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd844: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd849: mov esi, 0x100b790 */
  esi = 0x100b790u;
/* ffd84e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd850: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffd853: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffd856: mov edi, dword ptr [edx + 0x10] */
  edi = R32((uint32_t)(edx + 0x10u));
/* ffd859: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd85c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd861: mov esi, 0x100b4f0 */
  esi = 0x100b4f0u;
/* ffd866: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd868: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffd86b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ffd86e: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* ffd871: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd874: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd879: mov esi, 0x100b5d0 */
  esi = 0x100b5d0u;
/* ffd87e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd880: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffd883: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ffd886: mov edi, dword ptr [eax + 0x20] */
  edi = R32((uint32_t)(eax + 0x20u));
/* ffd889: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd88c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd891: mov esi, 0x100b6b0 */
  esi = 0x100b6b0u;
/* ffd896: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd898: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffd89b: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffd89e: mov edi, dword ptr [edx + 0x28] */
  edi = R32((uint32_t)(edx + 0x28u));
/* ffd8a1: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd8a4: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd8a9: mov esi, 0x100b790 */
  esi = 0x100b790u;
/* ffd8ae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd8b0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffd8b3: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* ffd8b6: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* ffd8b9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd8bc: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd8c1: mov esi, 0x100b870 */
  esi = 0x100b870u;
/* ffd8c6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd8c8: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffd8cb: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* ffd8ce: mov edi, dword ptr [eax + 0x18] */
  edi = R32((uint32_t)(eax + 0x18u));
/* ffd8d1: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd8d4: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd8d9: mov esi, 0x100b950 */
  esi = 0x100b950u;
/* ffd8de: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd8e0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffd8e3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffd8e6: mov edi, dword ptr [edx + 0x20] */
  edi = R32((uint32_t)(edx + 0x20u));
/* ffd8e9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd8ec: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd8f1: mov esi, 0x100ba30 */
  esi = 0x100ba30u;
/* ffd8f6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd8f8: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffd8fb: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* ffd8fe: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* ffd901: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd904: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd909: mov esi, 0x100bb10 */
  esi = 0x100bb10u;
/* ffd90e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd910: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffd913: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* ffd916: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* ffd919: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd91c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd921: mov esi, 0x100bbf0 */
  esi = 0x100bbf0u;
/* ffd926: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd928: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffd92b: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffd92e: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* ffd931: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd934: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd939: mov esi, 0x100bcd0 */
  esi = 0x100bcd0u;
/* ffd93e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd940: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffd943: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* ffd946: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* ffd949: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd94c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd951: mov esi, 0x100bdb0 */
  esi = 0x100bdb0u;
/* ffd956: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd958: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffd95b: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* ffd95e: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* ffd961: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd964: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd969: mov esi, 0x100be90 */
  esi = 0x100be90u;
/* ffd96e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd970: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffd973: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffd976: mov edi, dword ptr [edx + 0x10] */
  edi = R32((uint32_t)(edx + 0x10u));
/* ffd979: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd97c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd981: mov esi, 0x100bf70 */
  esi = 0x100bf70u;
/* ffd986: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd988: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffd98b: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* ffd98e: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* ffd991: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd994: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd999: mov esi, 0x100c050 */
  esi = 0x100c050u;
/* ffd99e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd9a0: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffd9a3: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* ffd9a6: mov edi, dword ptr [eax + 0x20] */
  edi = R32((uint32_t)(eax + 0x20u));
/* ffd9a9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd9ac: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd9b1: mov esi, 0x100c130 */
  esi = 0x100c130u;
/* ffd9b6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd9b8: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffd9bb: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffd9be: mov edi, dword ptr [edx + 0x28] */
  edi = R32((uint32_t)(edx + 0x28u));
/* ffd9c1: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd9c4: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd9c9: mov esi, 0x100c210 */
  esi = 0x100c210u;
/* ffd9ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd9d0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffd9d3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ffd9d6: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* ffd9d9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd9dc: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd9e1: mov esi, 0x100c2f0 */
  esi = 0x100c2f0u;
/* ffd9e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffd9e8: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffd9eb: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* ffd9ee: mov edi, dword ptr [eax + 0x18] */
  edi = R32((uint32_t)(eax + 0x18u));
/* ffd9f1: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffd9f4: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffd9f9: mov esi, 0x100c3d0 */
  esi = 0x100c3d0u;
/* ffd9fe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffda00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffda03: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffda06: mov edi, dword ptr [edx + 0x20] */
  edi = R32((uint32_t)(edx + 0x20u));
/* ffda09: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffda0c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffda11: mov esi, 0x100c4b0 */
  esi = 0x100c4b0u;
/* ffda16: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffda18: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffda1b: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ffda1e: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* ffda21: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffda24: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffda29: mov esi, 0x100c590 */
  esi = 0x100c590u;
/* ffda2e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffda30: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffda33: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* ffda36: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* ffda39: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffda3c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffda41: mov esi, 0x100c670 */
  esi = 0x100c670u;
/* ffda46: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffda48: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffda4b: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffda4e: mov edi, dword ptr [edx + 0x18] */
  edi = R32((uint32_t)(edx + 0x18u));
/* ffda51: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffda54: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffda59: mov esi, 0x100c750 */
  esi = 0x100c750u;
/* ffda5e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffda60: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffda63: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* ffda66: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* ffda69: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffda6c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffda71: mov esi, 0x100c830 */
  esi = 0x100c830u;
/* ffda76: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffda78: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffda7b: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* ffda7e: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* ffda81: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffda84: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffda89: mov esi, 0x100c910 */
  esi = 0x100c910u;
/* ffda8e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffda90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffda93: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffda96: mov edi, dword ptr [edx + 0x10] */
  edi = R32((uint32_t)(edx + 0x10u));
/* ffda99: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffda9c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdaa1: mov esi, 0x100c9f0 */
  esi = 0x100c9f0u;
/* ffdaa6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdaa8: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffdaab: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* ffdaae: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* ffdab1: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdab4: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdab9: mov esi, 0x100cad0 */
  esi = 0x100cad0u;
/* ffdabe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdac0: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdac3: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* ffdac6: mov edi, dword ptr [eax + 0x20] */
  edi = R32((uint32_t)(eax + 0x20u));
/* ffdac9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdacc: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdad1: mov esi, 0x100cbb0 */
  esi = 0x100cbb0u;
/* ffdad6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdad8: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdadb: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffdade: mov edi, dword ptr [edx + 0x28] */
  edi = R32((uint32_t)(edx + 0x28u));
/* ffdae1: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdae4: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdae9: mov esi, 0x100cc90 */
  esi = 0x100cc90u;
/* ffdaee: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdaf0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffdaf3: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* ffdaf6: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* ffdaf9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdafc: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdb01: mov esi, 0x100cd70 */
  esi = 0x100cd70u;
/* ffdb06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdb08: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdb0b: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* ffdb0e: mov edi, dword ptr [eax + 0x18] */
  edi = R32((uint32_t)(eax + 0x18u));
/* ffdb11: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdb14: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdb19: mov esi, 0x100ce50 */
  esi = 0x100ce50u;
/* ffdb1e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdb20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdb23: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffdb26: mov edi, dword ptr [edx + 0x20] */
  edi = R32((uint32_t)(edx + 0x20u));
/* ffdb29: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdb2c: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdb31: mov esi, 0x100cf30 */
  esi = 0x100cf30u;
/* ffdb36: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdb38: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffdb3b: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* ffdb3e: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* ffdb41: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdb44: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdb49: mov esi, 0x100d010 */
  esi = 0x100d010u;
/* ffdb4e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdb50: xor edx, edx */
  edx = 0;
L_ffdb52: /* ffdb52: mov ecx, 0x10 */
  ecx = 0x10u;
/* ffdb57: jmp 0xffdb60 */
  goto L_ffdb60;
L_ffdb60: /* ffdb60: mov eax, 0x14 */
  eax = 0x14u;
L_ffdb65: /* ffdb65: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* ffdb68: mov esi, dword ptr [edx + esi] */
  esi = R32((uint32_t)(edx + esi));
/* ffdb6b: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
/* ffdb6e: fld dword ptr [esi + eax - 0xc] */
  { double v = F32((uint32_t)(esi + eax + 0xfffffff4u)); FPUSH(v); }
/* ffdb72: lea edi, [esi + eax - 0xc] */
  edi = (uint32_t)(esi + eax + 0xfffffff4u);
/* ffdb76: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffdb79: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdb7c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdb7e: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdb81: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdb84: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdb87: fld dword ptr [edi + eax - 8] */
  { double v = F32((uint32_t)(edi + eax + 0xfffffff8u)); FPUSH(v); }
/* ffdb8b: lea edi, [edi + eax - 8] */
  edi = (uint32_t)(edi + eax + 0xfffffff8u);
/* ffdb8f: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdb92: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdb94: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdb97: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdb9a: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdb9d: fld dword ptr [edi + eax - 4] */
  { double v = F32((uint32_t)(edi + eax + 0xfffffffcu)); FPUSH(v); }
/* ffdba1: lea edi, [edi + eax - 4] */
  edi = (uint32_t)(edi + eax + 0xfffffffcu);
/* ffdba5: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdba8: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbaa: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbad: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbb0: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbb3: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* ffdbb6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdbb8: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbbb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbbd: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbc0: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbc3: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbc6: fld dword ptr [edi + eax + 4] */
  { double v = F32((uint32_t)(edi + eax + 0x4u)); FPUSH(v); }
/* ffdbca: lea edi, [edi + eax + 4] */
  edi = (uint32_t)(edi + eax + 0x4u);
/* ffdbce: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbd1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbd3: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbd6: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbd9: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbdc: fld dword ptr [edi + eax + 8] */
  { double v = F32((uint32_t)(edi + eax + 0x8u)); FPUSH(v); }
/* ffdbe0: lea edi, [edi + eax + 8] */
  edi = (uint32_t)(edi + eax + 0x8u);
/* ffdbe4: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbe7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbe9: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbec: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbef: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbf2: fld dword ptr [edi + eax + 0xc] */
  { double v = F32((uint32_t)(edi + eax + 0xcu)); FPUSH(v); }
/* ffdbf6: lea edi, [edi + eax + 0xc] */
  edi = (uint32_t)(edi + eax + 0xcu);
/* ffdbfa: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbfd: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbff: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdc02: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdc05: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdc08: fld dword ptr [edi + eax + 0x10] */
  { double v = F32((uint32_t)(edi + eax + 0x10u)); FPUSH(v); }
/* ffdc0c: lea edi, [edi + eax + 0x10] */
  edi = (uint32_t)(edi + eax + 0x10u);
/* ffdc10: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdc13: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdc16: cmp eax, 0xf4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdc1b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdc1d: jl 0xffdb65 */
  if ((sf != of)) goto L_ffdb65;
L_ffdc23: /* ffdc23: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc26: cmp ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdc29: jl 0xffdb60 */
  if ((sf != of)) goto L_ffdb60;
L_ffdc2f: /* ffdc2f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffdc32: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdc35: jl 0xffdb52 */
  if ((sf != of)) goto L_ffdb52;
L_ffdc3b: /* ffdc3b: mov dword ptr [esp + 0x28], 4 */
  W32((uint32_t)(esp + 0x28u), 0x4u);
/* ffdc43: jmp 0xffdc50 */
  goto L_ffdc50;
L_ffdc50: /* ffdc50: mov dword ptr [esp + 0x2c], 0x10 */
  W32((uint32_t)(esp + 0x2cu), 0x10u);
/* ffdc58: jmp 0xffdc60 */
  goto L_ffdc60;
L_ffdc60: /* ffdc60: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdc63: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdc67: mov esi, dword ptr [eax + edx - 4] */
  esi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffdc6b: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* ffdc6e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc70: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffdc74: mov edi, dword ptr [edx + ecx] */
  edi = R32((uint32_t)(edx + ecx));
/* ffdc77: mov esi, dword ptr [esi + edx] */
  esi = R32((uint32_t)(esi + edx));
/* ffdc7a: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdc7d: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdc80: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdc85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdc87: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdc8a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc8c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffdc8f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc91: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* ffdc94: mov ecx, dword ptr [edx + ecx] */
  ecx = R32((uint32_t)(edx + ecx));
/* ffdc97: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdc9a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc9d: call 0xffcb60 */
  esp -= 4; W32(esp, 0xffdca2u); SPILL(); f_ffcb60(); if (g_unwind) return; RELOAD();
/* ffdca2: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffdca6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdca9: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcac: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffdcb0: jl 0xffdc60 */
  if ((sf != of)) goto L_ffdc60;
L_ffdcb2: /* ffdcb2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdcb6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdcb9: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcbc: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffdcc0: jl 0xffdc50 */
  if ((sf != of)) goto L_ffdc50;
L_ffdcc2: /* ffdcc2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffdcc5: xor edi, edi */
  edi = 0;
/* ffdcc7: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdccd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffdcd0: /* ffdcd0: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdcd3: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffdcd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdcd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdcd9: call 0xffcde0 */
  esp -= 4; W32(esp, 0xffdcdeu); SPILL(); f_ffcde0(); if (g_unwind) return; RELOAD();
/* ffdcde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdce1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdce2: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdce5: cmp edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdce8: jl 0xffdcd0 */
  if ((sf != of)) goto L_ffdcd0;
L_ffdcea: /* ffdcea: xor edi, edi */
  edi = 0;
/* ffdcec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdcf0: /* ffdcf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdcf3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffdcf5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdcfe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd03: push 0x100a640 */
  { uint32_t v = 0x100a640u; esp -= 4; W32(esp, v); }
/* ffdd08: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd0du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd0d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd10: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd11: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd14: jl 0xffdcf0 */
  if ((sf != of)) goto L_ffdcf0;
L_ffdd16: /* ffdd16: xor edi, edi */
  edi = 0;
/* ffdd18: jmp 0xffdd20 */
  goto L_ffdd20;
L_ffdd20: /* ffdd20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd23: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffdd26: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd34: push 0x100a634 */
  { uint32_t v = 0x100a634u; esp -= 4; W32(esp, v); }
/* ffdd39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd41: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd42: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd45: jl 0xffdd20 */
  if ((sf != of)) goto L_ffdd20;
L_ffdd47: /* ffdd47: xor edi, edi */
  edi = 0;
/* ffdd49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd50: /* ffdd50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd53: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffdd56: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd64: push 0x100a628 */
  { uint32_t v = 0x100a628u; esp -= 4; W32(esp, v); }
/* ffdd69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd71: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd72: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd75: jl 0xffdd50 */
  if ((sf != of)) goto L_ffdd50;
L_ffdd77: /* ffdd77: xor edi, edi */
  edi = 0;
/* ffdd79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd80: /* ffdd80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd83: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffdd86: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd94: push 0x100a61c */
  { uint32_t v = 0x100a61cu; esp -= 4; W32(esp, v); }
/* ffdd99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdda1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdda2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdda5: jl 0xffdd80 */
  if ((sf != of)) goto L_ffdd80;
L_ffdda7: /* ffdda7: xor edi, edi */
  edi = 0;
/* ffdda9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffddb0: /* ffddb0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffddb3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffddb6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffddb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddbf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddc4: push 0x100a610 */
  { uint32_t v = 0x100a610u; esp -= 4; W32(esp, v); }
/* ffddc9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffddd1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffddd2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffddd5: jl 0xffddb0 */
  if ((sf != of)) goto L_ffddb0;
L_ffddd7: /* ffddd7: xor edi, edi */
  edi = 0;
/* ffddd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdde0: /* ffdde0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdde3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffdde6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdde9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdded: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddf4: push 0x100a604 */
  { uint32_t v = 0x100a604u; esp -= 4; W32(esp, v); }
/* ffddf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddfeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddfe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde02: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde05: jl 0xffdde0 */
  if ((sf != of)) goto L_ffdde0;
L_ffde07: /* ffde07: xor edi, edi */
  edi = 0;
/* ffde09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde10: /* ffde10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde13: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffde16: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde24: push 0x100a5f8 */
  { uint32_t v = 0x100a5f8u; esp -= 4; W32(esp, v); }
/* ffde29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde31: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde32: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde35: jl 0xffde10 */
  if ((sf != of)) goto L_ffde10;
L_ffde37: /* ffde37: xor edi, edi */
  edi = 0;
/* ffde39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde40: /* ffde40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde43: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffde46: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde54: push 0x100a5ec */
  { uint32_t v = 0x100a5ecu; esp -= 4; W32(esp, v); }
/* ffde59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde61: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde62: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde65: jl 0xffde40 */
  if ((sf != of)) goto L_ffde40;
L_ffde67: /* ffde67: xor edi, edi */
  edi = 0;
/* ffde69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde70: /* ffde70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde73: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffde76: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde84: push 0x100a5e0 */
  { uint32_t v = 0x100a5e0u; esp -= 4; W32(esp, v); }
/* ffde89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde92: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde95: jl 0xffde70 */
  if ((sf != of)) goto L_ffde70;
L_ffde97: /* ffde97: xor edi, edi */
  edi = 0;
/* ffde99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdea0: /* ffdea0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdea3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffdea6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdeab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdead: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdeaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdeb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdeb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdeb4: push 0x100a5d4 */
  { uint32_t v = 0x100a5d4u; esp -= 4; W32(esp, v); }
/* ffdeb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdebeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdebe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdec1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdec2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdec5: jl 0xffdea0 */
  if ((sf != of)) goto L_ffdea0;
L_ffdec7: /* ffdec7: xor edi, edi */
  edi = 0;
/* ffdec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffded0: /* ffded0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffded3: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffded6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffded9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdedf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdee2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdee4: push 0x100a5c8 */
  { uint32_t v = 0x100a5c8u; esp -= 4; W32(esp, v); }
/* ffdee9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdeeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdeee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdef2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdef5: jl 0xffded0 */
  if ((sf != of)) goto L_ffded0;
L_ffdef7: /* ffdef7: xor edi, edi */
  edi = 0;
/* ffdef9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf00: /* ffdf00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf03: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffdf06: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf14: push 0x100a5b8 */
  { uint32_t v = 0x100a5b8u; esp -= 4; W32(esp, v); }
/* ffdf19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf21: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf22: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf25: jl 0xffdf00 */
  if ((sf != of)) goto L_ffdf00;
L_ffdf27: /* ffdf27: xor edi, edi */
  edi = 0;
/* ffdf29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf30: /* ffdf30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf33: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffdf36: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf44: push 0x100a5ac */
  { uint32_t v = 0x100a5acu; esp -= 4; W32(esp, v); }
/* ffdf49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf51: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf52: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf55: jl 0xffdf30 */
  if ((sf != of)) goto L_ffdf30;
L_ffdf57: /* ffdf57: xor edi, edi */
  edi = 0;
/* ffdf59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf60: /* ffdf60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf63: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffdf66: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf74: push 0x100a59c */
  { uint32_t v = 0x100a59cu; esp -= 4; W32(esp, v); }
/* ffdf79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf81: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf82: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf85: jl 0xffdf60 */
  if ((sf != of)) goto L_ffdf60;
L_ffdf87: /* ffdf87: xor edi, edi */
  edi = 0;
/* ffdf89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf90: /* ffdf90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf93: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffdf96: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfa4: push 0x100a590 */
  { uint32_t v = 0x100a590u; esp -= 4; W32(esp, v); }
/* ffdfa9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfb1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfb2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfb5: jl 0xffdf90 */
  if ((sf != of)) goto L_ffdf90;
L_ffdfb7: /* ffdfb7: xor edi, edi */
  edi = 0;
/* ffdfb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdfc0: /* ffdfc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdfc3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffdfc6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdfc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfcf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfd4: push 0x100a580 */
  { uint32_t v = 0x100a580u; esp -= 4; W32(esp, v); }
/* ffdfd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfe1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfe2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfe5: jl 0xffdfc0 */
  if ((sf != of)) goto L_ffdfc0;
L_ffdfe7: /* ffdfe7: xor edi, edi */
  edi = 0;
/* ffdfe9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdff0: /* ffdff0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdff3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffdff6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe004: push 0x100a574 */
  { uint32_t v = 0x100a574u; esp -= 4; W32(esp, v); }
/* ffe009: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe00eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe00e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe011: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe012: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe015: jl 0xffdff0 */
  if ((sf != of)) goto L_ffdff0;
L_ffe017: /* ffe017: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffe01a: mov edi, dword ptr [esi + 0x370] */
  edi = R32((uint32_t)(esi + 0x370u));
/* ffe020: xor eax, eax */
  eax = 0;
/* ffe022: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffe024: je 0xffe0d7 */
  if (zf) goto L_ffe0d7;
L_ffe02a: /* ffe02a: add edi, 0x12 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe02d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffe031: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe035: jmp 0xffe040 */
  goto L_ffe040;
L_ffe040: /* ffe040: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe048: jmp 0xffe050 */
  goto L_ffe050;
L_ffe050: /* ffe050: mov ecx, 2 */
  ecx = 0x2u;
/* ffe055: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe057: jle 0xffe0a8 */
  if ((zf || sf != of)) goto L_ffe0a8;
L_ffe059: /* ffe059: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe05d: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffe061: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe063: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe066: lea esi, [eax + edx*4 + 0x374] */
  esi = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffe070: /* ffe070: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffe074: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffe077: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* ffe07a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe07e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffe081: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* ffe084: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* ffe087: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ffe089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffe08e: jne 0xffe0a5 */
  if (!zf) goto L_ffe0a5;
L_ffe090: /* ffe090: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffe092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffe094: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffe097: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* ffe09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffe09e: lea edi, [eax + 0x12] */
  edi = (uint32_t)(eax + 0x12u);
/* ffe0a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0a3: jl 0xffe070 */
  if ((sf != of)) goto L_ffe070;
L_ffe0a5: /* ffe0a5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe0a8: /* ffe0a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffe0ad: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe0b4: jl 0xffe050 */
  if ((sf != of)) goto L_ffe050;
L_ffe0b6: /* ffe0b6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffe0ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe0be: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe0c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0c4: cmp eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe0cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ffe0d1: jl 0xffe040 */
  if ((sf != of)) goto L_ffe040;
L_ffe0d7: /* ffe0d7: xor edi, edi */
  edi = 0;
/* ffe0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe0e0: /* ffe0e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe0e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffe0e5: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ec: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe0ee: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe0f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe0f3: push 0x100a564 */
  { uint32_t v = 0x100a564u; esp -= 4; W32(esp, v); }
/* ffe0f8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe0fdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe0fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe100: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe101: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe104: jl 0xffe0e0 */
  if ((sf != of)) goto L_ffe0e0;
L_ffe106: /* ffe106: xor edi, edi */
  edi = 0;
/* ffe108: jmp 0xffe110 */
  goto L_ffe110;
L_ffe110: /* ffe110: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe113: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ffe116: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe119: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe11b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe11d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe11f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe122: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe123: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe124: push 0x100a554 */
  { uint32_t v = 0x100a554u; esp -= 4; W32(esp, v); }
/* ffe129: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe12eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe12e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe131: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe132: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe135: jl 0xffe110 */
  if ((sf != of)) goto L_ffe110;
L_ffe137: /* ffe137: xor edi, edi */
  edi = 0;
/* ffe139: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe140: /* ffe140: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe143: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ffe146: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe14b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe14d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe14f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe152: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe153: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe154: push 0x100a544 */
  { uint32_t v = 0x100a544u; esp -= 4; W32(esp, v); }
/* ffe159: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe15eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe15e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe161: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe162: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe165: jl 0xffe140 */
  if ((sf != of)) goto L_ffe140;
L_ffe167: /* ffe167: xor edi, edi */
  edi = 0;
/* ffe169: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe170: /* ffe170: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe173: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* ffe176: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe17b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe17d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe17f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe184: push 0x100a534 */
  { uint32_t v = 0x100a534u; esp -= 4; W32(esp, v); }
/* ffe189: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe18eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe18e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe191: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe192: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe195: jl 0xffe170 */
  if ((sf != of)) goto L_ffe170;
L_ffe197: /* ffe197: xor edi, edi */
  edi = 0;
/* ffe199: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe1a0: /* ffe1a0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe1a3: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* ffe1a6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe1a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe1af: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe1b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe1b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe1b4: push 0x100a524 */
  { uint32_t v = 0x100a524u; esp -= 4; W32(esp, v); }
/* ffe1b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe1beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe1be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe1c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe1c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe1c5: jl 0xffe1a0 */
  if ((sf != of)) goto L_ffe1a0;
L_ffe1c7: /* ffe1c7: xor edi, edi */
  edi = 0;
/* ffe1c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe1d0: /* ffe1d0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe1d3: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* ffe1d6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe1d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe1df: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe1e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe1e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe1e4: push 0x100a514 */
  { uint32_t v = 0x100a514u; esp -= 4; W32(esp, v); }
/* ffe1e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe1eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe1ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe1f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe1f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe1f5: jl 0xffe1d0 */
  if ((sf != of)) goto L_ffe1d0;
L_ffe1f7: /* ffe1f7: xor edi, edi */
  edi = 0;
/* ffe1f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe200: /* ffe200: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe203: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* ffe206: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe209: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe20b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe20d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe20f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe213: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe214: push 0x100a504 */
  { uint32_t v = 0x100a504u; esp -= 4; W32(esp, v); }
/* ffe219: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe21eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe21e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe221: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe222: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe225: jl 0xffe200 */
  if ((sf != of)) goto L_ffe200;
L_ffe227: /* ffe227: xor edi, edi */
  edi = 0;
/* ffe229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe230: /* ffe230: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe233: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ffe236: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe239: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe23b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe23d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe23f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe242: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe243: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe244: push 0x100a4f4 */
  { uint32_t v = 0x100a4f4u; esp -= 4; W32(esp, v); }
/* ffe249: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe24eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe24e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe251: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe252: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe255: jl 0xffe230 */
  if ((sf != of)) goto L_ffe230;
L_ffe257: /* ffe257: xor edi, edi */
  edi = 0;
/* ffe259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe260: /* ffe260: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe263: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* ffe266: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe26b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe26d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe26f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe272: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe274: push 0x100a4e4 */
  { uint32_t v = 0x100a4e4u; esp -= 4; W32(esp, v); }
/* ffe279: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe27eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe27e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe281: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe282: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe285: jl 0xffe260 */
  if ((sf != of)) goto L_ffe260;
L_ffe287: /* ffe287: xor edi, edi */
  edi = 0;
/* ffe289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe290: /* ffe290: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe293: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* ffe296: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe29b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe29d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe29f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe2a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe2a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe2a4: push 0x100a4d4 */
  { uint32_t v = 0x100a4d4u; esp -= 4; W32(esp, v); }
/* ffe2a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe2aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe2ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe2b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe2b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe2b5: jl 0xffe290 */
  if ((sf != of)) goto L_ffe290;
L_ffe2b7: /* ffe2b7: xor edi, edi */
  edi = 0;
/* ffe2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe2c0: /* ffe2c0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe2c3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ffe2c6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe2cf: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe2d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe2d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe2d4: push 0x100a4c4 */
  { uint32_t v = 0x100a4c4u; esp -= 4; W32(esp, v); }
/* ffe2d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe2deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe2de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe2e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe2e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe2e5: jl 0xffe2c0 */
  if ((sf != of)) goto L_ffe2c0;
L_ffe2e7: /* ffe2e7: xor edi, edi */
  edi = 0;
/* ffe2e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe2f0: /* ffe2f0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe2f3: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* ffe2f6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe2f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe2ff: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe302: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe304: push 0x100a4b4 */
  { uint32_t v = 0x100a4b4u; esp -= 4; W32(esp, v); }
/* ffe309: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe30eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe30e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe311: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe312: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe315: jl 0xffe2f0 */
  if ((sf != of)) goto L_ffe2f0;
L_ffe317: /* ffe317: xor edi, edi */
  edi = 0;
/* ffe319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe320: /* ffe320: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe323: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* ffe326: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe329: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe32b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe32d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe32f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe332: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe334: push 0x100a4a4 */
  { uint32_t v = 0x100a4a4u; esp -= 4; W32(esp, v); }
/* ffe339: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe33eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe33e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe341: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe342: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe345: jl 0xffe320 */
  if ((sf != of)) goto L_ffe320;
L_ffe347: /* ffe347: xor edi, edi */
  edi = 0;
/* ffe349: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe350: /* ffe350: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe353: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* ffe356: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe35b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe35d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe35f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe362: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe363: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe364: push 0x100a494 */
  { uint32_t v = 0x100a494u; esp -= 4; W32(esp, v); }
/* ffe369: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe36eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe36e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe371: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe372: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe375: jl 0xffe350 */
  if ((sf != of)) goto L_ffe350;
L_ffe377: /* ffe377: xor edi, edi */
  edi = 0;
/* ffe379: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe380: /* ffe380: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe383: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* ffe386: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe389: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe38b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe38d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe38f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe392: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe393: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe394: push 0x100a484 */
  { uint32_t v = 0x100a484u; esp -= 4; W32(esp, v); }
/* ffe399: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe39eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe39e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe3a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe3a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe3a5: jl 0xffe380 */
  if ((sf != of)) goto L_ffe380;
L_ffe3a7: /* ffe3a7: xor edi, edi */
  edi = 0;
/* ffe3a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe3b0: /* ffe3b0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe3b3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* ffe3b6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe3b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe3bf: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe3c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe3c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe3c4: push 0x100a474 */
  { uint32_t v = 0x100a474u; esp -= 4; W32(esp, v); }
/* ffe3c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe3ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe3ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe3d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe3d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe3d5: jl 0xffe3b0 */
  if ((sf != of)) goto L_ffe3b0;
L_ffe3d7: /* ffe3d7: xor edi, edi */
  edi = 0;
/* ffe3d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe3e0: /* ffe3e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe3e3: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* ffe3e6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe3e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe3ef: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe3f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe3f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe3f4: push 0x100a464 */
  { uint32_t v = 0x100a464u; esp -= 4; W32(esp, v); }
/* ffe3f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe3feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe3fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe401: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe402: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe405: jl 0xffe3e0 */
  if ((sf != of)) goto L_ffe3e0;
L_ffe407: /* ffe407: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* ffe40d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffe40f: je 0xffe5aa */
  if (zf) goto L_ffe5aa;
L_ffe415: /* ffe415: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe418: xor esi, esi */
  esi = 0;
/* ffe41a: add eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe41f: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ffe423: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe427: jmp 0xffe430 */
  goto L_ffe430;
L_ffe430: /* ffe430: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ffe434: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe43c: mov edx, 0xc */
  edx = 0xcu;
L_ffe441: /* ffe441: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe444: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe447: mov edi, dword ptr [eax + edx - 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff4u));
/* ffe44b: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe44e: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* ffe451: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe453: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe456: jp 0xffe45e */
  if (pf) goto L_ffe45e;
L_ffe458: /* ffe458: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* ffe45b: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe45e: /* ffe45e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe461: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe464: mov edi, dword ptr [eax + edx - 8] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff8u));
/* ffe468: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe46b: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ffe46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe46f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe472: jp 0xffe479 */
  if (pf) goto L_ffe479;
L_ffe474: /* ffe474: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ffe476: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe479: /* ffe479: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe47c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe47f: mov edi, dword ptr [eax + edx - 4] */
  edi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffe483: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe486: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* ffe489: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe48b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe48e: jp 0xffe496 */
  if (pf) goto L_ffe496;
L_ffe490: /* ffe490: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffe493: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe496: /* ffe496: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe499: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe49c: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* ffe49f: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4a2: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* ffe4a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4aa: jp 0xffe4b2 */
  if (pf) goto L_ffe4b2;
L_ffe4ac: /* ffe4ac: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* ffe4af: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4b2: /* ffe4b2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4b5: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4b8: mov edi, dword ptr [eax + edx + 4] */
  edi = R32((uint32_t)(eax + edx + 0x4u));
/* ffe4bc: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4bf: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* ffe4c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4c7: jp 0xffe4cf */
  if (pf) goto L_ffe4cf;
L_ffe4c9: /* ffe4c9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* ffe4cc: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4cf: /* ffe4cf: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4d2: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4d5: mov edi, dword ptr [eax + edx + 8] */
  edi = R32((uint32_t)(eax + edx + 0x8u));
/* ffe4d9: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4dc: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* ffe4df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4e4: jp 0xffe4ec */
  if (pf) goto L_ffe4ec;
L_ffe4e6: /* ffe4e6: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* ffe4e9: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4ec: /* ffe4ec: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4ef: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4f2: mov edi, dword ptr [eax + edx + 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xcu));
/* ffe4f6: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4f9: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* ffe4fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe501: jp 0xffe509 */
  if (pf) goto L_ffe509;
L_ffe503: /* ffe503: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* ffe506: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe509: /* ffe509: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe50c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe50f: mov edi, dword ptr [eax + edx + 0x10] */
  edi = R32((uint32_t)(eax + edx + 0x10u));
/* ffe513: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe516: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* ffe519: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe51b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe51e: jp 0xffe526 */
  if (pf) goto L_ffe526;
L_ffe520: /* ffe520: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* ffe523: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe526: /* ffe526: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe52a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe52d: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe530: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe533: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe536: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe53a: jl 0xffe441 */
  if ((sf != of)) goto L_ffe441;
L_ffe540: /* ffe540: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe543: jge 0xffe585 */
  if ((sf == of)) goto L_ffe585;
L_ffe545: /* ffe545: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe549: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe54b: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* ffe552: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe555: lea edx, [eax + edx*4 + 0x374] */
  edx = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe55c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe560: /* ffe560: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe563: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe566: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe569: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe56c: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ffe56e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe570: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe573: jp 0xffe57a */
  if (pf) goto L_ffe57a;
L_ffe575: /* ffe575: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffe577: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe57a: /* ffe57a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe57d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe580: cmp ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe583: jl 0xffe560 */
  if ((sf != of)) goto L_ffe560;
L_ffe585: /* ffe585: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* ffe589: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffe58d: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe590: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffe593: add ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe596: cmp esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe599: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* ffe59d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffe5a1: jl 0xffe430 */
  if ((sf != of)) goto L_ffe430;
L_ffe5a7: /* ffe5a7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe5aa: /* ffe5aa: xor edi, edi */
  edi = 0;
/* ffe5ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe5b0: /* ffe5b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffe5b5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5bc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5be: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5c3: push 0x100a458 */
  { uint32_t v = 0x100a458u; esp -= 4; W32(esp, v); }
/* ffe5c8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5cdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5cd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe5d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe5d1: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe5d4: jl 0xffe5b0 */
  if ((sf != of)) goto L_ffe5b0;
L_ffe5d6: /* ffe5d6: xor edi, edi */
  edi = 0;
/* ffe5d8: jmp 0xffe5e0 */
  goto L_ffe5e0;
L_ffe5e0: /* ffe5e0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5e3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffe5e6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5ef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5f4: push 0x100a44c */
  { uint32_t v = 0x100a44cu; esp -= 4; W32(esp, v); }
/* ffe5f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe601: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe602: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe605: jl 0xffe5e0 */
  if ((sf != of)) goto L_ffe5e0;
L_ffe607: /* ffe607: xor edi, edi */
  edi = 0;
/* ffe609: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe610: /* ffe610: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe613: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffe616: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe61f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe624: push 0x100a43c */
  { uint32_t v = 0x100a43cu; esp -= 4; W32(esp, v); }
/* ffe629: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe62eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe62e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe632: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe635: jl 0xffe610 */
  if ((sf != of)) goto L_ffe610;
L_ffe637: /* ffe637: xor edi, edi */
  edi = 0;
/* ffe639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe640: /* ffe640: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe643: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffe646: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe64f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe653: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe654: push 0x100a42c */
  { uint32_t v = 0x100a42cu; esp -= 4; W32(esp, v); }
/* ffe659: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe65eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe65e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe661: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe662: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe665: jl 0xffe640 */
  if ((sf != of)) goto L_ffe640;
L_ffe667: /* ffe667: xor edi, edi */
  edi = 0;
/* ffe669: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe670: /* ffe670: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe673: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffe676: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe679: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe67f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe683: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe684: push 0x100a41c */
  { uint32_t v = 0x100a41cu; esp -= 4; W32(esp, v); }
/* ffe689: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe68eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe68e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe691: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe692: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe695: jl 0xffe670 */
  if ((sf != of)) goto L_ffe670;
L_ffe697: /* ffe697: xor edi, edi */
  edi = 0;
/* ffe699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6a0: /* ffe6a0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6a3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffe6a6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6af: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6b4: push 0x100a40c */
  { uint32_t v = 0x100a40cu; esp -= 4; W32(esp, v); }
/* ffe6b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6c5: jl 0xffe6a0 */
  if ((sf != of)) goto L_ffe6a0;
L_ffe6c7: /* ffe6c7: xor edi, edi */
  edi = 0;
/* ffe6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6d0: /* ffe6d0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6d3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffe6d6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6df: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6e4: push 0x100a3fc */
  { uint32_t v = 0x100a3fcu; esp -= 4; W32(esp, v); }
/* ffe6e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6f5: jl 0xffe6d0 */
  if ((sf != of)) goto L_ffe6d0;
L_ffe6f7: /* ffe6f7: xor edi, edi */
  edi = 0;
/* ffe6f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe700: /* ffe700: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe703: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffe706: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe70f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe713: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe714: push 0x100a3ec */
  { uint32_t v = 0x100a3ecu; esp -= 4; W32(esp, v); }
/* ffe719: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe71eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe71e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe721: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe722: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe725: jl 0xffe700 */
  if ((sf != of)) goto L_ffe700;
L_ffe727: /* ffe727: xor edi, edi */
  edi = 0;
/* ffe729: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe730: /* ffe730: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe733: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffe736: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe739: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe73f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe744: push 0x100a3e0 */
  { uint32_t v = 0x100a3e0u; esp -= 4; W32(esp, v); }
/* ffe749: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe74eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe74e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe751: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe752: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe755: jl 0xffe730 */
  if ((sf != of)) goto L_ffe730;
L_ffe757: /* ffe757: xor edi, edi */
  edi = 0;
/* ffe759: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe760: /* ffe760: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe763: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffe766: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe76f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe773: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe774: push 0x100a3d0 */
  { uint32_t v = 0x100a3d0u; esp -= 4; W32(esp, v); }
/* ffe779: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe77eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe77e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe781: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe782: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe785: jl 0xffe760 */
  if ((sf != of)) goto L_ffe760;
L_ffe787: /* ffe787: xor edi, edi */
  edi = 0;
/* ffe789: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe790: /* ffe790: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe793: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffe796: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe79f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7a4: push 0x100a3c4 */
  { uint32_t v = 0x100a3c4u; esp -= 4; W32(esp, v); }
/* ffe7a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7b5: jl 0xffe790 */
  if ((sf != of)) goto L_ffe790;
L_ffe7b7: /* ffe7b7: xor edi, edi */
  edi = 0;
/* ffe7b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7c0: /* ffe7c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7c3: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffe7c6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7cf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7d4: push 0x100a3b4 */
  { uint32_t v = 0x100a3b4u; esp -= 4; W32(esp, v); }
/* ffe7d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7e5: jl 0xffe7c0 */
  if ((sf != of)) goto L_ffe7c0;
L_ffe7e7: /* ffe7e7: xor edi, edi */
  edi = 0;
/* ffe7e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7f0: /* ffe7f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7f3: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffe7f6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7ff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe804: push 0x100a3a8 */
  { uint32_t v = 0x100a3a8u; esp -= 4; W32(esp, v); }
/* ffe809: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe80eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe80e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe811: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe812: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe815: jl 0xffe7f0 */
  if ((sf != of)) goto L_ffe7f0;
L_ffe817: /* ffe817: xor edi, edi */
  edi = 0;
/* ffe819: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe820: /* ffe820: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe823: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffe826: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe829: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe82f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe833: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe834: push 0x100a398 */
  { uint32_t v = 0x100a398u; esp -= 4; W32(esp, v); }
/* ffe839: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe83eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe83e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe841: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe842: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe845: jl 0xffe820 */
  if ((sf != of)) goto L_ffe820;
L_ffe847: /* ffe847: xor edi, edi */
  edi = 0;
/* ffe849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe850: /* ffe850: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe853: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffe856: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe859: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe85f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe863: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe864: push 0x100a38c */
  { uint32_t v = 0x100a38cu; esp -= 4; W32(esp, v); }
/* ffe869: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe86eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe86e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe871: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe872: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe875: jl 0xffe850 */
  if ((sf != of)) goto L_ffe850;
L_ffe877: /* ffe877: xor edi, edi */
  edi = 0;
/* ffe879: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe880: /* ffe880: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe883: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffe886: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe88f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe894: push 0x100a37c */
  { uint32_t v = 0x100a37cu; esp -= 4; W32(esp, v); }
/* ffe899: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe89eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe89e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8a5: jl 0xffe880 */
  if ((sf != of)) goto L_ffe880;
L_ffe8a7: /* ffe8a7: xor edi, edi */
  edi = 0;
/* ffe8a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8b0: /* ffe8b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe8b3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffe8b6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe8b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe8bf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe8c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe8c4: push 0x100a36c */
  { uint32_t v = 0x100a36cu; esp -= 4; W32(esp, v); }
/* ffe8c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe8ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe8ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8d5: jl 0xffe8b0 */
  if ((sf != of)) goto L_ffe8b0;
L_ffe8d7: /* ffe8d7: xor edx, edx */
  edx = 0;
/* ffe8d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8e0: /* ffe8e0: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe8e8: mov ecx, 0xc */
  ecx = 0xcu;
L_ffe8ed: /* ffe8ed: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe8f0: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe8f3: mov edi, dword ptr [eax + ecx - 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff4u));
/* ffe8f7: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe8fa: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe8fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe8ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe902: jp 0xffe90a */
  if (pf) goto L_ffe90a;
L_ffe904: /* ffe904: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe907: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe90a: /* ffe90a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe90d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe910: mov edi, dword ptr [eax + ecx - 8] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff8u));
/* ffe914: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe917: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe91a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe91c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe91f: jp 0xffe927 */
  if (pf) goto L_ffe927;
L_ffe921: /* ffe921: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe924: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe927: /* ffe927: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe92a: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe92d: mov edi, dword ptr [eax + ecx - 4] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* ffe931: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe934: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe937: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe939: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe93c: jp 0xffe944 */
  if (pf) goto L_ffe944;
L_ffe93e: /* ffe93e: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe941: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe944: /* ffe944: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe947: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe94a: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe94d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe950: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe953: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe955: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe958: jp 0xffe960 */
  if (pf) goto L_ffe960;
L_ffe95a: /* ffe95a: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe95d: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe960: /* ffe960: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe963: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe966: mov edi, dword ptr [eax + ecx + 4] */
  edi = R32((uint32_t)(eax + ecx + 0x4u));
/* ffe96a: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe96d: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe970: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe972: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe975: jp 0xffe97d */
  if (pf) goto L_ffe97d;
L_ffe977: /* ffe977: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe97a: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe97d: /* ffe97d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe980: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe983: mov edi, dword ptr [eax + ecx + 8] */
  edi = R32((uint32_t)(eax + ecx + 0x8u));
/* ffe987: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe98a: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe98d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe98f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe992: jp 0xffe99a */
  if (pf) goto L_ffe99a;
L_ffe994: /* ffe994: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe997: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe99a: /* ffe99a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe99d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9a0: mov edi, dword ptr [eax + ecx + 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xcu));
/* ffe9a4: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9a7: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9af: jp 0xffe9b7 */
  if (pf) goto L_ffe9b7;
L_ffe9b1: /* ffe9b1: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9b4: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9b7: /* ffe9b7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe9ba: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9bd: mov edi, dword ptr [eax + ecx + 0x10] */
  edi = R32((uint32_t)(eax + ecx + 0x10u));
/* ffe9c1: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9c4: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9cc: jp 0xffe9d4 */
  if (pf) goto L_ffe9d4;
L_ffe9ce: /* ffe9ce: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9d1: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9d4: /* ffe9d4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe9d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe9db: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe9de: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9e1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe9e5: jl 0xffe8ed */
  if ((sf != of)) goto L_ffe8ed;
L_ffe9eb: /* ffe9eb: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9ee: jge 0xffea19 */
  if ((sf == of)) goto L_ffea19;
L_ffe9f0: /* ffe9f0: mov edi, eax */
  edi = eax;
/* ffe9f2: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_ffe9f5: /* ffe9f5: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe9f8: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* ffe9fb: mov ecx, dword ptr [eax + edi] */
  ecx = R32((uint32_t)(eax + edi));
/* ffe9fe: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* ffea01: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffea04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffea06: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffea09: jp 0xffea11 */
  if (pf) goto L_ffea11;
L_ffea0b: /* ffea0b: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffea0e: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
L_ffea11: /* ffea11: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffea14: cmp edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea17: jl 0xffe9f5 */
  if ((sf != of)) goto L_ffe9f5;
L_ffea19: /* ffea19: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffea1c: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea1f: jl 0xffe8e0 */
  if ((sf != of)) goto L_ffe8e0;
L_ffea25: /* ffea25: xor esi, esi */
  esi = 0;
L_ffea27: /* ffea27: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffea2c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea33: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea35: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea3a: push 0x100a360 */
  { uint32_t v = 0x100a360u; esp -= 4; W32(esp, v); }
/* ffea3f: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea44u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea44: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea48: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea4b: jl 0xffea27 */
  if ((sf != of)) goto L_ffea27;
L_ffea4d: /* ffea4d: xor esi, esi */
  esi = 0;
/* ffea4f: nop  */
L_ffea50: /* ffea50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea53: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffea56: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea64: push 0x100a354 */
  { uint32_t v = 0x100a354u; esp -= 4; W32(esp, v); }
/* ffea69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea71: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea72: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea75: jl 0xffea50 */
  if ((sf != of)) goto L_ffea50;
L_ffea77: /* ffea77: xor esi, esi */
  esi = 0;
/* ffea79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffea80: /* ffea80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea83: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffea86: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea94: push 0x100a344 */
  { uint32_t v = 0x100a344u; esp -= 4; W32(esp, v); }
/* ffea99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeaa1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeaa2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeaa5: jl 0xffea80 */
  if ((sf != of)) goto L_ffea80;
L_ffeaa7: /* ffeaa7: xor esi, esi */
  esi = 0;
/* ffeaa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeab0: /* ffeab0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeab3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffeab6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeab9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeabf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeac3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeac4: push 0x100a334 */
  { uint32_t v = 0x100a334u; esp -= 4; W32(esp, v); }
/* ffeac9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeaceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeace: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffead1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffead2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffead5: jl 0xffeab0 */
  if ((sf != of)) goto L_ffeab0;
L_ffead7: /* ffead7: xor esi, esi */
  esi = 0;
/* ffead9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeae0: /* ffeae0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeae3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffeae6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeaef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeaf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeaf4: push 0x100a324 */
  { uint32_t v = 0x100a324u; esp -= 4; W32(esp, v); }
/* ffeaf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeafeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeafe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb01: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb02: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb05: jl 0xffeae0 */
  if ((sf != of)) goto L_ffeae0;
L_ffeb07: /* ffeb07: xor esi, esi */
  esi = 0;
/* ffeb09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb10: /* ffeb10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb13: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffeb16: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb24: push 0x100a314 */
  { uint32_t v = 0x100a314u; esp -= 4; W32(esp, v); }
/* ffeb29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb32: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb35: jl 0xffeb10 */
  if ((sf != of)) goto L_ffeb10;
L_ffeb37: /* ffeb37: xor esi, esi */
  esi = 0;
/* ffeb39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb40: /* ffeb40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb43: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffeb46: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb54: push 0x100a304 */
  { uint32_t v = 0x100a304u; esp -= 4; W32(esp, v); }
/* ffeb59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb62: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb65: jl 0xffeb40 */
  if ((sf != of)) goto L_ffeb40;
L_ffeb67: /* ffeb67: xor esi, esi */
  esi = 0;
/* ffeb69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb70: /* ffeb70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb73: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffeb76: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb84: push 0x100a2f4 */
  { uint32_t v = 0x100a2f4u; esp -= 4; W32(esp, v); }
/* ffeb89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb92: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb95: jl 0xffeb70 */
  if ((sf != of)) goto L_ffeb70;
L_ffeb97: /* ffeb97: xor esi, esi */
  esi = 0;
/* ffeb99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeba0: /* ffeba0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeba3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffeba6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebb4: push 0x100a2e8 */
  { uint32_t v = 0x100a2e8u; esp -= 4; W32(esp, v); }
/* ffebb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebbeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebbe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebc1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebc2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebc5: jl 0xffeba0 */
  if ((sf != of)) goto L_ffeba0;
L_ffebc7: /* ffebc7: xor esi, esi */
  esi = 0;
/* ffebc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffebd0: /* ffebd0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffebd3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffebd6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffebd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebdf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebe4: push 0x100a2d8 */
  { uint32_t v = 0x100a2d8u; esp -= 4; W32(esp, v); }
/* ffebe9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebf1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebf2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebf5: jl 0xffebd0 */
  if ((sf != of)) goto L_ffebd0;
L_ffebf7: /* ffebf7: xor esi, esi */
  esi = 0;
/* ffebf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec00: /* ffec00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec03: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffec06: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec14: push 0x100a2cc */
  { uint32_t v = 0x100a2ccu; esp -= 4; W32(esp, v); }
/* ffec19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec21: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec22: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec25: jl 0xffec00 */
  if ((sf != of)) goto L_ffec00;
L_ffec27: /* ffec27: xor esi, esi */
  esi = 0;
/* ffec29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec30: /* ffec30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec33: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffec36: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec44: push 0x100a2bc */
  { uint32_t v = 0x100a2bcu; esp -= 4; W32(esp, v); }
/* ffec49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec51: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec52: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec55: jl 0xffec30 */
  if ((sf != of)) goto L_ffec30;
L_ffec57: /* ffec57: xor esi, esi */
  esi = 0;
/* ffec59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec60: /* ffec60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec63: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffec66: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec74: push 0x100a2b0 */
  { uint32_t v = 0x100a2b0u; esp -= 4; W32(esp, v); }
/* ffec79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec81: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec82: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec85: jl 0xffec60 */
  if ((sf != of)) goto L_ffec60;
L_ffec87: /* ffec87: xor esi, esi */
  esi = 0;
/* ffec89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec90: /* ffec90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec93: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffec96: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeca4: push 0x100a2a0 */
  { uint32_t v = 0x100a2a0u; esp -= 4; W32(esp, v); }
/* ffeca9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffecb1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffecb2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffecb5: jl 0xffec90 */
  if ((sf != of)) goto L_ffec90;
L_ffecb7: /* ffecb7: xor esi, esi */
  esi = 0;
/* ffecb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecc0: /* ffecc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecc3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffecc6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeccf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffecd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffecd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffecd4: push 0x100a294 */
  { uint32_t v = 0x100a294u; esp -= 4; W32(esp, v); }
/* ffecd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffece1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffece2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffece5: jl 0xffecc0 */
  if ((sf != of)) goto L_ffecc0;
L_ffece7: /* ffece7: xor esi, esi */
  esi = 0;
/* ffece9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecf0: /* ffecf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecf3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffecf6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffecff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed04: push 0x100a284 */
  { uint32_t v = 0x100a284u; esp -= 4; W32(esp, v); }
/* ffed09: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed0eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed0e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed12: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed15: jl 0xffecf0 */
  if ((sf != of)) goto L_ffecf0;
L_ffed17: /* ffed17: xor esi, esi */
  esi = 0;
/* ffed19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffed20: /* ffed20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffed23: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffed26: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffed29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffed2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed34: push 0x100a274 */
  { uint32_t v = 0x100a274u; esp -= 4; W32(esp, v); }
/* ffed39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed41: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed42: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed45: jl 0xffed20 */
  if ((sf != of)) goto L_ffed20;
L_ffed47: /* ffed47: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ffed4a: xor esi, esi */
  esi = 0;
/* ffed4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffed4e: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffed52: jle 0xffee3e */
  if ((zf || sf != of)) goto L_ffee3e;
L_ffed58: /* ffed58: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* ffed5b: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ffed5f: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* ffed62: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffed66: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffed6a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffed6c: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
L_ffed70: /* ffed70: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffed74: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffed77: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ffed7b: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ffed7f: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffed85: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ffed89: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ffed8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffed90: call 0x1009172 */
  esp -= 4; W32(esp, 0xffed95u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffed95: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffed9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed9e: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffeda4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffeda6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffedaa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedae: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffedb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedb6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffedb9: jp 0xffedc5 */
  if (pf) goto L_ffedc5;
L_ffedbb: /* ffedbb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ffedc3: jmp 0xffedde */
  goto L_ffedde;
L_ffedc5: /* ffedc5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedc9: fcomp dword ptr [0x100a270] */
  fpu_com(ST0, F32((uint32_t)(0x100a270u)));
  FPOP();
/* ffedcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedd1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffedd4: jne 0xffedde */
  if (!zf) goto L_ffedde;
L_ffedd6: /* ffedd6: mov dword ptr [esp + 0x10], 0x41800000 */
  W32((uint32_t)(esp + 0x10u), 0x41800000u);
L_ffedde: /* ffedde: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffede2: call 0x1009188 */
  esp -= 4; W32(esp, 0xffede7u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffede7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ffedea: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ffedee: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffedf2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffedf3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffedf5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffedf9: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffedfd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffee01: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* ffee05: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* ffee09: fld dword ptr [ecx + eax*4 + 0x67c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x67cu)); FPUSH(v); }
/* ffee10: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee14: fsubr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) - ST0;
/* ffee1a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ffee1c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee20: fmul dword ptr [ecx + eax*4 + 0x680] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4 + 0x680u)));
/* ffee27: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffee2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffee2c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffee30: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffee34: fstp dword ptr [ecx + esi*4 - 4] */
  WF32((uint32_t)(ecx + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ffee38: jl 0xffed70 */
  if ((sf != of)) goto L_ffed70;
L_ffee3e: /* ffee3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee40: mov esi, 1 */
  esi = 0x1u;
/* ffee45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee46: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee4c: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ffee4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffee51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee53: push 0x100a264 */
  { uint32_t v = 0x100a264u; esp -= 4; W32(esp, v); }
/* ffee58: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee5du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee5d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ffee60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffee65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee67: push 0x100a258 */
  { uint32_t v = 0x100a258u; esp -= 4; W32(esp, v); }
/* ffee6c: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee71u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee71: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffee74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffee75: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffee7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffee7d: mov esp, ebp */
  esp = ebp;
/* ffee7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffee80: ret  */
  esp += 4; SPILL(); return;
}

void f_ffdb59(void) {
  LOAD_REGS();
  goto L_ffdb59;
L_ffdb52: /* ffdb52: mov ecx, 0x10 */
  ecx = 0x10u;
/* ffdb57: jmp 0xffdb60 */
  goto L_ffdb60;
L_ffdb59: /* ffdb59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdb60: /* ffdb60: mov eax, 0x14 */
  eax = 0x14u;
L_ffdb65: /* ffdb65: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* ffdb68: mov esi, dword ptr [edx + esi] */
  esi = R32((uint32_t)(edx + esi));
/* ffdb6b: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
/* ffdb6e: fld dword ptr [esi + eax - 0xc] */
  { double v = F32((uint32_t)(esi + eax + 0xfffffff4u)); FPUSH(v); }
/* ffdb72: lea edi, [esi + eax - 0xc] */
  edi = (uint32_t)(esi + eax + 0xfffffff4u);
/* ffdb76: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffdb79: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdb7c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdb7e: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdb81: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdb84: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdb87: fld dword ptr [edi + eax - 8] */
  { double v = F32((uint32_t)(edi + eax + 0xfffffff8u)); FPUSH(v); }
/* ffdb8b: lea edi, [edi + eax - 8] */
  edi = (uint32_t)(edi + eax + 0xfffffff8u);
/* ffdb8f: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdb92: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdb94: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdb97: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdb9a: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdb9d: fld dword ptr [edi + eax - 4] */
  { double v = F32((uint32_t)(edi + eax + 0xfffffffcu)); FPUSH(v); }
/* ffdba1: lea edi, [edi + eax - 4] */
  edi = (uint32_t)(edi + eax + 0xfffffffcu);
/* ffdba5: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdba8: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbaa: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbad: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbb0: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbb3: fld dword ptr [edi + eax] */
  { double v = F32((uint32_t)(edi + eax)); FPUSH(v); }
/* ffdbb6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdbb8: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbbb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbbd: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbc0: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbc3: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbc6: fld dword ptr [edi + eax + 4] */
  { double v = F32((uint32_t)(edi + eax + 0x4u)); FPUSH(v); }
/* ffdbca: lea edi, [edi + eax + 4] */
  edi = (uint32_t)(edi + eax + 0x4u);
/* ffdbce: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbd1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbd3: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbd6: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbd9: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbdc: fld dword ptr [edi + eax + 8] */
  { double v = F32((uint32_t)(edi + eax + 0x8u)); FPUSH(v); }
/* ffdbe0: lea edi, [edi + eax + 8] */
  edi = (uint32_t)(edi + eax + 0x8u);
/* ffdbe4: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbe7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbe9: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdbec: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdbef: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdbf2: fld dword ptr [edi + eax + 0xc] */
  { double v = F32((uint32_t)(edi + eax + 0xcu)); FPUSH(v); }
/* ffdbf6: lea edi, [edi + eax + 0xc] */
  edi = (uint32_t)(edi + eax + 0xcu);
/* ffdbfa: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdbfd: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdbff: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* ffdc02: mov edi, dword ptr [edx + edi] */
  edi = R32((uint32_t)(edx + edi));
/* ffdc05: mov edi, dword ptr [edi + ecx] */
  edi = R32((uint32_t)(edi + ecx));
/* ffdc08: fld dword ptr [edi + eax + 0x10] */
  { double v = F32((uint32_t)(edi + eax + 0x10u)); FPUSH(v); }
/* ffdc0c: lea edi, [edi + eax + 0x10] */
  edi = (uint32_t)(edi + eax + 0x10u);
/* ffdc10: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* ffdc13: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdc16: cmp eax, 0xf4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdc1b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffdc1d: jl 0xffdb65 */
  if ((sf != of)) goto L_ffdb65;
L_ffdc23: /* ffdc23: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc26: cmp ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdc29: jl 0xffdb60 */
  if ((sf != of)) goto L_ffdb60;
L_ffdc2f: /* ffdc2f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffdc32: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdc35: jl 0xffdb52 */
  if ((sf != of)) goto L_ffdb52;
L_ffdc3b: /* ffdc3b: mov dword ptr [esp + 0x28], 4 */
  W32((uint32_t)(esp + 0x28u), 0x4u);
/* ffdc43: jmp 0xffdc50 */
  goto L_ffdc50;
L_ffdc50: /* ffdc50: mov dword ptr [esp + 0x2c], 0x10 */
  W32((uint32_t)(esp + 0x2cu), 0x10u);
/* ffdc58: jmp 0xffdc60 */
  goto L_ffdc60;
L_ffdc60: /* ffdc60: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdc63: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdc67: mov esi, dword ptr [eax + edx - 4] */
  esi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffdc6b: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* ffdc6e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc70: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffdc74: mov edi, dword ptr [edx + ecx] */
  edi = R32((uint32_t)(edx + ecx));
/* ffdc77: mov esi, dword ptr [esi + edx] */
  esi = R32((uint32_t)(esi + edx));
/* ffdc7a: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdc7d: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffdc80: mov ecx, 0x38 */
  ecx = 0x38u;
/* ffdc85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffdc87: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdc8a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc8c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffdc8f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ffdc91: mov eax, dword ptr [eax + edx] */
  eax = R32((uint32_t)(eax + edx));
/* ffdc94: mov ecx, dword ptr [edx + ecx] */
  ecx = R32((uint32_t)(edx + ecx));
/* ffdc97: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdc9a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffdc9d: call 0xffcb60 */
  esp -= 4; W32(esp, 0xffdca2u); SPILL(); f_ffcb60(); if (g_unwind) return; RELOAD();
/* ffdca2: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffdca6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdca9: cmp eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcac: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffdcb0: jl 0xffdc60 */
  if ((sf != of)) goto L_ffdc60;
L_ffdcb2: /* ffdcb2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffdcb6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdcb9: cmp eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdcbc: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffdcc0: jl 0xffdc50 */
  if ((sf != of)) goto L_ffdc50;
L_ffdcc2: /* ffdcc2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffdcc5: xor edi, edi */
  edi = 0;
/* ffdcc7: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdccd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffdcd0: /* ffdcd0: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffdcd3: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffdcd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdcd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdcd9: call 0xffcde0 */
  esp -= 4; W32(esp, 0xffdcdeu); SPILL(); f_ffcde0(); if (g_unwind) return; RELOAD();
/* ffdcde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdce1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdce2: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffdce5: cmp edi, 0x11 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdce8: jl 0xffdcd0 */
  if ((sf != of)) goto L_ffdcd0;
L_ffdcea: /* ffdcea: xor edi, edi */
  edi = 0;
/* ffdcec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdcf0: /* ffdcf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdcf3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffdcf5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdcf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdcfc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdcfe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd03: push 0x100a640 */
  { uint32_t v = 0x100a640u; esp -= 4; W32(esp, v); }
/* ffdd08: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd0du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd0d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd10: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd11: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd14: jl 0xffdcf0 */
  if ((sf != of)) goto L_ffdcf0;
L_ffdd16: /* ffdd16: xor edi, edi */
  edi = 0;
/* ffdd18: jmp 0xffdd20 */
  goto L_ffdd20;
L_ffdd20: /* ffdd20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd23: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffdd26: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd34: push 0x100a634 */
  { uint32_t v = 0x100a634u; esp -= 4; W32(esp, v); }
/* ffdd39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd41: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd42: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd45: jl 0xffdd20 */
  if ((sf != of)) goto L_ffdd20;
L_ffdd47: /* ffdd47: xor edi, edi */
  edi = 0;
/* ffdd49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd50: /* ffdd50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd53: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffdd56: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd64: push 0x100a628 */
  { uint32_t v = 0x100a628u; esp -= 4; W32(esp, v); }
/* ffdd69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdd71: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdd72: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdd75: jl 0xffdd50 */
  if ((sf != of)) goto L_ffdd50;
L_ffdd77: /* ffdd77: xor edi, edi */
  edi = 0;
/* ffdd79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdd80: /* ffdd80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdd83: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffdd86: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdd89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdd8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdd8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdd92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdd93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdd94: push 0x100a61c */
  { uint32_t v = 0x100a61cu; esp -= 4; W32(esp, v); }
/* ffdd99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdd9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdd9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdda1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdda2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdda5: jl 0xffdd80 */
  if ((sf != of)) goto L_ffdd80;
L_ffdda7: /* ffdda7: xor edi, edi */
  edi = 0;
/* ffdda9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffddb0: /* ffddb0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffddb3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffddb6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffddb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddbd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddbf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddc4: push 0x100a610 */
  { uint32_t v = 0x100a610u; esp -= 4; W32(esp, v); }
/* ffddc9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffddd1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffddd2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffddd5: jl 0xffddb0 */
  if ((sf != of)) goto L_ffddb0;
L_ffddd7: /* ffddd7: xor edi, edi */
  edi = 0;
/* ffddd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdde0: /* ffdde0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdde3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffdde6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdde9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffddeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdded: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffddef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffddf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffddf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffddf4: push 0x100a604 */
  { uint32_t v = 0x100a604u; esp -= 4; W32(esp, v); }
/* ffddf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffddfeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffddfe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde01: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde02: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde05: jl 0xffdde0 */
  if ((sf != of)) goto L_ffdde0;
L_ffde07: /* ffde07: xor edi, edi */
  edi = 0;
/* ffde09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde10: /* ffde10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde13: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffde16: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde24: push 0x100a5f8 */
  { uint32_t v = 0x100a5f8u; esp -= 4; W32(esp, v); }
/* ffde29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde31: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde32: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde35: jl 0xffde10 */
  if ((sf != of)) goto L_ffde10;
L_ffde37: /* ffde37: xor edi, edi */
  edi = 0;
/* ffde39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde40: /* ffde40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde43: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffde46: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde54: push 0x100a5ec */
  { uint32_t v = 0x100a5ecu; esp -= 4; W32(esp, v); }
/* ffde59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde61: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde62: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde65: jl 0xffde40 */
  if ((sf != of)) goto L_ffde40;
L_ffde67: /* ffde67: xor edi, edi */
  edi = 0;
/* ffde69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffde70: /* ffde70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffde73: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffde76: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffde79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffde7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffde7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffde82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffde83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffde84: push 0x100a5e0 */
  { uint32_t v = 0x100a5e0u; esp -= 4; W32(esp, v); }
/* ffde89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffde8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffde8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffde91: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffde92: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffde95: jl 0xffde70 */
  if ((sf != of)) goto L_ffde70;
L_ffde97: /* ffde97: xor edi, edi */
  edi = 0;
/* ffde99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdea0: /* ffdea0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdea3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffdea6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdeab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdead: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdeaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdeb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdeb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdeb4: push 0x100a5d4 */
  { uint32_t v = 0x100a5d4u; esp -= 4; W32(esp, v); }
/* ffdeb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdebeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdebe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdec1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdec2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdec5: jl 0xffdea0 */
  if ((sf != of)) goto L_ffdea0;
L_ffdec7: /* ffdec7: xor edi, edi */
  edi = 0;
/* ffdec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffded0: /* ffded0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffded3: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffded6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffded9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdedd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdedf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdee2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdee4: push 0x100a5c8 */
  { uint32_t v = 0x100a5c8u; esp -= 4; W32(esp, v); }
/* ffdee9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdeeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdeee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdef2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdef5: jl 0xffded0 */
  if ((sf != of)) goto L_ffded0;
L_ffdef7: /* ffdef7: xor edi, edi */
  edi = 0;
/* ffdef9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf00: /* ffdf00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf03: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffdf06: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf14: push 0x100a5b8 */
  { uint32_t v = 0x100a5b8u; esp -= 4; W32(esp, v); }
/* ffdf19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf21: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf22: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf25: jl 0xffdf00 */
  if ((sf != of)) goto L_ffdf00;
L_ffdf27: /* ffdf27: xor edi, edi */
  edi = 0;
/* ffdf29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf30: /* ffdf30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf33: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffdf36: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf44: push 0x100a5ac */
  { uint32_t v = 0x100a5acu; esp -= 4; W32(esp, v); }
/* ffdf49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf51: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf52: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf55: jl 0xffdf30 */
  if ((sf != of)) goto L_ffdf30;
L_ffdf57: /* ffdf57: xor edi, edi */
  edi = 0;
/* ffdf59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf60: /* ffdf60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf63: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffdf66: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdf72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdf73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdf74: push 0x100a59c */
  { uint32_t v = 0x100a59cu; esp -= 4; W32(esp, v); }
/* ffdf79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdf7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdf7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdf81: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdf82: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdf85: jl 0xffdf60 */
  if ((sf != of)) goto L_ffdf60;
L_ffdf87: /* ffdf87: xor edi, edi */
  edi = 0;
/* ffdf89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdf90: /* ffdf90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdf93: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffdf96: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdf99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdf9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdf9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfa4: push 0x100a590 */
  { uint32_t v = 0x100a590u; esp -= 4; W32(esp, v); }
/* ffdfa9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfb1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfb2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfb5: jl 0xffdf90 */
  if ((sf != of)) goto L_ffdf90;
L_ffdfb7: /* ffdfb7: xor edi, edi */
  edi = 0;
/* ffdfb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdfc0: /* ffdfc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdfc3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffdfc6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdfc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdfcd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfcf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffdfd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffdfd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffdfd4: push 0x100a580 */
  { uint32_t v = 0x100a580u; esp -= 4; W32(esp, v); }
/* ffdfd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffdfdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffdfde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffdfe1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffdfe2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffdfe5: jl 0xffdfc0 */
  if ((sf != of)) goto L_ffdfc0;
L_ffdfe7: /* ffdfe7: xor edi, edi */
  edi = 0;
/* ffdfe9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffdff0: /* ffdff0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffdff3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffdff6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffdff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffdffd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffdfff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe004: push 0x100a574 */
  { uint32_t v = 0x100a574u; esp -= 4; W32(esp, v); }
/* ffe009: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe00eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe00e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe011: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe012: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe015: jl 0xffdff0 */
  if ((sf != of)) goto L_ffdff0;
L_ffe017: /* ffe017: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffe01a: mov edi, dword ptr [esi + 0x370] */
  edi = R32((uint32_t)(esi + 0x370u));
/* ffe020: xor eax, eax */
  eax = 0;
/* ffe022: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffe024: je 0xffe0d7 */
  if (zf) goto L_ffe0d7;
L_ffe02a: /* ffe02a: add edi, 0x12 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe02d: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ffe031: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe035: jmp 0xffe040 */
  goto L_ffe040;
L_ffe040: /* ffe040: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe048: jmp 0xffe050 */
  goto L_ffe050;
L_ffe050: /* ffe050: mov ecx, 2 */
  ecx = 0x2u;
/* ffe055: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe057: jle 0xffe0a8 */
  if ((zf || sf != of)) goto L_ffe0a8;
L_ffe059: /* ffe059: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe05d: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffe061: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe063: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe066: lea esi, [eax + edx*4 + 0x374] */
  esi = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe06d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffe070: /* ffe070: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffe074: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ffe077: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* ffe07a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe07e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffe081: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* ffe084: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* ffe087: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ffe089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffe08e: jne 0xffe0a5 */
  if (!zf) goto L_ffe0a5;
L_ffe090: /* ffe090: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffe092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffe094: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffe097: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* ffe09d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffe09e: lea edi, [eax + 0x12] */
  edi = (uint32_t)(eax + 0x12u);
/* ffe0a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0a3: jl 0xffe070 */
  if ((sf != of)) goto L_ffe070;
L_ffe0a5: /* ffe0a5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe0a8: /* ffe0a8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffe0ad: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe0b4: jl 0xffe050 */
  if ((sf != of)) goto L_ffe050;
L_ffe0b6: /* ffe0b6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffe0ba: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe0be: add eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe0c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0c4: cmp eax, 0xbb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe0c9: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe0cd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ffe0d1: jl 0xffe040 */
  if ((sf != of)) goto L_ffe040;
L_ffe0d7: /* ffe0d7: xor edi, edi */
  edi = 0;
/* ffe0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe0e0: /* ffe0e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe0e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffe0e5: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe0e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe0ec: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe0ee: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe0f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe0f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe0f3: push 0x100a564 */
  { uint32_t v = 0x100a564u; esp -= 4; W32(esp, v); }
/* ffe0f8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe0fdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe0fd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe100: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe101: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe104: jl 0xffe0e0 */
  if ((sf != of)) goto L_ffe0e0;
L_ffe106: /* ffe106: xor edi, edi */
  edi = 0;
/* ffe108: jmp 0xffe110 */
  goto L_ffe110;
L_ffe110: /* ffe110: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe113: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ffe116: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe119: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe11b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe11d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe11f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe122: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe123: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe124: push 0x100a554 */
  { uint32_t v = 0x100a554u; esp -= 4; W32(esp, v); }
/* ffe129: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe12eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe12e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe131: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe132: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe135: jl 0xffe110 */
  if ((sf != of)) goto L_ffe110;
L_ffe137: /* ffe137: xor edi, edi */
  edi = 0;
/* ffe139: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe140: /* ffe140: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe143: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ffe146: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe14b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe14d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe14f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe152: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe153: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe154: push 0x100a544 */
  { uint32_t v = 0x100a544u; esp -= 4; W32(esp, v); }
/* ffe159: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe15eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe15e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe161: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe162: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe165: jl 0xffe140 */
  if ((sf != of)) goto L_ffe140;
L_ffe167: /* ffe167: xor edi, edi */
  edi = 0;
/* ffe169: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe170: /* ffe170: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe173: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* ffe176: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe17b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe17d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe17f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe184: push 0x100a534 */
  { uint32_t v = 0x100a534u; esp -= 4; W32(esp, v); }
/* ffe189: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe18eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe18e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe191: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe192: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe195: jl 0xffe170 */
  if ((sf != of)) goto L_ffe170;
L_ffe197: /* ffe197: xor edi, edi */
  edi = 0;
/* ffe199: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe1a0: /* ffe1a0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe1a3: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* ffe1a6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe1a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe1af: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe1b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe1b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe1b4: push 0x100a524 */
  { uint32_t v = 0x100a524u; esp -= 4; W32(esp, v); }
/* ffe1b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe1beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe1be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe1c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe1c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe1c5: jl 0xffe1a0 */
  if ((sf != of)) goto L_ffe1a0;
L_ffe1c7: /* ffe1c7: xor edi, edi */
  edi = 0;
/* ffe1c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe1d0: /* ffe1d0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe1d3: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* ffe1d6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe1d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe1df: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe1e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe1e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe1e4: push 0x100a514 */
  { uint32_t v = 0x100a514u; esp -= 4; W32(esp, v); }
/* ffe1e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe1eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe1ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe1f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe1f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe1f5: jl 0xffe1d0 */
  if ((sf != of)) goto L_ffe1d0;
L_ffe1f7: /* ffe1f7: xor edi, edi */
  edi = 0;
/* ffe1f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe200: /* ffe200: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe203: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* ffe206: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe209: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe20b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe20d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe20f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe213: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe214: push 0x100a504 */
  { uint32_t v = 0x100a504u; esp -= 4; W32(esp, v); }
/* ffe219: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe21eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe21e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe221: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe222: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe225: jl 0xffe200 */
  if ((sf != of)) goto L_ffe200;
L_ffe227: /* ffe227: xor edi, edi */
  edi = 0;
/* ffe229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe230: /* ffe230: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe233: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ffe236: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe239: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe23b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe23d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe23f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe242: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe243: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe244: push 0x100a4f4 */
  { uint32_t v = 0x100a4f4u; esp -= 4; W32(esp, v); }
/* ffe249: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe24eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe24e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe251: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe252: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe255: jl 0xffe230 */
  if ((sf != of)) goto L_ffe230;
L_ffe257: /* ffe257: xor edi, edi */
  edi = 0;
/* ffe259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe260: /* ffe260: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe263: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* ffe266: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe26b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe26d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe26f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe272: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe274: push 0x100a4e4 */
  { uint32_t v = 0x100a4e4u; esp -= 4; W32(esp, v); }
/* ffe279: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe27eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe27e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe281: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe282: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe285: jl 0xffe260 */
  if ((sf != of)) goto L_ffe260;
L_ffe287: /* ffe287: xor edi, edi */
  edi = 0;
/* ffe289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe290: /* ffe290: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe293: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* ffe296: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe29b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe29d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe29f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe2a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe2a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe2a4: push 0x100a4d4 */
  { uint32_t v = 0x100a4d4u; esp -= 4; W32(esp, v); }
/* ffe2a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe2aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe2ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe2b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe2b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe2b5: jl 0xffe290 */
  if ((sf != of)) goto L_ffe290;
L_ffe2b7: /* ffe2b7: xor edi, edi */
  edi = 0;
/* ffe2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe2c0: /* ffe2c0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe2c3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ffe2c6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe2cf: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe2d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe2d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe2d4: push 0x100a4c4 */
  { uint32_t v = 0x100a4c4u; esp -= 4; W32(esp, v); }
/* ffe2d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe2deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe2de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe2e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe2e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe2e5: jl 0xffe2c0 */
  if ((sf != of)) goto L_ffe2c0;
L_ffe2e7: /* ffe2e7: xor edi, edi */
  edi = 0;
/* ffe2e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe2f0: /* ffe2f0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe2f3: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* ffe2f6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe2f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe2ff: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe302: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe304: push 0x100a4b4 */
  { uint32_t v = 0x100a4b4u; esp -= 4; W32(esp, v); }
/* ffe309: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe30eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe30e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe311: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe312: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe315: jl 0xffe2f0 */
  if ((sf != of)) goto L_ffe2f0;
L_ffe317: /* ffe317: xor edi, edi */
  edi = 0;
/* ffe319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe320: /* ffe320: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe323: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* ffe326: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe329: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe32b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe32d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe32f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe332: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe334: push 0x100a4a4 */
  { uint32_t v = 0x100a4a4u; esp -= 4; W32(esp, v); }
/* ffe339: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe33eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe33e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe341: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe342: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe345: jl 0xffe320 */
  if ((sf != of)) goto L_ffe320;
L_ffe347: /* ffe347: xor edi, edi */
  edi = 0;
/* ffe349: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe350: /* ffe350: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe353: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* ffe356: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe35b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe35d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe35f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe362: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe363: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe364: push 0x100a494 */
  { uint32_t v = 0x100a494u; esp -= 4; W32(esp, v); }
/* ffe369: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe36eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe36e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe371: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe372: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe375: jl 0xffe350 */
  if ((sf != of)) goto L_ffe350;
L_ffe377: /* ffe377: xor edi, edi */
  edi = 0;
/* ffe379: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe380: /* ffe380: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe383: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* ffe386: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe389: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe38b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe38d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe38f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe392: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe393: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe394: push 0x100a484 */
  { uint32_t v = 0x100a484u; esp -= 4; W32(esp, v); }
/* ffe399: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe39eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe39e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe3a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe3a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe3a5: jl 0xffe380 */
  if ((sf != of)) goto L_ffe380;
L_ffe3a7: /* ffe3a7: xor edi, edi */
  edi = 0;
/* ffe3a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe3b0: /* ffe3b0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe3b3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* ffe3b6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe3b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe3bf: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe3c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe3c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe3c4: push 0x100a474 */
  { uint32_t v = 0x100a474u; esp -= 4; W32(esp, v); }
/* ffe3c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe3ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe3ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe3d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe3d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe3d5: jl 0xffe3b0 */
  if ((sf != of)) goto L_ffe3b0;
L_ffe3d7: /* ffe3d7: xor edi, edi */
  edi = 0;
/* ffe3d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe3e0: /* ffe3e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe3e3: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* ffe3e6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe3e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe3ef: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe3f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe3f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe3f4: push 0x100a464 */
  { uint32_t v = 0x100a464u; esp -= 4; W32(esp, v); }
/* ffe3f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe3feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe3fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe401: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe402: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe405: jl 0xffe3e0 */
  if ((sf != of)) goto L_ffe3e0;
L_ffe407: /* ffe407: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* ffe40d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffe40f: je 0xffe5aa */
  if (zf) goto L_ffe5aa;
L_ffe415: /* ffe415: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe418: xor esi, esi */
  esi = 0;
/* ffe41a: add eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe41f: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ffe423: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe427: jmp 0xffe430 */
  goto L_ffe430;
L_ffe430: /* ffe430: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ffe434: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe43c: mov edx, 0xc */
  edx = 0xcu;
L_ffe441: /* ffe441: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe444: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe447: mov edi, dword ptr [eax + edx - 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff4u));
/* ffe44b: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe44e: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* ffe451: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe453: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe456: jp 0xffe45e */
  if (pf) goto L_ffe45e;
L_ffe458: /* ffe458: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* ffe45b: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe45e: /* ffe45e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe461: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe464: mov edi, dword ptr [eax + edx - 8] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff8u));
/* ffe468: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe46b: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ffe46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe46f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe472: jp 0xffe479 */
  if (pf) goto L_ffe479;
L_ffe474: /* ffe474: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ffe476: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe479: /* ffe479: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe47c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe47f: mov edi, dword ptr [eax + edx - 4] */
  edi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffe483: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe486: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* ffe489: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe48b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe48e: jp 0xffe496 */
  if (pf) goto L_ffe496;
L_ffe490: /* ffe490: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffe493: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe496: /* ffe496: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe499: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe49c: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* ffe49f: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4a2: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* ffe4a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4aa: jp 0xffe4b2 */
  if (pf) goto L_ffe4b2;
L_ffe4ac: /* ffe4ac: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* ffe4af: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4b2: /* ffe4b2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4b5: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4b8: mov edi, dword ptr [eax + edx + 4] */
  edi = R32((uint32_t)(eax + edx + 0x4u));
/* ffe4bc: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4bf: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* ffe4c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4c7: jp 0xffe4cf */
  if (pf) goto L_ffe4cf;
L_ffe4c9: /* ffe4c9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* ffe4cc: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4cf: /* ffe4cf: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4d2: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4d5: mov edi, dword ptr [eax + edx + 8] */
  edi = R32((uint32_t)(eax + edx + 0x8u));
/* ffe4d9: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4dc: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* ffe4df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4e4: jp 0xffe4ec */
  if (pf) goto L_ffe4ec;
L_ffe4e6: /* ffe4e6: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* ffe4e9: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4ec: /* ffe4ec: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4ef: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4f2: mov edi, dword ptr [eax + edx + 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xcu));
/* ffe4f6: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4f9: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* ffe4fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe501: jp 0xffe509 */
  if (pf) goto L_ffe509;
L_ffe503: /* ffe503: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* ffe506: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe509: /* ffe509: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe50c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe50f: mov edi, dword ptr [eax + edx + 0x10] */
  edi = R32((uint32_t)(eax + edx + 0x10u));
/* ffe513: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe516: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* ffe519: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe51b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe51e: jp 0xffe526 */
  if (pf) goto L_ffe526;
L_ffe520: /* ffe520: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* ffe523: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe526: /* ffe526: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe52a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe52d: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe530: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe533: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe536: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe53a: jl 0xffe441 */
  if ((sf != of)) goto L_ffe441;
L_ffe540: /* ffe540: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe543: jge 0xffe585 */
  if ((sf == of)) goto L_ffe585;
L_ffe545: /* ffe545: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe549: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe54b: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* ffe552: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe555: lea edx, [eax + edx*4 + 0x374] */
  edx = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe55c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe560: /* ffe560: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe563: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe566: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe569: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe56c: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ffe56e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe570: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe573: jp 0xffe57a */
  if (pf) goto L_ffe57a;
L_ffe575: /* ffe575: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffe577: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe57a: /* ffe57a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe57d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe580: cmp ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe583: jl 0xffe560 */
  if ((sf != of)) goto L_ffe560;
L_ffe585: /* ffe585: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* ffe589: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffe58d: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe590: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffe593: add ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe596: cmp esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe599: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* ffe59d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffe5a1: jl 0xffe430 */
  if ((sf != of)) goto L_ffe430;
L_ffe5a7: /* ffe5a7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe5aa: /* ffe5aa: xor edi, edi */
  edi = 0;
/* ffe5ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe5b0: /* ffe5b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffe5b5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5bc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5be: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5c3: push 0x100a458 */
  { uint32_t v = 0x100a458u; esp -= 4; W32(esp, v); }
/* ffe5c8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5cdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5cd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe5d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe5d1: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe5d4: jl 0xffe5b0 */
  if ((sf != of)) goto L_ffe5b0;
L_ffe5d6: /* ffe5d6: xor edi, edi */
  edi = 0;
/* ffe5d8: jmp 0xffe5e0 */
  goto L_ffe5e0;
L_ffe5e0: /* ffe5e0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5e3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffe5e6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5ef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5f4: push 0x100a44c */
  { uint32_t v = 0x100a44cu; esp -= 4; W32(esp, v); }
/* ffe5f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe601: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe602: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe605: jl 0xffe5e0 */
  if ((sf != of)) goto L_ffe5e0;
L_ffe607: /* ffe607: xor edi, edi */
  edi = 0;
/* ffe609: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe610: /* ffe610: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe613: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffe616: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe61f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe624: push 0x100a43c */
  { uint32_t v = 0x100a43cu; esp -= 4; W32(esp, v); }
/* ffe629: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe62eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe62e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe632: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe635: jl 0xffe610 */
  if ((sf != of)) goto L_ffe610;
L_ffe637: /* ffe637: xor edi, edi */
  edi = 0;
/* ffe639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe640: /* ffe640: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe643: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffe646: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe64f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe653: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe654: push 0x100a42c */
  { uint32_t v = 0x100a42cu; esp -= 4; W32(esp, v); }
/* ffe659: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe65eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe65e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe661: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe662: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe665: jl 0xffe640 */
  if ((sf != of)) goto L_ffe640;
L_ffe667: /* ffe667: xor edi, edi */
  edi = 0;
/* ffe669: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe670: /* ffe670: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe673: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffe676: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe679: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe67f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe683: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe684: push 0x100a41c */
  { uint32_t v = 0x100a41cu; esp -= 4; W32(esp, v); }
/* ffe689: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe68eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe68e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe691: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe692: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe695: jl 0xffe670 */
  if ((sf != of)) goto L_ffe670;
L_ffe697: /* ffe697: xor edi, edi */
  edi = 0;
/* ffe699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6a0: /* ffe6a0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6a3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffe6a6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6af: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6b4: push 0x100a40c */
  { uint32_t v = 0x100a40cu; esp -= 4; W32(esp, v); }
/* ffe6b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6c5: jl 0xffe6a0 */
  if ((sf != of)) goto L_ffe6a0;
L_ffe6c7: /* ffe6c7: xor edi, edi */
  edi = 0;
/* ffe6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6d0: /* ffe6d0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6d3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffe6d6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6df: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6e4: push 0x100a3fc */
  { uint32_t v = 0x100a3fcu; esp -= 4; W32(esp, v); }
/* ffe6e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6f5: jl 0xffe6d0 */
  if ((sf != of)) goto L_ffe6d0;
L_ffe6f7: /* ffe6f7: xor edi, edi */
  edi = 0;
/* ffe6f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe700: /* ffe700: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe703: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffe706: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe70f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe713: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe714: push 0x100a3ec */
  { uint32_t v = 0x100a3ecu; esp -= 4; W32(esp, v); }
/* ffe719: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe71eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe71e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe721: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe722: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe725: jl 0xffe700 */
  if ((sf != of)) goto L_ffe700;
L_ffe727: /* ffe727: xor edi, edi */
  edi = 0;
/* ffe729: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe730: /* ffe730: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe733: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffe736: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe739: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe73f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe744: push 0x100a3e0 */
  { uint32_t v = 0x100a3e0u; esp -= 4; W32(esp, v); }
/* ffe749: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe74eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe74e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe751: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe752: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe755: jl 0xffe730 */
  if ((sf != of)) goto L_ffe730;
L_ffe757: /* ffe757: xor edi, edi */
  edi = 0;
/* ffe759: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe760: /* ffe760: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe763: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffe766: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe76f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe773: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe774: push 0x100a3d0 */
  { uint32_t v = 0x100a3d0u; esp -= 4; W32(esp, v); }
/* ffe779: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe77eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe77e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe781: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe782: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe785: jl 0xffe760 */
  if ((sf != of)) goto L_ffe760;
L_ffe787: /* ffe787: xor edi, edi */
  edi = 0;
/* ffe789: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe790: /* ffe790: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe793: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffe796: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe79f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7a4: push 0x100a3c4 */
  { uint32_t v = 0x100a3c4u; esp -= 4; W32(esp, v); }
/* ffe7a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7b5: jl 0xffe790 */
  if ((sf != of)) goto L_ffe790;
L_ffe7b7: /* ffe7b7: xor edi, edi */
  edi = 0;
/* ffe7b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7c0: /* ffe7c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7c3: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffe7c6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7cf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7d4: push 0x100a3b4 */
  { uint32_t v = 0x100a3b4u; esp -= 4; W32(esp, v); }
/* ffe7d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7e5: jl 0xffe7c0 */
  if ((sf != of)) goto L_ffe7c0;
L_ffe7e7: /* ffe7e7: xor edi, edi */
  edi = 0;
/* ffe7e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7f0: /* ffe7f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7f3: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffe7f6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7ff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe804: push 0x100a3a8 */
  { uint32_t v = 0x100a3a8u; esp -= 4; W32(esp, v); }
/* ffe809: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe80eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe80e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe811: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe812: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe815: jl 0xffe7f0 */
  if ((sf != of)) goto L_ffe7f0;
L_ffe817: /* ffe817: xor edi, edi */
  edi = 0;
/* ffe819: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe820: /* ffe820: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe823: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffe826: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe829: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe82f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe833: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe834: push 0x100a398 */
  { uint32_t v = 0x100a398u; esp -= 4; W32(esp, v); }
/* ffe839: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe83eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe83e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe841: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe842: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe845: jl 0xffe820 */
  if ((sf != of)) goto L_ffe820;
L_ffe847: /* ffe847: xor edi, edi */
  edi = 0;
/* ffe849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe850: /* ffe850: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe853: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffe856: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe859: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe85f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe863: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe864: push 0x100a38c */
  { uint32_t v = 0x100a38cu; esp -= 4; W32(esp, v); }
/* ffe869: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe86eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe86e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe871: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe872: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe875: jl 0xffe850 */
  if ((sf != of)) goto L_ffe850;
L_ffe877: /* ffe877: xor edi, edi */
  edi = 0;
/* ffe879: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe880: /* ffe880: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe883: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffe886: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe88f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe894: push 0x100a37c */
  { uint32_t v = 0x100a37cu; esp -= 4; W32(esp, v); }
/* ffe899: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe89eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe89e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8a5: jl 0xffe880 */
  if ((sf != of)) goto L_ffe880;
L_ffe8a7: /* ffe8a7: xor edi, edi */
  edi = 0;
/* ffe8a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8b0: /* ffe8b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe8b3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffe8b6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe8b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe8bf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe8c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe8c4: push 0x100a36c */
  { uint32_t v = 0x100a36cu; esp -= 4; W32(esp, v); }
/* ffe8c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe8ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe8ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8d5: jl 0xffe8b0 */
  if ((sf != of)) goto L_ffe8b0;
L_ffe8d7: /* ffe8d7: xor edx, edx */
  edx = 0;
/* ffe8d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8e0: /* ffe8e0: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe8e8: mov ecx, 0xc */
  ecx = 0xcu;
L_ffe8ed: /* ffe8ed: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe8f0: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe8f3: mov edi, dword ptr [eax + ecx - 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff4u));
/* ffe8f7: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe8fa: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe8fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe8ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe902: jp 0xffe90a */
  if (pf) goto L_ffe90a;
L_ffe904: /* ffe904: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe907: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe90a: /* ffe90a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe90d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe910: mov edi, dword ptr [eax + ecx - 8] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff8u));
/* ffe914: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe917: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe91a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe91c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe91f: jp 0xffe927 */
  if (pf) goto L_ffe927;
L_ffe921: /* ffe921: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe924: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe927: /* ffe927: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe92a: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe92d: mov edi, dword ptr [eax + ecx - 4] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* ffe931: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe934: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe937: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe939: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe93c: jp 0xffe944 */
  if (pf) goto L_ffe944;
L_ffe93e: /* ffe93e: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe941: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe944: /* ffe944: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe947: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe94a: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe94d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe950: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe953: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe955: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe958: jp 0xffe960 */
  if (pf) goto L_ffe960;
L_ffe95a: /* ffe95a: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe95d: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe960: /* ffe960: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe963: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe966: mov edi, dword ptr [eax + ecx + 4] */
  edi = R32((uint32_t)(eax + ecx + 0x4u));
/* ffe96a: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe96d: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe970: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe972: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe975: jp 0xffe97d */
  if (pf) goto L_ffe97d;
L_ffe977: /* ffe977: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe97a: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe97d: /* ffe97d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe980: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe983: mov edi, dword ptr [eax + ecx + 8] */
  edi = R32((uint32_t)(eax + ecx + 0x8u));
/* ffe987: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe98a: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe98d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe98f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe992: jp 0xffe99a */
  if (pf) goto L_ffe99a;
L_ffe994: /* ffe994: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe997: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe99a: /* ffe99a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe99d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9a0: mov edi, dword ptr [eax + ecx + 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xcu));
/* ffe9a4: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9a7: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9af: jp 0xffe9b7 */
  if (pf) goto L_ffe9b7;
L_ffe9b1: /* ffe9b1: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9b4: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9b7: /* ffe9b7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe9ba: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9bd: mov edi, dword ptr [eax + ecx + 0x10] */
  edi = R32((uint32_t)(eax + ecx + 0x10u));
/* ffe9c1: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9c4: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9cc: jp 0xffe9d4 */
  if (pf) goto L_ffe9d4;
L_ffe9ce: /* ffe9ce: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9d1: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9d4: /* ffe9d4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe9d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe9db: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe9de: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9e1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe9e5: jl 0xffe8ed */
  if ((sf != of)) goto L_ffe8ed;
L_ffe9eb: /* ffe9eb: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9ee: jge 0xffea19 */
  if ((sf == of)) goto L_ffea19;
L_ffe9f0: /* ffe9f0: mov edi, eax */
  edi = eax;
/* ffe9f2: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_ffe9f5: /* ffe9f5: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe9f8: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* ffe9fb: mov ecx, dword ptr [eax + edi] */
  ecx = R32((uint32_t)(eax + edi));
/* ffe9fe: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* ffea01: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffea04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffea06: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffea09: jp 0xffea11 */
  if (pf) goto L_ffea11;
L_ffea0b: /* ffea0b: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffea0e: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
L_ffea11: /* ffea11: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffea14: cmp edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea17: jl 0xffe9f5 */
  if ((sf != of)) goto L_ffe9f5;
L_ffea19: /* ffea19: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffea1c: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea1f: jl 0xffe8e0 */
  if ((sf != of)) goto L_ffe8e0;
L_ffea25: /* ffea25: xor esi, esi */
  esi = 0;
L_ffea27: /* ffea27: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffea2c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea33: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea35: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea3a: push 0x100a360 */
  { uint32_t v = 0x100a360u; esp -= 4; W32(esp, v); }
/* ffea3f: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea44u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea44: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea48: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea4b: jl 0xffea27 */
  if ((sf != of)) goto L_ffea27;
L_ffea4d: /* ffea4d: xor esi, esi */
  esi = 0;
/* ffea4f: nop  */
L_ffea50: /* ffea50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea53: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffea56: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea64: push 0x100a354 */
  { uint32_t v = 0x100a354u; esp -= 4; W32(esp, v); }
/* ffea69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea71: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea72: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea75: jl 0xffea50 */
  if ((sf != of)) goto L_ffea50;
L_ffea77: /* ffea77: xor esi, esi */
  esi = 0;
/* ffea79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffea80: /* ffea80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea83: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffea86: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea94: push 0x100a344 */
  { uint32_t v = 0x100a344u; esp -= 4; W32(esp, v); }
/* ffea99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeaa1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeaa2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeaa5: jl 0xffea80 */
  if ((sf != of)) goto L_ffea80;
L_ffeaa7: /* ffeaa7: xor esi, esi */
  esi = 0;
/* ffeaa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeab0: /* ffeab0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeab3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffeab6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeab9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeabf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeac3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeac4: push 0x100a334 */
  { uint32_t v = 0x100a334u; esp -= 4; W32(esp, v); }
/* ffeac9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeaceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeace: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffead1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffead2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffead5: jl 0xffeab0 */
  if ((sf != of)) goto L_ffeab0;
L_ffead7: /* ffead7: xor esi, esi */
  esi = 0;
/* ffead9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeae0: /* ffeae0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeae3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffeae6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeaef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeaf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeaf4: push 0x100a324 */
  { uint32_t v = 0x100a324u; esp -= 4; W32(esp, v); }
/* ffeaf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeafeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeafe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb01: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb02: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb05: jl 0xffeae0 */
  if ((sf != of)) goto L_ffeae0;
L_ffeb07: /* ffeb07: xor esi, esi */
  esi = 0;
/* ffeb09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb10: /* ffeb10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb13: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffeb16: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb24: push 0x100a314 */
  { uint32_t v = 0x100a314u; esp -= 4; W32(esp, v); }
/* ffeb29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb32: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb35: jl 0xffeb10 */
  if ((sf != of)) goto L_ffeb10;
L_ffeb37: /* ffeb37: xor esi, esi */
  esi = 0;
/* ffeb39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb40: /* ffeb40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb43: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffeb46: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb54: push 0x100a304 */
  { uint32_t v = 0x100a304u; esp -= 4; W32(esp, v); }
/* ffeb59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb62: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb65: jl 0xffeb40 */
  if ((sf != of)) goto L_ffeb40;
L_ffeb67: /* ffeb67: xor esi, esi */
  esi = 0;
/* ffeb69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb70: /* ffeb70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb73: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffeb76: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb84: push 0x100a2f4 */
  { uint32_t v = 0x100a2f4u; esp -= 4; W32(esp, v); }
/* ffeb89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb92: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb95: jl 0xffeb70 */
  if ((sf != of)) goto L_ffeb70;
L_ffeb97: /* ffeb97: xor esi, esi */
  esi = 0;
/* ffeb99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeba0: /* ffeba0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeba3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffeba6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebb4: push 0x100a2e8 */
  { uint32_t v = 0x100a2e8u; esp -= 4; W32(esp, v); }
/* ffebb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebbeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebbe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebc1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebc2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebc5: jl 0xffeba0 */
  if ((sf != of)) goto L_ffeba0;
L_ffebc7: /* ffebc7: xor esi, esi */
  esi = 0;
/* ffebc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffebd0: /* ffebd0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffebd3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffebd6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffebd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebdf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebe4: push 0x100a2d8 */
  { uint32_t v = 0x100a2d8u; esp -= 4; W32(esp, v); }
/* ffebe9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebf1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebf2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebf5: jl 0xffebd0 */
  if ((sf != of)) goto L_ffebd0;
L_ffebf7: /* ffebf7: xor esi, esi */
  esi = 0;
/* ffebf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec00: /* ffec00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec03: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffec06: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec14: push 0x100a2cc */
  { uint32_t v = 0x100a2ccu; esp -= 4; W32(esp, v); }
/* ffec19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec21: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec22: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec25: jl 0xffec00 */
  if ((sf != of)) goto L_ffec00;
L_ffec27: /* ffec27: xor esi, esi */
  esi = 0;
/* ffec29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec30: /* ffec30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec33: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffec36: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec44: push 0x100a2bc */
  { uint32_t v = 0x100a2bcu; esp -= 4; W32(esp, v); }
/* ffec49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec51: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec52: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec55: jl 0xffec30 */
  if ((sf != of)) goto L_ffec30;
L_ffec57: /* ffec57: xor esi, esi */
  esi = 0;
/* ffec59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec60: /* ffec60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec63: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffec66: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec74: push 0x100a2b0 */
  { uint32_t v = 0x100a2b0u; esp -= 4; W32(esp, v); }
/* ffec79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec81: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec82: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec85: jl 0xffec60 */
  if ((sf != of)) goto L_ffec60;
L_ffec87: /* ffec87: xor esi, esi */
  esi = 0;
/* ffec89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec90: /* ffec90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec93: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffec96: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeca4: push 0x100a2a0 */
  { uint32_t v = 0x100a2a0u; esp -= 4; W32(esp, v); }
/* ffeca9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffecb1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffecb2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffecb5: jl 0xffec90 */
  if ((sf != of)) goto L_ffec90;
L_ffecb7: /* ffecb7: xor esi, esi */
  esi = 0;
/* ffecb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecc0: /* ffecc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecc3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffecc6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeccf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffecd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffecd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffecd4: push 0x100a294 */
  { uint32_t v = 0x100a294u; esp -= 4; W32(esp, v); }
/* ffecd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffece1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffece2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffece5: jl 0xffecc0 */
  if ((sf != of)) goto L_ffecc0;
L_ffece7: /* ffece7: xor esi, esi */
  esi = 0;
/* ffece9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecf0: /* ffecf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecf3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffecf6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffecff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed04: push 0x100a284 */
  { uint32_t v = 0x100a284u; esp -= 4; W32(esp, v); }
/* ffed09: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed0eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed0e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed12: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed15: jl 0xffecf0 */
  if ((sf != of)) goto L_ffecf0;
L_ffed17: /* ffed17: xor esi, esi */
  esi = 0;
/* ffed19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffed20: /* ffed20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffed23: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffed26: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffed29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffed2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed34: push 0x100a274 */
  { uint32_t v = 0x100a274u; esp -= 4; W32(esp, v); }
/* ffed39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed41: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed42: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed45: jl 0xffed20 */
  if ((sf != of)) goto L_ffed20;
L_ffed47: /* ffed47: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ffed4a: xor esi, esi */
  esi = 0;
/* ffed4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffed4e: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffed52: jle 0xffee3e */
  if ((zf || sf != of)) goto L_ffee3e;
L_ffed58: /* ffed58: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* ffed5b: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ffed5f: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* ffed62: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffed66: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffed6a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffed6c: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
L_ffed70: /* ffed70: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffed74: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffed77: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ffed7b: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ffed7f: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffed85: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ffed89: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ffed8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffed90: call 0x1009172 */
  esp -= 4; W32(esp, 0xffed95u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffed95: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffed9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed9e: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffeda4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffeda6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffedaa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedae: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffedb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedb6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffedb9: jp 0xffedc5 */
  if (pf) goto L_ffedc5;
L_ffedbb: /* ffedbb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ffedc3: jmp 0xffedde */
  goto L_ffedde;
L_ffedc5: /* ffedc5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedc9: fcomp dword ptr [0x100a270] */
  fpu_com(ST0, F32((uint32_t)(0x100a270u)));
  FPOP();
/* ffedcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedd1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffedd4: jne 0xffedde */
  if (!zf) goto L_ffedde;
L_ffedd6: /* ffedd6: mov dword ptr [esp + 0x10], 0x41800000 */
  W32((uint32_t)(esp + 0x10u), 0x41800000u);
L_ffedde: /* ffedde: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffede2: call 0x1009188 */
  esp -= 4; W32(esp, 0xffede7u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffede7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ffedea: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ffedee: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffedf2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffedf3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffedf5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffedf9: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffedfd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffee01: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* ffee05: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* ffee09: fld dword ptr [ecx + eax*4 + 0x67c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x67cu)); FPUSH(v); }
/* ffee10: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee14: fsubr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) - ST0;
/* ffee1a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ffee1c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee20: fmul dword ptr [ecx + eax*4 + 0x680] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4 + 0x680u)));
/* ffee27: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffee2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffee2c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffee30: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffee34: fstp dword ptr [ecx + esi*4 - 4] */
  WF32((uint32_t)(ecx + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ffee38: jl 0xffed70 */
  if ((sf != of)) goto L_ffed70;
L_ffee3e: /* ffee3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee40: mov esi, 1 */
  esi = 0x1u;
/* ffee45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee46: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee4c: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ffee4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffee51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee53: push 0x100a264 */
  { uint32_t v = 0x100a264u; esp -= 4; W32(esp, v); }
/* ffee58: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee5du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee5d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ffee60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffee65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee67: push 0x100a258 */
  { uint32_t v = 0x100a258u; esp -= 4; W32(esp, v); }
/* ffee6c: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee71u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee71: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffee74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffee75: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffee7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffee7d: mov esp, ebp */
  esp = ebp;
/* ffee7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffee80: ret  */
  esp += 4; SPILL(); return;
}
