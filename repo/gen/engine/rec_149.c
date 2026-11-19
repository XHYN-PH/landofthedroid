#include "recomp.h"
#include "rec_mod.h"

void f_990c00(void) {
  LOAD_REGS();
L_990c00: /* 990c00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 990c01: mov ebp, esp */
  ebp = esp;
/* 990c03: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 990c06: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 990c0c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 990c0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 990c10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 990c11: mov esi, eax */
  esi = eax;
/* 990c13: xor eax, eax */
  eax = 0;
/* 990c15: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990c17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 990c18: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 990c1c: jle 0x990ccc */
  if ((zf || sf != of)) goto L_990ccc;
L_990c22: /* 990c22: mov ecx, 0xcf3548 */
  ecx = 0xcf3548u;
L_990c27: /* 990c27: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 990c2a: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990c2d: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 990c30: mov ebx, dword ptr [ebx + edi*8] */
  ebx = R32((uint32_t)(ebx + edi*8));
/* 990c33: mov dword ptr [ecx - 8], ebx */
  W32((uint32_t)(ecx + 0xfffffff8u), ebx);
/* 990c36: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990c39: mov edi, dword ptr [ebx + edi*8 + 4] */
  edi = R32((uint32_t)(ebx + edi*8 + 0x4u));
/* 990c3d: mov dword ptr [ecx - 4], edi */
  W32((uint32_t)(ecx + 0xfffffffcu), edi);
/* 990c40: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 990c43: mov ebx, dword ptr [esi + edi*8] */
  ebx = R32((uint32_t)(esi + edi*8));
/* 990c46: mov dword ptr [eax*8 + 0xcf34c0], ebx */
  W32((uint32_t)(eax*8 + 0xcf34c0u), ebx);
/* 990c4d: mov edi, dword ptr [esi + edi*8 + 4] */
  edi = R32((uint32_t)(esi + edi*8 + 0x4u));
/* 990c51: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990c54: mov dword ptr [eax*8 + 0xcf34c4], edi */
  W32((uint32_t)(eax*8 + 0xcf34c4u), edi);
/* 990c5b: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 990c5e: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 990c61: mov ebx, dword ptr [ebx + edi*8 + 8] */
  ebx = R32((uint32_t)(ebx + edi*8 + 0x8u));
/* 990c65: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 990c67: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990c6a: mov edi, dword ptr [ebx + edi*8 + 0xc] */
  edi = R32((uint32_t)(ebx + edi*8 + 0xcu));
/* 990c6e: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 990c71: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 990c74: mov ebx, dword ptr [esi + edi*8] */
  ebx = R32((uint32_t)(esi + edi*8));
/* 990c77: mov dword ptr [eax*8 + 0xcf34c0], ebx */
  W32((uint32_t)(eax*8 + 0xcf34c0u), ebx);
/* 990c7e: mov edi, dword ptr [esi + edi*8 + 4] */
  edi = R32((uint32_t)(esi + edi*8 + 0x4u));
/* 990c82: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990c85: mov dword ptr [eax*8 + 0xcf34c4], edi */
  W32((uint32_t)(eax*8 + 0xcf34c4u), edi);
/* 990c8c: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 990c8f: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 990c92: mov ebx, dword ptr [ebx + edi*8 + 0x10] */
  ebx = R32((uint32_t)(ebx + edi*8 + 0x10u));
/* 990c96: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 990c99: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990c9c: mov edi, dword ptr [ebx + edi*8 + 0x14] */
  edi = R32((uint32_t)(ebx + edi*8 + 0x14u));
/* 990ca0: mov dword ptr [ecx + 0xc], edi */
  W32((uint32_t)(ecx + 0xcu), edi);
/* 990ca3: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 990ca6: mov ebx, dword ptr [esi + edi*8] */
  ebx = R32((uint32_t)(esi + edi*8));
/* 990ca9: mov dword ptr [eax*8 + 0xcf34c0], ebx */
  W32((uint32_t)(eax*8 + 0xcf34c0u), ebx);
/* 990cb0: mov edi, dword ptr [esi + edi*8 + 4] */
  edi = R32((uint32_t)(esi + edi*8 + 0x4u));
/* 990cb4: mov dword ptr [eax*8 + 0xcf34c4], edi */
  W32((uint32_t)(eax*8 + 0xcf34c4u), edi);
/* 990cbb: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 990cbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 990cbf: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 990cc2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990cc4: jl 0x990c27 */
  if ((sf != of)) goto L_990c27;
L_990cca: /* 990cca: mov ecx, edi */
  ecx = edi;
L_990ccc: /* 990ccc: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 990ccf: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 990cd2: lea esi, [eax*8 + 0xcf3548] */
  esi = (uint32_t)(eax*8 + 0xcf3548u);
/* 990cd9: mov ebx, ecx */
  ebx = ecx;
/* 990cdb: mov dword ptr [0xcf34a8], 0 */
  W32((uint32_t)(0xcf34a8u), 0x0u);
/* 990ce5: mov dword ptr [0xcf34ac], 0 */
  W32((uint32_t)(0xcf34acu), 0x0u);
/* 990cef: mov dword ptr [0xcf3490], 0 */
  W32((uint32_t)(0xcf3490u), 0x0u);
/* 990cf9: mov dword ptr [0xcf3494], 0 */
  W32((uint32_t)(0xcf3494u), 0x0u);
/* 990d03: mov dword ptr [0xcf3458], 0 */
  W32((uint32_t)(0xcf3458u), 0x0u);
/* 990d0d: mov dword ptr [0xcf345c], 0 */
  W32((uint32_t)(0xcf345cu), 0x0u);
/* 990d17: mov dword ptr [0xcf3450], 0 */
  W32((uint32_t)(0xcf3450u), 0x0u);
/* 990d21: mov dword ptr [0xcf3454], 0 */
  W32((uint32_t)(0xcf3454u), 0x0u);
/* 990d2b: mov dword ptr [0xcf3448], 0 */
  W32((uint32_t)(0xcf3448u), 0x0u);
/* 990d35: mov dword ptr [0xcf344c], 0 */
  W32((uint32_t)(0xcf344cu), 0x0u);
/* 990d3f: mov dword ptr [0xcf34b0], 0 */
  W32((uint32_t)(0xcf34b0u), 0x0u);
/* 990d49: mov dword ptr [0xcf34b4], 0 */
  W32((uint32_t)(0xcf34b4u), 0x0u);
/* 990d53: mov dword ptr [0xcf3498], 0 */
  W32((uint32_t)(0xcf3498u), 0x0u);
/* 990d5d: mov dword ptr [0xcf349c], 0 */
  W32((uint32_t)(0xcf349cu), 0x0u);
/* 990d67: mov dword ptr [0xcf3470], 0 */
  W32((uint32_t)(0xcf3470u), 0x0u);
/* 990d71: mov dword ptr [0xcf3474], 0 */
  W32((uint32_t)(0xcf3474u), 0x0u);
/* 990d7b: mov dword ptr [0xcf3468], 0 */
  W32((uint32_t)(0xcf3468u), 0x0u);
/* 990d85: mov dword ptr [0xcf346c], 0 */
  W32((uint32_t)(0xcf346cu), 0x0u);
/* 990d8f: mov dword ptr [0xcf3460], 0 */
  W32((uint32_t)(0xcf3460u), 0x0u);
/* 990d99: mov dword ptr [0xcf3464], 0 */
  W32((uint32_t)(0xcf3464u), 0x0u);
/* 990da3: mov dword ptr [0xcf34b8], 0 */
  W32((uint32_t)(0xcf34b8u), 0x0u);
/* 990dad: mov dword ptr [0xcf34bc], 0 */
  W32((uint32_t)(0xcf34bcu), 0x0u);
/* 990db7: mov dword ptr [0xcf34a0], 0 */
  W32((uint32_t)(0xcf34a0u), 0x0u);
/* 990dc1: mov dword ptr [0xcf34a4], 0 */
  W32((uint32_t)(0xcf34a4u), 0x0u);
/* 990dcb: mov dword ptr [0xcf3488], 0 */
  W32((uint32_t)(0xcf3488u), 0x0u);
/* 990dd5: mov dword ptr [0xcf348c], 0 */
  W32((uint32_t)(0xcf348cu), 0x0u);
/* 990ddf: mov dword ptr [0xcf3480], 0 */
  W32((uint32_t)(0xcf3480u), 0x0u);
/* 990de9: mov dword ptr [0xcf3484], 0 */
  W32((uint32_t)(0xcf3484u), 0x0u);
/* 990df3: mov dword ptr [0xcf3478], 0 */
  W32((uint32_t)(0xcf3478u), 0x0u);
/* 990dfd: mov dword ptr [0xcf347c], 0 */
  W32((uint32_t)(0xcf347cu), 0x0u);
/* 990e07: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 990e0b: sub edi, 0xcf3478 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcf3478u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 990e11: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 990e15: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 990e19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_990e20: /* 990e20: mov edx, ecx */
  edx = ecx;
/* 990e22: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 990e26: jmp 0x990e30 */
  goto L_990e30;
L_990e30: /* 990e30: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 990e36: mov eax, 0xcf3478 */
  eax = 0xcf3478u;
/* 990e3b: fchs  */
  ST0 = -ST0;
/* 990e3d: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 990e41: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990e45: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 990e4b: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 990e4d: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 990e51: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 990e55: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 990e59: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 990e5f: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 990e63: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 990e67: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 990e6b: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 990e71: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 990e75: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 990e79: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 990e7d: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 990e83: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 990e8a: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 990e8e: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 990e92: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990e94: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990e96: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 990e9c: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990ea0: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990ea4: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 990ea8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990eaa: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
L_990eb0: /* 990eb0: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990eb6: fmul qword ptr [edi + eax] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax)));
/* 990eb9: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990ebf: fmul qword ptr [edi + eax + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax + 0x18u)));
/* 990ec3: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 990ec7: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 990ec9: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 990ecd: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 990ecf: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 990ed3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 990ed5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990ed7: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990edb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 990edd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990edf: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 990ee3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990ee5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990ee7: fsub qword ptr [esp + 0x48] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x48u)));
/* 990eeb: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 990eef: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 990ef3: fsub qword ptr [esp + 0x48] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x48u)));
/* 990ef7: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 990efb: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 990eff: fabs  */
  ST0 = fabs(ST0);
/* 990f01: fsubr qword ptr [esp + 0x38] */
  ST0 = (F64((uint32_t)(esp + 0x38u))) - ST0;
/* 990f05: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990f09: fabs  */
  ST0 = fabs(ST0);
/* 990f0b: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 990f0f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990f11: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 990f17: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 990f1b: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990f1f: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990f23: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990f27: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 990f2b: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990f2f: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 990f33: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 990f35: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990f37: fabs  */
  ST0 = fabs(ST0);
/* 990f39: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 990f3b: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 990f3f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990f41: fabs  */
  ST0 = fabs(ST0);
/* 990f43: fadd qword ptr [esp + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x70u)));
/* 990f47: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 990f49: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f4b: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 990f51: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f53: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990f55: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 990f59: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990f5b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f5d: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 990f64: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 990f68: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 990f6c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990f6e: fabs  */
  ST0 = fabs(ST0);
/* 990f70: fsubr qword ptr [esp + 0x38] */
  ST0 = (F64((uint32_t)(esp + 0x38u))) - ST0;
/* 990f74: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990f78: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 990f7a: fabs  */
  ST0 = fabs(ST0);
/* 990f7c: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 990f80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990f82: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 990f88: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f8a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990f8c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 990f8f: cmp eax, 0xcf3490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3490u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990f94: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 990f98: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 990f9a: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990f9e: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 990fa2: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 990fa6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990fa8: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 990fac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990fae: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 990fb1: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990fb7: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990fbb: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990fbf: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 990fc1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 990fc3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990fc5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 990fc7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 990fc9: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 990fcd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990fcf: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 990fd1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990fd3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990fd5: jl 0x990eb0 */
  if ((sf != of)) goto L_990eb0;
L_990fdb: /* 990fdb: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990fe1: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 990fe5: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 990fe9: fld qword ptr [0xcf3440] */
  { double v = F64((uint32_t)(0xcf3440u)); FPUSH(v); }
/* 990fef: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 990ff3: fld qword ptr [0xb04378] */
  { double v = F64((uint32_t)(0xb04378u)); FPUSH(v); }
/* 990ff9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 990ffb: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 990ffd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 990fff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 991002: jp 0x991038 */
  if (pf) goto L_991038;
L_991004: /* 991004: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 991008: fstp qword ptr [0xcf3440] */
  WF64((uint32_t)(0xcf3440u), ST0); FPOP();
/* 99100e: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 991012: mov dword ptr [0xb0437c], ebx */
  W32((uint32_t)(0xb0437cu), ebx);
/* 991018: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 99101c: mov dword ptr [0xb04378], eax */
  W32((uint32_t)(0xb04378u), eax);
/* 991021: mov dword ptr [esp + 0x88], ebx */
  W32((uint32_t)(esp + 0x88u), ebx);
/* 991028: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 99102f: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 991036: jmp 0x99103a */
  goto L_99103a;
L_991038: /* 991038: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99103a: /* 99103a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99103b: sub esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 99103e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991040: jl 0x9910be */
  if ((sf != of)) goto L_9910be;
L_991042: /* 991042: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 991045: cmp dword ptr [eax], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991048: jl 0x9910be */
  if ((sf != of)) goto L_9910be;
L_99104a: /* 99104a: fld qword ptr [0xcf3478] */
  { double v = F64((uint32_t)(0xcf3478u)); FPUSH(v); }
/* 991050: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 991058: fadd qword ptr [esi - 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0xfffffff8u)));
/* 99105b: fstp qword ptr [0xcf3478] */
  WF64((uint32_t)(0xcf3478u), ST0); FPOP();
/* 991061: fld qword ptr [0xcf3480] */
  { double v = F64((uint32_t)(0xcf3480u)); FPUSH(v); }
/* 991067: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 991069: fstp qword ptr [0xcf3480] */
  WF64((uint32_t)(0xcf3480u), ST0); FPOP();
/* 99106f: fld qword ptr [0xcf3488] */
  { double v = F64((uint32_t)(0xcf3488u)); FPUSH(v); }
/* 991075: fadd qword ptr [esi + 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x8u)));
/* 991078: fstp qword ptr [0xcf3488] */
  WF64((uint32_t)(0xcf3488u), ST0); FPOP();
/* 99107e: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 991084: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 991086: fsubr qword ptr [0xa110e0] */
  ST0 = (F64((uint32_t)(0xa110e0u))) - ST0;
/* 99108c: fsub qword ptr [ecx*8 + 0xcf34c0] */
  ST0 = ST0 - (F64((uint32_t)(ecx*8 + 0xcf34c0u)));
/* 991093: fmul qword ptr [ecx*8 + 0xcf34c0] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf34c0u)));
/* 99109a: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 9910a0: fstp qword ptr [0xcf34a0] */
  WF64((uint32_t)(0xcf34a0u), ST0); FPOP();
/* 9910a6: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 9910ac: fadd qword ptr [ecx*8 + 0xcf34c0] */
  ST0 = ST0 + (F64((uint32_t)(ecx*8 + 0xcf34c0u)));
/* 9910b3: fstp qword ptr [0xcf34b8] */
  WF64((uint32_t)(0xcf34b8u), ST0); FPOP();
/* 9910b9: jmp 0x990e30 */
  goto L_990e30;
L_9910be: /* 9910be: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9910c2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 9910c3: sub eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9910c6: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9910c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9910cc: jl 0x9911bf */
  if ((sf != of)) goto L_9911bf;
L_9910d2: /* 9910d2: fld qword ptr [0xcf3460] */
  { double v = F64((uint32_t)(0xcf3460u)); FPUSH(v); }
/* 9910d8: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 9910e0: fadd qword ptr [eax - 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xfffffff8u)));
/* 9910e3: fstp qword ptr [0xcf3460] */
  WF64((uint32_t)(0xcf3460u), ST0); FPOP();
/* 9910e9: mov ecx, dword ptr [0xcf3460] */
  ecx = R32((uint32_t)(0xcf3460u));
/* 9910ef: fld qword ptr [0xcf3468] */
  { double v = F64((uint32_t)(0xcf3468u)); FPUSH(v); }
/* 9910f5: mov esi, dword ptr [0xcf3464] */
  esi = R32((uint32_t)(0xcf3464u));
/* 9910fb: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 9910fd: mov dword ptr [0xcf3478], ecx */
  W32((uint32_t)(0xcf3478u), ecx);
/* 991103: mov dword ptr [0xcf347c], esi */
  W32((uint32_t)(0xcf347cu), esi);
/* 991109: fstp qword ptr [0xcf3468] */
  WF64((uint32_t)(0xcf3468u), ST0); FPOP();
/* 99110f: mov ecx, dword ptr [0xcf3468] */
  ecx = R32((uint32_t)(0xcf3468u));
/* 991115: fld qword ptr [0xcf3470] */
  { double v = F64((uint32_t)(0xcf3470u)); FPUSH(v); }
/* 99111b: mov esi, dword ptr [0xcf346c] */
  esi = R32((uint32_t)(0xcf346cu));
/* 991121: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 991124: mov dword ptr [0xcf3480], ecx */
  W32((uint32_t)(0xcf3480u), ecx);
/* 99112a: mov dword ptr [0xcf3484], esi */
  W32((uint32_t)(0xcf3484u), esi);
/* 991130: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 991134: fstp qword ptr [0xcf3470] */
  WF64((uint32_t)(0xcf3470u), ST0); FPOP();
/* 99113a: mov ecx, dword ptr [0xcf3474] */
  ecx = R32((uint32_t)(0xcf3474u));
/* 991140: fld qword ptr [0xcf34b0] */
  { double v = F64((uint32_t)(0xcf34b0u)); FPUSH(v); }
/* 991146: mov eax, dword ptr [0xcf3470] */
  eax = R32((uint32_t)(0xcf3470u));
/* 99114b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99114d: mov dword ptr [0xcf348c], ecx */
  W32((uint32_t)(0xcf348cu), ecx);
/* 991153: mov dword ptr [0xcf3488], eax */
  W32((uint32_t)(0xcf3488u), eax);
/* 991158: fsubr qword ptr [0xa16940] */
  ST0 = (F64((uint32_t)(0xa16940u))) - ST0;
/* 99115e: fsub qword ptr [edx*8 + 0xcf34c0] */
  ST0 = ST0 - (F64((uint32_t)(edx*8 + 0xcf34c0u)));
/* 991165: fmul qword ptr [edx*8 + 0xcf34c0] */
  ST0 = ST0 * (F64((uint32_t)(edx*8 + 0xcf34c0u)));
/* 99116c: fadd qword ptr [0xcf3498] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3498u)));
/* 991172: fstp qword ptr [0xcf3498] */
  WF64((uint32_t)(0xcf3498u), ST0); FPOP();
/* 991178: mov ecx, dword ptr [0xcf349c] */
  ecx = R32((uint32_t)(0xcf349cu));
/* 99117e: fld qword ptr [0xcf34b0] */
  { double v = F64((uint32_t)(0xcf34b0u)); FPUSH(v); }
/* 991184: mov eax, dword ptr [0xcf3498] */
  eax = R32((uint32_t)(0xcf3498u));
/* 991189: fadd qword ptr [edx*8 + 0xcf34c0] */
  ST0 = ST0 + (F64((uint32_t)(edx*8 + 0xcf34c0u)));
/* 991190: mov dword ptr [0xcf34a4], ecx */
  W32((uint32_t)(0xcf34a4u), ecx);
/* 991196: mov dword ptr [0xcf34a0], eax */
  W32((uint32_t)(0xcf34a0u), eax);
/* 99119b: fstp qword ptr [0xcf34b0] */
  WF64((uint32_t)(0xcf34b0u), ST0); FPOP();
/* 9911a1: mov ecx, dword ptr [0xcf34b4] */
  ecx = R32((uint32_t)(0xcf34b4u));
/* 9911a7: mov eax, dword ptr [0xcf34b0] */
  eax = R32((uint32_t)(0xcf34b0u));
/* 9911ac: mov dword ptr [0xcf34bc], ecx */
  W32((uint32_t)(0xcf34bcu), ecx);
/* 9911b2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9911b5: mov dword ptr [0xcf34b8], eax */
  W32((uint32_t)(0xcf34b8u), eax);
/* 9911ba: jmp 0x990e30 */
  goto L_990e30;
L_9911bf: /* 9911bf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9911c3: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 9911c4: sub eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9911c7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9911ca: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 9911ce: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9911d2: jl 0x99130d */
  if ((sf != of)) goto L_99130d;
L_9911d8: /* 9911d8: fld qword ptr [0xcf3448] */
  { double v = F64((uint32_t)(0xcf3448u)); FPUSH(v); }
/* 9911de: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9911e2: fadd qword ptr [eax - 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xfffffff8u)));
/* 9911e5: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 9911ed: fstp qword ptr [0xcf3448] */
  WF64((uint32_t)(0xcf3448u), ST0); FPOP();
/* 9911f3: mov edx, dword ptr [0xcf3448] */
  edx = R32((uint32_t)(0xcf3448u));
/* 9911f9: fld qword ptr [0xcf3450] */
  { double v = F64((uint32_t)(0xcf3450u)); FPUSH(v); }
/* 9911ff: mov ecx, dword ptr [0xcf344c] */
  ecx = R32((uint32_t)(0xcf344cu));
/* 991205: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 991207: mov dword ptr [0xcf3460], edx */
  W32((uint32_t)(0xcf3460u), edx);
/* 99120d: mov dword ptr [0xcf3478], edx */
  W32((uint32_t)(0xcf3478u), edx);
/* 991213: mov dword ptr [0xcf3464], ecx */
  W32((uint32_t)(0xcf3464u), ecx);
/* 991219: fstp qword ptr [0xcf3450] */
  WF64((uint32_t)(0xcf3450u), ST0); FPOP();
/* 99121f: mov edx, dword ptr [0xcf3450] */
  edx = R32((uint32_t)(0xcf3450u));
/* 991225: fld qword ptr [0xcf3458] */
  { double v = F64((uint32_t)(0xcf3458u)); FPUSH(v); }
/* 99122b: mov dword ptr [0xcf347c], ecx */
  W32((uint32_t)(0xcf347cu), ecx);
/* 991231: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 991234: mov ecx, dword ptr [0xcf3454] */
  ecx = R32((uint32_t)(0xcf3454u));
/* 99123a: mov dword ptr [0xcf3468], edx */
  W32((uint32_t)(0xcf3468u), edx);
/* 991240: mov dword ptr [0xcf3480], edx */
  W32((uint32_t)(0xcf3480u), edx);
/* 991246: fstp qword ptr [0xcf3458] */
  WF64((uint32_t)(0xcf3458u), ST0); FPOP();
/* 99124c: mov edx, dword ptr [0xcf3458] */
  edx = R32((uint32_t)(0xcf3458u));
/* 991252: fld qword ptr [0xcf34a8] */
  { double v = F64((uint32_t)(0xcf34a8u)); FPUSH(v); }
/* 991258: mov eax, dword ptr [0xcf345c] */
  eax = R32((uint32_t)(0xcf345cu));
/* 99125d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99125f: mov dword ptr [0xcf346c], ecx */
  W32((uint32_t)(0xcf346cu), ecx);
/* 991265: mov dword ptr [0xcf3484], ecx */
  W32((uint32_t)(0xcf3484u), ecx);
/* 99126b: mov ecx, edx */
  ecx = edx;
/* 99126d: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 991273: mov dword ptr [0xcf3470], edx */
  W32((uint32_t)(0xcf3470u), edx);
/* 991279: mov edx, eax */
  edx = eax;
/* 99127b: mov dword ptr [0xcf3474], eax */
  W32((uint32_t)(0xcf3474u), eax);
/* 991280: fsub qword ptr [ebx*8 + 0xcf34c0] */
  ST0 = ST0 - (F64((uint32_t)(ebx*8 + 0xcf34c0u)));
/* 991287: mov dword ptr [0xcf3488], ecx */
  W32((uint32_t)(0xcf3488u), ecx);
/* 99128d: mov dword ptr [0xcf348c], edx */
  W32((uint32_t)(0xcf348cu), edx);
/* 991293: fmul qword ptr [ebx*8 + 0xcf34c0] */
  ST0 = ST0 * (F64((uint32_t)(ebx*8 + 0xcf34c0u)));
/* 99129a: fadd qword ptr [0xcf3490] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3490u)));
/* 9912a0: fstp qword ptr [0xcf3490] */
  WF64((uint32_t)(0xcf3490u), ST0); FPOP();
/* 9912a6: mov eax, dword ptr [0xcf3490] */
  eax = R32((uint32_t)(0xcf3490u));
/* 9912ab: fld qword ptr [0xcf34a8] */
  { double v = F64((uint32_t)(0xcf34a8u)); FPUSH(v); }
/* 9912b1: mov ecx, dword ptr [0xcf3494] */
  ecx = R32((uint32_t)(0xcf3494u));
/* 9912b7: fadd qword ptr [ebx*8 + 0xcf34c0] */
  ST0 = ST0 + (F64((uint32_t)(ebx*8 + 0xcf34c0u)));
/* 9912be: mov edx, eax */
  edx = eax;
/* 9912c0: mov dword ptr [0xcf3498], eax */
  W32((uint32_t)(0xcf3498u), eax);
/* 9912c5: mov eax, ecx */
  eax = ecx;
/* 9912c7: mov dword ptr [0xcf349c], ecx */
  W32((uint32_t)(0xcf349cu), ecx);
/* 9912cd: fstp qword ptr [0xcf34a8] */
  WF64((uint32_t)(0xcf34a8u), ST0); FPOP();
/* 9912d3: mov ecx, dword ptr [0xcf34a8] */
  ecx = R32((uint32_t)(0xcf34a8u));
/* 9912d9: mov dword ptr [0xcf34a0], edx */
  W32((uint32_t)(0xcf34a0u), edx);
/* 9912df: mov edx, dword ptr [0xcf34ac] */
  edx = R32((uint32_t)(0xcf34acu));
/* 9912e5: mov dword ptr [0xcf34a4], eax */
  W32((uint32_t)(0xcf34a4u), eax);
/* 9912ea: mov eax, ecx */
  eax = ecx;
/* 9912ec: mov dword ptr [0xcf34b0], ecx */
  W32((uint32_t)(0xcf34b0u), ecx);
/* 9912f2: mov ecx, edx */
  ecx = edx;
/* 9912f4: mov dword ptr [0xcf34bc], ecx */
  W32((uint32_t)(0xcf34bcu), ecx);
/* 9912fa: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9912fd: mov dword ptr [0xcf34b4], edx */
  W32((uint32_t)(0xcf34b4u), edx);
/* 991303: mov dword ptr [0xcf34b8], eax */
  W32((uint32_t)(0xcf34b8u), eax);
/* 991308: jmp 0x990e20 */
  goto L_990e20;
L_99130d: /* 99130d: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* 991314: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 99131b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99131e: xor edx, edx */
  edx = 0;
/* 991320: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991322: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 991325: xor ebx, ebx */
  ebx = 0;
/* 991327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991329: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 99132c: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 991333: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991335: xor ebx, ebx */
  ebx = 0;
/* 991337: cmp dword ptr [esp + 0x88], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x88u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99133e: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 991341: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991343: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991346: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 99134a: jne 0x991376 */
  if (!zf) goto L_991376;
L_99134c: /* 99134c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99134e: je 0x991376 */
  if (zf) goto L_991376;
L_991350: /* 991350: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991352: jne 0x99135d */
  if (!zf) goto L_99135d;
L_991354: /* 991354: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 99135b: jmp 0x991376 */
  goto L_991376;
L_99135d: /* 99135d: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 991364: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991366: jne 0x991376 */
  if (!zf) goto L_991376;
L_991368: /* 991368: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 99136f: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
L_991376: /* 991376: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 99137c: xor esi, esi */
  esi = 0;
/* 99137e: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991384: xor ecx, ecx */
  ecx = 0;
/* 991386: fst qword ptr [0xcf34b8] */
  WF64((uint32_t)(0xcf34b8u), ST0);
/* 99138c: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 991390: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991396: xor ebx, ebx */
  ebx = 0;
/* 991398: fst qword ptr [0xcf3488] */
  WF64((uint32_t)(0xcf3488u), ST0);
/* 99139e: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9913a4: fst qword ptr [0xcf3480] */
  WF64((uint32_t)(0xcf3480u), ST0);
/* 9913aa: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9913b0: fst qword ptr [0xcf3478] */
  WF64((uint32_t)(0xcf3478u), ST0);
/* 9913b6: jmp 0x9913c0 */
  goto L_9913c0;
L_9913c0: /* 9913c0: mov edx, dword ptr [esp + esi*4 + 0x88] */
  edx = R32((uint32_t)(esp + esi*4 + 0x88u));
/* 9913c7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9913c9: jge 0x991410 */
  if ((sf == of)) goto L_991410;
L_9913cb: /* 9913cb: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9913cf: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 9913d2: lea eax, [eax*8 + 0xcf3548] */
  eax = (uint32_t)(eax*8 + 0xcf3548u);
/* 9913d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9913e0: /* 9913e0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9913e3: fmul qword ptr [ecx*8 + 0xcf34b8] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf34b8u)));
/* 9913ea: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9913ed: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9913ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913f1: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9913f3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9913f5: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9913f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913f9: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 9913fc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9913fe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991400: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 991403: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 991405: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991407: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 99140a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 99140c: jl 0x9913e0 */
  if ((sf != of)) goto L_9913e0;
L_99140e: /* 99140e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_991410: /* 991410: xor eax, eax */
  eax = 0;
/* 991412: cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991415: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 991418: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99141a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 99141b: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99141e: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 991422: jl 0x9913c0 */
  if ((sf != of)) goto L_9913c0;
L_991424: /* 991424: fst qword ptr [0xcf3478] */
  WF64((uint32_t)(0xcf3478u), ST0);
/* 99142a: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 99142e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 991430: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 991433: fst qword ptr [0xcf34b8] */
  WF64((uint32_t)(0xcf34b8u), ST0);
/* 991439: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 99143c: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 99143e: lea ecx, [edx + 0x18] */
  ecx = (uint32_t)(edx + 0x18u);
/* 991441: fstp qword ptr [0xcf3480] */
  WF64((uint32_t)(0xcf3480u), ST0); FPOP();
/* 991447: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 991449: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 99144c: fstp qword ptr [0xcf3488] */
  WF64((uint32_t)(0xcf3488u), ST0); FPOP();
/* 991452: mov eax, 0xcf3478 */
  eax = 0xcf3478u;
/* 991457: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 991459: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99145b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99145d: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 99145f: fstp qword ptr [0xcf34a0] */
  WF64((uint32_t)(0xcf34a0u), ST0); FPOP();
/* 991465: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991467: fchs  */
  ST0 = -ST0;
/* 991469: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 99146d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 991471: fst qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0);
/* 991475: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991477: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 99147b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99147d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99147f: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 991483: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 991487: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 99148d: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 991491: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991495: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 991499: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 99149f: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 9914a3: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9914a7: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9914ab: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 9914b1: fst qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0);
/* 9914b5: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 9914b9: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9914bd: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9914c1: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 9914c5: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 9914c9: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 9914cd: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 9914d3: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9914d9: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9914df: fdiv qword ptr [esp + 0x58] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x58u)));
/* 9914e3: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 9914e7: jmp 0x9914f0 */
  goto L_9914f0;
L_9914f0: /* 9914f0: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914f6: fmul qword ptr [edi + eax] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax)));
/* 9914f9: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914ff: fmul qword ptr [esi + ecx] */
  ST0 = ST0 * (F64((uint32_t)(esi + ecx)));
/* 991502: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 991506: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991508: fst qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0);
/* 99150c: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991510: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991512: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 991516: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991518: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99151a: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99151e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991520: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991522: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991526: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991528: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99152a: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99152e: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991532: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 991539: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99153d: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991541: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991545: fabs  */
  ST0 = fabs(ST0);
/* 991547: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 99154b: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 99154f: fabs  */
  ST0 = fabs(ST0);
/* 991551: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 991555: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991557: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99155d: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 991561: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 991565: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991569: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99156d: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991571: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991575: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991579: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99157b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99157d: fabs  */
  ST0 = fabs(ST0);
/* 99157f: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991581: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 991588: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99158a: fabs  */
  ST0 = fabs(ST0);
/* 99158c: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 991593: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 991595: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991597: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99159d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99159f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915a1: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9915a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9915a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915a9: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 9915ad: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9915b1: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9915b5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9915b7: fabs  */
  ST0 = fabs(ST0);
/* 9915b9: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 9915bd: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9915c1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9915c3: fabs  */
  ST0 = fabs(ST0);
/* 9915c5: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 9915c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9915cb: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 9915d1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915d5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9915d8: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915dc: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9915df: cmp eax, 0xcf3490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3490u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9915e4: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 9915e6: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915ea: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 9915ee: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915f0: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9915f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9915f6: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 9915f9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915fb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9915fd: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991603: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991605: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991607: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991609: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* 99160b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991611: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 991613: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991615: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991617: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991619: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 99161d: fadd qword ptr [esp + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x48u)));
/* 991621: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991627: fstp qword ptr [ecx - 0x20] */
  WF64((uint32_t)(ecx + 0xffffffe0u), ST0); FPOP();
/* 99162a: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 99162e: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 991632: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991636: fmul qword ptr [eax - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff8u)));
/* 991639: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99163b: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991641: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 991644: mov ebx, dword ptr [eax - 8] */
  ebx = R32((uint32_t)(eax + 0xfffffff8u));
/* 991647: mov dword ptr [edx + eax - 8], ebx */
  W32((uint32_t)(edx + eax + 0xfffffff8u), ebx);
/* 99164b: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 99164e: mov dword ptr [edx + eax - 4], ebx */
  W32((uint32_t)(edx + eax + 0xfffffffcu), ebx);
/* 991652: jl 0x9914f0 */
  if ((sf != of)) goto L_9914f0;
L_991658: /* 991658: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99165c: mov eax, 1 */
  eax = 0x1u;
/* 991661: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991663: je 0x991669 */
  if (zf) goto L_991669;
L_991665: /* 991665: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_991669: /* 991669: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99166c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99166e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 991670: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991676: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 991677: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 991678: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 99167a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99167b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99167d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99167f: mov esp, ebp */
  esp = ebp;
/* 991681: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 991682: ret  */
  esp += 4; SPILL(); return;
}

