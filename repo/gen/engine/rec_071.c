#include "recomp.h"
#include "rec_mod.h"

void f_848b60(void) {
  LOAD_REGS();
L_848b60: /* 848b60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 848b62: push 0x9d3b7b */
  { uint32_t v = 0x9d3b7bu; esp -= 4; W32(esp, v); }
/* 848b67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 848b6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 848b6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 848b75: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 848b7b: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 848b83: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 848b8a: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 848b90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 848b91: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 848b98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 848b99: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 848b9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 848ba0: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 848ba7: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 848bad: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 848bb1: fld dword ptr [esp + 0xdc] */
  { double v = F32((uint32_t)(esp + 0xdcu)); FPUSH(v); }
/* 848bb8: fchs  */
  ST0 = -ST0;
/* 848bba: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 848bbe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848bc0: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 848bc4: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 848bc8: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 848bcc: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 848bd0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 848bd4: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 848bd8: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 848bdc: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 848be3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 848be5: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 848be9: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 848bf0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 848bf2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 848bf4: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 848bfb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 848bfd: fst dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0);
/* 848c01: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 848c08: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 848c0c: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 848c12: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 848c16: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 848c1a: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 848c21: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 848c27: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 848c2b: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 848c2f: fadd dword ptr [esp + 0xd0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xd0u)));
/* 848c36: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 848c3a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 848c3c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 848c40: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 848c42: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 848c44: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 848c48: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 848c4a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 848c4e: fchs  */
  ST0 = -ST0;
/* 848c50: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 848c54: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 848c58: fchs  */
  ST0 = -ST0;
/* 848c5a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 848c5e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 848c64: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 848c66: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 848c6d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 848c6f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 848c71: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 848c73: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 848c7a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 848c80: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 848c84: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 848c88: fadd dword ptr [esp + 0xd4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xd4u)));
/* 848c8f: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 848c93: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848c95: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 848c99: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 848c9d: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 848ca1: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 848ca5: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 848ca9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 848cad: fchs  */
  ST0 = -ST0;
/* 848caf: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 848cb3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 848cb9: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 848cbb: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 848cbf: fchs  */
  ST0 = -ST0;
/* 848cc1: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 848cc8: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 848ccc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 848cd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 848cd2: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 848cd6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848cd8: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 848cdc: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 848ce0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 848ce4: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 848ce8: fadd dword ptr [esp + 0xd8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xd8u)));
/* 848cef: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 848cf3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 848cf5: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 848cf9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 848cfb: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 848cfd: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 848d01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 848d03: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 848d07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 848d09: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 848d0f: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 848d13: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 848d17: fchs  */
  ST0 = -ST0;
/* 848d19: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 848d1d: fchs  */
  ST0 = -ST0;
/* 848d1f: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 848d23: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 848d27: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 848d2b: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 848d2f: fchs  */
  ST0 = -ST0;
/* 848d31: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 848d35: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 848d39: fchs  */
  ST0 = -ST0;
/* 848d3b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 848d3d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 848d41: fchs  */
  ST0 = -ST0;
/* 848d43: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 848d47: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848d49: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 848d4d: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 848d4f: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 848d53: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* 848d55: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 848d59: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 848d5d: mov dword ptr [esp + 0xa0], ecx */
  W32((uint32_t)(esp + 0xa0u), ecx);
/* 848d64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 848d66: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848d68: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 848d6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 848d6e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 848d72: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 848d74: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 848d76: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 848d7a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848d7c: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 848d80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 848d82: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 848d86: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 848d8a: fmul dword ptr [esp + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb0u)));
/* 848d91: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 848d95: mov dword ptr [esp + 0xa4], edx */
  W32((uint32_t)(esp + 0xa4u), edx);
/* 848d9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 848d9e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 848da2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848da4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 848da8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 848dac: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848dae: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 848db2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 848db6: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 848dba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 848dbc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848dbe: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 848dc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 848dc7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 848dcb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848dcd: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 848dd1: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 848dd8: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 848ddf: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 848de6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 848de8: mov ebx, dword ptr [esp + 0xcc] */
  ebx = R32((uint32_t)(esp + 0xccu));
/* 848def: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 848df3: mov ecx, eax */
  ecx = eax;
/* 848df5: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 848dfc: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 848e00: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 848e04: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 848e08: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 848e0c: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 848e10: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 848e14: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 848e18: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 848e1c: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 848e20: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 848e24: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 848e28: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 848e2c: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 848e30: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 848e34: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 848e3b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848e40: lea esi, [esp + 0x54] */
  esi = (uint32_t)(esp + 0x54u);
/* 848e44: mov edi, ebx */
  edi = ebx;
/* 848e46: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 848e4e: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 848e56: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 848e61: mov dword ptr [esp + 0x88], edx */
  W32((uint32_t)(esp + 0x88u), edx);
/* 848e68: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 848e6f: mov dword ptr [esp + 0x90], 0x3f800000 */
  W32((uint32_t)(esp + 0x90u), 0x3f800000u);
/* 848e7a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848e7c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 848e80: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 848e88: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x848e8eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 848e8e: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 848e95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 848e96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 848e97: mov eax, ebx */
  eax = ebx;
/* 848e99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 848ea0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 848ea1: add esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 848ea7: ret  */
  esp += 4; SPILL(); return;
}

void f_848f90(void) {
  LOAD_REGS();
L_848f90: /* 848f90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 848f92: push 0x9d3ba1 */
  { uint32_t v = 0x9d3ba1u; esp -= 4; W32(esp, v); }
/* 848f97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 848f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 848f9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 848fa5: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 848fa8: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 848fac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 848fad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 848fae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 848faf: mov ebx, ecx */
  ebx = ecx;
/* 848fb1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 848fb4: mov eax, esp */
  eax = esp;
/* 848fb6: mov ecx, eax */
  ecx = eax;
/* 848fb8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 848fba: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 848fbe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 848fc1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 848fc8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 848fcb: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 848fd2: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 848fd6: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* 848fda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 848fdb: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 848fdf: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 848fe2: call 0x6c6852 */
  esp -= 4; W32(esp, 0x848fe7u); SPILL(); f_6c6852(); if (g_unwind) return; RELOAD();
/* 848fe7: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 848fea: mov edi, esp */
  edi = esp;
/* 848fec: mov esi, eax */
  esi = eax;
/* 848fee: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 848ff5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848ffa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848ffc: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* 849003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 849004: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849005: mov ecx, ebx */
  ecx = ebx;
/* 849007: mov dword ptr [esp + 0xa4], 0 */
  W32((uint32_t)(esp + 0xa4u), 0x0u);
/* 849012: call 0x6cbab9 */
  esp -= 4; W32(esp, 0x849017u); SPILL(); f_6cbab9(); if (g_unwind) return; RELOAD();
/* 849017: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 84901b: mov byte ptr [esp + 0x5c], 2 */
  W8((uint32_t)(esp + 0x5cu), 0x2u);
/* 849020: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x849026u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 849026: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 84902a: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84902e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84902f: mov dword ptr [ebx], 0x9f70ec */
  W32((uint32_t)(ebx), 0x9f70ecu);
/* 849035: mov dword ptr [ebx + 0x1d4], edx */
  W32((uint32_t)(ebx + 0x1d4u), edx);
/* 84903b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84903c: mov eax, ebx */
  eax = ebx;
/* 84903e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 849045: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 849046: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849049: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_849080(void) {
  LOAD_REGS();
L_849080: /* 849080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849081: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 849085: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849087: je 0x84909e */
  if (zf) goto L_84909e;
L_849089: /* 849089: push 0xb5c498 */
  { uint32_t v = 0xb5c498u; esp -= 4; W32(esp, v); }
/* 84908e: mov ecx, esi */
  ecx = esi;
/* 849090: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x849096u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 849096: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849098: je 0x84909e */
  if (zf) goto L_84909e;
L_84909a: /* 84909a: mov eax, esi */
  eax = esi;
/* 84909c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84909d: ret  */
  esp += 4; SPILL(); return;
L_84909e: /* 84909e: xor eax, eax */
  eax = 0;
/* 8490a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8490a1: ret  */
  esp += 4; SPILL(); return;
}

void f_8490c0(void) {
  LOAD_REGS();
L_8490c0: /* 8490c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8490c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8490c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8490c7: je 0x8490de */
  if (zf) goto L_8490de;
L_8490c9: /* 8490c9: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 8490ce: mov ecx, esi */
  ecx = esi;
/* 8490d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8490d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8490d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8490d8: je 0x8490de */
  if (zf) goto L_8490de;
L_8490da: /* 8490da: mov eax, esi */
  eax = esi;
/* 8490dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8490dd: ret  */
  esp += 4; SPILL(); return;
L_8490de: /* 8490de: xor eax, eax */
  eax = 0;
/* 8490e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8490e1: ret  */
  esp += 4; SPILL(); return;
}

void f_849100(void) {
  LOAD_REGS();
L_849100: /* 849100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849101: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 849105: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849107: je 0x84911e */
  if (zf) goto L_84911e;
L_849109: /* 849109: push 0xcc6848 */
  { uint32_t v = 0xcc6848u; esp -= 4; W32(esp, v); }
/* 84910e: mov ecx, esi */
  ecx = esi;
/* 849110: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x849116u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 849116: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849118: je 0x84911e */
  if (zf) goto L_84911e;
L_84911a: /* 84911a: mov eax, esi */
  eax = esi;
/* 84911c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84911d: ret  */
  esp += 4; SPILL(); return;
L_84911e: /* 84911e: xor eax, eax */
  eax = 0;
/* 849120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849121: ret  */
  esp += 4; SPILL(); return;
}

void f_849140(void) {
  LOAD_REGS();
L_849140: /* 849140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849141: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 849145: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849147: je 0x84915e */
  if (zf) goto L_84915e;
L_849149: /* 849149: push 0xb715c8 */
  { uint32_t v = 0xb715c8u; esp -= 4; W32(esp, v); }
/* 84914e: mov ecx, esi */
  ecx = esi;
/* 849150: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x849156u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 849156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849158: je 0x84915e */
  if (zf) goto L_84915e;
L_84915a: /* 84915a: mov eax, esi */
  eax = esi;
/* 84915c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84915d: ret  */
  esp += 4; SPILL(); return;
L_84915e: /* 84915e: xor eax, eax */
  eax = 0;
/* 849160: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849161: ret  */
  esp += 4; SPILL(); return;
}