void f_990e28(void) {
  LOAD_REGS();
  goto L_990e28;
L_990e20: /* 990e20: mov edx, ecx */
  edx = ecx;
/* 990e22: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 990e26: jmp 0x990e30 */
  goto L_990e30;
L_990e28: /* 990e28: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 990e2f: nop  */
L_990e30: /* 990e30: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 990e36: mov eax, 0xcf3478 */
  eax = 0xcf3478u;
/* 990e3b: fchs  */
  ST0 = -ST0;
/* 990e3d: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 990e41: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990e45: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 990e4b: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 990e4d: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 990e51: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 990e55: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 990e59: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 990e5f: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 990e63: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 990e67: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 990e6b: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 990e71: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 990e75: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 990e79: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 990e7d: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 990e83: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 990e8a: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 990e8e: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 990e92: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990e94: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990e96: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 990e9c: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990ea0: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990ea4: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 990ea8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990eaa: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
L_990eb0: /* 990eb0: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990eb6: fmul qword ptr [edi + eax] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax)));
/* 990eb9: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990ebf: fmul qword ptr [edi + eax + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax + 0x18u)));
/* 990ec3: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 990ec7: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 990ec9: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 990ecd: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 990ecf: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 990ed3: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 990ed5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990ed7: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990edb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 990edd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990edf: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 990ee3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990ee5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990ee7: fsub qword ptr [esp + 0x48] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x48u)));
/* 990eeb: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 990eef: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 990ef3: fsub qword ptr [esp + 0x48] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x48u)));
/* 990ef7: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 990efb: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 990eff: fabs  */
  ST0 = fabs(ST0);
/* 990f01: fsubr qword ptr [esp + 0x38] */
  ST0 = (F64((uint32_t)(esp + 0x38u))) - ST0;
/* 990f05: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990f09: fabs  */
  ST0 = fabs(ST0);
/* 990f0b: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 990f0f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990f11: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 990f17: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 990f1b: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990f1f: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990f23: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990f27: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 990f2b: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 990f2f: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 990f33: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 990f35: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990f37: fabs  */
  ST0 = fabs(ST0);
/* 990f39: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 990f3b: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 990f3f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990f41: fabs  */
  ST0 = fabs(ST0);
/* 990f43: fadd qword ptr [esp + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x70u)));
/* 990f47: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 990f49: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f4b: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 990f51: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f53: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990f55: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 990f59: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990f5b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f5d: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 990f64: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 990f68: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 990f6c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990f6e: fabs  */
  ST0 = fabs(ST0);
/* 990f70: fsubr qword ptr [esp + 0x38] */
  ST0 = (F64((uint32_t)(esp + 0x38u))) - ST0;
/* 990f74: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 990f78: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 990f7a: fabs  */
  ST0 = fabs(ST0);
/* 990f7c: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 990f80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990f82: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 990f88: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990f8a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990f8c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 990f8f: cmp eax, 0xcf3490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3490u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990f94: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 990f98: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 990f9a: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990f9e: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 990fa2: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 990fa6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 990fa8: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 990fac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990fae: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 990fb1: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990fb7: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990fbb: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990fbf: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 990fc1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 990fc3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990fc5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 990fc7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 990fc9: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 990fcd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990fcf: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 990fd1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990fd3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990fd5: jl 0x990eb0 */
  if ((sf != of)) goto L_990eb0;
L_990fdb: /* 990fdb: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 990fe1: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 990fe5: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 990fe9: fld qword ptr [0xcf3440] */
  { double v = F64((uint32_t)(0xcf3440u)); FPUSH(v); }
/* 990fef: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 990ff3: fld qword ptr [0xb04378] */
  { double v = F64((uint32_t)(0xb04378u)); FPUSH(v); }
/* 990ff9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 990ffb: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 990ffd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 990fff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 991002: jp 0x991038 */
  if (pf) goto L_991038;
L_991004: /* 991004: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 991008: fstp qword ptr [0xcf3440] */
  WF64((uint32_t)(0xcf3440u), ST0); FPOP();
/* 99100e: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 991012: mov dword ptr [0xb0437c], ebx */
  W32((uint32_t)(0xb0437cu), ebx);
/* 991018: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 99101c: mov dword ptr [0xb04378], eax */
  W32((uint32_t)(0xb04378u), eax);
/* 991021: mov dword ptr [esp + 0x88], ebx */
  W32((uint32_t)(esp + 0x88u), ebx);
/* 991028: mov dword ptr [esp + 0x8c], edx */
  W32((uint32_t)(esp + 0x8cu), edx);
/* 99102f: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 991036: jmp 0x99103a */
  goto L_99103a;
L_991038: /* 991038: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99103a: /* 99103a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99103b: sub esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 99103e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991040: jl 0x9910be */
  if ((sf != of)) goto L_9910be;
L_991042: /* 991042: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 991045: cmp dword ptr [eax], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991048: jl 0x9910be */
  if ((sf != of)) goto L_9910be;
L_99104a: /* 99104a: fld qword ptr [0xcf3478] */
  { double v = F64((uint32_t)(0xcf3478u)); FPUSH(v); }
/* 991050: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 991058: fadd qword ptr [esi - 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0xfffffff8u)));
/* 99105b: fstp qword ptr [0xcf3478] */
  WF64((uint32_t)(0xcf3478u), ST0); FPOP();
/* 991061: fld qword ptr [0xcf3480] */
  { double v = F64((uint32_t)(0xcf3480u)); FPUSH(v); }
/* 991067: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 991069: fstp qword ptr [0xcf3480] */
  WF64((uint32_t)(0xcf3480u), ST0); FPOP();
/* 99106f: fld qword ptr [0xcf3488] */
  { double v = F64((uint32_t)(0xcf3488u)); FPUSH(v); }
/* 991075: fadd qword ptr [esi + 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x8u)));
/* 991078: fstp qword ptr [0xcf3488] */
  WF64((uint32_t)(0xcf3488u), ST0); FPOP();
/* 99107e: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 991084: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 991086: fsubr qword ptr [0xa110e0] */
  ST0 = (F64((uint32_t)(0xa110e0u))) - ST0;
/* 99108c: fsub qword ptr [ecx*8 + 0xcf34c0] */
  ST0 = ST0 - (F64((uint32_t)(ecx*8 + 0xcf34c0u)));
/* 991093: fmul qword ptr [ecx*8 + 0xcf34c0] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf34c0u)));
/* 99109a: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 9910a0: fstp qword ptr [0xcf34a0] */
  WF64((uint32_t)(0xcf34a0u), ST0); FPOP();
/* 9910a6: fld qword ptr [0xcf34b8] */
  { double v = F64((uint32_t)(0xcf34b8u)); FPUSH(v); }
/* 9910ac: fadd qword ptr [ecx*8 + 0xcf34c0] */
  ST0 = ST0 + (F64((uint32_t)(ecx*8 + 0xcf34c0u)));
/* 9910b3: fstp qword ptr [0xcf34b8] */
  WF64((uint32_t)(0xcf34b8u), ST0); FPOP();
/* 9910b9: jmp 0x990e30 */
  goto L_990e30;
L_9910be: /* 9910be: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9910c2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 9910c3: sub eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9910c6: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9910c8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9910cc: jl 0x9911bf */
  if ((sf != of)) goto L_9911bf;
L_9910d2: /* 9910d2: fld qword ptr [0xcf3460] */
  { double v = F64((uint32_t)(0xcf3460u)); FPUSH(v); }
/* 9910d8: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 9910e0: fadd qword ptr [eax - 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xfffffff8u)));
/* 9910e3: fstp qword ptr [0xcf3460] */
  WF64((uint32_t)(0xcf3460u), ST0); FPOP();
/* 9910e9: mov ecx, dword ptr [0xcf3460] */
  ecx = R32((uint32_t)(0xcf3460u));
/* 9910ef: fld qword ptr [0xcf3468] */
  { double v = F64((uint32_t)(0xcf3468u)); FPUSH(v); }
/* 9910f5: mov esi, dword ptr [0xcf3464] */
  esi = R32((uint32_t)(0xcf3464u));
/* 9910fb: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 9910fd: mov dword ptr [0xcf3478], ecx */
  W32((uint32_t)(0xcf3478u), ecx);
/* 991103: mov dword ptr [0xcf347c], esi */
  W32((uint32_t)(0xcf347cu), esi);
/* 991109: fstp qword ptr [0xcf3468] */
  WF64((uint32_t)(0xcf3468u), ST0); FPOP();
/* 99110f: mov ecx, dword ptr [0xcf3468] */
  ecx = R32((uint32_t)(0xcf3468u));
/* 991115: fld qword ptr [0xcf3470] */
  { double v = F64((uint32_t)(0xcf3470u)); FPUSH(v); }
/* 99111b: mov esi, dword ptr [0xcf346c] */
  esi = R32((uint32_t)(0xcf346cu));
/* 991121: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 991124: mov dword ptr [0xcf3480], ecx */
  W32((uint32_t)(0xcf3480u), ecx);
/* 99112a: mov dword ptr [0xcf3484], esi */
  W32((uint32_t)(0xcf3484u), esi);
/* 991130: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 991134: fstp qword ptr [0xcf3470] */
  WF64((uint32_t)(0xcf3470u), ST0); FPOP();
/* 99113a: mov ecx, dword ptr [0xcf3474] */
  ecx = R32((uint32_t)(0xcf3474u));
/* 991140: fld qword ptr [0xcf34b0] */
  { double v = F64((uint32_t)(0xcf34b0u)); FPUSH(v); }
/* 991146: mov eax, dword ptr [0xcf3470] */
  eax = R32((uint32_t)(0xcf3470u));
/* 99114b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99114d: mov dword ptr [0xcf348c], ecx */
  W32((uint32_t)(0xcf348cu), ecx);
/* 991153: mov dword ptr [0xcf3488], eax */
  W32((uint32_t)(0xcf3488u), eax);
/* 991158: fsubr qword ptr [0xa16940] */
  ST0 = (F64((uint32_t)(0xa16940u))) - ST0;
/* 99115e: fsub qword ptr [edx*8 + 0xcf34c0] */
  ST0 = ST0 - (F64((uint32_t)(edx*8 + 0xcf34c0u)));
/* 991165: fmul qword ptr [edx*8 + 0xcf34c0] */
  ST0 = ST0 * (F64((uint32_t)(edx*8 + 0xcf34c0u)));
/* 99116c: fadd qword ptr [0xcf3498] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3498u)));
/* 991172: fstp qword ptr [0xcf3498] */
  WF64((uint32_t)(0xcf3498u), ST0); FPOP();
/* 991178: mov ecx, dword ptr [0xcf349c] */
  ecx = R32((uint32_t)(0xcf349cu));
/* 99117e: fld qword ptr [0xcf34b0] */
  { double v = F64((uint32_t)(0xcf34b0u)); FPUSH(v); }
/* 991184: mov eax, dword ptr [0xcf3498] */
  eax = R32((uint32_t)(0xcf3498u));
/* 991189: fadd qword ptr [edx*8 + 0xcf34c0] */
  ST0 = ST0 + (F64((uint32_t)(edx*8 + 0xcf34c0u)));
/* 991190: mov dword ptr [0xcf34a4], ecx */
  W32((uint32_t)(0xcf34a4u), ecx);
/* 991196: mov dword ptr [0xcf34a0], eax */
  W32((uint32_t)(0xcf34a0u), eax);
/* 99119b: fstp qword ptr [0xcf34b0] */
  WF64((uint32_t)(0xcf34b0u), ST0); FPOP();
/* 9911a1: mov ecx, dword ptr [0xcf34b4] */
  ecx = R32((uint32_t)(0xcf34b4u));
/* 9911a7: mov eax, dword ptr [0xcf34b0] */
  eax = R32((uint32_t)(0xcf34b0u));
/* 9911ac: mov dword ptr [0xcf34bc], ecx */
  W32((uint32_t)(0xcf34bcu), ecx);
/* 9911b2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9911b5: mov dword ptr [0xcf34b8], eax */
  W32((uint32_t)(0xcf34b8u), eax);
/* 9911ba: jmp 0x990e30 */
  goto L_990e30;
L_9911bf: /* 9911bf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9911c3: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 9911c4: sub eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9911c7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9911ca: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 9911ce: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 9911d2: jl 0x99130d */
  if ((sf != of)) goto L_99130d;
L_9911d8: /* 9911d8: fld qword ptr [0xcf3448] */
  { double v = F64((uint32_t)(0xcf3448u)); FPUSH(v); }
/* 9911de: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9911e2: fadd qword ptr [eax - 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xfffffff8u)));
/* 9911e5: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 9911ed: fstp qword ptr [0xcf3448] */
  WF64((uint32_t)(0xcf3448u), ST0); FPOP();
/* 9911f3: mov edx, dword ptr [0xcf3448] */
  edx = R32((uint32_t)(0xcf3448u));
/* 9911f9: fld qword ptr [0xcf3450] */
  { double v = F64((uint32_t)(0xcf3450u)); FPUSH(v); }
/* 9911ff: mov ecx, dword ptr [0xcf344c] */
  ecx = R32((uint32_t)(0xcf344cu));
/* 991205: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 991207: mov dword ptr [0xcf3460], edx */
  W32((uint32_t)(0xcf3460u), edx);
/* 99120d: mov dword ptr [0xcf3478], edx */
  W32((uint32_t)(0xcf3478u), edx);
/* 991213: mov dword ptr [0xcf3464], ecx */
  W32((uint32_t)(0xcf3464u), ecx);
/* 991219: fstp qword ptr [0xcf3450] */
  WF64((uint32_t)(0xcf3450u), ST0); FPOP();
/* 99121f: mov edx, dword ptr [0xcf3450] */
  edx = R32((uint32_t)(0xcf3450u));
/* 991225: fld qword ptr [0xcf3458] */
  { double v = F64((uint32_t)(0xcf3458u)); FPUSH(v); }
/* 99122b: mov dword ptr [0xcf347c], ecx */
  W32((uint32_t)(0xcf347cu), ecx);
/* 991231: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 991234: mov ecx, dword ptr [0xcf3454] */
  ecx = R32((uint32_t)(0xcf3454u));
/* 99123a: mov dword ptr [0xcf3468], edx */
  W32((uint32_t)(0xcf3468u), edx);
/* 991240: mov dword ptr [0xcf3480], edx */
  W32((uint32_t)(0xcf3480u), edx);
/* 991246: fstp qword ptr [0xcf3458] */
  WF64((uint32_t)(0xcf3458u), ST0); FPOP();
/* 99124c: mov edx, dword ptr [0xcf3458] */
  edx = R32((uint32_t)(0xcf3458u));
/* 991252: fld qword ptr [0xcf34a8] */
  { double v = F64((uint32_t)(0xcf34a8u)); FPUSH(v); }
/* 991258: mov eax, dword ptr [0xcf345c] */
  eax = R32((uint32_t)(0xcf345cu));
/* 99125d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99125f: mov dword ptr [0xcf346c], ecx */
  W32((uint32_t)(0xcf346cu), ecx);
/* 991265: mov dword ptr [0xcf3484], ecx */
  W32((uint32_t)(0xcf3484u), ecx);
/* 99126b: mov ecx, edx */
  ecx = edx;
/* 99126d: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 991273: mov dword ptr [0xcf3470], edx */
  W32((uint32_t)(0xcf3470u), edx);
/* 991279: mov edx, eax */
  edx = eax;
/* 99127b: mov dword ptr [0xcf3474], eax */
  W32((uint32_t)(0xcf3474u), eax);
/* 991280: fsub qword ptr [ebx*8 + 0xcf34c0] */
  ST0 = ST0 - (F64((uint32_t)(ebx*8 + 0xcf34c0u)));
/* 991287: mov dword ptr [0xcf3488], ecx */
  W32((uint32_t)(0xcf3488u), ecx);
/* 99128d: mov dword ptr [0xcf348c], edx */
  W32((uint32_t)(0xcf348cu), edx);
/* 991293: fmul qword ptr [ebx*8 + 0xcf34c0] */
  ST0 = ST0 * (F64((uint32_t)(ebx*8 + 0xcf34c0u)));
/* 99129a: fadd qword ptr [0xcf3490] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3490u)));
/* 9912a0: fstp qword ptr [0xcf3490] */
  WF64((uint32_t)(0xcf3490u), ST0); FPOP();
/* 9912a6: mov eax, dword ptr [0xcf3490] */
  eax = R32((uint32_t)(0xcf3490u));
/* 9912ab: fld qword ptr [0xcf34a8] */
  { double v = F64((uint32_t)(0xcf34a8u)); FPUSH(v); }
/* 9912b1: mov ecx, dword ptr [0xcf3494] */
  ecx = R32((uint32_t)(0xcf3494u));
/* 9912b7: fadd qword ptr [ebx*8 + 0xcf34c0] */
  ST0 = ST0 + (F64((uint32_t)(ebx*8 + 0xcf34c0u)));
/* 9912be: mov edx, eax */
  edx = eax;
/* 9912c0: mov dword ptr [0xcf3498], eax */
  W32((uint32_t)(0xcf3498u), eax);
/* 9912c5: mov eax, ecx */
  eax = ecx;
/* 9912c7: mov dword ptr [0xcf349c], ecx */
  W32((uint32_t)(0xcf349cu), ecx);
/* 9912cd: fstp qword ptr [0xcf34a8] */
  WF64((uint32_t)(0xcf34a8u), ST0); FPOP();
/* 9912d3: mov ecx, dword ptr [0xcf34a8] */
  ecx = R32((uint32_t)(0xcf34a8u));
/* 9912d9: mov dword ptr [0xcf34a0], edx */
  W32((uint32_t)(0xcf34a0u), edx);
/* 9912df: mov edx, dword ptr [0xcf34ac] */
  edx = R32((uint32_t)(0xcf34acu));
/* 9912e5: mov dword ptr [0xcf34a4], eax */
  W32((uint32_t)(0xcf34a4u), eax);
/* 9912ea: mov eax, ecx */
  eax = ecx;
/* 9912ec: mov dword ptr [0xcf34b0], ecx */
  W32((uint32_t)(0xcf34b0u), ecx);
/* 9912f2: mov ecx, edx */
  ecx = edx;
/* 9912f4: mov dword ptr [0xcf34bc], ecx */
  W32((uint32_t)(0xcf34bcu), ecx);
/* 9912fa: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9912fd: mov dword ptr [0xcf34b4], edx */
  W32((uint32_t)(0xcf34b4u), edx);
/* 991303: mov dword ptr [0xcf34b8], eax */
  W32((uint32_t)(0xcf34b8u), eax);
/* 991308: jmp 0x990e20 */
  goto L_990e20;
L_99130d: /* 99130d: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* 991314: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 99131b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99131e: xor edx, edx */
  edx = 0;
/* 991320: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991322: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 991325: xor ebx, ebx */
  ebx = 0;
/* 991327: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991329: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 99132c: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 991333: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991335: xor ebx, ebx */
  ebx = 0;
/* 991337: cmp dword ptr [esp + 0x88], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x88u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99133e: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 991341: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991343: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991346: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 99134a: jne 0x991376 */
  if (!zf) goto L_991376;
L_99134c: /* 99134c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99134e: je 0x991376 */
  if (zf) goto L_991376;
L_991350: /* 991350: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991352: jne 0x99135d */
  if (!zf) goto L_99135d;
L_991354: /* 991354: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 99135b: jmp 0x991376 */
  goto L_991376;
L_99135d: /* 99135d: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 991364: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991366: jne 0x991376 */
  if (!zf) goto L_991376;
L_991368: /* 991368: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 99136f: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
L_991376: /* 991376: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 99137c: xor esi, esi */
  esi = 0;
/* 99137e: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991384: xor ecx, ecx */
  ecx = 0;
/* 991386: fst qword ptr [0xcf34b8] */
  WF64((uint32_t)(0xcf34b8u), ST0);
/* 99138c: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 991390: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991396: xor ebx, ebx */
  ebx = 0;
/* 991398: fst qword ptr [0xcf3488] */
  WF64((uint32_t)(0xcf3488u), ST0);
/* 99139e: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9913a4: fst qword ptr [0xcf3480] */
  WF64((uint32_t)(0xcf3480u), ST0);
/* 9913aa: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9913b0: fst qword ptr [0xcf3478] */
  WF64((uint32_t)(0xcf3478u), ST0);
/* 9913b6: jmp 0x9913c0 */
  goto L_9913c0;
L_9913c0: /* 9913c0: mov edx, dword ptr [esp + esi*4 + 0x88] */
  edx = R32((uint32_t)(esp + esi*4 + 0x88u));
/* 9913c7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9913c9: jge 0x991410 */
  if ((sf == of)) goto L_991410;
L_9913cb: /* 9913cb: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9913cf: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 9913d2: lea eax, [eax*8 + 0xcf3548] */
  eax = (uint32_t)(eax*8 + 0xcf3548u);
/* 9913d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9913e0: /* 9913e0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9913e3: fmul qword ptr [ecx*8 + 0xcf34b8] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf34b8u)));
/* 9913ea: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9913ed: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9913ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913f1: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9913f3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9913f5: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9913f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913f9: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 9913fc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9913fe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991400: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 991403: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 991405: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991407: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 99140a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 99140c: jl 0x9913e0 */
  if ((sf != of)) goto L_9913e0;
L_99140e: /* 99140e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_991410: /* 991410: xor eax, eax */
  eax = 0;
/* 991412: cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991415: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 991418: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99141a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 99141b: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99141e: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 991422: jl 0x9913c0 */
  if ((sf != of)) goto L_9913c0;
L_991424: /* 991424: fst qword ptr [0xcf3478] */
  WF64((uint32_t)(0xcf3478u), ST0);
/* 99142a: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 99142e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 991430: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 991433: fst qword ptr [0xcf34b8] */
  WF64((uint32_t)(0xcf34b8u), ST0);
/* 991439: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 99143c: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 99143e: lea ecx, [edx + 0x18] */
  ecx = (uint32_t)(edx + 0x18u);
/* 991441: fstp qword ptr [0xcf3480] */
  WF64((uint32_t)(0xcf3480u), ST0); FPOP();
/* 991447: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 991449: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 99144c: fstp qword ptr [0xcf3488] */
  WF64((uint32_t)(0xcf3488u), ST0); FPOP();
/* 991452: mov eax, 0xcf3478 */
  eax = 0xcf3478u;
/* 991457: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 991459: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99145b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99145d: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 99145f: fstp qword ptr [0xcf34a0] */
  WF64((uint32_t)(0xcf34a0u), ST0); FPOP();
/* 991465: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991467: fchs  */
  ST0 = -ST0;
/* 991469: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 99146d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 991471: fst qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0);
/* 991475: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991477: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 99147b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99147d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99147f: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 991483: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 991487: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 99148d: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 991491: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991495: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 991499: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 99149f: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 9914a3: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9914a7: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9914ab: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 9914b1: fst qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0);
/* 9914b5: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 9914b9: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9914bd: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9914c1: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 9914c5: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 9914c9: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 9914cd: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 9914d3: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9914d9: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9914df: fdiv qword ptr [esp + 0x58] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x58u)));
/* 9914e3: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 9914e7: jmp 0x9914f0 */
  goto L_9914f0;
L_9914f0: /* 9914f0: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914f6: fmul qword ptr [edi + eax] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax)));
/* 9914f9: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914ff: fmul qword ptr [esi + ecx] */
  ST0 = ST0 * (F64((uint32_t)(esi + ecx)));
/* 991502: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 991506: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991508: fst qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0);
/* 99150c: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991510: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991512: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 991516: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991518: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99151a: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99151e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991520: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991522: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991526: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991528: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99152a: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99152e: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991532: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 991539: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99153d: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991541: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991545: fabs  */
  ST0 = fabs(ST0);
/* 991547: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 99154b: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 99154f: fabs  */
  ST0 = fabs(ST0);
/* 991551: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 991555: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991557: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99155d: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 991561: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 991565: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991569: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99156d: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991571: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991575: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991579: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99157b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99157d: fabs  */
  ST0 = fabs(ST0);
/* 99157f: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991581: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 991588: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99158a: fabs  */
  ST0 = fabs(ST0);
/* 99158c: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 991593: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 991595: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991597: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99159d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99159f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915a1: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9915a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9915a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915a9: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 9915ad: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9915b1: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9915b5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9915b7: fabs  */
  ST0 = fabs(ST0);
/* 9915b9: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 9915bd: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9915c1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9915c3: fabs  */
  ST0 = fabs(ST0);
/* 9915c5: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 9915c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9915cb: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 9915d1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915d5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9915d8: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915dc: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9915df: cmp eax, 0xcf3490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3490u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9915e4: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 9915e6: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915ea: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 9915ee: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915f0: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9915f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9915f6: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 9915f9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915fb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9915fd: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991603: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991605: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991607: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991609: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* 99160b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991611: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 991613: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991615: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991617: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991619: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 99161d: fadd qword ptr [esp + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x48u)));
/* 991621: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991627: fstp qword ptr [ecx - 0x20] */
  WF64((uint32_t)(ecx + 0xffffffe0u), ST0); FPOP();
/* 99162a: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 99162e: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 991632: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991636: fmul qword ptr [eax - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff8u)));
/* 991639: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99163b: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991641: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 991644: mov ebx, dword ptr [eax - 8] */
  ebx = R32((uint32_t)(eax + 0xfffffff8u));
/* 991647: mov dword ptr [edx + eax - 8], ebx */
  W32((uint32_t)(edx + eax + 0xfffffff8u), ebx);
/* 99164b: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 99164e: mov dword ptr [edx + eax - 4], ebx */
  W32((uint32_t)(edx + eax + 0xfffffffcu), ebx);
/* 991652: jl 0x9914f0 */
  if ((sf != of)) goto L_9914f0;
L_991658: /* 991658: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99165c: mov eax, 1 */
  eax = 0x1u;
/* 991661: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991663: je 0x991669 */
  if (zf) goto L_991669;
L_991665: /* 991665: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_991669: /* 991669: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99166c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99166e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 991670: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991676: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 991677: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 991678: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 99167a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99167b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99167d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99167f: mov esp, ebp */
  esp = ebp;
/* 991681: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 991682: ret  */
  esp += 4; SPILL(); return;
}

void f_9913b8(void) {
  LOAD_REGS();
L_9913b8: /* 9913b8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 9913bf: nop  */
L_9913c0: /* 9913c0: mov edx, dword ptr [esp + esi*4 + 0x88] */
  edx = R32((uint32_t)(esp + esi*4 + 0x88u));
/* 9913c7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9913c9: jge 0x991410 */
  if ((sf == of)) goto L_991410;
L_9913cb: /* 9913cb: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9913cf: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 9913d2: lea eax, [eax*8 + 0xcf3548] */
  eax = (uint32_t)(eax*8 + 0xcf3548u);
/* 9913d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9913e0: /* 9913e0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913e2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9913e3: fmul qword ptr [ecx*8 + 0xcf34b8] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf34b8u)));
/* 9913ea: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9913ed: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9913ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913f1: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9913f3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9913f5: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9913f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9913f9: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 9913fc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9913fe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991400: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 991403: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 991405: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991407: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 99140a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 99140c: jl 0x9913e0 */
  if ((sf != of)) goto L_9913e0;
L_99140e: /* 99140e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_991410: /* 991410: xor eax, eax */
  eax = 0;
/* 991412: cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991415: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 991418: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99141a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 99141b: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99141e: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 991422: jl 0x9913c0 */
  if ((sf != of)) goto L_9913c0;
L_991424: /* 991424: fst qword ptr [0xcf3478] */
  WF64((uint32_t)(0xcf3478u), ST0);
/* 99142a: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 99142e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 991430: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 991433: fst qword ptr [0xcf34b8] */
  WF64((uint32_t)(0xcf34b8u), ST0);
/* 991439: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 99143c: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 99143e: lea ecx, [edx + 0x18] */
  ecx = (uint32_t)(edx + 0x18u);
/* 991441: fstp qword ptr [0xcf3480] */
  WF64((uint32_t)(0xcf3480u), ST0); FPOP();
/* 991447: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 991449: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 99144c: fstp qword ptr [0xcf3488] */
  WF64((uint32_t)(0xcf3488u), ST0); FPOP();
/* 991452: mov eax, 0xcf3478 */
  eax = 0xcf3478u;
/* 991457: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 991459: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99145b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99145d: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 99145f: fstp qword ptr [0xcf34a0] */
  WF64((uint32_t)(0xcf34a0u), ST0); FPOP();
/* 991465: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991467: fchs  */
  ST0 = -ST0;
/* 991469: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 99146d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 991471: fst qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0);
/* 991475: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991477: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 99147b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99147d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99147f: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 991483: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 991487: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 99148d: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 991491: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991495: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 991499: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 99149f: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 9914a3: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9914a7: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9914ab: fadd qword ptr [0xcf34a0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf34a0u)));
/* 9914b1: fst qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0);
/* 9914b5: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 9914b9: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9914bd: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 9914c1: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 9914c5: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 9914c9: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 9914cd: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 9914d3: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9914d9: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9914df: fdiv qword ptr [esp + 0x58] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x58u)));
/* 9914e3: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 9914e7: jmp 0x9914f0 */
  goto L_9914f0;
L_9914f0: /* 9914f0: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914f6: fmul qword ptr [edi + eax] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax)));
/* 9914f9: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914ff: fmul qword ptr [esi + ecx] */
  ST0 = ST0 * (F64((uint32_t)(esi + ecx)));
/* 991502: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 991506: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991508: fst qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0);
/* 99150c: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991510: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991512: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 991516: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991518: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99151a: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99151e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991520: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991522: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991526: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991528: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99152a: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99152e: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991532: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 991539: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99153d: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991541: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991545: fabs  */
  ST0 = fabs(ST0);
/* 991547: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 99154b: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 99154f: fabs  */
  ST0 = fabs(ST0);
/* 991551: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 991555: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991557: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99155d: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 991561: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 991565: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991569: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99156d: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991571: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991575: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991579: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99157b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99157d: fabs  */
  ST0 = fabs(ST0);
/* 99157f: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991581: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 991588: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99158a: fabs  */
  ST0 = fabs(ST0);
/* 99158c: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 991593: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 991595: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991597: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99159d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99159f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915a1: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9915a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9915a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915a9: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 9915ad: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9915b1: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9915b5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9915b7: fabs  */
  ST0 = fabs(ST0);
/* 9915b9: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 9915bd: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9915c1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9915c3: fabs  */
  ST0 = fabs(ST0);
/* 9915c5: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 9915c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9915cb: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 9915d1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915d5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9915d8: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915dc: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9915df: cmp eax, 0xcf3490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3490u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9915e4: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 9915e6: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915ea: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 9915ee: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915f0: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9915f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9915f6: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 9915f9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915fb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9915fd: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991603: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991605: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991607: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991609: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* 99160b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991611: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 991613: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991615: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991617: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991619: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 99161d: fadd qword ptr [esp + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x48u)));
/* 991621: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991627: fstp qword ptr [ecx - 0x20] */
  WF64((uint32_t)(ecx + 0xffffffe0u), ST0); FPOP();
/* 99162a: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 99162e: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 991632: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991636: fmul qword ptr [eax - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff8u)));
/* 991639: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99163b: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991641: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 991644: mov ebx, dword ptr [eax - 8] */
  ebx = R32((uint32_t)(eax + 0xfffffff8u));
/* 991647: mov dword ptr [edx + eax - 8], ebx */
  W32((uint32_t)(edx + eax + 0xfffffff8u), ebx);
/* 99164b: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 99164e: mov dword ptr [edx + eax - 4], ebx */
  W32((uint32_t)(edx + eax + 0xfffffffcu), ebx);
/* 991652: jl 0x9914f0 */
  if ((sf != of)) goto L_9914f0;
L_991658: /* 991658: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99165c: mov eax, 1 */
  eax = 0x1u;
/* 991661: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991663: je 0x991669 */
  if (zf) goto L_991669;
L_991665: /* 991665: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_991669: /* 991669: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99166c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99166e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 991670: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991676: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 991677: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 991678: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 99167a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99167b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99167d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99167f: mov esp, ebp */
  esp = ebp;
/* 991681: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 991682: ret  */
  esp += 4; SPILL(); return;
}

void f_9914e9(void) {
  LOAD_REGS();
L_9914e9: /* 9914e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9914f0: /* 9914f0: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914f6: fmul qword ptr [edi + eax] */
  ST0 = ST0 * (F64((uint32_t)(edi + eax)));
/* 9914f9: fld qword ptr [0xcf34a0] */
  { double v = F64((uint32_t)(0xcf34a0u)); FPUSH(v); }
/* 9914ff: fmul qword ptr [esi + ecx] */
  ST0 = ST0 * (F64((uint32_t)(esi + ecx)));
/* 991502: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 991506: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991508: fst qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0);
/* 99150c: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991510: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991512: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 991516: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991518: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99151a: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99151e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991520: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991522: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991526: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991528: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99152a: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99152e: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991532: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 991539: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* 99153d: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 991541: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991545: fabs  */
  ST0 = fabs(ST0);
/* 991547: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 99154b: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 99154f: fabs  */
  ST0 = fabs(ST0);
/* 991551: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 991555: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991557: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99155d: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 991561: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 991565: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991569: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 99156d: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 991571: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 991575: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 991579: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99157b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99157d: fabs  */
  ST0 = fabs(ST0);
/* 99157f: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991581: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 991588: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99158a: fabs  */
  ST0 = fabs(ST0);
/* 99158c: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 991593: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 991595: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991597: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99159d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99159f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915a1: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9915a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9915a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915a9: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 9915ad: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9915b1: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9915b5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9915b7: fabs  */
  ST0 = fabs(ST0);
/* 9915b9: fsubr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) - ST0;
/* 9915bd: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9915c1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9915c3: fabs  */
  ST0 = fabs(ST0);
/* 9915c5: fadd qword ptr [esp + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x38u)));
/* 9915c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9915cb: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 9915d1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9915d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9915d5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9915d8: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915dc: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9915df: cmp eax, 0xcf3490 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3490u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9915e4: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 9915e6: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9915ea: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 9915ee: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915f0: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 9915f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9915f6: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 9915f9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9915fb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9915fd: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991603: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991605: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991607: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991609: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* 99160b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 99160f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991611: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 991613: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991615: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991617: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991619: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 99161d: fadd qword ptr [esp + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x48u)));
/* 991621: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991627: fstp qword ptr [ecx - 0x20] */
  WF64((uint32_t)(ecx + 0xffffffe0u), ST0); FPOP();
/* 99162a: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 99162e: fmul qword ptr [esp + 0x68] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x68u)));
/* 991632: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 991636: fmul qword ptr [eax - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff8u)));
/* 991639: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99163b: fdiv qword ptr [0xcf34a0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf34a0u)));
/* 991641: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 991644: mov ebx, dword ptr [eax - 8] */
  ebx = R32((uint32_t)(eax + 0xfffffff8u));
/* 991647: mov dword ptr [edx + eax - 8], ebx */
  W32((uint32_t)(edx + eax + 0xfffffff8u), ebx);
/* 99164b: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 99164e: mov dword ptr [edx + eax - 4], ebx */
  W32((uint32_t)(edx + eax + 0xfffffffcu), ebx);
/* 991652: jl 0x9914f0 */
  if ((sf != of)) goto L_9914f0;
L_991658: /* 991658: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 99165c: mov eax, 1 */
  eax = 0x1u;
/* 991661: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991663: je 0x991669 */
  if (zf) goto L_991669;
L_991665: /* 991665: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_991669: /* 991669: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 99166c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99166e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 991670: fmul qword ptr [0xcf34a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf34a0u)));
/* 991676: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 991677: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 991678: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 99167a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99167b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99167d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99167f: mov esp, ebp */
  esp = ebp;
/* 991681: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 991682: ret  */
  esp += 4; SPILL(); return;
}