void f_849180(void) {
  LOAD_REGS();
L_849180: /* 849180: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 849181: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 849182: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 849184: mov esi, ecx */
  esi = ecx;
/* 849186: mov dword ptr [esi], 0xa167c4 */
  W32((uint32_t)(esi), 0xa167c4u);
/* 84918c: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 849192: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 849195: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 849198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84919a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 84919f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8491a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8491a1: call 0x99c910 */
  esp -= 4; W32(esp, 0x8491a6u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8491a6: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8491ab: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8491ae: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8491b1: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8491b4: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8491ba: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8491bd: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8491c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8491c1: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 8491c4: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 8491c7: mov eax, esi */
  eax = esi;
/* 8491c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8491ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8491cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8491cc: ret  */
  esp += 4; SPILL(); return;
}

void f_8491f0(void) {
  LOAD_REGS();
L_8491f0: /* 8491f0: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 8491f3: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8491f6: ret  */
  esp += 4; SPILL(); return;
}

void f_849210(void) {
  LOAD_REGS();
L_849210: /* 849210: mov eax, 1 */
  eax = 0x1u;
/* 849215: ret  */
  esp += 4; SPILL(); return;
}

void f_849230(void) {
  LOAD_REGS();
L_849230: /* 849230: mov eax, 0x60 */
  eax = 0x60u;
/* 849235: ret  */
  esp += 4; SPILL(); return;
}

void f_849250(void) {
  LOAD_REGS();
L_849250: /* 849250: mov eax, 0x18 */
  eax = 0x18u;
/* 849255: ret  */
  esp += 4; SPILL(); return;
}

void f_849270(void) {
  LOAD_REGS();
L_849270: /* 849270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 849274: mov edx, 4 */
  edx = 0x4u;
/* 849279: mov ecx, 2 */
  ecx = 0x2u;
/* 84927e: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 849284: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 84928b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84928e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 849291: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 849294: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 849297: mov eax, 3 */
  eax = 0x3u;
/* 84929c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8492b0(void) {
  LOAD_REGS();
L_8492b0: /* 8492b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8492b4: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 8492b6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8492b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8492ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8492bb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8492c0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8492c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8492c3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8492e0(void) {
  LOAD_REGS();
L_8492e0: /* 8492e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8492e4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8492e8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8492eb: lea ecx, [ecx + eax*8 + 4] */
  ecx = (uint32_t)(ecx + eax*8 + 0x4u);
/* 8492ef: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8492f1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_849310(void) {
  LOAD_REGS();
L_849310: /* 849310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 849311: mov ebp, esp */
  ebp = esp;
/* 849313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 849315: push 0x9d3bc0 */
  { uint32_t v = 0x9d3bc0u; esp -= 4; W32(esp, v); }
/* 84931a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 849320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 849321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 849328: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84932b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 849330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 849331: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849332: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 849335: mov ecx, dword ptr [0xce84b0] */
  ecx = R32((uint32_t)(0xce84b0u));
/* 84933b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84933c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84933f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 849346: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 849349: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 84934b: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 84934d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 849350: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849352: je 0x8493f7 */
  if (zf) goto L_8493f7;
L_849358: /* 849358: test byte ptr [eax + 0x80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84935f: je 0x8493f7 */
  if (zf) goto L_8493f7;
L_849365: /* 849365: mov ecx, dword ptr [eax + 0x2a4] */
  ecx = R32((uint32_t)(eax + 0x2a4u));
/* 84936b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84936d: je 0x8493f7 */
  if (zf) goto L_8493f7;
L_849373: /* 849373: mov edx, dword ptr [eax + 0x2a0] */
  edx = R32((uint32_t)(eax + 0x2a0u));
/* 849379: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84937b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84937d: je 0x8493f7 */
  if (zf) goto L_8493f7;
L_84937f: /* 84937f: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 849384: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84938au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84938a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84938c: je 0x8493f7 */
  if (zf) goto L_8493f7;
L_84938e: /* 84938e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 849391: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 849397: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84939a: jne 0x8493f7 */
  if (!zf) goto L_8493f7;
L_84939c: /* 84939c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84939f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8493a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8493a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8493a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8493a6: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8493a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8493a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8493aa: jne 0x8493f7 */
  if (!zf) goto L_8493f7;
L_8493ac: /* 8493ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8493af: xor ecx, ecx */
  ecx = 0;
L_8493b1: /* 8493b1: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8493b4: jge 0x849423 */
  if ((sf == of)) goto L_849423;
L_8493b6: /* 8493b6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8493b9: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8493bc: cmp dword ptr [eax + edx*8 + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*8 + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8493c0: je 0x8493c5 */
  if (zf) goto L_8493c5;
L_8493c2: /* 8493c2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8493c3: jmp 0x8493b1 */
  goto L_8493b1;
L_8493c5: /* 8493c5: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8493c8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8493cb: mov edx, dword ptr [eax + ecx*8 + 4] */
  edx = R32((uint32_t)(eax + ecx*8 + 0x4u));
/* 8493cf: fmul dword ptr [edx + 0x2bc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2bcu)));
/* 8493d5: lea ecx, [eax + ecx*8] */
  ecx = (uint32_t)(eax + ecx*8);
/* 8493d8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8493da: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* 8493dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8493e3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8493e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8493e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8493ea: jp 0x8493f4 */
  if (pf) goto L_8493f4;
L_8493ec: /* 8493ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8493ee: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8493f4: /* 8493f4: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
L_8493f7: /* 8493f7: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 8493fd: mov eax, dword ptr [0xce84b0] */
  eax = R32((uint32_t)(0xce84b0u));
/* 849402: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 849405: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 849407: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 849409: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84940c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84940e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84940f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849411: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849414: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849415: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84941c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84941d: mov esp, ebp */
  esp = ebp;
/* 84941f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 849420: ret 0xc */
  esp += 16; SPILL(); return;
L_849423: /* 849423: mov ecx, dword ptr [eax + 0x710] */
  ecx = R32((uint32_t)(eax + 0x710u));
/* 849429: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84942c: jge 0x849445 */
  if ((sf == of)) goto L_849445;
L_84942e: /* 84942e: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 849431: mov esi, dword ptr [eax + edx*8 + 4] */
  esi = R32((uint32_t)(eax + edx*8 + 0x4u));
/* 849435: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849437: je 0x849445 */
  if (zf) goto L_849445;
L_849439: /* 849439: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 84943a: mov dword ptr [eax + 0x710], ecx */
  W32((uint32_t)(eax + 0x710u), ecx);
/* 849440: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 849443: jmp 0x849423 */
  goto L_849423;
L_849445: /* 849445: mov ecx, dword ptr [eax + 0x710] */
  ecx = R32((uint32_t)(eax + 0x710u));
/* 84944b: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84944e: jge 0x8493f7 */
  if ((sf == of)) goto L_8493f7;
L_849450: /* 849450: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 849453: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 849456: mov dword ptr [eax + ecx*8 + 4], edx */
  W32((uint32_t)(eax + ecx*8 + 0x4u), edx);
/* 84945a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 84945d: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 849463: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 849464: call 0x6c6131 */
  esp -= 4; W32(esp, 0x849469u); SPILL(); f_6c6131(); if (g_unwind) return; RELOAD();
/* 849469: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84946c: mov ecx, dword ptr [edx + 0x710] */
  ecx = R32((uint32_t)(edx + 0x710u));
/* 849472: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 849475: mov dword ptr [edx + ecx*8 + 8], eax */
  W32((uint32_t)(edx + ecx*8 + 0x8u), eax);
/* 849479: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 84947c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84947f: mov eax, dword ptr [ecx + 0x710] */
  eax = R32((uint32_t)(ecx + 0x710u));
/* 849485: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 849488: mov eax, dword ptr [ecx + edx*8 + 4] */
  eax = R32((uint32_t)(ecx + edx*8 + 0x4u));
/* 84948c: fmul dword ptr [eax + 0x2bc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2bcu)));
/* 849492: lea ecx, [ecx + edx*8] */
  ecx = (uint32_t)(ecx + edx*8);
/* 849495: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 849497: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84949d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 84949f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8494a1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8494a4: jp 0x8494ae */
  if (pf) goto L_8494ae;
L_8494a6: /* 8494a6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8494a8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8494ae: /* 8494ae: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 8494b1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8494b4: mov eax, dword ptr [ecx + 0x710] */
  eax = R32((uint32_t)(ecx + 0x710u));
/* 8494ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8494bb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8494be: mov dword ptr [ecx + edx*8], 0 */
  W32((uint32_t)(ecx + edx*8), 0x0u);
/* 8494c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8494c8: mov ecx, dword ptr [eax + 0x710] */
  ecx = R32((uint32_t)(eax + 0x710u));
/* 8494ce: mov edx, eax */
  edx = eax;
/* 8494d0: mov esi, dword ptr [edx + 0x704] */
  esi = R32((uint32_t)(edx + 0x704u));
/* 8494d6: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8494d9: mov dword ptr [eax + ecx*8 + 0x10], esi */
  W32((uint32_t)(eax + ecx*8 + 0x10u), esi);
/* 8494dd: mov eax, dword ptr [edx + 0x708] */
  eax = R32((uint32_t)(edx + 0x708u));
/* 8494e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8494e6: mov dword ptr [edx + ecx*8 + 0x14], eax */
  W32((uint32_t)(edx + ecx*8 + 0x14u), eax);
/* 8494ea: jmp 0x8493f7 */
  goto L_8493f7;
}

void f_8494ef(void) {
  LOAD_REGS();
L_8494ef: /* 8494ef: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8494f2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8494f7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8494fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8494fb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8494fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x849503u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_849503(); return;
}

void f_849503(void) {
  LOAD_REGS();
L_849503: /* 849503: push 0xa167f0 */
  { uint32_t v = 0xa167f0u; esp -= 4; W32(esp, v); }
/* 849508: push 0xae4490 */
  { uint32_t v = 0xae4490u; esp -= 4; W32(esp, v); }
/* 84950d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x849513u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 849513: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849516: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 849518: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84951a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84951fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84951f: guest_badaddr(0x84951f); return;
}

void f_8495b0(void) {
  LOAD_REGS();
L_8495b0: /* 8495b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8495b1: mov ebp, esp */
  ebp = esp;
/* 8495b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8495b5: push 0x9d3bd0 */
  { uint32_t v = 0x9d3bd0u; esp -= 4; W32(esp, v); }
/* 8495ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8495c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8495c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8495c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8495cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8495cc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8495cf: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 8495d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8495d6: xor esi, esi */
  esi = 0;
/* 8495d8: test eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8495dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8495de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8495e1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8495e4: jne 0x849771 */
  if (!zf) goto L_849771;
L_8495ea: /* 8495ea: mov al, byte ptr [ebx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x51u))) & 0xffu);
/* 8495ed: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8495ef: jne 0x84965e */
  if (!zf) goto L_84965e;
L_8495f1: /* 8495f1: cmp dword ptr [ebx + 0x54], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x54u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8495f4: je 0x84965e */
  if (zf) goto L_84965e;
L_8495f6: /* 8495f6: jmp 0x849600 */
  goto L_849600;
L_849600: /* 849600: mov edi, dword ptr [ebx + 0x54] */
  edi = R32((uint32_t)(ebx + 0x54u));
/* 849603: cmp esi, dword ptr [edi + 0xfc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 849609: jge 0x8496d1 */
  if ((sf == of)) goto L_8496d1;
L_84960f: /* 84960f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 849611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849612: mov ecx, ebx */
  ecx = ebx;
/* 849614: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x84961au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84961a: mov ecx, eax */
  ecx = eax;
/* 84961c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84961e: jne 0x84964b */
  if (!zf) goto L_84964b;
L_849620: /* 849620: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 849626: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 849629: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 84962c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84962e: jne 0x84964b */
  if (!zf) goto L_84964b;
L_849630: /* 849630: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 849635: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x84963bu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 84963b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84963c: call 0x6c449e */
  esp -= 4; W32(esp, 0x849641u); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 849641: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 849644: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849647: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849649: je 0x84965b */
  if (zf) goto L_84965b;
L_84964b: /* 84964b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84964d: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x849653u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 849653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849655: jne 0x849728 */
  if (!zf) goto L_849728;
L_84965b: /* 84965b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84965c: jmp 0x849600 */
  goto L_849600;
L_84965e: /* 84965e: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 849660: jne 0x8496be */
  if (!zf) goto L_8496be;
L_849662: /* 849662: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 849668: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84966a: je 0x8496be */
  if (zf) goto L_8496be;
L_84966c: /* 84966c: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 849671: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x849677u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 849677: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849679: je 0x8496be */
  if (zf) goto L_8496be;
L_84967b: /* 84967b: mov edi, dword ptr [ebx + 0xd0] */
  edi = R32((uint32_t)(ebx + 0xd0u));
/* 849681: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849683: je 0x849696 */
  if (zf) goto L_849696;
L_849685: /* 849685: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 84968a: mov ecx, edi */
  ecx = edi;
/* 84968c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x849692u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 849692: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849694: jne 0x849698 */
  if (!zf) goto L_849698;
L_849696: /* 849696: xor edi, edi */
  edi = 0;
L_849698: /* 849698: xor esi, esi */
  esi = 0;
/* 84969a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8496a0: /* 8496a0: cmp esi, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8496a3: jge 0x8496d1 */
  if ((sf == of)) goto L_8496d1;
L_8496a5: /* 8496a5: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 8496a8: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8496ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8496ad: je 0x8496bb */
  if (zf) goto L_8496bb;
L_8496af: /* 8496af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8496b1: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8496b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8496b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8496b9: jne 0x849728 */
  if (!zf) goto L_849728;
L_8496bb: /* 8496bb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8496bc: jmp 0x8496a0 */
  goto L_8496a0;
L_8496be: /* 8496be: mov al, byte ptr [ebx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x51u))) & 0xffu);
/* 8496c1: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496c3: je 0x849728 */
  if (zf) goto L_849728;
L_8496c5: /* 8496c5: cmp al, 0xb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496c7: je 0x849728 */
  if (zf) goto L_849728;
L_8496c9: /* 8496c9: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496cb: je 0x849728 */
  if (zf) goto L_849728;
L_8496cd: /* 8496cd: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496cf: je 0x849728 */
  if (zf) goto L_849728;
L_8496d1: /* 8496d1: mov al, byte ptr [ebx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x51u))) & 0xffu);
/* 8496d4: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496d6: je 0x8496dc */
  if (zf) goto L_8496dc;
L_8496d8: /* 8496d8: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496da: jne 0x849704 */
  if (!zf) goto L_849704;
L_8496dc: /* 8496dc: xor esi, esi */
  esi = 0;
/* 8496de: mov edi, edi */
  edi = edi;
L_8496e0: /* 8496e0: cmp esi, dword ptr [ebx + 0x2a4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2a4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8496e6: jge 0x849704 */
  if ((sf == of)) goto L_849704;
L_8496e8: /* 8496e8: mov eax, dword ptr [ebx + 0x2a0] */
  eax = R32((uint32_t)(ebx + 0x2a0u));
/* 8496ee: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8496f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8496f3: je 0x849701 */
  if (zf) goto L_849701;
L_8496f5: /* 8496f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8496f7: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8496fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8496fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8496ff: jne 0x849728 */
  if (!zf) goto L_849728;
L_849701: /* 849701: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 849702: jmp 0x8496e0 */
  goto L_8496e0;
L_849704: /* 849704: xor esi, esi */
  esi = 0;
L_849706: /* 849706: cmp esi, dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84970c: jge 0x849771 */
  if ((sf == of)) goto L_849771;
L_84970e: /* 84970e: mov eax, dword ptr [ebx + 0x1fc] */
  eax = R32((uint32_t)(ebx + 0x1fcu));
/* 849714: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 849717: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849719: je 0x84976e */
  if (zf) goto L_84976e;
L_84971b: /* 84971b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84971c: call 0x6c884b */
  esp -= 4; W32(esp, 0x849721u); SPILL(); f_6c884b(); if (g_unwind) return; RELOAD();
/* 849721: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849724: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849726: je 0x84976e */
  if (zf) goto L_84976e;
L_849728: /* 849728: mov eax, 1 */
  eax = 0x1u;
/* 84972d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849730: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 849737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 849738: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849739: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84973a: mov esp, ebp */
  esp = ebp;
/* 84973c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84973d: ret  */
  esp += 4; SPILL(); return;
L_84976e: /* 84976e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84976f: jmp 0x849706 */
  goto L_849706;
L_849771: /* 849771: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849774: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 849775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849776: xor eax, eax */
  eax = 0;
/* 849778: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84977f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 849780: mov esp, ebp */
  esp = ebp;
/* 849782: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 849783: ret  */
  esp += 4; SPILL(); return;
}

void f_8495f8(void) {
  LOAD_REGS();
L_8495f8: /* 8495f8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8495ff: nop  */
L_849600: /* 849600: mov edi, dword ptr [ebx + 0x54] */
  edi = R32((uint32_t)(ebx + 0x54u));
/* 849603: cmp esi, dword ptr [edi + 0xfc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 849609: jge 0x8496d1 */
  if ((sf == of)) goto L_8496d1;
L_84960f: /* 84960f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 849611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849612: mov ecx, ebx */
  ecx = ebx;
/* 849614: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x84961au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84961a: mov ecx, eax */
  ecx = eax;
/* 84961c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84961e: jne 0x84964b */
  if (!zf) goto L_84964b;
L_849620: /* 849620: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 849626: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 849629: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 84962c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84962e: jne 0x84964b */
  if (!zf) goto L_84964b;
L_849630: /* 849630: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 849635: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x84963bu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 84963b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84963c: call 0x6c449e */
  esp -= 4; W32(esp, 0x849641u); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 849641: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 849644: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849647: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849649: je 0x84965b */
  if (zf) goto L_84965b;
L_84964b: /* 84964b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84964d: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x849653u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 849653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849655: jne 0x849728 */
  if (!zf) goto L_849728;
L_84965b: /* 84965b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84965c: jmp 0x849600 */
  goto L_849600;
L_8496d1: /* 8496d1: mov al, byte ptr [ebx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x51u))) & 0xffu);
/* 8496d4: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496d6: je 0x8496dc */
  if (zf) goto L_8496dc;
L_8496d8: /* 8496d8: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8496da: jne 0x849704 */
  if (!zf) goto L_849704;
L_8496dc: /* 8496dc: xor esi, esi */
  esi = 0;
/* 8496de: mov edi, edi */
  edi = edi;
L_8496e0: /* 8496e0: cmp esi, dword ptr [ebx + 0x2a4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2a4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8496e6: jge 0x849704 */
  if ((sf == of)) goto L_849704;
L_8496e8: /* 8496e8: mov eax, dword ptr [ebx + 0x2a0] */
  eax = R32((uint32_t)(ebx + 0x2a0u));
/* 8496ee: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8496f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8496f3: je 0x849701 */
  if (zf) goto L_849701;
L_8496f5: /* 8496f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8496f7: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8496fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8496fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8496ff: jne 0x849728 */
  if (!zf) goto L_849728;
L_849701: /* 849701: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 849702: jmp 0x8496e0 */
  goto L_8496e0;
L_849704: /* 849704: xor esi, esi */
  esi = 0;
L_849706: /* 849706: cmp esi, dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84970c: jge 0x849771 */
  if ((sf == of)) goto L_849771;
L_84970e: /* 84970e: mov eax, dword ptr [ebx + 0x1fc] */
  eax = R32((uint32_t)(ebx + 0x1fcu));
/* 849714: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 849717: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849719: je 0x84976e */
  if (zf) goto L_84976e;
L_84971b: /* 84971b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84971c: call 0x6c884b */
  esp -= 4; W32(esp, 0x849721u); SPILL(); f_6c884b(); if (g_unwind) return; RELOAD();
/* 849721: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849724: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849726: je 0x84976e */
  if (zf) goto L_84976e;
L_849728: /* 849728: mov eax, 1 */
  eax = 0x1u;
/* 84972d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849730: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 849737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 849738: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849739: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84973a: mov esp, ebp */
  esp = ebp;
/* 84973c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84973d: ret  */
  esp += 4; SPILL(); return;
L_84976e: /* 84976e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84976f: jmp 0x849706 */
  goto L_849706;
L_849771: /* 849771: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849774: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 849775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849776: xor eax, eax */
  eax = 0;
/* 849778: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84977f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 849780: mov esp, ebp */
  esp = ebp;
/* 849782: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 849783: ret  */
  esp += 4; SPILL(); return;
}

void f_84973e(void) {
  LOAD_REGS();
L_84973e: /* 84973e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 849741: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 849746: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 849749: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84974a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84974d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x849752u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_849752(); return;
}

void f_849752(void) {
  LOAD_REGS();
  goto L_849752;
L_849706: /* 849706: cmp esi, dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84970c: jge 0x849771 */
  if ((sf == of)) goto L_849771;
L_84970e: /* 84970e: mov eax, dword ptr [ebx + 0x1fc] */
  eax = R32((uint32_t)(ebx + 0x1fcu));
/* 849714: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 849717: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849719: je 0x84976e */
  if (zf) goto L_84976e;
L_84971b: /* 84971b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84971c: call 0x6c884b */
  esp -= 4; W32(esp, 0x849721u); SPILL(); f_6c884b(); if (g_unwind) return; RELOAD();
/* 849721: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849724: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849726: je 0x84976e */
  if (zf) goto L_84976e;
L_849728: /* 849728: mov eax, 1 */
  eax = 0x1u;
/* 84972d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849730: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 849737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 849738: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849739: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84973a: mov esp, ebp */
  esp = ebp;
/* 84973c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84973d: ret  */
  esp += 4; SPILL(); return;
L_849752: /* 849752: push 0xa16838 */
  { uint32_t v = 0xa16838u; esp -= 4; W32(esp, v); }
/* 849757: push 0xae44a8 */
  { uint32_t v = 0xae44a8u; esp -= 4; W32(esp, v); }
/* 84975c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x849762u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 849762: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849765: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 849767: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 849769: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84976eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84976e: /* 84976e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84976f: jmp 0x849706 */
  goto L_849706;
L_849771: /* 849771: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849774: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 849775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849776: xor eax, eax */
  eax = 0;
/* 849778: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84977f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 849780: mov esp, ebp */
  esp = ebp;
/* 849782: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 849783: ret  */
  esp += 4; SPILL(); return;
}

void f_849810(void) {
  LOAD_REGS();
L_849810: /* 849810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 849811: mov ebp, esp */
  ebp = esp;
/* 849813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 849815: push 0x9d3be0 */
  { uint32_t v = 0x9d3be0u; esp -= 4; W32(esp, v); }
/* 84981a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 849820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 849821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 849828: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84982e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84982f: mov ebx, ecx */
  ebx = ecx;
/* 849831: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 849833: cmp byte ptr [eax + 0x51], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 849837: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849838: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 849839: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84983c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 849843: jne 0x84986b */
  if (!zf) goto L_84986b;
L_849845: /* 849845: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 84984b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84984d: je 0x84986b */
  if (zf) goto L_84986b;
L_84984f: /* 84984f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 849851: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 849852: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x849858u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 849858: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84985a: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 849860: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849861: mov ecx, eax */
  ecx = eax;
/* 849863: call dword ptr [edx + 0x118] */
  { uint32_t t = R32((uint32_t)(edx + 0x118u)); esp -= 4; W32(esp, 0x849869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 849869: jmp 0x84987c */
  goto L_84987c;
L_84986b: /* 84986b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84986d: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 849873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849874: mov ecx, eax */
  ecx = eax;
/* 849876: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x84987cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84987c: /* 84987c: mov esi, eax */
  esi = eax;
/* 84987e: lea edi, [ebx + 8] */
  edi = (uint32_t)(ebx + 0x8u);
/* 849881: mov ecx, 0x10 */
  ecx = 0x10u;
/* 849886: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 849888: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 84988e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x849894u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 849894: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 84989a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84989b: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 84989e: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x8498a4u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 8498a4: mov esi, eax */
  esi = eax;
/* 8498a6: lea edi, [ebx + 0x48] */
  edi = (uint32_t)(ebx + 0x48u);
/* 8498a9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8498ae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8498b0: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8498b6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8498bcu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8498bc: lea edi, [ebx + 8] */
  edi = (uint32_t)(ebx + 0x8u);
/* 8498bf: mov ecx, edi */
  ecx = edi;
/* 8498c1: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x8498c7u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 8498c7: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 8498c9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8498cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8498cf: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 8498d5: cmp byte ptr [esi + 0x51], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8498d9: jne 0x8499b5 */
  if (!zf) goto L_8499b5;
L_8498df: /* 8498df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8498e1: je 0x8498fb */
  if (zf) goto L_8498fb;
L_8498e3: /* 8498e3: push 0xcc6848 */
  { uint32_t v = 0xcc6848u; esp -= 4; W32(esp, v); }
/* 8498e8: mov ecx, esi */
  ecx = esi;
/* 8498ea: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8498f0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8498f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8498f2: je 0x8498fb */
  if (zf) goto L_8498fb;
L_8498f4: /* 8498f4: mov eax, esi */
  eax = esi;
/* 8498f6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8498f9: jmp 0x849905 */
  goto L_849905;
L_8498fb: /* 8498fb: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 849902: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_849905: /* 849905: lea edi, [ebx + 0x8c] */
  edi = (uint32_t)(ebx + 0x8cu);
/* 84990b: lea esi, [eax + 0x370] */
  esi = (uint32_t)(eax + 0x370u);
/* 849911: mov ecx, 7 */
  ecx = 0x7u;
/* 849916: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 849918: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 84991e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 849921: je 0x849982 */
  if (zf) goto L_849982;
L_849923: /* 849923: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 849925: mov ecx, eax */
  ecx = eax;
/* 849927: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x84992du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84992d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 849930: lea eax, [edi + 0x170] */
  eax = (uint32_t)(edi + 0x170u);
/* 849936: lea esi, [ebx + 0x8c] */
  esi = (uint32_t)(ebx + 0x8cu);
/* 84993c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84993d: mov ecx, esi */
  ecx = esi;
/* 84993f: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x849945u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 849945: fld dword ptr [edi + 0x284] */
  { double v = F32((uint32_t)(edi + 0x284u)); FPUSH(v); }
/* 84994b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 849951: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 849953: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 849956: je 0x84995a */
  if (zf) goto L_84995a;
L_849958: /* 849958: fchs  */
  ST0 = -ST0;
L_84995a: /* 84995a: lea ecx, [edi + 0x288] */
  ecx = (uint32_t)(edi + 0x288u);
/* 849960: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 849963: call dword ptr [0xcfab1c] */
  esp -= 4; W32(esp, 0x849969u); SPILL(); f_4e21c1(); if (g_unwind) return; /* Core!?GetAbsMax@FVector@@QBEMXZ */ RELOAD();
/* 849969: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84996c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84996f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849970: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 849973: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 849976: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 849979: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84997a: mov ecx, esi */
  ecx = esi;
/* 84997c: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x849982u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
L_849982: /* 849982: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 849984: lea eax, [ebx + 0x8c] */
  eax = (uint32_t)(ebx + 0x8cu);
/* 84998a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84998b: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 84998e: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x849994u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 849994: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849996: lea edx, [ebx + 0xa8] */
  edx = (uint32_t)(ebx + 0xa8u);
/* 84999c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84999e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8499a1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8499a4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8499a7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8499aa: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8499ad: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 8499b0: jmp 0x849a6a */
  goto L_849a6a;
L_8499b5: /* 8499b5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8499b7: mov ecx, esi */
  ecx = esi;
/* 8499b9: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x8499bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8499bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8499c1: je 0x849a3d */
  if (zf) goto L_849a3d;
L_8499c3: /* 8499c3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8499c5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8499c7: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x8499cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8499cd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8499cf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8499d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8499d2: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8499d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8499d6: mov ecx, eax */
  ecx = eax;
/* 8499d8: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8499dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8499db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8499dc: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 8499df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8499e0: mov ecx, eax */
  ecx = eax;
/* 8499e2: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x8499e8u); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 8499e8: mov esi, eax */
  esi = eax;
/* 8499ea: lea edi, [ebx + 0x8c] */
  edi = (uint32_t)(ebx + 0x8cu);
/* 8499f0: mov ecx, 7 */
  ecx = 0x7u;
/* 8499f5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8499f7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8499f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8499fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x849a01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 849a01: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 849a03: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 849a05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849a06: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 849a09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849a0a: mov ecx, eax */
  ecx = eax;
/* 849a0c: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x849a0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 849a0f: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 849a12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 849a13: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 849a16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 849a17: mov ecx, eax */
  ecx = eax;
/* 849a19: call dword ptr [0xcfab18] */
  esp -= 4; W32(esp, 0x849a1fu); SPILL(); f_4e10ff(); if (g_unwind) return; /* Core!?TransformBy@FSphere@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 849a1f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 849a21: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 849a27: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849a29: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849a2c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 849a2f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 849a32: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849a35: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 849a38: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 849a3b: jmp 0x849a6a */
  goto L_849a6a;
L_849a3d: /* 849a3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 849a3f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 849a42: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x849a48u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 849a48: lea edx, [ebx + 0x8c] */
  edx = (uint32_t)(ebx + 0x8cu);
/* 849a4e: mov esi, eax */
  esi = eax;
/* 849a50: mov edi, edx */
  edi = edx;
/* 849a52: mov ecx, 7 */
  ecx = 0x7u;
/* 849a57: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 849a59: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 849a5b: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 849a61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849a62: mov ecx, edx */
  ecx = edx;
/* 849a64: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x849a6au); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_849a6a: /* 849a6a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 849a6c: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 849a70: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 849a74: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 849a78: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 849a7c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 849a7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 849a80: mov dword ptr [ebx + 0xb8], edx */
  W32((uint32_t)(ebx + 0xb8u), edx);
/* 849a86: call 0x6c884b */
  esp -= 4; W32(esp, 0x849a8bu); SPILL(); f_6c884b(); if (g_unwind) return; RELOAD();
/* 849a8b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 849a8d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849a90: mov dword ptr [ebx + 0xbc], eax */
  W32((uint32_t)(ebx + 0xbcu), eax);
/* 849a96: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 849a99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 849a9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 849a9d: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 849aa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 849aa1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 849aa8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 849aa9: mov esp, ebp */
  esp = ebp;
/* 849aab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 849aac: ret  */
  esp += 4; SPILL(); return;
}

void f_849aad(void) {
  LOAD_REGS();
L_849aad: /* 849aad: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 849ab0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 849ab5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 849ab8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 849ab9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 849abc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x849ac1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_849ac1(); return;
}

void f_849ac1(void) {
  LOAD_REGS();
L_849ac1: /* 849ac1: push 0xa16860 */
  { uint32_t v = 0xa16860u; esp -= 4; W32(esp, v); }
/* 849ac6: push 0xae44b0 */
  { uint32_t v = 0xae44b0u; esp -= 4; W32(esp, v); }
/* 849acb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x849ad1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 849ad1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 849ad4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 849ad6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 849ad8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x849addu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_849add: guest_badaddr(0x849add); return;
}

void f_849ba0(void) {
  LOAD_REGS();
L_849ba0: /* 849ba0: sub esp, 0x29c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x29cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849ba6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 849ba7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 849ba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 849ba9: mov ebx, ecx */
  ebx = ecx;
/* 849bab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 849bac: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 849bb3: call 0x6cc784 */
  esp -= 4; W32(esp, 0x849bb8u); SPILL(); f_6cc784(); if (g_unwind) return; RELOAD();
/* 849bb8: lea ecx, [ebx + 0x114] */
  ecx = (uint32_t)(ebx + 0x114u);
/* 849bbe: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x849bc4u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 849bc4: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 849bcb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 849bce: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 849bd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 849bd3: je 0x84a0f0 */
  if (zf) goto L_84a0f0;
L_849bd9: /* 849bd9: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 849bdf: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 849be2: je 0x849bf2 */
  if (zf) goto L_849bf2;
L_849be4: /* 849be4: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 849be7: je 0x849bf2 */
  if (zf) goto L_849bf2;
L_849be9: /* 849be9: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 849bec: jne 0x84a0f0 */
  if (!zf) goto L_84a0f0;
L_849bf2: /* 849bf2: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 849bf6: mov edi, 8 */
  edi = 0x8u;
/* 849bfb: jmp 0x849c00 */
  goto L_849c00;
L_849c00: /* 849c00: mov ecx, esi */
  ecx = esi;
/* 849c02: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x849c08u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 849c08: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 849c0b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 849c0c: jne 0x849c00 */
  if (!zf) goto L_849c00;
L_849c0e: /* 849c0e: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 849c12: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 849c1a: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 849c22: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 849c26: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 849c2a: mov dword ptr [esp + 0x94], 2 */
  W32((uint32_t)(esp + 0x94u), 0x2u);
/* 849c35: jmp 0x849c40 */
  goto L_849c40;
L_849c40: /* 849c40: lea ebp, [esp + 0x14] */
  ebp = (uint32_t)(esp + 0x14u);
/* 849c44: mov dword ptr [esp + 0x98], 2 */
  W32((uint32_t)(esp + 0x98u), 0x2u);
/* 849c4f: nop  */
L_849c50: /* 849c50: xor esi, esi */
  esi = 0;
L_849c52: /* 849c52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 849c56: fld dword ptr [esp + esi*4 + 0x14] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x14u)); FPUSH(v); }
/* 849c5a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 849c5c: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 849c5f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849c62: mov eax, esp */
  eax = esp;
/* 849c64: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 849c66: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 849c6a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 849c6d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 849c70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 849c71: mov ecx, ebx */
  ecx = ebx;
/* 849c73: mov dword ptr [eax + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + 0xcu), 0x3f800000u);
/* 849c7a: call 0x6c7018 */
  esp -= 4; W32(esp, 0x849c7fu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 849c7f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 849c81: mov ecx, edi */
  ecx = edi;
/* 849c83: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849c85: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849c88: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 849c8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 849c8e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 849c8f: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 849c92: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 849c95: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 849c98: jl 0x849c52 */
  if ((sf != of)) goto L_849c52;
L_849c9a: /* 849c9a: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 849ca1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 849ca4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 849ca5: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 849cac: jne 0x849c50 */
  if (!zf) goto L_849c50;
L_849cae: /* 849cae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 849cb2: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849cb9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 849cbc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 849cbd: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 849cc1: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 849cc8: jne 0x849c40 */
  if (!zf) goto L_849c40;
L_849cce: /* 849cce: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 849cd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849cd8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 849cde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 849ce0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 849ce3: jp 0x849eaf */
  if (pf) goto L_849eaf;
L_849ce9: /* 849ce9: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849ced: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849cf1: mov ecx, esp */
  ecx = esp;
/* 849cf3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849cf5: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 849cfc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849cff: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849d02: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 849d06: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849d0a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d0d: mov eax, esp */
  eax = esp;
/* 849d0f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849d11: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 849d15: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849d18: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849d1b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 849d1f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 849d23: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d26: mov edx, esp */
  edx = esp;
/* 849d28: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849d2a: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 849d2e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849d31: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849d35: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849d38: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849d3eu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849d3e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849d40: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 849d47: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849d4a: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 849d51: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849d54: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 849d5b: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849d5e: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 849d65: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 849d6c: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 849d73: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d76: mov eax, esp */
  eax = esp;
/* 849d78: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849d7a: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 849d81: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849d84: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849d87: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 849d8b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 849d8f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d92: mov edx, esp */
  edx = esp;
/* 849d94: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849d96: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 849d9d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849da0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849da3: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849da7: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849dab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849dae: mov ecx, esp */
  ecx = esp;
/* 849db0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849db2: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 849db9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849dbc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849dbf: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849dc3: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849dc9u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849dc9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849dcb: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 849dd2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849dd5: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 849ddc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849ddf: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 849de6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849de9: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 849ded: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849df0: mov dword ptr [esp + 0xd0], edx */
  W32((uint32_t)(esp + 0xd0u), edx);
/* 849df7: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 849dfb: mov eax, esp */
  eax = esp;
/* 849dfd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849dff: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 849e03: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849e06: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849e09: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 849e10: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 849e17: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e1a: mov edx, esp */
  edx = esp;
/* 849e1c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849e1e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849e21: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 849e28: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849e2b: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 849e32: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e3c: mov ecx, esp */
  ecx = esp;
/* 849e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849e40: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 849e47: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849e4a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849e4d: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849e51: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849e57u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849e57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849e59: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 849e60: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849e63: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 849e6a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849e6d: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 849e74: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849e77: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 849e7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e7e: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 849e85: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849e89: mov eax, esp */
  eax = esp;
/* 849e8b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849e8d: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 849e91: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849e94: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849e97: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 849e9b: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 849e9f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849ea2: mov edx, esp */
  edx = esp;
/* 849ea4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849ea6: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 849eaa: jmp 0x84a070 */
  goto L_84a070;
L_849eaf: /* 849eaf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 849eb3: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849eb7: mov eax, esp */
  eax = esp;
/* 849eb9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849ebb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 849ebf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849ec2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849ec5: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 849ec9: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 849ecd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849ed0: mov edx, esp */
  edx = esp;
/* 849ed2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849ed4: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 849edb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849ede: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849ee1: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 849ee5: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 849ee9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849eec: mov ecx, esp */
  ecx = esp;
/* 849eee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849ef0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 849ef4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849ef7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849efa: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849efe: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849f04u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849f04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849f06: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 849f0d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849f10: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 849f17: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849f1a: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 849f21: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849f24: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 849f28: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 849f2f: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 849f33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f36: mov eax, esp */
  eax = esp;
/* 849f38: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849f3a: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 849f41: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849f44: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849f47: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 849f4e: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 849f55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f58: mov edx, esp */
  edx = esp;
/* 849f5a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849f5c: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 849f63: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849f66: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849f69: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849f6d: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849f71: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f74: mov ecx, esp */
  ecx = esp;
/* 849f76: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849f78: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 849f7f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849f82: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849f85: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849f89: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849f8fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849f8f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849f91: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 849f98: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849f9b: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 849fa2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849fa5: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 849fac: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849faf: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 849fb6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849fb9: mov dword ptr [esp + 0xd0], edx */
  W32((uint32_t)(esp + 0xd0u), edx);
/* 849fc0: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 849fc7: mov eax, esp */
  eax = esp;
/* 849fc9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849fcb: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 849fd2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849fd5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849fd8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 849fdc: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 849fe0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849fe3: mov edx, esp */
  edx = esp;
/* 849fe5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849fe7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849fea: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 849fee: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849ff1: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 849ff8: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849fff: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a002: mov ecx, esp */
  ecx = esp;
/* 84a004: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a006: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 84a00d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a010: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a013: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a017: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a01du); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a01d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a01f: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a026: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a029: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a030: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a033: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a03a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a03d: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a041: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a044: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a04b: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a04f: mov eax, esp */
  eax = esp;
/* 84a051: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a053: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a057: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a05a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a05d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 84a061: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 84a065: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a068: mov edx, esp */
  edx = esp;
/* 84a06a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a06c: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
L_84a070: /* 84a070: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a073: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a076: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 84a07a: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 84a07e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a081: mov ecx, esp */
  ecx = esp;
/* 84a083: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a085: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 84a089: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a08c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a08f: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a093: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a099u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a099: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a09b: mov dword ptr [esp + 0xd8], ecx */
  W32((uint32_t)(esp + 0xd8u), ecx);
/* 84a0a2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a0a5: mov dword ptr [esp + 0xdc], edx */
  W32((uint32_t)(esp + 0xdcu), edx);
/* 84a0ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a0af: mov dword ptr [esp + 0xe0], ecx */
  W32((uint32_t)(esp + 0xe0u), ecx);
/* 84a0b6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a0b9: mov dword ptr [esp + 0xe4], edx */
  W32((uint32_t)(esp + 0xe4u), edx);
L_84a0c0: /* 84a0c0: mov dword ptr [esp + 0x2a8], 4 */
  W32((uint32_t)(esp + 0x2a8u), 0x4u);
L_84a0cb: /* 84a0cb: mov esi, dword ptr [esp + 0x2b0] */
  esi = R32((uint32_t)(esp + 0x2b0u));
/* 84a0d2: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 84a0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84a0da: mov ecx, esi */
  ecx = esi;
/* 84a0dc: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x84a0e1u); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 84a0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84a0e2: mov eax, esi */
  eax = esi;
/* 84a0e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84a0e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84a0e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84a0e7: add esp, 0x29c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x29cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84a0ed: ret 4 */
  esp += 8; SPILL(); return;
L_84a0f0: /* 84a0f0: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 84a0f4: mov edi, 4 */
  edi = 0x4u;
/* 84a0f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_84a100: /* 84a100: mov ecx, esi */
  ecx = esi;
/* 84a102: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x84a108u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 84a108: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 84a10b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 84a10c: jne 0x84a100 */
  if (!zf) goto L_84a100;
L_84a10e: /* 84a10e: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 84a116: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 84a11e: xor ebp, ebp */
  ebp = 0;
/* 84a120: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 84a124: jmp 0x84a130 */
  goto L_84a130;
L_84a130: /* 84a130: fld dword ptr [esp + ebp*4 + 0x14] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x14u)); FPUSH(v); }
/* 84a134: xor esi, esi */
  esi = 0;
/* 84a136: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 84a13d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84a140: /* 84a140: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 84a145: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a147: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 84a14e: fld dword ptr [esp + esi*4 + 0x14] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x14u)); FPUSH(v); }
/* 84a152: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a155: mov eax, esp */
  eax = esp;
/* 84a157: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 84a15a: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 84a15e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a160: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84a161: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 84a164: mov ecx, ebx */
  ecx = ebx;
/* 84a166: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 84a16d: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84a172u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84a172: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a174: mov ecx, edi */
  ecx = edi;
/* 84a176: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a178: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a17b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 84a17e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84a181: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84a182: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84a185: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84a188: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 84a18b: jl 0x84a140 */
  if ((sf != of)) goto L_84a140;
L_84a18d: /* 84a18d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 84a18e: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84a191: jl 0x84a130 */
  if ((sf != of)) goto L_84a130;
L_84a193: /* 84a193: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 84a19a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a19d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84a1a3: mov ecx, esp */
  ecx = esp;
/* 84a1a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a1a8: lea esi, [ebx + 0x194] */
  esi = (uint32_t)(ebx + 0x194u);
/* 84a1ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84a1b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84a1b3: jp 0x84a350 */
  if (pf) goto L_84a350;
L_84a1b9: /* 84a1b9: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 84a1bd: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 84a1c1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a1c3: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 84a1c7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a1ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a1cd: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a1d1: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 84a1d5: mov eax, esp */
  eax = esp;
/* 84a1d7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a1d9: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 84a1dd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a1e0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a1e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a1e6: mov edx, esi */
  edx = esi;
/* 84a1e8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a1ea: mov eax, esp */
  eax = esp;
/* 84a1ec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a1ee: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a1f1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a1f4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a1f7: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a1fb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a1fe: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a204u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a204: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a206: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 84a20d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a210: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 84a217: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a21a: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 84a221: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a224: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 84a228: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 84a22f: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a233: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a236: mov eax, esp */
  eax = esp;
/* 84a238: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a23a: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 84a23e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a241: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a244: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 84a248: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 84a24c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a24f: mov edx, esp */
  edx = esp;
/* 84a251: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a253: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 84a257: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a25a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a25d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a260: mov ecx, esi */
  ecx = esi;
/* 84a262: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a264: mov edx, esp */
  edx = esp;
/* 84a266: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a268: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a26b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a26e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a271: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a274: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a278: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a27eu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a27e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a280: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 84a287: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a28a: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 84a291: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a294: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 84a29b: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a29e: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 84a2a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2a5: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 84a2ac: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 84a2b0: mov ecx, esp */
  ecx = esp;
/* 84a2b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a2b4: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 84a2b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a2bb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a2be: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a2c2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 84a2c6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2c9: mov eax, esp */
  eax = esp;
/* 84a2cb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a2cd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a2d0: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a2d4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a2d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2da: mov edx, esi */
  edx = esi;
/* 84a2dc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a2de: mov eax, esp */
  eax = esp;
/* 84a2e0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a2e2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a2e5: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a2e8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a2eb: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a2ef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a2f2: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a2f8u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a2f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a2fa: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a301: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a304: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a30b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a30e: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a315: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a318: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 84a31c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a31f: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a326: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a32a: mov eax, esp */
  eax = esp;
/* 84a32c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a32e: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 84a332: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a335: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a338: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 84a33c: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 84a340: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a343: mov edx, esp */
  edx = esp;
/* 84a345: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a347: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 84a34b: jmp 0x84a4e2 */
  goto L_84a4e2;
L_84a350: /* 84a350: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 84a354: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 84a358: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a35a: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 84a35e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a361: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a364: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 84a368: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a36c: mov eax, esp */
  eax = esp;
/* 84a36e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a370: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 84a374: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a377: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a37a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a37d: mov edx, esi */
  edx = esi;
/* 84a37f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a381: mov eax, esp */
  eax = esp;
/* 84a383: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a385: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a388: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a38b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a38e: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a392: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a395: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a39bu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a39b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a39d: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 84a3a4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a3a7: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 84a3ae: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a3b1: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 84a3b8: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a3bb: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 84a3bf: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 84a3c6: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 84a3ca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3cd: mov eax, esp */
  eax = esp;
/* 84a3cf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a3d1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 84a3d5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a3d8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a3db: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 84a3df: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 84a3e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3e6: mov edx, esp */
  edx = esp;
/* 84a3e8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a3ea: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 84a3ee: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a3f1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a3f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3f7: mov ecx, esi */
  ecx = esi;
/* 84a3f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a3fb: mov edx, esp */
  edx = esp;
/* 84a3fd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a3ff: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a402: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a405: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a408: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a40b: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a40f: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a415u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a415: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a417: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 84a41e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a421: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 84a428: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a42b: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 84a432: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a435: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 84a439: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a43c: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 84a443: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 84a447: mov ecx, esp */
  ecx = esp;
/* 84a449: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a44b: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 84a44f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a452: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a455: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 84a459: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a45d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a460: mov eax, esp */
  eax = esp;
/* 84a462: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a464: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a467: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 84a46b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a46e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a471: mov edx, esi */
  edx = esi;
/* 84a473: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a475: mov eax, esp */
  eax = esp;
/* 84a477: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a479: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a47c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a47f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a482: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a486: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a489: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a48fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a48f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a491: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a498: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a49b: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a4a2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a4a5: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a4ac: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a4af: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a4b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4b6: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a4bd: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a4c1: mov eax, esp */
  eax = esp;
/* 84a4c3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a4c5: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a4c9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a4cc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a4cf: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 84a4d3: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 84a4d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4da: mov edx, esp */
  edx = esp;
/* 84a4dc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a4de: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
L_84a4e2: /* 84a4e2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a4e5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a4e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4eb: mov ecx, esi */
  ecx = esi;
/* 84a4ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a4ef: mov edx, esp */
  edx = esp;
/* 84a4f1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a4f3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a4f6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a4f9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a4fc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a4ff: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a503: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a509u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a509: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a50b: mov dword ptr [esp + 0xd8], edx */
  W32((uint32_t)(esp + 0xd8u), edx);
/* 84a512: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a515: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 84a51c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a51f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84a522: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a529: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a52c: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 84a533: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x84a538u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 84a538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a53a: jne 0x84a0c0 */
  if (!zf) goto L_84a0c0;
L_84a540: /* 84a540: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 84a546: mov ecx, dword ptr [ebx + 0x1bc] */
  ecx = R32((uint32_t)(ebx + 0x1bcu));
/* 84a54c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 84a54f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 84a555: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 84a55c: xor edx, edx */
  edx = 0;
/* 84a55e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84a560: jne 0x84a567 */
  if (!zf) goto L_84a567;
L_84a562: /* 84a562: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 84a565: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_84a567: /* 84a567: test byte ptr [eax + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84a56e: je 0x84a5af */
  if (zf) goto L_84a5af;
L_84a570: /* 84a570: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84a573: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 84a576: test dword ptr [ecx + 0x534], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a580: je 0x84a5af */
  if (zf) goto L_84a5af;
L_84a582: /* 84a582: fld dword ptr [ecx + 0x614] */
  { double v = F32((uint32_t)(ecx + 0x614u)); FPUSH(v); }
/* 84a588: fld dword ptr [eax + 0x380] */
  { double v = F32((uint32_t)(eax + 0x380u)); FPUSH(v); }
/* 84a58e: fst dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0);
/* 84a595: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 84a597: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84a599: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84a59c: jne 0x84a5a9 */
  if (!zf) goto L_84a5a9;
L_84a59e: /* 84a59e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 84a5a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84a5a7: jmp 0x84a5b7 */
  goto L_84a5b7;
L_84a5a9: /* 84a5a9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 84a5ad: jmp 0x84a5bb */
  goto L_84a5bb;
L_84a5af: /* 84a5af: mov ecx, dword ptr [0xcfab14] */
  ecx = R32((uint32_t)(0xcfab14u));
/* 84a5b5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_84a5b7: /* 84a5b7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_84a5bb: /* 84a5bb: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 84a5c0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a5c2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 84a5c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84a5c7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a5ca: mov eax, esp */
  eax = esp;
/* 84a5cc: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 84a5d0: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 84a5d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84a5d4: mov ecx, ebx */
  ecx = ebx;
/* 84a5d6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84a5d8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a5db: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a5de: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84a5e3u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84a5e3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 84a5e6: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 84a5e9: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 84a5f0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 84a5f3: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 84a5f6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a5f8: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 84a5fa: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 84a601: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 84a608: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 84a60f: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x84a615u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 84a615: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 84a619: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 84a61d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a621: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 84a625: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 84a629: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 84a62d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a631: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 84a638: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 84a63c: mov dword ptr [esp + 0xe8], eax */
  W32((uint32_t)(esp + 0xe8u), eax);
/* 84a643: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a647: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 84a64e: mov dword ptr [esp + 0x2a8], 5 */
  W32((uint32_t)(esp + 0x2a8u), 0x5u);
/* 84a659: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 84a660: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a662: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 84a664: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 84a668: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 84a66b: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 84a672: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 84a675: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a677: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 84a67b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a67d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 84a681: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84a683: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 84a687: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 84a68b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84a68d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 84a691: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 84a695: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 84a69c: jmp 0x84a0cb */
  goto L_84a0cb;
}

void f_849bfd(void) {
  LOAD_REGS();
L_849bfd: /* 849bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_849c00: /* 849c00: mov ecx, esi */
  ecx = esi;
/* 849c02: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x849c08u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 849c08: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 849c0b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 849c0c: jne 0x849c00 */
  if (!zf) goto L_849c00;
L_849c0e: /* 849c0e: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 849c12: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 849c1a: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 849c22: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 849c26: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 849c2a: mov dword ptr [esp + 0x94], 2 */
  W32((uint32_t)(esp + 0x94u), 0x2u);
/* 849c35: jmp 0x849c40 */
  goto L_849c40;
L_849c40: /* 849c40: lea ebp, [esp + 0x14] */
  ebp = (uint32_t)(esp + 0x14u);
/* 849c44: mov dword ptr [esp + 0x98], 2 */
  W32((uint32_t)(esp + 0x98u), 0x2u);
/* 849c4f: nop  */
L_849c50: /* 849c50: xor esi, esi */
  esi = 0;
L_849c52: /* 849c52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 849c56: fld dword ptr [esp + esi*4 + 0x14] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x14u)); FPUSH(v); }
/* 849c5a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 849c5c: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 849c5f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849c62: mov eax, esp */
  eax = esp;
/* 849c64: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 849c66: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 849c6a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 849c6d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 849c70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 849c71: mov ecx, ebx */
  ecx = ebx;
/* 849c73: mov dword ptr [eax + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + 0xcu), 0x3f800000u);
/* 849c7a: call 0x6c7018 */
  esp -= 4; W32(esp, 0x849c7fu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 849c7f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 849c81: mov ecx, edi */
  ecx = edi;
/* 849c83: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849c85: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849c88: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 849c8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 849c8e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 849c8f: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 849c92: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 849c95: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 849c98: jl 0x849c52 */
  if ((sf != of)) goto L_849c52;
L_849c9a: /* 849c9a: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 849ca1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 849ca4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 849ca5: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 849cac: jne 0x849c50 */
  if (!zf) goto L_849c50;
L_849cae: /* 849cae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 849cb2: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849cb9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 849cbc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 849cbd: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 849cc1: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 849cc8: jne 0x849c40 */
  if (!zf) goto L_849c40;
L_849cce: /* 849cce: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 849cd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849cd8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 849cde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 849ce0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 849ce3: jp 0x849eaf */
  if (pf) goto L_849eaf;
L_849ce9: /* 849ce9: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849ced: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849cf1: mov ecx, esp */
  ecx = esp;
/* 849cf3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849cf5: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 849cfc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849cff: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849d02: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 849d06: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849d0a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d0d: mov eax, esp */
  eax = esp;
/* 849d0f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849d11: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 849d15: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849d18: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849d1b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 849d1f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 849d23: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d26: mov edx, esp */
  edx = esp;
/* 849d28: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849d2a: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 849d2e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849d31: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849d35: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849d38: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849d3eu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849d3e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849d40: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 849d47: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849d4a: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 849d51: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849d54: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 849d5b: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849d5e: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 849d65: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 849d6c: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 849d73: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d76: mov eax, esp */
  eax = esp;
/* 849d78: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849d7a: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 849d81: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849d84: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849d87: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 849d8b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 849d8f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d92: mov edx, esp */
  edx = esp;
/* 849d94: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849d96: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 849d9d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849da0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849da3: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849da7: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849dab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849dae: mov ecx, esp */
  ecx = esp;
/* 849db0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849db2: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 849db9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849dbc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849dbf: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849dc3: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849dc9u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849dc9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849dcb: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 849dd2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849dd5: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 849ddc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849ddf: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 849de6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849de9: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 849ded: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849df0: mov dword ptr [esp + 0xd0], edx */
  W32((uint32_t)(esp + 0xd0u), edx);
/* 849df7: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 849dfb: mov eax, esp */
  eax = esp;
/* 849dfd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849dff: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 849e03: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849e06: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849e09: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 849e10: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 849e17: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e1a: mov edx, esp */
  edx = esp;
/* 849e1c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849e1e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849e21: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 849e28: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849e2b: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 849e32: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e3c: mov ecx, esp */
  ecx = esp;
/* 849e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849e40: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 849e47: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849e4a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849e4d: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849e51: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849e57u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849e57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849e59: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 849e60: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849e63: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 849e6a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849e6d: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 849e74: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849e77: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 849e7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e7e: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 849e85: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849e89: mov eax, esp */
  eax = esp;
/* 849e8b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849e8d: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 849e91: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849e94: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849e97: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 849e9b: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 849e9f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849ea2: mov edx, esp */
  edx = esp;
/* 849ea4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849ea6: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 849eaa: jmp 0x84a070 */
  goto L_84a070;
L_849eaf: /* 849eaf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 849eb3: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849eb7: mov eax, esp */
  eax = esp;
/* 849eb9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849ebb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 849ebf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849ec2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849ec5: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 849ec9: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 849ecd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849ed0: mov edx, esp */
  edx = esp;
/* 849ed2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849ed4: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 849edb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849ede: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849ee1: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 849ee5: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 849ee9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849eec: mov ecx, esp */
  ecx = esp;
/* 849eee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849ef0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 849ef4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849ef7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849efa: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849efe: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849f04u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849f04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849f06: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 849f0d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849f10: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 849f17: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849f1a: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 849f21: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849f24: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 849f28: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 849f2f: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 849f33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f36: mov eax, esp */
  eax = esp;
/* 849f38: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849f3a: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 849f41: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849f44: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849f47: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 849f4e: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 849f55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f58: mov edx, esp */
  edx = esp;
/* 849f5a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849f5c: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 849f63: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849f66: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849f69: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849f6d: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849f71: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f74: mov ecx, esp */
  ecx = esp;
/* 849f76: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849f78: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 849f7f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849f82: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849f85: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849f89: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849f8fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849f8f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849f91: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 849f98: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849f9b: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 849fa2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849fa5: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 849fac: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849faf: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 849fb6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849fb9: mov dword ptr [esp + 0xd0], edx */
  W32((uint32_t)(esp + 0xd0u), edx);
/* 849fc0: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 849fc7: mov eax, esp */
  eax = esp;
/* 849fc9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849fcb: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 849fd2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849fd5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849fd8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 849fdc: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 849fe0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849fe3: mov edx, esp */
  edx = esp;
/* 849fe5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849fe7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849fea: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 849fee: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849ff1: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 849ff8: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849fff: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a002: mov ecx, esp */
  ecx = esp;
/* 84a004: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a006: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 84a00d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a010: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a013: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a017: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a01du); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a01d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a01f: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a026: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a029: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a030: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a033: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a03a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a03d: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a041: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a044: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a04b: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a04f: mov eax, esp */
  eax = esp;
/* 84a051: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a053: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a057: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a05a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a05d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 84a061: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 84a065: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a068: mov edx, esp */
  edx = esp;
/* 84a06a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a06c: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
L_84a070: /* 84a070: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a073: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a076: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 84a07a: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 84a07e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a081: mov ecx, esp */
  ecx = esp;
/* 84a083: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a085: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 84a089: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a08c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a08f: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a093: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a099u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a099: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a09b: mov dword ptr [esp + 0xd8], ecx */
  W32((uint32_t)(esp + 0xd8u), ecx);
/* 84a0a2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a0a5: mov dword ptr [esp + 0xdc], edx */
  W32((uint32_t)(esp + 0xdcu), edx);
/* 84a0ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a0af: mov dword ptr [esp + 0xe0], ecx */
  W32((uint32_t)(esp + 0xe0u), ecx);
/* 84a0b6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a0b9: mov dword ptr [esp + 0xe4], edx */
  W32((uint32_t)(esp + 0xe4u), edx);
/* 84a0c0: mov dword ptr [esp + 0x2a8], 4 */
  W32((uint32_t)(esp + 0x2a8u), 0x4u);
/* 84a0cb: mov esi, dword ptr [esp + 0x2b0] */
  esi = R32((uint32_t)(esp + 0x2b0u));
/* 84a0d2: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 84a0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84a0da: mov ecx, esi */
  ecx = esi;
/* 84a0dc: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x84a0e1u); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 84a0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84a0e2: mov eax, esi */
  eax = esi;
/* 84a0e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84a0e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84a0e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84a0e7: add esp, 0x29c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x29cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84a0ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_849c37(void) {
  LOAD_REGS();
L_849c37: /* 849c37: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 849c3e: mov edi, edi */
  edi = edi;
L_849c40: /* 849c40: lea ebp, [esp + 0x14] */
  ebp = (uint32_t)(esp + 0x14u);
/* 849c44: mov dword ptr [esp + 0x98], 2 */
  W32((uint32_t)(esp + 0x98u), 0x2u);
/* 849c4f: nop  */
L_849c50: /* 849c50: xor esi, esi */
  esi = 0;
L_849c52: /* 849c52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 849c56: fld dword ptr [esp + esi*4 + 0x14] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x14u)); FPUSH(v); }
/* 849c5a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 849c5c: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 849c5f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849c62: mov eax, esp */
  eax = esp;
/* 849c64: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 849c66: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 849c6a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 849c6d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 849c70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 849c71: mov ecx, ebx */
  ecx = ebx;
/* 849c73: mov dword ptr [eax + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + 0xcu), 0x3f800000u);
/* 849c7a: call 0x6c7018 */
  esp -= 4; W32(esp, 0x849c7fu); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 849c7f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 849c81: mov ecx, edi */
  ecx = edi;
/* 849c83: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849c85: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849c88: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 849c8b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 849c8e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 849c8f: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 849c92: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 849c95: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 849c98: jl 0x849c52 */
  if ((sf != of)) goto L_849c52;
L_849c9a: /* 849c9a: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 849ca1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 849ca4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 849ca5: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 849cac: jne 0x849c50 */
  if (!zf) goto L_849c50;
L_849cae: /* 849cae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 849cb2: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849cb9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 849cbc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 849cbd: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 849cc1: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 849cc8: jne 0x849c40 */
  if (!zf) goto L_849c40;
L_849cce: /* 849cce: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 849cd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849cd8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 849cde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 849ce0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 849ce3: jp 0x849eaf */
  if (pf) goto L_849eaf;
L_849ce9: /* 849ce9: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849ced: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849cf1: mov ecx, esp */
  ecx = esp;
/* 849cf3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849cf5: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 849cfc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849cff: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849d02: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 849d06: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849d0a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d0d: mov eax, esp */
  eax = esp;
/* 849d0f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849d11: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 849d15: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849d18: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849d1b: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 849d1f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 849d23: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d26: mov edx, esp */
  edx = esp;
/* 849d28: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849d2a: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 849d2e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849d31: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849d35: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849d38: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849d3eu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849d3e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849d40: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 849d47: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849d4a: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 849d51: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849d54: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 849d5b: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849d5e: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 849d65: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 849d6c: mov edx, dword ptr [esp + 0x88] */
  edx = R32((uint32_t)(esp + 0x88u));
/* 849d73: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d76: mov eax, esp */
  eax = esp;
/* 849d78: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849d7a: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 849d81: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849d84: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849d87: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 849d8b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 849d8f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849d92: mov edx, esp */
  edx = esp;
/* 849d94: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849d96: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 849d9d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849da0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849da3: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849da7: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849dab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849dae: mov ecx, esp */
  ecx = esp;
/* 849db0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849db2: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 849db9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849dbc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849dbf: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849dc3: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849dc9u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849dc9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849dcb: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 849dd2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849dd5: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 849ddc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849ddf: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 849de6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849de9: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 849ded: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849df0: mov dword ptr [esp + 0xd0], edx */
  W32((uint32_t)(esp + 0xd0u), edx);
/* 849df7: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 849dfb: mov eax, esp */
  eax = esp;
/* 849dfd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849dff: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 849e03: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849e06: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849e09: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 849e10: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 849e17: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e1a: mov edx, esp */
  edx = esp;
/* 849e1c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849e1e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849e21: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 849e28: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849e2b: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 849e32: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849e39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e3c: mov ecx, esp */
  ecx = esp;
/* 849e3e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849e40: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 849e47: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849e4a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849e4d: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849e51: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849e57u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849e57: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849e59: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 849e60: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849e63: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 849e6a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849e6d: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 849e74: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849e77: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 849e7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849e7e: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 849e85: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849e89: mov eax, esp */
  eax = esp;
/* 849e8b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849e8d: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 849e91: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849e94: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849e97: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 849e9b: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 849e9f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849ea2: mov edx, esp */
  edx = esp;
/* 849ea4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849ea6: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 849eaa: jmp 0x84a070 */
  goto L_84a070;
L_849eaf: /* 849eaf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 849eb3: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 849eb7: mov eax, esp */
  eax = esp;
/* 849eb9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849ebb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 849ebf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849ec2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849ec5: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 849ec9: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 849ecd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849ed0: mov edx, esp */
  edx = esp;
/* 849ed2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849ed4: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 849edb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849ede: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849ee1: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 849ee5: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 849ee9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849eec: mov ecx, esp */
  ecx = esp;
/* 849eee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849ef0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 849ef4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849ef7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849efa: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849efe: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849f04u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849f04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849f06: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 849f0d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849f10: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 849f17: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849f1a: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 849f21: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849f24: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 849f28: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 849f2f: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 849f33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f36: mov eax, esp */
  eax = esp;
/* 849f38: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849f3a: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 849f41: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849f44: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849f47: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 849f4e: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 849f55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f58: mov edx, esp */
  edx = esp;
/* 849f5a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849f5c: mov eax, dword ptr [esp + 0xa4] */
  eax = R32((uint32_t)(esp + 0xa4u));
/* 849f63: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849f66: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849f69: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 849f6d: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 849f71: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849f74: mov ecx, esp */
  ecx = esp;
/* 849f76: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 849f78: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 849f7f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 849f82: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 849f85: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 849f89: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x849f8fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 849f8f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 849f91: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 849f98: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 849f9b: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 849fa2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 849fa5: mov dword ptr [esp + 0xc0], ecx */
  W32((uint32_t)(esp + 0xc0u), ecx);
/* 849fac: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 849faf: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 849fb6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849fb9: mov dword ptr [esp + 0xd0], edx */
  W32((uint32_t)(esp + 0xd0u), edx);
/* 849fc0: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 849fc7: mov eax, esp */
  eax = esp;
/* 849fc9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 849fcb: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 849fd2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 849fd5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 849fd8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 849fdc: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 849fe0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 849fe3: mov edx, esp */
  edx = esp;
/* 849fe5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 849fe7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 849fea: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 849fee: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 849ff1: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 849ff8: mov eax, dword ptr [esp + 0x94] */
  eax = R32((uint32_t)(esp + 0x94u));
/* 849fff: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a002: mov ecx, esp */
  ecx = esp;
/* 84a004: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a006: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 84a00d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a010: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a013: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a017: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a01du); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a01d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a01f: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a026: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a029: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a030: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a033: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a03a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a03d: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a041: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a044: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a04b: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a04f: mov eax, esp */
  eax = esp;
/* 84a051: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a053: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a057: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a05a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a05d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 84a061: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 84a065: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a068: mov edx, esp */
  edx = esp;
/* 84a06a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a06c: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
L_84a070: /* 84a070: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a073: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a076: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 84a07a: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 84a07e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a081: mov ecx, esp */
  ecx = esp;
/* 84a083: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a085: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 84a089: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a08c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a08f: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a093: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a099u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a099: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a09b: mov dword ptr [esp + 0xd8], ecx */
  W32((uint32_t)(esp + 0xd8u), ecx);
/* 84a0a2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a0a5: mov dword ptr [esp + 0xdc], edx */
  W32((uint32_t)(esp + 0xdcu), edx);
/* 84a0ac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a0af: mov dword ptr [esp + 0xe0], ecx */
  W32((uint32_t)(esp + 0xe0u), ecx);
/* 84a0b6: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a0b9: mov dword ptr [esp + 0xe4], edx */
  W32((uint32_t)(esp + 0xe4u), edx);
/* 84a0c0: mov dword ptr [esp + 0x2a8], 4 */
  W32((uint32_t)(esp + 0x2a8u), 0x4u);
/* 84a0cb: mov esi, dword ptr [esp + 0x2b0] */
  esi = R32((uint32_t)(esp + 0x2b0u));
/* 84a0d2: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 84a0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84a0da: mov ecx, esi */
  ecx = esi;
/* 84a0dc: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x84a0e1u); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 84a0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84a0e2: mov eax, esi */
  eax = esi;
/* 84a0e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84a0e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84a0e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84a0e7: add esp, 0x29c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x29cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84a0ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_84a0f0(void) {
  LOAD_REGS();
  goto L_84a0f0;
L_84a0c0: /* 84a0c0: mov dword ptr [esp + 0x2a8], 4 */
  W32((uint32_t)(esp + 0x2a8u), 0x4u);
L_84a0cb: /* 84a0cb: mov esi, dword ptr [esp + 0x2b0] */
  esi = R32((uint32_t)(esp + 0x2b0u));
/* 84a0d2: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 84a0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84a0da: mov ecx, esi */
  ecx = esi;
/* 84a0dc: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x84a0e1u); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 84a0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84a0e2: mov eax, esi */
  eax = esi;
/* 84a0e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84a0e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84a0e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84a0e7: add esp, 0x29c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x29cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84a0ed: ret 4 */
  esp += 8; SPILL(); return;
L_84a0f0: /* 84a0f0: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 84a0f4: mov edi, 4 */
  edi = 0x4u;
/* 84a0f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_84a100: /* 84a100: mov ecx, esi */
  ecx = esi;
/* 84a102: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x84a108u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 84a108: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 84a10b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 84a10c: jne 0x84a100 */
  if (!zf) goto L_84a100;
L_84a10e: /* 84a10e: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 84a116: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 84a11e: xor ebp, ebp */
  ebp = 0;
/* 84a120: lea edi, [esp + 0x30] */
  edi = (uint32_t)(esp + 0x30u);
/* 84a124: jmp 0x84a130 */
  goto L_84a130;
L_84a130: /* 84a130: fld dword ptr [esp + ebp*4 + 0x14] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x14u)); FPUSH(v); }
/* 84a134: xor esi, esi */
  esi = 0;
/* 84a136: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 84a13d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84a140: /* 84a140: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 84a145: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a147: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 84a14e: fld dword ptr [esp + esi*4 + 0x14] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x14u)); FPUSH(v); }
/* 84a152: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a155: mov eax, esp */
  eax = esp;
/* 84a157: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 84a15a: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 84a15e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a160: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84a161: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 84a164: mov ecx, ebx */
  ecx = ebx;
/* 84a166: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 84a16d: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84a172u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84a172: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a174: mov ecx, edi */
  ecx = edi;
/* 84a176: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a178: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a17b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 84a17e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84a181: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84a182: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84a185: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84a188: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 84a18b: jl 0x84a140 */
  if ((sf != of)) goto L_84a140;
L_84a18d: /* 84a18d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 84a18e: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84a191: jl 0x84a130 */
  if ((sf != of)) goto L_84a130;
L_84a193: /* 84a193: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 84a19a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a19d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84a1a3: mov ecx, esp */
  ecx = esp;
/* 84a1a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a1a8: lea esi, [ebx + 0x194] */
  esi = (uint32_t)(ebx + 0x194u);
/* 84a1ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84a1b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84a1b3: jp 0x84a350 */
  if (pf) goto L_84a350;
L_84a1b9: /* 84a1b9: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 84a1bd: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 84a1c1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a1c3: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 84a1c7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a1ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a1cd: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a1d1: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 84a1d5: mov eax, esp */
  eax = esp;
/* 84a1d7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a1d9: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 84a1dd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a1e0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a1e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a1e6: mov edx, esi */
  edx = esi;
/* 84a1e8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a1ea: mov eax, esp */
  eax = esp;
/* 84a1ec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a1ee: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a1f1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a1f4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a1f7: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a1fb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a1fe: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a204u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a204: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a206: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 84a20d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a210: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 84a217: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a21a: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 84a221: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a224: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 84a228: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 84a22f: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a233: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a236: mov eax, esp */
  eax = esp;
/* 84a238: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a23a: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 84a23e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a241: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a244: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 84a248: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 84a24c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a24f: mov edx, esp */
  edx = esp;
/* 84a251: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a253: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 84a257: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a25a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a25d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a260: mov ecx, esi */
  ecx = esi;
/* 84a262: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a264: mov edx, esp */
  edx = esp;
/* 84a266: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a268: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a26b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a26e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a271: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a274: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a278: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a27eu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a27e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a280: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 84a287: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a28a: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 84a291: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a294: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 84a29b: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a29e: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 84a2a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2a5: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 84a2ac: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 84a2b0: mov ecx, esp */
  ecx = esp;
/* 84a2b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a2b4: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 84a2b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a2bb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a2be: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a2c2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 84a2c6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2c9: mov eax, esp */
  eax = esp;
/* 84a2cb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a2cd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a2d0: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a2d4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a2d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2da: mov edx, esi */
  edx = esi;
/* 84a2dc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a2de: mov eax, esp */
  eax = esp;
/* 84a2e0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a2e2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a2e5: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a2e8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a2eb: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a2ef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a2f2: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a2f8u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a2f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a2fa: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a301: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a304: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a30b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a30e: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a315: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a318: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 84a31c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a31f: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a326: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a32a: mov eax, esp */
  eax = esp;
/* 84a32c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a32e: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 84a332: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a335: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a338: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 84a33c: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 84a340: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a343: mov edx, esp */
  edx = esp;
/* 84a345: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a347: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 84a34b: jmp 0x84a4e2 */
  goto L_84a4e2;
L_84a350: /* 84a350: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 84a354: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 84a358: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a35a: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 84a35e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a361: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a364: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 84a368: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a36c: mov eax, esp */
  eax = esp;
/* 84a36e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a370: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 84a374: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a377: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a37a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a37d: mov edx, esi */
  edx = esi;
/* 84a37f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a381: mov eax, esp */
  eax = esp;
/* 84a383: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a385: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a388: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a38b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a38e: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a392: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a395: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a39bu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a39b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a39d: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 84a3a4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a3a7: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 84a3ae: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a3b1: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 84a3b8: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a3bb: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 84a3bf: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 84a3c6: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 84a3ca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3cd: mov eax, esp */
  eax = esp;
/* 84a3cf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a3d1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 84a3d5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a3d8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a3db: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 84a3df: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 84a3e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3e6: mov edx, esp */
  edx = esp;
/* 84a3e8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a3ea: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 84a3ee: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a3f1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a3f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3f7: mov ecx, esi */
  ecx = esi;
/* 84a3f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a3fb: mov edx, esp */
  edx = esp;
/* 84a3fd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a3ff: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a402: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a405: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a408: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a40b: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a40f: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a415u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a415: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a417: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 84a41e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a421: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 84a428: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a42b: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 84a432: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a435: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 84a439: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a43c: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 84a443: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 84a447: mov ecx, esp */
  ecx = esp;
/* 84a449: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a44b: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 84a44f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a452: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a455: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 84a459: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a45d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a460: mov eax, esp */
  eax = esp;
/* 84a462: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a464: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a467: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 84a46b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a46e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a471: mov edx, esi */
  edx = esi;
/* 84a473: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a475: mov eax, esp */
  eax = esp;
/* 84a477: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a479: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a47c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a47f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a482: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a486: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a489: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a48fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a48f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a491: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a498: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a49b: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a4a2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a4a5: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a4ac: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a4af: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a4b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4b6: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a4bd: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a4c1: mov eax, esp */
  eax = esp;
/* 84a4c3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a4c5: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a4c9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a4cc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a4cf: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 84a4d3: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 84a4d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4da: mov edx, esp */
  edx = esp;
/* 84a4dc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a4de: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
L_84a4e2: /* 84a4e2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a4e5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a4e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4eb: mov ecx, esi */
  ecx = esi;
/* 84a4ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a4ef: mov edx, esp */
  edx = esp;
/* 84a4f1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a4f3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a4f6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a4f9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a4fc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a4ff: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a503: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a509u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a509: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a50b: mov dword ptr [esp + 0xd8], edx */
  W32((uint32_t)(esp + 0xd8u), edx);
/* 84a512: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a515: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 84a51c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a51f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84a522: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a529: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a52c: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 84a533: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x84a538u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 84a538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a53a: jne 0x84a0c0 */
  if (!zf) goto L_84a0c0;
L_84a540: /* 84a540: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 84a546: mov ecx, dword ptr [ebx + 0x1bc] */
  ecx = R32((uint32_t)(ebx + 0x1bcu));
/* 84a54c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 84a54f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 84a555: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 84a55c: xor edx, edx */
  edx = 0;
/* 84a55e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84a560: jne 0x84a567 */
  if (!zf) goto L_84a567;
L_84a562: /* 84a562: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 84a565: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_84a567: /* 84a567: test byte ptr [eax + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84a56e: je 0x84a5af */
  if (zf) goto L_84a5af;
L_84a570: /* 84a570: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84a573: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 84a576: test dword ptr [ecx + 0x534], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a580: je 0x84a5af */
  if (zf) goto L_84a5af;
L_84a582: /* 84a582: fld dword ptr [ecx + 0x614] */
  { double v = F32((uint32_t)(ecx + 0x614u)); FPUSH(v); }
/* 84a588: fld dword ptr [eax + 0x380] */
  { double v = F32((uint32_t)(eax + 0x380u)); FPUSH(v); }
/* 84a58e: fst dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0);
/* 84a595: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 84a597: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84a599: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84a59c: jne 0x84a5a9 */
  if (!zf) goto L_84a5a9;
L_84a59e: /* 84a59e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 84a5a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84a5a7: jmp 0x84a5b7 */
  goto L_84a5b7;
L_84a5a9: /* 84a5a9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 84a5ad: jmp 0x84a5bb */
  goto L_84a5bb;
L_84a5af: /* 84a5af: mov ecx, dword ptr [0xcfab14] */
  ecx = R32((uint32_t)(0xcfab14u));
/* 84a5b5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_84a5b7: /* 84a5b7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_84a5bb: /* 84a5bb: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 84a5c0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a5c2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 84a5c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84a5c7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a5ca: mov eax, esp */
  eax = esp;
/* 84a5cc: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 84a5d0: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 84a5d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84a5d4: mov ecx, ebx */
  ecx = ebx;
/* 84a5d6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84a5d8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a5db: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a5de: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84a5e3u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84a5e3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 84a5e6: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 84a5e9: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 84a5f0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 84a5f3: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 84a5f6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a5f8: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 84a5fa: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 84a601: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 84a608: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 84a60f: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x84a615u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 84a615: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 84a619: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 84a61d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a621: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 84a625: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 84a629: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 84a62d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a631: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 84a638: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 84a63c: mov dword ptr [esp + 0xe8], eax */
  W32((uint32_t)(esp + 0xe8u), eax);
/* 84a643: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a647: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 84a64e: mov dword ptr [esp + 0x2a8], 5 */
  W32((uint32_t)(esp + 0x2a8u), 0x5u);
/* 84a659: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 84a660: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a662: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 84a664: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 84a668: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 84a66b: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 84a672: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 84a675: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a677: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 84a67b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a67d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 84a681: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84a683: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 84a687: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 84a68b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84a68d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 84a691: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 84a695: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 84a69c: jmp 0x84a0cb */
  goto L_84a0cb;
}

void f_84a126(void) {
  LOAD_REGS();
  goto L_84a126;
L_84a0c0: /* 84a0c0: mov dword ptr [esp + 0x2a8], 4 */
  W32((uint32_t)(esp + 0x2a8u), 0x4u);
L_84a0cb: /* 84a0cb: mov esi, dword ptr [esp + 0x2b0] */
  esi = R32((uint32_t)(esp + 0x2b0u));
/* 84a0d2: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 84a0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84a0da: mov ecx, esi */
  ecx = esi;
/* 84a0dc: call 0x6c8cc4 */
  esp -= 4; W32(esp, 0x84a0e1u); SPILL(); f_6c8cc4(); if (g_unwind) return; RELOAD();
/* 84a0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84a0e2: mov eax, esi */
  eax = esi;
/* 84a0e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84a0e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84a0e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84a0e7: add esp, 0x29c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x29cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84a0ed: ret 4 */
  esp += 8; SPILL(); return;
L_84a126: /* 84a126: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 84a12d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84a130: /* 84a130: fld dword ptr [esp + ebp*4 + 0x14] */
  { double v = F32((uint32_t)(esp + ebp*4 + 0x14u)); FPUSH(v); }
/* 84a134: xor esi, esi */
  esi = 0;
/* 84a136: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 84a13d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84a140: /* 84a140: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 84a145: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a147: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 84a14e: fld dword ptr [esp + esi*4 + 0x14] */
  { double v = F32((uint32_t)(esp + esi*4 + 0x14u)); FPUSH(v); }
/* 84a152: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a155: mov eax, esp */
  eax = esp;
/* 84a157: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 84a15a: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 84a15e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a160: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84a161: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 84a164: mov ecx, ebx */
  ecx = ebx;
/* 84a166: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 84a16d: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84a172u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84a172: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a174: mov ecx, edi */
  ecx = edi;
/* 84a176: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a178: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a17b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 84a17e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84a181: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84a182: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84a185: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84a188: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 84a18b: jl 0x84a140 */
  if ((sf != of)) goto L_84a140;
L_84a18d: /* 84a18d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 84a18e: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84a191: jl 0x84a130 */
  if ((sf != of)) goto L_84a130;
L_84a193: /* 84a193: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 84a19a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a19d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84a1a3: mov ecx, esp */
  ecx = esp;
/* 84a1a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a1a8: lea esi, [ebx + 0x194] */
  esi = (uint32_t)(ebx + 0x194u);
/* 84a1ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84a1b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84a1b3: jp 0x84a350 */
  if (pf) goto L_84a350;
L_84a1b9: /* 84a1b9: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 84a1bd: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 84a1c1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a1c3: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 84a1c7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a1ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a1cd: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a1d1: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 84a1d5: mov eax, esp */
  eax = esp;
/* 84a1d7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a1d9: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 84a1dd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a1e0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a1e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a1e6: mov edx, esi */
  edx = esi;
/* 84a1e8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a1ea: mov eax, esp */
  eax = esp;
/* 84a1ec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a1ee: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a1f1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a1f4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a1f7: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a1fb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a1fe: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a204u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a204: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a206: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 84a20d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a210: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 84a217: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a21a: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 84a221: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a224: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 84a228: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 84a22f: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a233: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a236: mov eax, esp */
  eax = esp;
/* 84a238: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a23a: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 84a23e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a241: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a244: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 84a248: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 84a24c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a24f: mov edx, esp */
  edx = esp;
/* 84a251: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a253: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 84a257: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a25a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a25d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a260: mov ecx, esi */
  ecx = esi;
/* 84a262: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a264: mov edx, esp */
  edx = esp;
/* 84a266: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a268: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a26b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a26e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a271: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a274: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a278: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a27eu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a27e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a280: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 84a287: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a28a: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 84a291: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a294: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 84a29b: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a29e: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 84a2a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2a5: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 84a2ac: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 84a2b0: mov ecx, esp */
  ecx = esp;
/* 84a2b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a2b4: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 84a2b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a2bb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a2be: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a2c2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 84a2c6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2c9: mov eax, esp */
  eax = esp;
/* 84a2cb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a2cd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a2d0: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a2d4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a2d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a2da: mov edx, esi */
  edx = esi;
/* 84a2dc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a2de: mov eax, esp */
  eax = esp;
/* 84a2e0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a2e2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a2e5: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a2e8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a2eb: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a2ef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a2f2: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a2f8u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a2f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a2fa: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a301: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a304: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a30b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a30e: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a315: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a318: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 84a31c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a31f: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a326: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a32a: mov eax, esp */
  eax = esp;
/* 84a32c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a32e: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 84a332: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a335: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a338: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 84a33c: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 84a340: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a343: mov edx, esp */
  edx = esp;
/* 84a345: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a347: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 84a34b: jmp 0x84a4e2 */
  goto L_84a4e2;
L_84a350: /* 84a350: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 84a354: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 84a358: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a35a: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 84a35e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a361: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a364: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 84a368: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 84a36c: mov eax, esp */
  eax = esp;
/* 84a36e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a370: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 84a374: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a377: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a37a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a37d: mov edx, esi */
  edx = esi;
/* 84a37f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a381: mov eax, esp */
  eax = esp;
/* 84a383: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a385: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a388: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a38b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a38e: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a392: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a395: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a39bu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a39b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a39d: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 84a3a4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a3a7: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 84a3ae: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a3b1: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 84a3b8: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a3bb: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 84a3bf: mov dword ptr [esp + 0xb4], edx */
  W32((uint32_t)(esp + 0xb4u), edx);
/* 84a3c6: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 84a3ca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3cd: mov eax, esp */
  eax = esp;
/* 84a3cf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a3d1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 84a3d5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a3d8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a3db: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 84a3df: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 84a3e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3e6: mov edx, esp */
  edx = esp;
/* 84a3e8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a3ea: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 84a3ee: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a3f1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a3f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a3f7: mov ecx, esi */
  ecx = esi;
/* 84a3f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a3fb: mov edx, esp */
  edx = esp;
/* 84a3fd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a3ff: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a402: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a405: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a408: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a40b: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a40f: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a415u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a415: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a417: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 84a41e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a421: mov dword ptr [esp + 0xbc], ecx */
  W32((uint32_t)(esp + 0xbcu), ecx);
/* 84a428: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a42b: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 84a432: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a435: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 84a439: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a43c: mov dword ptr [esp + 0xd0], eax */
  W32((uint32_t)(esp + 0xd0u), eax);
/* 84a443: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 84a447: mov ecx, esp */
  ecx = esp;
/* 84a449: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84a44b: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 84a44f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84a452: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84a455: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 84a459: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a45d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a460: mov eax, esp */
  eax = esp;
/* 84a462: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a464: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a467: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 84a46b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a46e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a471: mov edx, esi */
  edx = esi;
/* 84a473: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84a475: mov eax, esp */
  eax = esp;
/* 84a477: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a479: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84a47c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84a47f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84a482: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a486: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a489: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a48fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a48f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84a491: mov dword ptr [esp + 0xc8], ecx */
  W32((uint32_t)(esp + 0xc8u), ecx);
/* 84a498: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84a49b: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 84a4a2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 84a4a5: mov dword ptr [esp + 0xd0], ecx */
  W32((uint32_t)(esp + 0xd0u), ecx);
/* 84a4ac: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 84a4af: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 84a4b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4b6: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a4bd: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 84a4c1: mov eax, esp */
  eax = esp;
/* 84a4c3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84a4c5: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 84a4c9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a4cc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84a4cf: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 84a4d3: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 84a4d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4da: mov edx, esp */
  edx = esp;
/* 84a4dc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a4de: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
L_84a4e2: /* 84a4e2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84a4e5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84a4e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a4eb: mov ecx, esi */
  ecx = esi;
/* 84a4ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84a4ef: mov edx, esp */
  edx = esp;
/* 84a4f1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84a4f3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84a4f6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84a4f9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84a4fc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84a4ff: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 84a503: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84a509u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84a509: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84a50b: mov dword ptr [esp + 0xd8], edx */
  W32((uint32_t)(esp + 0xd8u), edx);
/* 84a512: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84a515: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 84a51c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84a51f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84a522: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 84a529: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84a52c: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 84a533: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x84a538u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 84a538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a53a: jne 0x84a0c0 */
  if (!zf) goto L_84a0c0;
L_84a540: /* 84a540: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 84a546: mov ecx, dword ptr [ebx + 0x1bc] */
  ecx = R32((uint32_t)(ebx + 0x1bcu));
/* 84a54c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 84a54f: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 84a555: mov eax, dword ptr [eax + edx*8 + 0x11c] */
  eax = R32((uint32_t)(eax + edx*8 + 0x11cu));
/* 84a55c: xor edx, edx */
  edx = 0;
/* 84a55e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84a560: jne 0x84a567 */
  if (!zf) goto L_84a567;
L_84a562: /* 84a562: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 84a565: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_84a567: /* 84a567: test byte ptr [eax + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84a56e: je 0x84a5af */
  if (zf) goto L_84a5af;
L_84a570: /* 84a570: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84a573: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 84a576: test dword ptr [ecx + 0x534], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a580: je 0x84a5af */
  if (zf) goto L_84a5af;
L_84a582: /* 84a582: fld dword ptr [ecx + 0x614] */
  { double v = F32((uint32_t)(ecx + 0x614u)); FPUSH(v); }
/* 84a588: fld dword ptr [eax + 0x380] */
  { double v = F32((uint32_t)(eax + 0x380u)); FPUSH(v); }
/* 84a58e: fst dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0);
/* 84a595: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 84a597: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84a599: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84a59c: jne 0x84a5a9 */
  if (!zf) goto L_84a5a9;
L_84a59e: /* 84a59e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 84a5a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84a5a7: jmp 0x84a5b7 */
  goto L_84a5b7;
L_84a5a9: /* 84a5a9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 84a5ad: jmp 0x84a5bb */
  goto L_84a5bb;
L_84a5af: /* 84a5af: mov ecx, dword ptr [0xcfab14] */
  ecx = R32((uint32_t)(0xcfab14u));
/* 84a5b5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_84a5b7: /* 84a5b7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_84a5bb: /* 84a5bb: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 84a5c0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a5c2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 84a5c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84a5c7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84a5ca: mov eax, esp */
  eax = esp;
/* 84a5cc: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 84a5d0: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 84a5d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84a5d4: mov ecx, ebx */
  ecx = ebx;
/* 84a5d6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84a5d8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84a5db: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84a5de: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84a5e3u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84a5e3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 84a5e6: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 84a5e9: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 84a5f0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 84a5f3: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 84a5f6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84a5f8: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 84a5fa: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 84a601: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 84a608: fstp dword ptr [esp + 0xa8] */
  WF32((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* 84a60f: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x84a615u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 84a615: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 84a619: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 84a61d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a621: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 84a625: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 84a629: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 84a62d: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a631: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 84a638: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 84a63c: mov dword ptr [esp + 0xe8], eax */
  W32((uint32_t)(esp + 0xe8u), eax);
/* 84a643: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 84a647: mov dword ptr [esp + 0xec], ecx */
  W32((uint32_t)(esp + 0xecu), ecx);
/* 84a64e: mov dword ptr [esp + 0x2a8], 5 */
  W32((uint32_t)(esp + 0x2a8u), 0x5u);
/* 84a659: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 84a660: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a662: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 84a664: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 84a668: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 84a66b: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 84a672: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 84a675: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a677: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 84a67b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84a67d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 84a681: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84a683: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 84a687: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 84a68b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84a68d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 84a691: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 84a695: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 84a69c: jmp 0x84a0cb */
  goto L_84a0cb;
}

void f_84a980(void) {
  LOAD_REGS();
L_84a980: /* 84a980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84a981: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 84a985: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84a986: mov edi, ecx */
  edi = ecx;
/* 84a988: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 84a98b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 84a98e: test byte ptr [ecx + 0x534], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x534u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84a995: jne 0x84a9a8 */
  if (!zf) goto L_84a9a8;
L_84a997: /* 84a997: push 0xb6cd28 */
  { uint32_t v = 0xb6cd28u; esp -= 4; W32(esp, v); }
/* 84a99c: mov ecx, esi */
  ecx = esi;
/* 84a99e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84a9a4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84a9a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a9a6: je 0x84a9d7 */
  if (zf) goto L_84a9d7;
L_84a9a8: /* 84a9a8: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 84a9ab: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84a9ae: mov eax, dword ptr [eax + 0x534] */
  eax = R32((uint32_t)(eax + 0x534u));
/* 84a9b4: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 84a9b6: js 0x84a9bf */
  if (sf) goto L_84a9bf;
L_84a9b8: /* 84a9b8: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 84a9bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a9bd: jne 0x84a9d7 */
  if (!zf) goto L_84a9d7;
L_84a9bf: /* 84a9bf: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a9c4: jne 0x84a9de */
  if (!zf) goto L_84a9de;
L_84a9c6: /* 84a9c6: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 84a9cb: mov ecx, esi */
  ecx = esi;
/* 84a9cd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84a9d3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84a9d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a9d5: je 0x84a9de */
  if (zf) goto L_84a9de;
L_84a9d7: /* 84a9d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84a9d8: xor eax, eax */
  eax = 0;
/* 84a9da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84a9db: ret 4 */
  esp += 8; SPILL(); return;
L_84a9de: /* 84a9de: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 84a9e1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84a9e4: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 84a9ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 84a9ec: jns 0x84aa09 */
  if (!sf) goto L_84aa09;
L_84a9ee: /* 84a9ee: push 0xb6f6a8 */
  { uint32_t v = 0xb6f6a8u; esp -= 4; W32(esp, v); }
/* 84a9f3: mov ecx, esi */
  ecx = esi;
/* 84a9f5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84a9fbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84a9fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84a9fd: je 0x84aa09 */
  if (zf) goto L_84aa09;
L_84a9ff: /* 84a9ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84aa00: mov eax, 1 */
  eax = 0x1u;
/* 84aa05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84aa06: ret 4 */
  esp += 8; SPILL(); return;
L_84aa09: /* 84aa09: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 84aa0e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84aa11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84aa12: jne 0x84aadb */
  if (!zf) goto L_84aadb;
L_84aa18: /* 84aa18: test byte ptr [esi + 0x80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa1f: je 0x84aa30 */
  if (zf) goto L_84aa30;
L_84aa21: /* 84aa21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84aa22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84aa23: mov byte ptr [esi + 0x51], 0 */
  W8((uint32_t)(esi + 0x51u), 0x0u);
/* 84aa27: mov eax, 1 */
  eax = 0x1u;
/* 84aa2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84aa2d: ret 4 */
  esp += 8; SPILL(); return;
L_84aa30: /* 84aa30: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 84aa33: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84aa36: test dword ptr [edx + 0x534], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa40: je 0x84aa51 */
  if (zf) goto L_84aa51;
L_84aa42: /* 84aa42: mov ecx, esi */
  ecx = esi;
/* 84aa44: call 0x6c4a0c */
  esp -= 4; W32(esp, 0x84aa49u); SPILL(); f_6c4a0c(); if (g_unwind) return; RELOAD();
/* 84aa49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa4b: jne 0x84ab8e */
  if (!zf) goto L_84ab8e;
L_84aa51: /* 84aa51: mov ebx, dword ptr [esi + 0x80] */
  ebx = R32((uint32_t)(esi + 0x80u));
/* 84aa57: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 84aa59: js 0x84aad3 */
  if (sf) goto L_84aad3;
L_84aa5b: /* 84aa5b: test ebx, 0x10000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa61: je 0x84aa6a */
  if (zf) goto L_84aa6a;
L_84aa63: /* 84aa63: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 84aa66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa68: je 0x84aad3 */
  if (zf) goto L_84aad3;
L_84aa6a: /* 84aa6a: mov eax, dword ptr [edi + 0x1c4] */
  eax = R32((uint32_t)(edi + 0x1c4u));
/* 84aa70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84aa71: mov ecx, esi */
  ecx = esi;
/* 84aa73: call 0x6cbbc7 */
  esp -= 4; W32(esp, 0x84aa78u); SPILL(); f_6cbbc7(); if (g_unwind) return; RELOAD();
/* 84aa78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa7a: je 0x84aa99 */
  if (zf) goto L_84aa99;
L_84aa7c: /* 84aa7c: test dword ptr [esi + 0x84], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa86: je 0x84aaa7 */
  if (zf) goto L_84aaa7;
L_84aa88: /* 84aa88: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 84aa8b: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84aa8e: test byte ptr [edx + 0x4c4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84aa95: je 0x84aad3 */
  if (zf) goto L_84aad3;
L_84aa97: /* 84aa97: jmp 0x84aaa7 */
  goto L_84aaa7;
L_84aa99: /* 84aa99: mov eax, ebx */
  eax = ebx;
/* 84aa9b: shr eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 84aa9e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 84aaa1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 84aaa5: jne 0x84aad3 */
  if (!zf) goto L_84aad3;
L_84aaa7: /* 84aaa7: test bh, 0x40 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84aaaa: je 0x84aabc */
  if (zf) goto L_84aabc;
L_84aaac: /* 84aaac: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 84aab2: mov al, byte ptr [ecx + 0x448] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x448u))) & 0xffu);
/* 84aab8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84aaba: je 0x84aad3 */
  if (zf) goto L_84aad3;
L_84aabc: /* 84aabc: test bh, bh */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ebx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 84aabe: jns 0x84ab4c */
  if (!sf) goto L_84ab4c;
L_84aac4: /* 84aac4: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 84aaca: cmp byte ptr [edx + 0x448], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x448u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84aad1: je 0x84ab4c */
  if (zf) goto L_84ab4c;
L_84aad3: /* 84aad3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84aad4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84aad5: xor eax, eax */
  eax = 0;
/* 84aad7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84aad8: ret 4 */
  esp += 8; SPILL(); return;
L_84aadb: /* 84aadb: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 84aae1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aae3: je 0x84aaf3 */
  if (zf) goto L_84aaf3;
L_84aae5: /* 84aae5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84aae7: mov ecx, esi */
  ecx = esi;
/* 84aae9: call dword ptr [eax + 0x17c] */
  { uint32_t t = R32((uint32_t)(eax + 0x17cu)); esp -= 4; W32(esp, 0x84aaefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84aaef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aaf1: jne 0x84ab00 */
  if (!zf) goto L_84ab00;
L_84aaf3: /* 84aaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84aaf4: call 0x6c40c0 */
  esp -= 4; W32(esp, 0x84aaf9u); SPILL(); f_6c40c0(); if (g_unwind) return; RELOAD();
/* 84aaf9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84aafc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84aafe: je 0x84ab12 */
  if (zf) goto L_84ab12;
L_84ab00: /* 84ab00: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 84ab03: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84ab06: test dword ptr [edx + 0x534], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab10: je 0x84aad3 */
  if (zf) goto L_84aad3;
L_84ab12: /* 84ab12: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 84ab15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab17: je 0x84ab38 */
  if (zf) goto L_84ab38;
L_84ab19: /* 84ab19: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84ab1b: mov ecx, esi */
  ecx = esi;
/* 84ab1d: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x84ab23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ab23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab25: je 0x84ab38 */
  if (zf) goto L_84ab38;
L_84ab27: /* 84ab27: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 84ab2a: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84ab2d: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 84ab33: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab36: je 0x84aad3 */
  if (zf) goto L_84aad3;
L_84ab38: /* 84ab38: test dword ptr [esi + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab42: je 0x84ab4c */
  if (zf) goto L_84ab4c;
L_84ab44: /* 84ab44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84ab45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84ab46: xor eax, eax */
  eax = 0;
/* 84ab48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84ab49: ret 4 */
  esp += 8; SPILL(); return;
L_84ab4c: /* 84ab4c: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 84ab4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab51: je 0x84ab8e */
  if (zf) goto L_84ab8e;
L_84ab53: /* 84ab53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ab55: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 84ab59: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84ab5fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84ab5f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 84ab63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ab64: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 84ab6a: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x84ab70u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 84ab70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab72: je 0x84ab8e */
  if (zf) goto L_84ab8e;
L_84ab74: /* 84ab74: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 84ab77: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 84ab7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ab7e: call 0x6ca8ad */
  esp -= 4; W32(esp, 0x84ab83u); SPILL(); f_6ca8ad(); if (g_unwind) return; RELOAD();
/* 84ab83: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84ab86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ab88: jne 0x84aad3 */
  if (!zf) goto L_84aad3;
L_84ab8e: /* 84ab8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84ab8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84ab90: mov eax, 1 */
  eax = 0x1u;
/* 84ab95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84ab96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_84ac30(void) {
  LOAD_REGS();
L_84ac30: /* 84ac30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84ac31: mov ebp, esp */
  ebp = esp;
/* 84ac33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84ac35: push 0x9d3bf8 */
  { uint32_t v = 0x9d3bf8u; esp -= 4; W32(esp, v); }
/* 84ac3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84ac40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ac41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84ac48: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ac4b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 84ac4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84ac4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84ac50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84ac51: mov esi, ecx */
  esi = ecx;
/* 84ac53: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84ac56: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84ac59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ac5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ac5b: mov ecx, esi */
  ecx = esi;
/* 84ac5d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 84ac60: call 0x6c33d7 */
  esp -= 4; W32(esp, 0x84ac65u); SPILL(); f_6c33d7(); if (g_unwind) return; RELOAD();
/* 84ac65: lea ecx, [esi + 0x1d4] */
  ecx = (uint32_t)(esi + 0x1d4u);
/* 84ac6b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84ac72: mov dword ptr [esi], 0x9f6fe0 */
  W32((uint32_t)(esi), 0x9f6fe0u);
/* 84ac78: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x84ac7eu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 84ac7e: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 84ac81: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 84ac84: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 84ac87: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ac8a: mov edx, esp */
  edx = esp;
/* 84ac8c: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 84ac8e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84ac91: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84ac94: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 84ac97: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 84ac9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ac9e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 84aca1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84aca2: mov ecx, dword ptr [esi + 0x1c0] */
  ecx = R32((uint32_t)(esi + 0x1c0u));
/* 84aca8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84acac: call 0x6c9192 */
  esp -= 4; W32(esp, 0x84acb1u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 84acb1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 84acb4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 84acb7: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 84acbd: mov edx, edi */
  edx = edi;
/* 84acbf: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 84acc1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84acc4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84acc7: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 84acca: mov dword ptr [esi + 0x1c4], edx */
  W32((uint32_t)(esi + 0x1c4u), edx);
/* 84acd0: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 84acd5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84acd8: je 0x84ace6 */
  if (zf) goto L_84ace6;
L_84acda: /* 84acda: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84acdd: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x84ace2u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 84ace2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ace4: jne 0x84ad2a */
  if (!zf) goto L_84ad2a;
L_84ace6: /* 84ace6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84ace9: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 84acef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84acf1: jne 0x84ad2a */
  if (!zf) goto L_84ad2a;
L_84acf3: /* 84acf3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 84acf5: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 84acf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84acfb: mov edx, esp */
  edx = esp;
/* 84acfd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84acff: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 84ad02: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84ad05: mov ecx, dword ptr [esi + 0x1c4] */
  ecx = R32((uint32_t)(esi + 0x1c4u));
/* 84ad0b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84ad0e: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 84ad14: mov ecx, dword ptr [esi + 0x1c0] */
  ecx = R32((uint32_t)(esi + 0x1c0u));
/* 84ad1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ad1b: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 84ad1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ad1f: call 0x6c9192 */
  esp -= 4; W32(esp, 0x84ad24u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 84ad24: movzx eax, byte ptr [eax + 8] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x8u)));
/* 84ad28: jmp 0x84ad2c */
  goto L_84ad2c;
L_84ad2a: /* 84ad2a: xor eax, eax */
  eax = 0;
L_84ad2c: /* 84ad2c: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 84ad2f: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 84ad32: mov dword ptr [esi + 0x1d4], ecx */
  W32((uint32_t)(esi + 0x1d4u), ecx);
/* 84ad38: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 84ad3b: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 84ad41: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 84ad44: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 84ad4a: mov dword ptr [esi + 0x1d8], edx */
  W32((uint32_t)(esi + 0x1d8u), edx);
/* 84ad50: mov ecx, esi */
  ecx = esi;
/* 84ad52: mov dword ptr [esi + 0x1dc], eax */
  W32((uint32_t)(esi + 0x1dcu), eax);
/* 84ad58: call 0x6c90e3 */
  esp -= 4; W32(esp, 0x84ad5du); SPILL(); f_6c90e3(); if (g_unwind) return; RELOAD();
/* 84ad5d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84ad60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84ad61: mov eax, esi */
  eax = esi;
/* 84ad63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84ad64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84ad6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84ad6c: mov esp, ebp */
  esp = ebp;
/* 84ad6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84ad6f: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_84ad72(void) {
  LOAD_REGS();
L_84ad72: /* 84ad72: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 84ad75: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84ad7a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 84ad7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ad7e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84ad81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84ad86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84ad86(); return;
}

void f_84ad86(void) {
  LOAD_REGS();
L_84ad86: /* 84ad86: push 0xa16898 */
  { uint32_t v = 0xa16898u; esp -= 4; W32(esp, v); }
/* 84ad8b: push 0xae44d8 */
  { uint32_t v = 0xae44d8u; esp -= 4; W32(esp, v); }
/* 84ad90: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84ad96u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84ad96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84ad99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ad9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ad9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84ada2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84ada2: guest_badaddr(0x84ada2); return;
}

void f_84ae10(void) {
  LOAD_REGS();
L_84ae10: /* 84ae10: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 84ae14: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 84ae18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84ae19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ae1a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 84ae1e: mov esi, ecx */
  esi = ecx;
/* 84ae20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ae23: mov ecx, esp */
  ecx = esp;
/* 84ae25: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84ae27: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 84ae2b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84ae2e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84ae31: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 84ae35: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 84ae39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ae3c: mov eax, esp */
  eax = esp;
/* 84ae3e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84ae40: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 84ae44: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84ae47: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 84ae4b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84ae4e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 84ae52: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 84ae56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ae57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ae58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ae59: mov ecx, esi */
  ecx = esi;
/* 84ae5b: call 0x6cb2cb */
  esp -= 4; W32(esp, 0x84ae60u); SPILL(); f_6cb2cb(); if (g_unwind) return; RELOAD();
/* 84ae60: mov dword ptr [esi], 0x9f7024 */
  W32((uint32_t)(esi), 0x9f7024u);
/* 84ae66: mov eax, esi */
  eax = esi;
/* 84ae68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84ae69: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_84ae90(void) {
  LOAD_REGS();
L_84ae90: /* 84ae90: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 84ae94: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 84ae98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84ae99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ae9a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 84ae9e: mov esi, ecx */
  esi = ecx;
/* 84aea0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84aea3: mov ecx, esp */
  ecx = esp;
/* 84aea5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84aea7: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 84aeab: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84aeae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84aeb1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 84aeb5: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 84aeb9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84aebc: mov eax, esp */
  eax = esp;
/* 84aebe: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 84aec0: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 84aec4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84aec7: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 84aecb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84aece: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 84aed2: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 84aed6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84aed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84aed8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84aed9: mov ecx, esi */
  ecx = esi;
/* 84aedb: call 0x6cb2cb */
  esp -= 4; W32(esp, 0x84aee0u); SPILL(); f_6cb2cb(); if (g_unwind) return; RELOAD();
/* 84aee0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 84aee4: mov dword ptr [esi], 0x9f7068 */
  W32((uint32_t)(esi), 0x9f7068u);
/* 84aeea: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* 84aef0: mov eax, esi */
  eax = esi;
/* 84aef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84aef3: ret 0x2c */
  esp += 48; SPILL(); return;
}

void f_84af20(void) {
  LOAD_REGS();
L_84af20: /* 84af20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84af22: push 0x9d3c69 */
  { uint32_t v = 0x9d3c69u; esp -= 4; W32(esp, v); }
/* 84af27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84af2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84af2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84af35: sub esp, 0x250 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x250u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84af3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84af3c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84af3d: mov ebp, dword ptr [esp + 0x268] */
  ebp = R32((uint32_t)(esp + 0x268u));
/* 84af44: lea eax, [ebp + 0x194] */
  eax = (uint32_t)(ebp + 0x194u);
/* 84af4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 84af4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84af50: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84af53: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84af56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84af57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84af58: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 84af5c: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 84af60: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 84af64: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 84af6c: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 84af74: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 84af7c: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 84af84: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 84af8c: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 84af94: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 84af9c: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 84afa4: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 84afac: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 84afb4: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* 84afbc: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 84afc4: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 84afc8: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 84afcc: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 84afd0: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* 84afd8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84afdd: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 84afe1: lea edi, [esp + 0x220] */
  edi = (uint32_t)(esp + 0x220u);
/* 84afe8: mov dword ptr [esp + 0x268], 0 */
  W32((uint32_t)(esp + 0x268u), 0x0u);
/* 84aff3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84aff5: mov ebx, dword ptr [esp + 0x274] */
  ebx = R32((uint32_t)(esp + 0x274u));
/* 84affc: mov eax, dword ptr [ebp + 0x1bc] */
  eax = R32((uint32_t)(ebp + 0x1bcu));
/* 84b002: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84b007: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 84b00b: lea edi, [esp + 0xa0] */
  edi = (uint32_t)(esp + 0xa0u);
/* 84b012: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84b014: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 84b01a: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 84b01d: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 84b020: mov ecx, dword ptr [ecx + ebx + 0x11c] */
  ecx = R32((uint32_t)(ecx + ebx + 0x11cu));
/* 84b027: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84b029: mov byte ptr [esp + 0x268], 1 */
  W8((uint32_t)(esp + 0x268u), 0x1u);
/* 84b031: jne 0x84b038 */
  if (!zf) goto L_84b038;
L_84b033: /* 84b033: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 84b036: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
L_84b038: /* 84b038: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84b03e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84b040: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b043: mov eax, esp */
  eax = esp;
/* 84b045: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84b047: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84b04a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84b04d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84b050: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84b053: lea ecx, [esp + 0x1ac] */
  ecx = (uint32_t)(esp + 0x1acu);
/* 84b05a: call 0x6c818e */
  esp -= 4; W32(esp, 0x84b05fu); SPILL(); f_6c818e(); if (g_unwind) return; RELOAD();
/* 84b05f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84b064: mov esi, eax */
  esi = eax;
/* 84b066: lea edi, [esp + 0x120] */
  edi = (uint32_t)(esp + 0x120u);
/* 84b06d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84b06f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84b074: mov esi, eax */
  esi = eax;
/* 84b076: lea edi, [esp + 0x1e0] */
  edi = (uint32_t)(esp + 0x1e0u);
/* 84b07d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84b07f: mov ecx, dword ptr [ebp + 0x1bc] */
  ecx = R32((uint32_t)(ebp + 0x1bcu));
/* 84b085: mov edx, dword ptr [ecx + 0x8c] */
  edx = R32((uint32_t)(ecx + 0x8cu));
/* 84b08b: mov ebx, dword ptr [edx + ebx + 0x11c] */
  ebx = R32((uint32_t)(edx + ebx + 0x11cu));
/* 84b092: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84b094: je 0x84b09a */
  if (zf) goto L_84b09a;
L_84b096: /* 84b096: mov eax, ebx */
  eax = ebx;
/* 84b098: jmp 0x84b09f */
  goto L_84b09f;
L_84b09a: /* 84b09a: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 84b09d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_84b09f: /* 84b09f: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 84b0a5: fchs  */
  ST0 = -ST0;
/* 84b0a7: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 84b0ad: fchs  */
  ST0 = -ST0;
/* 84b0af: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 84b0b5: mov dword ptr [esp + 0x60], 0x3f800000 */
  W32((uint32_t)(esp + 0x60u), 0x3f800000u);
/* 84b0bd: fchs  */
  ST0 = -ST0;
/* 84b0bf: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 84b0c7: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 84b0ce: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 84b0d6: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 84b0de: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 84b0e5: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 84b0ed: mov dword ptr [esp + 0x74], 0x3f800000 */
  W32((uint32_t)(esp + 0x74u), 0x3f800000u);
/* 84b0f5: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 84b0fc: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 84b104: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 84b10c: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 84b117: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 84b122: mov dword ptr [esp + 0x88], 0x3f800000 */
  W32((uint32_t)(esp + 0x88u), 0x3f800000u);
/* 84b12d: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 84b138: mov dword ptr [esp + 0x9c], 0x3f800000 */
  W32((uint32_t)(esp + 0x9cu), 0x3f800000u);
/* 84b143: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b146: mov edi, esp */
  edi = esp;
/* 84b148: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84b14d: lea esi, [esp + 0x220] */
  esi = (uint32_t)(esp + 0x220u);
/* 84b154: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84b156: lea ecx, [esp + 0x120] */
  ecx = (uint32_t)(esp + 0x120u);
/* 84b15d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84b15e: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 84b165: mov byte ptr [esp + 0x2ac], 4 */
  W8((uint32_t)(esp + 0x2acu), 0x4u);
/* 84b16d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x84b173u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 84b173: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b176: mov edi, esp */
  edi = esp;
/* 84b178: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84b17d: lea esi, [esp + 0xe0] */
  esi = (uint32_t)(esp + 0xe0u);
/* 84b184: lea edx, [esp + 0x1a0] */
  edx = (uint32_t)(esp + 0x1a0u);
/* 84b18b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84b18d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84b18e: mov ecx, eax */
  ecx = eax;
/* 84b190: mov byte ptr [esp + 0x2ac], 5 */
  W8((uint32_t)(esp + 0x2acu), 0x5u);
/* 84b198: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x84b19eu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 84b19e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b1a1: mov edi, esp */
  edi = esp;
/* 84b1a3: mov esi, eax */
  esi = eax;
/* 84b1a5: mov eax, dword ptr [esp + 0x2b4] */
  eax = R32((uint32_t)(esp + 0x2b4u));
/* 84b1ac: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84b1b1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84b1b3: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 84b1b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b1b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84b1b9: mov ecx, esi */
  ecx = esi;
/* 84b1bb: mov byte ptr [esp + 0x2b0], 6 */
  W8((uint32_t)(esp + 0x2b0u), 0x6u);
/* 84b1c3: call 0x6cbab9 */
  esp -= 4; W32(esp, 0x84b1c8u); SPILL(); f_6cbab9(); if (g_unwind) return; RELOAD();
/* 84b1c8: lea ecx, [esp + 0x160] */
  ecx = (uint32_t)(esp + 0x160u);
/* 84b1cf: mov byte ptr [esp + 0x268], 0xe */
  W8((uint32_t)(esp + 0x268u), 0xeu);
/* 84b1d7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84b1ddu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84b1dd: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 84b1e4: mov byte ptr [esp + 0x268], 0xd */
  W8((uint32_t)(esp + 0x268u), 0xdu);
/* 84b1ec: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84b1f2u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84b1f2: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 84b1f6: mov byte ptr [esp + 0x268], 0xc */
  W8((uint32_t)(esp + 0x268u), 0xcu);
/* 84b1fe: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84b204u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84b204: lea ecx, [esp + 0x120] */
  ecx = (uint32_t)(esp + 0x120u);
/* 84b20b: mov byte ptr [esp + 0x268], 0xb */
  W8((uint32_t)(esp + 0x268u), 0xbu);
/* 84b213: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84b219u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84b219: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
/* 84b220: mov byte ptr [esp + 0x268], 0xa */
  W8((uint32_t)(esp + 0x268u), 0xau);
/* 84b228: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84b22eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84b22e: mov byte ptr [esp + 0x268], 9 */
  W8((uint32_t)(esp + 0x268u), 0x9u);
/* 84b236: lea ecx, [esp + 0x220] */
  ecx = (uint32_t)(esp + 0x220u);
/* 84b23d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84b243u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84b243: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 84b247: mov byte ptr [esp + 0x268], 8 */
  W8((uint32_t)(esp + 0x268u), 0x8u);
/* 84b24f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84b255u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84b255: mov ecx, dword ptr [esp + 0x260] */
  ecx = R32((uint32_t)(esp + 0x260u));
/* 84b25c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84b25d: mov dword ptr [esi], 0x9f70ac */
  W32((uint32_t)(esi), 0x9f70acu);
/* 84b263: mov eax, esi */
  eax = esi;
/* 84b265: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84b266: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84b267: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84b26e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84b26f: add esp, 0x25c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x25cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84b275: ret 8 */
  esp += 12; SPILL(); return;
}

void f_84b360(void) {
  LOAD_REGS();
L_84b360: /* 84b360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84b361: mov ebp, esp */
  ebp = esp;
/* 84b363: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84b365: push 0x9d3c90 */
  { uint32_t v = 0x9d3c90u; esp -= 4; W32(esp, v); }
/* 84b36a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84b370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b371: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84b378: sub esp, 0x318 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x318u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b37e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84b37f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84b380: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84b381: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 84b384: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84b387: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84b38e: mov dword ptr [ebp - 0x1dc], 0xa167c4 */
  W32((uint32_t)(ebp + 0xfffffe24u), 0xa167c4u);
/* 84b398: mov edx, 4 */
  edx = 0x4u;
/* 84b39d: mov ecx, 0x18 */
  ecx = 0x18u;
/* 84b3a2: lea eax, [ebp - 0x1d8] */
  eax = (uint32_t)(ebp + 0xfffffe28u);
L_84b3a8: /* 84b3a8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 84b3a9: js 0x84b3af */
  if (sf) goto L_84b3af;
L_84b3ab: /* 84b3ab: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84b3ad: jmp 0x84b3a8 */
  goto L_84b3a8;
L_84b3af: /* 84b3af: mov ebx, dword ptr [0xcfa1b0] */
  ebx = R32((uint32_t)(0xcfa1b0u));
/* 84b3b5: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 84b3b8: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 84b3ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84b3bc: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 84b3c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84b3c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84b3c3: call 0x99c910 */
  esp -= 4; W32(esp, 0x84b3c8u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 84b3c8: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 84b3cd: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 84b3d0: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 84b3d3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 84b3d5: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 84b3db: adc edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 84b3de: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 84b3e1: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 84b3e4: mov dword ptr [ebp - 0x174], edx */
  W32((uint32_t)(ebp + 0xfffffe8cu), edx);
/* 84b3ea: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 84b3ed: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 84b3f3: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 84b3f6: fld qword ptr [eax + 0x138] */
  { double v = F64((uint32_t)(eax + 0x138u)); FPUSH(v); }
/* 84b3fc: fsub qword ptr [ecx + 0x704] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x704u)));
/* 84b402: fmul qword ptr [0xa16940] */
  ST0 = ST0 * (F64((uint32_t)(0xa16940u)));
/* 84b408: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84b40e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 84b410: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84b412: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84b415: jp 0x84b41f */
  if (pf) goto L_84b41f;
L_84b417: /* 84b417: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84b419: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_84b41f: /* 84b41f: mov edi, dword ptr [ebp - 0x5c] */
  edi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 84b422: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84b425: fstp dword ptr [edi + 0x70c] */
  WF32((uint32_t)(edi + 0x70cu), ST0); FPOP();
/* 84b42b: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 84b42e: mov eax, dword ptr [edx + 0x138] */
  eax = R32((uint32_t)(edx + 0x138u));
/* 84b434: mov dword ptr [edi + 0x704], eax */
  W32((uint32_t)(edi + 0x704u), eax);
/* 84b43a: mov ecx, dword ptr [edx + 0x13c] */
  ecx = R32((uint32_t)(edx + 0x13cu));
/* 84b440: xor esi, esi */
  esi = 0;
/* 84b442: mov dword ptr [edi + 0x708], ecx */
  W32((uint32_t)(edi + 0x708u), ecx);
/* 84b448: xor edx, edx */
  edx = 0;
/* 84b44a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_84b450: /* 84b450: cmp edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84b453: jge 0x84b487 */
  if ((sf == of)) goto L_84b487;
L_84b455: /* 84b455: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 84b458: lea ecx, [edi + eax*8] */
  ecx = (uint32_t)(edi + eax*8);
/* 84b45b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84b45e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84b460: je 0x84b484 */
  if (zf) goto L_84b484;
L_84b462: /* 84b462: fld dword ptr [eax + 0x2bc] */
  { double v = F32((uint32_t)(eax + 0x2bcu)); FPUSH(v); }
/* 84b468: fmul dword ptr [edi + 0x70c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x70cu)));
/* 84b46e: fsubr dword ptr [ecx + 0xc] */
  ST0 = (F32((uint32_t)(ecx + 0xcu))) - ST0;
/* 84b471: fst dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0);
/* 84b474: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84b47a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84b47c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84b47f: jp 0x84b484 */
  if (pf) goto L_84b484;
L_84b481: /* 84b481: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
L_84b484: /* 84b484: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 84b485: jmp 0x84b450 */
  goto L_84b450;
L_84b487: /* 84b487: xor esi, esi */
  esi = 0;
/* 84b489: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_84b490: /* 84b490: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84b493: jge 0x84b4af */
  if ((sf == of)) goto L_84b4af;
L_84b495: /* 84b495: mov eax, dword ptr [edi + 0x70c] */
  eax = R32((uint32_t)(edi + 0x70cu));
/* 84b49b: mov ecx, dword ptr [edi + esi*4 + 0x604] */
  ecx = R32((uint32_t)(edi + esi*4 + 0x604u));
/* 84b4a2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84b4a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b4a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84b4a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84b4a7: mov ecx, edi */
  ecx = edi;
/* 84b4a9: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x84b4acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84b4ac: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84b4ad: jmp 0x84b490 */
  goto L_84b490;
L_84b4af: /* 84b4af: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 84b4b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84b4b3: mov eax, esp */
  eax = esp;
/* 84b4b5: mov dword ptr [ebp - 0x98], esp */
  W32((uint32_t)(ebp + 0xffffff68u), esp);
/* 84b4bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84b4bd: mov dword ptr [edi + 0x710], 0 */
  W32((uint32_t)(edi + 0x710u), 0x0u);
/* 84b4c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84b4c9: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 84b4cf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84b4d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84b4d3: mov ecx, esi */
  ecx = esi;
/* 84b4d5: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x84b4d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84b4d8: mov ecx, dword ptr [0xcfa350] */
  ecx = R32((uint32_t)(0xcfa350u));
/* 84b4de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84b4e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84b4e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84b4e3: mov ecx, esi */
  ecx = esi;
/* 84b4e5: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x84b4e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84b4e8: xor eax, eax */
  eax = 0;
/* 84b4ea: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 84b4f0: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
L_84b4f3: /* 84b4f3: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84b4f6: jge 0x84c1ac */
  if ((sf == of)) goto L_84c1ac;
L_84b4fc: /* 84b4fc: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 84b4ff: mov esi, dword ptr [edi + edx*8 + 4] */
  esi = R32((uint32_t)(edi + edx*8 + 0x4u));
/* 84b503: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84b505: lea edi, [edi + edx*8] */
  edi = (uint32_t)(edi + edx*8);
/* 84b508: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 84b50b: je 0x84b521 */
  if (zf) goto L_84b521;
L_84b50d: /* 84b50d: push 0xb5c498 */
  { uint32_t v = 0xb5c498u; esp -= 4; W32(esp, v); }
/* 84b512: mov ecx, esi */
  ecx = esi;
/* 84b514: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84b51au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84b51a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84b51c: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 84b51f: jne 0x84b528 */
  if (!zf) goto L_84b528;
L_84b521: /* 84b521: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
L_84b528: /* 84b528: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84b52a: je 0x84c157 */
  if (zf) goto L_84c157;
L_84b530: /* 84b530: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84b533: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 84b536: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 84b53c: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 84b53f: mov edi, dword ptr [eax + 0x30] */
  edi = R32((uint32_t)(eax + 0x30u));
/* 84b542: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84b545: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84b547: jg 0x84c157 */
  if ((!zf && sf == of)) goto L_84c157;
L_84b54d: /* 84b54d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 84b550: cmp dword ptr [eax + edx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84b553: jne 0x84c157 */
  if (!zf) goto L_84c157;
L_84b559: /* 84b559: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 84b55f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84b562: jne 0x84c157 */
  if (!zf) goto L_84c157;
L_84b568: /* 84b568: mov eax, dword ptr [esi + 0x2a4] */
  eax = R32((uint32_t)(esi + 0x2a4u));
/* 84b56e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84b570: je 0x84c157 */
  if (zf) goto L_84c157;
L_84b576: /* 84b576: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 84b57c: xor edi, edi */
  edi = 0;
/* 84b57e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84b580: je 0x84b5a0 */
  if (zf) goto L_84b5a0;
L_84b582: /* 84b582: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 84b584: lea edx, [ebp - 0x1f4] */
  edx = (uint32_t)(ebp + 0xfffffe0cu);
/* 84b58a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84b58b: mov dword ptr [ebp - 0x1f4], 0x9f7180 */
  W32((uint32_t)(ebp + 0xfffffe0cu), 0x9f7180u);
/* 84b595: mov dword ptr [ebp - 0x1e8], esi */
  W32((uint32_t)(ebp + 0xfffffe18u), esi);
/* 84b59b: call 0x6c76fd */
  esp -= 4; W32(esp, 0x84b5a0u); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
L_84b5a0: /* 84b5a0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b5a3: mov eax, esp */
  eax = esp;
/* 84b5a5: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 84b5a7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 84b5aa: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 84b5ad: mov edi, 0x3f800000 */
  edi = 0x3f800000u;
/* 84b5b2: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 84b5b5: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 84b5bb: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 84b5be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b5bf: mov ecx, ebx */
  ecx = ebx;
/* 84b5c1: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84b5c6u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84b5c6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b5c9: mov eax, esp */
  eax = esp;
/* 84b5cb: lea ecx, [ebp - 0x254] */
  ecx = (uint32_t)(ebp + 0xfffffdacu);
/* 84b5d1: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 84b5d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84b5d5: mov ecx, ebx */
  ecx = ebx;
/* 84b5d7: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 84b5dd: mov dword ptr [eax + 4], 0xbf800000 */
  W32((uint32_t)(eax + 0x4u), 0xbf800000u);
/* 84b5e4: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 84b5eb: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 84b5ee: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84b5f3u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84b5f3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 84b5f6: fsub dword ptr [ebp - 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff54u)));
/* 84b5fc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b5ff: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 84b602: xor ecx, ecx */
  ecx = 0;
/* 84b604: fsub dword ptr [ebp - 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff50u)));
/* 84b60a: lea edx, [ebp - 0x260] */
  edx = (uint32_t)(ebp + 0xfffffda0u);
/* 84b610: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84b612: mov eax, esp */
  eax = esp;
/* 84b614: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 84b61a: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 84b61d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84b61e: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 84b621: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 84b624: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 84b627: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 84b62a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84b62d: mov ecx, ebx */
  ecx = ebx;
/* 84b62f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 84b631: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 84b634: call 0x6c7018 */
  esp -= 4; W32(esp, 0x84b639u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 84b639: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 84b63c: fsub dword ptr [ebp - 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff54u)));
/* 84b642: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 84b645: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 84b648: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 84b64b: fsub dword ptr [ebp - 0xb0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff50u)));
/* 84b651: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84b654: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84b656: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84b659: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 84b65f: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 84b665: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 84b66b: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 84b66e: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 84b671: fmul dword ptr [ebp - 0x88] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff78u)));
/* 84b677: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84b67a: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 84b67d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 84b67f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b682: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 84b685: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 84b688: fmul dword ptr [ebp - 0x88] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff78u)));
/* 84b68e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 84b690: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 84b693: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 84b696: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 84b699: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84b69c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 84b69e: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 84b6a1: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 84b6a4: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 84b6a7: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x84b6adu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 84b6ad: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 84b6b3: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x84b6b9u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 84b6b9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 84b6bc: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x84b6c2u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 84b6c2: mov al, byte ptr [esi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x34u))) & 0xffu);
/* 84b6c5: cmp al, 0x56 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x56u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 84b6c7: jae 0x84b70c */
  if (!cf) goto L_84b70c;
L_84b6c9: /* 84b6c9: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 84b6cc: mov ecx, 0x55 */
  ecx = 0x55u;
/* 84b6d1: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 84b6d3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84b6d6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 84b6d9: mov dword ptr [ebp - 0x15c], 0 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x0u);
/* 84b6e3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b6e6: lea eax, [ebp - 0x164] */
  eax = (uint32_t)(ebp + 0xfffffe9cu);
/* 84b6ec: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 84b6f2: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 84b6f8: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84b6fb: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 84b701: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 84b707: jmp 0x84b794 */
  goto L_84b794;
L_84b70c: /* 84b70c: cmp al, 0xab */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xabu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 84b70e: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 84b711: jae 0x84b753 */
  if (!cf) goto L_84b753;
L_84b713: /* 84b713: mov edx, 0xaa */
  edx = 0xaau;
/* 84b718: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 84b71a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84b71d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b720: add eax, -0x55 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffabu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84b723: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84b726: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 84b730: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 84b736: lea eax, [ebp - 0x134] */
  eax = (uint32_t)(ebp + 0xfffffeccu);
/* 84b73c: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 84b742: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b745: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 84b74b: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 84b751: jmp 0x84b794 */
  goto L_84b794;
L_84b753: /* 84b753: lea ecx, [eax - 0xaa] */
  ecx = (uint32_t)(eax + 0xffffff56u);
/* 84b759: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84b75c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b75f: mov edx, 0xff */
  edx = 0xffu;
/* 84b764: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 84b766: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84b769: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 84b76f: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 84b779: lea eax, [ebp - 0x170] */
  eax = (uint32_t)(ebp + 0xfffffe90u);
/* 84b77f: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 84b785: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b788: fmul dword ptr [0xa16938] */
  ST0 = ST0 * (F32((uint32_t)(0xa16938u)));
/* 84b78e: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
L_84b794: /* 84b794: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84b796: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84b799: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84b79c: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 84b79f: movzx ecx, byte ptr [esi + 0x35] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x35u)));
/* 84b7a3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84b7a6: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 84b7a9: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 84b7ac: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b7af: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 84b7b2: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 84b7b5: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 84b7b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 84b7be: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 84b7c8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84b7ce: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84b7d1: fsub dword ptr [ebp - 0x74] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 84b7d4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84b7da: fsub dword ptr [ebp - 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff88u)));
/* 84b7dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84b7e3: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 84b7e6: fstp dword ptr [ebp - 0x248] */
  WF32((uint32_t)(ebp + 0xfffffdb8u), ST0); FPOP();
/* 84b7ec: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84b7ee: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84b7f0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84b7f3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84b7f5: fld dword ptr [ebp - 0x248] */
  { double v = F32((uint32_t)(ebp + 0xfffffdb8u)); FPUSH(v); }
/* 84b7fb: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84b7fd: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 84b803: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 84b806: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84b809: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84b80c: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 84b80f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 84b811: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84b814: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84b816: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84b818: fld dword ptr [ebp - 0x20c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdf4u)); FPUSH(v); }
/* 84b81e: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 84b821: fstp dword ptr [ebp - 0x224] */
  WF32((uint32_t)(ebp + 0xfffffddcu), ST0); FPOP();
/* 84b827: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84b82a: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 84b82d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84b830: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 84b833: fld dword ptr [ebp - 0x224] */
  { double v = F32((uint32_t)(ebp + 0xfffffddcu)); FPUSH(v); }
/* 84b839: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 84b83c: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 84b842: mov ecx, dword ptr [ebp - 0x11c] */
  ecx = R32((uint32_t)(ebp + 0xfffffee4u));
/* 84b848: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 84b84e: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 84b854: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 84b85a: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 84b860: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 84b866: mov eax, dword ptr [ebp - 0x114] */
  eax = R32((uint32_t)(ebp + 0xfffffeecu));
/* 84b86c: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 84b872: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 84b878: fsub dword ptr [ebx + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x194u)));
/* 84b87e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 84b884: fsub dword ptr [ebx + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x198u)));
/* 84b88a: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 84b890: fsub dword ptr [ebx + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x19cu)));
/* 84b896: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 84b898: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84b89a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 84b89c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 84b89e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84b8a0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 84b8a2: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 84b8a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84b8a6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 84b8a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84b8ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84b8ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84b8af: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x84b8b5u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 84b8b5: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 84b8b8: fmul dword ptr [0xa0892c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0892cu)));
/* 84b8be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84b8c1: fcom dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
/* 84b8c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84b8c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84b8cc: jp 0x84b8d7 */
  if (pf) goto L_84b8d7;
L_84b8ce: /* 84b8ce: mov dword ptr [ebp - 0x40], 0x3c23d70a */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3c23d70au);
/* 84b8d5: jmp 0x84b8f0 */
  goto L_84b8f0;
L_84b8d7: /* 84b8d7: fcom dword ptr [0xa0c188] */
  fpu_com(ST0, F32((uint32_t)(0xa0c188u)));
/* 84b8dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84b8df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84b8e2: jp 0x84b8e9 */
  if (pf) goto L_84b8e9;
L_84b8e4: /* 84b8e4: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 84b8e7: jmp 0x84b8f2 */
  goto L_84b8f2;
L_84b8e9: /* 84b8e9: mov dword ptr [ebp - 0x40], 0x41200000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x41200000u);
L_84b8f0: /* 84b8f0: fstp st(0) */
  STI(0) = ST0; FPOP();
L_84b8f2: /* 84b8f2: fld dword ptr [esi + 0x288] */
  { double v = F32((uint32_t)(esi + 0x288u)); FPUSH(v); }
/* 84b8f8: fcomp dword ptr [esi + 0x28c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x28cu)));
  FPOP();
/* 84b8fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84b900: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84b903: jnp 0x84bb6a */
  if (!pf) goto L_84bb6a;
L_84b909: /* 84b909: fld dword ptr [esi + 0x290] */
  { double v = F32((uint32_t)(esi + 0x290u)); FPUSH(v); }
/* 84b90f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84b915: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84b917: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84b91a: jne 0x84bb6a */
  if (!zf) goto L_84bb6a;
L_84b920: /* 84b920: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 84b926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84b927: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 84b92d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84b92e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 84b934: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84b937: mov dword ptr [ebp - 0x14c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb4u), 0x3f800000u);
/* 84b941: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 84b94b: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 84b955: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x84b95bu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 84b95b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b95c: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 84b962: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84b963: lea ecx, [ebp - 0x14c] */
  ecx = (uint32_t)(ebp + 0xfffffeb4u);
/* 84b969: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x84b96fu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 84b96f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 84b975: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84b976: lea eax, [ebp - 0x2f4] */
  eax = (uint32_t)(ebp + 0xfffffd0cu);
/* 84b97c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b97d: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84b980: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 84b98a: mov dword ptr [ebp - 0x154], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x3f800000u);
/* 84b994: mov dword ptr [ebp - 0x150], 0 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x0u);
/* 84b99e: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x84b9a4u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 84b9a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b9a5: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 84b9ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84b9ac: lea ecx, [ebp - 0x158] */
  ecx = (uint32_t)(ebp + 0xfffffea8u);
/* 84b9b2: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x84b9b8u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 84b9b8: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 84b9be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84b9bf: lea edx, [ebp - 0x2c4] */
  edx = (uint32_t)(ebp + 0xfffffd3cu);
/* 84b9c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84b9c6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84b9c9: mov dword ptr [ebp - 0x140], 0 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x0u);
/* 84b9d3: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 84b9dd: mov dword ptr [ebp - 0x138], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x3f800000u);
/* 84b9e7: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x84b9edu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 84b9ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b9ee: lea eax, [ebp - 0x284] */
  eax = (uint32_t)(ebp + 0xfffffd7cu);
/* 84b9f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84b9f5: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* 84b9fb: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x84ba01u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 84ba01: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 84ba07: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 84ba0a: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 84ba10: fmul dword ptr [ebp - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff98u)));
/* 84ba13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84ba15: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 84ba1b: fmul dword ptr [ebp - 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff94u)));
/* 84ba1e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84ba20: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 84ba26: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ba28: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84ba2b: je 0x84ba2f */
  if (zf) goto L_84ba2f;
L_84ba2d: /* 84ba2d: fchs  */
  ST0 = -ST0;
L_84ba2f: /* 84ba2f: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 84ba35: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 84ba38: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
/* 84ba3e: fmul dword ptr [ebp - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff98u)));
/* 84ba41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84ba43: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 84ba49: fmul dword ptr [ebp - 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff94u)));
/* 84ba4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84ba4e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 84ba54: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84ba56: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84ba59: je 0x84ba5d */
  if (zf) goto L_84ba5d;
L_84ba5b: /* 84ba5b: fchs  */
  ST0 = -ST0;
L_84ba5d: /* 84ba5d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84ba63: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ba66: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 84ba68: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84ba6e: fsub st(3) */
  ST0 = ST0 - STI(3);
/* 84ba70: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 84ba72: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 84ba75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84ba77: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84ba79: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x84ba7fu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 84ba7f: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 84ba82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84ba85: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84ba88: lea edx, [ebp - 0x294] */
  edx = (uint32_t)(ebp + 0xfffffd6cu);
/* 84ba8e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ba91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ba92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ba93: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 84ba99: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x84ba9fu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 84ba9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84baa0: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 84baa6: call 0x6c576d */
  esp -= 4; W32(esp, 0x84baabu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 84baab: movzx ecx, byte ptr [eax + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x3u)));
/* 84baaf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 84bab2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84bab5: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 84bab9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84babc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84babf: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 84bac3: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 84bac9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84bacc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84bacf: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 84bad5: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84bad8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84badb: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 84bae1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84bae4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 84baea: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 84baf0: mov eax, dword ptr [ebp - 0xec] */
  eax = R32((uint32_t)(ebp + 0xffffff14u));
/* 84baf6: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 84bafc: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 84bb02: mov ecx, dword ptr [ebp - 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xffffff18u));
/* 84bb08: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 84bb0e: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 84bb14: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 84bb1a: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 84bb20: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 84bb26: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 84bb2c: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 84bb32: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 84bb38: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 84bb3e: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 84bb44: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 84bb47: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 84bb4d: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 84bb50: mov edx, dword ptr [ebp - 0xbc] */
  edx = R32((uint32_t)(ebp + 0xffffff44u));
/* 84bb56: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 84bb59: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 84bb5f: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 84bb62: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 84bb65: jmp 0x84bc2d */
  goto L_84bc2d;
L_84bb6a: /* 84bb6a: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 84bb70: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 84bb76: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 84bb79: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 84bb7c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 84bb7f: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 84bb82: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 84bb85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84bb87: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 84bb8a: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 84bb8d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 84bb90: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 84bb93: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 84bb96: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 84bb99: je 0x84bc33 */
  if (zf) goto L_84bc33;
L_84bb9f: /* 84bb9f: fld dword ptr [ecx + 0x344] */
  { double v = F32((uint32_t)(ecx + 0x344u)); FPUSH(v); }
/* 84bba5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84bbab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84bbad: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84bbb0: jp 0x84bbc5 */
  if (pf) goto L_84bbc5;
L_84bbb2: /* 84bbb2: fld dword ptr [ecx + 0x348] */
  { double v = F32((uint32_t)(ecx + 0x348u)); FPUSH(v); }
/* 84bbb8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84bbbe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84bbc0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84bbc3: jnp 0x84bc33 */
  if (!pf) goto L_84bc33;
L_84bbc5: /* 84bbc5: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 84bbc8: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 84bbcb: fmul dword ptr [eax + 0x344] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x344u)));
/* 84bbd1: fmul dword ptr [0xa14e94] */
  ST0 = ST0 * (F32((uint32_t)(0xa14e94u)));
/* 84bbd7: fadd dword ptr [eax + 0x348] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x348u)));
/* 84bbdd: call 0x99c958 */
  esp -= 4; W32(esp, 0x84bbe2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 84bbe2: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 84bbe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84bbe6: mov edi, eax */
  edi = eax;
/* 84bbe8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84bbe9: lea edx, [ebp - 0x26c] */
  edx = (uint32_t)(ebp + 0xfffffd94u);
/* 84bbef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84bbf0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 84bbf3: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x84bbf9u); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 84bbf9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84bbfb: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 84bbfe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84bc01: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 84bc04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84bc05: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 84bc08: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84bc0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84bc0c: lea edx, [ebp - 0x278] */
  edx = (uint32_t)(ebp + 0xfffffd88u);
/* 84bc12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84bc13: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 84bc16: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 84bc19: call dword ptr [0xcfa648] */
  esp -= 4; W32(esp, 0x84bc1fu); SPILL(); f_4e27b6(); if (g_unwind) return; /* Core!?RotateAngleAxis@FVector@@QBE?AV1@HABV1@@Z */ RELOAD();
/* 84bc1f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84bc21: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 84bc24: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84bc27: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 84bc2a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
L_84bc2d: /* 84bc2d: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 84bc30: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_84bc33: /* 84bc33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84bc35: fld dword ptr [esi + 0x288] */
  { double v = F32((uint32_t)(esi + 0x288u)); FPUSH(v); }
/* 84bc3b: fmul dword ptr [esi + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x284u)));
/* 84bc41: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 84bc44: fmul dword ptr [0xa16934] */
  ST0 = ST0 * (F32((uint32_t)(0xa16934u)));
/* 84bc4a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84bc4d: fld dword ptr [esi + 0x28c] */
  { double v = F32((uint32_t)(esi + 0x28cu)); FPUSH(v); }
/* 84bc53: fmul dword ptr [esi + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x284u)));
/* 84bc59: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 84bc5c: fmul dword ptr [0xa16934] */
  ST0 = ST0 * (F32((uint32_t)(0xa16934u)));
/* 84bc62: je 0x84bcdd */
  if (zf) goto L_84bcdd;
L_84bc64: /* 84bc64: fld dword ptr [ecx + 0x33c] */
  { double v = F32((uint32_t)(ecx + 0x33cu)); FPUSH(v); }
/* 84bc6a: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 84bc70: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84bc73: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 84bc79: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 84bc7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84bc7d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84bc80: jp 0x84bc87 */
  if (pf) goto L_84bc87;
L_84bc82: /* 84bc82: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84bc85: jmp 0x84bca2 */
  goto L_84bca2;
L_84bc87: /* 84bc87: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84bc89: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84bc8c: fcomp dword ptr [ebp - 0x90] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff70u)));
  FPOP();
/* 84bc92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84bc94: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84bc97: jnp 0x84bca2 */
  if (!pf) goto L_84bca2;
L_84bc99: /* 84bc99: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 84bc9f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_84bca2: /* 84bca2: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 84bca8: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 84bcae: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 84bcb4: fcom dword ptr [ebp - 0x8c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff74u)));
/* 84bcba: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 84bcbd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84bcbf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84bcc2: jp 0x84bcce */
  if (pf) goto L_84bcce;
L_84bcc4: /* 84bcc4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84bcc6: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 84bccc: jmp 0x84bcdd */
  goto L_84bcdd;
L_84bcce: /* 84bcce: fcom dword ptr [ebp - 0x70] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff90u)));
/* 84bcd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84bcd3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84bcd6: jnp 0x84bcdd */
  if (!pf) goto L_84bcdd;
L_84bcd8: /* 84bcd8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84bcda: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
L_84bcdd: /* 84bcdd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84bce0: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 84bce6: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 84bce9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84bcea: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 84bced: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84bcf0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 84bcf3: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 84bcf6: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 84bcf9: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84bcfc: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 84bcff: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84bd02: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 84bd05: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84bd07: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 84bd0a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84bd0d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84bd0f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 84bd12: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 84bd15: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84bd17: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 84bd1a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84bd1c: call 0x6c576d */
  esp -= 4; W32(esp, 0x84bd21u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 84bd21: mov edx, dword ptr [0xcfa278] */
  edx = R32((uint32_t)(0xcfa278u));
/* 84bd27: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84bd2a: je 0x84bd46 */
  if (zf) goto L_84bd46;
L_84bd2c: /* 84bd2c: mov al, byte ptr [ebp - 0x36] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffcau))) & 0xffu);
/* 84bd2f: mov cl, byte ptr [ebp - 0x37] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc9u))) & 0xffu);
/* 84bd32: mov dl, byte ptr [ebp - 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffc8u))) & 0xffu);
/* 84bd35: mov byte ptr [ebp - 0x44], al */
  W8((uint32_t)(ebp + 0xffffffbcu), (eax & 0xffu));
/* 84bd38: mov al, byte ptr [ebp - 0x35] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffcbu))) & 0xffu);
/* 84bd3b: mov byte ptr [ebp - 0x43], cl */
  W8((uint32_t)(ebp + 0xffffffbdu), (ecx & 0xffu));
/* 84bd3e: mov byte ptr [ebp - 0x42], dl */
  W8((uint32_t)(ebp + 0xffffffbeu), (edx & 0xffu));
/* 84bd41: mov byte ptr [ebp - 0x41], al */
  W8((uint32_t)(ebp + 0xffffffbfu), (eax & 0xffu));
/* 84bd44: jmp 0x84bd4c */
  goto L_84bd4c;
L_84bd46: /* 84bd46: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 84bd49: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
L_84bd4c: /* 84bd4c: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 84bd52: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 84bd55: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 84bd58: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 84bd5b: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 84bd61: mov byte ptr [ebp - 0x35], 0xff */
  W8((uint32_t)(ebp + 0xffffffcbu), 0xffu);
/* 84bd65: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 84bd68: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84bd6b: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 84bd71: mov dword ptr [ebp - 0x1c8], 0 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x0u);
/* 84bd7b: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84bd7e: mov dword ptr [ebp - 0x1c4], 0 */
  W32((uint32_t)(ebp + 0xfffffe3cu), 0x0u);
/* 84bd88: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 84bd8e: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 84bd91: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84bd94: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 84bd97: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 84bd9d: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 84bda0: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 84bda6: mov eax, dword ptr [ebp - 0x104] */
  eax = R32((uint32_t)(ebp + 0xfffffefcu));
/* 84bdac: mov dword ptr [ebp - 0x1d8], eax */
  W32((uint32_t)(ebp + 0xfffffe28u), eax);
/* 84bdb2: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 84bdb8: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 84bdbb: mov ecx, dword ptr [ebp - 0x100] */
  ecx = R32((uint32_t)(ebp + 0xffffff00u));
/* 84bdc1: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 84bdc7: mov edx, dword ptr [ebp - 0xfc] */
  edx = R32((uint32_t)(ebp + 0xffffff04u));
/* 84bdcd: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84bdd0: mov dword ptr [ebp - 0x1d4], ecx */
  W32((uint32_t)(ebp + 0xfffffe2cu), ecx);
/* 84bdd6: mov dword ptr [ebp - 0x1d0], edx */
  W32((uint32_t)(ebp + 0xfffffe30u), edx);
/* 84bddc: mov dword ptr [ebp - 0x1cc], eax */
  W32((uint32_t)(ebp + 0xfffffe34u), eax);
/* 84bde2: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 84bde8: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 84bdeb: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 84bdf1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84bdf4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84bdf7: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 84bdfd: mov dword ptr [ebp - 0x1b0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe50u), 0x3f800000u);
/* 84be07: mov dword ptr [ebp - 0x1ac], 0 */
  W32((uint32_t)(ebp + 0xfffffe54u), 0x0u);
/* 84be11: mov dword ptr [ebp - 0x1b4], eax */
  W32((uint32_t)(ebp + 0xfffffe4cu), eax);
/* 84be17: fstp dword ptr [ebp - 0x23c] */
  WF32((uint32_t)(ebp + 0xfffffdc4u), ST0); FPOP();
/* 84be1d: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 84be20: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84be23: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 84be26: fld dword ptr [ebp - 0x23c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdc4u)); FPUSH(v); }
/* 84be2c: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 84be2f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 84be35: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 84be3b: mov dword ptr [ebp - 0x1c0], ecx */
  W32((uint32_t)(ebp + 0xfffffe40u), ecx);
/* 84be41: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 84be47: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 84be4d: mov dword ptr [ebp - 0x1bc], edx */
  W32((uint32_t)(ebp + 0xfffffe44u), edx);
/* 84be53: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 84be59: mov ecx, dword ptr [ebp - 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xffffff30u));
/* 84be5f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84be62: mov dword ptr [ebp - 0x1b8], ecx */
  W32((uint32_t)(ebp + 0xfffffe48u), ecx);
/* 84be68: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 84be6e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 84be71: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 84be77: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84be7a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84be7d: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 84be83: mov dword ptr [ebp - 0x198], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe68u), 0x3f800000u);
/* 84be8d: mov dword ptr [ebp - 0x194], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe6cu), 0x3f800000u);
/* 84be97: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 84be9d: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 84bea3: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 84bea6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84bea9: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84beac: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 84beb2: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 84beb5: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 84bebb: mov edx, dword ptr [ebp - 0xf8] */
  edx = R32((uint32_t)(ebp + 0xffffff08u));
/* 84bec1: mov dword ptr [ebp - 0x1a8], edx */
  W32((uint32_t)(ebp + 0xfffffe58u), edx);
/* 84bec7: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 84becd: mov ecx, dword ptr [ebp - 0xf4] */
  ecx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 84bed3: mov dword ptr [ebp - 0x1a4], ecx */
  W32((uint32_t)(ebp + 0xfffffe5cu), ecx);
/* 84bed9: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 84bedf: mov edx, dword ptr [ebp - 0xf0] */
  edx = R32((uint32_t)(ebp + 0xffffff10u));
/* 84bee5: mov dword ptr [ebp - 0x1a0], edx */
  W32((uint32_t)(ebp + 0xfffffe60u), edx);
/* 84beeb: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 84bef1: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 84bef4: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 84befa: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 84befd: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84bf00: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 84bf06: mov dword ptr [ebp - 0x184], eax */
  W32((uint32_t)(ebp + 0xfffffe7cu), eax);
/* 84bf0c: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84bf0f: lea eax, [ebp - 0x1dc] */
  eax = (uint32_t)(ebp + 0xfffffe24u);
/* 84bf15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84bf16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84bf18: fstp dword ptr [ebp - 0x230] */
  WF32((uint32_t)(ebp + 0xfffffdd0u), ST0); FPOP();
/* 84bf1e: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 84bf28: mov dword ptr [ebp - 0x17c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x3f800000u);
/* 84bf32: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 84bf35: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84bf38: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84bf3b: fld dword ptr [ebp - 0x230] */
  { double v = F32((uint32_t)(ebp + 0xfffffdd0u)); FPUSH(v); }
/* 84bf41: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 84bf44: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 84bf4a: mov ecx, dword ptr [ebp - 0x110] */
  ecx = R32((uint32_t)(ebp + 0xfffffef0u));
/* 84bf50: mov dword ptr [ebp - 0x190], ecx */
  W32((uint32_t)(ebp + 0xfffffe70u), ecx);
/* 84bf56: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 84bf5c: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 84bf62: mov dword ptr [ebp - 0x18c], edx */
  W32((uint32_t)(ebp + 0xfffffe74u), edx);
/* 84bf68: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 84bf6e: mov ecx, dword ptr [ebp - 0x108] */
  ecx = R32((uint32_t)(ebp + 0xfffffef8u));
/* 84bf74: mov dword ptr [ebp - 0x188], ecx */
  W32((uint32_t)(ebp + 0xfffffe78u), ecx);
/* 84bf7a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 84bf7d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84bf7f: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x84bf82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84bf82: mov ecx, dword ptr [esi + 0x2a0] */
  ecx = R32((uint32_t)(esi + 0x2a0u));
/* 84bf88: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 84bf8a: xor ebx, ebx */
  ebx = 0;
/* 84bf8c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84bf8e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84bf91: je 0x84bfaf */
  if (zf) goto L_84bfaf;
L_84bf93: /* 84bf93: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 84bf98: mov ecx, edi */
  ecx = edi;
/* 84bf9a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84bfa0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84bfa0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84bfa2: je 0x84bfaf */
  if (zf) goto L_84bfaf;
L_84bfa4: /* 84bfa4: test byte ptr [edi + 0x7c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x7cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84bfa8: je 0x84bfaf */
  if (zf) goto L_84bfaf;
L_84bfaa: /* 84bfaa: mov ebx, 1 */
  ebx = 0x1u;
L_84bfaf: /* 84bfaf: mov eax, dword ptr [0xcc9a44] */
  eax = R32((uint32_t)(0xcc9a44u));
/* 84bfb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84bfb6: jne 0x84c032 */
  if (!zf) goto L_84c032;
L_84bfb8: /* 84bfb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84bfba: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 84bfc0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84bfc6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84bfc6: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84bfcb: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 84bfd0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84bfd6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84bfd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84bfd8: jne 0x84bff2 */
  if (!zf) goto L_84bff2;
L_84bfda: /* 84bfda: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84bfdf: push 0xae4528 */
  { uint32_t v = 0xae4528u; esp -= 4; W32(esp, v); }
/* 84bfe4: push 0xae456c */
  { uint32_t v = 0xae456cu; esp -= 4; W32(esp, v); }
/* 84bfe9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84bfefu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84bfef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84bff2: /* 84bff2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84bff8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84bff8: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 84bffe: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84c000: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 84c006: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c008: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84c009: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c00b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c00d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84c00e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84c00f: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84c014: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84c01au); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84c01a: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84c020: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84c023: push 0xcc9a44 */
  { uint32_t v = 0xcc9a44u; esp -= 4; W32(esp, v); }
/* 84c028: mov dword ptr [0xcc9a44], eax */
  W32((uint32_t)(0xcc9a44u), eax);
/* 84c02d: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84c032u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_84c032: /* 84c032: mov eax, dword ptr [esi + 0x2a0] */
  eax = R32((uint32_t)(esi + 0x2a0u));
/* 84c038: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84c03a: mov edx, dword ptr [0xcc9a44] */
  edx = R32((uint32_t)(0xcc9a44u));
/* 84c040: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* 84c043: mov eax, dword ptr [0xcc9a44] */
  eax = R32((uint32_t)(0xcc9a44u));
/* 84c048: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c04c: mov eax, dword ptr [0xcc9a44] */
  eax = R32((uint32_t)(0xcc9a44u));
/* 84c051: mov byte ptr [eax + 0x3c], 4 */
  W8((uint32_t)(eax + 0x3cu), 0x4u);
/* 84c055: mov eax, dword ptr [0xcc9a44] */
  eax = R32((uint32_t)(0xcc9a44u));
/* 84c05a: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c05e: mov eax, dword ptr [0xcc9a44] */
  eax = R32((uint32_t)(0xcc9a44u));
/* 84c063: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c067: mov eax, dword ptr [0xcc9a44] */
  eax = R32((uint32_t)(0xcc9a44u));
/* 84c06c: mov edi, dword ptr [eax + 0x40] */
  edi = R32((uint32_t)(eax + 0x40u));
/* 84c06f: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 84c076: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 84c078: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84c07b: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84c07e: mov ebx, edi */
  ebx = edi;
/* 84c080: xor ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 84c082: mov dword ptr [eax + 0x40], ebx */
  W32((uint32_t)(eax + 0x40u), ebx);
/* 84c085: mov edx, dword ptr [0xcc9a44] */
  edx = R32((uint32_t)(0xcc9a44u));
/* 84c08b: mov ecx, esp */
  ecx = esp;
/* 84c08d: mov dword ptr [ebp - 0x48], esp */
  W32((uint32_t)(ebp + 0xffffffb8u), esp);
/* 84c090: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c092: mov byte ptr [edx + 0x44], 0 */
  W8((uint32_t)(edx + 0x44u), 0x0u);
/* 84c096: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84c099: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 84c0a3: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 84c0a9: mov eax, esp */
  eax = esp;
/* 84c0ab: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84c0ad: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 84c0b7: mov edx, dword ptr [ebp - 0x124] */
  edx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 84c0bd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 84c0c0: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 84c0ca: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 84c0d0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84c0d3: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x84c0d9u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 84c0d9: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 84c0dc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 84c0de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c0e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c0e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c0e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84c0e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c0e8: mov ecx, edi */
  ecx = edi;
/* 84c0ea: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x84c0edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c0ed: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 84c0f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c0f2: je 0x84c107 */
  if (zf) goto L_84c107;
L_84c0f4: /* 84c0f4: test byte ptr [eax + 0x34c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84c0fb: je 0x84c107 */
  if (zf) goto L_84c107;
L_84c0fd: /* 84c0fd: mov ecx, dword ptr [esi + 0x2a0] */
  ecx = R32((uint32_t)(esi + 0x2a0u));
/* 84c103: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84c105: jmp 0x84c10c */
  goto L_84c10c;
L_84c107: /* 84c107: mov eax, dword ptr [0xcc9a44] */
  eax = R32((uint32_t)(0xcc9a44u));
L_84c10c: /* 84c10c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84c10e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c110: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c112: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c114: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84c115: mov ecx, edi */
  ecx = edi;
/* 84c117: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x84c11au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c11a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 84c11c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c11e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c120: mov ecx, edi */
  ecx = edi;
/* 84c122: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x84c125u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c125: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84c128: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84c12a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84c12c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84c12e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 84c130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84c131: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 84c133: mov ecx, edi */
  ecx = edi;
/* 84c135: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x84c138u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c138: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84c13b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 84c13e: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 84c144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c146: je 0x84c14f */
  if (zf) goto L_84c14f;
L_84c148: /* 84c148: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c14a: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x84c14fu); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_84c14f: /* 84c14f: inc dword ptr [ebp - 0x94] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff6cu), r);
  }
/* 84c155: jmp 0x84c161 */
  goto L_84c161;
L_84c157: /* 84c157: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 84c15a: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
L_84c161: /* 84c161: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 84c164: mov edi, dword ptr [ebp - 0x5c] */
  edi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 84c167: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84c16a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84c16b: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 84c16e: jmp 0x84b4f3 */
  goto L_84b4f3;
L_84c1ac: /* 84c1ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84c1af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84c1b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84c1b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84c1b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84c1b9: mov esp, ebp */
  esp = ebp;
/* 84c1bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84c1bc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_84c173(void) {
  LOAD_REGS();
L_84c173: /* 84c173: mov eax, dword ptr [ebp - 0x1e0] */
  eax = R32((uint32_t)(ebp + 0xfffffe20u));
/* 84c179: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84c17e: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 84c184: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84c185: mov dword ptr [ebp - 0xdc], eax */
  W32((uint32_t)(ebp + 0xffffff24u), eax);
/* 84c18b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84c190u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84c190(); return;
}

void f_84c190(void) {
  LOAD_REGS();
L_84c190: /* 84c190: push 0xa168ec */
  { uint32_t v = 0xa168ecu; esp -= 4; W32(esp, v); }
/* 84c195: push 0xae4498 */
  { uint32_t v = 0xae4498u; esp -= 4; W32(esp, v); }
/* 84c19a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84c1a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84c1a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84c1a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c1a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c1a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84c1acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 84c1ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84c1af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84c1b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84c1b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84c1b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84c1b9: mov esp, ebp */
  esp = ebp;
/* 84c1bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84c1bc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_84c560(void) {
  LOAD_REGS();
L_84c560: /* 84c560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84c561: mov ebp, esp */
  ebp = esp;
/* 84c563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84c565: push 0x9d3ca0 */
  { uint32_t v = 0x9d3ca0u; esp -= 4; W32(esp, v); }
/* 84c56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84c570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84c571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84c578: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84c57e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84c57f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84c580: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84c583: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 84c589: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84c58a: mov edi, dword ptr [0xcfa578] */
  edi = R32((uint32_t)(0xcfa578u));
/* 84c590: mov ebx, ecx */
  ebx = ecx;
/* 84c592: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 84c595: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84c598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84c599: lea ecx, [ebx + 0x1a0] */
  ecx = (uint32_t)(ebx + 0x1a0u);
/* 84c59f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84c5a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84c5a9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84c5abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c5ab: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84c5ae: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84c5b1: mov edx, dword ptr [esi + 0x288] */
  edx = R32((uint32_t)(esi + 0x288u));
/* 84c5b7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84c5ba: mov ecx, dword ptr [esi + 0x278] */
  ecx = R32((uint32_t)(esi + 0x278u));
/* 84c5c0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 84c5c3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84c5c6: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84c5c9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 84c5cb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84c5cd: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 84c5d0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84c5d2: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c5d5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 84c5d8: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c5db: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 84c5de: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 84c5e1: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c5e4: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 84c5e7: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x84c5eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c5ea: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84c5ed: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84c5f0: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 84c5f5: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 84c5f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84c5f9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84c5fc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 84c5ff: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84c602: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c605: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 84c608: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c60b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 84c60e: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c611: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84c614: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84c617: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84c61a: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x84c620u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 84c620: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 84c623: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84c624: lea ecx, [ebx + 0x1ac] */
  ecx = (uint32_t)(ebx + 0x1acu);
/* 84c62a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84c62cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c62c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 84c62f: fchs  */
  ST0 = -ST0;
/* 84c631: mov ecx, dword ptr [esi + 0x278] */
  ecx = R32((uint32_t)(esi + 0x278u));
/* 84c637: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 84c63a: fchs  */
  ST0 = -ST0;
/* 84c63c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84c63e: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 84c644: fchs  */
  ST0 = -ST0;
/* 84c646: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84c649: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 84c64c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84c64e: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c651: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 84c654: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c657: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 84c65a: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c65d: fld dword ptr [esi + 0x28c] */
  { double v = F32((uint32_t)(esi + 0x28cu)); FPUSH(v); }
/* 84c663: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 84c666: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84c668: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 84c66b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 84c66d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84c66f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84c672: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84c674: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 84c677: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84c679: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84c67b: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x84c67eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84c67e: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 84c681: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 84c684: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 84c689: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 84c68c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84c68f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84c690: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84c693: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 84c696: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c699: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84c69c: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c69f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 84c6a2: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84c6a5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84c6a8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84c6ab: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84c6ae: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x84c6b4u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 84c6b4: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 84c6ba: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84c6bd: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 84c6c4: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 84c6cb: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 84c6d2: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 84c6d9: je 0x84c76e */
  if (zf) goto L_84c76e;
L_84c6df: /* 84c6df: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 84c6e2: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84c6e5: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c6ef: je 0x84c733 */
  if (zf) goto L_84c733;
L_84c6f1: /* 84c6f1: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c6fb: je 0x84c733 */
  if (zf) goto L_84c733;
L_84c6fd: /* 84c6fd: mov dword ptr [ebp - 0x24], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f000000u);
/* 84c704: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84c707: mov dword ptr [ebp - 0x20], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f666666u);
/* 84c70e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84c711: mov dword ptr [ebp - 0x1c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f000000u);
/* 84c718: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84c71b: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 84c722: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 84c725: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84c728: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 84c72b: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 84c72e: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 84c731: jmp 0x84c76e */
  goto L_84c76e;
L_84c733: /* 84c733: mov al, byte ptr [esi + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x28u))) & 0xffu);
/* 84c736: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84c738: je 0x84c76e */
  if (zf) goto L_84c76e;
L_84c73a: /* 84c73a: xor edx, edx */
  edx = 0;
/* 84c73c: mov dl, byte ptr [esi + 0x35] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x35u))) & 0xffu);
/* 84c73f: xor eax, eax */
  eax = 0;
/* 84c741: mov al, byte ptr [esi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x34u))) & 0xffu);
/* 84c744: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 84c749: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 84c74c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84c74d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84c74e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84c74f: call 0x6c3954 */
  esp -= 4; W32(esp, 0x84c754u); SPILL(); f_6c3954(); if (g_unwind) return; RELOAD();
/* 84c754: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84c756: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84c759: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 84c75c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84c75f: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 84c762: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84c765: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 84c768: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 84c76b: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_84c76e: /* 84c76e: mov dword ptr [ebp - 0xd4], 0xa167c4 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0xa167c4u);
/* 84c778: mov edx, 4 */
  edx = 0x4u;
/* 84c77d: mov ecx, 0x18 */
  ecx = 0x18u;
/* 84c782: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
L_84c788: /* 84c788: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 84c789: js 0x84c78f */
  if (sf) goto L_84c78f;
L_84c78b: /* 84c78b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84c78d: jmp 0x84c788 */
  goto L_84c788;
L_84c78f: /* 84c78f: mov ebx, dword ptr [0xcfa1b0] */
  ebx = R32((uint32_t)(0xcfa1b0u));
/* 84c795: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 84c798: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 84c79a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c79c: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 84c7a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84c7a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84c7a3: call 0x99c910 */
  esp -= 4; W32(esp, 0x84c7a8u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 84c7a8: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 84c7ad: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 84c7b0: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 84c7b3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 84c7b5: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 84c7bb: adc edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 84c7be: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 84c7c1: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 84c7c4: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 84c7c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84c7c8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 84c7cb: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 84c7ce: call 0x6c576d */
  esp -= 4; W32(esp, 0x84c7d3u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 84c7d3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84c7d6: mov edi, dword ptr [esi + 0x278] */
  edi = R32((uint32_t)(esi + 0x278u));
/* 84c7dc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c7de: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 84c7e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84c7e6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84c7e9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84c7ec: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 84c7ef: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 84c7f2: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 84c7f5: je 0x84c98c */
  if (zf) goto L_84c98c;
L_84c7fb: /* 84c7fb: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 84c800: mov ecx, edi */
  ecx = edi;
/* 84c802: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84c808u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84c808: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c80a: je 0x84c98c */
  if (zf) goto L_84c98c;
L_84c810: /* 84c810: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c815: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c817: jne 0x84c88d */
  if (!zf) goto L_84c88d;
L_84c819: /* 84c819: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c81b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 84c81e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84c824u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84c824: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84c829: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 84c82e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84c834u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84c834: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84c836: jne 0x84c850 */
  if (!zf) goto L_84c850;
L_84c838: /* 84c838: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84c83d: push 0xae4528 */
  { uint32_t v = 0xae4528u; esp -= 4; W32(esp, v); }
/* 84c842: push 0xae456c */
  { uint32_t v = 0xae456cu; esp -= 4; W32(esp, v); }
/* 84c847: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84c84du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84c84d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84c850: /* 84c850: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84c856u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84c856: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84c85c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84c85e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84c861: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c863: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84c864: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c866: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84c868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84c869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84c86a: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84c86f: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84c875u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84c875: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84c87b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84c87e: push 0xcc9a48 */
  { uint32_t v = 0xcc9a48u; esp -= 4; W32(esp, v); }
/* 84c883: mov dword ptr [0xcc9a48], eax */
  W32((uint32_t)(0xcc9a48u), eax);
/* 84c888: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84c88du); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_84c88d: /* 84c88d: mov edx, dword ptr [0xcc9a48] */
  edx = R32((uint32_t)(0xcc9a48u));
/* 84c893: mov dword ptr [edx + 0x38], edi */
  W32((uint32_t)(edx + 0x38u), edi);
/* 84c896: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c89b: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c89f: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 84c8a2: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84c8a5: mov ebx, 2 */
  ebx = 0x2u;
/* 84c8aa: jne 0x84c957 */
  if (!zf) goto L_84c957;
L_84c8b0: /* 84c8b0: mov al, byte ptr [esi + 0x2c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2c0u))) & 0xffu);
/* 84c8b6: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84c8b8: je 0x84c957 */
  if (zf) goto L_84c957;
L_84c8be: /* 84c8be: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84c8c0: je 0x84c8f9 */
  if (zf) goto L_84c8f9;
L_84c8c2: /* 84c8c2: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c8c7: mov byte ptr [eax + 0x3c], bl */
  W8((uint32_t)(eax + 0x3cu), (ebx & 0xffu));
/* 84c8ca: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c8cf: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c8d3: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c8d8: or dword ptr [eax + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c8db: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c8e0: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c8e4: mov ecx, dword ptr [0xcc9a48] */
  ecx = R32((uint32_t)(0xcc9a48u));
/* 84c8ea: mov byte ptr [ecx + 0x44], 0 */
  W8((uint32_t)(ecx + 0x44u), 0x0u);
/* 84c8ee: mov edi, dword ptr [0xcc9a48] */
  edi = R32((uint32_t)(0xcc9a48u));
/* 84c8f4: jmp 0x84c991 */
  goto L_84c991;
L_84c8f9: /* 84c8f9: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84c8fb: jne 0x84c909 */
  if (!zf) goto L_84c909;
L_84c8fd: /* 84c8fd: mov edx, dword ptr [0xcc9a48] */
  edx = R32((uint32_t)(0xcc9a48u));
/* 84c903: mov byte ptr [edx + 0x3c], 4 */
  W8((uint32_t)(edx + 0x3cu), 0x4u);
/* 84c907: jmp 0x84c935 */
  goto L_84c935;
L_84c909: /* 84c909: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84c90b: jne 0x84c918 */
  if (!zf) goto L_84c918;
L_84c90d: /* 84c90d: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c912: mov byte ptr [eax + 0x3c], 1 */
  W8((uint32_t)(eax + 0x3cu), 0x1u);
/* 84c916: jmp 0x84c935 */
  goto L_84c935;
L_84c918: /* 84c918: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84c91a: jne 0x84c927 */
  if (!zf) goto L_84c927;
L_84c91c: /* 84c91c: mov ecx, dword ptr [0xcc9a48] */
  ecx = R32((uint32_t)(0xcc9a48u));
/* 84c922: mov byte ptr [ecx + 0x3c], al */
  W8((uint32_t)(ecx + 0x3cu), (eax & 0xffu));
/* 84c925: jmp 0x84c935 */
  goto L_84c935;
L_84c927: /* 84c927: cmp al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84c929: jne 0x84c984 */
  if (!zf) goto L_84c984;
L_84c92b: /* 84c92b: mov edx, dword ptr [0xcc9a48] */
  edx = R32((uint32_t)(0xcc9a48u));
/* 84c931: mov byte ptr [edx + 0x3c], 5 */
  W8((uint32_t)(edx + 0x3cu), 0x5u);
L_84c935: /* 84c935: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c93a: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c93e: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c943: or dword ptr [eax + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c946: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c94b: and dword ptr [eax + 0x40], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c94f: mov edi, dword ptr [0xcc9a48] */
  edi = R32((uint32_t)(0xcc9a48u));
/* 84c955: jmp 0x84c991 */
  goto L_84c991;
L_84c957: /* 84c957: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c95c: mov byte ptr [eax + 0x3c], 0 */
  W8((uint32_t)(eax + 0x3cu), 0x0u);
/* 84c960: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c965: or dword ptr [eax + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c969: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c96e: or dword ptr [eax + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c971: mov eax, dword ptr [0xcc9a48] */
  eax = R32((uint32_t)(0xcc9a48u));
/* 84c976: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84c97a: mov ecx, dword ptr [0xcc9a48] */
  ecx = R32((uint32_t)(0xcc9a48u));
/* 84c980: mov byte ptr [ecx + 0x44], 0x7f */
  W8((uint32_t)(ecx + 0x44u), 0x7fu);
L_84c984: /* 84c984: mov edi, dword ptr [0xcc9a48] */
  edi = R32((uint32_t)(0xcc9a48u));
/* 84c98a: jmp 0x84c991 */
  goto L_84c991;
L_84c98c: /* 84c98c: mov ebx, 2 */
  ebx = 0x2u;
L_84c991: /* 84c991: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 84c994: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 84c99e: fsub dword ptr [ebp - 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 84c9a1: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 84c9ab: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 84c9b5: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 84c9bf: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 84c9c2: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 84c9cc: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 84c9cf: mov dword ptr [ebp - 0x8c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x3f800000u);
/* 84c9d9: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 84c9dc: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 84c9df: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 84c9e2: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 84c9e5: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 84c9e8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84c9eb: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 84c9ee: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 84c9f1: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84c9f4: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 84c9f7: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84c9fa: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 84c9fd: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84ca00: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84ca03: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 84ca09: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84ca0c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84ca0f: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 84ca15: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84ca18: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 84ca1b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 84ca1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84ca21: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 84ca24: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 84ca2a: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 84ca30: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 84ca36: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 84ca39: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 84ca3f: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 84ca42: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 84ca45: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 84ca48: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 84ca4b: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 84ca4e: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 84ca51: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84ca54: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 84ca57: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 84ca5a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 84ca5d: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 84ca60: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84ca63: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 84ca66: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84ca69: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84ca6c: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 84ca72: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84ca75: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84ca78: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 84ca7e: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 84ca81: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84ca84: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84ca87: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84ca89: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 84ca8c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 84ca8f: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 84ca95: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84ca98: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 84ca9b: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 84ca9e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 84caa1: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84caa4: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84caa7: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 84caaa: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84caad: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84cab0: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 84cab6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84cab9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84cabc: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 84cac2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84cac5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84cac8: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 84cace: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84cad0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 84cad3: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 84cad6: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 84cad9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84cadc: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 84cadf: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 84cae2: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 84cae5: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 84cae8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84caea: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 84caed: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 84caf4: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84caf7: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 84cafe: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84cb01: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 84cb04: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84cb07: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84cb0a: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 84cb10: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 84cb13: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84cb16: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 84cb1c: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 84cb22: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84cb25: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84cb28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84cb29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb2b: mov ecx, esi */
  ecx = esi;
/* 84cb2d: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 84cb30: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0x84cb33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cb33: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84cb35: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 84cb38: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 84cb3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84cb3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb40: mov ecx, esi */
  ecx = esi;
/* 84cb42: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x84cb45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cb45: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84cb48: mov ecx, esp */
  ecx = esp;
/* 84cb4a: mov dword ptr [ebp - 0x28], esp */
  W32((uint32_t)(ebp + 0xffffffd8u), esp);
/* 84cb4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb4f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84cb52: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 84cb59: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84cb5c: mov edx, esp */
  edx = esp;
/* 84cb5e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84cb60: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 84cb67: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84cb6a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84cb6d: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 84cb74: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84cb77: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84cb7a: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x84cb80u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 84cb80: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84cb82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb88: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84cb8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb8c: mov ecx, esi */
  ecx = esi;
/* 84cb8e: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x84cb91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cb91: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84cb93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cb99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84cb9a: mov ecx, esi */
  ecx = esi;
/* 84cb9c: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x84cb9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cb9f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84cba1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cba3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cba5: mov ecx, esi */
  ecx = esi;
/* 84cba7: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x84cbaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cbaa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84cbad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 84cbaf: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84cbb1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84cbb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84cbb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84cbb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84cbb6: mov ecx, esi */
  ecx = esi;
/* 84cbb8: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x84cbbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cbbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84cbbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84cbbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84cbc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84cbc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84cbc8: mov esp, ebp */
  esp = ebp;
/* 84cbca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84cbcb: ret  */
  esp += 4; SPILL(); return;
}

void f_84cbcc(void) {
  LOAD_REGS();
L_84cbcc: /* 84cbcc: mov edx, dword ptr [ebp - 0xd8] */
  edx = R32((uint32_t)(ebp + 0xffffff28u));
/* 84cbd2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84cbd7: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 84cbda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84cbdb: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 84cbde: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84cbe3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84cbe3(); return;
}

void f_84cbe3(void) {
  LOAD_REGS();
L_84cbe3: /* 84cbe3: push 0xa1694c */
  { uint32_t v = 0xa1694cu; esp -= 4; W32(esp, v); }
/* 84cbe8: push 0xae44a0 */
  { uint32_t v = 0xae44a0u; esp -= 4; W32(esp, v); }
/* 84cbed: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84cbf3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84cbf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84cbf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cbf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cbfa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84cbffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84cbff: guest_badaddr(0x84cbff); return;
}

void f_84cdb0(void) {
  LOAD_REGS();
L_84cdb0: /* 84cdb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84cdb1: mov ebp, esp */
  ebp = esp;
/* 84cdb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84cdb5: push 0x9d3cd0 */
  { uint32_t v = 0x9d3cd0u; esp -= 4; W32(esp, v); }
/* 84cdba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84cdc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84cdc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84cdc8: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84cdcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84cdcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84cdcd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84cdd0: mov ebx, ecx */
  ebx = ecx;
/* 84cdd2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84cdd5: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 84cddb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cddd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84cdde: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84cde1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 84cde4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84cdeb: je 0x84ce04 */
  if (zf) goto L_84ce04;
L_84cded: /* 84cded: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84cdef: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 84cdf2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 84cdf4: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 84cdf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84cdf8: mov dword ptr [ebp - 0x54], 0x9f7180 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x9f7180u);
/* 84cdff: call 0x6c76fd */
  esp -= 4; W32(esp, 0x84ce04u); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
L_84ce04: /* 84ce04: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84ce07: mov eax, dword ptr [ecx + 0x104] */
  eax = R32((uint32_t)(ecx + 0x104u));
/* 84ce0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ce0f: je 0x84ceba */
  if (zf) goto L_84ceba;
L_84ce15: /* 84ce15: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 84ce1a: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 84ce1d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84ce1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ce20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ce22: mov ecx, esi */
  ecx = esi;
/* 84ce24: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x84ce27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ce27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84ce29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84ce2a: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84ce2d: call 0x6c460b */
  esp -= 4; W32(esp, 0x84ce32u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 84ce32: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84ce36: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 84ce3a: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 84ce3e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 84ce42: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ce45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ce46: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ce49: mov edi, esp */
  edi = esp;
/* 84ce4b: lea esi, [ebx + 0x8c] */
  esi = (uint32_t)(ebx + 0x8cu);
/* 84ce51: mov ecx, 7 */
  ecx = 0x7u;
/* 84ce56: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84ce58: mov ecx, eax */
  ecx = eax;
/* 84ce5a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84ce5e: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x84ce63u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 84ce63: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84ce66: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84ce6a: call 0x6cadcb */
  esp -= 4; W32(esp, 0x84ce6fu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 84ce6f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 84ce72: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84ce74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ce75: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84ce78: call 0x6c460b */
  esp -= 4; W32(esp, 0x84ce7du); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 84ce7d: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84ce81: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 84ce85: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 84ce89: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 84ce8d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84ce90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ce91: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84ce94: mov edi, esp */
  edi = esp;
/* 84ce96: lea esi, [ebx + 0xc4] */
  esi = (uint32_t)(ebx + 0xc4u);
/* 84ce9c: mov ecx, 7 */
  ecx = 0x7u;
/* 84cea1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84cea3: mov ecx, eax */
  ecx = eax;
/* 84cea5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 84cea9: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x84ceaeu); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 84ceae: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84ceb1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84ceb5: call 0x6cadcb */
  esp -= 4; W32(esp, 0x84cebau); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_84ceba: /* 84ceba: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84cebc: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 84cec2: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* 84cec8: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 84cecb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84cece: mov dword ptr [eax + 0xd4], ecx */
  W32((uint32_t)(eax + 0xd4u), ecx);
/* 84ced4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84ced6: mov dl, byte ptr [eax + 0x51] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x51u))) & 0xffu);
/* 84ced9: cmp dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84cedc: jne 0x84cefd */
  if (!zf) goto L_84cefd;
L_84cede: /* 84cede: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 84cee1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cee3: je 0x84cefd */
  if (zf) goto L_84cefd;
L_84cee5: /* 84cee5: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 84cee8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 84ceeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84ceec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84ceed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84ceee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84ceef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84cef0: call 0x6c891d */
  esp -= 4; W32(esp, 0x84cef5u); SPILL(); f_6c891d(); if (g_unwind) return; RELOAD();
/* 84cef5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84cef8: jmp 0x84d0f6 */
  goto L_84d0f6;
L_84cefd: /* 84cefd: cmp dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84cf00: jne 0x84d02b */
  if (!zf) goto L_84d02b;
L_84cf06: /* 84cf06: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 84cf0c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cf0e: je 0x84d02b */
  if (zf) goto L_84d02b;
L_84cf14: /* 84cf14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84cf16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84cf17: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x84cf1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cf1d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 84cf20: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84cf22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84cf23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84cf24: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 84cf27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84cf28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84cf29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84cf2a: mov ecx, eax */
  ecx = eax;
/* 84cf2c: call dword ptr [edx + 0x11c] */
  { uint32_t t = R32((uint32_t)(edx + 0x11cu)); esp -= 4; W32(esp, 0x84cf32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cf32: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84cf34: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 84cf3a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cf3c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 84cf3f: je 0x84d0f6 */
  if (zf) goto L_84d0f6;
L_84cf45: /* 84cf45: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 84cf4a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84cf50u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84cf50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cf52: je 0x84d0f6 */
  if (zf) goto L_84d0f6;
L_84cf58: /* 84cf58: xor ecx, ecx */
  ecx = 0;
/* 84cf5a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84cf5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_84cf60: /* 84cf60: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84cf62: cmp ecx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84cf68: jge 0x84d0f6 */
  if ((sf == of)) goto L_84d0f6;
L_84cf6e: /* 84cf6e: mov eax, dword ptr [eax + 0x1fc] */
  eax = R32((uint32_t)(eax + 0x1fcu));
/* 84cf74: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 84cf77: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cf79: je 0x84d014 */
  if (zf) goto L_84d014;
L_84cf7f: /* 84cf7f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 84cf85: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84cf88: jne 0x84d014 */
  if (!zf) goto L_84d014;
L_84cf8e: /* 84cf8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cf90: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 84cf93: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84cf99u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84cf99: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 84cf9c: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 84cfa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84cfa3: mov ecx, edi */
  ecx = edi;
/* 84cfa5: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x84cfabu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 84cfab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cfad: je 0x84d014 */
  if (zf) goto L_84d014;
L_84cfaf: /* 84cfaf: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 84cfb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84cfb3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 84cfb6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84cfbcu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84cfbc: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84cfbf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84cfc2: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 84cfc4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84cfc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84cfc7: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x84cfcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cfca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cfcc: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 84cfce: je 0x84d014 */
  if (zf) goto L_84d014;
L_84cfd0: /* 84cfd0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 84cfd3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84cfd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84cfd6: mov ecx, edi */
  ecx = edi;
/* 84cfd8: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x84cfdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84cfdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cfdd: je 0x84d014 */
  if (zf) goto L_84d014;
L_84cfdf: /* 84cfdf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84cfe2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84cfe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84cfe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84cfe6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84cfe9: call 0x6c8ba7 */
  esp -= 4; W32(esp, 0x84cfeeu); SPILL(); f_6c8ba7(); if (g_unwind) return; RELOAD();
/* 84cfee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84cff0: je 0x84d014 */
  if (zf) goto L_84d014;
L_84cff2: /* 84cff2: mov ecx, esi */
  ecx = esi;
/* 84cff4: call 0x6c1262 */
  esp -= 4; W32(esp, 0x84cff9u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 84cff9: mov ecx, esi */
  ecx = esi;
/* 84cffb: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x84d000u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 84d000: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 84d003: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 84d006: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d007: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 84d00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d00b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d00c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d00d: mov ecx, eax */
  ecx = eax;
/* 84d00f: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x84d014u); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
L_84d014: /* 84d014: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84d017: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84d01a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 84d01d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84d020: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84d021: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84d024: mov ecx, eax */
  ecx = eax;
/* 84d026: jmp 0x84cf60 */
  goto L_84cf60;
L_84d02b: /* 84d02b: cmp dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d02e: jne 0x84d05a */
  if (!zf) goto L_84d05a;
L_84d030: /* 84d030: push 0xb6cd28 */
  { uint32_t v = 0xb6cd28u; esp -= 4; W32(esp, v); }
/* 84d035: mov ecx, eax */
  ecx = eax;
/* 84d037: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84d03du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84d03d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d03f: je 0x84d05a */
  if (zf) goto L_84d05a;
L_84d041: /* 84d041: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84d043: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 84d049: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d04b: je 0x84d05a */
  if (zf) goto L_84d05a;
L_84d04d: /* 84d04d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d04e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d04f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d050: call 0x6c7680 */
  esp -= 4; W32(esp, 0x84d055u); SPILL(); f_6c7680(); if (g_unwind) return; RELOAD();
/* 84d055: jmp 0x84d0f6 */
  goto L_84d0f6;
L_84d05a: /* 84d05a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84d05c: mov al, byte ptr [ecx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x51u))) & 0xffu);
/* 84d05f: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d061: jne 0x84d08a */
  if (!zf) goto L_84d08a;
L_84d063: /* 84d063: mov edx, dword ptr [ecx + 0x278] */
  edx = R32((uint32_t)(ecx + 0x278u));
/* 84d069: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d06b: je 0x84d08a */
  if (zf) goto L_84d08a;
L_84d06d: /* 84d06d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84d070: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 84d073: cmp dword ptr [edx + 0x540], 0x1e */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84d07a: je 0x84d08a */
  if (zf) goto L_84d08a;
L_84d07c: /* 84d07c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d07d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d07e: mov ecx, esi */
  ecx = esi;
/* 84d080: call 0x84c560 */
  esp -= 4; W32(esp, 0x84d085u); SPILL(); f_84c560(); if (g_unwind) return; RELOAD();
/* 84d085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84d088: jmp 0x84d0f6 */
  goto L_84d0f6;
L_84d08a: /* 84d08a: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d08c: jne 0x84d131 */
  if (!zf) goto L_84d131;
L_84d092: /* 84d092: push 0xcc6848 */
  { uint32_t v = 0xcc6848u; esp -= 4; W32(esp, v); }
/* 84d097: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84d09du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84d09d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d09f: je 0x84d131 */
  if (zf) goto L_84d131;
L_84d0a5: /* 84d0a5: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 84d0a7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d0a9: je 0x84d0bc */
  if (zf) goto L_84d0bc;
L_84d0ab: /* 84d0ab: push 0xcc6848 */
  { uint32_t v = 0xcc6848u; esp -= 4; W32(esp, v); }
/* 84d0b0: mov ecx, esi */
  ecx = esi;
/* 84d0b2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84d0b8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84d0b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d0ba: jne 0x84d0be */
  if (!zf) goto L_84d0be;
L_84d0bc: /* 84d0bc: xor esi, esi */
  esi = 0;
L_84d0be: /* 84d0be: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 84d0c1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84d0c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d0c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d0c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d0c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d0c8: mov ecx, esi */
  ecx = esi;
/* 84d0ca: call 0x6c48a4 */
  esp -= 4; W32(esp, 0x84d0cfu); SPILL(); f_6c48a4(); if (g_unwind) return; RELOAD();
/* 84d0cf: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 84d0d5: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84d0d8: je 0x84d0f3 */
  if (zf) goto L_84d0f3;
L_84d0da: /* 84d0da: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84d0dc: mov ecx, dword ptr [eax + 0x278] */
  ecx = R32((uint32_t)(eax + 0x278u));
/* 84d0e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d0e4: je 0x84d0f3 */
  if (zf) goto L_84d0f3;
L_84d0e6: /* 84d0e6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84d0e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d0ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d0eb: call 0x84c560 */
  esp -= 4; W32(esp, 0x84d0f0u); SPILL(); f_84c560(); if (g_unwind) return; RELOAD();
/* 84d0f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84d0f3: /* 84d0f3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_84d0f6: /* 84d0f6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84d0f8: cmp byte ptr [eax + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d0fc: jne 0x84d25b */
  if (!zf) goto L_84d25b;
L_84d102: /* 84d102: mov ecx, dword ptr [eax + 0x2b4] */
  ecx = R32((uint32_t)(eax + 0x2b4u));
/* 84d108: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d10a: je 0x84d25b */
  if (zf) goto L_84d25b;
L_84d110: /* 84d110: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 84d116: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84d119: je 0x84d163 */
  if (zf) goto L_84d163;
L_84d11b: /* 84d11b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84d11e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 84d121: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 84d127: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84d12a: je 0x84d179 */
  if (zf) goto L_84d179;
L_84d12c: /* 84d12c: jmp 0x84d266 */
  goto L_84d266;
L_84d131: /* 84d131: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84d133: cmp byte ptr [ecx + 0x51], 0xc */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x51u))); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d137: jne 0x84d0f6 */
  if (!zf) goto L_84d0f6;
L_84d139: /* 84d139: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 84d13e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84d144u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84d144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d146: je 0x84d0f6 */
  if (zf) goto L_84d0f6;
L_84d148: /* 84d148: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84d14a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d14b: call 0x6cabb9 */
  esp -= 4; W32(esp, 0x84d150u); SPILL(); f_6cabb9(); if (g_unwind) return; RELOAD();
/* 84d150: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 84d153: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84d156: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d157: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d159: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d15a: mov ecx, eax */
  ecx = eax;
/* 84d15c: call 0x6c1f78 */
  esp -= 4; W32(esp, 0x84d161u); SPILL(); f_6c1f78(); if (g_unwind) return; RELOAD();
/* 84d161: jmp 0x84d0f6 */
  goto L_84d0f6;
L_84d163: /* 84d163: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84d166: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84d169: test dword ptr [eax + 0x534], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d173: je 0x84d25b */
  if (zf) goto L_84d25b;
L_84d179: /* 84d179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d17b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d17c: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84d17f: call 0x6c460b */
  esp -= 4; W32(esp, 0x84d184u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 84d184: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84d186: test dword ptr [ecx + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d190: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 84d194: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 84d198: mov byte ptr [ebp + 0xc], 0 */
  W8((uint32_t)(ebp + 0xcu), 0x0u);
/* 84d19c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 84d19f: je 0x84d1ab */
  if (zf) goto L_84d1ab;
L_84d1a1: /* 84d1a1: mov byte ptr [ebp + 0xd], 0x80 */
  W8((uint32_t)(ebp + 0xdu), 0x80u);
/* 84d1a5: mov byte ptr [ebp + 0xe], 0xff */
  W8((uint32_t)(ebp + 0xeu), 0xffu);
/* 84d1a9: jmp 0x84d1b3 */
  goto L_84d1b3;
L_84d1ab: /* 84d1ab: mov byte ptr [ebp + 0xd], 0x40 */
  W8((uint32_t)(ebp + 0xdu), 0x40u);
/* 84d1af: mov byte ptr [ebp + 0xe], 0x80 */
  W8((uint32_t)(ebp + 0xeu), 0x80u);
L_84d1b3: /* 84d1b3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84d1b5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 84d1b7: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 84d1ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d1bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d1bd: mov ecx, edi */
  ecx = edi;
/* 84d1bf: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 84d1c2: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x84d1c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84d1c5: xor ecx, ecx */
  ecx = 0;
L_84d1c7: /* 84d1c7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84d1c9: mov eax, dword ptr [edx + 0x2b4] */
  eax = R32((uint32_t)(edx + 0x2b4u));
/* 84d1cf: cmp ecx, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84d1d2: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 84d1d5: jge 0x84d24f */
  if ((sf == of)) goto L_84d24f;
L_84d1d7: /* 84d1d7: mov esi, ecx */
  esi = ecx;
/* 84d1d9: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 84d1dc: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 84d1df: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 84d1e1: xor ecx, ecx */
  ecx = 0;
L_84d1e3: /* 84d1e3: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 84d1e6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84d1e8: jge 0x84d23d */
  if ((sf == of)) goto L_84d23d;
L_84d1ea: /* 84d1ea: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 84d1ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d1ee: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 84d1f1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 84d1f4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 84d1f5: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x84d1f5);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 84d1f7: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* 84d1fa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d1fd: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 84d200: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 84d203: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 84d205: mov eax, esp */
  eax = esp;
/* 84d207: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 84d209: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 84d20c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 84d20f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 84d212: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 84d215: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 84d218: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 84d21b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84d21d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d220: mov edx, esp */
  edx = esp;
/* 84d222: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 84d224: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 84d227: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84d22a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 84d22d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84d230: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84d233: call 0x6cc74d */
  esp -= 4; W32(esp, 0x84d238u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 84d238: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84d23b: jmp 0x84d1e3 */
  goto L_84d1e3;
L_84d23d: /* 84d23d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 84d240: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 84d243: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 84d246: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84d249: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 84d24a: jmp 0x84d1c7 */
  goto L_84d1c7;
L_84d24f: /* 84d24f: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84d252: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84d256: call 0x6cadcb */
  esp -= 4; W32(esp, 0x84d25bu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_84d25b: /* 84d25b: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 84d261: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84d264: je 0x84d273 */
  if (zf) goto L_84d273;
L_84d266: /* 84d266: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84d268: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84d26a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d26b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d26c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d26d: call dword ptr [eax + 0x100] */
  { uint32_t t = R32((uint32_t)(eax + 0x100u)); esp -= 4; W32(esp, 0x84d273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84d273: /* 84d273: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84d276: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 84d27c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d27e: je 0x84d287 */
  if (zf) goto L_84d287;
L_84d280: /* 84d280: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d282: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x84d287u); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_84d287: /* 84d287: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84d28a: mov eax, dword ptr [ecx + 0x118] */
  eax = R32((uint32_t)(ecx + 0x118u));
/* 84d290: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d292: je 0x84d3d3 */
  if (zf) goto L_84d3d3;
L_84d298: /* 84d298: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 84d29a: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 84d2a0: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84d2a2: jne 0x84d2ad */
  if (!zf) goto L_84d2ad;
L_84d2a4: /* 84d2a4: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84d2a7: je 0x84d3d3 */
  if (zf) goto L_84d3d3;
L_84d2ad: /* 84d2ad: mov al, byte ptr [ecx + 0x51] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x51u))) & 0xffu);
/* 84d2b0: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d2b2: je 0x84d2c0 */
  if (zf) goto L_84d2c0;
L_84d2b4: /* 84d2b4: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d2b6: je 0x84d2c0 */
  if (zf) goto L_84d2c0;
L_84d2b8: /* 84d2b8: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d2ba: jne 0x84d3d3 */
  if (!zf) goto L_84d3d3;
L_84d2c0: /* 84d2c0: mov cl, byte ptr [ecx + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 84d2c3: cmp cl, 0xd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d2c6: je 0x84d3d3 */
  if (zf) goto L_84d3d3;
L_84d2cc: /* 84d2cc: cmp cl, 0xe */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84d2cf: je 0x84d3d3 */
  if (zf) goto L_84d3d3;
L_84d2d5: /* 84d2d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84d2d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d2d8: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84d2db: call 0x6c460b */
  esp -= 4; W32(esp, 0x84d2e0u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 84d2e0: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 84d2e5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84d2e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d2e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d2ea: mov ecx, edi */
  ecx = edi;
/* 84d2ec: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 84d2f0: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x84d2f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84d2f3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 84d2f5: mov ecx, dword ptr [eax + 0x2d8] */
  ecx = R32((uint32_t)(eax + 0x2d8u));
/* 84d2fb: mov edx, dword ptr [eax + 0x2d4] */
  edx = R32((uint32_t)(eax + 0x2d4u));
/* 84d301: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 84d303: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d304: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d305: mov byte ptr [ebp + 8], 0x80 */
  W8((uint32_t)(ebp + 0x8u), 0x80u);
/* 84d309: mov byte ptr [ebp + 9], 0x80 */
  W8((uint32_t)(ebp + 0x9u), 0x80u);
/* 84d30d: mov byte ptr [ebp + 0xa], 0x40 */
  W8((uint32_t)(ebp + 0xau), 0x40u);
/* 84d311: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 84d315: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84d318: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d319: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d31c: mov edx, esp */
  edx = esp;
/* 84d31e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 84d325: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 84d328: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84d32a: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 84d331: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 84d334: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84d337: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d33a: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 84d341: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 84d344: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84d347: mov edx, esp */
  edx = esp;
/* 84d349: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 84d350: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 84d353: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84d355: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 84d35c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 84d35f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84d362: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d365: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 84d36c: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 84d36f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84d372: mov edx, esp */
  edx = esp;
/* 84d374: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 84d37b: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 84d37e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84d380: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 84d387: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 84d38a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84d38d: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84d392: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 84d399: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 84d39c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 84d39f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84d3a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d3a4: mov edx, esp */
  edx = esp;
/* 84d3a6: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84d3a8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84d3ab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84d3ae: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84d3b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d3b2: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84d3b5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 84d3b8: call 0x6c118b */
  esp -= 4; W32(esp, 0x84d3bdu); SPILL(); f_6c118b(); if (g_unwind) return; RELOAD();
/* 84d3bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d3bf: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84d3c2: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x84d3c7u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 84d3c7: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 84d3ca: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84d3ce: call 0x6cadcb */
  esp -= 4; W32(esp, 0x84d3d3u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_84d3d3: /* 84d3d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84d3d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84d3d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84d3d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84d3df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84d3e0: mov esp, ebp */
  esp = ebp;
/* 84d3e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84d3e3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_84d3e6(void) {
  LOAD_REGS();
L_84d3e6: /* 84d3e6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 84d3e9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84d3ee: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 84d3f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d3f2: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 84d3f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84d3fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84d3fa(); return;
}

void f_84d3fa(void) {
  LOAD_REGS();
L_84d3fa: /* 84d3fa: push 0xa16968 */
  { uint32_t v = 0xa16968u; esp -= 4; W32(esp, v); }
/* 84d3ff: push 0xae44b8 */
  { uint32_t v = 0xae44b8u; esp -= 4; W32(esp, v); }
/* 84d404: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84d40au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84d40a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84d40d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d40f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d411: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84d416u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84d416: guest_badaddr(0x84d416); return;
}

void f_84d5c0(void) {
  LOAD_REGS();
L_84d5c0: /* 84d5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84d5c1: mov ebp, esp */
  ebp = esp;
/* 84d5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84d5c5: push 0x9d3cf0 */
  { uint32_t v = 0x9d3cf0u; esp -= 4; W32(esp, v); }
/* 84d5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84d5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84d5d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d5db: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 84d5de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d5df: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84d5e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d5e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d5e4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 84d5e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84d5ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d5ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d5ed: mov esi, ecx */
  esi = ecx;
/* 84d5ef: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84d5f6: call 0x6c19ec */
  esp -= 4; W32(esp, 0x84d5fbu); SPILL(); f_6c19ec(); if (g_unwind) return; RELOAD();
/* 84d5fb: mov eax, dword ptr [esi + 0x278] */
  eax = R32((uint32_t)(esi + 0x278u));
/* 84d601: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d603: je 0x84d611 */
  if (zf) goto L_84d611;
L_84d605: /* 84d605: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d607: mov ecx, ebx */
  ecx = ebx;
/* 84d609: call 0x84c560 */
  esp -= 4; W32(esp, 0x84d60eu); SPILL(); f_84c560(); if (g_unwind) return; RELOAD();
/* 84d60e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84d611: /* 84d611: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84d614: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84d615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84d616: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84d61d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84d61e: mov esp, ebp */
  esp = ebp;
/* 84d620: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84d621: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_84d624(void) {
  LOAD_REGS();
L_84d624: /* 84d624: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84d627: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84d62c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 84d62f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d630: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84d633: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84d638u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84d638(); return;
}

void f_84d638(void) {
  LOAD_REGS();
L_84d638: /* 84d638: push 0xa1699c */
  { uint32_t v = 0xa1699cu; esp -= 4; W32(esp, v); }
/* 84d63d: push 0xae44c0 */
  { uint32_t v = 0xae44c0u; esp -= 4; W32(esp, v); }
/* 84d642: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84d648u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84d648: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84d64b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d64d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d64f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84d654u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84d654: guest_badaddr(0x84d654); return;
}

void f_84d690(void) {
  LOAD_REGS();
L_84d690: /* 84d690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84d691: mov ebp, esp */
  ebp = esp;
/* 84d693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84d695: push 0x9d3d00 */
  { uint32_t v = 0x9d3d00u; esp -= 4; W32(esp, v); }
/* 84d69a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84d6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d6a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84d6a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d6ab: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 84d6ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d6af: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 84d6b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d6b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d6b4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 84d6b7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84d6ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d6bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d6bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d6bd: mov esi, ecx */
  esi = ecx;
/* 84d6bf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84d6c6: call 0x6c19ec */
  esp -= 4; W32(esp, 0x84d6cbu); SPILL(); f_6c19ec(); if (g_unwind) return; RELOAD();
/* 84d6cb: mov eax, dword ptr [esi + 0x278] */
  eax = R32((uint32_t)(esi + 0x278u));
/* 84d6d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d6d3: je 0x84d6e1 */
  if (zf) goto L_84d6e1;
L_84d6d5: /* 84d6d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d6d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d6d7: mov ecx, ebx */
  ecx = ebx;
/* 84d6d9: call 0x84c560 */
  esp -= 4; W32(esp, 0x84d6deu); SPILL(); f_84c560(); if (g_unwind) return; RELOAD();
/* 84d6de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84d6e1: /* 84d6e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84d6e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84d6e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84d6e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84d6ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84d6ee: mov esp, ebp */
  esp = ebp;
/* 84d6f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84d6f1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_84d6f4(void) {
  LOAD_REGS();
L_84d6f4: /* 84d6f4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84d6f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84d6fc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 84d6ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d700: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84d703: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84d708u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84d708(); return;
}

void f_84d708(void) {
  LOAD_REGS();
L_84d708: /* 84d708: push 0xa169e0 */
  { uint32_t v = 0xa169e0u; esp -= 4; W32(esp, v); }
/* 84d70d: push 0xae44c8 */
  { uint32_t v = 0xae44c8u; esp -= 4; W32(esp, v); }
/* 84d712: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84d718u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84d718: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84d71b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d71d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d71f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84d724u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84d724: guest_badaddr(0x84d724); return;
}

void f_84d760(void) {
  LOAD_REGS();
L_84d760: /* 84d760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84d761: mov ebp, esp */
  ebp = esp;
/* 84d763: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 84d765: push 0x9d3d34 */
  { uint32_t v = 0x9d3d34u; esp -= 4; W32(esp, v); }
/* 84d76a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84d770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d771: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 84d778: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d77e: mov eax, dword ptr [0xcc9a6c] */
  eax = R32((uint32_t)(0xcc9a6cu));
/* 84d783: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d785: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84d786: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84d787: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d788: mov ebx, ecx */
  ebx = ecx;
/* 84d78a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84d78d: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 84d790: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84d797: jne 0x84d857 */
  if (!zf) goto L_84d857;
L_84d79d: /* 84d79d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d79f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 84d7a2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84d7a8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84d7a8: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84d7ad: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 84d7b2: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84d7b8u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84d7b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d7ba: jne 0x84d7d4 */
  if (!zf) goto L_84d7d4;
L_84d7bc: /* 84d7bc: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84d7c1: push 0xae4590 */
  { uint32_t v = 0xae4590u; esp -= 4; W32(esp, v); }
/* 84d7c6: push 0xae45d4 */
  { uint32_t v = 0xae45d4u; esp -= 4; W32(esp, v); }
/* 84d7cb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84d7d1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84d7d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84d7d4: /* 84d7d4: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84d7dau); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84d7da: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84d7e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84d7e2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84d7e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d7e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d7e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d7ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d7ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d7ee: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 84d7f3: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84d7f9u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84d7f9: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84d7ff: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84d802: push 0xcc9a6c */
  { uint32_t v = 0xcc9a6cu; esp -= 4; W32(esp, v); }
/* 84d807: mov dword ptr [0xcc9a6c], eax */
  W32((uint32_t)(0xcc9a6cu), eax);
/* 84d80c: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84d811u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84d811: test byte ptr [0xcc9a68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc9a68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84d818: jne 0x84d847 */
  if (!zf) goto L_84d847;
L_84d81a: /* 84d81a: or dword ptr [0xcc9a68], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc9a68u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc9a68u), r);
  }
/* 84d821: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84d825: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 84d829: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 84d82d: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 84d831: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84d834: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d835: mov ecx, 0xcc9a50 */
  ecx = 0xcc9a50u;
/* 84d83a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84d83e: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x84d843u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 84d843: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_84d847: /* 84d847: mov ecx, dword ptr [0xcc9a6c] */
  ecx = R32((uint32_t)(0xcc9a6cu));
/* 84d84d: push 0xcc9a50 */
  { uint32_t v = 0xcc9a50u; esp -= 4; W32(esp, v); }
/* 84d852: call 0x6cccfc */
  esp -= 4; W32(esp, 0x84d857u); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_84d857: /* 84d857: mov eax, dword ptr [0xcc9a4c] */
  eax = R32((uint32_t)(0xcc9a4cu));
/* 84d85c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d85e: jne 0x84d902 */
  if (!zf) goto L_84d902;
L_84d864: /* 84d864: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d866: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 84d869: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84d86fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84d86f: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84d874: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 84d879: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84d87fu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84d87f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d881: jne 0x84d89b */
  if (!zf) goto L_84d89b;
L_84d883: /* 84d883: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84d888: push 0xae4528 */
  { uint32_t v = 0xae4528u; esp -= 4; W32(esp, v); }
/* 84d88d: push 0xae456c */
  { uint32_t v = 0xae456cu; esp -= 4; W32(esp, v); }
/* 84d892: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84d898u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84d898: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84d89b: /* 84d89b: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84d8a1u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84d8a1: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 84d8a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84d8a9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84d8ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d8ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84d8af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d8b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d8b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d8b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d8b5: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 84d8ba: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x84d8c0u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 84d8c0: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84d8c6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84d8c9: push 0xcc9a4c */
  { uint32_t v = 0xcc9a4cu; esp -= 4; W32(esp, v); }
/* 84d8ce: mov dword ptr [0xcc9a4c], eax */
  W32((uint32_t)(0xcc9a4cu), eax);
/* 84d8d3: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84d8d8u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 84d8d8: mov edx, dword ptr [0xcc9a4c] */
  edx = R32((uint32_t)(0xcc9a4cu));
/* 84d8de: mov eax, dword ptr [0xcc9a6c] */
  eax = R32((uint32_t)(0xcc9a6cu));
/* 84d8e3: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 84d8e6: mov ecx, dword ptr [0xcc9a4c] */
  ecx = R32((uint32_t)(0xcc9a4cu));
/* 84d8ec: mov byte ptr [ecx + 0x3c], 7 */
  W8((uint32_t)(ecx + 0x3cu), 0x7u);
/* 84d8f0: mov eax, dword ptr [0xcc9a4c] */
  eax = R32((uint32_t)(0xcc9a4cu));
/* 84d8f5: or dword ptr [eax + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 84d8f9: mov eax, dword ptr [0xcc9a4c] */
  eax = R32((uint32_t)(0xcc9a4cu));
/* 84d8fe: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_84d902: /* 84d902: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 84d905: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84d907: mov ecx, edi */
  ecx = edi;
/* 84d909: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x84d90bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84d90b: mov ecx, dword ptr [ebx + 0x1d0] */
  ecx = R32((uint32_t)(ebx + 0x1d0u));
/* 84d911: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d913: je 0x84d9dd */
  if (zf) goto L_84d9dd;
L_84d919: /* 84d919: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 84d91e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84d921: jne 0x84d934 */
  if (!zf) goto L_84d934;
L_84d923: /* 84d923: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 84d926: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 84d929: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 84d92c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d92e: je 0x84d9dd */
  if (zf) goto L_84d9dd;
L_84d934: /* 84d934: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 84d937: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 84d93a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d93c: je 0x84d94e */
  if (zf) goto L_84d94e;
L_84d93e: /* 84d93e: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84d945: jne 0x84d94e */
  if (!zf) goto L_84d94e;
L_84d947: /* 84d947: mov eax, 1 */
  eax = 0x1u;
/* 84d94c: jmp 0x84d950 */
  goto L_84d950;
L_84d94e: /* 84d94e: xor eax, eax */
  eax = 0;
L_84d950: /* 84d950: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84d952: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 84d954: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 84d956: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84d959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d95a: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 84d95c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84d95e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84d960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d961: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d962: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 84d964: mov ecx, edi */
  ecx = edi;
/* 84d966: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x84d969u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84d969: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 84d96c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84d96d: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84d972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84d973: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84d979: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84d97eu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84d97e: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 84d981: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 84d987: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84d98b: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 84d98f: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 84d993: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 84d997: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84d99a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d99b: mov ecx, dword ptr [0xcc9a4c] */
  ecx = R32((uint32_t)(0xcc9a4cu));
/* 84d9a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84d9a2: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 84d9a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d9a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d9ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d9ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d9af: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84d9b2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84d9b6: mov ecx, eax */
  ecx = eax;
/* 84d9b8: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 84d9be: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 84d9c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84d9c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d9c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84d9c9: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84d9ceu); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84d9ce: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84d9d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84d9d8: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84d9ddu); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
L_84d9dd: /* 84d9dd: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 84d9e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d9e2: jne 0x84da8a */
  if (!zf) goto L_84da8a;
L_84d9e8: /* 84d9e8: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 84d9eb: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 84d9ee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84d9f0: je 0x84da8a */
  if (zf) goto L_84da8a;
L_84d9f6: /* 84d9f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84d9f8: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x84d9feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84d9fe: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84da01: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84da04: mov ecx, dword ptr [edx + 0x548] */
  ecx = R32((uint32_t)(edx + 0x548u));
/* 84da0a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84da0c: mov esi, dword ptr [eax + 0x16c] */
  esi = R32((uint32_t)(eax + 0x16cu));
/* 84da12: je 0x84da3f */
  if (zf) goto L_84da3f;
L_84da14: /* 84da14: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 84da16: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x84da1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84da1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84da1e: je 0x84da3f */
  if (zf) goto L_84da3f;
L_84da20: /* 84da20: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84da23: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 84da26: mov eax, dword ptr [edx + 0x548] */
  eax = R32((uint32_t)(edx + 0x548u));
/* 84da2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84da2d: call 0x6cacdb */
  esp -= 4; W32(esp, 0x84da32u); SPILL(); f_6cacdb(); if (g_unwind) return; RELOAD();
/* 84da32: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84da35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84da37: je 0x84da3f */
  if (zf) goto L_84da3f;
L_84da39: /* 84da39: mov esi, dword ptr [eax + 0x468] */
  esi = R32((uint32_t)(eax + 0x468u));
L_84da3f: /* 84da3f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84da41: je 0x84da8a */
  if (zf) goto L_84da8a;
L_84da43: /* 84da43: test byte ptr [esi + 0x418], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x418u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84da4a: je 0x84da8a */
  if (zf) goto L_84da8a;
L_84da4c: /* 84da4c: mov ecx, dword ptr [0xcfab20] */
  ecx = R32((uint32_t)(0xcfab20u));
/* 84da52: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84da55: je 0x84da6a */
  if (zf) goto L_84da6a;
L_84da57: /* 84da57: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84da5a: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x84da5fu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 84da5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84da61: jne 0x84da6a */
  if (!zf) goto L_84da6a;
L_84da63: /* 84da63: mov eax, 1 */
  eax = 0x1u;
/* 84da68: jmp 0x84da6c */
  goto L_84da6c;
L_84da6a: /* 84da6a: xor eax, eax */
  eax = 0;
L_84da6c: /* 84da6c: mov ecx, dword ptr [esi + 0x41c] */
  ecx = R32((uint32_t)(esi + 0x41cu));
/* 84da72: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84da74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84da75: mov ecx, dword ptr [esi + 0x424] */
  ecx = R32((uint32_t)(esi + 0x424u));
/* 84da7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84da7c: mov ecx, dword ptr [esi + 0x420] */
  ecx = R32((uint32_t)(esi + 0x420u));
/* 84da82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84da83: mov ecx, edi */
  ecx = edi;
/* 84da85: jmp 0x84dcf8 */
  goto L_84dcf8;
L_84da8a: /* 84da8a: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 84da90: mov ecx, dword ptr [ebx + 0x1bc] */
  ecx = R32((uint32_t)(ebx + 0x1bcu));
/* 84da96: mov esi, dword ptr [ecx + 0x8c] */
  esi = R32((uint32_t)(ecx + 0x8cu));
/* 84da9c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 84da9f: mov edi, dword ptr [esi + edx*8 + 0x11c] */
  edi = R32((uint32_t)(esi + edx*8 + 0x11cu));
/* 84daa6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84daa8: jne 0x84daaf */
  if (!zf) goto L_84daaf;
L_84daaa: /* 84daaa: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 84daad: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
L_84daaf: /* 84daaf: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 84dab2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dab4: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 84dab7: mov esi, dword ptr [ecx + 0x30] */
  esi = R32((uint32_t)(ecx + 0x30u));
/* 84daba: jne 0x84dcc0 */
  if (!zf) goto L_84dcc0;
L_84dac0: /* 84dac0: mov ecx, esi */
  ecx = esi;
/* 84dac2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dac4: je 0x84dcc0 */
  if (zf) goto L_84dcc0;
L_84daca: /* 84daca: mov edx, dword ptr [ecx + 0x534] */
  edx = R32((uint32_t)(ecx + 0x534u));
/* 84dad0: test dh, 0x48 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84dad3: je 0x84dcc0 */
  if (zf) goto L_84dcc0;
L_84dad9: /* 84dad9: mov ecx, dword ptr [esi + 0x61c] */
  ecx = R32((uint32_t)(esi + 0x61cu));
/* 84dadf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84dae1: je 0x84db33 */
  if (zf) goto L_84db33;
L_84dae3: /* 84dae3: test byte ptr [edi + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84daea: je 0x84db0d */
  if (zf) goto L_84db0d;
L_84daec: /* 84daec: fld dword ptr [esi + 0x60c] */
  { double v = F32((uint32_t)(esi + 0x60cu)); FPUSH(v); }
/* 84daf2: mov edx, dword ptr [0xcfab14] */
  edx = R32((uint32_t)(0xcfab14u));
/* 84daf8: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 84dafa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84dafc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84daff: jp 0x84db0d */
  if (pf) goto L_84db0d;
L_84db01: /* 84db01: mov eax, dword ptr [edi + 0x378] */
  eax = R32((uint32_t)(edi + 0x378u));
/* 84db07: mov dword ptr [esi + 0x608], eax */
  W32((uint32_t)(esi + 0x608u), eax);
L_84db0d: /* 84db0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84db0f: jne 0x84db1d */
  if (!zf) goto L_84db1d;
L_84db11: /* 84db11: mov dword ptr [esi + 0x618], 0x49742400 */
  W32((uint32_t)(esi + 0x618u), 0x49742400u);
/* 84db1b: jmp 0x84db27 */
  goto L_84db27;
L_84db1d: /* 84db1d: mov dword ptr [esi + 0x618], 0 */
  W32((uint32_t)(esi + 0x618u), 0x0u);
L_84db27: /* 84db27: mov ecx, dword ptr [ebx + 0x1c8] */
  ecx = R32((uint32_t)(ebx + 0x1c8u));
/* 84db2d: mov dword ptr [esi + 0x61c], ecx */
  W32((uint32_t)(esi + 0x61cu), ecx);
L_84db33: /* 84db33: fld dword ptr [edi + 0x384] */
  { double v = F32((uint32_t)(edi + 0x384u)); FPUSH(v); }
/* 84db39: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84db3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84db41: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84db44: jnp 0x84db54 */
  if (!pf) goto L_84db54;
L_84db46: /* 84db46: fld dword ptr [esi + 0x618] */
  { double v = F32((uint32_t)(esi + 0x618u)); FPUSH(v); }
/* 84db4c: fdiv dword ptr [edi + 0x384] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x384u)));
/* 84db52: jmp 0x84db5a */
  goto L_84db5a;
L_84db54: /* 84db54: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_84db5a: /* 84db5a: test byte ptr [edi + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84db61: je 0x84db7d */
  if (zf) goto L_84db7d;
L_84db63: /* 84db63: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 84db69: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 84db6f: mov ebx, dword ptr [edi + 0x378] */
  ebx = R32((uint32_t)(edi + 0x378u));
/* 84db75: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84db78: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 84db7b: jmp 0x84db92 */
  goto L_84db92;
L_84db7d: /* 84db7d: mov eax, dword ptr [0xcfab14] */
  eax = R32((uint32_t)(0xcfab14u));
/* 84db82: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84db84: mov ebx, dword ptr [esi + 0x608] */
  ebx = R32((uint32_t)(esi + 0x608u));
/* 84db8a: mov edx, ecx */
  edx = ecx;
/* 84db8c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84db8f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_84db92: /* 84db92: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 84db98: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 84db9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84db9d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84dba0: je 0x84dbaf */
  if (zf) goto L_84dbaf;
L_84dba2: /* 84dba2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84dba5: mov ecx, dword ptr [eax + 0x1c8] */
  ecx = R32((uint32_t)(eax + 0x1c8u));
/* 84dbab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dbad: jne 0x84dbd9 */
  if (!zf) goto L_84dbd9;
L_84dbaf: /* 84dbaf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84dbb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84dbb4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84dbb7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 84dbbd: mov dword ptr [esi + 0x60c], ecx */
  W32((uint32_t)(esi + 0x60cu), ecx);
/* 84dbc3: mov dword ptr [esi + 0x610], edx */
  W32((uint32_t)(esi + 0x610u), edx);
/* 84dbc9: mov dword ptr [esi + 0x608], ebx */
  W32((uint32_t)(esi + 0x608u), ebx);
/* 84dbcf: mov dword ptr [esi + 0x618], 0x49742400 */
  W32((uint32_t)(esi + 0x618u), 0x49742400u);
L_84dbd9: /* 84dbd9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84dbdc: movzx eax, byte ptr [esi + 0x60a] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x60au)));
/* 84dbe3: fsub dword ptr [esi + 0x60c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x60cu)));
/* 84dbe9: movzx ecx, byte ptr [ebp - 0x16] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffeau)));
/* 84dbed: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 84dbef: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84dbf1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 84dbf4: fadd dword ptr [esi + 0x60c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x60cu)));
/* 84dbfa: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 84dbfd: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84dc00: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 84dc03: fsub dword ptr [esi + 0x610] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x610u)));
/* 84dc09: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84dc0b: fadd dword ptr [esi + 0x610] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x610u)));
/* 84dc11: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 84dc14: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84dc17: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84dc19: fiadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)));
/* 84dc1c: call 0x99c958 */
  esp -= 4; W32(esp, 0x84dc21u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 84dc21: mov byte ptr [ebp - 0x1a], al */
  W8((uint32_t)(ebp + 0xffffffe6u), (eax & 0xffu));
/* 84dc24: movzx eax, byte ptr [esi + 0x609] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x609u)));
/* 84dc2b: movzx edx, bh */
  edx = (uint32_t)(((ebx >> 8) & 0xffu));
/* 84dc2e: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 84dc30: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84dc33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84dc36: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84dc39: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84dc3b: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 84dc3e: call 0x99c958 */
  esp -= 4; W32(esp, 0x84dc43u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 84dc43: mov byte ptr [ebp - 0x1b], al */
  W8((uint32_t)(ebp + 0xffffffe5u), (eax & 0xffu));
/* 84dc46: movzx eax, byte ptr [esi + 0x608] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x608u)));
/* 84dc4d: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 84dc50: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 84dc52: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 84dc55: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84dc58: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84dc5b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84dc5d: fiadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 84dc60: call 0x99c958 */
  esp -= 4; W32(esp, 0x84dc65u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 84dc65: fstp dword ptr [esi + 0x614] */
  WF32((uint32_t)(esi + 0x614u), ST0); FPOP();
/* 84dc6b: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* 84dc6e: test byte ptr [edi + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84dc75: jne 0x84dca2 */
  if (!zf) goto L_84dca2;
L_84dc77: /* 84dc77: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 84dc7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84dc7f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84dc82: jnp 0x84dca4 */
  if (!pf) goto L_84dca4;
L_84dc84: /* 84dc84: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
L_84dc87: /* 84dc87: xor eax, eax */
  eax = 0;
L_84dc89: /* 84dc89: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84dc8c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 84dc8f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84dc91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84dc92: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84dc95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84dc96: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 84dc99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84dc9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84dc9b: mov ecx, edi */
  ecx = edi;
/* 84dc9d: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x84dca0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84dca0: jmp 0x84dd02 */
  goto L_84dd02;
L_84dca2: /* 84dca2: fstp st(0) */
  STI(0) = ST0; FPOP();
L_84dca4: /* 84dca4: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84dca7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84dcaa: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 84dcad: test dword ptr [eax + 0x534], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dcb7: je 0x84dc87 */
  if (zf) goto L_84dc87;
L_84dcb9: /* 84dcb9: mov eax, 1 */
  eax = 0x1u;
/* 84dcbe: jmp 0x84dc89 */
  goto L_84dc89;
L_84dcc0: /* 84dcc0: test byte ptr [edi + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84dcc7: je 0x84dcdc */
  if (zf) goto L_84dcdc;
L_84dcc9: /* 84dcc9: test dword ptr [esi + 0x534], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x534u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dcd3: je 0x84dcdc */
  if (zf) goto L_84dcdc;
L_84dcd5: /* 84dcd5: mov eax, 1 */
  eax = 0x1u;
/* 84dcda: jmp 0x84dcde */
  goto L_84dcde;
L_84dcdc: /* 84dcdc: xor eax, eax */
  eax = 0;
L_84dcde: /* 84dcde: mov esi, dword ptr [edi + 0x378] */
  esi = R32((uint32_t)(edi + 0x378u));
/* 84dce4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84dce7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84dce9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84dcea: mov esi, dword ptr [edi + 0x380] */
  esi = R32((uint32_t)(edi + 0x380u));
/* 84dcf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84dcf1: mov esi, dword ptr [edi + 0x37c] */
  esi = R32((uint32_t)(edi + 0x37cu));
/* 84dcf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_84dcf8: /* 84dcf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84dcf9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x84dcfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84dcfc: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 84dcff: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_84dd02: /* 84dd02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84dd03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84dd04: call 0x6c1b86 */
  esp -= 4; W32(esp, 0x84dd09u); SPILL(); f_6c1b86(); if (g_unwind) return; RELOAD();
/* 84dd09: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 84dd0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84dd0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dd11: jne 0x84dd29 */
  if (!zf) goto L_84dd29;
L_84dd13: /* 84dd13: mov eax, dword ptr [esi + 0x1bc] */
  eax = R32((uint32_t)(esi + 0x1bcu));
/* 84dd19: mov ecx, dword ptr [eax + 0x115c] */
  ecx = R32((uint32_t)(eax + 0x115cu));
/* 84dd1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dd21: je 0x84dd29 */
  if (zf) goto L_84dd29;
L_84dd23: /* 84dd23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84dd24: call 0x6c67a3 */
  esp -= 4; W32(esp, 0x84dd29u); SPILL(); f_6c67a3(); if (g_unwind) return; RELOAD();
L_84dd29: /* 84dd29: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* 84dd2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dd31: je 0x84ddc2 */
  if (zf) goto L_84ddc2;
L_84dd37: /* 84dd37: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 84dd3c: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84dd3f: jne 0x84dd4e */
  if (!zf) goto L_84dd4e;
L_84dd41: /* 84dd41: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 84dd44: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 84dd47: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 84dd4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84dd4c: je 0x84ddc2 */
  if (zf) goto L_84ddc2;
L_84dd4e: /* 84dd4e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84dd51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84dd52: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84dd57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84dd58: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84dd5e: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x84dd63u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 84dd63: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 84dd66: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 84dd6c: mov byte ptr [ebp + 8], 0 */
  W8((uint32_t)(ebp + 0x8u), 0x0u);
/* 84dd70: mov byte ptr [ebp + 9], 0 */
  W8((uint32_t)(ebp + 0x9u), 0x0u);
/* 84dd74: mov byte ptr [ebp + 0xa], 0 */
  W8((uint32_t)(ebp + 0xau), 0x0u);
/* 84dd78: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 84dd7c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 84dd7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84dd80: mov ecx, dword ptr [0xcc9a4c] */
  ecx = R32((uint32_t)(0xcc9a4cu));
/* 84dd86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84dd87: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 84dd8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84dd8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84dd90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84dd92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84dd94: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84dd97: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 84dd9b: mov ecx, eax */
  ecx = eax;
/* 84dd9d: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 84dda3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 84dda7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 84ddaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ddac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84ddae: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x84ddb3u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 84ddb3: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 84ddb9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84ddbd: call 0x6caac4 */
  esp -= 4; W32(esp, 0x84ddc2u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
L_84ddc2: /* 84ddc2: mov eax, dword ptr [0xcd8a5c] */
  eax = R32((uint32_t)(0xcd8a5cu));
/* 84ddc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84ddc9: je 0x84de03 */
  if (zf) goto L_84de03;
L_84ddcb: /* 84ddcb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84ddcd: mov ecx, edi */
  ecx = edi;
/* 84ddcf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x84ddd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ddd1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 84ddd3: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 84ddd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84ddd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84ddd9: mov ecx, edi */
  ecx = edi;
/* 84dddb: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x84dddeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ddde: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84dde0: lea eax, [esi + 0x94] */
  eax = (uint32_t)(esi + 0x94u);
/* 84dde6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84dde7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 84dde9: mov ecx, edi */
  ecx = edi;
/* 84ddeb: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x84ddeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84ddee: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 84ddf4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84ddf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84ddf7: call 0x6c839b */
  esp -= 4; W32(esp, 0x84ddfcu); SPILL(); f_6c839b(); if (g_unwind) return; RELOAD();
/* 84ddfc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84ddfe: mov ecx, edi */
  ecx = edi;
/* 84de00: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x84de03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84de03: /* 84de03: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84de06: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 84de09: mov ebx, dword ptr [ecx + 0x648] */
  ebx = R32((uint32_t)(ecx + 0x648u));
/* 84de0f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84de11: je 0x84de30 */
  if (zf) goto L_84de30;
L_84de13: /* 84de13: mov edx, dword ptr [0xb7e434] */
  edx = R32((uint32_t)(0xb7e434u));
/* 84de19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84de1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84de1c: mov ecx, ebx */
  ecx = ebx;
/* 84de1e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x84de24u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 84de24: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 84de26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84de28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84de2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84de2b: mov ecx, ebx */
  ecx = ebx;
/* 84de2d: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x84de30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_84de30: /* 84de30: mov ecx, dword ptr [0xce6f04] */
  ecx = R32((uint32_t)(0xce6f04u));
/* 84de36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84de38: je 0x84de44 */
  if (zf) goto L_84de44;
L_84de3a: /* 84de3a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 84de3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84de3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84de3f: call 0x6c63de */
  esp -= 4; W32(esp, 0x84de44u); SPILL(); f_6c63de(); if (g_unwind) return; RELOAD();
L_84de44: /* 84de44: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 84de46: mov ecx, edi */
  ecx = edi;
/* 84de48: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x84de4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84de4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84de4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84de4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84de50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84de57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84de58: mov esp, ebp */
  esp = ebp;
/* 84de5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84de5b: ret 4 */
  esp += 8; SPILL(); return;
}