void f_991690(void) {
  LOAD_REGS();
L_991690: /* 991690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 991691: mov ebp, esp */
  ebp = esp;
/* 991693: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 991696: sub esp, 0xf4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99169c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 99169f: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9916a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9916a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9916a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9916a4: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9916a8: mov dword ptr [esp + 0x10], 0xb04360 */
  W32((uint32_t)(esp + 0x10u), 0xb04360u);
/* 9916b0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 9916b2: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9916b5: mov dword ptr [0xb04364], eax */
  W32((uint32_t)(0xb04364u), eax);
/* 9916ba: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 9916be: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9916c0: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9916c4: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 9916c8: jmp 0x9916d0 */
  goto L_9916d0;
L_9916d0: /* 9916d0: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9916d4: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 9916d6: mov ecx, 8 */
  ecx = 0x8u;
/* 9916db: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 9916dd: mov edi, 1 */
  edi = 0x1u;
/* 9916e2: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 9916e4: mov ecx, 0x100 */
  ecx = 0x100u;
/* 9916e9: lea esi, [eax + 0x20] */
  esi = (uint32_t)(eax + 0x20u);
/* 9916ec: mov ebx, eax */
  ebx = eax;
/* 9916ee: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9916f0: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9916f3: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9916f7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9916fb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9916ff: mov dword ptr [esp + 0xc], 2 */
  W32((uint32_t)(esp + 0xcu), 0x2u);
/* 991707: jmp 0x991710 */
  goto L_991710;
L_991710: /* 991710: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 991714: fld qword ptr [ecx + edx] */
  { double v = F64((uint32_t)(ecx + edx)); FPUSH(v); }
/* 991717: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 99171d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99171f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 991722: jnp 0x99173b */
  if (!pf) goto L_99173b;
L_991724: /* 991724: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 991728: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 99172a: fdiv qword ptr [ecx + edx] */
  ST0 = ST0 / (F64((uint32_t)(ecx + edx)));
/* 99172d: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 991733: fstp qword ptr [0xcf5048] */
  WF64((uint32_t)(0xcf5048u), ST0); FPOP();
/* 991739: jmp 0x99174f */
  goto L_99174f;
L_99173b: /* 99173b: mov dword ptr [0xcf5048], 0 */
  W32((uint32_t)(0xcf5048u), 0x0u);
/* 991745: mov dword ptr [0xcf504c], 0 */
  W32((uint32_t)(0xcf504cu), 0x0u);
L_99174f: /* 99174f: mov ecx, dword ptr [0xcf504c] */
  ecx = R32((uint32_t)(0xcf504cu));
/* 991755: mov edx, dword ptr [0xcf5048] */
  edx = R32((uint32_t)(0xcf5048u));
/* 99175b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99175c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99175d: call 0x99cf1e */
  esp -= 4; W32(esp, 0x991762u); SPILL(); hle_floor(); RELOAD();
/* 991762: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 991765: call 0x99c958 */
  esp -= 4; W32(esp, 0x99176au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 99176a: mov edx, eax */
  edx = eax;
/* 99176c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99176e: jge 0x991774 */
  if ((sf == of)) goto L_991774;
L_991770: /* 991770: xor edx, edx */
  edx = 0;
/* 991772: jmp 0x991780 */
  goto L_991780;
L_991774: /* 991774: cmp edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99177a: jl 0x991780 */
  if ((sf != of)) goto L_991780;
L_99177c: /* 99177c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_991780: /* 991780: and edx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 991784: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991788: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 99178a: mov eax, edx */
  eax = edx;
/* 99178c: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 99178e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991790: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 991794: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 991798: fcomp qword ptr [0xcf5048] */
  fpu_com(ST0, F64((uint32_t)(0xcf5048u)));
  FPOP();
/* 99179e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9917a0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 9917a3: jne 0x9917ad */
  if (!zf) goto L_9917ad;
L_9917a5: /* 9917a5: mov eax, edx */
  eax = edx;
/* 9917a7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 9917a9: js 0x9917ad */
  if (sf) goto L_9917ad;
L_9917ab: /* 9917ab: mov edx, eax */
  edx = eax;
L_9917ad: /* 9917ad: mov eax, edx */
  eax = edx;
/* 9917af: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 9917b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9917b3: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 9917b5: mov dword ptr [esi - 0x30], eax */
  W32((uint32_t)(esi + 0xffffffd0u), eax);
/* 9917b8: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 9917bb: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9917c0: jge 0x9917c4 */
  if ((sf == of)) goto L_9917c4;
L_9917c2: /* 9917c2: mov edx, eax */
  edx = eax;
L_9917c4: /* 9917c4: mov eax, edx */
  eax = edx;
/* 9917c6: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 9917c8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9917cc: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9917cf: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9917d2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9917d4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9917d8: mov dword ptr [esi - 4], edx */
  W32((uint32_t)(esi + 0xfffffffcu), edx);
/* 9917db: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9917dd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9917e1: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9917e4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9917e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9917ec: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9917ef: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9917f0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9917f4: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9917f8: jne 0x991710 */
  if (!zf) goto L_991710;
L_9917fe: /* 9917fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 991802: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 991806: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991809: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99180c: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99180f: cmp ecx, 0xb0436c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb0436cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991815: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 991819: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 99181d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 991821: jl 0x9916d0 */
  if ((sf != of)) goto L_9916d0;
L_991827: /* 991827: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99182a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99182d: jne 0x991b42 */
  if (!zf) goto L_991b42;
L_991833: /* 991833: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 991836: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99183a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 99183d: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991840: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 991848: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
/* 99184c: mov ecx, 0xcf4ed0 */
  ecx = 0xcf4ed0u;
/* 991851: mov eax, 0xcf36c8 */
  eax = 0xcf36c8u;
/* 991856: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 99185a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_991860: /* 991860: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991864: lea eax, [ebx - 4] */
  eax = (uint32_t)(ebx + 0xfffffffcu);
/* 991867: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 99186b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99186f: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 991873: mov dword ptr [esp + 0x28], 4 */
  W32((uint32_t)(esp + 0x28u), 0x4u);
/* 99187b: jmp 0x991880 */
  goto L_991880;
L_991880: /* 991880: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 991884: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 991886: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 991889: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99188b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99188c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99188e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 991892: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991894: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 991897: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99189b: fild dword ptr [ebx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 99189e: xor edi, edi */
  edi = 0;
/* 9918a0: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918a2: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918a8: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 9918ab: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 9918ad: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918af: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918b5: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 9918b7: fild dword ptr [ebx + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 9918ba: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918bc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9918c0: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918c6: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9918c9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9918cc: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9918cf: jl 0x9919ef */
  if ((sf != of)) goto L_9919ef;
L_9918d5: /* 9918d5: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 9918d8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9918dc: mov ebx, 3 */
  ebx = 0x3u;
/* 9918e1: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_9918e4: /* 9918e4: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 9918e7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918ea: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 9918ed: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f0: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9918f8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918fb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9918fd: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991900: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991903: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991906: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991909: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99190c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99190f: fstp qword ptr [eax - 0x50] */
  WF64((uint32_t)(eax + 0xffffffb0u), ST0); FPOP();
/* 991912: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991914: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991917: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991919: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99191b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99191d: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991920: fstp qword ptr [eax - 0x48] */
  WF64((uint32_t)(eax + 0xffffffb8u), ST0); FPOP();
/* 991923: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991925: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991928: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 99192b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99192d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99192f: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991932: fstp qword ptr [eax - 0x40] */
  WF64((uint32_t)(eax + 0xffffffc0u), ST0); FPOP();
/* 991935: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991937: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99193a: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 99193d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99193f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991941: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991944: fstp qword ptr [eax - 0x38] */
  WF64((uint32_t)(eax + 0xffffffc8u), ST0); FPOP();
/* 991947: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991949: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99194c: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 99194e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991950: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991952: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991955: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991958: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99195a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99195d: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991960: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991962: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991964: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991967: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 99196a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99196c: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99196e: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991971: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991973: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991975: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991977: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 99197a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99197c: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99197e: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991980: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991982: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991984: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991986: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991989: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99198b: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99198d: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991990: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991992: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991994: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991996: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991999: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99199b: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 99199e: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 9919a1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919a3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919a5: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 9919a8: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9919ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919ad: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 9919b0: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 9919b2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9919b5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9919b8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9919bb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9919c0: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 9919c3: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9919c6: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9919c9: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9919cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919ce: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9919d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919d3: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 9919d6: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 9919d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919db: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 9919de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919e0: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9919e3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919e5: jl 0x9918e4 */
  if ((sf != of)) goto L_9918e4;
L_9919eb: /* 9919eb: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_9919ef: /* 9919ef: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9919f2: jge 0x991a51 */
  if ((sf == of)) goto L_991a51;
L_9919f4: /* 9919f4: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9919f8: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 9919fb: mov esi, edi */
  esi = edi;
/* 9919fd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9919ff: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991a02: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 991a05: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_991a08: /* 991a08: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991a0a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a0d: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991a10: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a13: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a16: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 991a17: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a19: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991a1c: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991a1f: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a23: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a25: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991a28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a2a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991a2d: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991a2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a31: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a35: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a37: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991a3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a3c: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991a3f: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991a42: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a44: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a48: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a4a: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991a4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a4f: jl 0x991a08 */
  if ((sf != of)) goto L_991a08;
L_991a51: /* 991a51: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 991a55: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 991a59: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 991a5d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 991a61: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991a64: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991a67: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991a6a: add esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991a70: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991a73: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 991a74: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 991a78: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 991a7c: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 991a80: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 991a84: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 991a88: jne 0x991880 */
  if (!zf) goto L_991880;
L_991a8e: /* 991a8e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 991a92: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 991a96: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 991a9a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 991a9b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 991a9f: mov eax, esi */
  eax = esi;
/* 991aa1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 991aa5: mov edx, 8 */
  edx = 0x8u;
/* 991aaa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991aac: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991aae: cmp eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991ab3: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 991ab7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991abb: jl 0x991860 */
  if ((sf != of)) goto L_991860;
L_991ac1: /* 991ac1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 991ac4: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 991ac7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 991aca: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 991acd: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 991ad0: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 991ad2: xor edi, edi */
  edi = 0;
/* 991ad4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ad6: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991ada: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991adc: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 991add: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991adf: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991ae1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991ae3: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 991ae5: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 991ae7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991ae9: fmul qword ptr [0xa21b38] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b38u)));
/* 991aef: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 991af5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991af7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991af9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991afb: jmp 0x991b00 */
  goto L_991b00;
L_991b00: /* 991b00: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991b06: mov eax, edi */
  eax = edi;
/* 991b08: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991b0b: mov ecx, edi */
  ecx = edi;
/* 991b0d: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 991b10: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 991b13: mov edx, edi */
  edx = edi;
/* 991b15: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 991b18: shl ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 991b1b: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 991b1e: shl edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 991b21: add ecx, 0xcf36c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf36c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991b27: add eax, 0xcf3ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991b2c: add edx, 0xcf46c8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf46c8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991b32: cmp ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 991b35: ja 0x992a98 */
  if ((!cf && !zf)) goto L_992a98;
L_991b3b: /* 991b3b: jmp dword ptr [ebx*4 + 0x992de8] */
  switch (R32((uint32_t)(ebx*4 + 0x992de8u))) {
    case 0x991ef2u: goto L_991ef2;
    case 0x991f66u: goto L_991f66;
    case 0x991fdau: goto L_991fda;
    case 0x99204eu: goto L_99204e;
    case 0x9920c2u: goto L_9920c2;
    case 0x992136u: goto L_992136;
    case 0x9921aau: goto L_9921aa;
    case 0x99221eu: goto L_99221e;
    case 0x992292u: goto L_992292;
    case 0x992306u: goto L_992306;
    case 0x99237au: goto L_99237a;
    case 0x9923eeu: goto L_9923ee;
    case 0x992462u: goto L_992462;
    case 0x9924b2u: goto L_9924b2;
    case 0x992502u: goto L_992502;
    case 0x992552u: goto L_992552;
    case 0x9925cbu: goto L_9925cb;
    case 0x992621u: goto L_992621;
    case 0x992677u: goto L_992677;
    case 0x9926cdu: goto L_9926cd;
    case 0x992723u: goto L_992723;
    case 0x992779u: goto L_992779;
    case 0x9927cfu: goto L_9927cf;
    case 0x992825u: goto L_992825;
    case 0x99287bu: goto L_99287b;
    case 0x9928d1u: goto L_9928d1;
    case 0x992927u: goto L_992927;
    case 0x992974u: goto L_992974;
    case 0x9929afu: goto L_9929af;
    case 0x9929eau: goto L_9929ea;
    case 0x992a25u: goto L_992a25;
    case 0x992a60u: goto L_992a60;
    default: guest_badjump(0x991b3b, R32((uint32_t)(ebx*4 + 0x992de8u))); return;
  }
L_991b42: /* 991b42: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991b45: jne 0x992ac1 */
  if (!zf) goto L_992ac1;
L_991b4b: /* 991b4b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991b4e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 991b51: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991b54: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 991b5c: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
/* 991b60: mov esi, 0xcf4ed0 */
  esi = 0xcf4ed0u;
/* 991b65: mov eax, 0xcf36c8 */
  eax = 0xcf36c8u;
/* 991b6a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 991b6e: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_991b72: /* 991b72: mov ecx, esi */
  ecx = esi;
/* 991b74: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991b78: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 991b7c: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 991b80: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 991b84: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
/* 991b8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_991b90: /* 991b90: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 991b94: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 991b97: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 991b99: lea edx, [edx + eax*2 + 1] */
  edx = (uint32_t)(edx + eax*2 + 0x1u);
/* 991b9d: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 991ba2: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 991ba4: mov eax, edx */
  eax = edx;
/* 991ba6: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 991ba9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991bab: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 991bae: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 991bb1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 991bb3: lea edx, [eax + edx*2 + 1] */
  edx = (uint32_t)(eax + edx*2 + 0x1u);
/* 991bb7: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 991bbc: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 991bbe: mov eax, edx */
  eax = edx;
/* 991bc0: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 991bc3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991bc5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 991bc9: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 991bcc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 991bcf: fild dword ptr [ebx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 991bd2: xor edi, edi */
  edi = 0;
/* 991bd4: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991bd7: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991bd9: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bdf: fstp qword ptr [esi - 8] */
  WF64((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 991be2: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 991be4: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991be6: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bec: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 991bee: fild dword ptr [ebx + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 991bf1: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991bf3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bf9: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 991bfc: fild dword ptr [ebx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 991bff: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991c01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991c05: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991c0b: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 991c0e: jl 0x991d86 */
  if ((sf != of)) goto L_991d86;
L_991c14: /* 991c14: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 991c17: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 991c1b: mov ebx, 3 */
  ebx = 0x3u;
/* 991c20: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_991c23: /* 991c23: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c26: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c29: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991c2c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c32: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c35: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c37: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c3a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c3c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c42: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c45: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c48: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c4b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c4e: fstp qword ptr [eax - 0x50] */
  WF64((uint32_t)(eax + 0xffffffb0u), ST0); FPOP();
/* 991c51: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c53: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c56: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991c58: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c5a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c5c: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c5f: fstp qword ptr [eax - 0x48] */
  WF64((uint32_t)(eax + 0xffffffb8u), ST0); FPOP();
/* 991c62: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c64: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c67: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991c6a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c6c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c6e: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c71: fstp qword ptr [eax - 0x40] */
  WF64((uint32_t)(eax + 0xffffffc0u), ST0); FPOP();
/* 991c74: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c76: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c79: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991c7c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c7e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c80: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c83: fstp qword ptr [eax - 0x38] */
  WF64((uint32_t)(eax + 0xffffffc8u), ST0); FPOP();
/* 991c86: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c88: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991c8b: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991c8e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c90: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c92: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991c95: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991c98: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c9a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991c9d: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991c9f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ca1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991ca3: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991ca6: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 991ca9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cab: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991cae: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991cb1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cb3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cb5: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991cb8: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991cbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cbd: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991cc0: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991cc3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cc5: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991cc8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cca: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991ccd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ccf: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991cd1: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991cd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cd6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cd8: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991cda: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991cdd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cdf: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991ce1: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991ce3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ce5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991ce7: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991ce9: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991cec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cee: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991cf0: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991cf3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cf6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cf9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cfc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cfe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d03: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d06: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991d09: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d0c: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991d0e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991d11: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991d14: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991d17: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991d1a: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991d1d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d1f: fld qword ptr [edx - 0x60] */
  { double v = F64((uint32_t)(edx + 0xffffffa0u)); FPUSH(v); }
/* 991d22: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991d25: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d27: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d29: fmul qword ptr [esi - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe0u)));
/* 991d2c: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 991d2f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d31: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d34: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991d37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d39: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d3c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d3e: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991d41: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d43: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d46: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991d48: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d4a: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d4f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991d52: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d54: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d57: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991d5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d5c: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d5f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d61: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991d64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d66: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d69: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991d6c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d6e: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d71: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d73: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991d76: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d78: jl 0x991c23 */
  if ((sf != of)) goto L_991c23;
L_991d7e: /* 991d7e: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 991d82: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_991d86: /* 991d86: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991d89: jge 0x991e07 */
  if ((sf == of)) goto L_991e07;
L_991d8b: /* 991d8b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 991d8f: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 991d92: mov esi, edi */
  esi = edi;
/* 991d94: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991d96: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991d99: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 991d9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_991da0: /* 991da0: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991da2: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 991da5: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991da8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991dab: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991dae: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991db1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991db3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991db6: fmul qword ptr [esi + edi*8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8)));
/* 991db9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 991dba: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991dbd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dbf: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991dc2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991dc4: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dc7: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991dc9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991dcb: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991dcf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dd1: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991dd4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991dd6: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dd9: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991ddc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991dde: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991de2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991de4: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991de7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991de9: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dec: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991def: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991df1: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991df5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 991df8: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991dfa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dfc: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991dff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991e01: jl 0x991da0 */
  if ((sf != of)) goto L_991da0;
L_991e03: /* 991e03: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_991e07: /* 991e07: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 991e0b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991e0f: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991e12: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 991e16: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 991e1a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991e1d: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991e20: add eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991e25: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991e28: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 991e29: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 991e2d: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 991e31: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991e35: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 991e39: jne 0x991b90 */
  if (!zf) goto L_991b90;
L_991e3f: /* 991e3f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 991e43: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 991e47: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 991e4b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 991e4c: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 991e50: mov ecx, 8 */
  ecx = 0x8u;
/* 991e55: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991e57: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991e59: cmp eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991e5e: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 991e62: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 991e66: jl 0x991b72 */
  if ((sf != of)) goto L_991b72;
L_991e6c: /* 991e6c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 991e6f: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 991e72: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 991e75: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 991e78: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 991e7b: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 991e7d: xor edi, edi */
  edi = 0;
/* 991e7f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991e81: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991e85: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991e87: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 991e88: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991e8a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991e8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991e8e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 991e90: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 991e92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991e94: fmul qword ptr [0xa21b38] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b38u)));
/* 991e9a: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 991ea0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea6: jmp 0x991eb0 */
  goto L_991eb0;
L_991eb0: /* 991eb0: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991eb6: mov eax, edi */
  eax = edi;
/* 991eb8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991ebb: mov ecx, edi */
  ecx = edi;
/* 991ebd: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 991ec0: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 991ec3: mov edx, edi */
  edx = edi;
/* 991ec5: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 991ec8: shl ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 991ecb: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 991ece: shl edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 991ed1: add ecx, 0xcf36c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf36c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991ed7: add eax, 0xcf3ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991edc: add edx, 0xcf46c8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf46c8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991ee2: cmp ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 991ee5: ja 0x99259f */
  if ((!cf && !zf)) goto L_99259f;
L_991eeb: /* 991eeb: jmp dword ptr [ebx*4 + 0x992e28] */
  switch (R32((uint32_t)(ebx*4 + 0x992e28u))) {
    case 0x991ef2u: goto L_991ef2;
    case 0x991f66u: goto L_991f66;
    case 0x991fdau: goto L_991fda;
    case 0x99204eu: goto L_99204e;
    case 0x9920c2u: goto L_9920c2;
    case 0x992136u: goto L_992136;
    case 0x9921aau: goto L_9921aa;
    case 0x99221eu: goto L_99221e;
    case 0x992292u: goto L_992292;
    case 0x992306u: goto L_992306;
    case 0x99237au: goto L_99237a;
    case 0x9923eeu: goto L_9923ee;
    case 0x992462u: goto L_992462;
    case 0x9924b2u: goto L_9924b2;
    case 0x992502u: goto L_992502;
    case 0x992552u: goto L_992552;
    default: guest_badjump(0x991eeb, R32((uint32_t)(ebx*4 + 0x992e28u))); return;
  }
L_991ef2: /* 991ef2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ef4: fld qword ptr [edx + 0x1e0] */
  { double v = F64((uint32_t)(edx + 0x1e0u)); FPUSH(v); }
/* 991efa: fadd qword ptr [eax + 0x1e0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1e0u)));
/* 991f00: fadd qword ptr [ecx + 0x1e0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1e0u)));
/* 991f06: fld qword ptr [edx + 0x1e8] */
  { double v = F64((uint32_t)(edx + 0x1e8u)); FPUSH(v); }
/* 991f0c: fadd qword ptr [eax + 0x1e8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1e8u)));
/* 991f12: fadd qword ptr [ecx + 0x1e8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1e8u)));
/* 991f18: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f1a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f1c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f1e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f20: fabs  */
  ST0 = fabs(ST0);
/* 991f22: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f24: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f26: fld qword ptr [edx + 0x1f0] */
  { double v = F64((uint32_t)(edx + 0x1f0u)); FPUSH(v); }
/* 991f2c: fadd qword ptr [eax + 0x1f0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1f0u)));
/* 991f32: fadd qword ptr [ecx + 0x1f0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1f0u)));
/* 991f38: fld qword ptr [edx + 0x1f8] */
  { double v = F64((uint32_t)(edx + 0x1f8u)); FPUSH(v); }
/* 991f3e: fadd qword ptr [eax + 0x1f8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1f8u)));
/* 991f44: fadd qword ptr [ecx + 0x1f8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1f8u)));
/* 991f4a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f4c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f4e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f50: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f52: fabs  */
  ST0 = fabs(ST0);
/* 991f54: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f56: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f58: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991f5a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 991f5c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991f5e: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 991f60: fabs  */
  ST0 = fabs(ST0);
/* 991f62: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991f64: fstp st(1) */
  STI(1) = ST0; FPOP();
L_991f66: /* 991f66: fld qword ptr [edx + 0x1c0] */
  { double v = F64((uint32_t)(edx + 0x1c0u)); FPUSH(v); }
/* 991f6c: fadd qword ptr [eax + 0x1c0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1c0u)));
/* 991f72: fadd qword ptr [ecx + 0x1c0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1c0u)));
/* 991f78: fld qword ptr [edx + 0x1c8] */
  { double v = F64((uint32_t)(edx + 0x1c8u)); FPUSH(v); }
/* 991f7e: fadd qword ptr [eax + 0x1c8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1c8u)));
/* 991f84: fadd qword ptr [ecx + 0x1c8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1c8u)));
/* 991f8a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f8c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f8e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f90: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f92: fabs  */
  ST0 = fabs(ST0);
/* 991f94: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f96: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f98: fld qword ptr [edx + 0x1d0] */
  { double v = F64((uint32_t)(edx + 0x1d0u)); FPUSH(v); }
/* 991f9e: fadd qword ptr [eax + 0x1d0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1d0u)));
/* 991fa4: fadd qword ptr [ecx + 0x1d0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1d0u)));
/* 991faa: fld qword ptr [edx + 0x1d8] */
  { double v = F64((uint32_t)(edx + 0x1d8u)); FPUSH(v); }
/* 991fb0: fadd qword ptr [eax + 0x1d8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1d8u)));
/* 991fb6: fadd qword ptr [ecx + 0x1d8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1d8u)));
/* 991fbc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991fbe: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991fc0: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991fc2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991fc4: fabs  */
  ST0 = fabs(ST0);
/* 991fc6: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991fc8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991fca: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991fcc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 991fce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991fd0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 991fd2: fabs  */
  ST0 = fabs(ST0);
/* 991fd4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991fd6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 991fd8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_991fda: /* 991fda: fld qword ptr [edx + 0x1a0] */
  { double v = F64((uint32_t)(edx + 0x1a0u)); FPUSH(v); }
/* 991fe0: fadd qword ptr [eax + 0x1a0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1a0u)));
/* 991fe6: fadd qword ptr [ecx + 0x1a0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1a0u)));
/* 991fec: fld qword ptr [edx + 0x1a8] */
  { double v = F64((uint32_t)(edx + 0x1a8u)); FPUSH(v); }
/* 991ff2: fadd qword ptr [eax + 0x1a8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1a8u)));
/* 991ff8: fadd qword ptr [ecx + 0x1a8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1a8u)));
/* 991ffe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992000: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992002: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992004: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992006: fabs  */
  ST0 = fabs(ST0);
/* 992008: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99200a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99200c: fld qword ptr [edx + 0x1b0] */
  { double v = F64((uint32_t)(edx + 0x1b0u)); FPUSH(v); }
/* 992012: fadd qword ptr [eax + 0x1b0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1b0u)));
/* 992018: fadd qword ptr [ecx + 0x1b0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1b0u)));
/* 99201e: fld qword ptr [edx + 0x1b8] */
  { double v = F64((uint32_t)(edx + 0x1b8u)); FPUSH(v); }
/* 992024: fadd qword ptr [eax + 0x1b8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1b8u)));
/* 99202a: fadd qword ptr [ecx + 0x1b8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1b8u)));
/* 992030: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992032: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992034: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992036: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992038: fabs  */
  ST0 = fabs(ST0);
/* 99203a: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99203c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99203e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992040: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992042: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992044: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992046: fabs  */
  ST0 = fabs(ST0);
/* 992048: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99204a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99204c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99204e: /* 99204e: fld qword ptr [edx + 0x180] */
  { double v = F64((uint32_t)(edx + 0x180u)); FPUSH(v); }
/* 992054: fadd qword ptr [eax + 0x180] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x180u)));
/* 99205a: fadd qword ptr [ecx + 0x180] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x180u)));
/* 992060: fld qword ptr [edx + 0x188] */
  { double v = F64((uint32_t)(edx + 0x188u)); FPUSH(v); }
/* 992066: fadd qword ptr [eax + 0x188] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x188u)));
/* 99206c: fadd qword ptr [ecx + 0x188] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x188u)));
/* 992072: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992074: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992076: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992078: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99207a: fabs  */
  ST0 = fabs(ST0);
/* 99207c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99207e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992080: fld qword ptr [edx + 0x190] */
  { double v = F64((uint32_t)(edx + 0x190u)); FPUSH(v); }
/* 992086: fadd qword ptr [eax + 0x190] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x190u)));
/* 99208c: fadd qword ptr [ecx + 0x190] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x190u)));
/* 992092: fld qword ptr [edx + 0x198] */
  { double v = F64((uint32_t)(edx + 0x198u)); FPUSH(v); }
/* 992098: fadd qword ptr [eax + 0x198] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x198u)));
/* 99209e: fadd qword ptr [ecx + 0x198] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x198u)));
/* 9920a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9920a6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9920a8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9920aa: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9920ac: fabs  */
  ST0 = fabs(ST0);
/* 9920ae: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9920b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9920b2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9920b4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9920b6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9920b8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9920ba: fabs  */
  ST0 = fabs(ST0);
/* 9920bc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9920be: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9920c0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9920c2: /* 9920c2: fld qword ptr [edx + 0x160] */
  { double v = F64((uint32_t)(edx + 0x160u)); FPUSH(v); }
/* 9920c8: fadd qword ptr [eax + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x160u)));
/* 9920ce: fadd qword ptr [ecx + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x160u)));
/* 9920d4: fld qword ptr [edx + 0x168] */
  { double v = F64((uint32_t)(edx + 0x168u)); FPUSH(v); }
/* 9920da: fadd qword ptr [eax + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x168u)));
/* 9920e0: fadd qword ptr [ecx + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x168u)));
/* 9920e6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9920e8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9920ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9920ec: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9920ee: fabs  */
  ST0 = fabs(ST0);
/* 9920f0: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9920f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9920f4: fld qword ptr [edx + 0x170] */
  { double v = F64((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 9920fa: fadd qword ptr [eax + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x170u)));
/* 992100: fadd qword ptr [ecx + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x170u)));
/* 992106: fld qword ptr [edx + 0x178] */
  { double v = F64((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 99210c: fadd qword ptr [eax + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x178u)));
/* 992112: fadd qword ptr [ecx + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x178u)));
/* 992118: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99211a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99211c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99211e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992120: fabs  */
  ST0 = fabs(ST0);
/* 992122: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992124: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992126: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992128: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99212a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99212c: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99212e: fabs  */
  ST0 = fabs(ST0);
/* 992130: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992132: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992134: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992136: /* 992136: fld qword ptr [edx + 0x140] */
  { double v = F64((uint32_t)(edx + 0x140u)); FPUSH(v); }
/* 99213c: fadd qword ptr [eax + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x140u)));
/* 992142: fadd qword ptr [ecx + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x140u)));
/* 992148: fld qword ptr [edx + 0x148] */
  { double v = F64((uint32_t)(edx + 0x148u)); FPUSH(v); }
/* 99214e: fadd qword ptr [eax + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x148u)));
/* 992154: fadd qword ptr [ecx + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x148u)));
/* 99215a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99215c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99215e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992160: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992162: fabs  */
  ST0 = fabs(ST0);
/* 992164: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992166: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992168: fld qword ptr [edx + 0x150] */
  { double v = F64((uint32_t)(edx + 0x150u)); FPUSH(v); }
/* 99216e: fadd qword ptr [eax + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x150u)));
/* 992174: fadd qword ptr [ecx + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x150u)));
/* 99217a: fld qword ptr [edx + 0x158] */
  { double v = F64((uint32_t)(edx + 0x158u)); FPUSH(v); }
/* 992180: fadd qword ptr [eax + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x158u)));
/* 992186: fadd qword ptr [ecx + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x158u)));
/* 99218c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99218e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992190: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992192: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992194: fabs  */
  ST0 = fabs(ST0);
/* 992196: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992198: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99219a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99219c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99219e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9921a0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9921a2: fabs  */
  ST0 = fabs(ST0);
/* 9921a4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9921a6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9921a8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9921aa: /* 9921aa: fld qword ptr [edx + 0x120] */
  { double v = F64((uint32_t)(edx + 0x120u)); FPUSH(v); }
/* 9921b0: fadd qword ptr [eax + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x120u)));
/* 9921b6: fadd qword ptr [ecx + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x120u)));
/* 9921bc: fld qword ptr [edx + 0x128] */
  { double v = F64((uint32_t)(edx + 0x128u)); FPUSH(v); }
/* 9921c2: fadd qword ptr [eax + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x128u)));
/* 9921c8: fadd qword ptr [ecx + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x128u)));
/* 9921ce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9921d0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9921d2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9921d4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9921d6: fabs  */
  ST0 = fabs(ST0);
/* 9921d8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9921da: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9921dc: fld qword ptr [edx + 0x130] */
  { double v = F64((uint32_t)(edx + 0x130u)); FPUSH(v); }
/* 9921e2: fadd qword ptr [eax + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x130u)));
/* 9921e8: fadd qword ptr [ecx + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x130u)));
/* 9921ee: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 9921f4: fadd qword ptr [eax + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x138u)));
/* 9921fa: fadd qword ptr [ecx + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x138u)));
/* 992200: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992202: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992204: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992206: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992208: fabs  */
  ST0 = fabs(ST0);
/* 99220a: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99220c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99220e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992210: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992212: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992214: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992216: fabs  */
  ST0 = fabs(ST0);
/* 992218: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99221a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99221c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99221e: /* 99221e: fld qword ptr [edx + 0x100] */
  { double v = F64((uint32_t)(edx + 0x100u)); FPUSH(v); }
/* 992224: fadd qword ptr [eax + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x100u)));
/* 99222a: fadd qword ptr [ecx + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x100u)));
/* 992230: fld qword ptr [edx + 0x108] */
  { double v = F64((uint32_t)(edx + 0x108u)); FPUSH(v); }
/* 992236: fadd qword ptr [eax + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x108u)));
/* 99223c: fadd qword ptr [ecx + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x108u)));
/* 992242: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992244: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992246: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992248: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99224a: fabs  */
  ST0 = fabs(ST0);
/* 99224c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99224e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992250: fld qword ptr [edx + 0x110] */
  { double v = F64((uint32_t)(edx + 0x110u)); FPUSH(v); }
/* 992256: fadd qword ptr [eax + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x110u)));
/* 99225c: fadd qword ptr [ecx + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x110u)));
/* 992262: fld qword ptr [edx + 0x118] */
  { double v = F64((uint32_t)(edx + 0x118u)); FPUSH(v); }
/* 992268: fadd qword ptr [eax + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x118u)));
/* 99226e: fadd qword ptr [ecx + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x118u)));
/* 992274: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992276: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992278: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99227a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99227c: fabs  */
  ST0 = fabs(ST0);
/* 99227e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992280: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992282: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992284: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992286: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992288: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99228a: fabs  */
  ST0 = fabs(ST0);
/* 99228c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99228e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992290: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992292: /* 992292: fld qword ptr [edx + 0xe0] */
  { double v = F64((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 992298: fadd qword ptr [eax + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe0u)));
/* 99229e: fadd qword ptr [ecx + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe0u)));
/* 9922a4: fld qword ptr [edx + 0xe8] */
  { double v = F64((uint32_t)(edx + 0xe8u)); FPUSH(v); }
/* 9922aa: fadd qword ptr [eax + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe8u)));
/* 9922b0: fadd qword ptr [ecx + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe8u)));
/* 9922b6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9922b8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9922ba: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9922bc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9922be: fabs  */
  ST0 = fabs(ST0);
/* 9922c0: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9922c2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9922c4: fld qword ptr [edx + 0xf0] */
  { double v = F64((uint32_t)(edx + 0xf0u)); FPUSH(v); }
/* 9922ca: fadd qword ptr [eax + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf0u)));
/* 9922d0: fadd qword ptr [ecx + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf0u)));
/* 9922d6: fld qword ptr [edx + 0xf8] */
  { double v = F64((uint32_t)(edx + 0xf8u)); FPUSH(v); }
/* 9922dc: fadd qword ptr [eax + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf8u)));
/* 9922e2: fadd qword ptr [ecx + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf8u)));
/* 9922e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9922ea: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9922ec: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9922ee: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9922f0: fabs  */
  ST0 = fabs(ST0);
/* 9922f2: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9922f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9922f6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9922f8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9922fa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9922fc: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9922fe: fabs  */
  ST0 = fabs(ST0);
/* 992300: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992302: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992304: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992306: /* 992306: fld qword ptr [edx + 0xc0] */
  { double v = F64((uint32_t)(edx + 0xc0u)); FPUSH(v); }
/* 99230c: fadd qword ptr [eax + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc0u)));
/* 992312: fadd qword ptr [ecx + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc0u)));
/* 992318: fld qword ptr [edx + 0xc8] */
  { double v = F64((uint32_t)(edx + 0xc8u)); FPUSH(v); }
/* 99231e: fadd qword ptr [eax + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc8u)));
/* 992324: fadd qword ptr [ecx + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc8u)));
/* 99232a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99232c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99232e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992330: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992332: fabs  */
  ST0 = fabs(ST0);
/* 992334: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992336: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992338: fld qword ptr [edx + 0xd0] */
  { double v = F64((uint32_t)(edx + 0xd0u)); FPUSH(v); }
/* 99233e: fadd qword ptr [eax + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd0u)));
/* 992344: fadd qword ptr [ecx + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd0u)));
/* 99234a: fld qword ptr [edx + 0xd8] */
  { double v = F64((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 992350: fadd qword ptr [eax + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd8u)));
/* 992356: fadd qword ptr [ecx + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd8u)));
/* 99235c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99235e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992360: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992362: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992364: fabs  */
  ST0 = fabs(ST0);
/* 992366: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992368: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99236a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99236c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99236e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992370: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992372: fabs  */
  ST0 = fabs(ST0);
/* 992374: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992376: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992378: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99237a: /* 99237a: fld qword ptr [edx + 0xa0] */
  { double v = F64((uint32_t)(edx + 0xa0u)); FPUSH(v); }
/* 992380: fadd qword ptr [eax + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa0u)));
/* 992386: fadd qword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa0u)));
/* 99238c: fld qword ptr [edx + 0xa8] */
  { double v = F64((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* 992392: fadd qword ptr [eax + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa8u)));
/* 992398: fadd qword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa8u)));
/* 99239e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9923a0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9923a2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9923a4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9923a6: fabs  */
  ST0 = fabs(ST0);
/* 9923a8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9923aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9923ac: fld qword ptr [edx + 0xb0] */
  { double v = F64((uint32_t)(edx + 0xb0u)); FPUSH(v); }
/* 9923b2: fadd qword ptr [eax + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb0u)));
/* 9923b8: fadd qword ptr [ecx + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb0u)));
/* 9923be: fld qword ptr [edx + 0xb8] */
  { double v = F64((uint32_t)(edx + 0xb8u)); FPUSH(v); }
/* 9923c4: fadd qword ptr [eax + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb8u)));
/* 9923ca: fadd qword ptr [ecx + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb8u)));
/* 9923d0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9923d2: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9923d4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9923d6: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9923d8: fabs  */
  ST0 = fabs(ST0);
/* 9923da: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9923dc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9923de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9923e0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9923e2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9923e4: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9923e6: fabs  */
  ST0 = fabs(ST0);
/* 9923e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9923ea: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9923ec: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9923ee: /* 9923ee: fld qword ptr [edx + 0x80] */
  { double v = F64((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 9923f4: fadd qword ptr [eax + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x80u)));
/* 9923fa: fadd qword ptr [ecx + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x80u)));
/* 992400: fld qword ptr [edx + 0x88] */
  { double v = F64((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 992406: fadd qword ptr [eax + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x88u)));
/* 99240c: fadd qword ptr [ecx + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x88u)));
/* 992412: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992414: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992416: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992418: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99241a: fabs  */
  ST0 = fabs(ST0);
/* 99241c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99241e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992420: fld qword ptr [edx + 0x90] */
  { double v = F64((uint32_t)(edx + 0x90u)); FPUSH(v); }
/* 992426: fadd qword ptr [eax + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x90u)));
/* 99242c: fadd qword ptr [ecx + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x90u)));
/* 992432: fld qword ptr [edx + 0x98] */
  { double v = F64((uint32_t)(edx + 0x98u)); FPUSH(v); }
/* 992438: fadd qword ptr [eax + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x98u)));
/* 99243e: fadd qword ptr [ecx + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x98u)));
/* 992444: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992446: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992448: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99244a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99244c: fabs  */
  ST0 = fabs(ST0);
/* 99244e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992450: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992452: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992454: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992456: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992458: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99245a: fabs  */
  ST0 = fabs(ST0);
/* 99245c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99245e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992460: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992462: /* 992462: fld qword ptr [edx + 0x60] */
  { double v = F64((uint32_t)(edx + 0x60u)); FPUSH(v); }
/* 992465: fadd qword ptr [eax + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x60u)));
/* 992468: fadd qword ptr [ecx + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x60u)));
/* 99246b: fld qword ptr [edx + 0x68] */
  { double v = F64((uint32_t)(edx + 0x68u)); FPUSH(v); }
/* 99246e: fadd qword ptr [eax + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x68u)));
/* 992471: fadd qword ptr [ecx + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x68u)));
/* 992474: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992476: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992478: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99247a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99247c: fabs  */
  ST0 = fabs(ST0);
/* 99247e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992480: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992482: fld qword ptr [edx + 0x70] */
  { double v = F64((uint32_t)(edx + 0x70u)); FPUSH(v); }
/* 992485: fadd qword ptr [eax + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x70u)));
/* 992488: fadd qword ptr [ecx + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x70u)));
/* 99248b: fld qword ptr [edx + 0x78] */
  { double v = F64((uint32_t)(edx + 0x78u)); FPUSH(v); }
/* 99248e: fadd qword ptr [eax + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x78u)));
/* 992491: fadd qword ptr [ecx + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x78u)));
/* 992494: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992496: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992498: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99249a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99249c: fabs  */
  ST0 = fabs(ST0);
/* 99249e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924a2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9924a4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9924a6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9924a8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9924aa: fabs  */
  ST0 = fabs(ST0);
/* 9924ac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9924ae: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9924b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9924b2: /* 9924b2: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 9924b5: fadd qword ptr [eax + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x40u)));
/* 9924b8: fadd qword ptr [ecx + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x40u)));
/* 9924bb: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 9924be: fadd qword ptr [eax + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x48u)));
/* 9924c1: fadd qword ptr [ecx + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x48u)));
/* 9924c4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9924c6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9924c8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9924ca: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9924cc: fabs  */
  ST0 = fabs(ST0);
/* 9924ce: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924d2: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 9924d5: fadd qword ptr [eax + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x50u)));
/* 9924d8: fadd qword ptr [ecx + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x50u)));
/* 9924db: fld qword ptr [edx + 0x58] */
  { double v = F64((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 9924de: fadd qword ptr [eax + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x58u)));
/* 9924e1: fadd qword ptr [ecx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x58u)));
/* 9924e4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9924e6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9924e8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9924ea: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9924ec: fabs  */
  ST0 = fabs(ST0);
/* 9924ee: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924f2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9924f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9924f6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9924f8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9924fa: fabs  */
  ST0 = fabs(ST0);
/* 9924fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9924fe: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992500: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992502: /* 992502: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 992505: fadd qword ptr [eax + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x20u)));
/* 992508: fadd qword ptr [ecx + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x20u)));
/* 99250b: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 99250e: fadd qword ptr [eax + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x28u)));
/* 992511: fadd qword ptr [ecx + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x28u)));
/* 992514: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992516: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992518: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99251a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99251c: fabs  */
  ST0 = fabs(ST0);
/* 99251e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992520: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992522: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 992525: fadd qword ptr [eax + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x30u)));
/* 992528: fadd qword ptr [ecx + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x30u)));
/* 99252b: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 99252e: fadd qword ptr [eax + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x38u)));
/* 992531: fadd qword ptr [ecx + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x38u)));
/* 992534: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992536: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992538: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99253a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99253c: fabs  */
  ST0 = fabs(ST0);
/* 99253e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992540: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992542: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992544: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992546: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992548: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99254a: fabs  */
  ST0 = fabs(ST0);
/* 99254c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99254e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992550: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992552: /* 992552: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 992554: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 992556: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 992558: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 99255b: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 99255e: fadd qword ptr [ecx + 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x8u)));
/* 992561: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992563: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992565: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992567: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992569: fabs  */
  ST0 = fabs(ST0);
/* 99256b: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99256d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99256f: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 992572: fadd qword ptr [eax + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x10u)));
/* 992575: fadd qword ptr [ecx + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x10u)));
/* 992578: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 99257b: fadd qword ptr [eax + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x18u)));
/* 99257e: fadd qword ptr [ecx + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x18u)));
/* 992581: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992583: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992585: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992587: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992589: fabs  */
  ST0 = fabs(ST0);
/* 99258b: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99258d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99258f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992591: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992593: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992595: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992597: fabs  */
  ST0 = fabs(ST0);
/* 992599: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99259b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99259d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99259f: /* 99259f: fcom qword ptr [0xcf36c0] */
  fpu_com(ST0, F64((uint32_t)(0xcf36c0u)));
/* 9925a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9925a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9925aa: jp 0x9925b6 */
  if (pf) goto L_9925b6;
L_9925ac: /* 9925ac: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 9925b2: mov esi, edi */
  esi = edi;
/* 9925b4: jmp 0x9925b8 */
  goto L_9925b8;
L_9925b6: /* 9925b6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9925b8: /* 9925b8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9925b9: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9925bc: jl 0x991eb0 */
  if ((sf != of)) goto L_991eb0;
L_9925c2: /* 9925c2: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9925c6: jmp 0x992ac5 */
  goto L_992ac5;
L_9925cb: /* 9925cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9925cd: fld qword ptr [edx + 0x168] */
  { double v = F64((uint32_t)(edx + 0x168u)); FPUSH(v); }
/* 9925d3: fadd qword ptr [eax + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x168u)));
/* 9925d9: fadd qword ptr [ecx + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x168u)));
/* 9925df: fld qword ptr [edx + 0x170] */
  { double v = F64((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 9925e5: fadd qword ptr [eax + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x170u)));
/* 9925eb: fadd qword ptr [ecx + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x170u)));
/* 9925f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9925f3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9925f5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9925f7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9925f9: fabs  */
  ST0 = fabs(ST0);
/* 9925fb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9925fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9925ff: fld qword ptr [edx + 0x178] */
  { double v = F64((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 992605: fadd qword ptr [eax + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x178u)));
/* 99260b: fadd qword ptr [ecx + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x178u)));
/* 992611: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992613: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992615: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992617: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992619: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99261b: fabs  */
  ST0 = fabs(ST0);
/* 99261d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99261f: fstp st(1) */
  STI(1) = ST0; FPOP();
L_992621: /* 992621: fld qword ptr [edx + 0x150] */
  { double v = F64((uint32_t)(edx + 0x150u)); FPUSH(v); }
/* 992627: fadd qword ptr [eax + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x150u)));
/* 99262d: fadd qword ptr [ecx + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x150u)));
/* 992633: fld qword ptr [edx + 0x158] */
  { double v = F64((uint32_t)(edx + 0x158u)); FPUSH(v); }
/* 992639: fadd qword ptr [eax + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x158u)));
/* 99263f: fadd qword ptr [ecx + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x158u)));
/* 992645: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992647: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992649: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99264b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99264d: fabs  */
  ST0 = fabs(ST0);
/* 99264f: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992651: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992653: fld qword ptr [edx + 0x160] */
  { double v = F64((uint32_t)(edx + 0x160u)); FPUSH(v); }
/* 992659: fadd qword ptr [eax + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x160u)));
/* 99265f: fadd qword ptr [ecx + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x160u)));
/* 992665: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992667: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992669: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99266b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99266d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99266f: fabs  */
  ST0 = fabs(ST0);
/* 992671: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992673: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992675: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992677: /* 992677: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 99267d: fadd qword ptr [eax + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x138u)));
/* 992683: fadd qword ptr [ecx + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x138u)));
/* 992689: fld qword ptr [edx + 0x140] */
  { double v = F64((uint32_t)(edx + 0x140u)); FPUSH(v); }
/* 99268f: fadd qword ptr [eax + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x140u)));
/* 992695: fadd qword ptr [ecx + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x140u)));
/* 99269b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99269d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99269f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9926a1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9926a3: fabs  */
  ST0 = fabs(ST0);
/* 9926a5: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9926a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9926a9: fld qword ptr [edx + 0x148] */
  { double v = F64((uint32_t)(edx + 0x148u)); FPUSH(v); }
/* 9926af: fadd qword ptr [eax + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x148u)));
/* 9926b5: fadd qword ptr [ecx + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x148u)));
/* 9926bb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9926bd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9926bf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9926c1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9926c3: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9926c5: fabs  */
  ST0 = fabs(ST0);
/* 9926c7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9926c9: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9926cb: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9926cd: /* 9926cd: fld qword ptr [edx + 0x120] */
  { double v = F64((uint32_t)(edx + 0x120u)); FPUSH(v); }
/* 9926d3: fadd qword ptr [eax + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x120u)));
/* 9926d9: fadd qword ptr [ecx + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x120u)));
/* 9926df: fld qword ptr [edx + 0x128] */
  { double v = F64((uint32_t)(edx + 0x128u)); FPUSH(v); }
/* 9926e5: fadd qword ptr [eax + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x128u)));
/* 9926eb: fadd qword ptr [ecx + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x128u)));
/* 9926f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9926f3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9926f5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9926f7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9926f9: fabs  */
  ST0 = fabs(ST0);
/* 9926fb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9926fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9926ff: fld qword ptr [edx + 0x130] */
  { double v = F64((uint32_t)(edx + 0x130u)); FPUSH(v); }
/* 992705: fadd qword ptr [eax + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x130u)));
/* 99270b: fadd qword ptr [ecx + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x130u)));
/* 992711: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992713: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992715: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992717: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992719: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99271b: fabs  */
  ST0 = fabs(ST0);
/* 99271d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99271f: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992721: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992723: /* 992723: fld qword ptr [edx + 0x108] */
  { double v = F64((uint32_t)(edx + 0x108u)); FPUSH(v); }
/* 992729: fadd qword ptr [eax + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x108u)));
/* 99272f: fadd qword ptr [ecx + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x108u)));
/* 992735: fld qword ptr [edx + 0x110] */
  { double v = F64((uint32_t)(edx + 0x110u)); FPUSH(v); }
/* 99273b: fadd qword ptr [eax + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x110u)));
/* 992741: fadd qword ptr [ecx + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x110u)));
/* 992747: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992749: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99274b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99274d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99274f: fabs  */
  ST0 = fabs(ST0);
/* 992751: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992753: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992755: fld qword ptr [edx + 0x118] */
  { double v = F64((uint32_t)(edx + 0x118u)); FPUSH(v); }
/* 99275b: fadd qword ptr [eax + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x118u)));
/* 992761: fadd qword ptr [ecx + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x118u)));
/* 992767: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992769: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99276b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99276d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99276f: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992771: fabs  */
  ST0 = fabs(ST0);
/* 992773: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992775: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992777: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992779: /* 992779: fld qword ptr [edx + 0xf0] */
  { double v = F64((uint32_t)(edx + 0xf0u)); FPUSH(v); }
/* 99277f: fadd qword ptr [eax + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf0u)));
/* 992785: fadd qword ptr [ecx + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf0u)));
/* 99278b: fld qword ptr [edx + 0xf8] */
  { double v = F64((uint32_t)(edx + 0xf8u)); FPUSH(v); }
/* 992791: fadd qword ptr [eax + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf8u)));
/* 992797: fadd qword ptr [ecx + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf8u)));
/* 99279d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99279f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9927a1: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9927a3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9927a5: fabs  */
  ST0 = fabs(ST0);
/* 9927a7: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9927a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9927ab: fld qword ptr [edx + 0x100] */
  { double v = F64((uint32_t)(edx + 0x100u)); FPUSH(v); }
/* 9927b1: fadd qword ptr [eax + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x100u)));
/* 9927b7: fadd qword ptr [ecx + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x100u)));
/* 9927bd: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9927bf: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9927c1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9927c3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9927c5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9927c7: fabs  */
  ST0 = fabs(ST0);
/* 9927c9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9927cb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9927cd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9927cf: /* 9927cf: fld qword ptr [edx + 0xd8] */
  { double v = F64((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 9927d5: fadd qword ptr [eax + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd8u)));
/* 9927db: fadd qword ptr [ecx + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd8u)));
/* 9927e1: fld qword ptr [edx + 0xe0] */
  { double v = F64((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 9927e7: fadd qword ptr [eax + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe0u)));
/* 9927ed: fadd qword ptr [ecx + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe0u)));
/* 9927f3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9927f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9927f7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9927f9: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9927fb: fabs  */
  ST0 = fabs(ST0);
/* 9927fd: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9927ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992801: fld qword ptr [edx + 0xe8] */
  { double v = F64((uint32_t)(edx + 0xe8u)); FPUSH(v); }
/* 992807: fadd qword ptr [eax + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe8u)));
/* 99280d: fadd qword ptr [ecx + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe8u)));
/* 992813: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992815: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992817: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992819: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99281b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99281d: fabs  */
  ST0 = fabs(ST0);
/* 99281f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992821: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992823: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992825: /* 992825: fld qword ptr [edx + 0xc0] */
  { double v = F64((uint32_t)(edx + 0xc0u)); FPUSH(v); }
/* 99282b: fadd qword ptr [eax + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc0u)));
/* 992831: fadd qword ptr [ecx + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc0u)));
/* 992837: fld qword ptr [edx + 0xc8] */
  { double v = F64((uint32_t)(edx + 0xc8u)); FPUSH(v); }
/* 99283d: fadd qword ptr [eax + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc8u)));
/* 992843: fadd qword ptr [ecx + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc8u)));
/* 992849: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99284b: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99284d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99284f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992851: fabs  */
  ST0 = fabs(ST0);
/* 992853: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992855: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992857: fld qword ptr [edx + 0xd0] */
  { double v = F64((uint32_t)(edx + 0xd0u)); FPUSH(v); }
/* 99285d: fadd qword ptr [eax + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd0u)));
/* 992863: fadd qword ptr [ecx + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd0u)));
/* 992869: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99286b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99286d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99286f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992871: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992873: fabs  */
  ST0 = fabs(ST0);
/* 992875: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992877: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992879: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99287b: /* 99287b: fld qword ptr [edx + 0xa8] */
  { double v = F64((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* 992881: fadd qword ptr [eax + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa8u)));
/* 992887: fadd qword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa8u)));
/* 99288d: fld qword ptr [edx + 0xb0] */
  { double v = F64((uint32_t)(edx + 0xb0u)); FPUSH(v); }
/* 992893: fadd qword ptr [eax + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb0u)));
/* 992899: fadd qword ptr [ecx + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb0u)));
/* 99289f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9928a1: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9928a3: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9928a5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9928a7: fabs  */
  ST0 = fabs(ST0);
/* 9928a9: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9928ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9928ad: fld qword ptr [edx + 0xb8] */
  { double v = F64((uint32_t)(edx + 0xb8u)); FPUSH(v); }
/* 9928b3: fadd qword ptr [eax + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb8u)));
/* 9928b9: fadd qword ptr [ecx + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb8u)));
/* 9928bf: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9928c1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9928c3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9928c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9928c7: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9928c9: fabs  */
  ST0 = fabs(ST0);
/* 9928cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9928cd: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9928cf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9928d1: /* 9928d1: fld qword ptr [edx + 0x90] */
  { double v = F64((uint32_t)(edx + 0x90u)); FPUSH(v); }
/* 9928d7: fadd qword ptr [eax + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x90u)));
/* 9928dd: fadd qword ptr [ecx + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x90u)));
/* 9928e3: fld qword ptr [edx + 0x98] */
  { double v = F64((uint32_t)(edx + 0x98u)); FPUSH(v); }
/* 9928e9: fadd qword ptr [eax + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x98u)));
/* 9928ef: fadd qword ptr [ecx + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x98u)));
/* 9928f5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9928f7: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9928f9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9928fb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9928fd: fabs  */
  ST0 = fabs(ST0);
/* 9928ff: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992903: fld qword ptr [edx + 0xa0] */
  { double v = F64((uint32_t)(edx + 0xa0u)); FPUSH(v); }
/* 992909: fadd qword ptr [eax + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa0u)));
/* 99290f: fadd qword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa0u)));
/* 992915: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992917: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992919: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99291b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99291d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99291f: fabs  */
  ST0 = fabs(ST0);
/* 992921: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992923: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992925: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992927: /* 992927: fld qword ptr [edx + 0x78] */
  { double v = F64((uint32_t)(edx + 0x78u)); FPUSH(v); }
/* 99292a: fadd qword ptr [eax + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x78u)));
/* 99292d: fadd qword ptr [ecx + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x78u)));
/* 992930: fld qword ptr [edx + 0x80] */
  { double v = F64((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 992936: fadd qword ptr [eax + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x80u)));
/* 99293c: fadd qword ptr [ecx + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x80u)));
/* 992942: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992944: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992946: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992948: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99294a: fabs  */
  ST0 = fabs(ST0);
/* 99294c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99294e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992950: fld qword ptr [edx + 0x88] */
  { double v = F64((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 992956: fadd qword ptr [eax + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x88u)));
/* 99295c: fadd qword ptr [ecx + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x88u)));
/* 992962: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992964: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992966: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992968: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99296a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99296c: fabs  */
  ST0 = fabs(ST0);
/* 99296e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992970: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992972: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992974: /* 992974: fld qword ptr [edx + 0x60] */
  { double v = F64((uint32_t)(edx + 0x60u)); FPUSH(v); }
/* 992977: fadd qword ptr [eax + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x60u)));
/* 99297a: fadd qword ptr [ecx + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x60u)));
/* 99297d: fld qword ptr [edx + 0x68] */
  { double v = F64((uint32_t)(edx + 0x68u)); FPUSH(v); }
/* 992980: fadd qword ptr [eax + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x68u)));
/* 992983: fadd qword ptr [ecx + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x68u)));
/* 992986: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992988: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99298a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99298c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99298e: fabs  */
  ST0 = fabs(ST0);
/* 992990: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992992: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992994: fld qword ptr [edx + 0x70] */
  { double v = F64((uint32_t)(edx + 0x70u)); FPUSH(v); }
/* 992997: fadd qword ptr [eax + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x70u)));
/* 99299a: fadd qword ptr [ecx + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x70u)));
/* 99299d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99299f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9929a1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9929a3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9929a5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9929a7: fabs  */
  ST0 = fabs(ST0);
/* 9929a9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9929ab: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9929ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9929af: /* 9929af: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 9929b2: fadd qword ptr [eax + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x48u)));
/* 9929b5: fadd qword ptr [ecx + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x48u)));
/* 9929b8: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 9929bb: fadd qword ptr [eax + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x50u)));
/* 9929be: fadd qword ptr [ecx + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x50u)));
/* 9929c1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9929c3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9929c5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9929c7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9929c9: fabs  */
  ST0 = fabs(ST0);
/* 9929cb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9929cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9929cf: fld qword ptr [edx + 0x58] */
  { double v = F64((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 9929d2: fadd qword ptr [eax + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x58u)));
/* 9929d5: fadd qword ptr [ecx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x58u)));
/* 9929d8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9929da: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9929dc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9929de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9929e0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9929e2: fabs  */
  ST0 = fabs(ST0);
/* 9929e4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9929e6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9929e8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9929ea: /* 9929ea: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 9929ed: fadd qword ptr [eax + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x30u)));
/* 9929f0: fadd qword ptr [ecx + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x30u)));
/* 9929f3: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 9929f6: fadd qword ptr [eax + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x38u)));
/* 9929f9: fadd qword ptr [ecx + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x38u)));
/* 9929fc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9929fe: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a00: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a02: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a04: fabs  */
  ST0 = fabs(ST0);
/* 992a06: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a08: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a0a: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 992a0d: fadd qword ptr [eax + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x40u)));
/* 992a10: fadd qword ptr [ecx + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x40u)));
/* 992a13: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a15: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a17: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a19: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a1b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a1d: fabs  */
  ST0 = fabs(ST0);
/* 992a1f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a21: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a23: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a25: /* 992a25: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 992a28: fadd qword ptr [eax + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x18u)));
/* 992a2b: fadd qword ptr [ecx + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x18u)));
/* 992a2e: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 992a31: fadd qword ptr [eax + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x20u)));
/* 992a34: fadd qword ptr [ecx + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x20u)));
/* 992a37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992a39: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a3b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a3d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a3f: fabs  */
  ST0 = fabs(ST0);
/* 992a41: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a43: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a45: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 992a48: fadd qword ptr [eax + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x28u)));
/* 992a4b: fadd qword ptr [ecx + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x28u)));
/* 992a4e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a50: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a52: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a56: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a58: fabs  */
  ST0 = fabs(ST0);
/* 992a5a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a5c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a5e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a60: /* 992a60: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 992a62: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 992a64: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 992a66: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 992a69: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 992a6c: fadd qword ptr [ecx + 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x8u)));
/* 992a6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992a71: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a73: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a75: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a77: fabs  */
  ST0 = fabs(ST0);
/* 992a79: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a7b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a7d: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 992a80: fadd qword ptr [eax + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x10u)));
/* 992a83: fadd qword ptr [ecx + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x10u)));
/* 992a86: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a88: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a8a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a8c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a8e: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a90: fabs  */
  ST0 = fabs(ST0);
/* 992a92: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a94: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a96: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a98: /* 992a98: fcom qword ptr [0xcf36c0] */
  fpu_com(ST0, F64((uint32_t)(0xcf36c0u)));
/* 992a9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992aa0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992aa3: jp 0x992aaf */
  if (pf) goto L_992aaf;
L_992aa5: /* 992aa5: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 992aab: mov esi, edi */
  esi = edi;
/* 992aad: jmp 0x992ab1 */
  goto L_992ab1;
L_992aaf: /* 992aaf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992ab1: /* 992ab1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992ab2: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992ab5: jl 0x991b00 */
  if ((sf != of)) goto L_991b00;
L_992abb: /* 992abb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 992abf: jmp 0x992ac5 */
  goto L_992ac5;
L_992ac1: /* 992ac1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_992ac5: /* 992ac5: mov eax, esi */
  eax = esi;
/* 992ac7: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 992aca: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 992acd: add eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992ad2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 992ad6: mov eax, esi */
  eax = esi;
/* 992ad8: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 992adb: mov ebx, esi */
  ebx = esi;
/* 992add: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 992ae0: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 992ae3: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 992ae6: add eax, 0xcf4fc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4fc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992aeb: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 992aee: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992af2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 992af5: add ebx, 0xcf4f48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcf4f48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 992afb: xor edi, edi */
  edi = 0;
/* 992afd: sub eax, 0xb04360 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb04360u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 992b02: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 992b06: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 992b0a: jmp 0x992b10 */
  goto L_992b10;
L_992b0c: /* 992b0c: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_992b10: /* 992b10: mov eax, esi */
  eax = esi;
/* 992b12: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* 992b15: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 992b17: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 992b1e: mov esi, dword ptr [edx + 0xb04360] */
  esi = R32((uint32_t)(edx + 0xb04360u));
/* 992b24: mov ecx, 8 */
  ecx = 0x8u;
/* 992b29: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 992b2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992b2e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 992b30: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 992b33: mov esi, dword ptr [esp + eax + 0x40] */
  esi = R32((uint32_t)(esp + eax + 0x40u));
/* 992b37: mov eax, dword ptr [esp + eax + 0x44] */
  eax = R32((uint32_t)(esp + eax + 0x44u));
/* 992b3b: sar esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
  }
/* 992b3d: mov ecx, esi */
  ecx = esi;
/* 992b3f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 992b43: mov dword ptr [esi + edx + 0xb04360], ecx */
  W32((uint32_t)(esi + edx + 0xb04360u), ecx);
/* 992b4a: mov ecx, 8 */
  ecx = 0x8u;
/* 992b4f: sub ecx, dword ptr [edx + 0xb04360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xb04360u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 992b55: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 992b57: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992b58: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992b5b: mov dword ptr [esi + edx + 0xb0436c], eax */
  W32((uint32_t)(esi + edx + 0xb0436cu), eax);
/* 992b62: jl 0x992b0c */
  if ((sf != of)) goto L_992b0c;
L_992b64: /* 992b64: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 992b67: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 992b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992b6f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 992b77: jle 0x992de0 */
  if ((zf || sf != of)) goto L_992de0;
L_992b7d: /* 992b7d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 992b80: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 992b84: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 992b87: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_992b8a: /* 992b8a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 992b8d: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 992b90: xor edi, edi */
  edi = 0;
/* 992b92: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 992b95: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* 992b9d: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 992b9f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 992ba2: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992ba5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992ba7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992ba9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992bab: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992bad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992baf: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992bb1: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992bb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992bb5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992bb7: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992bb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992bbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992bbd: jl 0x992d41 */
  if ((sf != of)) goto L_992d41;
L_992bc3: /* 992bc3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bc7: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 992bcb: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992bcd: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 992bd1: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 992bd5: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992bd7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 992bdb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bdf: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 992be2: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 992be6: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992be9: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992beb: mov dword ptr [esp + 0x14], 3 */
  W32((uint32_t)(esp + 0x14u), 0x3u);
/* 992bf3: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_992bf7: /* 992bf7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bfb: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992bfe: fsub qword ptr [eax + edi*8] */
  ST0 = ST0 - (F64((uint32_t)(eax + edi*8)));
/* 992c01: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 992c05: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c07: fsub qword ptr [edx - 8] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0xfffffff8u)));
/* 992c0a: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c0d: fsub qword ptr [esi - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xfffffff0u)));
/* 992c10: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992c12: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992c14: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992c16: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992c18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c1a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992c1c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992c1e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c20: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992c22: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992c26: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992c28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c2c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992c2e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992c30: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992c33: jp 0x992c3f */
  if (pf) goto L_992c3f;
L_992c35: /* 992c35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c37: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 992c3b: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_992c3f: /* 992c3f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 992c43: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992c46: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992c49: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 992c4d: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c4f: fsub qword ptr [edx] */
  ST0 = ST0 - (F64((uint32_t)(edx)));
/* 992c51: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c54: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992c57: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992c59: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992c5b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992c5d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992c5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c61: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992c63: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992c65: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c67: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992c69: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992c6d: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992c6f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c71: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c73: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992c75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992c77: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992c7a: jp 0x992c8d */
  if (pf) goto L_992c8d;
L_992c7c: /* 992c7c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992c80: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c82: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992c86: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992c89: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992c8d: /* 992c8d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 992c91: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992c94: fsub qword ptr [esi + eax] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax)));
/* 992c97: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c99: fsub qword ptr [edx + 8] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0x8u)));
/* 992c9c: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c9f: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* 992ca1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992ca3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992ca5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992ca7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992ca9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cab: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992cad: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992caf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cb1: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992cb3: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992cb7: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992cb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992cbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992cbd: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992cbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992cc1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992cc4: jp 0x992cd5 */
  if (pf) goto L_992cd5;
L_992cc6: /* 992cc6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992cca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992ccc: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992cd0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 992cd1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992cd5: /* 992cd5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992cd9: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992cdc: fsub qword ptr [eax + edi*8 + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(eax + edi*8 + 0x18u)));
/* 992ce0: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992ce2: fsub qword ptr [edx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0x10u)));
/* 992ce5: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992ce8: fsub qword ptr [esi + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x8u)));
/* 992ceb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992ced: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992cef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992cf1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992cf3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cf5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992cf7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992cf9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cfb: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992cfd: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992d01: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992d03: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d07: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992d09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992d0b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992d0e: jp 0x992d1e */
  if (pf) goto L_992d1e;
L_992d10: /* 992d10: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992d14: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d16: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992d1a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992d1e: /* 992d1e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992d22: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 992d25: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992d28: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 992d2b: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 992d2e: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992d31: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992d33: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 992d37: jl 0x992bf7 */
  if ((sf != of)) goto L_992bf7;
L_992d3d: /* 992d3d: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
L_992d41: /* 992d41: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992d44: jge 0x992db2 */
  if ((sf == of)) goto L_992db2;
L_992d46: /* 992d46: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 992d4a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 992d4e: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 992d50: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992d52: lea edx, [ebx + edi*8] */
  edx = (uint32_t)(ebx + edi*8);
/* 992d55: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 992d59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_992d60: /* 992d60: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992d63: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 992d67: fsub qword ptr [edx + esi] */
  ST0 = ST0 - (F64((uint32_t)(edx + esi)));
/* 992d6a: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992d6c: fsub qword ptr [edx] */
  ST0 = ST0 - (F64((uint32_t)(edx)));
/* 992d6e: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992d71: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992d74: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 992d78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992d7a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992d7c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992d7e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992d80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992d82: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992d84: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992d86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992d88: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 992d8a: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992d8e: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992d90: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d92: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d94: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992d96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992d98: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992d9b: jp 0x992da7 */
  if (pf) goto L_992da7;
L_992d9d: /* 992d9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d9f: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 992da3: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_992da7: /* 992da7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 992daa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992dab: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 992dae: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992db0: jl 0x992d60 */
  if ((sf != of)) goto L_992d60;
L_992db2: /* 992db2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 992db6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992db8: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 992dbb: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 992dbf: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 992dc2: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 992dc6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 992dc9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 992dca: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992dcd: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 992dd0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992dd2: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 992dd6: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 992dda: jl 0x992b8a */
  if ((sf != of)) goto L_992b8a;
L_992de0: /* 992de0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 992de1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 992de2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 992de3: mov esp, ebp */
  esp = ebp;
/* 992de5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 992de6: ret  */
  esp += 4; SPILL(); return;
}

void f_9916ca(void) {
  LOAD_REGS();
L_9916ca: /* 9916ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9916d0: /* 9916d0: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9916d4: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 9916d6: mov ecx, 8 */
  ecx = 0x8u;
/* 9916db: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 9916dd: mov edi, 1 */
  edi = 0x1u;
/* 9916e2: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 9916e4: mov ecx, 0x100 */
  ecx = 0x100u;
/* 9916e9: lea esi, [eax + 0x20] */
  esi = (uint32_t)(eax + 0x20u);
/* 9916ec: mov ebx, eax */
  ebx = eax;
/* 9916ee: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9916f0: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9916f3: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9916f7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9916fb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9916ff: mov dword ptr [esp + 0xc], 2 */
  W32((uint32_t)(esp + 0xcu), 0x2u);
/* 991707: jmp 0x991710 */
  goto L_991710;
L_991710: /* 991710: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 991714: fld qword ptr [ecx + edx] */
  { double v = F64((uint32_t)(ecx + edx)); FPUSH(v); }
/* 991717: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 99171d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99171f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 991722: jnp 0x99173b */
  if (!pf) goto L_99173b;
L_991724: /* 991724: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 991728: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 99172a: fdiv qword ptr [ecx + edx] */
  ST0 = ST0 / (F64((uint32_t)(ecx + edx)));
/* 99172d: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 991733: fstp qword ptr [0xcf5048] */
  WF64((uint32_t)(0xcf5048u), ST0); FPOP();
/* 991739: jmp 0x99174f */
  goto L_99174f;
L_99173b: /* 99173b: mov dword ptr [0xcf5048], 0 */
  W32((uint32_t)(0xcf5048u), 0x0u);
/* 991745: mov dword ptr [0xcf504c], 0 */
  W32((uint32_t)(0xcf504cu), 0x0u);
L_99174f: /* 99174f: mov ecx, dword ptr [0xcf504c] */
  ecx = R32((uint32_t)(0xcf504cu));
/* 991755: mov edx, dword ptr [0xcf5048] */
  edx = R32((uint32_t)(0xcf5048u));
/* 99175b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99175c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99175d: call 0x99cf1e */
  esp -= 4; W32(esp, 0x991762u); SPILL(); hle_floor(); RELOAD();
/* 991762: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 991765: call 0x99c958 */
  esp -= 4; W32(esp, 0x99176au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 99176a: mov edx, eax */
  edx = eax;
/* 99176c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99176e: jge 0x991774 */
  if ((sf == of)) goto L_991774;
L_991770: /* 991770: xor edx, edx */
  edx = 0;
/* 991772: jmp 0x991780 */
  goto L_991780;
L_991774: /* 991774: cmp edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99177a: jl 0x991780 */
  if ((sf != of)) goto L_991780;
L_99177c: /* 99177c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_991780: /* 991780: and edx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 991784: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991788: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 99178a: mov eax, edx */
  eax = edx;
/* 99178c: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 99178e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991790: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 991794: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 991798: fcomp qword ptr [0xcf5048] */
  fpu_com(ST0, F64((uint32_t)(0xcf5048u)));
  FPOP();
/* 99179e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9917a0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 9917a3: jne 0x9917ad */
  if (!zf) goto L_9917ad;
L_9917a5: /* 9917a5: mov eax, edx */
  eax = edx;
/* 9917a7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 9917a9: js 0x9917ad */
  if (sf) goto L_9917ad;
L_9917ab: /* 9917ab: mov edx, eax */
  edx = eax;
L_9917ad: /* 9917ad: mov eax, edx */
  eax = edx;
/* 9917af: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 9917b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9917b3: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 9917b5: mov dword ptr [esi - 0x30], eax */
  W32((uint32_t)(esi + 0xffffffd0u), eax);
/* 9917b8: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 9917bb: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9917c0: jge 0x9917c4 */
  if ((sf == of)) goto L_9917c4;
L_9917c2: /* 9917c2: mov edx, eax */
  edx = eax;
L_9917c4: /* 9917c4: mov eax, edx */
  eax = edx;
/* 9917c6: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 9917c8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9917cc: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9917cf: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9917d2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9917d4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9917d8: mov dword ptr [esi - 4], edx */
  W32((uint32_t)(esi + 0xfffffffcu), edx);
/* 9917db: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9917dd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9917e1: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9917e4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9917e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9917ec: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9917ef: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9917f0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9917f4: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9917f8: jne 0x991710 */
  if (!zf) goto L_991710;
L_9917fe: /* 9917fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 991802: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 991806: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991809: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99180c: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99180f: cmp ecx, 0xb0436c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb0436cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991815: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 991819: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 99181d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 991821: jl 0x9916d0 */
  if ((sf != of)) goto L_9916d0;
L_991827: /* 991827: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99182a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99182d: jne 0x991b42 */
  if (!zf) goto L_991b42;
L_991833: /* 991833: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 991836: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99183a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 99183d: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991840: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 991848: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
/* 99184c: mov ecx, 0xcf4ed0 */
  ecx = 0xcf4ed0u;
/* 991851: mov eax, 0xcf36c8 */
  eax = 0xcf36c8u;
/* 991856: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 99185a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_991860: /* 991860: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991864: lea eax, [ebx - 4] */
  eax = (uint32_t)(ebx + 0xfffffffcu);
/* 991867: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 99186b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99186f: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 991873: mov dword ptr [esp + 0x28], 4 */
  W32((uint32_t)(esp + 0x28u), 0x4u);
/* 99187b: jmp 0x991880 */
  goto L_991880;
L_991880: /* 991880: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 991884: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 991886: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 991889: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99188b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99188c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99188e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 991892: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991894: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 991897: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99189b: fild dword ptr [ebx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 99189e: xor edi, edi */
  edi = 0;
/* 9918a0: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918a2: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918a8: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 9918ab: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 9918ad: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918af: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918b5: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 9918b7: fild dword ptr [ebx + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 9918ba: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918bc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9918c0: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918c6: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9918c9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9918cc: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9918cf: jl 0x9919ef */
  if ((sf != of)) goto L_9919ef;
L_9918d5: /* 9918d5: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 9918d8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9918dc: mov ebx, 3 */
  ebx = 0x3u;
/* 9918e1: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_9918e4: /* 9918e4: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 9918e7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918ea: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 9918ed: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f0: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9918f8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918fb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9918fd: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991900: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991903: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991906: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991909: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99190c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99190f: fstp qword ptr [eax - 0x50] */
  WF64((uint32_t)(eax + 0xffffffb0u), ST0); FPOP();
/* 991912: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991914: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991917: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991919: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99191b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99191d: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991920: fstp qword ptr [eax - 0x48] */
  WF64((uint32_t)(eax + 0xffffffb8u), ST0); FPOP();
/* 991923: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991925: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991928: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 99192b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99192d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99192f: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991932: fstp qword ptr [eax - 0x40] */
  WF64((uint32_t)(eax + 0xffffffc0u), ST0); FPOP();
/* 991935: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991937: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99193a: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 99193d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99193f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991941: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991944: fstp qword ptr [eax - 0x38] */
  WF64((uint32_t)(eax + 0xffffffc8u), ST0); FPOP();
/* 991947: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991949: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99194c: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 99194e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991950: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991952: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991955: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991958: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99195a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99195d: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991960: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991962: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991964: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991967: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 99196a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99196c: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99196e: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991971: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991973: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991975: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991977: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 99197a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99197c: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99197e: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991980: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991982: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991984: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991986: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991989: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99198b: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99198d: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991990: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991992: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991994: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991996: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991999: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99199b: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 99199e: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 9919a1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919a3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919a5: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 9919a8: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9919ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919ad: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 9919b0: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 9919b2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9919b5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9919b8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9919bb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9919c0: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 9919c3: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9919c6: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9919c9: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9919cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919ce: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9919d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919d3: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 9919d6: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 9919d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919db: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 9919de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919e0: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9919e3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919e5: jl 0x9918e4 */
  if ((sf != of)) goto L_9918e4;
L_9919eb: /* 9919eb: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_9919ef: /* 9919ef: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9919f2: jge 0x991a51 */
  if ((sf == of)) goto L_991a51;
L_9919f4: /* 9919f4: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9919f8: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 9919fb: mov esi, edi */
  esi = edi;
/* 9919fd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9919ff: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991a02: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 991a05: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_991a08: /* 991a08: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991a0a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a0d: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991a10: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a13: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a16: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 991a17: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a19: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991a1c: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991a1f: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a23: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a25: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991a28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a2a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991a2d: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991a2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a31: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a35: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a37: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991a3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a3c: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991a3f: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991a42: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a44: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a48: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a4a: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991a4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a4f: jl 0x991a08 */
  if ((sf != of)) goto L_991a08;
L_991a51: /* 991a51: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 991a55: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 991a59: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 991a5d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 991a61: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991a64: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991a67: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991a6a: add esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991a70: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991a73: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 991a74: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 991a78: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 991a7c: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 991a80: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 991a84: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 991a88: jne 0x991880 */
  if (!zf) goto L_991880;
L_991a8e: /* 991a8e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 991a92: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 991a96: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 991a9a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 991a9b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 991a9f: mov eax, esi */
  eax = esi;
/* 991aa1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 991aa5: mov edx, 8 */
  edx = 0x8u;
/* 991aaa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991aac: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991aae: cmp eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991ab3: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 991ab7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991abb: jl 0x991860 */
  if ((sf != of)) goto L_991860;
L_991ac1: /* 991ac1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 991ac4: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 991ac7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 991aca: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 991acd: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 991ad0: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 991ad2: xor edi, edi */
  edi = 0;
/* 991ad4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ad6: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991ada: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991adc: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 991add: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991adf: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991ae1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991ae3: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 991ae5: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 991ae7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991ae9: fmul qword ptr [0xa21b38] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b38u)));
/* 991aef: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 991af5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991af7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991af9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991afb: jmp 0x991b00 */
  goto L_991b00;
L_991b00: /* 991b00: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991b06: mov eax, edi */
  eax = edi;
/* 991b08: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991b0b: mov ecx, edi */
  ecx = edi;
/* 991b0d: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 991b10: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 991b13: mov edx, edi */
  edx = edi;
/* 991b15: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 991b18: shl ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 991b1b: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 991b1e: shl edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 991b21: add ecx, 0xcf36c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf36c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991b27: add eax, 0xcf3ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991b2c: add edx, 0xcf46c8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf46c8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991b32: cmp ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 991b35: ja 0x992a98 */
  if ((!cf && !zf)) goto L_992a98;
L_991b3b: /* 991b3b: jmp dword ptr [ebx*4 + 0x992de8] */
  switch (R32((uint32_t)(ebx*4 + 0x992de8u))) {
    case 0x991ef2u: goto L_991ef2;
    case 0x991f66u: goto L_991f66;
    case 0x991fdau: goto L_991fda;
    case 0x99204eu: goto L_99204e;
    case 0x9920c2u: goto L_9920c2;
    case 0x992136u: goto L_992136;
    case 0x9921aau: goto L_9921aa;
    case 0x99221eu: goto L_99221e;
    case 0x992292u: goto L_992292;
    case 0x992306u: goto L_992306;
    case 0x99237au: goto L_99237a;
    case 0x9923eeu: goto L_9923ee;
    case 0x992462u: goto L_992462;
    case 0x9924b2u: goto L_9924b2;
    case 0x992502u: goto L_992502;
    case 0x992552u: goto L_992552;
    case 0x9925cbu: goto L_9925cb;
    case 0x992621u: goto L_992621;
    case 0x992677u: goto L_992677;
    case 0x9926cdu: goto L_9926cd;
    case 0x992723u: goto L_992723;
    case 0x992779u: goto L_992779;
    case 0x9927cfu: goto L_9927cf;
    case 0x992825u: goto L_992825;
    case 0x99287bu: goto L_99287b;
    case 0x9928d1u: goto L_9928d1;
    case 0x992927u: goto L_992927;
    case 0x992974u: goto L_992974;
    case 0x9929afu: goto L_9929af;
    case 0x9929eau: goto L_9929ea;
    case 0x992a25u: goto L_992a25;
    case 0x992a60u: goto L_992a60;
    default: guest_badjump(0x991b3b, R32((uint32_t)(ebx*4 + 0x992de8u))); return;
  }
L_991b42: /* 991b42: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991b45: jne 0x992ac1 */
  if (!zf) goto L_992ac1;
L_991b4b: /* 991b4b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991b4e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 991b51: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991b54: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 991b5c: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
/* 991b60: mov esi, 0xcf4ed0 */
  esi = 0xcf4ed0u;
/* 991b65: mov eax, 0xcf36c8 */
  eax = 0xcf36c8u;
/* 991b6a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 991b6e: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_991b72: /* 991b72: mov ecx, esi */
  ecx = esi;
/* 991b74: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991b78: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 991b7c: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 991b80: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 991b84: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
/* 991b8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_991b90: /* 991b90: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 991b94: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 991b97: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 991b99: lea edx, [edx + eax*2 + 1] */
  edx = (uint32_t)(edx + eax*2 + 0x1u);
/* 991b9d: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 991ba2: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 991ba4: mov eax, edx */
  eax = edx;
/* 991ba6: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 991ba9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991bab: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 991bae: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 991bb1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 991bb3: lea edx, [eax + edx*2 + 1] */
  edx = (uint32_t)(eax + edx*2 + 0x1u);
/* 991bb7: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 991bbc: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 991bbe: mov eax, edx */
  eax = edx;
/* 991bc0: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 991bc3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991bc5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 991bc9: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 991bcc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 991bcf: fild dword ptr [ebx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 991bd2: xor edi, edi */
  edi = 0;
/* 991bd4: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991bd7: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991bd9: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bdf: fstp qword ptr [esi - 8] */
  WF64((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 991be2: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 991be4: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991be6: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bec: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 991bee: fild dword ptr [ebx + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 991bf1: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991bf3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bf9: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 991bfc: fild dword ptr [ebx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 991bff: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991c01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991c05: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991c0b: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 991c0e: jl 0x991d86 */
  if ((sf != of)) goto L_991d86;
L_991c14: /* 991c14: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 991c17: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 991c1b: mov ebx, 3 */
  ebx = 0x3u;
/* 991c20: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_991c23: /* 991c23: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c26: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c29: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991c2c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c32: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c35: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c37: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c3a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c3c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c42: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c45: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c48: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c4b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c4e: fstp qword ptr [eax - 0x50] */
  WF64((uint32_t)(eax + 0xffffffb0u), ST0); FPOP();
/* 991c51: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c53: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c56: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991c58: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c5a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c5c: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c5f: fstp qword ptr [eax - 0x48] */
  WF64((uint32_t)(eax + 0xffffffb8u), ST0); FPOP();
/* 991c62: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c64: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c67: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991c6a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c6c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c6e: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c71: fstp qword ptr [eax - 0x40] */
  WF64((uint32_t)(eax + 0xffffffc0u), ST0); FPOP();
/* 991c74: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c76: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c79: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991c7c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c7e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c80: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c83: fstp qword ptr [eax - 0x38] */
  WF64((uint32_t)(eax + 0xffffffc8u), ST0); FPOP();
/* 991c86: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c88: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991c8b: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991c8e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c90: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c92: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991c95: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991c98: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c9a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991c9d: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991c9f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ca1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991ca3: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991ca6: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 991ca9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cab: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991cae: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991cb1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cb3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cb5: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991cb8: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991cbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cbd: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991cc0: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991cc3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cc5: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991cc8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cca: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991ccd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ccf: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991cd1: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991cd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cd6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cd8: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991cda: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991cdd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cdf: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991ce1: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991ce3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ce5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991ce7: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991ce9: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991cec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cee: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991cf0: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991cf3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cf6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cf9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cfc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cfe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d03: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d06: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991d09: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d0c: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991d0e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991d11: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991d14: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991d17: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991d1a: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991d1d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d1f: fld qword ptr [edx - 0x60] */
  { double v = F64((uint32_t)(edx + 0xffffffa0u)); FPUSH(v); }
/* 991d22: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991d25: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d27: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d29: fmul qword ptr [esi - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe0u)));
/* 991d2c: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 991d2f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d31: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d34: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991d37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d39: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d3c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d3e: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991d41: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d43: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d46: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991d48: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d4a: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d4f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991d52: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d54: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d57: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991d5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d5c: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d5f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d61: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991d64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d66: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d69: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991d6c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d6e: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d71: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d73: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991d76: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d78: jl 0x991c23 */
  if ((sf != of)) goto L_991c23;
L_991d7e: /* 991d7e: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 991d82: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_991d86: /* 991d86: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991d89: jge 0x991e07 */
  if ((sf == of)) goto L_991e07;
L_991d8b: /* 991d8b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 991d8f: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 991d92: mov esi, edi */
  esi = edi;
/* 991d94: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991d96: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991d99: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 991d9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_991da0: /* 991da0: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991da2: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 991da5: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991da8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991dab: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991dae: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991db1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991db3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991db6: fmul qword ptr [esi + edi*8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8)));
/* 991db9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 991dba: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991dbd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dbf: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991dc2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991dc4: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dc7: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991dc9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991dcb: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991dcf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dd1: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991dd4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991dd6: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dd9: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991ddc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991dde: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991de2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991de4: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991de7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991de9: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dec: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991def: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991df1: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991df5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 991df8: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991dfa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dfc: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991dff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991e01: jl 0x991da0 */
  if ((sf != of)) goto L_991da0;
L_991e03: /* 991e03: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_991e07: /* 991e07: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 991e0b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991e0f: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991e12: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 991e16: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 991e1a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991e1d: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991e20: add eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991e25: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991e28: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 991e29: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 991e2d: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 991e31: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991e35: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 991e39: jne 0x991b90 */
  if (!zf) goto L_991b90;
L_991e3f: /* 991e3f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 991e43: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 991e47: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 991e4b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 991e4c: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 991e50: mov ecx, 8 */
  ecx = 0x8u;
/* 991e55: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991e57: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991e59: cmp eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991e5e: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 991e62: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 991e66: jl 0x991b72 */
  if ((sf != of)) goto L_991b72;
L_991e6c: /* 991e6c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 991e6f: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 991e72: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 991e75: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 991e78: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 991e7b: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 991e7d: xor edi, edi */
  edi = 0;
/* 991e7f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991e81: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991e85: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991e87: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 991e88: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991e8a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991e8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991e8e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 991e90: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 991e92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991e94: fmul qword ptr [0xa21b38] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b38u)));
/* 991e9a: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 991ea0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea6: jmp 0x991eb0 */
  goto L_991eb0;
L_991eb0: /* 991eb0: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991eb6: mov eax, edi */
  eax = edi;
/* 991eb8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991ebb: mov ecx, edi */
  ecx = edi;
/* 991ebd: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 991ec0: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 991ec3: mov edx, edi */
  edx = edi;
/* 991ec5: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 991ec8: shl ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 991ecb: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 991ece: shl edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 991ed1: add ecx, 0xcf36c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf36c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991ed7: add eax, 0xcf3ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991edc: add edx, 0xcf46c8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf46c8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991ee2: cmp ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 991ee5: ja 0x99259f */
  if ((!cf && !zf)) goto L_99259f;
L_991eeb: /* 991eeb: jmp dword ptr [ebx*4 + 0x992e28] */
  switch (R32((uint32_t)(ebx*4 + 0x992e28u))) {
    case 0x991ef2u: goto L_991ef2;
    case 0x991f66u: goto L_991f66;
    case 0x991fdau: goto L_991fda;
    case 0x99204eu: goto L_99204e;
    case 0x9920c2u: goto L_9920c2;
    case 0x992136u: goto L_992136;
    case 0x9921aau: goto L_9921aa;
    case 0x99221eu: goto L_99221e;
    case 0x992292u: goto L_992292;
    case 0x992306u: goto L_992306;
    case 0x99237au: goto L_99237a;
    case 0x9923eeu: goto L_9923ee;
    case 0x992462u: goto L_992462;
    case 0x9924b2u: goto L_9924b2;
    case 0x992502u: goto L_992502;
    case 0x992552u: goto L_992552;
    default: guest_badjump(0x991eeb, R32((uint32_t)(ebx*4 + 0x992e28u))); return;
  }
L_991ef2: /* 991ef2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ef4: fld qword ptr [edx + 0x1e0] */
  { double v = F64((uint32_t)(edx + 0x1e0u)); FPUSH(v); }
/* 991efa: fadd qword ptr [eax + 0x1e0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1e0u)));
/* 991f00: fadd qword ptr [ecx + 0x1e0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1e0u)));
/* 991f06: fld qword ptr [edx + 0x1e8] */
  { double v = F64((uint32_t)(edx + 0x1e8u)); FPUSH(v); }
/* 991f0c: fadd qword ptr [eax + 0x1e8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1e8u)));
/* 991f12: fadd qword ptr [ecx + 0x1e8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1e8u)));
/* 991f18: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f1a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f1c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f1e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f20: fabs  */
  ST0 = fabs(ST0);
/* 991f22: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f24: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f26: fld qword ptr [edx + 0x1f0] */
  { double v = F64((uint32_t)(edx + 0x1f0u)); FPUSH(v); }
/* 991f2c: fadd qword ptr [eax + 0x1f0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1f0u)));
/* 991f32: fadd qword ptr [ecx + 0x1f0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1f0u)));
/* 991f38: fld qword ptr [edx + 0x1f8] */
  { double v = F64((uint32_t)(edx + 0x1f8u)); FPUSH(v); }
/* 991f3e: fadd qword ptr [eax + 0x1f8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1f8u)));
/* 991f44: fadd qword ptr [ecx + 0x1f8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1f8u)));
/* 991f4a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f4c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f4e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f50: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f52: fabs  */
  ST0 = fabs(ST0);
/* 991f54: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f56: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f58: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991f5a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 991f5c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991f5e: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 991f60: fabs  */
  ST0 = fabs(ST0);
/* 991f62: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991f64: fstp st(1) */
  STI(1) = ST0; FPOP();
L_991f66: /* 991f66: fld qword ptr [edx + 0x1c0] */
  { double v = F64((uint32_t)(edx + 0x1c0u)); FPUSH(v); }
/* 991f6c: fadd qword ptr [eax + 0x1c0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1c0u)));
/* 991f72: fadd qword ptr [ecx + 0x1c0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1c0u)));
/* 991f78: fld qword ptr [edx + 0x1c8] */
  { double v = F64((uint32_t)(edx + 0x1c8u)); FPUSH(v); }
/* 991f7e: fadd qword ptr [eax + 0x1c8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1c8u)));
/* 991f84: fadd qword ptr [ecx + 0x1c8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1c8u)));
/* 991f8a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f8c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f8e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f90: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f92: fabs  */
  ST0 = fabs(ST0);
/* 991f94: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f96: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f98: fld qword ptr [edx + 0x1d0] */
  { double v = F64((uint32_t)(edx + 0x1d0u)); FPUSH(v); }
/* 991f9e: fadd qword ptr [eax + 0x1d0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1d0u)));
/* 991fa4: fadd qword ptr [ecx + 0x1d0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1d0u)));
/* 991faa: fld qword ptr [edx + 0x1d8] */
  { double v = F64((uint32_t)(edx + 0x1d8u)); FPUSH(v); }
/* 991fb0: fadd qword ptr [eax + 0x1d8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1d8u)));
/* 991fb6: fadd qword ptr [ecx + 0x1d8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1d8u)));
/* 991fbc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991fbe: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991fc0: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991fc2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991fc4: fabs  */
  ST0 = fabs(ST0);
/* 991fc6: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991fc8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991fca: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991fcc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 991fce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991fd0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 991fd2: fabs  */
  ST0 = fabs(ST0);
/* 991fd4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991fd6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 991fd8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_991fda: /* 991fda: fld qword ptr [edx + 0x1a0] */
  { double v = F64((uint32_t)(edx + 0x1a0u)); FPUSH(v); }
/* 991fe0: fadd qword ptr [eax + 0x1a0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1a0u)));
/* 991fe6: fadd qword ptr [ecx + 0x1a0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1a0u)));
/* 991fec: fld qword ptr [edx + 0x1a8] */
  { double v = F64((uint32_t)(edx + 0x1a8u)); FPUSH(v); }
/* 991ff2: fadd qword ptr [eax + 0x1a8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1a8u)));
/* 991ff8: fadd qword ptr [ecx + 0x1a8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1a8u)));
/* 991ffe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992000: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992002: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992004: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992006: fabs  */
  ST0 = fabs(ST0);
/* 992008: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99200a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99200c: fld qword ptr [edx + 0x1b0] */
  { double v = F64((uint32_t)(edx + 0x1b0u)); FPUSH(v); }
/* 992012: fadd qword ptr [eax + 0x1b0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1b0u)));
/* 992018: fadd qword ptr [ecx + 0x1b0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1b0u)));
/* 99201e: fld qword ptr [edx + 0x1b8] */
  { double v = F64((uint32_t)(edx + 0x1b8u)); FPUSH(v); }
/* 992024: fadd qword ptr [eax + 0x1b8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1b8u)));
/* 99202a: fadd qword ptr [ecx + 0x1b8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1b8u)));
/* 992030: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992032: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992034: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992036: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992038: fabs  */
  ST0 = fabs(ST0);
/* 99203a: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99203c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99203e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992040: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992042: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992044: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992046: fabs  */
  ST0 = fabs(ST0);
/* 992048: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99204a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99204c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99204e: /* 99204e: fld qword ptr [edx + 0x180] */
  { double v = F64((uint32_t)(edx + 0x180u)); FPUSH(v); }
/* 992054: fadd qword ptr [eax + 0x180] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x180u)));
/* 99205a: fadd qword ptr [ecx + 0x180] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x180u)));
/* 992060: fld qword ptr [edx + 0x188] */
  { double v = F64((uint32_t)(edx + 0x188u)); FPUSH(v); }
/* 992066: fadd qword ptr [eax + 0x188] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x188u)));
/* 99206c: fadd qword ptr [ecx + 0x188] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x188u)));
/* 992072: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992074: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992076: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992078: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99207a: fabs  */
  ST0 = fabs(ST0);
/* 99207c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99207e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992080: fld qword ptr [edx + 0x190] */
  { double v = F64((uint32_t)(edx + 0x190u)); FPUSH(v); }
/* 992086: fadd qword ptr [eax + 0x190] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x190u)));
/* 99208c: fadd qword ptr [ecx + 0x190] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x190u)));
/* 992092: fld qword ptr [edx + 0x198] */
  { double v = F64((uint32_t)(edx + 0x198u)); FPUSH(v); }
/* 992098: fadd qword ptr [eax + 0x198] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x198u)));
/* 99209e: fadd qword ptr [ecx + 0x198] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x198u)));
/* 9920a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9920a6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9920a8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9920aa: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9920ac: fabs  */
  ST0 = fabs(ST0);
/* 9920ae: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9920b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9920b2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9920b4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9920b6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9920b8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9920ba: fabs  */
  ST0 = fabs(ST0);
/* 9920bc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9920be: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9920c0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9920c2: /* 9920c2: fld qword ptr [edx + 0x160] */
  { double v = F64((uint32_t)(edx + 0x160u)); FPUSH(v); }
/* 9920c8: fadd qword ptr [eax + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x160u)));
/* 9920ce: fadd qword ptr [ecx + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x160u)));
/* 9920d4: fld qword ptr [edx + 0x168] */
  { double v = F64((uint32_t)(edx + 0x168u)); FPUSH(v); }
/* 9920da: fadd qword ptr [eax + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x168u)));
/* 9920e0: fadd qword ptr [ecx + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x168u)));
/* 9920e6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9920e8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9920ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9920ec: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9920ee: fabs  */
  ST0 = fabs(ST0);
/* 9920f0: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9920f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9920f4: fld qword ptr [edx + 0x170] */
  { double v = F64((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 9920fa: fadd qword ptr [eax + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x170u)));
/* 992100: fadd qword ptr [ecx + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x170u)));
/* 992106: fld qword ptr [edx + 0x178] */
  { double v = F64((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 99210c: fadd qword ptr [eax + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x178u)));
/* 992112: fadd qword ptr [ecx + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x178u)));
/* 992118: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99211a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99211c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99211e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992120: fabs  */
  ST0 = fabs(ST0);
/* 992122: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992124: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992126: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992128: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99212a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99212c: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99212e: fabs  */
  ST0 = fabs(ST0);
/* 992130: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992132: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992134: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992136: /* 992136: fld qword ptr [edx + 0x140] */
  { double v = F64((uint32_t)(edx + 0x140u)); FPUSH(v); }
/* 99213c: fadd qword ptr [eax + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x140u)));
/* 992142: fadd qword ptr [ecx + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x140u)));
/* 992148: fld qword ptr [edx + 0x148] */
  { double v = F64((uint32_t)(edx + 0x148u)); FPUSH(v); }
/* 99214e: fadd qword ptr [eax + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x148u)));
/* 992154: fadd qword ptr [ecx + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x148u)));
/* 99215a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99215c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99215e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992160: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992162: fabs  */
  ST0 = fabs(ST0);
/* 992164: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992166: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992168: fld qword ptr [edx + 0x150] */
  { double v = F64((uint32_t)(edx + 0x150u)); FPUSH(v); }
/* 99216e: fadd qword ptr [eax + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x150u)));
/* 992174: fadd qword ptr [ecx + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x150u)));
/* 99217a: fld qword ptr [edx + 0x158] */
  { double v = F64((uint32_t)(edx + 0x158u)); FPUSH(v); }
/* 992180: fadd qword ptr [eax + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x158u)));
/* 992186: fadd qword ptr [ecx + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x158u)));
/* 99218c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99218e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992190: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992192: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992194: fabs  */
  ST0 = fabs(ST0);
/* 992196: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992198: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99219a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99219c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99219e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9921a0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9921a2: fabs  */
  ST0 = fabs(ST0);
/* 9921a4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9921a6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9921a8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9921aa: /* 9921aa: fld qword ptr [edx + 0x120] */
  { double v = F64((uint32_t)(edx + 0x120u)); FPUSH(v); }
/* 9921b0: fadd qword ptr [eax + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x120u)));
/* 9921b6: fadd qword ptr [ecx + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x120u)));
/* 9921bc: fld qword ptr [edx + 0x128] */
  { double v = F64((uint32_t)(edx + 0x128u)); FPUSH(v); }
/* 9921c2: fadd qword ptr [eax + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x128u)));
/* 9921c8: fadd qword ptr [ecx + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x128u)));
/* 9921ce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9921d0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9921d2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9921d4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9921d6: fabs  */
  ST0 = fabs(ST0);
/* 9921d8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9921da: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9921dc: fld qword ptr [edx + 0x130] */
  { double v = F64((uint32_t)(edx + 0x130u)); FPUSH(v); }
/* 9921e2: fadd qword ptr [eax + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x130u)));
/* 9921e8: fadd qword ptr [ecx + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x130u)));
/* 9921ee: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 9921f4: fadd qword ptr [eax + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x138u)));
/* 9921fa: fadd qword ptr [ecx + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x138u)));
/* 992200: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992202: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992204: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992206: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992208: fabs  */
  ST0 = fabs(ST0);
/* 99220a: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99220c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99220e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992210: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992212: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992214: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992216: fabs  */
  ST0 = fabs(ST0);
/* 992218: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99221a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99221c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99221e: /* 99221e: fld qword ptr [edx + 0x100] */
  { double v = F64((uint32_t)(edx + 0x100u)); FPUSH(v); }
/* 992224: fadd qword ptr [eax + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x100u)));
/* 99222a: fadd qword ptr [ecx + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x100u)));
/* 992230: fld qword ptr [edx + 0x108] */
  { double v = F64((uint32_t)(edx + 0x108u)); FPUSH(v); }
/* 992236: fadd qword ptr [eax + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x108u)));
/* 99223c: fadd qword ptr [ecx + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x108u)));
/* 992242: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992244: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992246: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992248: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99224a: fabs  */
  ST0 = fabs(ST0);
/* 99224c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99224e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992250: fld qword ptr [edx + 0x110] */
  { double v = F64((uint32_t)(edx + 0x110u)); FPUSH(v); }
/* 992256: fadd qword ptr [eax + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x110u)));
/* 99225c: fadd qword ptr [ecx + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x110u)));
/* 992262: fld qword ptr [edx + 0x118] */
  { double v = F64((uint32_t)(edx + 0x118u)); FPUSH(v); }
/* 992268: fadd qword ptr [eax + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x118u)));
/* 99226e: fadd qword ptr [ecx + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x118u)));
/* 992274: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992276: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992278: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99227a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99227c: fabs  */
  ST0 = fabs(ST0);
/* 99227e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992280: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992282: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992284: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992286: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992288: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99228a: fabs  */
  ST0 = fabs(ST0);
/* 99228c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99228e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992290: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992292: /* 992292: fld qword ptr [edx + 0xe0] */
  { double v = F64((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 992298: fadd qword ptr [eax + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe0u)));
/* 99229e: fadd qword ptr [ecx + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe0u)));
/* 9922a4: fld qword ptr [edx + 0xe8] */
  { double v = F64((uint32_t)(edx + 0xe8u)); FPUSH(v); }
/* 9922aa: fadd qword ptr [eax + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe8u)));
/* 9922b0: fadd qword ptr [ecx + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe8u)));
/* 9922b6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9922b8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9922ba: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9922bc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9922be: fabs  */
  ST0 = fabs(ST0);
/* 9922c0: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9922c2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9922c4: fld qword ptr [edx + 0xf0] */
  { double v = F64((uint32_t)(edx + 0xf0u)); FPUSH(v); }
/* 9922ca: fadd qword ptr [eax + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf0u)));
/* 9922d0: fadd qword ptr [ecx + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf0u)));
/* 9922d6: fld qword ptr [edx + 0xf8] */
  { double v = F64((uint32_t)(edx + 0xf8u)); FPUSH(v); }
/* 9922dc: fadd qword ptr [eax + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf8u)));
/* 9922e2: fadd qword ptr [ecx + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf8u)));
/* 9922e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9922ea: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9922ec: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9922ee: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9922f0: fabs  */
  ST0 = fabs(ST0);
/* 9922f2: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9922f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9922f6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9922f8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9922fa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9922fc: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9922fe: fabs  */
  ST0 = fabs(ST0);
/* 992300: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992302: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992304: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992306: /* 992306: fld qword ptr [edx + 0xc0] */
  { double v = F64((uint32_t)(edx + 0xc0u)); FPUSH(v); }
/* 99230c: fadd qword ptr [eax + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc0u)));
/* 992312: fadd qword ptr [ecx + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc0u)));
/* 992318: fld qword ptr [edx + 0xc8] */
  { double v = F64((uint32_t)(edx + 0xc8u)); FPUSH(v); }
/* 99231e: fadd qword ptr [eax + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc8u)));
/* 992324: fadd qword ptr [ecx + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc8u)));
/* 99232a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99232c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99232e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992330: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992332: fabs  */
  ST0 = fabs(ST0);
/* 992334: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992336: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992338: fld qword ptr [edx + 0xd0] */
  { double v = F64((uint32_t)(edx + 0xd0u)); FPUSH(v); }
/* 99233e: fadd qword ptr [eax + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd0u)));
/* 992344: fadd qword ptr [ecx + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd0u)));
/* 99234a: fld qword ptr [edx + 0xd8] */
  { double v = F64((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 992350: fadd qword ptr [eax + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd8u)));
/* 992356: fadd qword ptr [ecx + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd8u)));
/* 99235c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99235e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992360: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992362: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992364: fabs  */
  ST0 = fabs(ST0);
/* 992366: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992368: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99236a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99236c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99236e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992370: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992372: fabs  */
  ST0 = fabs(ST0);
/* 992374: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992376: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992378: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99237a: /* 99237a: fld qword ptr [edx + 0xa0] */
  { double v = F64((uint32_t)(edx + 0xa0u)); FPUSH(v); }
/* 992380: fadd qword ptr [eax + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa0u)));
/* 992386: fadd qword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa0u)));
/* 99238c: fld qword ptr [edx + 0xa8] */
  { double v = F64((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* 992392: fadd qword ptr [eax + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa8u)));
/* 992398: fadd qword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa8u)));
/* 99239e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9923a0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9923a2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9923a4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9923a6: fabs  */
  ST0 = fabs(ST0);
/* 9923a8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9923aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9923ac: fld qword ptr [edx + 0xb0] */
  { double v = F64((uint32_t)(edx + 0xb0u)); FPUSH(v); }
/* 9923b2: fadd qword ptr [eax + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb0u)));
/* 9923b8: fadd qword ptr [ecx + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb0u)));
/* 9923be: fld qword ptr [edx + 0xb8] */
  { double v = F64((uint32_t)(edx + 0xb8u)); FPUSH(v); }
/* 9923c4: fadd qword ptr [eax + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb8u)));
/* 9923ca: fadd qword ptr [ecx + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb8u)));
/* 9923d0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9923d2: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9923d4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9923d6: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9923d8: fabs  */
  ST0 = fabs(ST0);
/* 9923da: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9923dc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9923de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9923e0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9923e2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9923e4: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9923e6: fabs  */
  ST0 = fabs(ST0);
/* 9923e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9923ea: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9923ec: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9923ee: /* 9923ee: fld qword ptr [edx + 0x80] */
  { double v = F64((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 9923f4: fadd qword ptr [eax + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x80u)));
/* 9923fa: fadd qword ptr [ecx + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x80u)));
/* 992400: fld qword ptr [edx + 0x88] */
  { double v = F64((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 992406: fadd qword ptr [eax + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x88u)));
/* 99240c: fadd qword ptr [ecx + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x88u)));
/* 992412: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992414: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992416: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992418: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99241a: fabs  */
  ST0 = fabs(ST0);
/* 99241c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99241e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992420: fld qword ptr [edx + 0x90] */
  { double v = F64((uint32_t)(edx + 0x90u)); FPUSH(v); }
/* 992426: fadd qword ptr [eax + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x90u)));
/* 99242c: fadd qword ptr [ecx + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x90u)));
/* 992432: fld qword ptr [edx + 0x98] */
  { double v = F64((uint32_t)(edx + 0x98u)); FPUSH(v); }
/* 992438: fadd qword ptr [eax + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x98u)));
/* 99243e: fadd qword ptr [ecx + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x98u)));
/* 992444: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992446: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992448: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99244a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99244c: fabs  */
  ST0 = fabs(ST0);
/* 99244e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992450: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992452: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992454: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992456: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992458: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99245a: fabs  */
  ST0 = fabs(ST0);
/* 99245c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99245e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992460: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992462: /* 992462: fld qword ptr [edx + 0x60] */
  { double v = F64((uint32_t)(edx + 0x60u)); FPUSH(v); }
/* 992465: fadd qword ptr [eax + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x60u)));
/* 992468: fadd qword ptr [ecx + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x60u)));
/* 99246b: fld qword ptr [edx + 0x68] */
  { double v = F64((uint32_t)(edx + 0x68u)); FPUSH(v); }
/* 99246e: fadd qword ptr [eax + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x68u)));
/* 992471: fadd qword ptr [ecx + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x68u)));
/* 992474: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992476: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992478: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99247a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99247c: fabs  */
  ST0 = fabs(ST0);
/* 99247e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992480: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992482: fld qword ptr [edx + 0x70] */
  { double v = F64((uint32_t)(edx + 0x70u)); FPUSH(v); }
/* 992485: fadd qword ptr [eax + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x70u)));
/* 992488: fadd qword ptr [ecx + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x70u)));
/* 99248b: fld qword ptr [edx + 0x78] */
  { double v = F64((uint32_t)(edx + 0x78u)); FPUSH(v); }
/* 99248e: fadd qword ptr [eax + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x78u)));
/* 992491: fadd qword ptr [ecx + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x78u)));
/* 992494: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992496: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992498: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99249a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99249c: fabs  */
  ST0 = fabs(ST0);
/* 99249e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924a2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9924a4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9924a6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9924a8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9924aa: fabs  */
  ST0 = fabs(ST0);
/* 9924ac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9924ae: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9924b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9924b2: /* 9924b2: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 9924b5: fadd qword ptr [eax + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x40u)));
/* 9924b8: fadd qword ptr [ecx + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x40u)));
/* 9924bb: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 9924be: fadd qword ptr [eax + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x48u)));
/* 9924c1: fadd qword ptr [ecx + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x48u)));
/* 9924c4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9924c6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9924c8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9924ca: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9924cc: fabs  */
  ST0 = fabs(ST0);
/* 9924ce: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924d2: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 9924d5: fadd qword ptr [eax + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x50u)));
/* 9924d8: fadd qword ptr [ecx + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x50u)));
/* 9924db: fld qword ptr [edx + 0x58] */
  { double v = F64((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 9924de: fadd qword ptr [eax + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x58u)));
/* 9924e1: fadd qword ptr [ecx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x58u)));
/* 9924e4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9924e6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9924e8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9924ea: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9924ec: fabs  */
  ST0 = fabs(ST0);
/* 9924ee: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924f2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9924f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9924f6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9924f8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9924fa: fabs  */
  ST0 = fabs(ST0);
/* 9924fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9924fe: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992500: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992502: /* 992502: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 992505: fadd qword ptr [eax + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x20u)));
/* 992508: fadd qword ptr [ecx + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x20u)));
/* 99250b: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 99250e: fadd qword ptr [eax + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x28u)));
/* 992511: fadd qword ptr [ecx + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x28u)));
/* 992514: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992516: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992518: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99251a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99251c: fabs  */
  ST0 = fabs(ST0);
/* 99251e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992520: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992522: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 992525: fadd qword ptr [eax + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x30u)));
/* 992528: fadd qword ptr [ecx + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x30u)));
/* 99252b: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 99252e: fadd qword ptr [eax + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x38u)));
/* 992531: fadd qword ptr [ecx + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x38u)));
/* 992534: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992536: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992538: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99253a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99253c: fabs  */
  ST0 = fabs(ST0);
/* 99253e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992540: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992542: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992544: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992546: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992548: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99254a: fabs  */
  ST0 = fabs(ST0);
/* 99254c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99254e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992550: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992552: /* 992552: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 992554: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 992556: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 992558: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 99255b: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 99255e: fadd qword ptr [ecx + 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x8u)));
/* 992561: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992563: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992565: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992567: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992569: fabs  */
  ST0 = fabs(ST0);
/* 99256b: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99256d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99256f: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 992572: fadd qword ptr [eax + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x10u)));
/* 992575: fadd qword ptr [ecx + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x10u)));
/* 992578: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 99257b: fadd qword ptr [eax + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x18u)));
/* 99257e: fadd qword ptr [ecx + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x18u)));
/* 992581: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992583: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992585: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992587: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992589: fabs  */
  ST0 = fabs(ST0);
/* 99258b: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99258d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99258f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992591: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992593: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992595: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992597: fabs  */
  ST0 = fabs(ST0);
/* 992599: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99259b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99259d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99259f: /* 99259f: fcom qword ptr [0xcf36c0] */
  fpu_com(ST0, F64((uint32_t)(0xcf36c0u)));
/* 9925a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9925a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9925aa: jp 0x9925b6 */
  if (pf) goto L_9925b6;
L_9925ac: /* 9925ac: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 9925b2: mov esi, edi */
  esi = edi;
/* 9925b4: jmp 0x9925b8 */
  goto L_9925b8;
L_9925b6: /* 9925b6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9925b8: /* 9925b8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9925b9: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9925bc: jl 0x991eb0 */
  if ((sf != of)) goto L_991eb0;
L_9925c2: /* 9925c2: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9925c6: jmp 0x992ac5 */
  goto L_992ac5;
L_9925cb: /* 9925cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9925cd: fld qword ptr [edx + 0x168] */
  { double v = F64((uint32_t)(edx + 0x168u)); FPUSH(v); }
/* 9925d3: fadd qword ptr [eax + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x168u)));
/* 9925d9: fadd qword ptr [ecx + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x168u)));
/* 9925df: fld qword ptr [edx + 0x170] */
  { double v = F64((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 9925e5: fadd qword ptr [eax + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x170u)));
/* 9925eb: fadd qword ptr [ecx + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x170u)));
/* 9925f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9925f3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9925f5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9925f7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9925f9: fabs  */
  ST0 = fabs(ST0);
/* 9925fb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9925fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9925ff: fld qword ptr [edx + 0x178] */
  { double v = F64((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 992605: fadd qword ptr [eax + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x178u)));
/* 99260b: fadd qword ptr [ecx + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x178u)));
/* 992611: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992613: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992615: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992617: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992619: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99261b: fabs  */
  ST0 = fabs(ST0);
/* 99261d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99261f: fstp st(1) */
  STI(1) = ST0; FPOP();
L_992621: /* 992621: fld qword ptr [edx + 0x150] */
  { double v = F64((uint32_t)(edx + 0x150u)); FPUSH(v); }
/* 992627: fadd qword ptr [eax + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x150u)));
/* 99262d: fadd qword ptr [ecx + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x150u)));
/* 992633: fld qword ptr [edx + 0x158] */
  { double v = F64((uint32_t)(edx + 0x158u)); FPUSH(v); }
/* 992639: fadd qword ptr [eax + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x158u)));
/* 99263f: fadd qword ptr [ecx + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x158u)));
/* 992645: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992647: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992649: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99264b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99264d: fabs  */
  ST0 = fabs(ST0);
/* 99264f: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992651: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992653: fld qword ptr [edx + 0x160] */
  { double v = F64((uint32_t)(edx + 0x160u)); FPUSH(v); }
/* 992659: fadd qword ptr [eax + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x160u)));
/* 99265f: fadd qword ptr [ecx + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x160u)));
/* 992665: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992667: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992669: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99266b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99266d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99266f: fabs  */
  ST0 = fabs(ST0);
/* 992671: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992673: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992675: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992677: /* 992677: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 99267d: fadd qword ptr [eax + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x138u)));
/* 992683: fadd qword ptr [ecx + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x138u)));
/* 992689: fld qword ptr [edx + 0x140] */
  { double v = F64((uint32_t)(edx + 0x140u)); FPUSH(v); }
/* 99268f: fadd qword ptr [eax + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x140u)));
/* 992695: fadd qword ptr [ecx + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x140u)));
/* 99269b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99269d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99269f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9926a1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9926a3: fabs  */
  ST0 = fabs(ST0);
/* 9926a5: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9926a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9926a9: fld qword ptr [edx + 0x148] */
  { double v = F64((uint32_t)(edx + 0x148u)); FPUSH(v); }
/* 9926af: fadd qword ptr [eax + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x148u)));
/* 9926b5: fadd qword ptr [ecx + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x148u)));
/* 9926bb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9926bd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9926bf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9926c1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9926c3: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9926c5: fabs  */
  ST0 = fabs(ST0);
/* 9926c7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9926c9: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9926cb: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9926cd: /* 9926cd: fld qword ptr [edx + 0x120] */
  { double v = F64((uint32_t)(edx + 0x120u)); FPUSH(v); }
/* 9926d3: fadd qword ptr [eax + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x120u)));
/* 9926d9: fadd qword ptr [ecx + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x120u)));
/* 9926df: fld qword ptr [edx + 0x128] */
  { double v = F64((uint32_t)(edx + 0x128u)); FPUSH(v); }
/* 9926e5: fadd qword ptr [eax + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x128u)));
/* 9926eb: fadd qword ptr [ecx + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x128u)));
/* 9926f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9926f3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9926f5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9926f7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9926f9: fabs  */
  ST0 = fabs(ST0);
/* 9926fb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9926fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9926ff: fld qword ptr [edx + 0x130] */
  { double v = F64((uint32_t)(edx + 0x130u)); FPUSH(v); }
/* 992705: fadd qword ptr [eax + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x130u)));
/* 99270b: fadd qword ptr [ecx + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x130u)));
/* 992711: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992713: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992715: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992717: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992719: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99271b: fabs  */
  ST0 = fabs(ST0);
/* 99271d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99271f: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992721: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992723: /* 992723: fld qword ptr [edx + 0x108] */
  { double v = F64((uint32_t)(edx + 0x108u)); FPUSH(v); }
/* 992729: fadd qword ptr [eax + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x108u)));
/* 99272f: fadd qword ptr [ecx + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x108u)));
/* 992735: fld qword ptr [edx + 0x110] */
  { double v = F64((uint32_t)(edx + 0x110u)); FPUSH(v); }
/* 99273b: fadd qword ptr [eax + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x110u)));
/* 992741: fadd qword ptr [ecx + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x110u)));
/* 992747: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992749: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99274b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99274d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99274f: fabs  */
  ST0 = fabs(ST0);
/* 992751: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992753: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992755: fld qword ptr [edx + 0x118] */
  { double v = F64((uint32_t)(edx + 0x118u)); FPUSH(v); }
/* 99275b: fadd qword ptr [eax + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x118u)));
/* 992761: fadd qword ptr [ecx + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x118u)));
/* 992767: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992769: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99276b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99276d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99276f: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992771: fabs  */
  ST0 = fabs(ST0);
/* 992773: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992775: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992777: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992779: /* 992779: fld qword ptr [edx + 0xf0] */
  { double v = F64((uint32_t)(edx + 0xf0u)); FPUSH(v); }
/* 99277f: fadd qword ptr [eax + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf0u)));
/* 992785: fadd qword ptr [ecx + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf0u)));
/* 99278b: fld qword ptr [edx + 0xf8] */
  { double v = F64((uint32_t)(edx + 0xf8u)); FPUSH(v); }
/* 992791: fadd qword ptr [eax + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf8u)));
/* 992797: fadd qword ptr [ecx + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf8u)));
/* 99279d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99279f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9927a1: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9927a3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9927a5: fabs  */
  ST0 = fabs(ST0);
/* 9927a7: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9927a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9927ab: fld qword ptr [edx + 0x100] */
  { double v = F64((uint32_t)(edx + 0x100u)); FPUSH(v); }
/* 9927b1: fadd qword ptr [eax + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x100u)));
/* 9927b7: fadd qword ptr [ecx + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x100u)));
/* 9927bd: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9927bf: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9927c1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9927c3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9927c5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9927c7: fabs  */
  ST0 = fabs(ST0);
/* 9927c9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9927cb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9927cd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9927cf: /* 9927cf: fld qword ptr [edx + 0xd8] */
  { double v = F64((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 9927d5: fadd qword ptr [eax + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd8u)));
/* 9927db: fadd qword ptr [ecx + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd8u)));
/* 9927e1: fld qword ptr [edx + 0xe0] */
  { double v = F64((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 9927e7: fadd qword ptr [eax + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe0u)));
/* 9927ed: fadd qword ptr [ecx + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe0u)));
/* 9927f3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9927f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9927f7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9927f9: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9927fb: fabs  */
  ST0 = fabs(ST0);
/* 9927fd: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9927ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992801: fld qword ptr [edx + 0xe8] */
  { double v = F64((uint32_t)(edx + 0xe8u)); FPUSH(v); }
/* 992807: fadd qword ptr [eax + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe8u)));
/* 99280d: fadd qword ptr [ecx + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe8u)));
/* 992813: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992815: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992817: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992819: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99281b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99281d: fabs  */
  ST0 = fabs(ST0);
/* 99281f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992821: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992823: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992825: /* 992825: fld qword ptr [edx + 0xc0] */
  { double v = F64((uint32_t)(edx + 0xc0u)); FPUSH(v); }
/* 99282b: fadd qword ptr [eax + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc0u)));
/* 992831: fadd qword ptr [ecx + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc0u)));
/* 992837: fld qword ptr [edx + 0xc8] */
  { double v = F64((uint32_t)(edx + 0xc8u)); FPUSH(v); }
/* 99283d: fadd qword ptr [eax + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc8u)));
/* 992843: fadd qword ptr [ecx + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc8u)));
/* 992849: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99284b: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99284d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99284f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992851: fabs  */
  ST0 = fabs(ST0);
/* 992853: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992855: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992857: fld qword ptr [edx + 0xd0] */
  { double v = F64((uint32_t)(edx + 0xd0u)); FPUSH(v); }
/* 99285d: fadd qword ptr [eax + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd0u)));
/* 992863: fadd qword ptr [ecx + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd0u)));
/* 992869: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99286b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99286d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99286f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992871: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992873: fabs  */
  ST0 = fabs(ST0);
/* 992875: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992877: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992879: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99287b: /* 99287b: fld qword ptr [edx + 0xa8] */
  { double v = F64((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* 992881: fadd qword ptr [eax + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa8u)));
/* 992887: fadd qword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa8u)));
/* 99288d: fld qword ptr [edx + 0xb0] */
  { double v = F64((uint32_t)(edx + 0xb0u)); FPUSH(v); }
/* 992893: fadd qword ptr [eax + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb0u)));
/* 992899: fadd qword ptr [ecx + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb0u)));
/* 99289f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9928a1: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9928a3: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9928a5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9928a7: fabs  */
  ST0 = fabs(ST0);
/* 9928a9: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9928ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9928ad: fld qword ptr [edx + 0xb8] */
  { double v = F64((uint32_t)(edx + 0xb8u)); FPUSH(v); }
/* 9928b3: fadd qword ptr [eax + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb8u)));
/* 9928b9: fadd qword ptr [ecx + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb8u)));
/* 9928bf: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9928c1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9928c3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9928c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9928c7: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9928c9: fabs  */
  ST0 = fabs(ST0);
/* 9928cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9928cd: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9928cf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9928d1: /* 9928d1: fld qword ptr [edx + 0x90] */
  { double v = F64((uint32_t)(edx + 0x90u)); FPUSH(v); }
/* 9928d7: fadd qword ptr [eax + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x90u)));
/* 9928dd: fadd qword ptr [ecx + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x90u)));
/* 9928e3: fld qword ptr [edx + 0x98] */
  { double v = F64((uint32_t)(edx + 0x98u)); FPUSH(v); }
/* 9928e9: fadd qword ptr [eax + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x98u)));
/* 9928ef: fadd qword ptr [ecx + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x98u)));
/* 9928f5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9928f7: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9928f9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9928fb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9928fd: fabs  */
  ST0 = fabs(ST0);
/* 9928ff: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992903: fld qword ptr [edx + 0xa0] */
  { double v = F64((uint32_t)(edx + 0xa0u)); FPUSH(v); }
/* 992909: fadd qword ptr [eax + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa0u)));
/* 99290f: fadd qword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa0u)));
/* 992915: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992917: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992919: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99291b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99291d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99291f: fabs  */
  ST0 = fabs(ST0);
/* 992921: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992923: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992925: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992927: /* 992927: fld qword ptr [edx + 0x78] */
  { double v = F64((uint32_t)(edx + 0x78u)); FPUSH(v); }
/* 99292a: fadd qword ptr [eax + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x78u)));
/* 99292d: fadd qword ptr [ecx + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x78u)));
/* 992930: fld qword ptr [edx + 0x80] */
  { double v = F64((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 992936: fadd qword ptr [eax + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x80u)));
/* 99293c: fadd qword ptr [ecx + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x80u)));
/* 992942: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992944: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992946: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992948: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99294a: fabs  */
  ST0 = fabs(ST0);
/* 99294c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99294e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992950: fld qword ptr [edx + 0x88] */
  { double v = F64((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 992956: fadd qword ptr [eax + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x88u)));
/* 99295c: fadd qword ptr [ecx + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x88u)));
/* 992962: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992964: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992966: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992968: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99296a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99296c: fabs  */
  ST0 = fabs(ST0);
/* 99296e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992970: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992972: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992974: /* 992974: fld qword ptr [edx + 0x60] */
  { double v = F64((uint32_t)(edx + 0x60u)); FPUSH(v); }
/* 992977: fadd qword ptr [eax + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x60u)));
/* 99297a: fadd qword ptr [ecx + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x60u)));
/* 99297d: fld qword ptr [edx + 0x68] */
  { double v = F64((uint32_t)(edx + 0x68u)); FPUSH(v); }
/* 992980: fadd qword ptr [eax + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x68u)));
/* 992983: fadd qword ptr [ecx + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x68u)));
/* 992986: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992988: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99298a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99298c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99298e: fabs  */
  ST0 = fabs(ST0);
/* 992990: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992992: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992994: fld qword ptr [edx + 0x70] */
  { double v = F64((uint32_t)(edx + 0x70u)); FPUSH(v); }
/* 992997: fadd qword ptr [eax + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x70u)));
/* 99299a: fadd qword ptr [ecx + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x70u)));
/* 99299d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99299f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9929a1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9929a3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9929a5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9929a7: fabs  */
  ST0 = fabs(ST0);
/* 9929a9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9929ab: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9929ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9929af: /* 9929af: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 9929b2: fadd qword ptr [eax + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x48u)));
/* 9929b5: fadd qword ptr [ecx + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x48u)));
/* 9929b8: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 9929bb: fadd qword ptr [eax + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x50u)));
/* 9929be: fadd qword ptr [ecx + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x50u)));
/* 9929c1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9929c3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9929c5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9929c7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9929c9: fabs  */
  ST0 = fabs(ST0);
/* 9929cb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9929cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9929cf: fld qword ptr [edx + 0x58] */
  { double v = F64((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 9929d2: fadd qword ptr [eax + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x58u)));
/* 9929d5: fadd qword ptr [ecx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x58u)));
/* 9929d8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9929da: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9929dc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9929de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9929e0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9929e2: fabs  */
  ST0 = fabs(ST0);
/* 9929e4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9929e6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9929e8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9929ea: /* 9929ea: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 9929ed: fadd qword ptr [eax + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x30u)));
/* 9929f0: fadd qword ptr [ecx + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x30u)));
/* 9929f3: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 9929f6: fadd qword ptr [eax + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x38u)));
/* 9929f9: fadd qword ptr [ecx + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x38u)));
/* 9929fc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9929fe: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a00: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a02: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a04: fabs  */
  ST0 = fabs(ST0);
/* 992a06: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a08: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a0a: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 992a0d: fadd qword ptr [eax + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x40u)));
/* 992a10: fadd qword ptr [ecx + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x40u)));
/* 992a13: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a15: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a17: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a19: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a1b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a1d: fabs  */
  ST0 = fabs(ST0);
/* 992a1f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a21: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a23: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a25: /* 992a25: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 992a28: fadd qword ptr [eax + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x18u)));
/* 992a2b: fadd qword ptr [ecx + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x18u)));
/* 992a2e: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 992a31: fadd qword ptr [eax + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x20u)));
/* 992a34: fadd qword ptr [ecx + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x20u)));
/* 992a37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992a39: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a3b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a3d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a3f: fabs  */
  ST0 = fabs(ST0);
/* 992a41: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a43: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a45: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 992a48: fadd qword ptr [eax + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x28u)));
/* 992a4b: fadd qword ptr [ecx + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x28u)));
/* 992a4e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a50: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a52: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a56: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a58: fabs  */
  ST0 = fabs(ST0);
/* 992a5a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a5c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a5e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a60: /* 992a60: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 992a62: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 992a64: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 992a66: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 992a69: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 992a6c: fadd qword ptr [ecx + 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x8u)));
/* 992a6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992a71: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a73: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a75: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a77: fabs  */
  ST0 = fabs(ST0);
/* 992a79: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a7b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a7d: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 992a80: fadd qword ptr [eax + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x10u)));
/* 992a83: fadd qword ptr [ecx + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x10u)));
/* 992a86: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a88: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a8a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a8c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a8e: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a90: fabs  */
  ST0 = fabs(ST0);
/* 992a92: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a94: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a96: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a98: /* 992a98: fcom qword ptr [0xcf36c0] */
  fpu_com(ST0, F64((uint32_t)(0xcf36c0u)));
/* 992a9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992aa0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992aa3: jp 0x992aaf */
  if (pf) goto L_992aaf;
L_992aa5: /* 992aa5: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 992aab: mov esi, edi */
  esi = edi;
/* 992aad: jmp 0x992ab1 */
  goto L_992ab1;
L_992aaf: /* 992aaf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992ab1: /* 992ab1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992ab2: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992ab5: jl 0x991b00 */
  if ((sf != of)) goto L_991b00;
L_992abb: /* 992abb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 992abf: jmp 0x992ac5 */
  goto L_992ac5;
L_992ac1: /* 992ac1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_992ac5: /* 992ac5: mov eax, esi */
  eax = esi;
/* 992ac7: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 992aca: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 992acd: add eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992ad2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 992ad6: mov eax, esi */
  eax = esi;
/* 992ad8: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 992adb: mov ebx, esi */
  ebx = esi;
/* 992add: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 992ae0: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 992ae3: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 992ae6: add eax, 0xcf4fc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4fc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992aeb: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 992aee: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992af2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 992af5: add ebx, 0xcf4f48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcf4f48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 992afb: xor edi, edi */
  edi = 0;
/* 992afd: sub eax, 0xb04360 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb04360u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 992b02: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 992b06: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 992b0a: jmp 0x992b10 */
  goto L_992b10;
L_992b0c: /* 992b0c: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_992b10: /* 992b10: mov eax, esi */
  eax = esi;
/* 992b12: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* 992b15: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 992b17: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 992b1e: mov esi, dword ptr [edx + 0xb04360] */
  esi = R32((uint32_t)(edx + 0xb04360u));
/* 992b24: mov ecx, 8 */
  ecx = 0x8u;
/* 992b29: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 992b2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992b2e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 992b30: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 992b33: mov esi, dword ptr [esp + eax + 0x40] */
  esi = R32((uint32_t)(esp + eax + 0x40u));
/* 992b37: mov eax, dword ptr [esp + eax + 0x44] */
  eax = R32((uint32_t)(esp + eax + 0x44u));
/* 992b3b: sar esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
  }
/* 992b3d: mov ecx, esi */
  ecx = esi;
/* 992b3f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 992b43: mov dword ptr [esi + edx + 0xb04360], ecx */
  W32((uint32_t)(esi + edx + 0xb04360u), ecx);
/* 992b4a: mov ecx, 8 */
  ecx = 0x8u;
/* 992b4f: sub ecx, dword ptr [edx + 0xb04360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xb04360u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 992b55: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 992b57: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992b58: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992b5b: mov dword ptr [esi + edx + 0xb0436c], eax */
  W32((uint32_t)(esi + edx + 0xb0436cu), eax);
/* 992b62: jl 0x992b0c */
  if ((sf != of)) goto L_992b0c;
L_992b64: /* 992b64: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 992b67: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 992b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992b6f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 992b77: jle 0x992de0 */
  if ((zf || sf != of)) goto L_992de0;
L_992b7d: /* 992b7d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 992b80: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 992b84: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 992b87: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_992b8a: /* 992b8a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 992b8d: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 992b90: xor edi, edi */
  edi = 0;
/* 992b92: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 992b95: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* 992b9d: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 992b9f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 992ba2: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992ba5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992ba7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992ba9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992bab: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992bad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992baf: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992bb1: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992bb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992bb5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992bb7: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992bb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992bbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992bbd: jl 0x992d41 */
  if ((sf != of)) goto L_992d41;
L_992bc3: /* 992bc3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bc7: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 992bcb: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992bcd: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 992bd1: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 992bd5: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992bd7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 992bdb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bdf: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 992be2: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 992be6: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992be9: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992beb: mov dword ptr [esp + 0x14], 3 */
  W32((uint32_t)(esp + 0x14u), 0x3u);
/* 992bf3: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_992bf7: /* 992bf7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bfb: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992bfe: fsub qword ptr [eax + edi*8] */
  ST0 = ST0 - (F64((uint32_t)(eax + edi*8)));
/* 992c01: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 992c05: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c07: fsub qword ptr [edx - 8] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0xfffffff8u)));
/* 992c0a: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c0d: fsub qword ptr [esi - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xfffffff0u)));
/* 992c10: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992c12: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992c14: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992c16: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992c18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c1a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992c1c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992c1e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c20: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992c22: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992c26: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992c28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c2c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992c2e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992c30: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992c33: jp 0x992c3f */
  if (pf) goto L_992c3f;
L_992c35: /* 992c35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c37: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 992c3b: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_992c3f: /* 992c3f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 992c43: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992c46: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992c49: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 992c4d: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c4f: fsub qword ptr [edx] */
  ST0 = ST0 - (F64((uint32_t)(edx)));
/* 992c51: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c54: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992c57: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992c59: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992c5b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992c5d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992c5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c61: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992c63: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992c65: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c67: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992c69: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992c6d: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992c6f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c71: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c73: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992c75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992c77: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992c7a: jp 0x992c8d */
  if (pf) goto L_992c8d;
L_992c7c: /* 992c7c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992c80: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c82: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992c86: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992c89: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992c8d: /* 992c8d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 992c91: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992c94: fsub qword ptr [esi + eax] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax)));
/* 992c97: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c99: fsub qword ptr [edx + 8] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0x8u)));
/* 992c9c: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c9f: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* 992ca1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992ca3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992ca5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992ca7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992ca9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cab: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992cad: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992caf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cb1: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992cb3: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992cb7: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992cb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992cbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992cbd: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992cbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992cc1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992cc4: jp 0x992cd5 */
  if (pf) goto L_992cd5;
L_992cc6: /* 992cc6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992cca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992ccc: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992cd0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 992cd1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992cd5: /* 992cd5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992cd9: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992cdc: fsub qword ptr [eax + edi*8 + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(eax + edi*8 + 0x18u)));
/* 992ce0: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992ce2: fsub qword ptr [edx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0x10u)));
/* 992ce5: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992ce8: fsub qword ptr [esi + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x8u)));
/* 992ceb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992ced: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992cef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992cf1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992cf3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cf5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992cf7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992cf9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cfb: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992cfd: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992d01: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992d03: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d07: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992d09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992d0b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992d0e: jp 0x992d1e */
  if (pf) goto L_992d1e;
L_992d10: /* 992d10: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992d14: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d16: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992d1a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992d1e: /* 992d1e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992d22: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 992d25: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992d28: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 992d2b: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 992d2e: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992d31: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992d33: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 992d37: jl 0x992bf7 */
  if ((sf != of)) goto L_992bf7;
L_992d3d: /* 992d3d: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
L_992d41: /* 992d41: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992d44: jge 0x992db2 */
  if ((sf == of)) goto L_992db2;
L_992d46: /* 992d46: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 992d4a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 992d4e: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 992d50: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992d52: lea edx, [ebx + edi*8] */
  edx = (uint32_t)(ebx + edi*8);
/* 992d55: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 992d59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_992d60: /* 992d60: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992d63: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 992d67: fsub qword ptr [edx + esi] */
  ST0 = ST0 - (F64((uint32_t)(edx + esi)));
/* 992d6a: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992d6c: fsub qword ptr [edx] */
  ST0 = ST0 - (F64((uint32_t)(edx)));
/* 992d6e: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992d71: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992d74: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 992d78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992d7a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992d7c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992d7e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992d80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992d82: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992d84: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992d86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992d88: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 992d8a: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992d8e: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992d90: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d92: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d94: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992d96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992d98: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992d9b: jp 0x992da7 */
  if (pf) goto L_992da7;
L_992d9d: /* 992d9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d9f: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 992da3: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_992da7: /* 992da7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 992daa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992dab: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 992dae: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992db0: jl 0x992d60 */
  if ((sf != of)) goto L_992d60;
L_992db2: /* 992db2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 992db6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992db8: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 992dbb: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 992dbf: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 992dc2: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 992dc6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 992dc9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 992dca: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992dcd: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 992dd0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992dd2: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 992dd6: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 992dda: jl 0x992b8a */
  if ((sf != of)) goto L_992b8a;
L_992de0: /* 992de0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 992de1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 992de2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 992de3: mov esp, ebp */
  esp = ebp;
/* 992de5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 992de6: ret  */
  esp += 4; SPILL(); return;
}

void f_991709(void) {
  LOAD_REGS();
  goto L_991709;
L_9916d0: /* 9916d0: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 9916d4: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 9916d6: mov ecx, 8 */
  ecx = 0x8u;
/* 9916db: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 9916dd: mov edi, 1 */
  edi = 0x1u;
/* 9916e2: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 9916e4: mov ecx, 0x100 */
  ecx = 0x100u;
/* 9916e9: lea esi, [eax + 0x20] */
  esi = (uint32_t)(eax + 0x20u);
/* 9916ec: mov ebx, eax */
  ebx = eax;
/* 9916ee: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9916f0: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9916f3: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 9916f7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9916fb: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 9916ff: mov dword ptr [esp + 0xc], 2 */
  W32((uint32_t)(esp + 0xcu), 0x2u);
/* 991707: jmp 0x991710 */
  goto L_991710;
L_991709: /* 991709: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_991710: /* 991710: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 991714: fld qword ptr [ecx + edx] */
  { double v = F64((uint32_t)(ecx + edx)); FPUSH(v); }
/* 991717: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 99171d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99171f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 991722: jnp 0x99173b */
  if (!pf) goto L_99173b;
L_991724: /* 991724: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 991728: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 99172a: fdiv qword ptr [ecx + edx] */
  ST0 = ST0 / (F64((uint32_t)(ecx + edx)));
/* 99172d: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 991733: fstp qword ptr [0xcf5048] */
  WF64((uint32_t)(0xcf5048u), ST0); FPOP();
/* 991739: jmp 0x99174f */
  goto L_99174f;
L_99173b: /* 99173b: mov dword ptr [0xcf5048], 0 */
  W32((uint32_t)(0xcf5048u), 0x0u);
/* 991745: mov dword ptr [0xcf504c], 0 */
  W32((uint32_t)(0xcf504cu), 0x0u);
L_99174f: /* 99174f: mov ecx, dword ptr [0xcf504c] */
  ecx = R32((uint32_t)(0xcf504cu));
/* 991755: mov edx, dword ptr [0xcf5048] */
  edx = R32((uint32_t)(0xcf5048u));
/* 99175b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99175c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99175d: call 0x99cf1e */
  esp -= 4; W32(esp, 0x991762u); SPILL(); hle_floor(); RELOAD();
/* 991762: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 991765: call 0x99c958 */
  esp -= 4; W32(esp, 0x99176au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 99176a: mov edx, eax */
  edx = eax;
/* 99176c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99176e: jge 0x991774 */
  if ((sf == of)) goto L_991774;
L_991770: /* 991770: xor edx, edx */
  edx = 0;
/* 991772: jmp 0x991780 */
  goto L_991780;
L_991774: /* 991774: cmp edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99177a: jl 0x991780 */
  if ((sf != of)) goto L_991780;
L_99177c: /* 99177c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_991780: /* 991780: and edx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 991784: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991788: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 99178a: mov eax, edx */
  eax = edx;
/* 99178c: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 99178e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991790: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 991794: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 991798: fcomp qword ptr [0xcf5048] */
  fpu_com(ST0, F64((uint32_t)(0xcf5048u)));
  FPOP();
/* 99179e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9917a0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 9917a3: jne 0x9917ad */
  if (!zf) goto L_9917ad;
L_9917a5: /* 9917a5: mov eax, edx */
  eax = edx;
/* 9917a7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 9917a9: js 0x9917ad */
  if (sf) goto L_9917ad;
L_9917ab: /* 9917ab: mov edx, eax */
  edx = eax;
L_9917ad: /* 9917ad: mov eax, edx */
  eax = edx;
/* 9917af: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 9917b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9917b3: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 9917b5: mov dword ptr [esi - 0x30], eax */
  W32((uint32_t)(esi + 0xffffffd0u), eax);
/* 9917b8: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 9917bb: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9917c0: jge 0x9917c4 */
  if ((sf == of)) goto L_9917c4;
L_9917c2: /* 9917c2: mov edx, eax */
  edx = eax;
L_9917c4: /* 9917c4: mov eax, edx */
  eax = edx;
/* 9917c6: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 9917c8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9917cc: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9917cf: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9917d2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9917d4: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9917d8: mov dword ptr [esi - 4], edx */
  W32((uint32_t)(esi + 0xfffffffcu), edx);
/* 9917db: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9917dd: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9917e1: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9917e4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9917e8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9917ec: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9917ef: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9917f0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9917f4: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 9917f8: jne 0x991710 */
  if (!zf) goto L_991710;
L_9917fe: /* 9917fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 991802: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 991806: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991809: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99180c: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99180f: cmp ecx, 0xb0436c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xb0436cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991815: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 991819: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 99181d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 991821: jl 0x9916d0 */
  if ((sf != of)) goto L_9916d0;
L_991827: /* 991827: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99182a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99182d: jne 0x991b42 */
  if (!zf) goto L_991b42;
L_991833: /* 991833: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 991836: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99183a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 99183d: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991840: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 991848: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
/* 99184c: mov ecx, 0xcf4ed0 */
  ecx = 0xcf4ed0u;
/* 991851: mov eax, 0xcf36c8 */
  eax = 0xcf36c8u;
/* 991856: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 99185a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_991860: /* 991860: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991864: lea eax, [ebx - 4] */
  eax = (uint32_t)(ebx + 0xfffffffcu);
/* 991867: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 99186b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99186f: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 991873: mov dword ptr [esp + 0x28], 4 */
  W32((uint32_t)(esp + 0x28u), 0x4u);
/* 99187b: jmp 0x991880 */
  goto L_991880;
L_991880: /* 991880: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 991884: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 991886: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 991889: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99188b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99188c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99188e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 991892: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991894: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 991897: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99189b: fild dword ptr [ebx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 99189e: xor edi, edi */
  edi = 0;
/* 9918a0: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918a2: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918a8: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 9918ab: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 9918ad: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918af: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918b5: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 9918b7: fild dword ptr [ebx + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 9918ba: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 9918bc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9918c0: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 9918c6: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9918c9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9918cc: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9918cf: jl 0x9919ef */
  if ((sf != of)) goto L_9919ef;
L_9918d5: /* 9918d5: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 9918d8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 9918dc: mov ebx, 3 */
  ebx = 0x3u;
/* 9918e1: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_9918e4: /* 9918e4: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 9918e7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918ea: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 9918ed: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f0: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918f6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9918f8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9918fb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9918fd: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991900: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991903: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991906: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991909: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99190c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99190f: fstp qword ptr [eax - 0x50] */
  WF64((uint32_t)(eax + 0xffffffb0u), ST0); FPOP();
/* 991912: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991914: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991917: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991919: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99191b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99191d: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991920: fstp qword ptr [eax - 0x48] */
  WF64((uint32_t)(eax + 0xffffffb8u), ST0); FPOP();
/* 991923: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991925: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991928: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 99192b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99192d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 99192f: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991932: fstp qword ptr [eax - 0x40] */
  WF64((uint32_t)(eax + 0xffffffc0u), ST0); FPOP();
/* 991935: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991937: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99193a: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 99193d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99193f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991941: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991944: fstp qword ptr [eax - 0x38] */
  WF64((uint32_t)(eax + 0xffffffc8u), ST0); FPOP();
/* 991947: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991949: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99194c: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 99194e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991950: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991952: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991955: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991958: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99195a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 99195d: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991960: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991962: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991964: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991967: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 99196a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99196c: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99196e: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991971: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991973: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991975: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991977: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 99197a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99197c: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99197e: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991980: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991982: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991984: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991986: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991989: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99198b: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 99198d: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991990: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991992: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991994: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991996: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991999: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99199b: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 99199e: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 9919a1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919a3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919a5: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 9919a8: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9919ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919ad: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 9919b0: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 9919b2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9919b5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9919b8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9919bb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9919c0: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 9919c3: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9919c6: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9919c9: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9919cc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919ce: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9919d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919d3: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 9919d6: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 9919d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9919db: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 9919de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9919e0: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 9919e3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9919e5: jl 0x9918e4 */
  if ((sf != of)) goto L_9918e4;
L_9919eb: /* 9919eb: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_9919ef: /* 9919ef: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9919f2: jge 0x991a51 */
  if ((sf == of)) goto L_991a51;
L_9919f4: /* 9919f4: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9919f8: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 9919fb: mov esi, edi */
  esi = edi;
/* 9919fd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9919ff: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991a02: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 991a05: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
L_991a08: /* 991a08: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991a0a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a0d: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991a10: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a13: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991a16: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 991a17: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a19: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991a1c: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991a1f: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a23: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a25: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991a28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a2a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991a2d: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991a2f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a31: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a35: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a37: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991a3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a3c: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991a3f: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991a42: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991a44: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991a48: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991a4a: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991a4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991a4f: jl 0x991a08 */
  if ((sf != of)) goto L_991a08;
L_991a51: /* 991a51: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 991a55: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 991a59: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 991a5d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 991a61: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991a64: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991a67: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991a6a: add esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991a70: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991a73: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 991a74: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 991a78: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 991a7c: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 991a80: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 991a84: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 991a88: jne 0x991880 */
  if (!zf) goto L_991880;
L_991a8e: /* 991a8e: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 991a92: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 991a96: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 991a9a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 991a9b: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 991a9f: mov eax, esi */
  eax = esi;
/* 991aa1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 991aa5: mov edx, 8 */
  edx = 0x8u;
/* 991aaa: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991aac: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991aae: cmp eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991ab3: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 991ab7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991abb: jl 0x991860 */
  if ((sf != of)) goto L_991860;
L_991ac1: /* 991ac1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 991ac4: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 991ac7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 991aca: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 991acd: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 991ad0: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 991ad2: xor edi, edi */
  edi = 0;
/* 991ad4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ad6: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991ada: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991adc: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 991add: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991adf: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991ae1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991ae3: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 991ae5: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 991ae7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991ae9: fmul qword ptr [0xa21b38] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b38u)));
/* 991aef: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 991af5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991af7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991af9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991afb: jmp 0x991b00 */
  goto L_991b00;
L_991b00: /* 991b00: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991b06: mov eax, edi */
  eax = edi;
/* 991b08: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991b0b: mov ecx, edi */
  ecx = edi;
/* 991b0d: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 991b10: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 991b13: mov edx, edi */
  edx = edi;
/* 991b15: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 991b18: shl ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 991b1b: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 991b1e: shl edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 991b21: add ecx, 0xcf36c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf36c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991b27: add eax, 0xcf3ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991b2c: add edx, 0xcf46c8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf46c8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991b32: cmp ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 991b35: ja 0x992a98 */
  if ((!cf && !zf)) goto L_992a98;
L_991b3b: /* 991b3b: jmp dword ptr [ebx*4 + 0x992de8] */
  switch (R32((uint32_t)(ebx*4 + 0x992de8u))) {
    case 0x991ef2u: goto L_991ef2;
    case 0x991f66u: goto L_991f66;
    case 0x991fdau: goto L_991fda;
    case 0x99204eu: goto L_99204e;
    case 0x9920c2u: goto L_9920c2;
    case 0x992136u: goto L_992136;
    case 0x9921aau: goto L_9921aa;
    case 0x99221eu: goto L_99221e;
    case 0x992292u: goto L_992292;
    case 0x992306u: goto L_992306;
    case 0x99237au: goto L_99237a;
    case 0x9923eeu: goto L_9923ee;
    case 0x992462u: goto L_992462;
    case 0x9924b2u: goto L_9924b2;
    case 0x992502u: goto L_992502;
    case 0x992552u: goto L_992552;
    case 0x9925cbu: goto L_9925cb;
    case 0x992621u: goto L_992621;
    case 0x992677u: goto L_992677;
    case 0x9926cdu: goto L_9926cd;
    case 0x992723u: goto L_992723;
    case 0x992779u: goto L_992779;
    case 0x9927cfu: goto L_9927cf;
    case 0x992825u: goto L_992825;
    case 0x99287bu: goto L_99287b;
    case 0x9928d1u: goto L_9928d1;
    case 0x992927u: goto L_992927;
    case 0x992974u: goto L_992974;
    case 0x9929afu: goto L_9929af;
    case 0x9929eau: goto L_9929ea;
    case 0x992a25u: goto L_992a25;
    case 0x992a60u: goto L_992a60;
    default: guest_badjump(0x991b3b, R32((uint32_t)(ebx*4 + 0x992de8u))); return;
  }
L_991b42: /* 991b42: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 991b45: jne 0x992ac1 */
  if (!zf) goto L_992ac1;
L_991b4b: /* 991b4b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991b4e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 991b51: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991b54: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 991b5c: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
/* 991b60: mov esi, 0xcf4ed0 */
  esi = 0xcf4ed0u;
/* 991b65: mov eax, 0xcf36c8 */
  eax = 0xcf36c8u;
/* 991b6a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 991b6e: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_991b72: /* 991b72: mov ecx, esi */
  ecx = esi;
/* 991b74: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991b78: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 991b7c: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 991b80: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 991b84: mov dword ptr [esp + 0x24], 4 */
  W32((uint32_t)(esp + 0x24u), 0x4u);
/* 991b8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_991b90: /* 991b90: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 991b94: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 991b97: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 991b99: lea edx, [edx + eax*2 + 1] */
  edx = (uint32_t)(edx + eax*2 + 0x1u);
/* 991b9d: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 991ba2: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 991ba4: mov eax, edx */
  eax = edx;
/* 991ba6: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 991ba9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991bab: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* 991bae: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 991bb1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 991bb3: lea edx, [eax + edx*2 + 1] */
  edx = (uint32_t)(eax + edx*2 + 0x1u);
/* 991bb7: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 991bbc: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 991bbe: mov eax, edx */
  eax = edx;
/* 991bc0: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 991bc3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991bc5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 991bc9: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 991bcc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 991bcf: fild dword ptr [ebx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 991bd2: xor edi, edi */
  edi = 0;
/* 991bd4: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991bd7: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991bd9: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bdf: fstp qword ptr [esi - 8] */
  WF64((uint32_t)(esi + 0xfffffff8u), ST0); FPOP();
/* 991be2: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 991be4: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991be6: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bec: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 991bee: fild dword ptr [ebx + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 991bf1: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991bf3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991bf9: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 991bfc: fild dword ptr [ebx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 991bff: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 991c01: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991c05: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 991c0b: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 991c0e: jl 0x991d86 */
  if ((sf != of)) goto L_991d86;
L_991c14: /* 991c14: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 991c17: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 991c1b: mov ebx, 3 */
  ebx = 0x3u;
/* 991c20: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_991c23: /* 991c23: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c26: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c29: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991c2c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c32: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c35: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c37: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c3a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c3c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c42: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c45: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c48: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c4b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991c4e: fstp qword ptr [eax - 0x50] */
  WF64((uint32_t)(eax + 0xffffffb0u), ST0); FPOP();
/* 991c51: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c53: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c56: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991c58: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c5a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c5c: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c5f: fstp qword ptr [eax - 0x48] */
  WF64((uint32_t)(eax + 0xffffffb8u), ST0); FPOP();
/* 991c62: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c64: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c67: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991c6a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c6c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c6e: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c71: fstp qword ptr [eax - 0x40] */
  WF64((uint32_t)(eax + 0xffffffc0u), ST0); FPOP();
/* 991c74: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c76: fld qword ptr [edx - 0x30] */
  { double v = F64((uint32_t)(edx + 0xffffffd0u)); FPUSH(v); }
/* 991c79: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991c7c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c7e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c80: fmul qword ptr [esi - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff0u)));
/* 991c83: fstp qword ptr [eax - 0x38] */
  WF64((uint32_t)(eax + 0xffffffc8u), ST0); FPOP();
/* 991c86: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c88: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991c8b: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991c8e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991c90: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991c92: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991c95: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991c98: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991c9a: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991c9d: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991c9f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ca1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991ca3: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991ca6: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 991ca9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cab: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991cae: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991cb1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cb3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cb5: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991cb8: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991cbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cbd: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991cc0: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991cc3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cc5: fmul qword ptr [esi - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xfffffff8u)));
/* 991cc8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cca: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991ccd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ccf: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991cd1: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991cd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cd6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991cd8: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991cda: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991cdd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cdf: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991ce1: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991ce3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991ce5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991ce7: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991ce9: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991cec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991cee: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991cf0: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991cf3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cf6: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cf9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991cfc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991cfe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d03: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d06: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991d09: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991d0c: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 991d0e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991d11: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991d14: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991d17: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991d1a: fstp qword ptr [eax - 0x30] */
  WF64((uint32_t)(eax + 0xffffffd0u), ST0); FPOP();
/* 991d1d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d1f: fld qword ptr [edx - 0x60] */
  { double v = F64((uint32_t)(edx + 0xffffffa0u)); FPUSH(v); }
/* 991d22: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991d25: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d27: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d29: fmul qword ptr [esi - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe0u)));
/* 991d2c: fstp qword ptr [eax - 0x28] */
  WF64((uint32_t)(eax + 0xffffffd8u), ST0); FPOP();
/* 991d2f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d31: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d34: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991d37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d39: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d3c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d3e: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991d41: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d43: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d46: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991d48: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d4a: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d4f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991d52: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d54: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d57: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991d5a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d5c: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d5f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d61: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991d64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d66: fld qword ptr [edx - 0x48] */
  { double v = F64((uint32_t)(edx + 0xffffffb8u)); FPUSH(v); }
/* 991d69: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991d6c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991d6e: fmul qword ptr [esi - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xffffffe8u)));
/* 991d71: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991d73: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991d76: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991d78: jl 0x991c23 */
  if ((sf != of)) goto L_991c23;
L_991d7e: /* 991d7e: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 991d82: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_991d86: /* 991d86: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991d89: jge 0x991e07 */
  if ((sf == of)) goto L_991e07;
L_991d8b: /* 991d8b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 991d8f: lea edx, [edx + edi*2] */
  edx = (uint32_t)(edx + edi*2);
/* 991d92: mov esi, edi */
  esi = edi;
/* 991d94: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991d96: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 991d99: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 991d9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_991da0: /* 991da0: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 991da2: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 991da5: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 991da8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991dab: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991dae: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991db1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991db3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991db6: fmul qword ptr [esi + edi*8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8)));
/* 991db9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 991dba: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991dbd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dbf: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 991dc2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991dc4: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dc7: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 991dc9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991dcb: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991dcf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dd1: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 991dd4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991dd6: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dd9: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 991ddc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991dde: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991de2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991de4: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 991de7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991de9: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 991dec: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 991def: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991df1: fmul qword ptr [esi + edi*8 - 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi*8 + 0xfffffff8u)));
/* 991df5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 991df8: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991dfa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991dfc: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 991dff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991e01: jl 0x991da0 */
  if ((sf != of)) goto L_991da0;
L_991e03: /* 991e03: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_991e07: /* 991e07: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 991e0b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 991e0f: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991e12: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 991e16: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 991e1a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 991e1d: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 991e20: add eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991e25: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991e28: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 991e29: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 991e2d: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 991e31: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 991e35: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 991e39: jne 0x991b90 */
  if (!zf) goto L_991b90;
L_991e3f: /* 991e3f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 991e43: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 991e47: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 991e4b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 991e4c: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 991e50: mov ecx, 8 */
  ecx = 0x8u;
/* 991e55: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 991e57: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991e59: cmp eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 991e5e: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 991e62: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 991e66: jl 0x991b72 */
  if ((sf != of)) goto L_991b72;
L_991e6c: /* 991e6c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 991e6f: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 991e72: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 991e75: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 991e78: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 991e7b: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 991e7d: xor edi, edi */
  edi = 0;
/* 991e7f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991e81: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 991e85: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 991e87: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 991e88: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 991e8a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 991e8c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991e8e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 991e90: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 991e92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 991e94: fmul qword ptr [0xa21b38] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b38u)));
/* 991e9a: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 991ea0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ea6: jmp 0x991eb0 */
  goto L_991eb0;
L_991eb0: /* 991eb0: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 991eb6: mov eax, edi */
  eax = edi;
/* 991eb8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 991ebb: mov ecx, edi */
  ecx = edi;
/* 991ebd: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 991ec0: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 991ec3: mov edx, edi */
  edx = edi;
/* 991ec5: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 991ec8: shl ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 991ecb: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 991ece: shl edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 991ed1: add ecx, 0xcf36c8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf36c8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 991ed7: add eax, 0xcf3ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 991edc: add edx, 0xcf46c8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf46c8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 991ee2: cmp ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 991ee5: ja 0x99259f */
  if ((!cf && !zf)) goto L_99259f;
L_991eeb: /* 991eeb: jmp dword ptr [ebx*4 + 0x992e28] */
  switch (R32((uint32_t)(ebx*4 + 0x992e28u))) {
    case 0x991ef2u: goto L_991ef2;
    case 0x991f66u: goto L_991f66;
    case 0x991fdau: goto L_991fda;
    case 0x99204eu: goto L_99204e;
    case 0x9920c2u: goto L_9920c2;
    case 0x992136u: goto L_992136;
    case 0x9921aau: goto L_9921aa;
    case 0x99221eu: goto L_99221e;
    case 0x992292u: goto L_992292;
    case 0x992306u: goto L_992306;
    case 0x99237au: goto L_99237a;
    case 0x9923eeu: goto L_9923ee;
    case 0x992462u: goto L_992462;
    case 0x9924b2u: goto L_9924b2;
    case 0x992502u: goto L_992502;
    case 0x992552u: goto L_992552;
    default: guest_badjump(0x991eeb, R32((uint32_t)(ebx*4 + 0x992e28u))); return;
  }
L_991ef2: /* 991ef2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991ef4: fld qword ptr [edx + 0x1e0] */
  { double v = F64((uint32_t)(edx + 0x1e0u)); FPUSH(v); }
/* 991efa: fadd qword ptr [eax + 0x1e0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1e0u)));
/* 991f00: fadd qword ptr [ecx + 0x1e0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1e0u)));
/* 991f06: fld qword ptr [edx + 0x1e8] */
  { double v = F64((uint32_t)(edx + 0x1e8u)); FPUSH(v); }
/* 991f0c: fadd qword ptr [eax + 0x1e8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1e8u)));
/* 991f12: fadd qword ptr [ecx + 0x1e8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1e8u)));
/* 991f18: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f1a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f1c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f1e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f20: fabs  */
  ST0 = fabs(ST0);
/* 991f22: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f24: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f26: fld qword ptr [edx + 0x1f0] */
  { double v = F64((uint32_t)(edx + 0x1f0u)); FPUSH(v); }
/* 991f2c: fadd qword ptr [eax + 0x1f0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1f0u)));
/* 991f32: fadd qword ptr [ecx + 0x1f0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1f0u)));
/* 991f38: fld qword ptr [edx + 0x1f8] */
  { double v = F64((uint32_t)(edx + 0x1f8u)); FPUSH(v); }
/* 991f3e: fadd qword ptr [eax + 0x1f8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1f8u)));
/* 991f44: fadd qword ptr [ecx + 0x1f8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1f8u)));
/* 991f4a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f4c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f4e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f50: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f52: fabs  */
  ST0 = fabs(ST0);
/* 991f54: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f56: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f58: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991f5a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 991f5c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991f5e: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 991f60: fabs  */
  ST0 = fabs(ST0);
/* 991f62: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991f64: fstp st(1) */
  STI(1) = ST0; FPOP();
L_991f66: /* 991f66: fld qword ptr [edx + 0x1c0] */
  { double v = F64((uint32_t)(edx + 0x1c0u)); FPUSH(v); }
/* 991f6c: fadd qword ptr [eax + 0x1c0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1c0u)));
/* 991f72: fadd qword ptr [ecx + 0x1c0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1c0u)));
/* 991f78: fld qword ptr [edx + 0x1c8] */
  { double v = F64((uint32_t)(edx + 0x1c8u)); FPUSH(v); }
/* 991f7e: fadd qword ptr [eax + 0x1c8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1c8u)));
/* 991f84: fadd qword ptr [ecx + 0x1c8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1c8u)));
/* 991f8a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991f8c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991f8e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991f90: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991f92: fabs  */
  ST0 = fabs(ST0);
/* 991f94: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991f96: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991f98: fld qword ptr [edx + 0x1d0] */
  { double v = F64((uint32_t)(edx + 0x1d0u)); FPUSH(v); }
/* 991f9e: fadd qword ptr [eax + 0x1d0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1d0u)));
/* 991fa4: fadd qword ptr [ecx + 0x1d0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1d0u)));
/* 991faa: fld qword ptr [edx + 0x1d8] */
  { double v = F64((uint32_t)(edx + 0x1d8u)); FPUSH(v); }
/* 991fb0: fadd qword ptr [eax + 0x1d8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1d8u)));
/* 991fb6: fadd qword ptr [ecx + 0x1d8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1d8u)));
/* 991fbc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 991fbe: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 991fc0: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 991fc2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 991fc4: fabs  */
  ST0 = fabs(ST0);
/* 991fc6: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 991fc8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 991fca: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 991fcc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 991fce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 991fd0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 991fd2: fabs  */
  ST0 = fabs(ST0);
/* 991fd4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 991fd6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 991fd8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_991fda: /* 991fda: fld qword ptr [edx + 0x1a0] */
  { double v = F64((uint32_t)(edx + 0x1a0u)); FPUSH(v); }
/* 991fe0: fadd qword ptr [eax + 0x1a0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1a0u)));
/* 991fe6: fadd qword ptr [ecx + 0x1a0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1a0u)));
/* 991fec: fld qword ptr [edx + 0x1a8] */
  { double v = F64((uint32_t)(edx + 0x1a8u)); FPUSH(v); }
/* 991ff2: fadd qword ptr [eax + 0x1a8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1a8u)));
/* 991ff8: fadd qword ptr [ecx + 0x1a8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1a8u)));
/* 991ffe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992000: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992002: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992004: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992006: fabs  */
  ST0 = fabs(ST0);
/* 992008: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99200a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99200c: fld qword ptr [edx + 0x1b0] */
  { double v = F64((uint32_t)(edx + 0x1b0u)); FPUSH(v); }
/* 992012: fadd qword ptr [eax + 0x1b0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1b0u)));
/* 992018: fadd qword ptr [ecx + 0x1b0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1b0u)));
/* 99201e: fld qword ptr [edx + 0x1b8] */
  { double v = F64((uint32_t)(edx + 0x1b8u)); FPUSH(v); }
/* 992024: fadd qword ptr [eax + 0x1b8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x1b8u)));
/* 99202a: fadd qword ptr [ecx + 0x1b8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x1b8u)));
/* 992030: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992032: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992034: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992036: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992038: fabs  */
  ST0 = fabs(ST0);
/* 99203a: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99203c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99203e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992040: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992042: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992044: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992046: fabs  */
  ST0 = fabs(ST0);
/* 992048: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99204a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99204c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99204e: /* 99204e: fld qword ptr [edx + 0x180] */
  { double v = F64((uint32_t)(edx + 0x180u)); FPUSH(v); }
/* 992054: fadd qword ptr [eax + 0x180] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x180u)));
/* 99205a: fadd qword ptr [ecx + 0x180] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x180u)));
/* 992060: fld qword ptr [edx + 0x188] */
  { double v = F64((uint32_t)(edx + 0x188u)); FPUSH(v); }
/* 992066: fadd qword ptr [eax + 0x188] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x188u)));
/* 99206c: fadd qword ptr [ecx + 0x188] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x188u)));
/* 992072: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992074: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992076: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992078: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99207a: fabs  */
  ST0 = fabs(ST0);
/* 99207c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99207e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992080: fld qword ptr [edx + 0x190] */
  { double v = F64((uint32_t)(edx + 0x190u)); FPUSH(v); }
/* 992086: fadd qword ptr [eax + 0x190] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x190u)));
/* 99208c: fadd qword ptr [ecx + 0x190] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x190u)));
/* 992092: fld qword ptr [edx + 0x198] */
  { double v = F64((uint32_t)(edx + 0x198u)); FPUSH(v); }
/* 992098: fadd qword ptr [eax + 0x198] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x198u)));
/* 99209e: fadd qword ptr [ecx + 0x198] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x198u)));
/* 9920a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9920a6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9920a8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9920aa: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9920ac: fabs  */
  ST0 = fabs(ST0);
/* 9920ae: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9920b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9920b2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9920b4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9920b6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9920b8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9920ba: fabs  */
  ST0 = fabs(ST0);
/* 9920bc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9920be: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9920c0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9920c2: /* 9920c2: fld qword ptr [edx + 0x160] */
  { double v = F64((uint32_t)(edx + 0x160u)); FPUSH(v); }
/* 9920c8: fadd qword ptr [eax + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x160u)));
/* 9920ce: fadd qword ptr [ecx + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x160u)));
/* 9920d4: fld qword ptr [edx + 0x168] */
  { double v = F64((uint32_t)(edx + 0x168u)); FPUSH(v); }
/* 9920da: fadd qword ptr [eax + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x168u)));
/* 9920e0: fadd qword ptr [ecx + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x168u)));
/* 9920e6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9920e8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9920ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9920ec: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9920ee: fabs  */
  ST0 = fabs(ST0);
/* 9920f0: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9920f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9920f4: fld qword ptr [edx + 0x170] */
  { double v = F64((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 9920fa: fadd qword ptr [eax + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x170u)));
/* 992100: fadd qword ptr [ecx + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x170u)));
/* 992106: fld qword ptr [edx + 0x178] */
  { double v = F64((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 99210c: fadd qword ptr [eax + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x178u)));
/* 992112: fadd qword ptr [ecx + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x178u)));
/* 992118: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99211a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99211c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99211e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992120: fabs  */
  ST0 = fabs(ST0);
/* 992122: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992124: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992126: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992128: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99212a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99212c: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99212e: fabs  */
  ST0 = fabs(ST0);
/* 992130: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992132: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992134: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992136: /* 992136: fld qword ptr [edx + 0x140] */
  { double v = F64((uint32_t)(edx + 0x140u)); FPUSH(v); }
/* 99213c: fadd qword ptr [eax + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x140u)));
/* 992142: fadd qword ptr [ecx + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x140u)));
/* 992148: fld qword ptr [edx + 0x148] */
  { double v = F64((uint32_t)(edx + 0x148u)); FPUSH(v); }
/* 99214e: fadd qword ptr [eax + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x148u)));
/* 992154: fadd qword ptr [ecx + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x148u)));
/* 99215a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99215c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99215e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992160: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992162: fabs  */
  ST0 = fabs(ST0);
/* 992164: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992166: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992168: fld qword ptr [edx + 0x150] */
  { double v = F64((uint32_t)(edx + 0x150u)); FPUSH(v); }
/* 99216e: fadd qword ptr [eax + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x150u)));
/* 992174: fadd qword ptr [ecx + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x150u)));
/* 99217a: fld qword ptr [edx + 0x158] */
  { double v = F64((uint32_t)(edx + 0x158u)); FPUSH(v); }
/* 992180: fadd qword ptr [eax + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x158u)));
/* 992186: fadd qword ptr [ecx + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x158u)));
/* 99218c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99218e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992190: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992192: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992194: fabs  */
  ST0 = fabs(ST0);
/* 992196: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992198: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99219a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99219c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99219e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9921a0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9921a2: fabs  */
  ST0 = fabs(ST0);
/* 9921a4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9921a6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9921a8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9921aa: /* 9921aa: fld qword ptr [edx + 0x120] */
  { double v = F64((uint32_t)(edx + 0x120u)); FPUSH(v); }
/* 9921b0: fadd qword ptr [eax + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x120u)));
/* 9921b6: fadd qword ptr [ecx + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x120u)));
/* 9921bc: fld qword ptr [edx + 0x128] */
  { double v = F64((uint32_t)(edx + 0x128u)); FPUSH(v); }
/* 9921c2: fadd qword ptr [eax + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x128u)));
/* 9921c8: fadd qword ptr [ecx + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x128u)));
/* 9921ce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9921d0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9921d2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9921d4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9921d6: fabs  */
  ST0 = fabs(ST0);
/* 9921d8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9921da: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9921dc: fld qword ptr [edx + 0x130] */
  { double v = F64((uint32_t)(edx + 0x130u)); FPUSH(v); }
/* 9921e2: fadd qword ptr [eax + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x130u)));
/* 9921e8: fadd qword ptr [ecx + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x130u)));
/* 9921ee: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 9921f4: fadd qword ptr [eax + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x138u)));
/* 9921fa: fadd qword ptr [ecx + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x138u)));
/* 992200: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992202: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992204: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992206: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992208: fabs  */
  ST0 = fabs(ST0);
/* 99220a: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99220c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99220e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992210: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992212: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992214: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992216: fabs  */
  ST0 = fabs(ST0);
/* 992218: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99221a: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99221c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99221e: /* 99221e: fld qword ptr [edx + 0x100] */
  { double v = F64((uint32_t)(edx + 0x100u)); FPUSH(v); }
/* 992224: fadd qword ptr [eax + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x100u)));
/* 99222a: fadd qword ptr [ecx + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x100u)));
/* 992230: fld qword ptr [edx + 0x108] */
  { double v = F64((uint32_t)(edx + 0x108u)); FPUSH(v); }
/* 992236: fadd qword ptr [eax + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x108u)));
/* 99223c: fadd qword ptr [ecx + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x108u)));
/* 992242: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992244: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992246: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992248: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99224a: fabs  */
  ST0 = fabs(ST0);
/* 99224c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99224e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992250: fld qword ptr [edx + 0x110] */
  { double v = F64((uint32_t)(edx + 0x110u)); FPUSH(v); }
/* 992256: fadd qword ptr [eax + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x110u)));
/* 99225c: fadd qword ptr [ecx + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x110u)));
/* 992262: fld qword ptr [edx + 0x118] */
  { double v = F64((uint32_t)(edx + 0x118u)); FPUSH(v); }
/* 992268: fadd qword ptr [eax + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x118u)));
/* 99226e: fadd qword ptr [ecx + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x118u)));
/* 992274: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992276: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992278: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99227a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99227c: fabs  */
  ST0 = fabs(ST0);
/* 99227e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992280: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992282: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992284: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992286: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992288: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99228a: fabs  */
  ST0 = fabs(ST0);
/* 99228c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99228e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992290: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992292: /* 992292: fld qword ptr [edx + 0xe0] */
  { double v = F64((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 992298: fadd qword ptr [eax + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe0u)));
/* 99229e: fadd qword ptr [ecx + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe0u)));
/* 9922a4: fld qword ptr [edx + 0xe8] */
  { double v = F64((uint32_t)(edx + 0xe8u)); FPUSH(v); }
/* 9922aa: fadd qword ptr [eax + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe8u)));
/* 9922b0: fadd qword ptr [ecx + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe8u)));
/* 9922b6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9922b8: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9922ba: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9922bc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9922be: fabs  */
  ST0 = fabs(ST0);
/* 9922c0: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9922c2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9922c4: fld qword ptr [edx + 0xf0] */
  { double v = F64((uint32_t)(edx + 0xf0u)); FPUSH(v); }
/* 9922ca: fadd qword ptr [eax + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf0u)));
/* 9922d0: fadd qword ptr [ecx + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf0u)));
/* 9922d6: fld qword ptr [edx + 0xf8] */
  { double v = F64((uint32_t)(edx + 0xf8u)); FPUSH(v); }
/* 9922dc: fadd qword ptr [eax + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf8u)));
/* 9922e2: fadd qword ptr [ecx + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf8u)));
/* 9922e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9922ea: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9922ec: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9922ee: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9922f0: fabs  */
  ST0 = fabs(ST0);
/* 9922f2: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9922f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9922f6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9922f8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9922fa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9922fc: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9922fe: fabs  */
  ST0 = fabs(ST0);
/* 992300: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992302: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992304: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992306: /* 992306: fld qword ptr [edx + 0xc0] */
  { double v = F64((uint32_t)(edx + 0xc0u)); FPUSH(v); }
/* 99230c: fadd qword ptr [eax + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc0u)));
/* 992312: fadd qword ptr [ecx + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc0u)));
/* 992318: fld qword ptr [edx + 0xc8] */
  { double v = F64((uint32_t)(edx + 0xc8u)); FPUSH(v); }
/* 99231e: fadd qword ptr [eax + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc8u)));
/* 992324: fadd qword ptr [ecx + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc8u)));
/* 99232a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99232c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99232e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992330: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992332: fabs  */
  ST0 = fabs(ST0);
/* 992334: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992336: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992338: fld qword ptr [edx + 0xd0] */
  { double v = F64((uint32_t)(edx + 0xd0u)); FPUSH(v); }
/* 99233e: fadd qword ptr [eax + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd0u)));
/* 992344: fadd qword ptr [ecx + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd0u)));
/* 99234a: fld qword ptr [edx + 0xd8] */
  { double v = F64((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 992350: fadd qword ptr [eax + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd8u)));
/* 992356: fadd qword ptr [ecx + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd8u)));
/* 99235c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99235e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992360: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992362: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992364: fabs  */
  ST0 = fabs(ST0);
/* 992366: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992368: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99236a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99236c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99236e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992370: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992372: fabs  */
  ST0 = fabs(ST0);
/* 992374: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992376: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992378: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99237a: /* 99237a: fld qword ptr [edx + 0xa0] */
  { double v = F64((uint32_t)(edx + 0xa0u)); FPUSH(v); }
/* 992380: fadd qword ptr [eax + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa0u)));
/* 992386: fadd qword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa0u)));
/* 99238c: fld qword ptr [edx + 0xa8] */
  { double v = F64((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* 992392: fadd qword ptr [eax + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa8u)));
/* 992398: fadd qword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa8u)));
/* 99239e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9923a0: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9923a2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9923a4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9923a6: fabs  */
  ST0 = fabs(ST0);
/* 9923a8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9923aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9923ac: fld qword ptr [edx + 0xb0] */
  { double v = F64((uint32_t)(edx + 0xb0u)); FPUSH(v); }
/* 9923b2: fadd qword ptr [eax + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb0u)));
/* 9923b8: fadd qword ptr [ecx + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb0u)));
/* 9923be: fld qword ptr [edx + 0xb8] */
  { double v = F64((uint32_t)(edx + 0xb8u)); FPUSH(v); }
/* 9923c4: fadd qword ptr [eax + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb8u)));
/* 9923ca: fadd qword ptr [ecx + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb8u)));
/* 9923d0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9923d2: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9923d4: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9923d6: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9923d8: fabs  */
  ST0 = fabs(ST0);
/* 9923da: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9923dc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9923de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9923e0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9923e2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9923e4: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9923e6: fabs  */
  ST0 = fabs(ST0);
/* 9923e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9923ea: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9923ec: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9923ee: /* 9923ee: fld qword ptr [edx + 0x80] */
  { double v = F64((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 9923f4: fadd qword ptr [eax + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x80u)));
/* 9923fa: fadd qword ptr [ecx + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x80u)));
/* 992400: fld qword ptr [edx + 0x88] */
  { double v = F64((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 992406: fadd qword ptr [eax + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x88u)));
/* 99240c: fadd qword ptr [ecx + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x88u)));
/* 992412: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992414: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992416: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992418: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99241a: fabs  */
  ST0 = fabs(ST0);
/* 99241c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99241e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992420: fld qword ptr [edx + 0x90] */
  { double v = F64((uint32_t)(edx + 0x90u)); FPUSH(v); }
/* 992426: fadd qword ptr [eax + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x90u)));
/* 99242c: fadd qword ptr [ecx + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x90u)));
/* 992432: fld qword ptr [edx + 0x98] */
  { double v = F64((uint32_t)(edx + 0x98u)); FPUSH(v); }
/* 992438: fadd qword ptr [eax + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x98u)));
/* 99243e: fadd qword ptr [ecx + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x98u)));
/* 992444: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992446: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992448: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99244a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99244c: fabs  */
  ST0 = fabs(ST0);
/* 99244e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992450: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992452: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992454: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992456: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992458: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99245a: fabs  */
  ST0 = fabs(ST0);
/* 99245c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99245e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992460: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992462: /* 992462: fld qword ptr [edx + 0x60] */
  { double v = F64((uint32_t)(edx + 0x60u)); FPUSH(v); }
/* 992465: fadd qword ptr [eax + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x60u)));
/* 992468: fadd qword ptr [ecx + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x60u)));
/* 99246b: fld qword ptr [edx + 0x68] */
  { double v = F64((uint32_t)(edx + 0x68u)); FPUSH(v); }
/* 99246e: fadd qword ptr [eax + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x68u)));
/* 992471: fadd qword ptr [ecx + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x68u)));
/* 992474: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992476: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992478: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99247a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99247c: fabs  */
  ST0 = fabs(ST0);
/* 99247e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992480: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992482: fld qword ptr [edx + 0x70] */
  { double v = F64((uint32_t)(edx + 0x70u)); FPUSH(v); }
/* 992485: fadd qword ptr [eax + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x70u)));
/* 992488: fadd qword ptr [ecx + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x70u)));
/* 99248b: fld qword ptr [edx + 0x78] */
  { double v = F64((uint32_t)(edx + 0x78u)); FPUSH(v); }
/* 99248e: fadd qword ptr [eax + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x78u)));
/* 992491: fadd qword ptr [ecx + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x78u)));
/* 992494: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992496: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992498: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99249a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99249c: fabs  */
  ST0 = fabs(ST0);
/* 99249e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924a2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9924a4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9924a6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9924a8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9924aa: fabs  */
  ST0 = fabs(ST0);
/* 9924ac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9924ae: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9924b0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9924b2: /* 9924b2: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 9924b5: fadd qword ptr [eax + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x40u)));
/* 9924b8: fadd qword ptr [ecx + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x40u)));
/* 9924bb: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 9924be: fadd qword ptr [eax + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x48u)));
/* 9924c1: fadd qword ptr [ecx + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x48u)));
/* 9924c4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9924c6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9924c8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9924ca: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9924cc: fabs  */
  ST0 = fabs(ST0);
/* 9924ce: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924d2: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 9924d5: fadd qword ptr [eax + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x50u)));
/* 9924d8: fadd qword ptr [ecx + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x50u)));
/* 9924db: fld qword ptr [edx + 0x58] */
  { double v = F64((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 9924de: fadd qword ptr [eax + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x58u)));
/* 9924e1: fadd qword ptr [ecx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x58u)));
/* 9924e4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9924e6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9924e8: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9924ea: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9924ec: fabs  */
  ST0 = fabs(ST0);
/* 9924ee: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9924f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9924f2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9924f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9924f6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9924f8: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9924fa: fabs  */
  ST0 = fabs(ST0);
/* 9924fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9924fe: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992500: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992502: /* 992502: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 992505: fadd qword ptr [eax + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x20u)));
/* 992508: fadd qword ptr [ecx + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x20u)));
/* 99250b: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 99250e: fadd qword ptr [eax + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x28u)));
/* 992511: fadd qword ptr [ecx + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x28u)));
/* 992514: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992516: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992518: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99251a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99251c: fabs  */
  ST0 = fabs(ST0);
/* 99251e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992520: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992522: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 992525: fadd qword ptr [eax + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x30u)));
/* 992528: fadd qword ptr [ecx + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x30u)));
/* 99252b: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 99252e: fadd qword ptr [eax + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x38u)));
/* 992531: fadd qword ptr [ecx + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x38u)));
/* 992534: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992536: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992538: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99253a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99253c: fabs  */
  ST0 = fabs(ST0);
/* 99253e: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992540: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992542: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992544: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992546: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992548: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99254a: fabs  */
  ST0 = fabs(ST0);
/* 99254c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99254e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992550: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992552: /* 992552: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 992554: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 992556: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 992558: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 99255b: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 99255e: fadd qword ptr [ecx + 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x8u)));
/* 992561: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992563: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992565: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992567: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992569: fabs  */
  ST0 = fabs(ST0);
/* 99256b: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99256d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99256f: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 992572: fadd qword ptr [eax + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x10u)));
/* 992575: fadd qword ptr [ecx + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x10u)));
/* 992578: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 99257b: fadd qword ptr [eax + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x18u)));
/* 99257e: fadd qword ptr [ecx + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x18u)));
/* 992581: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992583: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992585: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992587: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992589: fabs  */
  ST0 = fabs(ST0);
/* 99258b: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99258d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99258f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992591: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992593: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992595: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992597: fabs  */
  ST0 = fabs(ST0);
/* 992599: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99259b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99259d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99259f: /* 99259f: fcom qword ptr [0xcf36c0] */
  fpu_com(ST0, F64((uint32_t)(0xcf36c0u)));
/* 9925a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9925a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9925aa: jp 0x9925b6 */
  if (pf) goto L_9925b6;
L_9925ac: /* 9925ac: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 9925b2: mov esi, edi */
  esi = edi;
/* 9925b4: jmp 0x9925b8 */
  goto L_9925b8;
L_9925b6: /* 9925b6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9925b8: /* 9925b8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9925b9: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9925bc: jl 0x991eb0 */
  if ((sf != of)) goto L_991eb0;
L_9925c2: /* 9925c2: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 9925c6: jmp 0x992ac5 */
  goto L_992ac5;
L_9925cb: /* 9925cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9925cd: fld qword ptr [edx + 0x168] */
  { double v = F64((uint32_t)(edx + 0x168u)); FPUSH(v); }
/* 9925d3: fadd qword ptr [eax + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x168u)));
/* 9925d9: fadd qword ptr [ecx + 0x168] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x168u)));
/* 9925df: fld qword ptr [edx + 0x170] */
  { double v = F64((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 9925e5: fadd qword ptr [eax + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x170u)));
/* 9925eb: fadd qword ptr [ecx + 0x170] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x170u)));
/* 9925f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9925f3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9925f5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9925f7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9925f9: fabs  */
  ST0 = fabs(ST0);
/* 9925fb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9925fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9925ff: fld qword ptr [edx + 0x178] */
  { double v = F64((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 992605: fadd qword ptr [eax + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x178u)));
/* 99260b: fadd qword ptr [ecx + 0x178] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x178u)));
/* 992611: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992613: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992615: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992617: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992619: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99261b: fabs  */
  ST0 = fabs(ST0);
/* 99261d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99261f: fstp st(1) */
  STI(1) = ST0; FPOP();
L_992621: /* 992621: fld qword ptr [edx + 0x150] */
  { double v = F64((uint32_t)(edx + 0x150u)); FPUSH(v); }
/* 992627: fadd qword ptr [eax + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x150u)));
/* 99262d: fadd qword ptr [ecx + 0x150] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x150u)));
/* 992633: fld qword ptr [edx + 0x158] */
  { double v = F64((uint32_t)(edx + 0x158u)); FPUSH(v); }
/* 992639: fadd qword ptr [eax + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x158u)));
/* 99263f: fadd qword ptr [ecx + 0x158] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x158u)));
/* 992645: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992647: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992649: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99264b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99264d: fabs  */
  ST0 = fabs(ST0);
/* 99264f: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992651: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992653: fld qword ptr [edx + 0x160] */
  { double v = F64((uint32_t)(edx + 0x160u)); FPUSH(v); }
/* 992659: fadd qword ptr [eax + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x160u)));
/* 99265f: fadd qword ptr [ecx + 0x160] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x160u)));
/* 992665: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992667: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992669: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99266b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99266d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99266f: fabs  */
  ST0 = fabs(ST0);
/* 992671: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992673: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992675: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992677: /* 992677: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 99267d: fadd qword ptr [eax + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x138u)));
/* 992683: fadd qword ptr [ecx + 0x138] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x138u)));
/* 992689: fld qword ptr [edx + 0x140] */
  { double v = F64((uint32_t)(edx + 0x140u)); FPUSH(v); }
/* 99268f: fadd qword ptr [eax + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x140u)));
/* 992695: fadd qword ptr [ecx + 0x140] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x140u)));
/* 99269b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99269d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99269f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9926a1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9926a3: fabs  */
  ST0 = fabs(ST0);
/* 9926a5: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9926a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9926a9: fld qword ptr [edx + 0x148] */
  { double v = F64((uint32_t)(edx + 0x148u)); FPUSH(v); }
/* 9926af: fadd qword ptr [eax + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x148u)));
/* 9926b5: fadd qword ptr [ecx + 0x148] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x148u)));
/* 9926bb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9926bd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9926bf: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9926c1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9926c3: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9926c5: fabs  */
  ST0 = fabs(ST0);
/* 9926c7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9926c9: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9926cb: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9926cd: /* 9926cd: fld qword ptr [edx + 0x120] */
  { double v = F64((uint32_t)(edx + 0x120u)); FPUSH(v); }
/* 9926d3: fadd qword ptr [eax + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x120u)));
/* 9926d9: fadd qword ptr [ecx + 0x120] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x120u)));
/* 9926df: fld qword ptr [edx + 0x128] */
  { double v = F64((uint32_t)(edx + 0x128u)); FPUSH(v); }
/* 9926e5: fadd qword ptr [eax + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x128u)));
/* 9926eb: fadd qword ptr [ecx + 0x128] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x128u)));
/* 9926f1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9926f3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9926f5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9926f7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9926f9: fabs  */
  ST0 = fabs(ST0);
/* 9926fb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9926fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9926ff: fld qword ptr [edx + 0x130] */
  { double v = F64((uint32_t)(edx + 0x130u)); FPUSH(v); }
/* 992705: fadd qword ptr [eax + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x130u)));
/* 99270b: fadd qword ptr [ecx + 0x130] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x130u)));
/* 992711: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992713: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992715: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992717: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992719: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99271b: fabs  */
  ST0 = fabs(ST0);
/* 99271d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99271f: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992721: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992723: /* 992723: fld qword ptr [edx + 0x108] */
  { double v = F64((uint32_t)(edx + 0x108u)); FPUSH(v); }
/* 992729: fadd qword ptr [eax + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x108u)));
/* 99272f: fadd qword ptr [ecx + 0x108] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x108u)));
/* 992735: fld qword ptr [edx + 0x110] */
  { double v = F64((uint32_t)(edx + 0x110u)); FPUSH(v); }
/* 99273b: fadd qword ptr [eax + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x110u)));
/* 992741: fadd qword ptr [ecx + 0x110] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x110u)));
/* 992747: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992749: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99274b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99274d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99274f: fabs  */
  ST0 = fabs(ST0);
/* 992751: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992753: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992755: fld qword ptr [edx + 0x118] */
  { double v = F64((uint32_t)(edx + 0x118u)); FPUSH(v); }
/* 99275b: fadd qword ptr [eax + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x118u)));
/* 992761: fadd qword ptr [ecx + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x118u)));
/* 992767: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992769: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99276b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99276d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99276f: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992771: fabs  */
  ST0 = fabs(ST0);
/* 992773: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992775: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992777: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992779: /* 992779: fld qword ptr [edx + 0xf0] */
  { double v = F64((uint32_t)(edx + 0xf0u)); FPUSH(v); }
/* 99277f: fadd qword ptr [eax + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf0u)));
/* 992785: fadd qword ptr [ecx + 0xf0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf0u)));
/* 99278b: fld qword ptr [edx + 0xf8] */
  { double v = F64((uint32_t)(edx + 0xf8u)); FPUSH(v); }
/* 992791: fadd qword ptr [eax + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xf8u)));
/* 992797: fadd qword ptr [ecx + 0xf8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xf8u)));
/* 99279d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99279f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9927a1: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9927a3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9927a5: fabs  */
  ST0 = fabs(ST0);
/* 9927a7: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9927a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9927ab: fld qword ptr [edx + 0x100] */
  { double v = F64((uint32_t)(edx + 0x100u)); FPUSH(v); }
/* 9927b1: fadd qword ptr [eax + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x100u)));
/* 9927b7: fadd qword ptr [ecx + 0x100] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x100u)));
/* 9927bd: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9927bf: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9927c1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9927c3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9927c5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9927c7: fabs  */
  ST0 = fabs(ST0);
/* 9927c9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9927cb: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9927cd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9927cf: /* 9927cf: fld qword ptr [edx + 0xd8] */
  { double v = F64((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 9927d5: fadd qword ptr [eax + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd8u)));
/* 9927db: fadd qword ptr [ecx + 0xd8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd8u)));
/* 9927e1: fld qword ptr [edx + 0xe0] */
  { double v = F64((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 9927e7: fadd qword ptr [eax + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe0u)));
/* 9927ed: fadd qword ptr [ecx + 0xe0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe0u)));
/* 9927f3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9927f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9927f7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9927f9: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9927fb: fabs  */
  ST0 = fabs(ST0);
/* 9927fd: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9927ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992801: fld qword ptr [edx + 0xe8] */
  { double v = F64((uint32_t)(edx + 0xe8u)); FPUSH(v); }
/* 992807: fadd qword ptr [eax + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xe8u)));
/* 99280d: fadd qword ptr [ecx + 0xe8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xe8u)));
/* 992813: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992815: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992817: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992819: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99281b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99281d: fabs  */
  ST0 = fabs(ST0);
/* 99281f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992821: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992823: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992825: /* 992825: fld qword ptr [edx + 0xc0] */
  { double v = F64((uint32_t)(edx + 0xc0u)); FPUSH(v); }
/* 99282b: fadd qword ptr [eax + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc0u)));
/* 992831: fadd qword ptr [ecx + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc0u)));
/* 992837: fld qword ptr [edx + 0xc8] */
  { double v = F64((uint32_t)(edx + 0xc8u)); FPUSH(v); }
/* 99283d: fadd qword ptr [eax + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xc8u)));
/* 992843: fadd qword ptr [ecx + 0xc8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xc8u)));
/* 992849: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99284b: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99284d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99284f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992851: fabs  */
  ST0 = fabs(ST0);
/* 992853: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992855: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992857: fld qword ptr [edx + 0xd0] */
  { double v = F64((uint32_t)(edx + 0xd0u)); FPUSH(v); }
/* 99285d: fadd qword ptr [eax + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xd0u)));
/* 992863: fadd qword ptr [ecx + 0xd0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xd0u)));
/* 992869: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99286b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 99286d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99286f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992871: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992873: fabs  */
  ST0 = fabs(ST0);
/* 992875: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992877: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992879: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99287b: /* 99287b: fld qword ptr [edx + 0xa8] */
  { double v = F64((uint32_t)(edx + 0xa8u)); FPUSH(v); }
/* 992881: fadd qword ptr [eax + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa8u)));
/* 992887: fadd qword ptr [ecx + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa8u)));
/* 99288d: fld qword ptr [edx + 0xb0] */
  { double v = F64((uint32_t)(edx + 0xb0u)); FPUSH(v); }
/* 992893: fadd qword ptr [eax + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb0u)));
/* 992899: fadd qword ptr [ecx + 0xb0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb0u)));
/* 99289f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9928a1: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9928a3: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9928a5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9928a7: fabs  */
  ST0 = fabs(ST0);
/* 9928a9: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9928ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9928ad: fld qword ptr [edx + 0xb8] */
  { double v = F64((uint32_t)(edx + 0xb8u)); FPUSH(v); }
/* 9928b3: fadd qword ptr [eax + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xb8u)));
/* 9928b9: fadd qword ptr [ecx + 0xb8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xb8u)));
/* 9928bf: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9928c1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9928c3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9928c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9928c7: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9928c9: fabs  */
  ST0 = fabs(ST0);
/* 9928cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9928cd: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9928cf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9928d1: /* 9928d1: fld qword ptr [edx + 0x90] */
  { double v = F64((uint32_t)(edx + 0x90u)); FPUSH(v); }
/* 9928d7: fadd qword ptr [eax + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x90u)));
/* 9928dd: fadd qword ptr [ecx + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x90u)));
/* 9928e3: fld qword ptr [edx + 0x98] */
  { double v = F64((uint32_t)(edx + 0x98u)); FPUSH(v); }
/* 9928e9: fadd qword ptr [eax + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x98u)));
/* 9928ef: fadd qword ptr [ecx + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x98u)));
/* 9928f5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9928f7: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9928f9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9928fb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9928fd: fabs  */
  ST0 = fabs(ST0);
/* 9928ff: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992903: fld qword ptr [edx + 0xa0] */
  { double v = F64((uint32_t)(edx + 0xa0u)); FPUSH(v); }
/* 992909: fadd qword ptr [eax + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xa0u)));
/* 99290f: fadd qword ptr [ecx + 0xa0] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xa0u)));
/* 992915: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992917: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992919: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 99291b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99291d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99291f: fabs  */
  ST0 = fabs(ST0);
/* 992921: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992923: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992925: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992927: /* 992927: fld qword ptr [edx + 0x78] */
  { double v = F64((uint32_t)(edx + 0x78u)); FPUSH(v); }
/* 99292a: fadd qword ptr [eax + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x78u)));
/* 99292d: fadd qword ptr [ecx + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x78u)));
/* 992930: fld qword ptr [edx + 0x80] */
  { double v = F64((uint32_t)(edx + 0x80u)); FPUSH(v); }
/* 992936: fadd qword ptr [eax + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x80u)));
/* 99293c: fadd qword ptr [ecx + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x80u)));
/* 992942: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992944: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992946: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992948: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99294a: fabs  */
  ST0 = fabs(ST0);
/* 99294c: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 99294e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992950: fld qword ptr [edx + 0x88] */
  { double v = F64((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 992956: fadd qword ptr [eax + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x88u)));
/* 99295c: fadd qword ptr [ecx + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x88u)));
/* 992962: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992964: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992966: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992968: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 99296a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99296c: fabs  */
  ST0 = fabs(ST0);
/* 99296e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992970: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992972: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992974: /* 992974: fld qword ptr [edx + 0x60] */
  { double v = F64((uint32_t)(edx + 0x60u)); FPUSH(v); }
/* 992977: fadd qword ptr [eax + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x60u)));
/* 99297a: fadd qword ptr [ecx + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x60u)));
/* 99297d: fld qword ptr [edx + 0x68] */
  { double v = F64((uint32_t)(edx + 0x68u)); FPUSH(v); }
/* 992980: fadd qword ptr [eax + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x68u)));
/* 992983: fadd qword ptr [ecx + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x68u)));
/* 992986: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992988: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 99298a: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 99298c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 99298e: fabs  */
  ST0 = fabs(ST0);
/* 992990: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992992: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992994: fld qword ptr [edx + 0x70] */
  { double v = F64((uint32_t)(edx + 0x70u)); FPUSH(v); }
/* 992997: fadd qword ptr [eax + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x70u)));
/* 99299a: fadd qword ptr [ecx + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x70u)));
/* 99299d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99299f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9929a1: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9929a3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9929a5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9929a7: fabs  */
  ST0 = fabs(ST0);
/* 9929a9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9929ab: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9929ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9929af: /* 9929af: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 9929b2: fadd qword ptr [eax + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x48u)));
/* 9929b5: fadd qword ptr [ecx + 0x48] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x48u)));
/* 9929b8: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 9929bb: fadd qword ptr [eax + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x50u)));
/* 9929be: fadd qword ptr [ecx + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x50u)));
/* 9929c1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9929c3: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 9929c5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 9929c7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9929c9: fabs  */
  ST0 = fabs(ST0);
/* 9929cb: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 9929cd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9929cf: fld qword ptr [edx + 0x58] */
  { double v = F64((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 9929d2: fadd qword ptr [eax + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x58u)));
/* 9929d5: fadd qword ptr [ecx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x58u)));
/* 9929d8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9929da: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9929dc: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 9929de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9929e0: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 9929e2: fabs  */
  ST0 = fabs(ST0);
/* 9929e4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9929e6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9929e8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9929ea: /* 9929ea: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 9929ed: fadd qword ptr [eax + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x30u)));
/* 9929f0: fadd qword ptr [ecx + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x30u)));
/* 9929f3: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 9929f6: fadd qword ptr [eax + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x38u)));
/* 9929f9: fadd qword ptr [ecx + 0x38] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x38u)));
/* 9929fc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9929fe: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a00: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a02: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a04: fabs  */
  ST0 = fabs(ST0);
/* 992a06: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a08: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a0a: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 992a0d: fadd qword ptr [eax + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x40u)));
/* 992a10: fadd qword ptr [ecx + 0x40] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x40u)));
/* 992a13: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a15: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a17: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a19: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a1b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a1d: fabs  */
  ST0 = fabs(ST0);
/* 992a1f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a21: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a23: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a25: /* 992a25: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 992a28: fadd qword ptr [eax + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x18u)));
/* 992a2b: fadd qword ptr [ecx + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x18u)));
/* 992a2e: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 992a31: fadd qword ptr [eax + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x20u)));
/* 992a34: fadd qword ptr [ecx + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x20u)));
/* 992a37: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992a39: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a3b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a3d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a3f: fabs  */
  ST0 = fabs(ST0);
/* 992a41: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a43: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a45: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 992a48: fadd qword ptr [eax + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x28u)));
/* 992a4b: fadd qword ptr [ecx + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x28u)));
/* 992a4e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a50: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a52: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a56: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a58: fabs  */
  ST0 = fabs(ST0);
/* 992a5a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a5c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a5e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a60: /* 992a60: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 992a62: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 992a64: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 992a66: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 992a69: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 992a6c: fadd qword ptr [ecx + 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x8u)));
/* 992a6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992a71: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 992a73: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 992a75: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 992a77: fabs  */
  ST0 = fabs(ST0);
/* 992a79: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 992a7b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992a7d: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 992a80: fadd qword ptr [eax + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x10u)));
/* 992a83: fadd qword ptr [ecx + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x10u)));
/* 992a86: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992a88: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992a8a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 992a8c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 992a8e: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 992a90: fabs  */
  ST0 = fabs(ST0);
/* 992a92: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 992a94: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 992a96: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992a98: /* 992a98: fcom qword ptr [0xcf36c0] */
  fpu_com(ST0, F64((uint32_t)(0xcf36c0u)));
/* 992a9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992aa0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992aa3: jp 0x992aaf */
  if (pf) goto L_992aaf;
L_992aa5: /* 992aa5: fstp qword ptr [0xcf36c0] */
  WF64((uint32_t)(0xcf36c0u), ST0); FPOP();
/* 992aab: mov esi, edi */
  esi = edi;
/* 992aad: jmp 0x992ab1 */
  goto L_992ab1;
L_992aaf: /* 992aaf: fstp st(0) */
  STI(0) = ST0; FPOP();
L_992ab1: /* 992ab1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992ab2: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992ab5: jl 0x991b00 */
  if ((sf != of)) goto L_991b00;
L_992abb: /* 992abb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 992abf: jmp 0x992ac5 */
  goto L_992ac5;
L_992ac1: /* 992ac1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_992ac5: /* 992ac5: mov eax, esi */
  eax = esi;
/* 992ac7: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 992aca: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 992acd: add eax, 0xcf4ec8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4ec8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992ad2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 992ad6: mov eax, esi */
  eax = esi;
/* 992ad8: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 992adb: mov ebx, esi */
  ebx = esi;
/* 992add: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 992ae0: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 992ae3: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 992ae6: add eax, 0xcf4fc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf4fc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992aeb: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 992aee: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992af2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 992af5: add ebx, 0xcf4f48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcf4f48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 992afb: xor edi, edi */
  edi = 0;
/* 992afd: sub eax, 0xb04360 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb04360u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* 992b02: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 992b06: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 992b0a: jmp 0x992b10 */
  goto L_992b10;
L_992b0c: /* 992b0c: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_992b10: /* 992b10: mov eax, esi */
  eax = esi;
/* 992b12: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* 992b15: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 992b17: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 992b1e: mov esi, dword ptr [edx + 0xb04360] */
  esi = R32((uint32_t)(edx + 0xb04360u));
/* 992b24: mov ecx, 8 */
  ecx = 0x8u;
/* 992b29: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 992b2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992b2e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 992b30: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 992b33: mov esi, dword ptr [esp + eax + 0x40] */
  esi = R32((uint32_t)(esp + eax + 0x40u));
/* 992b37: mov eax, dword ptr [esp + eax + 0x44] */
  eax = R32((uint32_t)(esp + eax + 0x44u));
/* 992b3b: sar esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
  }
/* 992b3d: mov ecx, esi */
  ecx = esi;
/* 992b3f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 992b43: mov dword ptr [esi + edx + 0xb04360], ecx */
  W32((uint32_t)(esi + edx + 0xb04360u), ecx);
/* 992b4a: mov ecx, 8 */
  ecx = 0x8u;
/* 992b4f: sub ecx, dword ptr [edx + 0xb04360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xb04360u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 992b55: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 992b57: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992b58: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992b5b: mov dword ptr [esi + edx + 0xb0436c], eax */
  W32((uint32_t)(esi + edx + 0xb0436cu), eax);
/* 992b62: jl 0x992b0c */
  if ((sf != of)) goto L_992b0c;
L_992b64: /* 992b64: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 992b67: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 992b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992b6f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 992b77: jle 0x992de0 */
  if ((zf || sf != of)) goto L_992de0;
L_992b7d: /* 992b7d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 992b80: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 992b84: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 992b87: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_992b8a: /* 992b8a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 992b8d: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 992b90: xor edi, edi */
  edi = 0;
/* 992b92: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 992b95: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* 992b9d: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 992b9f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 992ba2: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992ba5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992ba7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992ba9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992bab: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992bad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992baf: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992bb1: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992bb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992bb5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 992bb7: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992bb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992bbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992bbd: jl 0x992d41 */
  if ((sf != of)) goto L_992d41;
L_992bc3: /* 992bc3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bc7: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 992bcb: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992bcd: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 992bd1: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 992bd5: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992bd7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 992bdb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bdf: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 992be2: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 992be6: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992be9: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992beb: mov dword ptr [esp + 0x14], 3 */
  W32((uint32_t)(esp + 0x14u), 0x3u);
/* 992bf3: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_992bf7: /* 992bf7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992bfb: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992bfe: fsub qword ptr [eax + edi*8] */
  ST0 = ST0 - (F64((uint32_t)(eax + edi*8)));
/* 992c01: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 992c05: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c07: fsub qword ptr [edx - 8] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0xfffffff8u)));
/* 992c0a: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c0d: fsub qword ptr [esi - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xfffffff0u)));
/* 992c10: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992c12: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992c14: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992c16: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992c18: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c1a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992c1c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992c1e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c20: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992c22: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992c26: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992c28: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c2c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992c2e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992c30: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992c33: jp 0x992c3f */
  if (pf) goto L_992c3f;
L_992c35: /* 992c35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c37: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 992c3b: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_992c3f: /* 992c3f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 992c43: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992c46: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992c49: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 992c4d: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c4f: fsub qword ptr [edx] */
  ST0 = ST0 - (F64((uint32_t)(edx)));
/* 992c51: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c54: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992c57: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992c59: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992c5b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992c5d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992c5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c61: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992c63: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992c65: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992c67: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992c69: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992c6d: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992c6f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c71: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c73: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992c75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992c77: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992c7a: jp 0x992c8d */
  if (pf) goto L_992c8d;
L_992c7c: /* 992c7c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992c80: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992c82: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992c86: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992c89: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992c8d: /* 992c8d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 992c91: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992c94: fsub qword ptr [esi + eax] */
  ST0 = ST0 - (F64((uint32_t)(esi + eax)));
/* 992c97: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992c99: fsub qword ptr [edx + 8] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0x8u)));
/* 992c9c: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992c9f: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* 992ca1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992ca3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992ca5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992ca7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992ca9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cab: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 992cad: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 992caf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cb1: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992cb3: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992cb7: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992cb9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992cbb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992cbd: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992cbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992cc1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992cc4: jp 0x992cd5 */
  if (pf) goto L_992cd5;
L_992cc6: /* 992cc6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992cca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992ccc: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992cd0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 992cd1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992cd5: /* 992cd5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992cd9: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992cdc: fsub qword ptr [eax + edi*8 + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(eax + edi*8 + 0x18u)));
/* 992ce0: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992ce2: fsub qword ptr [edx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(edx + 0x10u)));
/* 992ce5: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992ce8: fsub qword ptr [esi + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x8u)));
/* 992ceb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992ced: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992cef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992cf1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992cf3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cf5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992cf7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992cf9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992cfb: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 992cfd: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992d01: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992d03: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d07: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992d09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992d0b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992d0e: jp 0x992d1e */
  if (pf) goto L_992d1e;
L_992d10: /* 992d10: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992d14: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d16: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 992d1a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_992d1e: /* 992d1e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 992d22: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 992d25: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992d28: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 992d2b: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 992d2e: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992d31: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992d33: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 992d37: jl 0x992bf7 */
  if ((sf != of)) goto L_992bf7;
L_992d3d: /* 992d3d: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
L_992d41: /* 992d41: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992d44: jge 0x992db2 */
  if ((sf == of)) goto L_992db2;
L_992d46: /* 992d46: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 992d4a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 992d4e: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 992d50: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992d52: lea edx, [ebx + edi*8] */
  edx = (uint32_t)(ebx + edi*8);
/* 992d55: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 992d59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_992d60: /* 992d60: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 992d63: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 992d67: fsub qword ptr [edx + esi] */
  ST0 = ST0 - (F64((uint32_t)(edx + esi)));
/* 992d6a: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 992d6c: fsub qword ptr [edx] */
  ST0 = ST0 - (F64((uint32_t)(edx)));
/* 992d6e: fld qword ptr [ecx - 8] */
  { double v = F64((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 992d71: fsub qword ptr [edx + eax] */
  ST0 = ST0 - (F64((uint32_t)(edx + eax)));
/* 992d74: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 992d78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 992d7a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 992d7c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 992d7e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 992d80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992d82: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 992d84: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 992d86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992d88: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 992d8a: fst qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0);
/* 992d8e: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 992d90: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d92: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d94: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 992d96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 992d98: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 992d9b: jp 0x992da7 */
  if (pf) goto L_992da7;
L_992d9d: /* 992d9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 992d9f: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 992da3: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_992da7: /* 992da7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 992daa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 992dab: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 992dae: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992db0: jl 0x992d60 */
  if ((sf != of)) goto L_992d60;
L_992db2: /* 992db2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 992db6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 992db8: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 992dbb: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 992dbf: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 992dc2: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 992dc6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 992dc9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 992dca: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 992dcd: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 992dd0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992dd2: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 992dd6: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 992dda: jl 0x992b8a */
  if ((sf != of)) goto L_992b8a;
L_992de0: /* 992de0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 992de1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 992de2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 992de3: mov esp, ebp */
  esp = ebp;
/* 992de5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 992de6: ret  */
  esp += 4; SPILL(); return;
}
