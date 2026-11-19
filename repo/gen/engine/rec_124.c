#include "recomp.h"
#include "rec_mod.h"

void f_921e60(void) {
  LOAD_REGS();
L_921e60: /* 921e60: sub esp, 0x150 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x150u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 921e66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 921e67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 921e68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 921e69: mov esi, dword ptr [esp + 0x160] */
  esi = R32((uint32_t)(esp + 0x160u));
/* 921e70: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 921e73: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 921e76: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 921e79: mov ebp, dword ptr [esi + 0x48] */
  ebp = R32((uint32_t)(esi + 0x48u));
/* 921e7c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 921e7f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 921e81: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 921e85: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 921e88: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 921e8a: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 921e8e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 921e91: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 921e93: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 921e97: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 921e9a: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 921e9c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 921e9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 921e9f: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 921ea1: mov dword ptr [esp + 0xe8], ebx */
  W32((uint32_t)(esp + 0xe8u), ebx);
/* 921ea8: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 921eac: xor edi, edi */
  edi = 0;
/* 921eae: mov edi, edi */
  edi = edi;
L_921eb0: /* 921eb0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 921eb3: mov eax, ecx */
  eax = ecx;
/* 921eb5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921eb6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921eb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921ebb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921ebe: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 921ec4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921ec7: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 921eca: jns 0x921ed1 */
  if (!sf) goto L_921ed1;
L_921ecc: /* 921ecc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 921ecd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 921ed0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_921ed1: /* 921ed1: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 921ed4: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 921ed7: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 921ede: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 921ee1: mov eax, ecx */
  eax = ecx;
/* 921ee3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921ee4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921ee7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921ee9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921eec: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 921ef2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 921ef5: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 921ef8: jns 0x921eff */
  if (!sf) goto L_921eff;
L_921efa: /* 921efa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 921efb: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 921efe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_921eff: /* 921eff: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 921f02: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 921f03: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921f06: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 921f0a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 921f11: jne 0x921eb0 */
  if (!zf) goto L_921eb0;
L_921f13: /* 921f13: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 921f17: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 921f1b: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 921f21: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 921f28: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 921f2e: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 921f34: xor edi, edi */
  edi = 0;
L_921f36: /* 921f36: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 921f39: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 921f3c: mov eax, ecx */
  eax = ecx;
/* 921f3e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921f3f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921f42: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921f44: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921f47: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 921f4d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 921f50: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 921f53: jns 0x921f5a */
  if (!sf) goto L_921f5a;
L_921f55: /* 921f55: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 921f56: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 921f59: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_921f5a: /* 921f5a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 921f5d: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 921f60: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 921f67: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 921f6a: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 921f6d: mov eax, ecx */
  eax = ecx;
/* 921f6f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 921f70: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 921f73: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921f75: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 921f78: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 921f7e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 921f81: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 921f84: jns 0x921f8b */
  if (!sf) goto L_921f8b;
L_921f86: /* 921f86: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 921f87: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 921f8a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_921f8b: /* 921f8b: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 921f8f: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 921f92: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 921f93: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 921f96: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 921f9d: jne 0x921f36 */
  if (!zf) goto L_921f36;
L_921f9f: /* 921f9f: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 921fa3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 921fa7: xor eax, eax */
  eax = 0;
/* 921fa9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 921fac: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 921faf: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 921fb2: mov ebx, dword ptr [esp + 0x168] */
  ebx = R32((uint32_t)(esp + 0x168u));
/* 921fb9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 921fbc: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 921fbf: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 921fc2: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 921fc8: mov dword ptr [eax + edx*8], ecx */
  W32((uint32_t)(eax + edx*8), ecx);
/* 921fcb: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 921fce: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 921fd1: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* 921fd7: mov dword ptr [eax + edx*8 + 4], ecx */
  W32((uint32_t)(eax + edx*8 + 0x4u), ecx);
/* 921fdb: lea edx, [ebx + 0xbc] */
  edx = (uint32_t)(ebx + 0xbcu);
/* 921fe1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 921fe2: lea eax, [esp + 0x6c] */
  eax = (uint32_t)(esp + 0x6cu);
/* 921fe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 921fe7: call 0x972d20 */
  esp -= 4; W32(esp, 0x921fecu); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 921fec: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 921ff0: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 921ff3: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 921ff9: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 921ffe: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 922002: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 922005: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922007: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 92200b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92200e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922010: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 922014: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 922017: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922019: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 92201d: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 922021: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 922024: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 922028: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92202b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92202d: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 922031: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 922033: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922035: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 922039: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 92203c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92203e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 922042: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 922046: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 922049: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 92204d: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 922050: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922052: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 922056: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 922058: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92205a: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 92205e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 922061: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922063: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 922067: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 92206b: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 92206e: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 922072: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 922075: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922077: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 92207b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92207d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92207f: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 922083: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 922086: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 92208c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92208f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922091: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 922095: je 0x92227c */
  if (zf) goto L_92227c;
L_92209b: /* 92209b: lea ecx, [ebx + 0xfc] */
  ecx = (uint32_t)(ebx + 0xfcu);
/* 9220a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9220a2: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 9220a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9220a7: call 0x972d20 */
  esp -= 4; W32(esp, 0x9220acu); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 9220ac: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9220b0: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 9220b3: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 9220b9: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9220be: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9220c2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9220c5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9220c7: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9220cb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9220ce: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9220d0: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 9220d4: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9220d7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9220d9: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 9220dd: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 9220e1: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9220e4: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 9220e8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9220eb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9220ed: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 9220f1: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9220f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9220f5: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 9220f9: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9220fc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9220fe: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 922102: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 922106: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 922109: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 92210d: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 922110: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922112: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 922116: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 922118: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92211a: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 92211e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 922121: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922123: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 922127: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 92212b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92212d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 922131: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 922134: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922136: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 92213a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92213d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92213f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 922143: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 922146: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922148: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 92214c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 922150: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 922154: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 922158: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92215c: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 922160: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 922164: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 922168: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 92216c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 922170: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 922174: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 922178: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 92217c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 922180: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 922182: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 922186: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 922188: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92218c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92218e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 922192: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 922196: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 922198: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 92219f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9221a3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9221a5: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 9221ac: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9221b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9221b2: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 9221b9: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9221bd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9221bf: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 9221c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9221c8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9221ca: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9221ce: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 9221d2: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9221d4: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9221d8: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9221dc: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 9221e0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 9221e4: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 9221e8: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9221ef: fsub dword ptr [esp + 0x98] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x98u)));
/* 9221f6: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 9221fd: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 922204: fadd dword ptr [esp + 0x9c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x9cu)));
/* 92220b: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 922212: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 922219: fadd dword ptr [esp + 0x98] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x98u)));
/* 922220: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 922224: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 922228: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 92222c: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 922230: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 922234: fstp dword ptr [esp + 0xb0] */
  WF32((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 92223b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92223f: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 922243: fstp dword ptr [esp + 0xbc] */
  WF32((uint32_t)(esp + 0xbcu), ST0); FPOP();
/* 92224a: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 922251: fsub dword ptr [esp + 0x9c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x9cu)));
/* 922258: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92225c: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 922260: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 922267: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 92226b: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 92226f: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 922273: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 92227a: jmp 0x9222d1 */
  goto L_9222d1;
L_92227c: /* 92227c: lea edi, [ebx + 0xfc] */
  edi = (uint32_t)(ebx + 0xfcu);
/* 922282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 922283: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 922287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 922288: call 0x972d20 */
  esp -= 4; W32(esp, 0x92228du); SPILL(); f_972d20(); if (g_unwind) return; RELOAD();
/* 92228d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 92228f: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 922292: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 922295: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 922298: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 92229b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 92229e: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 9222a5: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 9222a8: mov dword ptr [esp + 0xb0], edx */
  W32((uint32_t)(esp + 0xb0u), edx);
/* 9222af: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 9222b2: mov dword ptr [esp + 0xb4], eax */
  W32((uint32_t)(esp + 0xb4u), eax);
/* 9222b9: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 9222bc: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 9222c3: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
/* 9222ca: mov dword ptr [esp + 0xc0], eax */
  W32((uint32_t)(esp + 0xc0u), eax);
L_9222d1: /* 9222d1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9222d5: xor edx, edx */
  edx = 0;
/* 9222d7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9222d9: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 9222e0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9222e4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9222e6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9222ea: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9222ee: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9222f2: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9222f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9222f8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9222fc: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 922300: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922302: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 922306: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 92230a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92230c: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 922313: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 922317: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 922319: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92231d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 92231f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922321: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
/* 922328: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 92232c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92232e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 922332: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922334: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922336: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 92233d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92233f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_922341: /* 922341: fld dword ptr [esp + edx*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + edx*4 + 0x1cu)); FPUSH(v); }
/* 922345: xor eax, eax */
  eax = 0;
L_922347: /* 922347: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 922349: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 92234a: fmul dword ptr [esp + eax*4 + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + eax*4 + 0x38u)));
/* 92234e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922351: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 922354: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 922357: jb 0x922347 */
  if (cf) goto L_922347;
L_922359: /* 922359: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 92235a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92235c: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 92235f: jb 0x922341 */
  if (cf) goto L_922341;
L_922361: /* 922361: fld dword ptr [esp + 0x128] */
  { double v = F32((uint32_t)(esp + 0x128u)); FPUSH(v); }
/* 922368: fadd dword ptr [esp + 0x114] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x114u)));
/* 92236f: fadd dword ptr [esp + 0x100] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x100u)));
/* 922376: fadd dword ptr [esp + 0xec] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xecu)));
/* 92237d: fld dword ptr [esp + 0x124] */
  { double v = F32((uint32_t)(esp + 0x124u)); FPUSH(v); }
/* 922384: fsub dword ptr [esp + 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xfcu)));
/* 92238b: fadd dword ptr [esp + 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf0u)));
/* 922392: fsub dword ptr [esp + 0x118] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x118u)));
/* 922399: fstp dword ptr [esp + 0x130] */
  WF32((uint32_t)(esp + 0x130u), ST0); FPOP();
/* 9223a0: fld dword ptr [esp + 0x120] */
  { double v = F32((uint32_t)(esp + 0x120u)); FPUSH(v); }
/* 9223a7: fadd dword ptr [esp + 0x10c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10cu)));
/* 9223ae: fsubr dword ptr [esp + 0x108] */
  ST0 = (F32((uint32_t)(esp + 0x108u))) - ST0;
/* 9223b5: fadd dword ptr [esp + 0xf4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf4u)));
/* 9223bc: fld dword ptr [esp + 0x110] */
  { double v = F32((uint32_t)(esp + 0x110u)); FPUSH(v); }
/* 9223c3: fsub dword ptr [esp + 0x11c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x11cu)));
/* 9223ca: fsub dword ptr [esp + 0x104] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x104u)));
/* 9223d1: fadd dword ptr [esp + 0xf8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf8u)));
/* 9223d8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9223da: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9223dc: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9223e0: fld dword ptr [esp + 0x130] */
  { double v = F32((uint32_t)(esp + 0x130u)); FPUSH(v); }
/* 9223e7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 9223e9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9223ed: fld dword ptr [esp + 0x130] */
  { double v = F32((uint32_t)(esp + 0x130u)); FPUSH(v); }
/* 9223f4: fmul dword ptr [esp + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x130u)));
/* 9223fb: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9223fd: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 9223ff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922401: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 922403: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922405: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922407: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 922409: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92240b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92240d: fstp dword ptr [esp + 0x13c] */
  WF32((uint32_t)(esp + 0x13cu), ST0); FPOP();
/* 922414: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 922418: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 92241a: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92241e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 922420: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922422: fstp dword ptr [esp + 0x148] */
  WF32((uint32_t)(esp + 0x148u), ST0); FPOP();
/* 922429: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 92242d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92242f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 922433: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922435: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922437: fstp dword ptr [esp + 0x154] */
  WF32((uint32_t)(esp + 0x154u), ST0); FPOP();
/* 92243e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922440: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922442: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922444: fld dword ptr [esp + 0x13c] */
  { double v = F32((uint32_t)(esp + 0x13cu)); FPUSH(v); }
/* 92244b: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 922451: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 922453: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 922455: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 922459: fcomp dword ptr [0xa20e08] */
  fpu_com(ST0, F32((uint32_t)(0xa20e08u)));
  FPOP();
/* 92245f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 922461: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 922464: jne 0x922813 */
  if (!zf) goto L_922813;
L_92246a: /* 92246a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92246e: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 922472: fsqrt  */
  ST0 = sqrt(ST0);
/* 922474: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 922476: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 922478: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 92247e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 922482: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 922488: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 92248a: fld dword ptr [esp + 0x13c] */
  { double v = F32((uint32_t)(esp + 0x13cu)); FPUSH(v); }
/* 922491: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 922497: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 922499: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92249d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 92249f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9224a1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9224a3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 9224a5: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 9224a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9224ab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9224ad: fld dword ptr [esp + 0x148] */
  { double v = F32((uint32_t)(esp + 0x148u)); FPUSH(v); }
/* 9224b4: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9224b8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9224ba: fld dword ptr [esp + 0x154] */
  { double v = F32((uint32_t)(esp + 0x154u)); FPUSH(v); }
/* 9224c1: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9224c5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9224c8: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 9224cf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9224d1: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 9224d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9224da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9224dc: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9224e0: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 9224e7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9224e9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9224eb: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9224f2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9224f4: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9224f8: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9224ff: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 922506: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 922508: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92250a: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 92250c: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 922513: fmul dword ptr [esp + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb4u)));
/* 92251a: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 922521: fmul dword ptr [esp + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb0u)));
/* 922528: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92252a: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 922531: fmul dword ptr [esp + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xacu)));
/* 922538: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 92253f: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 922546: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922548: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 92254f: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 922556: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 92255d: fmul dword ptr [esp + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xacu)));
/* 922564: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 922566: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 92256d: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 922574: fmul dword ptr [esp + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc0u)));
/* 92257b: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 922582: fmul dword ptr [esp + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xbcu)));
/* 922589: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92258b: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 92258f: fld dword ptr [esp + 0xcc] */
  { double v = F32((uint32_t)(esp + 0xccu)); FPUSH(v); }
/* 922596: fmul dword ptr [esp + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb8u)));
/* 92259d: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 9225a4: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9225ab: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9225ad: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 9225b1: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 9225b8: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 9225bf: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 9225c6: fmul dword ptr [esp + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb8u)));
/* 9225cd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9225cf: xor ecx, ecx */
  ecx = 0;
/* 9225d1: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 9225d5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9225d7: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9225db: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 9225e2: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9225e6: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 9225ed: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 9225f1: fld dword ptr [esp + 0x148] */
  { double v = F32((uint32_t)(esp + 0x148u)); FPUSH(v); }
/* 9225f8: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 9225fc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 922600: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 922602: fsubr dword ptr [esp + 0x8c] */
  ST0 = (F32((uint32_t)(esp + 0x8cu))) - ST0;
/* 922609: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 922610: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 922614: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 922616: fsubr st(3) */
  ST0 = STI(3) - ST0;
/* 922618: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 92261f: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 922621: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 922623: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 922625: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 92262c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92262e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922630: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922632: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 922636: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 92263a: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 92263e: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 922642: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 922646: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 92264a: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 92264e: fld dword ptr [esp + 0x154] */
  { double v = F32((uint32_t)(esp + 0x154u)); FPUSH(v); }
/* 922655: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 922659: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 92265d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 922661: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 922663: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 922667: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92266b: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 92266f: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 922671: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 922675: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922677: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922679: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 92267d: fsubr dword ptr [esp + 0x54] */
  ST0 = (F32((uint32_t)(esp + 0x54u))) - ST0;
/* 922681: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
L_922685: /* 922685: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 922688: mov eax, edi */
  eax = edi;
/* 92268a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92268b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92268e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922690: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922693: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 922699: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92269c: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 92269f: jns 0x9226a6 */
  if (!sf) goto L_9226a6;
L_9226a1: /* 9226a1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9226a2: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 9226a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_9226a6: /* 9226a6: lea edx, [edi + eax*4 + 0xc] */
  edx = (uint32_t)(edi + eax*4 + 0xcu);
/* 9226aa: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9226ad: mov edi, dword ptr [esp + ecx*4 + 0x8c] */
  edi = R32((uint32_t)(esp + ecx*4 + 0x8cu));
/* 9226b4: mov dword ptr [eax + edx*4], edi */
  W32((uint32_t)(eax + edx*4), edi);
/* 9226b7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9226ba: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 9226bd: mov eax, edi */
  eax = edi;
/* 9226bf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9226c0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9226c3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9226c5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9226c8: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 9226ce: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9226d1: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 9226d4: jns 0x9226db */
  if (!sf) goto L_9226db;
L_9226d6: /* 9226d6: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 9226d7: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 9226da: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_9226db: /* 9226db: lea edx, [edi + eax*4 + 0xc] */
  edx = (uint32_t)(edi + eax*4 + 0xcu);
/* 9226df: mov edi, dword ptr [esp + ecx*4 + 0x4c] */
  edi = R32((uint32_t)(esp + ecx*4 + 0x4cu));
/* 9226e3: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9226e6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9226e7: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9226ea: mov dword ptr [eax + edx*4], edi */
  W32((uint32_t)(eax + edx*4), edi);
/* 9226ed: jb 0x922685 */
  if (cf) goto L_922685;
L_9226ef: /* 9226ef: cmp dword ptr [ebx + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9226f6: je 0x92276e */
  if (zf) goto L_92276e;
L_9226f8: /* 9226f8: xor ecx, ecx */
  ecx = 0;
/* 9226fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_922700: /* 922700: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 922703: fld dword ptr [esp + ecx*4 + 0x8c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x8cu)); FPUSH(v); }
/* 92270a: mov eax, edi */
  eax = edi;
/* 92270c: fchs  */
  ST0 = -ST0;
/* 92270e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92270f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922712: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922714: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922717: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 92271d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922720: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922723: jns 0x92272a */
  if (!sf) goto L_92272a;
L_922725: /* 922725: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 922726: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 922729: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_92272a: /* 92272a: lea edx, [edi + eax*4 + 0x24] */
  edx = (uint32_t)(edi + eax*4 + 0x24u);
/* 92272e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 922731: fstp dword ptr [eax + edx*4] */
  WF32((uint32_t)(eax + edx*4), ST0); FPOP();
/* 922734: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 922737: fld dword ptr [esp + ecx*4 + 0x4c] */
  { double v = F32((uint32_t)(esp + ecx*4 + 0x4cu)); FPUSH(v); }
/* 92273b: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 92273e: mov eax, edi */
  eax = edi;
/* 922740: fchs  */
  ST0 = -ST0;
/* 922742: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922743: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922746: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922748: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92274b: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 922751: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922754: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922757: jns 0x92275e */
  if (!sf) goto L_92275e;
L_922759: /* 922759: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 92275a: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 92275d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_92275e: /* 92275e: lea edx, [edi + eax*4 + 0x24] */
  edx = (uint32_t)(edi + eax*4 + 0x24u);
/* 922762: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 922765: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 922766: fstp dword ptr [eax + edx*4] */
  WF32((uint32_t)(eax + edx*4), ST0); FPOP();
/* 922769: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 92276c: jb 0x922700 */
  if (cf) goto L_922700;
L_92276e: /* 92276e: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 922772: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 922779: mov dword ptr [eax], 0xff7fffff */
  W32((uint32_t)(eax), 0xff7fffffu);
/* 92277f: mov dword ptr [ecx], 0x7f7fffff */
  W32((uint32_t)(ecx), 0x7f7fffffu);
/* 922785: mov dword ptr [eax + 4], 0xff7fffff */
  W32((uint32_t)(eax + 0x4u), 0xff7fffffu);
/* 92278c: mov dword ptr [ecx + 4], 0x7f7fffff */
  W32((uint32_t)(ecx + 0x4u), 0x7f7fffffu);
/* 922793: fld dword ptr [ebx + 0x164] */
  { double v = F32((uint32_t)(ebx + 0x164u)); FPUSH(v); }
/* 922799: mov ecx, dword ptr [esp + 0x174] */
  ecx = R32((uint32_t)(esp + 0x174u));
/* 9227a0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 9227a2: fadd dword ptr [ebx + 0x168] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x168u)));
/* 9227a8: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9227ae: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9227b2: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9227b6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9227bc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9227c0: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 9227c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9227c5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9227c8: jp 0x9227d1 */
  if (pf) goto L_9227d1;
L_9227ca: /* 9227ca: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
L_9227d1: /* 9227d1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9227d5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9227d9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9227df: mov dword ptr [ebp + 4], eax */
  W32((uint32_t)(ebp + 0x4u), eax);
/* 9227e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9227e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9227e7: jp 0x9227f0 */
  if (pf) goto L_9227f0;
L_9227e9: /* 9227e9: mov dword ptr [ebp + 4], 0 */
  W32((uint32_t)(ebp + 0x4u), 0x0u);
L_9227f0: /* 9227f0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9227f4: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9227f8: fmul dword ptr [ebx + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x164u)));
/* 9227fe: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 922800: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 922802: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 922806: fmul dword ptr [ebx + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x164u)));
/* 92280c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92280e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 922811: jmp 0x92281b */
  goto L_92281b;
L_922813: /* 922813: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922815: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922817: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922819: fstp st(0) */
  STI(0) = ST0; FPOP();
L_92281b: /* 92281b: mov eax, dword ptr [ebx + 0x160] */
  eax = R32((uint32_t)(ebx + 0x160u));
/* 922821: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 922823: je 0x92283a */
  if (zf) goto L_92283a;
L_922825: /* 922825: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 922827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 922828: call 0x91b610 */
  esp -= 4; W32(esp, 0x92282du); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 92282d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92282e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92282f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 922830: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 922831: add esp, 0x150 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x150u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 922837: ret 0x14 */
  esp += 24; SPILL(); return;
L_92283a: /* 92283a: xor edi, edi */
  edi = 0;
/* 92283c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_922840: /* 922840: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 922843: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 922846: mov eax, ecx */
  eax = ecx;
/* 922848: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922849: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92284c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92284e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922851: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922857: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92285a: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 92285d: jns 0x922864 */
  if (!sf) goto L_922864;
L_92285f: /* 92285f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922860: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922863: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922864: /* 922864: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 922867: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 92286a: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 922871: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 922874: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 922877: mov eax, ecx */
  eax = ecx;
/* 922879: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92287a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92287d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92287f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922882: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922888: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92288b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 92288e: jns 0x922895 */
  if (!sf) goto L_922895;
L_922890: /* 922890: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922891: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922894: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922895: /* 922895: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 922899: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 92289c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92289d: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9228a0: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 9228a7: jne 0x922840 */
  if (!zf) goto L_922840;
L_9228a9: /* 9228a9: fld dword ptr [esp + 0x100] */
  { double v = F32((uint32_t)(esp + 0x100u)); FPUSH(v); }
/* 9228b0: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9228b4: fadd dword ptr [esp + 0xec] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xecu)));
/* 9228bb: mov eax, dword ptr [esp + 0xe8] */
  eax = R32((uint32_t)(esp + 0xe8u));
/* 9228c2: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 9228c6: xor edi, edi */
  edi = 0;
/* 9228c8: fsub dword ptr [esp + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x128u)));
/* 9228cf: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 9228d2: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 9228d5: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 9228d8: fsub dword ptr [esp + 0x114] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x114u)));
/* 9228df: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 9228e2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9228e8: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9228ec: fld dword ptr [esp + 0xf8] */
  { double v = F32((uint32_t)(esp + 0xf8u)); FPUSH(v); }
/* 9228f3: fadd dword ptr [esp + 0x104] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x104u)));
/* 9228fa: fadd dword ptr [esp + 0x110] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x110u)));
/* 922901: fadd dword ptr [esp + 0x11c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x11cu)));
/* 922908: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92290e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 922912: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 922919: fsub dword ptr [esp + 0xf4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xf4u)));
/* 922920: fadd dword ptr [esp + 0x120] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x120u)));
/* 922927: fsub dword ptr [esp + 0x10c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10cu)));
/* 92292e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 922934: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_922938: /* 922938: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 92293b: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 92293e: mov eax, ecx */
  eax = ecx;
/* 922940: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922941: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922944: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922946: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922949: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92294f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922952: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 922955: jns 0x92295c */
  if (!sf) goto L_92295c;
L_922957: /* 922957: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922958: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92295b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92295c: /* 92295c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 92295f: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 922963: mov eax, dword ptr [esp + edi*4 + 0x1c] */
  eax = R32((uint32_t)(esp + edi*4 + 0x1cu));
/* 922967: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 922968: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 92296b: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 92296e: jb 0x922938 */
  if (cf) goto L_922938;
L_922970: /* 922970: cmp dword ptr [ebx + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922977: je 0x9229ba */
  if (zf) goto L_9229ba;
L_922979: /* 922979: xor edi, edi */
  edi = 0;
/* 92297b: nop  */
/* 92297c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_922980: /* 922980: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 922983: fld dword ptr [esp + edi*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + edi*4 + 0x1cu)); FPUSH(v); }
/* 922987: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 92298a: fchs  */
  ST0 = -ST0;
/* 92298c: mov eax, ecx */
  eax = ecx;
/* 92298e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92298f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922992: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922994: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922997: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92299d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9229a0: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 9229a3: jns 0x9229aa */
  if (!sf) goto L_9229aa;
L_9229a5: /* 9229a5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9229a6: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9229a9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9229aa: /* 9229aa: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 9229ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9229ae: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9229b1: lea ecx, [ecx + eax*4 + 0x24] */
  ecx = (uint32_t)(ecx + eax*4 + 0x24u);
/* 9229b5: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 9229b8: jb 0x922980 */
  if (cf) goto L_922980;
L_9229ba: /* 9229ba: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 9229be: fld dword ptr [esp + 0x130] */
  { double v = F32((uint32_t)(esp + 0x130u)); FPUSH(v); }
/* 9229c5: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 9229cc: fchs  */
  ST0 = -ST0;
/* 9229ce: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9229d2: mov dword ptr [eax + 8], 0xff7fffff */
  W32((uint32_t)(eax + 0x8u), 0xff7fffffu);
/* 9229d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9229dd: mov dword ptr [ecx + 8], 0x7f7fffff */
  W32((uint32_t)(ecx + 0x8u), 0x7f7fffffu);
/* 9229e4: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9229e7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 9229eb: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 9229ee: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9229f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9229f6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9229f9: jp 0x922a02 */
  if (pf) goto L_922a02;
L_9229fb: /* 9229fb: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_922a02: /* 922a02: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 922a06: mov ecx, dword ptr [esp + 0x174] */
  ecx = R32((uint32_t)(esp + 0x174u));
/* 922a0d: fmul dword ptr [ebx + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x164u)));
/* 922a13: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 922a17: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 922a19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 922a1a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 922a1c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 922a1f: call 0x91b610 */
  esp -= 4; W32(esp, 0x922a24u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 922a24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 922a25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 922a26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 922a27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 922a28: add esp, 0x150 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x150u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 922a2e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_922a40(void) {
  LOAD_REGS();
L_922a40: /* 922a40: sub esp, 0xe0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 922a46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 922a47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 922a48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 922a49: mov esi, dword ptr [esp + 0xf0] */
  esi = R32((uint32_t)(esp + 0xf0u));
/* 922a50: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 922a53: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 922a56: mov ebp, dword ptr [esi + 0x34] */
  ebp = R32((uint32_t)(esi + 0x34u));
/* 922a59: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 922a5c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922a5e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 922a62: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 922a65: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922a67: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 922a6b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 922a6e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922a70: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 922a77: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 922a7a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922a7c: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 922a80: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 922a83: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 922a85: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922a87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 922a88: xor ebx, ebx */
  ebx = 0;
/* 922a8a: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 922a8e: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 922a92: xor edi, edi */
  edi = 0;
L_922a94: /* 922a94: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922a97: mov eax, ecx */
  eax = ecx;
/* 922a99: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922a9a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922a9d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922a9f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922aa2: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922aa8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 922aab: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 922aae: jns 0x922ab5 */
  if (!sf) goto L_922ab5;
L_922ab0: /* 922ab0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922ab1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922ab4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922ab5: /* 922ab5: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922ab8: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922abb: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 922abe: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922ac1: mov eax, ecx */
  eax = ecx;
/* 922ac3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922ac4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922ac7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922ac9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922acc: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922ad2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922ad5: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 922ad8: jns 0x922adf */
  if (!sf) goto L_922adf;
L_922ada: /* 922ada: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922adb: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922ade: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922adf: /* 922adf: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 922ae2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 922ae3: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922ae6: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 922aea: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 922aed: jne 0x922a94 */
  if (!zf) goto L_922a94;
L_922aef: /* 922aef: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 922af3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 922af7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 922afb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 922afd: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 922aff: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* 922b02: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 922b04: xor edi, edi */
  edi = 0;
L_922b06: /* 922b06: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922b09: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 922b0a: mov eax, ecx */
  eax = ecx;
/* 922b0c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922b0d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922b10: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922b12: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922b15: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922b1b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 922b1e: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 922b21: jns 0x922b28 */
  if (!sf) goto L_922b28;
L_922b23: /* 922b23: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922b24: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922b27: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922b28: /* 922b28: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922b2b: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922b2e: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 922b31: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922b34: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 922b35: mov eax, ecx */
  eax = ecx;
/* 922b37: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922b38: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922b3b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922b3d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922b40: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922b46: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922b49: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 922b4c: jns 0x922b53 */
  if (!sf) goto L_922b53;
L_922b4e: /* 922b4e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922b4f: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922b52: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922b53: /* 922b53: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 922b56: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 922b57: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922b5a: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 922b5e: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 922b61: jne 0x922b06 */
  if (!zf) goto L_922b06;
L_922b63: /* 922b63: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 922b67: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 922b6b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 922b6f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 922b72: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 922b75: mov dword ptr [ebp + 4], ebx */
  W32((uint32_t)(ebp + 0x4u), ebx);
/* 922b78: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 922b7b: xor edi, edi */
  edi = 0;
/* 922b7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_922b80: /* 922b80: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922b83: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922b86: mov eax, ecx */
  eax = ecx;
/* 922b88: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922b89: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922b8c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922b8e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922b91: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922b97: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 922b9a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 922b9d: jns 0x922ba4 */
  if (!sf) goto L_922ba4;
L_922b9f: /* 922b9f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922ba0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922ba3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922ba4: /* 922ba4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922ba7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922baa: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 922bad: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922bb0: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922bb3: mov eax, ecx */
  eax = ecx;
/* 922bb5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922bb6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922bb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922bbb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922bbe: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922bc4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922bc7: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 922bca: jns 0x922bd1 */
  if (!sf) goto L_922bd1;
L_922bcc: /* 922bcc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922bcd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922bd0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922bd1: /* 922bd1: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 922bd4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 922bd5: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922bd8: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 922bdc: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 922bdf: jne 0x922b80 */
  if (!zf) goto L_922b80;
L_922be1: /* 922be1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 922be5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 922be9: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 922bed: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 922bf0: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 922bf3: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 922bf6: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 922bf9: xor edi, edi */
  edi = 0;
/* 922bfb: nop  */
/* 922bfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_922c00: /* 922c00: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922c03: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922c06: mov eax, ecx */
  eax = ecx;
/* 922c08: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922c09: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922c0c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922c0e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922c11: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922c17: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 922c1a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 922c1d: jns 0x922c24 */
  if (!sf) goto L_922c24;
L_922c1f: /* 922c1f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922c20: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922c23: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922c24: /* 922c24: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922c27: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922c2a: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 922c2d: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922c30: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922c33: mov eax, ecx */
  eax = ecx;
/* 922c35: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922c36: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922c39: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922c3b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922c3e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922c44: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922c47: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 922c4a: jns 0x922c51 */
  if (!sf) goto L_922c51;
L_922c4c: /* 922c4c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922c4d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922c50: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922c51: /* 922c51: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 922c54: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 922c55: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922c58: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 922c5c: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 922c5f: jne 0x922c00 */
  if (!zf) goto L_922c00;
L_922c61: /* 922c61: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 922c65: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 922c69: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 922c6d: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 922c70: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 922c73: mov dword ptr [ecx + 0xc], ebx */
  W32((uint32_t)(ecx + 0xcu), ebx);
/* 922c76: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 922c78: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 922c7f: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 922c82: xor edi, edi */
  edi = 0;
L_922c84: /* 922c84: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922c87: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922c8a: mov eax, ecx */
  eax = ecx;
/* 922c8c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922c8d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922c90: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922c92: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922c95: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922c9b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 922c9e: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 922ca1: jns 0x922ca8 */
  if (!sf) goto L_922ca8;
L_922ca3: /* 922ca3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922ca4: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922ca7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922ca8: /* 922ca8: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922cab: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922cae: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 922cb1: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922cb4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922cb7: mov eax, ecx */
  eax = ecx;
/* 922cb9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922cba: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922cbd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922cbf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922cc2: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922cc8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922ccb: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 922cce: jns 0x922cd5 */
  if (!sf) goto L_922cd5;
L_922cd0: /* 922cd0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922cd1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922cd4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922cd5: /* 922cd5: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 922cd8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 922cd9: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922cdc: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 922ce0: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 922ce3: jne 0x922c84 */
  if (!zf) goto L_922c84;
L_922ce5: /* 922ce5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 922ce9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 922ced: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 922cf1: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 922cf4: mov dword ptr [ecx + 0x10], ebx */
  W32((uint32_t)(ecx + 0x10u), ebx);
/* 922cf7: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 922cfa: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 922cfd: xor edi, edi */
  edi = 0;
/* 922cff: nop  */
L_922d00: /* 922d00: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922d03: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922d06: mov eax, ecx */
  eax = ecx;
/* 922d08: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922d09: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922d0c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922d0e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922d11: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922d17: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 922d1a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 922d1d: jns 0x922d24 */
  if (!sf) goto L_922d24;
L_922d1f: /* 922d1f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922d20: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922d23: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922d24: /* 922d24: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 922d27: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922d2a: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 922d2d: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922d30: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922d33: mov eax, ecx */
  eax = ecx;
/* 922d35: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922d36: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922d39: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922d3b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922d3e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922d44: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922d47: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 922d4a: jns 0x922d51 */
  if (!sf) goto L_922d51;
L_922d4c: /* 922d4c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922d4d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922d50: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922d51: /* 922d51: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 922d54: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 922d55: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922d58: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 922d5c: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 922d5f: jne 0x922d00 */
  if (!zf) goto L_922d00;
L_922d61: /* 922d61: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 922d65: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 922d69: mov edi, dword ptr [esp + 0xf8] */
  edi = R32((uint32_t)(esp + 0xf8u));
/* 922d70: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 922d74: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 922d77: mov dword ptr [ecx + 0x14], ebx */
  W32((uint32_t)(ecx + 0x14u), ebx);
/* 922d7a: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
/* 922d7d: mov dword ptr [edx + 0x14], ebx */
  W32((uint32_t)(edx + 0x14u), ebx);
/* 922d80: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 922d83: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 922d86: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 922d8c: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 922d8f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 922d92: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 922d95: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 922d9b: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 922d9f: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 922da5: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 922dac: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 922daf: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922db1: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922db4: lea edx, [esp + 0xa4] */
  edx = (uint32_t)(esp + 0xa4u);
/* 922dbb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 922dbf: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
/* 922dc5: mov dword ptr [esp + 0x20], 4 */
  W32((uint32_t)(esp + 0x20u), 0x4u);
/* 922dcd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_922dd0: /* 922dd0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 922dd4: mov ebp, 4 */
  ebp = 0x4u;
/* 922dd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_922de0: /* 922de0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 922de3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 922de6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 922de9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922dec: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 922ded: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 922df0: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 922df3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922df5: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 922df8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 922dfb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922dfd: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 922e00: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 922e02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922e04: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 922e07: jne 0x922de0 */
  if (!zf) goto L_922de0;
L_922e09: /* 922e09: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 922e0d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922e10: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 922e11: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 922e15: jne 0x922dd0 */
  if (!zf) goto L_922dd0;
L_922e17: /* 922e17: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 922e1d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 922e20: je 0x922e42 */
  if (zf) goto L_922e42;
L_922e22: /* 922e22: mov ebp, dword ptr [esp + 0xfc] */
  ebp = R32((uint32_t)(esp + 0xfcu));
/* 922e29: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 922e2c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922e2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 922e2f: lea eax, [edi + 0xfc] */
  eax = (uint32_t)(edi + 0xfcu);
/* 922e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 922e36: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 922e3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 922e3b: call 0x91ea30 */
  esp -= 4; W32(esp, 0x922e40u); SPILL(); f_91ea30(); if (g_unwind) return; RELOAD();
/* 922e40: jmp 0x922e53 */
  goto L_922e53;
L_922e42: /* 922e42: lea edx, [edi + 0xfc] */
  edx = (uint32_t)(edi + 0xfcu);
/* 922e48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 922e49: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 922e4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 922e4e: call 0x91e9c0 */
  esp -= 4; W32(esp, 0x922e53u); SPILL(); f_91e9c0(); if (g_unwind) return; RELOAD();
L_922e53: /* 922e53: xor eax, eax */
  eax = 0;
/* 922e55: lea ebx, [esp + 0x2c] */
  ebx = (uint32_t)(esp + 0x2cu);
/* 922e59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_922e60: /* 922e60: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922e63: mov ebp, dword ptr [ebx - 4] */
  ebp = R32((uint32_t)(ebx + 0xfffffffcu));
/* 922e66: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 922e68: mov edx, ecx */
  edx = ecx;
/* 922e6a: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 922e6d: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 922e70: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 922e73: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 922e76: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 922e78: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922e7b: mov dword ptr [ecx + edx*4], ebp */
  W32((uint32_t)(ecx + edx*4), ebp);
/* 922e7e: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 922e81: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 922e83: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 922e86: mov edx, ecx */
  edx = ecx;
/* 922e88: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 922e8b: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 922e8e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 922e91: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 922e94: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 922e96: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922e99: mov dword ptr [ecx + edx*4 + 0x10], ebp */
  W32((uint32_t)(ecx + edx*4 + 0x10u), ebp);
/* 922e9d: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 922ea0: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 922ea3: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 922ea6: mov edx, ecx */
  edx = ecx;
/* 922ea8: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 922eab: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 922eae: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 922eb1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 922eb4: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 922eb6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 922eb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 922eba: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 922ebd: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 922ec0: mov dword ptr [ecx + edx*4 + 0x20], ebp */
  W32((uint32_t)(ecx + edx*4 + 0x20u), ebp);
/* 922ec4: jb 0x922e60 */
  if (cf) goto L_922e60;
L_922ec6: /* 922ec6: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 922ec9: mov ebp, dword ptr [esi + 0x2c] */
  ebp = R32((uint32_t)(esi + 0x2cu));
/* 922ecc: lea ebx, [ecx + 2] */
  ebx = (uint32_t)(ecx + 0x2u);
/* 922ecf: mov eax, ebx */
  eax = ebx;
/* 922ed1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922ed2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922ed5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922ed7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922eda: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922edd: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 922ee0: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 922ee6: jns 0x922eed */
  if (!sf) goto L_922eed;
L_922ee8: /* 922ee8: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 922ee9: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 922eec: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_922eed: /* 922eed: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 922eef: lea eax, [ebp + edx*4 + 0x30] */
  eax = (uint32_t)(ebp + edx*4 + 0x30u);
/* 922ef3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 922ef7: lea ebx, [ecx + 1] */
  ebx = (uint32_t)(ecx + 0x1u);
/* 922efa: mov eax, ebx */
  eax = ebx;
/* 922efc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922efd: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922f00: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922f02: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922f05: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 922f08: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 922f0b: and ebx, 0x80000003 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 922f11: jns 0x922f18 */
  if (!sf) goto L_922f18;
L_922f13: /* 922f13: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 922f14: or ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 922f17: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_922f18: /* 922f18: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 922f1a: mov eax, ecx */
  eax = ecx;
/* 922f1c: lea ebx, [ebp + edx*4 + 0x30] */
  ebx = (uint32_t)(ebp + edx*4 + 0x30u);
/* 922f20: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 922f21: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 922f24: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922f26: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 922f29: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 922f2c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 922f2f: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 922f35: jns 0x922f3c */
  if (!sf) goto L_922f3c;
L_922f37: /* 922f37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 922f38: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 922f3b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_922f3c: /* 922f3c: fld dword ptr [esp + 0xd4] */
  { double v = F32((uint32_t)(esp + 0xd4u)); FPUSH(v); }
/* 922f43: xor edx, edx */
  edx = 0;
/* 922f45: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 922f49: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 922f4b: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 922f52: mov dword ptr [ebp + eax*4 + 0x30], edx */
  W32((uint32_t)(ebp + eax*4 + 0x30u), edx);
/* 922f56: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 922f5a: mov dword ptr [ebp + eax*4 + 0x40], edx */
  W32((uint32_t)(ebp + eax*4 + 0x40u), edx);
/* 922f5e: fld dword ptr [esp + 0xdc] */
  { double v = F32((uint32_t)(esp + 0xdcu)); FPUSH(v); }
/* 922f65: mov dword ptr [ebp + eax*4 + 0x50], edx */
  W32((uint32_t)(ebp + eax*4 + 0x50u), edx);
/* 922f69: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 922f6d: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 922f6f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 922f73: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 922f76: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 922f79: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922f7b: lea eax, [ebp + eax*4 + 0x30] */
  eax = (uint32_t)(ebp + eax*4 + 0x30u);
/* 922f7f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 922f83: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 922f87: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 922f89: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 922f8d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 922f8f: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 922f92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922f94: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 922f97: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 922f9b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 922f9f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922fa1: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 922fa8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922faa: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 922fad: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 922fb1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922fb3: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 922fb7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 922fb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922fbb: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 922fbf: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922fc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922fc3: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* 922fc6: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 922fca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922fcc: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 922fd0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 922fd2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922fd4: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 922fd8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 922fda: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922fdc: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 922fdf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922fe1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922fe3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 922fe5: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 922fe9: fmul dword ptr [edi + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x198u)));
/* 922fef: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 922ff3: fmul dword ptr [edi + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x194u)));
/* 922ff9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 922ffb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 922fff: fmul dword ptr [edi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x190u)));
/* 923005: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923007: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 923009: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92300d: fmul dword ptr [edi + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x198u)));
/* 923013: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 923017: fmul dword ptr [edi + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x194u)));
/* 92301d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92301f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 923023: fmul dword ptr [edi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x190u)));
/* 923029: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92302b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92302e: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 923032: fmul dword ptr [edi + 0x198] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x198u)));
/* 923038: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 92303c: fmul dword ptr [edi + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x194u)));
/* 923042: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923044: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 923048: fmul dword ptr [edi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x190u)));
/* 92304e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923050: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 923053: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 92305a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 92305c: mov ebx, 3 */
  ebx = 0x3u;
L_923061: /* 923061: mov dword ptr [ecx + eax], 0xff7fffff */
  W32((uint32_t)(ecx + eax), 0xff7fffffu);
/* 923068: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 92306e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923071: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 923072: jne 0x923061 */
  if (!zf) goto L_923061;
L_923074: /* 923074: fld dword ptr [edi + 0x160] */
  { double v = F32((uint32_t)(edi + 0x160u)); FPUSH(v); }
/* 92307a: mov ebx, dword ptr [esp + 0x104] */
  ebx = R32((uint32_t)(esp + 0x104u));
/* 923081: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 923083: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 923087: xor ecx, ecx */
  ecx = 0;
/* 923089: fadd dword ptr [edi + 0x16c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x16cu)));
/* 92308f: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 923095: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 923097: fmul dword ptr [edi + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x164u)));
/* 92309d: fadd dword ptr [edi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x170u)));
/* 9230a3: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9230a9: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 9230af: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 9230b1: fadd dword ptr [edi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x174u)));
/* 9230b7: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9230bd: fst dword ptr [esp + 0xec] */
  WF32((uint32_t)(esp + 0xecu), ST0);
/* 9230c4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9230c6: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9230c8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9230ca: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 9230cd: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 9230d0: jmp 0x9230d6 */
  goto L_9230d6;
L_9230d2: /* 9230d2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_9230d6: /* 9230d6: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 9230d9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 9230df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9230e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9230e4: jp 0x9230ed */
  if (pf) goto L_9230ed;
L_9230e6: /* 9230e6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9230ea: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
L_9230ed: /* 9230ed: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9230ee: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 9230f1: jb 0x9230d2 */
  if (cf) goto L_9230d2;
L_9230f3: /* 9230f3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9230f7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9230f9: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 9230ff: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 923101: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 923103: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 923105: fmul dword ptr [edi + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x164u)));
/* 92310b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92310e: fld dword ptr [esp + 0xec] */
  { double v = F32((uint32_t)(esp + 0xecu)); FPUSH(v); }
/* 923115: fmul dword ptr [edi + 0x168] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x168u)));
/* 92311b: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 92311d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 923120: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923123: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923126: mov eax, ecx */
  eax = ecx;
/* 923128: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923129: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92312c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92312e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923131: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923134: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923137: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92313d: jns 0x923144 */
  if (!sf) goto L_923144;
L_92313f: /* 92313f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923140: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923143: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923144: /* 923144: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 92314b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92314e: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 923152: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923154: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 92315b: lea eax, [eax + edx*4 + 0x30] */
  eax = (uint32_t)(eax + edx*4 + 0x30u);
/* 92315f: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 923163: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 923165: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 923167: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 923169: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 923170: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 923174: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 923178: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 92317c: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 923183: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 923187: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 92318b: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 92318f: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 923192: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 923196: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 92319d: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 9231a1: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 9231a8: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 9231ac: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 9231b0: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 9231b4: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 9231b8: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 9231bb: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9231be: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9231c1: mov eax, ecx */
  eax = ecx;
/* 9231c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9231c4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9231c7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9231c9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9231cc: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9231cf: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9231d2: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9231d8: jns 0x9231df */
  if (!sf) goto L_9231df;
L_9231da: /* 9231da: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9231db: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9231de: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9231df: /* 9231df: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 9231e6: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9231e9: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9231ed: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9231ef: lea eax, [eax + edx*4 + 0x30] */
  eax = (uint32_t)(eax + edx*4 + 0x30u);
/* 9231f3: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 9231fa: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 923201: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 923205: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 923209: fld dword ptr [esp + 0x98] */
  { double v = F32((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* 923210: fsub dword ptr [esp + 0x78] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x78u)));
/* 923214: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 923216: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 92321d: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 923221: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 923225: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 923229: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 923230: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 923237: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 92323b: fsub dword ptr [esp + 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8cu)));
/* 923242: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 923245: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 923249: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 923250: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 923254: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 92325b: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 92325f: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 923266: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 92326a: fsub dword ptr [esp + 0x94] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x94u)));
/* 923271: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 923274: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923277: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92327a: mov eax, ecx */
  eax = ecx;
/* 92327c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92327d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923280: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923282: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923285: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923288: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92328b: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923291: jns 0x923298 */
  if (!sf) goto L_923298;
L_923293: /* 923293: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923294: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923297: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923298: /* 923298: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 92329f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9232a2: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9232a6: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9232a8: lea eax, [eax + edx*4 + 0x30] */
  eax = (uint32_t)(eax + edx*4 + 0x30u);
/* 9232ac: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 9232b3: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 9232ba: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 9232be: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 9232c5: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 9232cc: fsub dword ptr [esp + 0x9c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x9cu)));
/* 9232d3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9232d5: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 9232dc: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 9232e0: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 9232e4: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 9232eb: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9232ef: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 9232f6: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 9232fa: fsub dword ptr [esp + 0x90] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x90u)));
/* 923301: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 923304: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 92330b: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 92330f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 923313: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 92331a: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 92331e: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 923322: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 923326: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 92332a: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 92332d: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 923333: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 923336: je 0x92343c */
  if (zf) goto L_92343c;
L_92333c: /* 92333c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 92333f: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 923342: mov eax, ecx */
  eax = ecx;
/* 923344: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923345: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923348: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92334a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92334d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923350: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923353: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923359: jns 0x923360 */
  if (!sf) goto L_923360;
L_92335b: /* 92335b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92335c: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92335f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923360: /* 923360: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923363: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 923365: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923367: lea eax, [eax + edx*4 + 0x90] */
  eax = (uint32_t)(eax + edx*4 + 0x90u);
/* 92336e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 923370: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 923372: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 923376: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 92337a: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92337d: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 923381: fsub dword ptr [esp + 0x70] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x70u)));
/* 923385: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 923388: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 92338b: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 92338e: mov eax, ecx */
  eax = ecx;
/* 923390: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923391: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923394: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923396: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923399: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92339c: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92339f: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9233a5: jns 0x9233ac */
  if (!sf) goto L_9233ac;
L_9233a7: /* 9233a7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9233a8: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9233ab: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9233ac: /* 9233ac: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9233af: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 9233b3: fsub dword ptr [esp + 0x98] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x98u)));
/* 9233ba: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9233bc: lea eax, [eax + edx*4 + 0x90] */
  eax = (uint32_t)(eax + edx*4 + 0x90u);
/* 9233c3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9233c5: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 9233cc: fsub dword ptr [esp + 0x74] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x74u)));
/* 9233d0: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 9233d3: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 9233da: fsub dword ptr [esp + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x68u)));
/* 9233de: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 9233e1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9233e4: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* 9233e7: mov eax, ecx */
  eax = ecx;
/* 9233e9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9233ea: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9233ed: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9233ef: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9233f2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9233f5: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9233f8: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9233fe: jns 0x923405 */
  if (!sf) goto L_923405;
L_923400: /* 923400: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923401: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923404: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923405: /* 923405: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923408: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 92340f: fsub dword ptr [esp + 0x84] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x84u)));
/* 923416: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923418: lea eax, [eax + edx*4 + 0x90] */
  eax = (uint32_t)(eax + edx*4 + 0x90u);
/* 92341f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 923421: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 923428: fsub dword ptr [esp + 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x6cu)));
/* 92342c: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 92342f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 923433: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 923437: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 92343a: jmp 0x923440 */
  goto L_923440;
L_92343c: /* 92343c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92343e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_923440: /* 923440: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 923444: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 92344b: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 923452: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 923459: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 923460: mov edx, 0xff7fffff */
  edx = 0xff7fffffu;
/* 923465: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 923469: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 92346c: mov dword ptr [ecx + 0xc], 0x7f7fffff */
  W32((uint32_t)(ecx + 0xcu), 0x7f7fffffu);
/* 923473: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 923476: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923478: mov dword ptr [ecx + 0x10], 0x7f7fffff */
  W32((uint32_t)(ecx + 0x10u), 0x7f7fffffu);
/* 92347f: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 923486: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 923489: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 92348d: mov dword ptr [ecx + 0x14], 0x7f7fffff */
  W32((uint32_t)(ecx + 0x14u), 0x7f7fffffu);
/* 923494: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 92349b: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 92349f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9234a1: mov edx, 3 */
  edx = 0x3u;
/* 9234a6: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 9234a9: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 9234ad: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 9234b4: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 9234bb: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9234bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9234c1: fld dword ptr [esp + 0xa8] */
  { double v = F32((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* 9234c8: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 9234cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9234ce: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 9234d1: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 9234d8: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 9234dc: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 9234e3: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 9234e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9234e9: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 9234f0: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 9234f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9234f6: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 9234f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_923500: /* 923500: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 923503: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923506: fmul dword ptr [edi + 0x19c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x19cu)));
/* 92350c: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92350f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 923510: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 923513: fmul dword ptr [edi + 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1a4u)));
/* 923519: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92351b: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 92351e: fmul dword ptr [edi + 0x1a0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x1a0u)));
/* 923524: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923526: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 923529: jne 0x923500 */
  if (!zf) goto L_923500;
L_92352b: /* 92352b: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 923531: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 923535: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 923537: mov ecx, 3 */
  ecx = 0x3u;
/* 92353c: fadd dword ptr [edi + 0x184] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x184u)));
/* 923542: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 923548: fld dword ptr [edi + 0x17c] */
  { double v = F32((uint32_t)(edi + 0x17cu)); FPUSH(v); }
/* 92354e: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 923550: fadd dword ptr [edi + 0x188] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x188u)));
/* 923556: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 92355c: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 92355e: fmul dword ptr [edi + 0x180] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x180u)));
/* 923564: fadd dword ptr [edi + 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x18cu)));
/* 92356a: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 923570: fst dword ptr [esp + 0xec] */
  WF32((uint32_t)(esp + 0xecu), ST0);
/* 923577: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 923579: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* 92357c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92357e: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 923581: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
L_923584: /* 923584: fld dword ptr [edx + ecx*4] */
  { double v = F32((uint32_t)(edx + ecx*4)); FPUSH(v); }
/* 923587: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92358d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92358f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 923592: jp 0x92359b */
  if (pf) goto L_92359b;
L_923594: /* 923594: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
L_92359b: /* 92359b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 92359c: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 92359f: jb 0x923584 */
  if (cf) goto L_923584;
L_9235a1: /* 9235a1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9235a5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9235a7: fmul dword ptr [edi + 0x178] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x178u)));
/* 9235ad: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 9235af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9235b0: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 9235b2: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 9235b5: fmul dword ptr [edi + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x17cu)));
/* 9235bb: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 9235bd: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 9235c0: fld dword ptr [esp + 0xf4] */
  { double v = F32((uint32_t)(esp + 0xf4u)); FPUSH(v); }
/* 9235c7: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 9235c9: fmul dword ptr [edi + 0x180] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x180u)));
/* 9235cf: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 9235d2: call 0x91b610 */
  esp -= 4; W32(esp, 0x9235d7u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 9235d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9235d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9235d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9235da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9235db: add esp, 0xe0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9235e1: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_9235f0(void) {
  LOAD_REGS();
L_9235f0: /* 9235f0: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9235f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9235f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9235f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9235f6: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* 9235fa: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 9235fd: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 923600: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 923603: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 923606: mov ebp, dword ptr [esi + 0x48] */
  ebp = R32((uint32_t)(esi + 0x48u));
/* 923609: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 92360c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92360d: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* 923610: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 923612: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 923616: mov edi, dword ptr [esi + 0x4c] */
  edi = R32((uint32_t)(esi + 0x4cu));
/* 923619: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92361b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92361d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92361f: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 923621: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 923623: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 923627: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 92362b: mov dword ptr [esp + 0x74], edi */
  W32((uint32_t)(esp + 0x74u), edi);
/* 92362f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 923633: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 923637: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 92363b: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 92363f: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 923643: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 923647: mov dword ptr [esp + 0x70], ebp */
  W32((uint32_t)(esp + 0x70u), ebp);
/* 92364b: xor edi, edi */
  edi = 0;
/* 92364d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_923650: /* 923650: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923653: mov eax, ecx */
  eax = ecx;
/* 923655: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923656: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923659: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92365b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92365e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923664: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923667: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 92366a: jns 0x923671 */
  if (!sf) goto L_923671;
L_92366c: /* 92366c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92366d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923670: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923671: /* 923671: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 923674: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 923677: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 92367e: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923681: mov eax, ecx */
  eax = ecx;
/* 923683: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923684: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923687: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923689: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92368c: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923692: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 923695: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 923698: jns 0x92369f */
  if (!sf) goto L_92369f;
L_92369a: /* 92369a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92369b: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92369e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92369f: /* 92369f: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 9236a3: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9236a6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9236a7: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9236aa: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 9236b1: jne 0x923650 */
  if (!zf) goto L_923650;
L_9236b3: /* 9236b3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9236b7: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 9236bb: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 9236c2: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 9236c8: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 9236cf: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 9236d5: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9236db: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 9236de: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 9236e1: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 9236e7: mov dword ptr [edx + ecx*8], eax */
  W32((uint32_t)(edx + ecx*8), eax);
/* 9236ea: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 9236f0: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 9236f3: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 9236f6: mov dword ptr [edx + ecx*8 + 4], eax */
  W32((uint32_t)(edx + ecx*8 + 0x4u), eax);
/* 9236fa: mov eax, dword ptr [edi + 0x17c] */
  eax = R32((uint32_t)(edi + 0x17cu));
/* 923700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 923702: je 0x923c9c */
  if (zf) goto L_923c9c;
L_923708: /* 923708: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 92370e: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 923715: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 923718: lea ebx, [ecx + edx] */
  ebx = (uint32_t)(ecx + edx);
/* 92371b: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 92371f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 923723: mov ebp, ebx */
  ebp = ebx;
/* 923725: mov dword ptr [esp + 0x80], 4 */
  W32((uint32_t)(esp + 0x80u), 0x4u);
L_923730: /* 923730: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 923736: lea ecx, [edi + 0x160] */
  ecx = (uint32_t)(edi + 0x160u);
/* 92373c: mov eax, ebp */
  eax = ebp;
/* 92373e: mov edx, 3 */
  edx = 0x3u;
L_923743: /* 923743: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 923745: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923748: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92374a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92374d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 92374e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923750: jne 0x923743 */
  if (!zf) goto L_923743;
L_923752: /* 923752: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 923756: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 923758: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92375b: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 92375f: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 923766: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 923769: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 92376a: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 923771: jne 0x923730 */
  if (!zf) goto L_923730;
L_923773: /* 923773: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 923777: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 92377d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 923780: fadd dword ptr [ebx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x30u)));
/* 923783: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 923787: fadd dword ptr [ebx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x34u)));
/* 92378a: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 92378e: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 923792: fadd dword ptr [ebx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x38u)));
/* 923795: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 923799: jne 0x9237e8 */
  if (!zf) goto L_9237e8;
L_92379b: /* 92379b: fsub dword ptr [edi + 0x16c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x16cu)));
/* 9237a1: mov ebp, dword ptr [esp + 0x88] */
  ebp = R32((uint32_t)(esp + 0x88u));
/* 9237a8: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 9237ae: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9237b2: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 9237b6: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 9237bc: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9237c0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 9237c4: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 9237ca: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9237ce: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* 9237d2: fld dword ptr [eax + 0x90] */
  { double v = F32((uint32_t)(eax + 0x90u)); FPUSH(v); }
/* 9237d8: add eax, 0x90 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9237dd: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9237e0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9237e3: jmp 0x92390a */
  goto L_92390a;
L_9237e8: /* 9237e8: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 9237ef: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9237f2: lea ebx, [eax + ecx] */
  ebx = (uint32_t)(eax + ecx);
/* 9237f5: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 9237f9: mov dword ptr [esp + 0x84], edx */
  W32((uint32_t)(esp + 0x84u), edx);
/* 923800: mov ebp, ebx */
  ebp = ebx;
/* 923802: mov dword ptr [esp + 0x7c], 4 */
  W32((uint32_t)(esp + 0x7cu), 0x4u);
/* 92380a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_923810: /* 923810: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 923816: lea ecx, [edi + 0x16c] */
  ecx = (uint32_t)(edi + 0x16cu);
/* 92381c: mov eax, ebp */
  eax = ebp;
/* 92381e: mov edx, 3 */
  edx = 0x3u;
L_923823: /* 923823: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 923825: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923828: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92382a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 92382d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 92382e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923830: jne 0x923823 */
  if (!zf) goto L_923823;
L_923832: /* 923832: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 923839: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92383b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92383e: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 923845: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 923849: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 92384c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 92384d: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 923851: jne 0x923810 */
  if (!zf) goto L_923810;
L_923853: /* 923853: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 923857: mov ebp, dword ptr [esp + 0x88] */
  ebp = R32((uint32_t)(esp + 0x88u));
/* 92385e: fadd dword ptr [ebx + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x30u)));
/* 923861: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 923867: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 92386b: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 923871: fadd dword ptr [ebx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x34u)));
/* 923874: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 923878: fadd dword ptr [ebx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x38u)));
/* 92387b: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92387f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 923881: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 923883: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 923887: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92388b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 92388d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 923891: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 923893: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 923895: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 923899: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 92389d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9238a1: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9238a5: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9238a9: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9238ad: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 9238b1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9238b3: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9238b7: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 9238bb: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9238bf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9238c3: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9238c7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9238c9: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9238cd: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9238d1: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 9238d5: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 9238d9: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 9238dd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9238df: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9238e3: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* 9238e7: mov ecx, dword ptr [ebp + ecx*4] */
  ecx = R32((uint32_t)(ebp + ecx*4));
/* 9238eb: fld dword ptr [ecx + 0x90] */
  { double v = F32((uint32_t)(ecx + 0x90u)); FPUSH(v); }
/* 9238f1: add eax, 0x90 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9238f6: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 9238f8: add ecx, 0x90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9238fe: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 923901: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 923904: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 923907: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
L_92390a: /* 92390a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92390e: xor eax, eax */
  eax = 0;
/* 923910: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 923914: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 923918: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 92391c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92391e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 923922: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 923926: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 92392a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 92392e: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 923932: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 923934: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 923938: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92393c: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 923940: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 923944: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 923948: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92394a: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92394e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 923952: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 923956: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 92395a: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 92395e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 923960: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 923962: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923964: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 923966: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 923968: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92396a: fsqrt  */
  ST0 = sqrt(ST0);
/* 92396c: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 92396e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 923970: fstp dword ptr [edi + 0x18c] */
  WF32((uint32_t)(edi + 0x18cu), ST0); FPOP();
/* 923976: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 92397c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_923980: /* 923980: fld dword ptr [esp + eax*4 + 0x1c] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x1cu)); FPUSH(v); }
/* 923984: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 923985: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 923988: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92398a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 92398c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92398e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 923990: jl 0x923980 */
  if ((sf != of)) goto L_923980;
L_923992: /* 923992: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 923998: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92399a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 92399d: jne 0x9239c7 */
  if (!zf) goto L_9239c7;
L_92399f: /* 92399f: fsqrt  */
  ST0 = sqrt(ST0);
/* 9239a1: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 9239a7: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9239ab: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9239ad: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 9239b1: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9239b5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9239b7: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 9239bb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9239bf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9239c1: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9239c5: jmp 0x9239df */
  goto L_9239df;
L_9239c7: /* 9239c7: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 9239cf: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 9239d7: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_9239df: /* 9239df: mov ebx, dword ptr [esp + 0x8c] */
  ebx = R32((uint32_t)(esp + 0x8cu));
/* 9239e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9239e8: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9239ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9239ee: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9239f0: lea eax, [edi + 0x178] */
  eax = (uint32_t)(edi + 0x178u);
/* 9239f6: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 9239fa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9239fc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9239fe: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 923a02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923a04: fstp dword ptr [edi + 0x1a0] */
  WF32((uint32_t)(edi + 0x1a0u), ST0); FPOP();
/* 923a0a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 923a0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 923a0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 923a0e: call 0x91db90 */
  esp -= 4; W32(esp, 0x923a13u); SPILL(); f_91db90(); if (g_unwind) return; RELOAD();
/* 923a13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 923a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 923a15: xor ebx, ebx */
  ebx = 0;
/* 923a17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 923a18: lea edx, [esp + 0x78] */
  edx = (uint32_t)(esp + 0x78u);
/* 923a1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 923a1d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 923a1e: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 923a22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 923a23: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 923a27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 923a28: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 923a2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 923a2d: lea eax, [edi + 0xb4] */
  eax = (uint32_t)(edi + 0xb4u);
/* 923a33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 923a34: lea eax, [edi + 0x178] */
  eax = (uint32_t)(edi + 0x178u);
/* 923a3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 923a3b: call 0x91d6a0 */
  esp -= 4; W32(esp, 0x923a40u); SPILL(); f_91d6a0(); if (g_unwind) return; RELOAD();
/* 923a40: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 923a43: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 923a45: jne 0x923c94 */
  if (!zf) goto L_923c94;
L_923a4b: /* 923a4b: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 923a4e: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 923a51: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 923a57: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 923a5a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 923a5d: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 923a60: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 923a66: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 923a6a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923a6d: mov eax, ecx */
  eax = ecx;
/* 923a6f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923a70: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923a73: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923a75: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923a78: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 923a7b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 923a7e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923a84: jns 0x923a8b */
  if (!sf) goto L_923a8b;
L_923a86: /* 923a86: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923a87: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923a8a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923a8b: /* 923a8b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923a8d: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 923a90: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 923a93: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923a96: mov eax, ecx */
  eax = ecx;
/* 923a98: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923a99: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923a9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923a9e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923aa1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923aa4: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923aa7: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923aad: jns 0x923ab4 */
  if (!sf) goto L_923ab4;
L_923aaf: /* 923aaf: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923ab0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923ab3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923ab4: /* 923ab4: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923ab7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923ab9: mov dword ptr [eax + edx*4 + 0x10], ebx */
  W32((uint32_t)(eax + edx*4 + 0x10u), ebx);
/* 923abd: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923ac0: mov eax, ecx */
  eax = ecx;
/* 923ac2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923ac3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923ac6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923ac8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923acb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923ace: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923ad1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923ad7: jns 0x923ade */
  if (!sf) goto L_923ade;
L_923ad9: /* 923ad9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923ada: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923add: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923ade: /* 923ade: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923ae1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923ae3: mov dword ptr [eax + edx*4 + 0x20], ebx */
  W32((uint32_t)(eax + edx*4 + 0x20u), ebx);
/* 923ae7: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923aea: mov eax, ecx */
  eax = ecx;
/* 923aec: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923aed: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923af0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923af2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923af5: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923af8: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923afb: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923b01: jns 0x923b08 */
  if (!sf) goto L_923b08;
L_923b03: /* 923b03: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923b04: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923b07: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923b08: /* 923b08: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923b0b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923b0d: mov dword ptr [eax + edx*4 + 0x30], ebx */
  W32((uint32_t)(eax + edx*4 + 0x30u), ebx);
/* 923b11: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923b14: mov eax, ecx */
  eax = ecx;
/* 923b16: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923b17: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923b1a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923b1c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923b1f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923b22: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923b25: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923b2b: jns 0x923b32 */
  if (!sf) goto L_923b32;
L_923b2d: /* 923b2d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923b2e: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923b31: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923b32: /* 923b32: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923b35: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923b37: mov dword ptr [eax + edx*4 + 0x40], ebx */
  W32((uint32_t)(eax + edx*4 + 0x40u), ebx);
/* 923b3b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923b3e: mov eax, ecx */
  eax = ecx;
/* 923b40: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923b41: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923b44: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923b46: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923b49: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923b4c: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923b4f: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923b55: jns 0x923b5c */
  if (!sf) goto L_923b5c;
L_923b57: /* 923b57: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923b58: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923b5b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923b5c: /* 923b5c: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923b5f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923b61: mov dword ptr [eax + edx*4 + 0x50], ebx */
  W32((uint32_t)(eax + edx*4 + 0x50u), ebx);
/* 923b65: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 923b6c: je 0x923c7a */
  if (zf) goto L_923c7a;
L_923b72: /* 923b72: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923b75: mov eax, ecx */
  eax = ecx;
/* 923b77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923b78: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923b7b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923b7d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923b80: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923b83: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923b86: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923b8c: jns 0x923b93 */
  if (!sf) goto L_923b93;
L_923b8e: /* 923b8e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923b8f: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923b92: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923b93: /* 923b93: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923b96: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923b98: mov dword ptr [eax + edx*4 + 0x60], ebx */
  W32((uint32_t)(eax + edx*4 + 0x60u), ebx);
/* 923b9c: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923b9f: mov eax, ecx */
  eax = ecx;
/* 923ba1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923ba2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923ba5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923ba7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923baa: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923bad: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923bb0: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923bb6: jns 0x923bbd */
  if (!sf) goto L_923bbd;
L_923bb8: /* 923bb8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923bb9: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923bbc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923bbd: /* 923bbd: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923bc0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923bc2: mov dword ptr [eax + edx*4 + 0x70], ebx */
  W32((uint32_t)(eax + edx*4 + 0x70u), ebx);
/* 923bc6: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923bc9: mov eax, ecx */
  eax = ecx;
/* 923bcb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923bcc: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923bcf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923bd1: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923bd4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923bd7: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923bda: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923be0: jns 0x923be7 */
  if (!sf) goto L_923be7;
L_923be2: /* 923be2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923be3: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923be6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923be7: /* 923be7: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923bea: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923bec: mov dword ptr [eax + edx*4 + 0x80], ebx */
  W32((uint32_t)(eax + edx*4 + 0x80u), ebx);
/* 923bf3: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923bf6: mov eax, ecx */
  eax = ecx;
/* 923bf8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923bf9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923bfc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923bfe: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923c01: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923c04: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923c07: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923c0d: jns 0x923c14 */
  if (!sf) goto L_923c14;
L_923c0f: /* 923c0f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923c10: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923c13: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923c14: /* 923c14: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923c17: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923c19: mov dword ptr [eax + edx*4 + 0x90], ebx */
  W32((uint32_t)(eax + edx*4 + 0x90u), ebx);
/* 923c20: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923c23: mov eax, ecx */
  eax = ecx;
/* 923c25: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923c26: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923c29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923c2b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923c2e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923c31: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923c34: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923c3a: jns 0x923c41 */
  if (!sf) goto L_923c41;
L_923c3c: /* 923c3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923c3d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923c40: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923c41: /* 923c41: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923c44: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923c46: mov dword ptr [eax + edx*4 + 0xa0], ebx */
  W32((uint32_t)(eax + edx*4 + 0xa0u), ebx);
/* 923c4d: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923c50: mov eax, ecx */
  eax = ecx;
/* 923c52: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923c53: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923c56: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923c58: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923c5b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923c5e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 923c61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923c67: jns 0x923c6e */
  if (!sf) goto L_923c6e;
L_923c69: /* 923c69: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923c6a: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923c6d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923c6e: /* 923c6e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 923c71: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923c73: mov dword ptr [eax + edx*4 + 0xb0], ebx */
  W32((uint32_t)(eax + edx*4 + 0xb0u), ebx);
L_923c7a: /* 923c7a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 923c7e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 923c82: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 923c86: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 923c88: mov dword ptr [edx], 0xff7fffff */
  W32((uint32_t)(edx), 0xff7fffffu);
/* 923c8e: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
L_923c94: /* 923c94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 923c96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 923c97: call 0x91b610 */
  esp -= 4; W32(esp, 0x923c9cu); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
L_923c9c: /* 923c9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 923c9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 923c9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 923c9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 923ca0: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 923ca3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_923cb0(void) {
  LOAD_REGS();
L_923cb0: /* 923cb0: sub esp, 0xa8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 923cb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 923cb7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 923cb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 923cb9: mov esi, dword ptr [esp + 0xb8] */
  esi = R32((uint32_t)(esp + 0xb8u));
/* 923cc0: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 923cc3: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 923cc6: mov ebp, dword ptr [esi + 0x30] */
  ebp = R32((uint32_t)(esi + 0x30u));
/* 923cc9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 923ccc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923cce: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 923cd2: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 923cd5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923cd7: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 923cdb: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 923cde: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923ce0: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 923ce4: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 923ce7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923ce9: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 923ced: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 923cf0: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 923cf2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923cf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 923cf5: xor edi, edi */
  edi = 0;
/* 923cf7: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 923cfb: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 923cff: xor ebx, ebx */
  ebx = 0;
L_923d01: /* 923d01: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923d04: mov eax, ecx */
  eax = ecx;
/* 923d06: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923d07: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923d0a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923d0c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923d0f: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923d15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 923d18: lea edx, [ebx + eax*4] */
  edx = (uint32_t)(ebx + eax*4);
/* 923d1b: jns 0x923d22 */
  if (!sf) goto L_923d22;
L_923d1d: /* 923d1d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923d1e: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923d21: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923d22: /* 923d22: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 923d25: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 923d28: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 923d2b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923d2e: mov eax, ecx */
  eax = ecx;
/* 923d30: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923d31: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923d34: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923d36: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923d39: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923d3f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 923d42: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 923d45: jns 0x923d4c */
  if (!sf) goto L_923d4c;
L_923d47: /* 923d47: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923d48: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923d4b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923d4c: /* 923d4c: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 923d4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 923d50: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 923d53: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 923d57: mov dword ptr [edx + ecx*4], edi */
  W32((uint32_t)(edx + ecx*4), edi);
/* 923d5a: jne 0x923d01 */
  if (!zf) goto L_923d01;
L_923d5c: /* 923d5c: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 923d60: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 923d64: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 923d68: mov ebx, dword ptr [esp + 0xc0] */
  ebx = R32((uint32_t)(esp + 0xc0u));
/* 923d6f: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 923d72: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 923d74: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 923d76: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 923d7d: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 923d7f: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 923d85: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 923d88: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923d8a: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923d8d: lea edx, [esp + 0x78] */
  edx = (uint32_t)(esp + 0x78u);
/* 923d91: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 923d95: lea ecx, [ebx + 0xc4] */
  ecx = (uint32_t)(ebx + 0xc4u);
/* 923d9b: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_923da3: /* 923da3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 923da7: mov ebp, 4 */
  ebp = 0x4u;
/* 923dac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_923db0: /* 923db0: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 923db3: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923db6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 923db9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923dbc: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 923dbd: fld dword ptr [eax - 0x24] */
  { double v = F32((uint32_t)(eax + 0xffffffdcu)); FPUSH(v); }
/* 923dc0: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 923dc3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923dc5: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 923dc8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 923dcb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923dcd: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 923dd0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 923dd2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923dd4: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 923dd7: jne 0x923db0 */
  if (!zf) goto L_923db0;
L_923dd9: /* 923dd9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 923ddd: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923de0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 923de1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 923de5: jne 0x923da3 */
  if (!zf) goto L_923da3;
L_923de7: /* 923de7: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 923ded: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 923df0: je 0x923e59 */
  if (zf) goto L_923e59;
L_923df2: /* 923df2: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 923df9: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 923dfc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923dfe: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923e01: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 923e05: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 923e09: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 923e0f: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_923e17: /* 923e17: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 923e1b: mov ebp, 4 */
  ebp = 0x4u;
L_923e20: /* 923e20: fld dword ptr [eax - 0x20] */
  { double v = F32((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 923e23: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 923e26: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 923e29: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923e2c: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 923e2d: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* 923e30: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 923e33: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923e35: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 923e38: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 923e3b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923e3d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 923e40: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 923e42: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923e44: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 923e47: jne 0x923e20 */
  if (!zf) goto L_923e20;
L_923e49: /* 923e49: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 923e4d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 923e50: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 923e51: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 923e55: jne 0x923e17 */
  if (!zf) goto L_923e17;
L_923e57: /* 923e57: jmp 0x923e77 */
  goto L_923e77;
L_923e59: /* 923e59: mov eax, dword ptr [ebx + 0xfc] */
  eax = R32((uint32_t)(ebx + 0xfcu));
/* 923e5f: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* 923e65: mov edx, dword ptr [ebx + 0x104] */
  edx = R32((uint32_t)(ebx + 0x104u));
/* 923e6b: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 923e6f: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 923e73: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
L_923e77: /* 923e77: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 923e7e: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 923e82: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 923e86: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 923e8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923e8c: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 923e90: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 923e94: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 923e96: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 923e9a: fld dword ptr [ebx + 0x164] */
  { double v = F32((uint32_t)(ebx + 0x164u)); FPUSH(v); }
/* 923ea0: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 923ea4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 923ea6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 923ea9: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 923eaf: jne 0x92425e */
  if (!zf) goto L_92425e;
L_923eb5: /* 923eb5: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 923eb8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 923ebc: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 923ebf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 923ec5: mov dword ptr [edx + ecx*8], eax */
  W32((uint32_t)(edx + ecx*8), eax);
/* 923ec8: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 923ecb: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 923ece: mov edx, dword ptr [ebx + 0xb8] */
  edx = R32((uint32_t)(ebx + 0xb8u));
/* 923ed4: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 923ed8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 923eda: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 923edd: jp 0x923efa */
  if (pf) goto L_923efa;
L_923edf: /* 923edf: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 923ee3: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 923ee9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 923eeb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 923eee: jp 0x923efa */
  if (pf) goto L_923efa;
L_923ef0: /* 923ef0: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 923ef8: jmp 0x923f13 */
  goto L_923f13;
L_923efa: /* 923efa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 923efe: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 923f04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 923f06: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 923f09: jnp 0x923f13 */
  if (!pf) goto L_923f13;
L_923f0b: /* 923f0b: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_923f13: /* 923f13: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 923f17: call 0x99cc96 */
  esp -= 4; W32(esp, 0x923f1cu); SPILL(); hle_CIacos(); RELOAD();
/* 923f1c: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 923f20: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 923f24: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 923f2b: xor eax, eax */
  eax = 0;
/* 923f2d: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 923f31: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 923f33: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 923f37: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 923f3e: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 923f42: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 923f46: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 923f4a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 923f4c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 923f50: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 923f54: fmul dword ptr [esp + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x78u)));
/* 923f58: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 923f5c: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 923f60: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 923f62: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 923f66: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 923f6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_923f70: /* 923f70: fld dword ptr [esp + eax*4 + 0x14] */
  { double v = F32((uint32_t)(esp + eax*4 + 0x14u)); FPUSH(v); }
/* 923f74: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 923f75: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 923f78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 923f7a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 923f7c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 923f7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 923f80: jl 0x923f70 */
  if ((sf != of)) goto L_923f70;
L_923f82: /* 923f82: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 923f88: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 923f8a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 923f8d: jne 0x923fb5 */
  if (!zf) goto L_923fb5;
L_923f8f: /* 923f8f: fsqrt  */
  ST0 = sqrt(ST0);
/* 923f91: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 923f97: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 923f9b: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 923f9f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 923fa3: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 923fa7: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 923fab: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 923faf: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 923fb3: jmp 0x923fcd */
  goto L_923fcd;
L_923fb5: /* 923fb5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 923fb7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 923fbd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 923fc3: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 923fc7: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_923fcd: /* 923fcd: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923fd0: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 923fd4: mov eax, ecx */
  eax = ecx;
/* 923fd6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 923fd7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 923fda: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923fdc: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 923fdf: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 923fe2: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 923fe5: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 923feb: jns 0x923ff2 */
  if (!sf) goto L_923ff2;
L_923fed: /* 923fed: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 923fee: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 923ff1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_923ff2: /* 923ff2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 923ff4: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 923ff7: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 923ffa: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 923ffd: mov eax, ecx */
  eax = ecx;
/* 923fff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924000: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924003: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924005: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924008: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92400b: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92400e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924014: jns 0x92401b */
  if (!sf) goto L_92401b;
L_924016: /* 924016: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924017: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92401a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92401b: /* 92401b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92401e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924020: mov dword ptr [eax + edx*4 + 0x10], edi */
  W32((uint32_t)(eax + edx*4 + 0x10u), edi);
/* 924024: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924027: mov eax, ecx */
  eax = ecx;
/* 924029: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92402a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92402d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92402f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924032: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924035: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924038: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92403e: jns 0x924045 */
  if (!sf) goto L_924045;
L_924040: /* 924040: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924041: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924044: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924045: /* 924045: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924048: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92404a: mov dword ptr [eax + edx*4 + 0x20], edi */
  W32((uint32_t)(eax + edx*4 + 0x20u), edi);
/* 92404e: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924051: mov eax, ecx */
  eax = ecx;
/* 924053: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924054: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924057: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924059: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92405c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92405f: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924062: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924068: jns 0x92406f */
  if (!sf) goto L_92406f;
L_92406a: /* 92406a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92406b: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92406e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92406f: /* 92406f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924072: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 924074: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924076: fstp dword ptr [eax + edx*4 + 0x30] */
  WF32((uint32_t)(eax + edx*4 + 0x30u), ST0); FPOP();
/* 92407a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92407d: mov eax, ecx */
  eax = ecx;
/* 92407f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924080: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924083: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924085: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924088: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92408b: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92408e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924094: jns 0x92409b */
  if (!sf) goto L_92409b;
L_924096: /* 924096: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924097: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92409a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92409b: /* 92409b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92409e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9240a0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9240a2: fstp dword ptr [eax + edx*4 + 0x40] */
  WF32((uint32_t)(eax + edx*4 + 0x40u), ST0); FPOP();
/* 9240a6: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9240a9: mov eax, ecx */
  eax = ecx;
/* 9240ab: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9240ac: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9240af: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9240b1: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9240b4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9240b7: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9240ba: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9240c0: jns 0x9240c7 */
  if (!sf) goto L_9240c7;
L_9240c2: /* 9240c2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9240c3: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9240c6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9240c7: /* 9240c7: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9240ca: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9240cc: fstp dword ptr [eax + edx*4 + 0x50] */
  WF32((uint32_t)(eax + edx*4 + 0x50u), ST0); FPOP();
/* 9240d0: mov eax, dword ptr [ebx + 0xb8] */
  eax = R32((uint32_t)(ebx + 0xb8u));
/* 9240d6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9240d9: je 0x9241f7 */
  if (zf) goto L_9241f7;
L_9240df: /* 9240df: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9240e2: mov eax, ecx */
  eax = ecx;
/* 9240e4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9240e5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9240e8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9240ea: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9240ed: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9240f0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9240f3: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9240f9: jns 0x924100 */
  if (!sf) goto L_924100;
L_9240fb: /* 9240fb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9240fc: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9240ff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924100: /* 924100: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924103: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924105: mov dword ptr [eax + edx*4 + 0x60], edi */
  W32((uint32_t)(eax + edx*4 + 0x60u), edi);
/* 924109: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92410c: mov eax, ecx */
  eax = ecx;
/* 92410e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92410f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924112: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924114: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924117: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92411a: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92411d: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924123: jns 0x92412a */
  if (!sf) goto L_92412a;
L_924125: /* 924125: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924126: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924129: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92412a: /* 92412a: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92412d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92412f: mov dword ptr [eax + edx*4 + 0x70], edi */
  W32((uint32_t)(eax + edx*4 + 0x70u), edi);
/* 924133: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924136: mov eax, ecx */
  eax = ecx;
/* 924138: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924139: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92413c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92413e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924141: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924144: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924147: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92414d: jns 0x924154 */
  if (!sf) goto L_924154;
L_92414f: /* 92414f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924150: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924153: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924154: /* 924154: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924157: fchs  */
  ST0 = -ST0;
/* 924159: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92415b: mov dword ptr [eax + edx*4 + 0x80], edi */
  W32((uint32_t)(eax + edx*4 + 0x80u), edi);
/* 924162: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924165: mov eax, ecx */
  eax = ecx;
/* 924167: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924168: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92416b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92416d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924170: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924173: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924176: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92417c: jns 0x924183 */
  if (!sf) goto L_924183;
L_92417e: /* 92417e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92417f: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924182: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924183: /* 924183: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924186: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924188: fstp dword ptr [eax + edx*4 + 0x90] */
  WF32((uint32_t)(eax + edx*4 + 0x90u), ST0); FPOP();
/* 92418f: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924192: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 924196: mov eax, ecx */
  eax = ecx;
/* 924198: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924199: fchs  */
  ST0 = -ST0;
/* 92419b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92419e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9241a0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9241a3: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9241a6: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9241a9: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9241af: jns 0x9241b6 */
  if (!sf) goto L_9241b6;
L_9241b1: /* 9241b1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9241b2: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9241b5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9241b6: /* 9241b6: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9241b9: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9241bb: fstp dword ptr [eax + edx*4 + 0xa0] */
  WF32((uint32_t)(eax + edx*4 + 0xa0u), ST0); FPOP();
/* 9241c2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9241c5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 9241c9: mov eax, ecx */
  eax = ecx;
/* 9241cb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9241cc: fchs  */
  ST0 = -ST0;
/* 9241ce: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9241d1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9241d3: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9241d6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9241d9: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9241dc: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9241e2: jns 0x9241e9 */
  if (!sf) goto L_9241e9;
L_9241e4: /* 9241e4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9241e5: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9241e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9241e9: /* 9241e9: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9241ec: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9241ee: fstp dword ptr [eax + edx*4 + 0xb0] */
  WF32((uint32_t)(eax + edx*4 + 0xb0u), ST0); FPOP();
/* 9241f5: jmp 0x9241f9 */
  goto L_9241f9;
L_9241f7: /* 9241f7: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9241f9: /* 9241f9: fld dword ptr [ebx + 0x160] */
  { double v = F32((uint32_t)(ebx + 0x160u)); FPUSH(v); }
/* 9241ff: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 924203: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 924207: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 924209: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 92420d: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 92420f: mov ecx, dword ptr [esp + 0xcc] */
  ecx = R32((uint32_t)(esp + 0xccu));
/* 924216: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 924218: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 92421a: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 924220: fld dword ptr [ebx + 0x168] */
  { double v = F32((uint32_t)(ebx + 0x168u)); FPUSH(v); }
/* 924226: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 92422a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 92422c: fadd dword ptr [ebx + 0x16c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x16cu)));
/* 924232: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 924238: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 92423a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 92423c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 924242: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 924244: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 924247: jp 0x92424b */
  if (pf) goto L_92424b;
L_924249: /* 924249: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
L_92424b: /* 92424b: fmul dword ptr [ebx + 0x168] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x168u)));
/* 924251: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 924253: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 924257: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 924259: jmp 0x9244a1 */
  goto L_9244a1;
L_92425e: /* 92425e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 924261: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 924264: mov dword ptr [ecx + edx*8], eax */
  W32((uint32_t)(ecx + edx*8), eax);
/* 924267: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 92426a: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 92426d: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* 924273: mov dword ptr [eax + edx*8 + 4], ecx */
  W32((uint32_t)(eax + edx*8 + 0x4u), ecx);
/* 924277: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92427a: mov eax, ecx */
  eax = ecx;
/* 92427c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92427d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924280: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924282: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924285: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924288: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92428b: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924291: jns 0x924298 */
  if (!sf) goto L_924298;
L_924293: /* 924293: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924294: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924297: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924298: /* 924298: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92429b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92429d: mov dword ptr [eax + edx*4], edi */
  W32((uint32_t)(eax + edx*4), edi);
/* 9242a0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9242a3: mov eax, ecx */
  eax = ecx;
/* 9242a5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9242a6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9242a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9242ab: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9242ae: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9242b1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9242b4: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9242ba: jns 0x9242c1 */
  if (!sf) goto L_9242c1;
L_9242bc: /* 9242bc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9242bd: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9242c0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9242c1: /* 9242c1: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9242c4: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9242c6: mov dword ptr [eax + edx*4 + 0x10], edi */
  W32((uint32_t)(eax + edx*4 + 0x10u), edi);
/* 9242ca: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9242cd: mov eax, ecx */
  eax = ecx;
/* 9242cf: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9242d0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9242d3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9242d5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9242d8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9242db: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9242de: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9242e4: jns 0x9242eb */
  if (!sf) goto L_9242eb;
L_9242e6: /* 9242e6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9242e7: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9242ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9242eb: /* 9242eb: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9242ee: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9242f0: mov dword ptr [eax + edx*4 + 0x20], edi */
  W32((uint32_t)(eax + edx*4 + 0x20u), edi);
/* 9242f4: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9242f7: mov eax, ecx */
  eax = ecx;
/* 9242f9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9242fa: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9242fd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9242ff: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924302: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924305: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924308: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92430e: jns 0x924315 */
  if (!sf) goto L_924315;
L_924310: /* 924310: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924311: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924314: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924315: /* 924315: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924318: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92431a: mov dword ptr [eax + edx*4 + 0x30], edi */
  W32((uint32_t)(eax + edx*4 + 0x30u), edi);
/* 92431e: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924321: mov eax, ecx */
  eax = ecx;
/* 924323: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924324: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924327: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924329: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92432c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92432f: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924332: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924338: jns 0x92433f */
  if (!sf) goto L_92433f;
L_92433a: /* 92433a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92433b: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92433e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92433f: /* 92433f: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924342: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924344: mov dword ptr [eax + edx*4 + 0x40], edi */
  W32((uint32_t)(eax + edx*4 + 0x40u), edi);
/* 924348: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92434b: mov eax, ecx */
  eax = ecx;
/* 92434d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92434e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924351: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924353: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924356: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924359: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92435c: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924362: jns 0x924369 */
  if (!sf) goto L_924369;
L_924364: /* 924364: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924365: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924368: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924369: /* 924369: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92436c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92436e: mov dword ptr [eax + edx*4 + 0x50], edi */
  W32((uint32_t)(eax + edx*4 + 0x50u), edi);
/* 924372: cmp dword ptr [ebx + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924379: je 0x924487 */
  if (zf) goto L_924487;
L_92437f: /* 92437f: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924382: mov eax, ecx */
  eax = ecx;
/* 924384: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924385: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924388: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92438a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92438d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924390: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924393: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924399: jns 0x9243a0 */
  if (!sf) goto L_9243a0;
L_92439b: /* 92439b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92439c: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92439f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9243a0: /* 9243a0: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9243a3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9243a5: mov dword ptr [eax + edx*4 + 0x60], edi */
  W32((uint32_t)(eax + edx*4 + 0x60u), edi);
/* 9243a9: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9243ac: mov eax, ecx */
  eax = ecx;
/* 9243ae: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9243af: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9243b2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9243b4: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9243b7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9243ba: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9243bd: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9243c3: jns 0x9243ca */
  if (!sf) goto L_9243ca;
L_9243c5: /* 9243c5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9243c6: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9243c9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9243ca: /* 9243ca: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9243cd: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9243cf: mov dword ptr [eax + edx*4 + 0x70], edi */
  W32((uint32_t)(eax + edx*4 + 0x70u), edi);
/* 9243d3: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9243d6: mov eax, ecx */
  eax = ecx;
/* 9243d8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9243d9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9243dc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9243de: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9243e1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9243e4: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9243e7: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9243ed: jns 0x9243f4 */
  if (!sf) goto L_9243f4;
L_9243ef: /* 9243ef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9243f0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9243f3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9243f4: /* 9243f4: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 9243f7: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9243f9: mov dword ptr [eax + edx*4 + 0x80], edi */
  W32((uint32_t)(eax + edx*4 + 0x80u), edi);
/* 924400: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924403: mov eax, ecx */
  eax = ecx;
/* 924405: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924406: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924409: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92440b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92440e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924411: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924414: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92441a: jns 0x924421 */
  if (!sf) goto L_924421;
L_92441c: /* 92441c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92441d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924420: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924421: /* 924421: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924424: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924426: mov dword ptr [eax + edx*4 + 0x90], edi */
  W32((uint32_t)(eax + edx*4 + 0x90u), edi);
/* 92442d: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924430: mov eax, ecx */
  eax = ecx;
/* 924432: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924433: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924436: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924438: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92443b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92443e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924441: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924447: jns 0x92444e */
  if (!sf) goto L_92444e;
L_924449: /* 924449: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 92444a: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92444d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92444e: /* 92444e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 924451: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924453: mov dword ptr [eax + edx*4 + 0xa0], edi */
  W32((uint32_t)(eax + edx*4 + 0xa0u), edi);
/* 92445a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 92445d: mov eax, ecx */
  eax = ecx;
/* 92445f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924460: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924463: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924465: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924468: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92446b: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92446e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924474: jns 0x92447b */
  if (!sf) goto L_92447b;
L_924476: /* 924476: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924477: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92447a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92447b: /* 92447b: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 92447e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924480: mov dword ptr [eax + edx*4 + 0xb0], edi */
  W32((uint32_t)(eax + edx*4 + 0xb0u), edi);
L_924487: /* 924487: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 92448b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 92448f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 924493: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 924495: mov dword ptr [edx], 0xff7fffff */
  W32((uint32_t)(edx), 0xff7fffffu);
/* 92449b: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
L_9244a1: /* 9244a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9244a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9244a4: call 0x91b610 */
  esp -= 4; W32(esp, 0x9244a9u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 9244a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9244aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9244ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9244ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9244ad: add esp, 0xa8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9244b3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_9244c0(void) {
  LOAD_REGS();
L_9244c0: /* 9244c0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9244c3: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9244c7: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 9244ca: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 9244cd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9244d0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9244d2: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9244d6: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 9244d9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9244db: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 9244df: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 9244e2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9244e4: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 9244e8: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 9244eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9244ec: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9244ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9244ef: mov ebp, dword ptr [ecx + 0x34] */
  ebp = R32((uint32_t)(ecx + 0x34u));
/* 9244f2: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 9244f6: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* 9244f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9244fa: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9244fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9244fd: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9244ff: xor ebx, ebx */
  ebx = 0;
/* 924501: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 924505: xor edi, edi */
  edi = 0;
L_924507: /* 924507: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 92450a: mov eax, esi */
  eax = esi;
/* 92450c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92450d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924510: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924512: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924515: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 92451b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92451e: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924521: jns 0x924528 */
  if (!sf) goto L_924528;
L_924523: /* 924523: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 924524: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 924527: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_924528: /* 924528: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 92452b: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 92452e: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 924531: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 924534: mov eax, esi */
  eax = esi;
/* 924536: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924537: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92453a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92453c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92453f: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 924545: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924548: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 92454b: jns 0x924552 */
  if (!sf) goto L_924552;
L_92454d: /* 92454d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 92454e: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 924551: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_924552: /* 924552: lea eax, [esi + edx*4 + 0x18] */
  eax = (uint32_t)(esi + edx*4 + 0x18u);
/* 924556: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 924559: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 92455a: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92455d: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 924560: jne 0x924507 */
  if (!zf) goto L_924507;
L_924562: /* 924562: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 924566: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92456a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 92456c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924570: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 924572: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* 924575: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 924577: xor edi, edi */
  edi = 0;
/* 924579: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_924580: /* 924580: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 924583: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 924584: mov eax, esi */
  eax = esi;
/* 924586: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924587: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92458a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92458c: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92458f: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 924595: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924598: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 92459b: jns 0x9245a2 */
  if (!sf) goto L_9245a2;
L_92459d: /* 92459d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 92459e: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9245a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_9245a2: /* 9245a2: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
/* 9245a5: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 9245a8: mov dword ptr [eax + edx*4], ebx */
  W32((uint32_t)(eax + edx*4), ebx);
/* 9245ab: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 9245ae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9245af: mov eax, esi */
  eax = esi;
/* 9245b1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9245b2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9245b5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9245b7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9245ba: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 9245c0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9245c3: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 9245c6: jns 0x9245cd */
  if (!sf) goto L_9245cd;
L_9245c8: /* 9245c8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9245c9: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9245cc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_9245cd: /* 9245cd: lea edx, [esi + eax*4 + 0x18] */
  edx = (uint32_t)(esi + eax*4 + 0x18u);
/* 9245d1: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 9245d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9245d5: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9245d8: mov dword ptr [eax + edx*4], ebx */
  W32((uint32_t)(eax + edx*4), ebx);
/* 9245db: jne 0x924580 */
  if (!zf) goto L_924580;
L_9245dd: /* 9245dd: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 9245e1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9245e5: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 9245e8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9245ec: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 9245ef: mov dword ptr [ebp + 4], ebx */
  W32((uint32_t)(ebp + 0x4u), ebx);
/* 9245f2: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 9245f5: xor edi, edi */
  edi = 0;
L_9245f7: /* 9245f7: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 9245fa: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9245fd: mov eax, esi */
  eax = esi;
/* 9245ff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924600: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924603: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924605: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924608: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 92460e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924611: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924614: jns 0x92461b */
  if (!sf) goto L_92461b;
L_924616: /* 924616: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 924617: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92461a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_92461b: /* 92461b: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 92461e: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 924621: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 924624: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 924627: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92462a: mov eax, esi */
  eax = esi;
/* 92462c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92462d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924630: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924632: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924635: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 92463b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92463e: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924641: jns 0x924648 */
  if (!sf) goto L_924648;
L_924643: /* 924643: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 924644: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 924647: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_924648: /* 924648: lea eax, [esi + edx*4 + 0x18] */
  eax = (uint32_t)(esi + edx*4 + 0x18u);
/* 92464c: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 92464f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 924650: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924653: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 924656: jne 0x9245f7 */
  if (!zf) goto L_9245f7;
L_924658: /* 924658: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 92465c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 924660: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 924663: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924667: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 92466a: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 92466d: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 924670: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 924673: mov eax, esi */
  eax = esi;
/* 924675: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924676: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924679: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92467b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92467e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924681: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924684: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 92468a: jns 0x924691 */
  if (!sf) goto L_924691;
L_92468c: /* 92468c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 92468d: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 924690: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_924691: /* 924691: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 924694: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924696: mov edi, 0x3f800000 */
  edi = 0x3f800000u;
/* 92469b: mov dword ptr [eax + edx*4], edi */
  W32((uint32_t)(eax + edx*4), edi);
/* 92469e: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 9246a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9246a2: mov eax, esi */
  eax = esi;
/* 9246a4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9246a5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9246a8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9246aa: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9246ad: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9246b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9246b3: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 9246b9: jns 0x9246c0 */
  if (!sf) goto L_9246c0;
L_9246bb: /* 9246bb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9246bc: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9246bf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_9246c0: /* 9246c0: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 9246c3: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9246c5: mov dword ptr [eax + edx*4 + 0x10], edi */
  W32((uint32_t)(eax + edx*4 + 0x10u), edi);
/* 9246c9: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 9246cc: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9246cf: mov eax, esi */
  eax = esi;
/* 9246d1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9246d2: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9246d5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9246d7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9246da: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9246dd: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9246e0: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 9246e6: jns 0x9246ed */
  if (!sf) goto L_9246ed;
L_9246e8: /* 9246e8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9246e9: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 9246ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_9246ed: /* 9246ed: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 9246f0: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9246f2: mov dword ptr [eax + edx*4 + 0x20], edi */
  W32((uint32_t)(eax + edx*4 + 0x20u), edi);
/* 9246f6: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 9246fa: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 9246fe: mov ebp, 4 */
  ebp = 0x4u;
L_924703: /* 924703: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 924707: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 92470d: mov eax, edi */
  eax = edi;
/* 92470f: mov esi, 3 */
  esi = 0x3u;
L_924714: /* 924714: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 924716: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924719: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 92471b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92471e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 92471f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924721: jne 0x924714 */
  if (!zf) goto L_924714;
L_924723: /* 924723: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 924725: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 924728: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 92472b: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 92472c: jne 0x924703 */
  if (!zf) goto L_924703;
L_92472e: /* 92472e: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 924731: mov ebx, dword ptr [ecx + 0x2c] */
  ebx = R32((uint32_t)(ecx + 0x2cu));
/* 924734: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
/* 924737: mov eax, edi */
  eax = edi;
/* 924739: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92473a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92473d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92473f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924742: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924745: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924748: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 92474e: jns 0x924755 */
  if (!sf) goto L_924755;
L_924750: /* 924750: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 924751: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 924754: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_924755: /* 924755: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924757: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 92475a: mov eax, edi */
  eax = edi;
/* 92475c: lea ebp, [ebx + edx*4 + 0x30] */
  ebp = (uint32_t)(ebx + edx*4 + 0x30u);
/* 924760: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924761: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924764: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924766: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924769: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92476c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 92476f: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 924775: jns 0x92477c */
  if (!sf) goto L_92477c;
L_924777: /* 924777: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 924778: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 92477b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_92477c: /* 92477c: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92477e: lea edi, [ebx + eax*4 + 0x30] */
  edi = (uint32_t)(ebx + eax*4 + 0x30u);
/* 924782: mov eax, esi */
  eax = esi;
/* 924784: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924785: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924788: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92478a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92478d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924790: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924793: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 924799: jns 0x9247a0 */
  if (!sf) goto L_9247a0;
L_92479b: /* 92479b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 92479c: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92479f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_9247a0: /* 9247a0: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9247a4: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9247a6: lea ebx, [ebx + edx*4 + 0x30] */
  ebx = (uint32_t)(ebx + edx*4 + 0x30u);
/* 9247aa: fchs  */
  ST0 = -ST0;
/* 9247ac: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9247b0: fstp dword ptr [ebx + 0x20] */
  WF32((uint32_t)(ebx + 0x20u), ST0); FPOP();
/* 9247b3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9247b7: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 9247ba: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9247be: fchs  */
  ST0 = -ST0;
/* 9247c0: xor eax, eax */
  eax = 0;
/* 9247c2: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 9247c4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 9247c6: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9247ca: mov dword ptr [edi + 0x20], edx */
  W32((uint32_t)(edi + 0x20u), edx);
/* 9247cd: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 9247d1: fchs  */
  ST0 = -ST0;
/* 9247d3: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 9247d6: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 9247d9: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 9247dc: cmp dword ptr [esp + 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9247e0: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 9247e3: jne 0x92481c */
  if (!zf) goto L_92481c;
L_9247e5: /* 9247e5: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 9247e9: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 9247ed: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 9247f1: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 9247f5: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9247f8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9247fa: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9247fc: mov edi, 3 */
  edi = 0x3u;
L_924801: /* 924801: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* 924804: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924807: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 92480a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92480d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 92480e: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* 924811: fstp dword ptr [esi + eax - 4] */
  WF32((uint32_t)(esi + eax + 0xfffffffcu), ST0); FPOP();
/* 924815: jne 0x924801 */
  if (!zf) goto L_924801;
L_924817: /* 924817: jmp 0x9249e5 */
  goto L_9249e5;
L_92481c: /* 92481c: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 92481f: mov eax, esi */
  eax = esi;
/* 924821: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924822: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924825: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924827: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92482a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92482d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924830: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 924836: jns 0x92483d */
  if (!sf) goto L_92483d;
L_924838: /* 924838: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 924839: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92483c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_92483d: /* 92483d: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 924840: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924842: mov edi, 0xbf800000 */
  edi = 0xbf800000u;
/* 924847: mov dword ptr [eax + edx*4 + 0x60], edi */
  W32((uint32_t)(eax + edx*4 + 0x60u), edi);
/* 92484b: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 92484e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 92484f: mov eax, esi */
  eax = esi;
/* 924851: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924852: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924855: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924857: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 92485a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92485d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924860: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 924866: jns 0x92486d */
  if (!sf) goto L_92486d;
L_924868: /* 924868: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 924869: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 92486c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_92486d: /* 92486d: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 924870: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924872: mov dword ptr [eax + edx*4 + 0x70], edi */
  W32((uint32_t)(eax + edx*4 + 0x70u), edi);
/* 924876: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 924879: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 92487c: mov eax, esi */
  eax = esi;
/* 92487e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92487f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924882: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924884: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924887: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92488a: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92488d: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 924893: jns 0x92489a */
  if (!sf) goto L_92489a;
L_924895: /* 924895: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 924896: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 924899: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_92489a: /* 92489a: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 92489d: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 9248a1: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9248a3: mov dword ptr [eax + edx*4 + 0x80], edi */
  W32((uint32_t)(eax + edx*4 + 0x80u), edi);
/* 9248aa: lea ebx, [esp + 0x30] */
  ebx = (uint32_t)(esp + 0x30u);
/* 9248ae: mov edi, ebp */
  edi = ebp;
/* 9248b0: mov dword ptr [esp + 0x50], 4 */
  W32((uint32_t)(esp + 0x50u), 0x4u);
L_9248b8: /* 9248b8: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 9248bc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9248c2: mov eax, edi */
  eax = edi;
/* 9248c4: mov esi, 3 */
  esi = 0x3u;
/* 9248c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9248d0: /* 9248d0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9248d2: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9248d5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 9248d7: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9248da: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9248db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9248dd: jne 0x9248d0 */
  if (!zf) goto L_9248d0;
L_9248df: /* 9248df: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 9248e3: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9248e5: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9248e8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9248eb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 9248ec: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 9248f0: jne 0x9248b8 */
  if (!zf) goto L_9248b8;
L_9248f2: /* 9248f2: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 9248f5: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 9248f8: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
/* 9248fb: mov eax, edi */
  eax = edi;
/* 9248fd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9248fe: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924901: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924903: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924906: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924909: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92490c: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 924912: jns 0x924919 */
  if (!sf) goto L_924919;
L_924914: /* 924914: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 924915: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 924918: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_924919: /* 924919: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 92491b: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 92491e: mov eax, edi */
  eax = edi;
/* 924920: lea ebx, [ecx + edx*4 + 0x90] */
  ebx = (uint32_t)(ecx + edx*4 + 0x90u);
/* 924927: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924928: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92492b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92492d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924930: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924933: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 924936: and edi, 0x80000003 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 92493c: jns 0x924943 */
  if (!sf) goto L_924943;
L_92493e: /* 92493e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 92493f: or edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 924942: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_924943: /* 924943: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924945: lea edi, [ecx + eax*4 + 0x90] */
  edi = (uint32_t)(ecx + eax*4 + 0x90u);
/* 92494c: mov eax, esi */
  eax = esi;
/* 92494e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92494f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924952: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924954: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924957: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92495a: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 92495d: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 924963: jns 0x92496a */
  if (!sf) goto L_92496a;
L_924965: /* 924965: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 924966: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 924969: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_92496a: /* 92496a: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 92496e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924970: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 924976: lea eax, [ecx + edx*4 + 0x90] */
  eax = (uint32_t)(ecx + edx*4 + 0x90u);
/* 92497d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 924981: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 924985: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 924988: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 92498b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92498f: xor esi, esi */
  esi = 0;
/* 924991: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 924997: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 924999: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 92499d: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 92499f: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 9249a3: fstp dword ptr [edi + 0x20] */
  WF32((uint32_t)(edi + 0x20u), ST0); FPOP();
/* 9249a6: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 9249aa: mov dword ptr [edi + 0x10], esi */
  W32((uint32_t)(edi + 0x10u), esi);
/* 9249ad: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 9249b3: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 9249b6: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9249b8: mov dword ptr [ebx + 0x20], esi */
  W32((uint32_t)(ebx + 0x20u), esi);
/* 9249bb: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9249bd: lea ecx, [ebp + 0x30] */
  ecx = (uint32_t)(ebp + 0x30u);
/* 9249c0: xor eax, eax */
  eax = 0;
L_9249c2: /* 9249c2: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* 9249c5: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 9249c9: fadd dword ptr [esp + eax + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + eax + 0x20u)));
/* 9249cd: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9249d0: fld dword ptr [esp + eax + 0x2c] */
  { double v = F32((uint32_t)(esp + eax + 0x2cu)); FPUSH(v); }
/* 9249d4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9249d7: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9249da: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 9249dd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9249df: fstp dword ptr [eax + esi - 4] */
  WF32((uint32_t)(eax + esi + 0xfffffffcu), ST0); FPOP();
/* 9249e3: jl 0x9249c2 */
  if ((sf != of)) goto L_9249c2;
L_9249e5: /* 9249e5: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9249e9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 9249ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9249ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9249ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9249f0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9249f2: mov edx, 3 */
  edx = 0x3u;
/* 9249f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_9249f8: /* 9249f8: mov dword ptr [ecx + eax], 0xff7fffff */
  W32((uint32_t)(ecx + eax), 0xff7fffffu);
/* 9249ff: mov dword ptr [eax], 0x7f7fffff */
  W32((uint32_t)(eax), 0x7f7fffffu);
/* 924a05: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924a08: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 924a09: jne 0x9249f8 */
  if (!zf) goto L_9249f8;
L_924a0b: /* 924a0b: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 924a0e: ret  */
  esp += 4; SPILL(); return;
}

void f_924a10(void) {
  LOAD_REGS();
L_924a10: /* 924a10: sub esp, 0x190 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 924a16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 924a17: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 924a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 924a19: mov esi, dword ptr [esp + 0x1a0] */
  esi = R32((uint32_t)(esp + 0x1a0u));
/* 924a20: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 924a23: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 924a26: mov ebp, dword ptr [esi + 0x30] */
  ebp = R32((uint32_t)(esi + 0x30u));
/* 924a29: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 924a2c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924a2e: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 924a32: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 924a35: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924a37: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 924a3e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 924a41: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924a43: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 924a47: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 924a4a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924a4c: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 924a50: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 924a53: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 924a55: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924a57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 924a58: xor ebx, ebx */
  ebx = 0;
/* 924a5a: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 924a5e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 924a62: xor edi, edi */
  edi = 0;
L_924a64: /* 924a64: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924a67: mov eax, ecx */
  eax = ecx;
/* 924a69: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924a6a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924a6d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924a6f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924a72: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924a78: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924a7b: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924a7e: jns 0x924a85 */
  if (!sf) goto L_924a85;
L_924a80: /* 924a80: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924a81: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924a84: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924a85: /* 924a85: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 924a88: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 924a8b: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 924a8e: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924a91: mov eax, ecx */
  eax = ecx;
/* 924a93: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924a94: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924a97: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924a99: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924a9c: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924aa2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924aa5: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 924aa8: jns 0x924aaf */
  if (!sf) goto L_924aaf;
L_924aaa: /* 924aaa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924aab: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924aae: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924aaf: /* 924aaf: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 924ab2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 924ab3: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924ab6: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 924aba: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 924abd: jne 0x924a64 */
  if (!zf) goto L_924a64;
L_924abf: /* 924abf: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924ac3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 924ac7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 924acb: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* 924ace: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 924ad0: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 924ad2: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 924ad4: xor edi, edi */
  edi = 0;
L_924ad6: /* 924ad6: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924ad9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 924ada: mov eax, ecx */
  eax = ecx;
/* 924adc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924add: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924ae0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924ae2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924ae5: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924aeb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924aee: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924af1: jns 0x924af8 */
  if (!sf) goto L_924af8;
L_924af3: /* 924af3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924af4: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924af7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924af8: /* 924af8: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 924afb: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 924afe: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 924b01: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924b04: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 924b05: mov eax, ecx */
  eax = ecx;
/* 924b07: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924b08: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924b0b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924b0d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924b10: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924b16: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924b19: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 924b1c: jns 0x924b23 */
  if (!sf) goto L_924b23;
L_924b1e: /* 924b1e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924b1f: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924b22: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924b23: /* 924b23: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 924b26: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 924b27: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924b2a: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 924b2e: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 924b31: jne 0x924ad6 */
  if (!zf) goto L_924ad6;
L_924b33: /* 924b33: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924b37: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 924b3b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 924b3f: mov dword ptr [ebp + 4], ebx */
  W32((uint32_t)(ebp + 0x4u), ebx);
/* 924b42: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 924b45: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 924b48: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 924b4b: xor edi, edi */
  edi = 0;
/* 924b4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_924b50: /* 924b50: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924b53: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924b56: mov eax, ecx */
  eax = ecx;
/* 924b58: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924b59: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924b5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924b5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924b61: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924b67: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924b6a: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924b6d: jns 0x924b74 */
  if (!sf) goto L_924b74;
L_924b6f: /* 924b6f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924b70: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924b73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924b74: /* 924b74: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 924b77: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 924b7a: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 924b7d: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924b80: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924b83: mov eax, ecx */
  eax = ecx;
/* 924b85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924b86: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924b89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924b8b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924b8e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924b94: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924b97: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 924b9a: jns 0x924ba1 */
  if (!sf) goto L_924ba1;
L_924b9c: /* 924b9c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924b9d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924ba0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924ba1: /* 924ba1: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 924ba4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 924ba5: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924ba8: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 924bac: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 924baf: jne 0x924b50 */
  if (!zf) goto L_924b50;
L_924bb1: /* 924bb1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924bb5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 924bb9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 924bbd: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 924bc0: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 924bc3: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 924bc6: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 924bc9: xor edi, edi */
  edi = 0;
/* 924bcb: nop  */
/* 924bcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_924bd0: /* 924bd0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924bd3: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924bd6: mov eax, ecx */
  eax = ecx;
/* 924bd8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924bd9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924bdc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924bde: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924be1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924be7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924bea: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924bed: jns 0x924bf4 */
  if (!sf) goto L_924bf4;
L_924bef: /* 924bef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924bf0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924bf3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924bf4: /* 924bf4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 924bf7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 924bfa: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 924bfd: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924c00: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924c03: mov eax, ecx */
  eax = ecx;
/* 924c05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924c06: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924c09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924c0b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924c0e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924c14: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924c17: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 924c1a: jns 0x924c21 */
  if (!sf) goto L_924c21;
L_924c1c: /* 924c1c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924c1d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924c20: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924c21: /* 924c21: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 924c24: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 924c25: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924c28: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 924c2c: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 924c2f: jne 0x924bd0 */
  if (!zf) goto L_924bd0;
L_924c31: /* 924c31: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924c35: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 924c39: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 924c3d: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 924c40: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 924c43: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 924c46: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 924c48: mov dword ptr [esp + 0x88], eax */
  W32((uint32_t)(esp + 0x88u), eax);
/* 924c4f: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 924c52: xor edi, edi */
  edi = 0;
L_924c54: /* 924c54: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924c57: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924c5a: mov eax, ecx */
  eax = ecx;
/* 924c5c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924c5d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924c60: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924c62: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924c65: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924c6b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924c6e: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924c71: jns 0x924c78 */
  if (!sf) goto L_924c78;
L_924c73: /* 924c73: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924c74: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924c77: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924c78: /* 924c78: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 924c7b: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 924c7e: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 924c81: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924c84: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924c87: mov eax, ecx */
  eax = ecx;
/* 924c89: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924c8a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924c8d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924c8f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924c92: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924c98: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924c9b: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 924c9e: jns 0x924ca5 */
  if (!sf) goto L_924ca5;
L_924ca0: /* 924ca0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924ca1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924ca4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924ca5: /* 924ca5: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 924ca8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 924ca9: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924cac: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 924cb0: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 924cb3: jne 0x924c54 */
  if (!zf) goto L_924c54;
L_924cb5: /* 924cb5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924cb9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 924cbd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 924cc1: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 924cc4: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 924cc7: mov dword ptr [ecx + 0x10], ebx */
  W32((uint32_t)(ecx + 0x10u), ebx);
/* 924cca: mov dword ptr [edx + 0x10], ebx */
  W32((uint32_t)(edx + 0x10u), ebx);
/* 924ccd: xor edi, edi */
  edi = 0;
/* 924ccf: nop  */
L_924cd0: /* 924cd0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924cd3: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924cd6: mov eax, ecx */
  eax = ecx;
/* 924cd8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924cd9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924cdc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924cde: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924ce1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924ce7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 924cea: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 924ced: jns 0x924cf4 */
  if (!sf) goto L_924cf4;
L_924cef: /* 924cef: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924cf0: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924cf3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924cf4: /* 924cf4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 924cf7: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 924cfa: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 924cfd: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 924d00: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 924d03: mov eax, ecx */
  eax = ecx;
/* 924d05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 924d06: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 924d09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924d0b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 924d0e: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 924d14: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 924d17: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 924d1a: jns 0x924d21 */
  if (!sf) goto L_924d21;
L_924d1c: /* 924d1c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 924d1d: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 924d20: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_924d21: /* 924d21: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 924d24: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 924d25: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924d28: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 924d2c: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 924d2f: jne 0x924cd0 */
  if (!zf) goto L_924cd0;
L_924d31: /* 924d31: mov edi, dword ptr [esp + 0x1a8] */
  edi = R32((uint32_t)(esp + 0x1a8u));
/* 924d38: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 924d3c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 924d40: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 924d44: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
/* 924d47: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 924d4a: mov dword ptr [ecx + 0x14], ebx */
  W32((uint32_t)(ecx + 0x14u), ebx);
/* 924d4d: mov dword ptr [edx + 0x14], ebx */
  W32((uint32_t)(edx + 0x14u), ebx);
/* 924d50: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 924d53: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 924d56: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 924d5c: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 924d5f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 924d62: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 924d65: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 924d6b: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 924d6f: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 924d75: xor ecx, ecx */
  ecx = 0;
/* 924d77: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924d7a: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 924d7d: lea edx, [edi + 0x12c] */
  edx = (uint32_t)(edi + 0x12cu);
/* 924d83: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 924d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 924d87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 924d88: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 924d8e: lea ecx, [edi + 0xec] */
  ecx = (uint32_t)(edi + 0xecu);
/* 924d94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 924d95: mov ecx, dword ptr [esp + 0x1b8] */
  ecx = R32((uint32_t)(esp + 0x1b8u));
/* 924d9c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924d9e: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 924da1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 924da2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 924da4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 924da5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 924da6: call 0x9244c0 */
  esp -= 4; W32(esp, 0x924dabu); SPILL(); f_9244c0(); if (g_unwind) return; RELOAD();
/* 924dab: mov eax, dword ptr [edi + 0x170] */
  eax = R32((uint32_t)(edi + 0x170u));
/* 924db1: mov ebp, dword ptr [esp + 0x1c8] */
  ebp = R32((uint32_t)(esp + 0x1c8u));
/* 924db8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 924dbb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924dbd: je 0x924e8f */
  if (zf) goto L_924e8f;
L_924dc3: /* 924dc3: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 924dc9: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* 924dcd: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 924dd3: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924dd8: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 924dde: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 924de4: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 924de7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924de9: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 924def: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 924df2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924df4: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 924dfa: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 924dfd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924dff: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 924e03: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 924e09: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 924e0c: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 924e12: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 924e14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924e16: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 924e19: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 924e1f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924e21: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 924e27: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 924e2a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924e2c: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 924e30: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 924e36: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 924e39: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 924e3f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 924e41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924e43: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 924e46: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 924e4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924e4e: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 924e54: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 924e57: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924e59: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 924e5d: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 924e63: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 924e66: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 924e6c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 924e6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924e70: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 924e73: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 924e79: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924e7b: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 924e81: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 924e84: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924e86: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 924e8d: jmp 0x924ec0 */
  goto L_924ec0;
L_924e8f: /* 924e8f: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 924e95: mov eax, dword ptr [ebp + ecx*4] */
  eax = R32((uint32_t)(ebp + ecx*4));
/* 924e99: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 924e9f: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 924ea4: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 924ea8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 924eab: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 924eaf: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 924eb2: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 924eb6: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 924eb9: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
L_924ec0: /* 924ec0: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 924ec4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 924ec5: lea edx, [esp + 0x144] */
  edx = (uint32_t)(esp + 0x144u);
/* 924ecc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 924ecd: call 0x9258e0 */
  esp -= 4; W32(esp, 0x924ed2u); SPILL(); f_9258e0(); if (g_unwind) return; RELOAD();
/* 924ed2: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 924ed8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 924edb: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924ede: je 0x9253cb */
  if (zf) goto L_9253cb;
L_924ee4: /* 924ee4: cmp dword ptr [edi + 0x184], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x184u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 924eea: mov eax, dword ptr [ebp + ecx*4] */
  eax = R32((uint32_t)(ebp + ecx*4));
/* 924eee: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 924ef4: fld dword ptr [eax + 0xb4] */
  { double v = F32((uint32_t)(eax + 0xb4u)); FPUSH(v); }
/* 924efa: fchs  */
  ST0 = -ST0;
/* 924efc: fld dword ptr [eax + 0xb8] */
  { double v = F32((uint32_t)(eax + 0xb8u)); FPUSH(v); }
/* 924f02: fchs  */
  ST0 = -ST0;
/* 924f04: fld dword ptr [eax + 0xbc] */
  { double v = F32((uint32_t)(eax + 0xbcu)); FPUSH(v); }
/* 924f0a: fchs  */
  ST0 = -ST0;
/* 924f0c: je 0x9252a3 */
  if (zf) goto L_9252a3;
L_924f12: /* 924f12: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 924f18: lea ebx, [edi + 0x1a4] */
  ebx = (uint32_t)(edi + 0x1a4u);
/* 924f1e: fchs  */
  ST0 = -ST0;
/* 924f20: mov ecx, dword ptr [edi + 0x174] */
  ecx = R32((uint32_t)(edi + 0x174u));
/* 924f26: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 924f2a: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 924f2e: fld dword ptr [edi + 0x17c] */
  { double v = F32((uint32_t)(edi + 0x17cu)); FPUSH(v); }
/* 924f34: fchs  */
  ST0 = -ST0;
/* 924f36: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 924f3a: fld dword ptr [edi + 0x180] */
  { double v = F32((uint32_t)(edi + 0x180u)); FPUSH(v); }
/* 924f40: fchs  */
  ST0 = -ST0;
/* 924f42: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 924f46: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 924f48: fmul dword ptr [edi + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x174u)));
/* 924f4e: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 924f54: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 924f57: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924f59: fld dword ptr [edi + 0x17c] */
  { double v = F32((uint32_t)(edi + 0x17cu)); FPUSH(v); }
/* 924f5f: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 924f62: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924f64: fld dword ptr [edi + 0x180] */
  { double v = F32((uint32_t)(edi + 0x180u)); FPUSH(v); }
/* 924f6a: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 924f6d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924f6f: fld dword ptr [edi + 0x17c] */
  { double v = F32((uint32_t)(edi + 0x17cu)); FPUSH(v); }
/* 924f75: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 924f78: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 924f7a: fmul dword ptr [edi + 0x178] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x178u)));
/* 924f80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924f82: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 924f85: fmul dword ptr [edi + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x174u)));
/* 924f8b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924f8d: fld dword ptr [edi + 0x180] */
  { double v = F32((uint32_t)(edi + 0x180u)); FPUSH(v); }
/* 924f93: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 924f96: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924f98: fld dword ptr [edi + 0x180] */
  { double v = F32((uint32_t)(edi + 0x180u)); FPUSH(v); }
/* 924f9e: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 924fa1: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 924fa3: fmul dword ptr [edi + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x17cu)));
/* 924fa9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924fab: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 924fae: fmul dword ptr [edi + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x174u)));
/* 924fb4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924fb6: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 924fbc: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 924fbf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924fc1: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 924fc5: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 924fcb: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 924fce: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 924fd0: fmul dword ptr [edi + 0x180] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x180u)));
/* 924fd6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924fd8: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 924fdb: fmul dword ptr [edi + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x174u)));
/* 924fe1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 924fe3: fld dword ptr [edi + 0x17c] */
  { double v = F32((uint32_t)(edi + 0x17cu)); FPUSH(v); }
/* 924fe9: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 924fec: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 924fee: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 924ff2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 924ff4: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 924ffa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 924ffc: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 925002: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925004: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 925008: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 92500e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925010: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 925014: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 92501a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92501c: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 925020: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 925024: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 92502a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92502c: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 925032: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925034: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 925036: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 92503c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92503e: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 925042: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 925048: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92504a: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 92504e: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 925054: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 925056: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 92505c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 925060: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 925066: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925068: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92506a: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 925070: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925072: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 925076: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 92507c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92507e: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 925082: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 925084: fmul dword ptr [eax + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xbcu)));
/* 92508a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92508e: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 925094: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925096: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92509a: fmul dword ptr [eax + 0xb4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb4u)));
/* 9250a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9250a2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9250a4: fmul dword ptr [eax + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb8u)));
/* 9250aa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9250ac: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 9250b0: mov eax, dword ptr [ebp + edx*4] */
  eax = R32((uint32_t)(ebp + edx*4));
/* 9250b4: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 9250ba: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9250bf: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 9250c5: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9250c8: fmul dword ptr [edi + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x164u)));
/* 9250ce: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9250d0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9250d3: fmul dword ptr [edi + 0x168] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x168u)));
/* 9250d9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9250db: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 9250de: fmul dword ptr [edi + 0x16c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x16cu)));
/* 9250e4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9250e6: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9250e9: fmul dword ptr [edi + 0x16c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x16cu)));
/* 9250ef: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9250f1: fmul dword ptr [edi + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x164u)));
/* 9250f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9250f9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 9250fc: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 925102: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925104: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 925107: fmul dword ptr [edi + 0x168] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x168u)));
/* 92510d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92510f: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 925112: fmul dword ptr [edi + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x164u)));
/* 925118: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 92511a: fmul dword ptr [edi + 0x168] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x168u)));
/* 925120: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925122: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 925125: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 92512b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92512d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 925130: fmul dword ptr [edi + 0x16c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x16cu)));
/* 925136: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925138: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 92513c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 92513f: fmul dword ptr [edi + 0x168] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x168u)));
/* 925145: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 925147: fmul dword ptr [edi + 0x16c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x16cu)));
/* 92514d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92514f: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 925152: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 925158: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92515a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 92515d: fmul dword ptr [edi + 0x164] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x164u)));
/* 925163: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925165: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 925169: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92516b: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 92516d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 92516f: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 925171: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925173: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 925177: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 925179: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92517b: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 92517f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 925181: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925183: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 925187: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 925189: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 92518b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 92518d: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 92518f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925191: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 925195: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 925197: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925199: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 92519d: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 92519f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9251a1: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 9251a5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9251a7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9251a9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9251ab: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9251ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9251af: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9251b3: fmul st(7) */
  ST0 = ST0 * STI(7);
/* 9251b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9251b7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9251bb: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9251bd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9251bf: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9251c3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9251c5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9251c7: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 9251cb: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9251cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9251cf: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 9251d3: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 9251d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9251d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9251d9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9251db: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9251dd: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 9251e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9251e3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9251e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9251e7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9251e9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 9251ed: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 9251f1: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 9251f5: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 9251f9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9251fb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9251ff: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 925203: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925205: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 925209: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 92520d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92520f: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 925213: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 925217: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 92521b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92521f: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 925223: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925225: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 925229: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 92522d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92522f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 925233: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 925237: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925239: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 92523d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 925241: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 925245: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 925249: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 92524d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92524f: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 925253: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 925257: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925259: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 92525d: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 925261: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925263: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 925267: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 92526b: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 92526f: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 925273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925274: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 925278: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 92527f: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 925283: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925284: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925286: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 92528a: fmul dword ptr [esp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x50u)));
/* 92528e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925290: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 925294: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 925298: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92529a: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 92529e: jmp 0x9254de */
  goto L_9254de;
L_9252a3: /* 9252a3: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 9252a9: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9252ab: mov eax, dword ptr [ebp + edx*4] */
  eax = R32((uint32_t)(ebp + edx*4));
/* 9252af: fmul dword ptr [eax + 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xb0u)));
/* 9252b5: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9252ba: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9252bc: lea ebx, [edi + 0x1a4] */
  ebx = (uint32_t)(edi + 0x1a4u);
/* 9252c2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9252c5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9252c7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9252c9: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9252cc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9252ce: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9252d0: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9252d3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9252d5: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 9252d9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9252db: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9252de: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9252e0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9252e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9252e4: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 9252e6: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9252e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9252eb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9252ed: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9252f0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9252f2: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 9252f6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 9252f8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9252fb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9252fd: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 925300: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925302: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 925304: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 925306: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925308: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 92530a: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 92530d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92530f: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 925313: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 925315: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 925318: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 92531a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92531d: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 92531f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 925321: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 925323: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925325: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 925327: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92532a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92532c: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 925330: mov eax, dword ptr [ebp + ecx*4] */
  eax = R32((uint32_t)(ebp + ecx*4));
/* 925334: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 925336: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92533b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92533d: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 925340: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 925343: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925345: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 925348: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92534b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92534d: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 925350: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 925353: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925355: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 925359: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 92535b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92535e: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 925361: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 925364: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925366: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 925369: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92536b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92536d: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 925370: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 925373: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925375: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 925379: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 92537b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 92537e: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 925381: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 925384: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 92538b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92538d: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 925390: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 925392: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925394: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 925397: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92539a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92539c: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 9253a0: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 9253a2: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 9253a5: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 9253a8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9253ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9253ad: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 9253b0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 9253b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9253b4: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 9253b7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 9253ba: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 9253be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9253bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9253c0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9253c2: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 9253c6: jmp 0x9254de */
  goto L_9254de;
L_9253cb: /* 9253cb: cmp dword ptr [edi + 0x170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9253d1: je 0x9254a0 */
  if (zf) goto L_9254a0;
L_9253d7: /* 9253d7: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 9253dd: mov eax, dword ptr [ebp + edx*4] */
  eax = R32((uint32_t)(ebp + edx*4));
/* 9253e1: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 9253e7: add eax, 0xb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9253ec: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 9253f2: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 9253f8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 9253fb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9253fd: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 925403: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 925406: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925408: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 92540e: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 925411: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925413: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 925417: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 92541d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 925420: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 925423: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 925429: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92542b: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 925431: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 925433: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925435: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 92543b: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 92543e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 925440: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 925444: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 92544a: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 92544d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 925450: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 925456: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925458: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 92545e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 925460: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925462: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 925468: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92546b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92546d: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 925471: fld dword ptr [edi + 0x168] */
  { double v = F32((uint32_t)(edi + 0x168u)); FPUSH(v); }
/* 925477: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 92547a: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 92547d: fmul dword ptr [edi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x160u)));
/* 925483: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 925485: fld dword ptr [edi + 0x16c] */
  { double v = F32((uint32_t)(edi + 0x16cu)); FPUSH(v); }
/* 92548b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 92548d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 92548f: fld dword ptr [edi + 0x164] */
  { double v = F32((uint32_t)(edi + 0x164u)); FPUSH(v); }
/* 925495: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 925498: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 92549a: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 92549e: jmp 0x9254cf */
  goto L_9254cf;
L_9254a0: /* 9254a0: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 9254a6: mov ebp, dword ptr [ebp + eax*4] */
  ebp = R32((uint32_t)(ebp + eax*4));
/* 9254aa: mov ecx, dword ptr [ebp + 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xb0u));
/* 9254b0: add ebp, 0xb0 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9254b6: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 9254ba: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 9254bd: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 9254c1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9254c4: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 9254c8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9254cb: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
L_9254cf: /* 9254cf: lea ebx, [edi + 0x1a4] */
  ebx = (uint32_t)(edi + 0x1a4u);
/* 9254d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9254d6: lea edx, [esp + 0xc0] */
  edx = (uint32_t)(esp + 0xc0u);
/* 9254dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_9254de: /* 9254de: call 0x925930 */
  esp -= 4; W32(esp, 0x9254e3u); SPILL(); f_925930(); if (g_unwind) return; RELOAD();
/* 9254e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9254e6: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
/* 9254ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9254ee: lea ecx, [esp + 0x144] */
  ecx = (uint32_t)(esp + 0x144u);
/* 9254f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9254f6: lea edx, [esp + 0xc4] */
  edx = (uint32_t)(esp + 0xc4u);
/* 9254fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9254fe: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 925500: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 925502: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 925504: call 0x925990 */
  esp -= 4; W32(esp, 0x925509u); SPILL(); f_925990(); if (g_unwind) return; RELOAD();
/* 925509: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92550c: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
/* 925513: mov edx, 3 */
  edx = 0x3u;
L_925518: /* 925518: mov ecx, 3 */
  ecx = 0x3u;
/* 92551d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_925520: /* 925520: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 925522: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925525: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 925526: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 92552c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 92552f: jne 0x925520 */
  if (!zf) goto L_925520;
L_925531: /* 925531: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 925532: jne 0x925518 */
  if (!zf) goto L_925518;
L_925534: /* 925534: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 92553c: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
L_925543: /* 925543: xor ebp, ebp */
  ebp = 0;
/* 925545: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 925549: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_925550: /* 925550: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 925553: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 925557: lea ecx, [eax + ecx + 3] */
  ecx = (uint32_t)(eax + ecx + 0x3u);
/* 92555b: mov eax, ecx */
  eax = ecx;
/* 92555d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92555e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 925561: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925563: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 925566: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92556c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92556f: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 925573: jns 0x92557a */
  if (!sf) goto L_92557a;
L_925575: /* 925575: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 925576: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 925579: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92557a: /* 92557a: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 92557d: lea ecx, [ecx + eax*4 + 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xcu);
/* 925581: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 925585: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 925587: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 92558a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92558e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 92558f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 925592: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 925595: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 925599: jb 0x925550 */
  if (cf) goto L_925550;
L_92559b: /* 92559b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 92559f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9255a3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9255a4: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9255a7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9255ab: jl 0x925543 */
  if ((sf != of)) goto L_925543;
L_9255ad: /* 9255ad: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9255b4: je 0x92562f */
  if (zf) goto L_92562f;
L_9255b6: /* 9255b6: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9255be: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
L_9255c5: /* 9255c5: xor ebp, ebp */
  ebp = 0;
/* 9255c7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9255cb: nop  */
/* 9255cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9255d0: /* 9255d0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9255d4: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 9255d7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9255db: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 9255dd: lea ecx, [ecx + edx + 3] */
  ecx = (uint32_t)(ecx + edx + 0x3u);
/* 9255e1: mov eax, ecx */
  eax = ecx;
/* 9255e3: fchs  */
  ST0 = -ST0;
/* 9255e5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 9255e6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9255e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9255eb: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9255ee: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9255f4: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 9255f7: lea eax, [ebp + edx*4] */
  eax = (uint32_t)(ebp + edx*4);
/* 9255fb: jns 0x925602 */
  if (!sf) goto L_925602;
L_9255fd: /* 9255fd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9255fe: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 925601: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_925602: /* 925602: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 925605: lea ecx, [ecx + eax*4 + 0x24] */
  ecx = (uint32_t)(ecx + eax*4 + 0x24u);
/* 925609: fstp dword ptr [edx + ecx*4] */
  WF32((uint32_t)(edx + ecx*4), ST0); FPOP();
/* 92560c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 925610: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 925611: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 925614: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 925617: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 92561b: jb 0x9255d0 */
  if (cf) goto L_9255d0;
L_92561d: /* 92561d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 925621: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 925625: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 925626: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 925629: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 92562d: jl 0x9255c5 */
  if ((sf != of)) goto L_9255c5;
L_92562f: /* 92562f: lea eax, [esp + 0xec] */
  eax = (uint32_t)(esp + 0xecu);
/* 925636: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925637: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925638: call 0x925930 */
  esp -= 4; W32(esp, 0x92563du); SPILL(); f_925930(); if (g_unwind) return; RELOAD();
/* 92563d: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 925644: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925645: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 925649: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92564a: lea eax, [esp + 0xfc] */
  eax = (uint32_t)(esp + 0xfcu);
/* 925651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925652: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 925654: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 925656: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 925658: call 0x925990 */
  esp -= 4; W32(esp, 0x92565du); SPILL(); f_925990(); if (g_unwind) return; RELOAD();
/* 92565d: mov ecx, dword ptr [esp + 0xac] */
  ecx = R32((uint32_t)(esp + 0xacu));
/* 925664: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 925668: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 92566b: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 925672: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 925675: mov eax, dword ptr [esp + 0xb4] */
  eax = R32((uint32_t)(esp + 0xb4u));
/* 92567c: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 925680: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925681: lea edx, [esp + 0x194] */
  edx = (uint32_t)(esp + 0x194u);
/* 925688: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 925689: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 92568c: call 0x9258e0 */
  esp -= 4; W32(esp, 0x925691u); SPILL(); f_9258e0(); if (g_unwind) return; RELOAD();
/* 925691: lea eax, [esp + 0x144] */
  eax = (uint32_t)(esp + 0x144u);
/* 925698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925699: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 9256a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9256a1: lea edx, [esp + 0x11c] */
  edx = (uint32_t)(esp + 0x11cu);
/* 9256a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9256a9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9256ab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 9256ad: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9256af: call 0x925990 */
  esp -= 4; W32(esp, 0x9256b4u); SPILL(); f_925990(); if (g_unwind) return; RELOAD();
/* 9256b4: mov ebx, dword ptr [esp + 0xc8] */
  ebx = R32((uint32_t)(esp + 0xc8u));
/* 9256bb: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9256be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9256bf: lea eax, [edi + 0x1b4] */
  eax = (uint32_t)(edi + 0x1b4u);
/* 9256c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9256c6: lea ecx, [esp + 0x124] */
  ecx = (uint32_t)(esp + 0x124u);
/* 9256cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9256ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 9256d0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9256d2: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 9256d4: call 0x925990 */
  esp -= 4; W32(esp, 0x9256d9u); SPILL(); f_925990(); if (g_unwind) return; RELOAD();
/* 9256d9: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 9256db: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 9256e1: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 9256e5: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 9256ec: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9256ee: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 9256f0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9256f3: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 9256f6: lea edx, [edi + 0x1cc] */
  edx = (uint32_t)(edi + 0x1ccu);
/* 9256fc: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 925702: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 925706: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 92570a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 92570e: fstp dword ptr [ebx + 4] */
  WF32((uint32_t)(ebx + 0x4u), ST0); FPOP();
/* 925711: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 925714: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 92571a: fstp dword ptr [ebx + 8] */
  WF32((uint32_t)(ebx + 0x8u), ST0); FPOP();
/* 92571d: xor ebx, ebx */
  ebx = 0;
/* 92571f: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 925721: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 925725: jmp 0x925730 */
  goto L_925730;
L_925727: /* 925727: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92572b: nop  */
/* 92572c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_925730: /* 925730: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 925732: fchs  */
  ST0 = -ST0;
/* 925734: fstp dword ptr [eax + ecx] */
  WF32((uint32_t)(eax + ecx), ST0); FPOP();
/* 925737: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 925739: fst dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0);
/* 92573b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 925741: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 925743: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 925746: jp 0x9257d5 */
  if (pf) goto L_9257d5;
L_92574c: /* 92574c: mov dword ptr [ecx + ebp], 0 */
  W32((uint32_t)(ecx + ebp), 0x0u);
/* 925753: xor ebp, ebp */
  ebp = 0;
L_925755: /* 925755: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 925758: lea ecx, [edx + ebx] */
  ecx = (uint32_t)(edx + ebx);
/* 92575b: mov eax, ecx */
  eax = ecx;
/* 92575d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92575e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 925761: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925763: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 925766: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92576c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 92576f: lea edx, [ebp + eax*4] */
  edx = (uint32_t)(ebp + eax*4);
/* 925773: jns 0x92577a */
  if (!sf) goto L_92577a;
L_925775: /* 925775: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 925776: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 925779: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92577a: /* 92577a: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 92577d: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 925780: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* 925787: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92578e: je 0x9257c3 */
  if (zf) goto L_9257c3;
L_925790: /* 925790: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 925793: lea ecx, [edx + ebx] */
  ecx = (uint32_t)(edx + ebx);
/* 925796: mov eax, ecx */
  eax = ecx;
/* 925798: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 925799: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92579c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92579e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9257a1: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 9257a7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 9257aa: lea edx, [ebp + eax*4] */
  edx = (uint32_t)(ebp + eax*4);
/* 9257ae: jns 0x9257b5 */
  if (!sf) goto L_9257b5;
L_9257b0: /* 9257b0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9257b1: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 9257b4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_9257b5: /* 9257b5: lea eax, [ecx + edx*4 + 0x18] */
  eax = (uint32_t)(ecx + edx*4 + 0x18u);
/* 9257b9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 9257bc: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
L_9257c3: /* 9257c3: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9257c4: cmp ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9257c7: jl 0x925755 */
  if ((sf != of)) goto L_925755;
L_9257c9: /* 9257c9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9257cd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 9257d1: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
L_9257d5: /* 9257d5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9257d6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9257d9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9257dc: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9257df: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 9257e3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 9257e7: jl 0x925727 */
  if ((sf != of)) goto L_925727;
L_9257ed: /* 9257ed: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9257f1: lea ecx, [edx + 0xc] */
  ecx = (uint32_t)(edx + 0xcu);
/* 9257f4: lea edx, [edi + 0x1c0] */
  edx = (uint32_t)(edi + 0x1c0u);
/* 9257fa: mov ebp, 3 */
  ebp = 0x3u;
/* 9257ff: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 925803: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_925807: /* 925807: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 925809: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 92580d: fchs  */
  ST0 = -ST0;
/* 92580f: fstp dword ptr [ecx + eax] */
  WF32((uint32_t)(ecx + eax), ST0); FPOP();
/* 925812: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 925814: fst dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0);
/* 925816: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 92581c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 92581e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 925821: jp 0x9258b1 */
  if (pf) goto L_9258b1;
L_925827: /* 925827: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 92582b: mov dword ptr [ecx + edx], 0 */
  W32((uint32_t)(ecx + edx), 0x0u);
/* 925832: mov ebx, 3 */
  ebx = 0x3u;
L_925837: /* 925837: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 92583a: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 92583d: mov eax, ecx */
  eax = ecx;
/* 92583f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 925840: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 925843: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925845: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 925848: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 92584e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 925851: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 925854: jns 0x92585b */
  if (!sf) goto L_92585b;
L_925856: /* 925856: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 925857: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 92585a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_92585b: /* 92585b: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 92585e: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 925861: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 925868: cmp dword ptr [edi + 0xb8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xb8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92586f: je 0x9258a3 */
  if (zf) goto L_9258a3;
L_925871: /* 925871: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 925874: lea ecx, [eax + ebp] */
  ecx = (uint32_t)(eax + ebp);
/* 925877: mov eax, ecx */
  eax = ecx;
/* 925879: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 92587a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92587d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92587f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 925882: and ecx, 0x80000003 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 925888: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 92588b: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 92588e: jns 0x925895 */
  if (!sf) goto L_925895;
L_925890: /* 925890: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 925891: or ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 925894: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_925895: /* 925895: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 925898: lea ecx, [ecx + eax*4 + 0x18] */
  ecx = (uint32_t)(ecx + eax*4 + 0x18u);
/* 92589c: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
L_9258a3: /* 9258a3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9258a4: cmp ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9258a7: jl 0x925837 */
  if ((sf != of)) goto L_925837;
L_9258a9: /* 9258a9: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9258ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_9258b1: /* 9258b1: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9258b2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9258b5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9258b8: cmp ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9258bb: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 9258bf: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 9258c3: jl 0x925807 */
  if ((sf != of)) goto L_925807;
L_9258c9: /* 9258c9: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 9258cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9258cc: call 0x91b610 */
  esp -= 4; W32(esp, 0x9258d1u); SPILL(); f_91b610(); if (g_unwind) return; RELOAD();
/* 9258d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9258d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9258d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9258d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9258d5: add esp, 0x190 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x190u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9258db: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_9258e0(void) {
  LOAD_REGS();
L_9258e0: /* 9258e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9258e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9258e8: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 9258eb: fchs  */
  ST0 = -ST0;
/* 9258ed: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 9258ef: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 9258f2: fchs  */
  ST0 = -ST0;
/* 9258f4: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 9258f7: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 9258fa: fchs  */
  ST0 = -ST0;
/* 9258fc: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 9258ff: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 925901: fst dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0);
/* 925904: fst dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0);
/* 925907: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92590a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92590d: fst dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0);
/* 925910: fchs  */
  ST0 = -ST0;
/* 925912: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 925915: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 925918: fst dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0);
/* 92591b: fchs  */
  ST0 = -ST0;
/* 92591d: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 925920: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 925923: fst dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0);
/* 925926: fchs  */
  ST0 = -ST0;
/* 925928: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 92592b: ret  */
  esp += 4; SPILL(); return;
}

void f_925930(void) {
  LOAD_REGS();
L_925930: /* 925930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925934: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 925938: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92593b: fchs  */
  ST0 = -ST0;
/* 92593d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 92593f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 925942: fchs  */
  ST0 = -ST0;
/* 925944: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 925947: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 92594a: fchs  */
  ST0 = -ST0;
/* 92594c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 92594f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 925951: fst dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0);
/* 925954: fst dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0);
/* 925957: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 92595a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 92595d: fchs  */
  ST0 = -ST0;
/* 92595f: fst dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0);
/* 925962: fchs  */
  ST0 = -ST0;
/* 925964: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 925967: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 92596a: fchs  */
  ST0 = -ST0;
/* 92596c: fst dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0);
/* 92596f: fchs  */
  ST0 = -ST0;
/* 925971: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 925974: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 925977: fchs  */
  ST0 = -ST0;
/* 925979: fst dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0);
/* 92597c: fchs  */
  ST0 = -ST0;
/* 92597e: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 925981: ret  */
  esp += 4; SPILL(); return;
}

void f_925990(void) {
  LOAD_REGS();
L_925990: /* 925990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925994: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 925996: jle 0x925a2b */
  if ((zf || sf != of)) goto L_925a2b;
L_92599c: /* 92599c: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 9259a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9259a1: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 9259a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9259a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9259a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9259a8: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 9259ac: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 9259b3: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 9259b7: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9259bb: nop  */
/* 9259bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9259c0: /* 9259c0: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 9259c4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9259c6: jle 0x925a09 */
  if ((zf || sf != of)) goto L_925a09;
L_9259c8: /* 9259c8: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 9259cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9259d0: /* 9259d0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9259d2: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 9259d8: jle 0x9259f4 */
  if ((zf || sf != of)) goto L_9259f4;
L_9259da: /* 9259da: mov ecx, esi */
  ecx = esi;
/* 9259dc: mov eax, ebx */
  eax = ebx;
/* 9259de: mov edi, edi */
  edi = edi;
L_9259e0: /* 9259e0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 9259e2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9259e5: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 9259e8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9259eb: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 9259ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9259ee: jne 0x9259e0 */
  if (!zf) goto L_9259e0;
L_9259f0: /* 9259f0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
L_9259f4: /* 9259f4: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 9259fb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 9259fd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 925a00: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 925a02: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 925a03: jne 0x9259d0 */
  if (!zf) goto L_9259d0;
L_925a05: /* 925a05: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_925a09: /* 925a09: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 925a0d: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 925a14: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 925a16: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 925a1a: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 925a1c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 925a1d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 925a21: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 925a25: jne 0x9259c0 */
  if (!zf) goto L_9259c0;
L_925a27: /* 925a27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925a28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925a29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925a2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_925a2b: /* 925a2b: ret  */
  esp += 4; SPILL(); return;
}

void f_925a30(void) {
  LOAD_REGS();
L_925a30: /* 925a30: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 925a33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925a34: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 925a38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925a39: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 925a3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925a3e: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 925a41: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925a43: jne 0x925a59 */
  if (!zf) goto L_925a59;
L_925a45: /* 925a45: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925a47: je 0x925b57 */
  if (zf) goto L_925b57;
L_925a4d: /* 925a4d: cmp dword ptr [ebx + 0x234], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x234u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925a53: je 0x925b57 */
  if (zf) goto L_925b57;
L_925a59: /* 925a59: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925a5b: je 0x925a95 */
  if (zf) goto L_925a95;
L_925a5d: /* 925a5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925a5e: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 925a62: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 925a66: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 925a6a: call 0x9285f0 */
  esp -= 4; W32(esp, 0x925a6fu); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 925a6f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 925a73: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 925a77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925a78: push 0x925b60 */
  { uint32_t v = 0x925b60u; esp -= 4; W32(esp, v); }
/* 925a7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925a7e: call 0x90f1f0 */
  esp -= 4; W32(esp, 0x925a83u); SPILL(); f_90f1f0(); if (g_unwind) return; RELOAD();
/* 925a83: cmp dword ptr [edi + 0x234], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x234u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925a89: jne 0x925a95 */
  if (!zf) goto L_925a95;
L_925a8b: /* 925a8b: mov dword ptr [edi + 0x234], 0 */
  W32((uint32_t)(edi + 0x234u), 0x0u);
L_925a95: /* 925a95: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925a97: je 0x925af0 */
  if (zf) goto L_925af0;
L_925a99: /* 925a99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925a9a: mov dword ptr [ebx + 0x234], esi */
  W32((uint32_t)(ebx + 0x234u), esi);
/* 925aa0: call 0x90e0e0 */
  esp -= 4; W32(esp, 0x925aa5u); SPILL(); f_90e0e0(); if (g_unwind) return; RELOAD();
/* 925aa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925aa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925aa7: call 0x928740 */
  esp -= 4; W32(esp, 0x925aacu); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 925aac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925aad: call 0x90e2e0 */
  esp -= 4; W32(esp, 0x925ab2u); SPILL(); f_90e2e0(); if (g_unwind) return; RELOAD();
/* 925ab2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925ab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925ab4: call 0x928750 */
  esp -= 4; W32(esp, 0x925ab9u); SPILL(); f_928750(); if (g_unwind) return; RELOAD();
/* 925ab9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925aba: call 0x90e320 */
  esp -= 4; W32(esp, 0x925abfu); SPILL(); f_90e320(); if (g_unwind) return; RELOAD();
/* 925abf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925ac1: call 0x928770 */
  esp -= 4; W32(esp, 0x925ac6u); SPILL(); f_928770(); if (g_unwind) return; RELOAD();
/* 925ac6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925ac7: call 0x9285f0 */
  esp -= 4; W32(esp, 0x925accu); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 925acc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925ace: je 0x925b54 */
  if (zf) goto L_925b54;
L_925ad4: /* 925ad4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925ad5: call 0x90f170 */
  esp -= 4; W32(esp, 0x925adau); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 925ada: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925adc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925add: je 0x925b4f */
  if (zf) goto L_925b4f;
L_925adf: /* 925adf: call 0x92b170 */
  esp -= 4; W32(esp, 0x925ae4u); SPILL(); f_92b170(); if (g_unwind) return; RELOAD();
/* 925ae4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925ae5: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 925ae8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925ae9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925aea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 925aed: ret 8 */
  esp += 12; SPILL(); return;
L_925af0: /* 925af0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925af2: je 0x925b44 */
  if (zf) goto L_925b44;
L_925af4: /* 925af4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925af5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925af6: call 0x928730 */
  esp -= 4; W32(esp, 0x925afbu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 925afb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925afc: mov ebp, eax */
  ebp = eax;
/* 925afe: call 0x90e0e0 */
  esp -= 4; W32(esp, 0x925b03u); SPILL(); f_90e0e0(); if (g_unwind) return; RELOAD();
/* 925b03: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925b05: jne 0x925b0f */
  if (!zf) goto L_925b0f;
L_925b07: /* 925b07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925b09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b0a: call 0x928740 */
  esp -= 4; W32(esp, 0x925b0fu); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
L_925b0f: /* 925b0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b10: call 0x928760 */
  esp -= 4; W32(esp, 0x925b15u); SPILL(); f_928760(); if (g_unwind) return; RELOAD();
/* 925b15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925b16: mov ebp, eax */
  ebp = eax;
/* 925b18: call 0x90e2e0 */
  esp -= 4; W32(esp, 0x925b1du); SPILL(); f_90e2e0(); if (g_unwind) return; RELOAD();
/* 925b1d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925b1f: jne 0x925b29 */
  if (!zf) goto L_925b29;
L_925b21: /* 925b21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b24: call 0x928750 */
  esp -= 4; W32(esp, 0x925b29u); SPILL(); f_928750(); if (g_unwind) return; RELOAD();
L_925b29: /* 925b29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b2a: call 0x928780 */
  esp -= 4; W32(esp, 0x925b2fu); SPILL(); f_928780(); if (g_unwind) return; RELOAD();
/* 925b2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925b30: mov ebp, eax */
  ebp = eax;
/* 925b32: call 0x90e320 */
  esp -= 4; W32(esp, 0x925b37u); SPILL(); f_90e320(); if (g_unwind) return; RELOAD();
/* 925b37: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925b39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925b3a: jne 0x925b44 */
  if (!zf) goto L_925b44;
L_925b3c: /* 925b3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925b3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b3f: call 0x928770 */
  esp -= 4; W32(esp, 0x925b44u); SPILL(); f_928770(); if (g_unwind) return; RELOAD();
L_925b44: /* 925b44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b45: call 0x9285f0 */
  esp -= 4; W32(esp, 0x925b4au); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 925b4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925b4c: je 0x925b54 */
  if (zf) goto L_925b54;
L_925b4e: /* 925b4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_925b4f: /* 925b4f: call 0x92b150 */
  esp -= 4; W32(esp, 0x925b54u); SPILL(); f_92b150(); if (g_unwind) return; RELOAD();
L_925b54: /* 925b54: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
L_925b57: /* 925b57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925b58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925b59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925b5a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 925b5d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_925b60(void) {
  LOAD_REGS();
L_925b60: /* 925b60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925b64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925b65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925b67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925b68: call 0x90fe00 */
  esp -= 4; W32(esp, 0x925b6du); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 925b6d: mov esi, eax */
  esi = eax;
/* 925b6f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925b71: je 0x925c67 */
  if (zf) goto L_925c67;
L_925b77: /* 925b77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925b78: call 0x90fe30 */
  esp -= 4; W32(esp, 0x925b7du); SPILL(); f_90fe30(); if (g_unwind) return; RELOAD();
/* 925b7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925b7f: je 0x925c67 */
  if (zf) goto L_925c67;
L_925b85: /* 925b85: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 925b89: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 925b8b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 925b8e: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925b90: je 0x925b9b */
  if (zf) goto L_925b9b;
L_925b92: /* 925b92: cmp dword ptr [eax + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925b95: jne 0x925c67 */
  if (!zf) goto L_925c67;
L_925b9b: /* 925b9b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 925b9e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925ba0: je 0x925c31 */
  if (zf) goto L_925c31;
L_925ba6: /* 925ba6: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 925ba9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925bab: je 0x925c31 */
  if (zf) goto L_925c31;
L_925bb1: /* 925bb1: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925bb3: jne 0x925bb8 */
  if (!zf) goto L_925bb8;
L_925bb5: /* 925bb5: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
L_925bb8: /* 925bb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925bb9: call 0x9285f0 */
  esp -= 4; W32(esp, 0x925bbeu); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 925bbe: cmp eax, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925bc1: jne 0x925c31 */
  if (!zf) goto L_925c31;
L_925bc3: /* 925bc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925bc4: call 0x925ce0 */
  esp -= 4; W32(esp, 0x925bc9u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 925bc9: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925bcc: jne 0x925beb */
  if (!zf) goto L_925beb;
L_925bce: /* 925bce: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 925bd1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925bd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925bd3: call 0x92b670 */
  esp -= 4; W32(esp, 0x925bd8u); SPILL(); f_92b670(); if (g_unwind) return; RELOAD();
/* 925bd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925bda: je 0x925c31 */
  if (zf) goto L_925c31;
L_925bdc: /* 925bdc: push 0xaf2e08 */
  { uint32_t v = 0xaf2e08u; esp -= 4; W32(esp, v); }
/* 925be1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 925be3: call 0x971e40 */
  esp -= 4; W32(esp, 0x925be8u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 925be8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_925beb: /* 925beb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925bec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925bee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925bef: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x925bf4u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 925bf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925bf5: call 0x90bda0 */
  esp -= 4; W32(esp, 0x925bfau); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 925bfa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 925bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925bfd: mov ebx, eax */
  ebx = eax;
/* 925bff: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x925c04u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 925c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c05: call 0x90bda0 */
  esp -= 4; W32(esp, 0x925c0au); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 925c0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925c0b: mov ebp, eax */
  ebp = eax;
/* 925c0d: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x925c12u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 925c12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c13: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x925c18u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 925c18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925c1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925c1b: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x925c20u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 925c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c21: call 0x90bda0 */
  esp -= 4; W32(esp, 0x925c26u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 925c26: cmp eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925c28: jne 0x925c49 */
  if (!zf) goto L_925c49;
L_925c2a: /* 925c2a: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 925c2d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 925c2f: jmp 0x925c4e */
  goto L_925c4e;
L_925c31: /* 925c31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925c32: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x925c37u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 925c37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c38: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x925c3du); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 925c3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925c3e: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x925c43u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 925c43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925c44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925c45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925c46: ret 8 */
  esp += 12; SPILL(); return;
L_925c49: /* 925c49: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 925c4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_925c4e: /* 925c4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925c4f: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x925c54u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 925c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c55: call 0x90c130 */
  esp -= 4; W32(esp, 0x925c5au); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 925c5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925c5b: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x925c60u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 925c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c61: call 0x90bc20 */
  esp -= 4; W32(esp, 0x925c66u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 925c66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_925c67: /* 925c67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925c68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925c69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925c6a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_925c70(void) {
  LOAD_REGS();
L_925c70: /* 925c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925c71: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 925c75: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 925c78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925c7a: je 0x925cbe */
  if (zf) goto L_925cbe;
L_925c7c: /* 925c7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925c7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925c80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925c82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c83: call 0x90e7c0 */
  esp -= 4; W32(esp, 0x925c88u); SPILL(); f_90e7c0(); if (g_unwind) return; RELOAD();
/* 925c88: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 925c8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925c8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925c8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925c91: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 925c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925c97: call 0x90e860 */
  esp -= 4; W32(esp, 0x925c9cu); SPILL(); f_90e860(); if (g_unwind) return; RELOAD();
/* 925c9c: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 925c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925ca1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925ca3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925ca5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925ca6: call 0x90ea10 */
  esp -= 4; W32(esp, 0x925cabu); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
/* 925cab: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 925cae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925cb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925cb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925cb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 925cb5: call 0x90ea40 */
  esp -= 4; W32(esp, 0x925cbau); SPILL(); f_90ea40(); if (g_unwind) return; RELOAD();
/* 925cba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925cbb: ret 4 */
  esp += 8; SPILL(); return;
L_925cbe: /* 925cbe: push 0xaf2e84 */
  { uint32_t v = 0xaf2e84u; esp -= 4; W32(esp, v); }
/* 925cc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 925cc5: call 0x971e20 */
  esp -= 4; W32(esp, 0x925ccau); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 925cca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 925ccd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925cce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_925ce0(void) {
  LOAD_REGS();
L_925ce0: /* 925ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925ce4: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 925ce7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_925cf0(void) {
  LOAD_REGS();
L_925cf0: /* 925cf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925cf1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925cf2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 925cf4: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x925cfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 925cfa: mov ebx, eax */
  ebx = eax;
/* 925cfc: xor ebp, ebp */
  ebp = 0;
/* 925cfe: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 925d00: jne 0x925d09 */
  if (!zf) goto L_925d09;
L_925d02: /* 925d02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925d03: xor eax, eax */
  eax = 0;
/* 925d05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925d06: ret 8 */
  esp += 12; SPILL(); return;
L_925d09: /* 925d09: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 925d0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925d0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925d0f: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* 925d12: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 925d15: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 925d17: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 925d19: mov eax, edi */
  eax = edi;
/* 925d1b: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 925d1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925d1f: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x925d25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 925d25: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925d27: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 925d2a: mov esi, eax */
  esi = eax;
/* 925d2c: jbe 0x925d45 */
  if ((cf | zf)) goto L_925d45;
L_925d2e: /* 925d2e: mov edi, edi */
  edi = edi;
L_925d30: /* 925d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925d31: call 0x911dd0 */
  esp -= 4; W32(esp, 0x925d36u); SPILL(); f_911dd0(); if (g_unwind) return; RELOAD();
/* 925d36: mov dword ptr [esi + 0x48], ebp */
  W32((uint32_t)(esi + 0x48u), ebp);
/* 925d39: mov dword ptr [esi + 0x50], ebp */
  W32((uint32_t)(esi + 0x50u), ebp);
/* 925d3c: mov dword ptr [esi + 0x4c], ebp */
  W32((uint32_t)(esi + 0x4cu), ebp);
/* 925d3f: add esi, 0x54 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 925d42: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 925d43: jne 0x925d30 */
  if (!zf) goto L_925d30;
L_925d45: /* 925d45: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* 925d47: mov dword ptr [ebx + 4], 1 */
  W32((uint32_t)(ebx + 0x4u), 0x1u);
/* 925d4e: call 0x92a4b0 */
  esp -= 4; W32(esp, 0x925d53u); SPILL(); f_92a4b0(); if (g_unwind) return; RELOAD();
/* 925d53: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 925d57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925d58: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 925d5b: call 0x9296d0 */
  esp -= 4; W32(esp, 0x925d60u); SPILL(); f_9296d0(); if (g_unwind) return; RELOAD();
/* 925d60: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 925d65: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 925d68: mov dword ptr [ebx + 0x18], 0x32 */
  W32((uint32_t)(ebx + 0x18u), 0x32u);
/* 925d6f: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x925d75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 925d75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925d76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925d77: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 925d7a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925d7b: mov eax, ebx */
  eax = ebx;
/* 925d7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925d7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_925d90(void) {
  LOAD_REGS();
L_925d90: /* 925d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925d91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 925d95: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 925d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925d99: call 0x92a520 */
  esp -= 4; W32(esp, 0x925d9eu); SPILL(); f_92a520(); if (g_unwind) return; RELOAD();
/* 925d9e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 925da1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925da2: call 0x9297c0 */
  esp -= 4; W32(esp, 0x925da7u); SPILL(); f_9297c0(); if (g_unwind) return; RELOAD();
/* 925da7: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 925daa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 925dab: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x925db1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 925db1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 925db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925db5: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x925dbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 925dbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925dbc: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x925dc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 925dc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925dc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_925dd0(void) {
  LOAD_REGS();
L_925dd0: /* 925dd0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 925dd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925dd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925dd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925dd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925dd7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 925ddb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925ddc: call 0x92b6a0 */
  esp -= 4; W32(esp, 0x925de1u); SPILL(); f_92b6a0(); if (g_unwind) return; RELOAD();
/* 925de1: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 925de5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925de6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925de7: call 0x92b250 */
  esp -= 4; W32(esp, 0x925decu); SPILL(); f_92b250(); if (g_unwind) return; RELOAD();
/* 925dec: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 925df0: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_925df4: /* 925df4: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 925df7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925df8: call 0x92a500 */
  esp -= 4; W32(esp, 0x925dfdu); SPILL(); f_92a500(); if (g_unwind) return; RELOAD();
/* 925dfd: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 925e00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 925e01: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 925e05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925e06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e07: call 0x92b270 */
  esp -= 4; W32(esp, 0x925e0cu); SPILL(); f_92b270(); if (g_unwind) return; RELOAD();
/* 925e0c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 925e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925e10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925e11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925e13: mov ebx, eax */
  ebx = eax;
/* 925e15: call 0x9267c0 */
  esp -= 4; W32(esp, 0x925e1au); SPILL(); f_9267c0(); if (g_unwind) return; RELOAD();
/* 925e1a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925e1c: jne 0x925df4 */
  if (!zf) goto L_925df4;
L_925e1e: /* 925e1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e1f: call 0x92b690 */
  esp -= 4; W32(esp, 0x925e24u); SPILL(); f_92b690(); if (g_unwind) return; RELOAD();
/* 925e24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925e25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925e26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925e27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925e28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 925e2b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_925e30(void) {
  LOAD_REGS();
L_925e30: /* 925e30: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 925e33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925e34: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925e36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e37: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 925e3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e3c: call 0x92b6a0 */
  esp -= 4; W32(esp, 0x925e41u); SPILL(); f_92b6a0(); if (g_unwind) return; RELOAD();
/* 925e41: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 925e45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925e46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e47: call 0x92b250 */
  esp -= 4; W32(esp, 0x925e4cu); SPILL(); f_92b250(); if (g_unwind) return; RELOAD();
/* 925e4c: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 925e50: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_925e54: /* 925e54: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 925e57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925e58: call 0x92a500 */
  esp -= 4; W32(esp, 0x925e5du); SPILL(); f_92a500(); if (g_unwind) return; RELOAD();
/* 925e5d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 925e60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 925e61: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 925e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 925e66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e67: call 0x92b270 */
  esp -= 4; W32(esp, 0x925e6cu); SPILL(); f_92b270(); if (g_unwind) return; RELOAD();
/* 925e6c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 925e6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925e71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 925e73: mov ebx, eax */
  ebx = eax;
/* 925e75: call 0x9267c0 */
  esp -= 4; W32(esp, 0x925e7au); SPILL(); f_9267c0(); if (g_unwind) return; RELOAD();
/* 925e7a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 925e7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925e7e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925e7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 925e81: call 0x926430 */
  esp -= 4; W32(esp, 0x925e86u); SPILL(); f_926430(); if (g_unwind) return; RELOAD();
/* 925e86: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 925e88: jne 0x925e54 */
  if (!zf) goto L_925e54;
L_925e8a: /* 925e8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925e8b: call 0x92b690 */
  esp -= 4; W32(esp, 0x925e90u); SPILL(); f_92b690(); if (g_unwind) return; RELOAD();
/* 925e90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925e91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925e92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925e93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925e94: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 925e97: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_925ea0(void) {
  LOAD_REGS();
L_925ea0: /* 925ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925ea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925ea5: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 925ea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925eaa: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 925eac: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925eae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925eaf: ja 0x925ef7 */
  if ((!cf && !zf)) goto L_925ef7;
L_925eb1: /* 925eb1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 925eb5: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925eb7: ja 0x925ef7 */
  if ((!cf && !zf)) goto L_925ef7;
L_925eb9: /* 925eb9: mov eax, edi */
  eax = edi;
/* 925ebb: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 925ebd: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 925ec0: mov ecx, eax */
  ecx = eax;
/* 925ec2: not ecx */
  ecx = ~ecx;
/* 925ec4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925ec5: mov ebp, eax */
  ebp = eax;
/* 925ec7: mov edx, ecx */
  edx = ecx;
/* 925ec9: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 925ecb: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 925ecd: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 925ecf: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 925ed1: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 925ed3: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 925ed5: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 925ed8: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 925edb: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 925ede: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 925ee2: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 925ee4: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 925ee6: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 925ee9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925eeb: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 925eee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925eef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925ef0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925ef1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925ef3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925ef4: ret 0xc */
  esp += 16; SPILL(); return;
L_925ef7: /* 925ef7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925ef8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925ef9: xor eax, eax */
  eax = 0;
/* 925efb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925efc: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_925f00(void) {
  LOAD_REGS();
L_925f00: /* 925f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925f04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925f05: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 925f09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925f0a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 925f0c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925f0f: ja 0x925f59 */
  if ((!cf && !zf)) goto L_925f59;
L_925f11: /* 925f11: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 925f15: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925f17: ja 0x925f59 */
  if ((!cf && !zf)) goto L_925f59;
L_925f19: /* 925f19: mov eax, edi */
  eax = edi;
/* 925f1b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 925f1d: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 925f20: mov ecx, eax */
  ecx = eax;
/* 925f22: not ecx */
  ecx = ~ecx;
/* 925f24: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925f25: mov ebp, eax */
  ebp = eax;
/* 925f27: mov edx, ecx */
  edx = ecx;
/* 925f29: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 925f2b: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 925f2d: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 925f2f: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 925f31: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 925f33: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 925f35: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 925f38: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 925f3b: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 925f3e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 925f42: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 925f44: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 925f46: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 925f49: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925f4b: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 925f4e: mov eax, dword ptr [eax + ecx + 0x4c] */
  eax = R32((uint32_t)(eax + ecx + 0x4cu));
/* 925f52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925f53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925f54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925f55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925f56: ret 0xc */
  esp += 16; SPILL(); return;
L_925f59: /* 925f59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925f5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925f5b: xor eax, eax */
  eax = 0;
/* 925f5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925f5e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_925f70(void) {
  LOAD_REGS();
L_925f70: /* 925f70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925f74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925f75: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 925f79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925f7a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 925f7c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925f7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925f7f: ja 0x925fc9 */
  if ((!cf && !zf)) goto L_925fc9;
L_925f81: /* 925f81: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 925f85: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925f87: ja 0x925fc9 */
  if ((!cf && !zf)) goto L_925fc9;
L_925f89: /* 925f89: mov eax, edi */
  eax = edi;
/* 925f8b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 925f8d: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 925f90: mov ecx, eax */
  ecx = eax;
/* 925f92: not ecx */
  ecx = ~ecx;
/* 925f94: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 925f95: mov ebp, eax */
  ebp = eax;
/* 925f97: mov edx, ecx */
  edx = ecx;
/* 925f99: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 925f9b: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 925f9d: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 925f9f: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 925fa1: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 925fa3: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 925fa5: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 925fa8: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 925fab: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 925fae: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 925fb2: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 925fb4: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 925fb6: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 925fb9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 925fbb: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 925fbe: mov eax, dword ptr [eax + ecx + 0x48] */
  eax = R32((uint32_t)(eax + ecx + 0x48u));
/* 925fc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 925fc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925fc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925fc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925fc6: ret 0xc */
  esp += 16; SPILL(); return;
L_925fc9: /* 925fc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 925fca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 925fcb: xor eax, eax */
  eax = 0;
/* 925fcd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 925fce: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_925fe0(void) {
  LOAD_REGS();
L_925fe0: /* 925fe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 925fe4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 925fe5: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 925fe9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 925fea: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 925fec: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925fee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 925fef: ja 0x926039 */
  if ((!cf && !zf)) goto L_926039;
L_925ff1: /* 925ff1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 925ff5: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 925ff7: ja 0x926039 */
  if ((!cf && !zf)) goto L_926039;
L_925ff9: /* 925ff9: mov eax, edi */
  eax = edi;
/* 925ffb: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 925ffd: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 926000: mov ecx, eax */
  ecx = eax;
/* 926002: not ecx */
  ecx = ~ecx;
/* 926004: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 926005: mov ebp, eax */
  ebp = eax;
/* 926007: mov edx, ecx */
  edx = ecx;
/* 926009: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92600b: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92600d: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 92600f: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 926011: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 926013: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 926015: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 926018: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 92601b: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 92601e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 926022: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 926024: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 926026: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 926029: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92602b: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 92602e: mov eax, dword ptr [eax + ecx + 0x50] */
  eax = R32((uint32_t)(eax + ecx + 0x50u));
/* 926032: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 926033: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926034: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926035: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 926036: ret 0xc */
  esp += 16; SPILL(); return;
L_926039: /* 926039: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92603a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92603b: xor eax, eax */
  eax = 0;
/* 92603d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92603e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_926050(void) {
  LOAD_REGS();
L_926050: /* 926050: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 926054: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 926057: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 92605a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 92605d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926060(void) {
  LOAD_REGS();
L_926060: /* 926060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926064: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926065: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 926069: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92606a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 92606c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 92606e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92606f: ja 0x9260b7 */
  if ((!cf && !zf)) goto L_9260b7;
L_926071: /* 926071: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 926075: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 926077: ja 0x9260b7 */
  if ((!cf && !zf)) goto L_9260b7;
L_926079: /* 926079: mov eax, edi */
  eax = edi;
/* 92607b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92607d: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 926080: mov ecx, eax */
  ecx = eax;
/* 926082: not ecx */
  ecx = ~ecx;
/* 926084: mov edx, ecx */
  edx = ecx;
/* 926086: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 926087: mov ebp, eax */
  ebp = eax;
/* 926089: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92608b: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92608d: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92608f: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 926091: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 926093: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 926096: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 926098: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 92609b: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 92609e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9260a2: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 9260a4: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9260a6: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 9260a9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 9260ad: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9260af: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 9260b2: mov dword ptr [eax + ecx + 0x4c], edx */
  W32((uint32_t)(eax + ecx + 0x4cu), edx);
/* 9260b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_9260b7: /* 9260b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9260b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9260b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9260ba: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9260c0(void) {
  LOAD_REGS();
L_9260c0: /* 9260c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 9260c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9260c5: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 9260c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9260ca: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 9260cc: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9260ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9260cf: ja 0x926117 */
  if ((!cf && !zf)) goto L_926117;
L_9260d1: /* 9260d1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9260d5: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 9260d7: ja 0x926117 */
  if ((!cf && !zf)) goto L_926117;
L_9260d9: /* 9260d9: mov eax, edi */
  eax = edi;
/* 9260db: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9260dd: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 9260e0: mov ecx, eax */
  ecx = eax;
/* 9260e2: not ecx */
  ecx = ~ecx;
/* 9260e4: mov edx, ecx */
  edx = ecx;
/* 9260e6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9260e7: mov ebp, eax */
  ebp = eax;
/* 9260e9: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 9260eb: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 9260ed: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 9260ef: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9260f1: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 9260f3: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 9260f6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9260f8: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 9260fb: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 9260fe: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 926102: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 926104: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 926106: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 926109: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92610d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92610f: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 926112: mov dword ptr [eax + ecx + 0x48], edx */
  W32((uint32_t)(eax + ecx + 0x48u), edx);
/* 926116: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_926117: /* 926117: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926118: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926119: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92611a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_926120(void) {
  LOAD_REGS();
L_926120: /* 926120: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 926124: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926125: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 926129: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92612a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 92612c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 92612e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92612f: ja 0x926177 */
  if ((!cf && !zf)) goto L_926177;
L_926131: /* 926131: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 926135: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 926137: ja 0x926177 */
  if ((!cf && !zf)) goto L_926177;
L_926139: /* 926139: mov eax, edi */
  eax = edi;
/* 92613b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 92613d: sar eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 926140: mov ecx, eax */
  ecx = eax;
/* 926142: not ecx */
  ecx = ~ecx;
/* 926144: mov edx, ecx */
  edx = ecx;
/* 926146: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 926147: mov ebp, eax */
  ebp = eax;
/* 926149: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 92614b: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 92614d: and ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 92614f: or edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 926151: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 926153: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 926156: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 926158: lea ecx, [edx + 1] */
  ecx = (uint32_t)(edx + 0x1u);
/* 92615b: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 92615e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 926162: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 926164: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 926166: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 926169: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 92616d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 92616f: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 926172: mov dword ptr [eax + ecx + 0x50], edx */
  W32((uint32_t)(eax + ecx + 0x50u), edx);
/* 926176: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_926177: /* 926177: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926178: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926179: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92617a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_926180(void) {
  LOAD_REGS();
L_926180: /* 926180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926181: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926185: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 926188: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926189: call 0x92a520 */
  esp -= 4; W32(esp, 0x92618eu); SPILL(); f_92a520(); if (g_unwind) return; RELOAD();
/* 92618e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 926192: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926193: call 0x92a4b0 */
  esp -= 4; W32(esp, 0x926198u); SPILL(); f_92a4b0(); if (g_unwind) return; RELOAD();
/* 926198: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 92619b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92619c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9261a0(void) {
  LOAD_REGS();
L_9261a0: /* 9261a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9261a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9261a5: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9261a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9261a9: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x9261afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9261af: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 9261b3: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 9261b6: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 9261b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9261ba: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 9261bd: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x9261c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9261c3: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 9261c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9261c7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_9261d0(void) {
  LOAD_REGS();
L_9261d0: /* 9261d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 9261d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9261d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9261d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9261d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9261d8: call 0x928490 */
  esp -= 4; W32(esp, 0x9261ddu); SPILL(); f_928490(); if (g_unwind) return; RELOAD();
/* 9261dd: mov edi, eax */
  edi = eax;
/* 9261df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9261e1: jne 0x9261e9 */
  if (!zf) goto L_9261e9;
L_9261e3: /* 9261e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9261e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9261e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9261e6: ret 0xc */
  esp += 16; SPILL(); return;
L_9261e9: /* 9261e9: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 9261ed: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 9261f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9261f1: call 0x90dd30 */
  esp -= 4; W32(esp, 0x9261f6u); SPILL(); f_90dd30(); if (g_unwind) return; RELOAD();
/* 9261f6: mov esi, eax */
  esi = eax;
/* 9261f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9261fa: jne 0x926202 */
  if (!zf) goto L_926202;
L_9261fc: /* 9261fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9261fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9261fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9261ff: ret 0xc */
  esp += 16; SPILL(); return;
L_926202: /* 926202: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926203: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x926208u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 926208: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 92620c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92620d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92620e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92620f: call 0x926890 */
  esp -= 4; W32(esp, 0x926214u); SPILL(); f_926890(); if (g_unwind) return; RELOAD();
/* 926214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926215: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926216: call 0x925a30 */
  esp -= 4; W32(esp, 0x92621bu); SPILL(); f_925a30(); if (g_unwind) return; RELOAD();
/* 92621b: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 92621e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92621f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926220: call 0x92b020 */
  esp -= 4; W32(esp, 0x926225u); SPILL(); f_92b020(); if (g_unwind) return; RELOAD();
/* 926225: mov eax, edi */
  eax = edi;
/* 926227: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926228: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926229: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92622a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_926230(void) {
  LOAD_REGS();
L_926230: /* 926230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926231: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926235: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 926238: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92623a: je 0x92624b */
  if (zf) goto L_92624b;
L_92623c: /* 92623c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92623d: call 0x90f080 */
  esp -= 4; W32(esp, 0x926242u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 926242: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 926245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926246: call 0x90ddf0 */
  esp -= 4; W32(esp, 0x92624bu); SPILL(); f_90ddf0(); if (g_unwind) return; RELOAD();
L_92624b: /* 92624b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92624c: call 0x92b5f0 */
  esp -= 4; W32(esp, 0x926251u); SPILL(); f_92b5f0(); if (g_unwind) return; RELOAD();
/* 926251: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926252: call 0x928510 */
  esp -= 4; W32(esp, 0x926257u); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 926257: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926258: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926260(void) {
  LOAD_REGS();
L_926260: /* 926260: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 926264: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926266: call 0x928490 */
  esp -= 4; W32(esp, 0x92626bu); SPILL(); f_928490(); if (g_unwind) return; RELOAD();
/* 92626b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 92626f: mov esi, eax */
  esi = eax;
/* 926271: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926272: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926273: call 0x928740 */
  esp -= 4; W32(esp, 0x926278u); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 926278: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 92627c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92627d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92627e: call 0x926cb0 */
  esp -= 4; W32(esp, 0x926283u); SPILL(); f_926cb0(); if (g_unwind) return; RELOAD();
/* 926283: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926284: call 0x92b020 */
  esp -= 4; W32(esp, 0x926289u); SPILL(); f_92b020(); if (g_unwind) return; RELOAD();
/* 926289: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92628a: call 0x92b130 */
  esp -= 4; W32(esp, 0x92628fu); SPILL(); f_92b130(); if (g_unwind) return; RELOAD();
/* 92628f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926290: call 0x92b150 */
  esp -= 4; W32(esp, 0x926295u); SPILL(); f_92b150(); if (g_unwind) return; RELOAD();
/* 926295: mov eax, esi */
  eax = esi;
/* 926297: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926298: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_9262a0(void) {
  LOAD_REGS();
L_9262a0: /* 9262a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9262a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 9262a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9262a6: call 0x92b5f0 */
  esp -= 4; W32(esp, 0x9262abu); SPILL(); f_92b5f0(); if (g_unwind) return; RELOAD();
/* 9262ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9262ac: call 0x928510 */
  esp -= 4; W32(esp, 0x9262b1u); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 9262b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9262b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9262c0(void) {
  LOAD_REGS();
L_9262c0: /* 9262c0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9262c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9262c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9262c7: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 9262cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9262cc: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 9262d0: je 0x9262f1 */
  if (zf) goto L_9262f1;
L_9262d2: /* 9262d2: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 9262d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9262d8: fchs  */
  ST0 = -ST0;
/* 9262da: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 9262de: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 9262e1: fchs  */
  ST0 = -ST0;
/* 9262e3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 9262e7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 9262ea: fchs  */
  ST0 = -ST0;
/* 9262ec: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 9262ef: jmp 0x9262fd */
  goto L_9262fd;
L_9262f1: /* 9262f1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 9262f4: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 9262f7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 9262fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9262fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9262fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_9262fd: /* 9262fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9262fe: call 0x90fb10 */
  esp -= 4; W32(esp, 0x926303u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 926303: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 926306: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 926309: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 92630b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92630c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92630d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92630e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92630f: call 0x90fae0 */
  esp -= 4; W32(esp, 0x926314u); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 926314: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 926317: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926318: fchs  */
  ST0 = -ST0;
/* 92631a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 92631d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92631e: call 0x90fb40 */
  esp -= 4; W32(esp, 0x926323u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 926323: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 926327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926329: call 0x90fb60 */
  esp -= 4; W32(esp, 0x92632eu); SPILL(); f_90fb60(); if (g_unwind) return; RELOAD();
/* 92632e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92632f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926330: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_926340(void) {
  LOAD_REGS();
L_926340: /* 926340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926341: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 926345: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 926348: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 92634b: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 92634f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 926352: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 926356: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 926358: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 92635b: push 0xaf2ed8 */
  { uint32_t v = 0xaf2ed8u; esp -= 4; W32(esp, v); }
/* 926360: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926362: call 0x971de0 */
  esp -= 4; W32(esp, 0x926367u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 926367: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 92636a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92636d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 926371: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 926374: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 926378: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 92637a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 92637d: push 0xaf2ec4 */
  { uint32_t v = 0xaf2ec4u; esp -= 4; W32(esp, v); }
/* 926382: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926384: call 0x971de0 */
  esp -= 4; W32(esp, 0x926389u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 926389: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 92638c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92638f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 926392: push 0xaf2eb8 */
  { uint32_t v = 0xaf2eb8u; esp -= 4; W32(esp, v); }
/* 926397: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926399: call 0x971de0 */
  esp -= 4; W32(esp, 0x92639eu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 92639e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9263a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9263a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_9263b0(void) {
  LOAD_REGS();
L_9263b0: /* 9263b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9263b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9263b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 9263b6: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9263b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9263ba: push 0xaf2f1c */
  { uint32_t v = 0xaf2f1cu; esp -= 4; W32(esp, v); }
/* 9263bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9263c1: call 0x971de0 */
  esp -= 4; W32(esp, 0x9263c6u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 9263c6: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9263c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9263cc: xor esi, esi */
  esi = 0;
/* 9263ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9263d0: jle 0x9263fc */
  if ((zf || sf != of)) goto L_9263fc;
L_9263d2: /* 9263d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9263d3: xor ebx, ebx */
  ebx = 0;
L_9263d5: /* 9263d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9263d6: push 0xaf2f10 */
  { uint32_t v = 0xaf2f10u; esp -= 4; W32(esp, v); }
/* 9263db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 9263dd: call 0x971de0 */
  esp -= 4; W32(esp, 0x9263e2u); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 9263e2: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 9263e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9263e8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9263ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9263eb: call 0x926340 */
  esp -= 4; W32(esp, 0x9263f0u); SPILL(); f_926340(); if (g_unwind) return; RELOAD();
/* 9263f0: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9263f3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9263f4: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9263f7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9263f9: jl 0x9263d5 */
  if ((sf != of)) goto L_9263d5;
L_9263fb: /* 9263fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_9263fc: /* 9263fc: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 9263ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926400: push 0xaf2ef8 */
  { uint32_t v = 0xaf2ef8u; esp -= 4; W32(esp, v); }
/* 926405: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926407: call 0x971de0 */
  esp -= 4; W32(esp, 0x92640cu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 92640c: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 92640f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926410: push 0xaf2eec */
  { uint32_t v = 0xaf2eecu; esp -= 4; W32(esp, v); }
/* 926415: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926417: call 0x971de0 */
  esp -= 4; W32(esp, 0x92641cu); SPILL(); f_971de0(); if (g_unwind) return; RELOAD();
/* 92641c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 92641f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926421: ret 4 */
  esp += 8; SPILL(); return;
}

void f_926430(void) {
  LOAD_REGS();
L_926430: /* 926430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 926431: mov ebp, esp */
  ebp = esp;
/* 926433: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 926436: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926437: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926438: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 92643b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 92643e: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 926441: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 926444: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 926447: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926448: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 92644b: call 0x99cc00 */
  esp -= 4; W32(esp, 0x926450u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 926450: mov ebx, esp */
  ebx = esp;
/* 926452: mov eax, 0x9c40 */
  eax = 0x9c40u;
/* 926457: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 92645a: call 0x99cc00 */
  esp -= 4; W32(esp, 0x92645fu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 92645f: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 926462: cmp eax, dword ptr [esi + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 926465: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 926468: je 0x9266b6 */
  if (zf) goto L_9266b6;
L_92646e: /* 92646e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 926471: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 926474: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926475: call 0x9297b0 */
  esp -= 4; W32(esp, 0x92647au); SPILL(); f_9297b0(); if (g_unwind) return; RELOAD();
/* 92647a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_926480: /* 926480: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 926483: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 926486: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 92648b: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 92648e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92648f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926490: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 926493: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926494: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 926497: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 92649a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92649b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92649c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 92649d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92649e: call 0x929830 */
  esp -= 4; W32(esp, 0x9264a3u); SPILL(); f_929830(); if (g_unwind) return; RELOAD();
/* 9264a3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 9264a6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 9264a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9264ab: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 9264b2: jle 0x9266ab */
  if ((zf || sf != of)) goto L_9266ab;
L_9264b8: /* 9264b8: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 9264ba: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 9264bc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 9264bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9264c0: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 9264c3: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 9264c6: call 0x9289c0 */
  esp -= 4; W32(esp, 0x9264cbu); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 9264cb: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9264ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9264cf: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 9264d2: call 0x9289c0 */
  esp -= 4; W32(esp, 0x9264d7u); SPILL(); f_9289c0(); if (g_unwind) return; RELOAD();
/* 9264d7: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 9264da: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9264dc: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 9264df: je 0x926515 */
  if (zf) goto L_926515;
L_9264e1: /* 9264e1: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 9264e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9264e5: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9264e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9264e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9264ea: call 0x925fe0 */
  esp -= 4; W32(esp, 0x9264efu); SPILL(); f_925fe0(); if (g_unwind) return; RELOAD();
/* 9264ef: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9264f2: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 9264f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9264f7: je 0x9264fd */
  if (zf) goto L_9264fd;
L_9264f9: /* 9264f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9264fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9264fb: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9264fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_9264fd: /* 9264fd: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 926500: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 926503: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926505: je 0x92650b */
  if (zf) goto L_92650b;
L_926507: /* 926507: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926508: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926509: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92650bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_92650b: /* 92650b: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 92650e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926510: je 0x926515 */
  if (zf) goto L_926515;
L_926512: /* 926512: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926513: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x926515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_926515: /* 926515: mov edi, dword ptr [edi + 0x18] */
  edi = R32((uint32_t)(edi + 0x18u));
/* 926518: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92651a: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 92651d: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 926520: jne 0x92653c */
  if (!zf) goto L_92653c;
L_926522: /* 926522: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 926525: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 926528: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92652a: call 0x9266d0 */
  esp -= 4; W32(esp, 0x92652fu); SPILL(); f_9266d0(); if (g_unwind) return; RELOAD();
/* 92652f: mov edi, eax */
  edi = eax;
/* 926531: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 926534: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926536: je 0x926690 */
  if (zf) goto L_926690;
L_92653c: /* 92653c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92653d: call 0x90fe20 */
  esp -= 4; W32(esp, 0x926542u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 926542: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 926545: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 926548: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926549: mov esi, eax */
  esi = eax;
/* 92654b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 92654e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92654f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926550: call 0x925ea0 */
  esp -= 4; W32(esp, 0x926555u); SPILL(); f_925ea0(); if (g_unwind) return; RELOAD();
/* 926555: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 926558: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 92655b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 92655c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 92655f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 926562: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926563: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926564: call 0x925f70 */
  esp -= 4; W32(esp, 0x926569u); SPILL(); f_925f70(); if (g_unwind) return; RELOAD();
/* 926569: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 92656c: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 92656f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 926571: mov dword ptr [ebp - 0x10], 0 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x0u);
/* 926578: jle 0x9265e0 */
  if ((zf || sf != of)) goto L_9265e0;
L_92657a: /* 92657a: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 92657d: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_926580: /* 926580: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 926586: jne 0x926598 */
  if (!zf) goto L_926598;
L_926588: /* 926588: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926589: call 0x90ff80 */
  esp -= 4; W32(esp, 0x92658eu); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
/* 92658e: mov esi, eax */
  esi = eax;
/* 926590: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 926596: je 0x9265c9 */
  if (zf) goto L_9265c9;
L_926598: /* 926598: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926599: call 0x90fe40 */
  esp -= 4; W32(esp, 0x92659eu); SPILL(); f_90fe40(); if (g_unwind) return; RELOAD();
/* 92659e: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9265a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9265a2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 9265a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9265a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9265a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9265a8: call 0x9262c0 */
  esp -= 4; W32(esp, 0x9265adu); SPILL(); f_9262c0(); if (g_unwind) return; RELOAD();
/* 9265ad: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9265b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9265b2: je 0x9265c0 */
  if (zf) goto L_9265c0;
L_9265b4: /* 9265b4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9265b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9265b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9265b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9265ba: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x9265bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 9265bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9265be: je 0x9265c9 */
  if (zf) goto L_9265c9;
L_9265c0: /* 9265c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9265c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9265c2: call 0x90fe60 */
  esp -= 4; W32(esp, 0x9265c7u); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 9265c7: mov esi, eax */
  esi = eax;
L_9265c9: /* 9265c9: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 9265cc: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 9265cf: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 9265d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9265d3: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9265d6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9265d8: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 9265db: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 9265de: jl 0x926580 */
  if ((sf != of)) goto L_926580;
L_9265e0: /* 9265e0: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9265e6: je 0x926604 */
  if (zf) goto L_926604;
L_9265e8: /* 9265e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9265e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9265ea: call 0x90fe60 */
  esp -= 4; W32(esp, 0x9265efu); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 9265ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9265f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9265f1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 9265f4: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x9265f9u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 9265f9: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 9265fc: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 926602: jne 0x9265e8 */
  if (!zf) goto L_9265e8;
L_926604: /* 926604: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 926607: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 92660a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 92660d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 92660e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92660f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926610: call 0x925f00 */
  esp -= 4; W32(esp, 0x926615u); SPILL(); f_925f00(); if (g_unwind) return; RELOAD();
/* 926615: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926617: je 0x92664d */
  if (zf) goto L_92664d;
L_926619: /* 926619: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92661a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 92661b: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x92661du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 92661d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92661f: jne 0x92664d */
  if (!zf) goto L_92664d;
L_926621: /* 926621: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926622: call 0x90fe20 */
  esp -= 4; W32(esp, 0x926627u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 926627: mov esi, eax */
  esi = eax;
/* 926629: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92662f: je 0x92664d */
  if (zf) goto L_92664d;
L_926631: /* 926631: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926632: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926633: call 0x90fe60 */
  esp -= 4; W32(esp, 0x926638u); SPILL(); f_90fe60(); if (g_unwind) return; RELOAD();
/* 926638: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926639: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 92663a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 92663d: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x926642u); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
/* 926642: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 926645: cmp esi, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 92664b: jne 0x926631 */
  if (!zf) goto L_926631;
L_92664d: /* 92664d: mov eax, dword ptr [edi + 0x160] */
  eax = R32((uint32_t)(edi + 0x160u));
/* 926653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 926655: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926656: jle 0x926675 */
  if ((zf || sf != of)) goto L_926675;
L_926658: /* 926658: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x92665du); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 92665d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92665e: call 0x90bd20 */
  esp -= 4; W32(esp, 0x926663u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 926663: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926665: jne 0x926690 */
  if (!zf) goto L_926690;
L_926667: /* 926667: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926668: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x92666du); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 92666d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92666e: call 0x90bc20 */
  esp -= 4; W32(esp, 0x926673u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 926673: jmp 0x926690 */
  goto L_926690;
L_926675: /* 926675: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x92667au); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 92667a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92667b: call 0x90bd20 */
  esp -= 4; W32(esp, 0x926680u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 926680: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926682: je 0x926690 */
  if (zf) goto L_926690;
L_926684: /* 926684: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926685: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x92668au); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 92668a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92668b: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x926690u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
L_926690: /* 926690: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 926693: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 926696: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 926697: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 92669a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92669c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 92669f: jl 0x9264b8 */
  if ((sf != of)) goto L_9264b8;
L_9266a5: /* 9266a5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9266a8: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
L_9266ab: /* 9266ab: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 9266ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9266b0: je 0x926480 */
  if (zf) goto L_926480;
L_9266b6: /* 9266b6: lea esp, [ebp - 0x3c] */
  esp = (uint32_t)(ebp + 0xffffffc4u);
/* 9266b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9266ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9266bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9266bc: mov esp, ebp */
  esp = ebp;
/* 9266be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9266bf: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_9266d0(void) {
  LOAD_REGS();
L_9266d0: /* 9266d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9266d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9266d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9266d3: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 9266d7: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 9266da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9266db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9266dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9266dd: call 0x928a30 */
  esp -= 4; W32(esp, 0x9266e2u); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 9266e2: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 9266e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9266e6: movsx edi, ax */
  edi = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 9266e9: call 0x928a30 */
  esp -= 4; W32(esp, 0x9266eeu); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 9266ee: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 9266f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9266f2: movsx ebx, ax */
  ebx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 9266f5: call 0x925ce0 */
  esp -= 4; W32(esp, 0x9266fau); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 9266fa: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9266fe: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 926701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926702: call 0x925ce0 */
  esp -= 4; W32(esp, 0x926707u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 926707: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 92670b: xor esi, esi */
  esi = 0;
/* 92670d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92670f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 926713: jne 0x92671d */
  if (!zf) goto L_92671d;
L_926715: /* 926715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926717: je 0x9267b8 */
  if (zf) goto L_9267b8;
L_92671d: /* 92671d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 926721: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926722: call 0x90fc60 */
  esp -= 4; W32(esp, 0x926727u); SPILL(); f_90fc60(); if (g_unwind) return; RELOAD();
/* 926727: mov esi, eax */
  esi = eax;
/* 926729: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 92672b: jne 0x926733 */
  if (!zf) goto L_926733;
L_92672d: /* 92672d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 92672e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 92672f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 926730: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 926731: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 926732: ret  */
  esp += 4; SPILL(); return;
L_926733: /* 926733: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 926737: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 926739: je 0x92677d */
  if (zf) goto L_92677d;
L_92673b: /* 92673b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 92673f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926742: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x926747u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 926747: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926748: call 0x90c130 */
  esp -= 4; W32(esp, 0x92674du); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 92674d: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 926750: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 926752: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* 926754: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 926755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926756: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x92675bu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 92675b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92675c: call 0x90c7a0 */
  esp -= 4; W32(esp, 0x926761u); SPILL(); f_90c7a0(); if (g_unwind) return; RELOAD();
/* 926761: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 926762: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926763: mov dword ptr [esi + 0x16c], 0 */
  W32((uint32_t)(esi + 0x16cu), 0x0u);
/* 92676d: call 0x90fdd0 */
  esp -= 4; W32(esp, 0x926772u); SPILL(); f_90fdd0(); if (g_unwind) return; RELOAD();
/* 926772: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926773: mov dword ptr [ebp + 0x18], esi */
  W32((uint32_t)(ebp + 0x18u), esi);
/* 926776: mov eax, esi */
  eax = esi;
/* 926778: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926779: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 92677a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 92677b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 92677c: ret  */
  esp += 4; SPILL(); return;
L_92677d: /* 92677d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 926781: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 926783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926785: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x92678au); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 92678a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92678b: call 0x90c130 */
  esp -= 4; W32(esp, 0x926790u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 926790: shl ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 926793: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 926795: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 926797: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 926798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926799: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x92679eu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 92679e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 92679f: call 0x90c7a0 */
  esp -= 4; W32(esp, 0x9267a4u); SPILL(); f_90c7a0(); if (g_unwind) return; RELOAD();
/* 9267a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9267a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9267a6: mov dword ptr [esi + 0x16c], 1 */
  W32((uint32_t)(esi + 0x16cu), 0x1u);
/* 9267b0: call 0x90fdd0 */
  esp -= 4; W32(esp, 0x9267b5u); SPILL(); f_90fdd0(); if (g_unwind) return; RELOAD();
/* 9267b5: mov dword ptr [ebp + 0x18], esi */
  W32((uint32_t)(ebp + 0x18u), esi);
L_9267b8: /* 9267b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9267b9: mov eax, esi */
  eax = esi;
/* 9267bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9267bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9267bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9267be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 9267bf: ret  */
  esp += 4; SPILL(); return;
}

void f_9267c0(void) {
  LOAD_REGS();
L_9267c0: /* 9267c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9267c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9267c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9267c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9267c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9267c5: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9267c9: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9267cc: xor ebp, ebp */
  ebp = 0;
/* 9267ce: xor ebx, ebx */
  ebx = 0;
/* 9267d0: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9267d2: jle 0x9267fc */
  if ((zf || sf != of)) goto L_9267fc;
L_9267d4: /* 9267d4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 9267d6: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 9267d9: mov esi, dword ptr [ecx + 0x18] */
  esi = R32((uint32_t)(ecx + 0x18u));
/* 9267dc: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9267de: je 0x9267f4 */
  if (zf) goto L_9267f4;
L_9267e0: /* 9267e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9267e1: call 0x90fd20 */
  esp -= 4; W32(esp, 0x9267e6u); SPILL(); f_90fd20(); if (g_unwind) return; RELOAD();
/* 9267e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9267e7: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x9267ecu); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 9267ec: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 9267ee: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 9267f1: mov dword ptr [eax + 0x18], ebp */
  W32((uint32_t)(eax + 0x18u), ebp);
L_9267f4: /* 9267f4: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 9267f7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9267f8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9267fa: jl 0x9267d4 */
  if ((sf != of)) goto L_9267d4;
L_9267fc: /* 9267fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9267fd: call 0x92a300 */
  esp -= 4; W32(esp, 0x926802u); SPILL(); f_92a300(); if (g_unwind) return; RELOAD();
/* 926802: mov ebp, dword ptr [edi + 0x10] */
  ebp = R32((uint32_t)(edi + 0x10u));
/* 926805: cmp ebp, dword ptr [edi + 0x14] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926808: jge 0x926880 */
  if ((sf == of)) goto L_926880;
L_92680a: /* 92680a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_926810: /* 926810: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 926812: mov esi, dword ptr [ecx + ebp*4] */
  esi = R32((uint32_t)(ecx + ebp*4));
/* 926815: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 926817: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 926818: call 0x928a30 */
  esp -= 4; W32(esp, 0x92681du); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 92681d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 926820: movsx eax, ax */
  eax = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 926823: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926824: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 926828: call 0x928a30 */
  esp -= 4; W32(esp, 0x92682du); SPILL(); f_928a30(); if (g_unwind) return; RELOAD();
/* 92682d: movsx edx, ax */
  edx = (uint32_t)(int32_t)(int16_t)((eax & 0xffffu));
/* 926830: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 926832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 926833: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 926837: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92683cu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92683c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92683f: xor ebx, ebx */
  ebx = 0;
/* 926841: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 926843: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 926844: and ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 92684a: call 0x9287f0 */
  esp -= 4; W32(esp, 0x92684fu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 92684f: xor edx, edx */
  edx = 0;
/* 926851: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 926853: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 926859: cmp bx, dx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 92685c: jne 0x926872 */
  if (!zf) goto L_926872;
L_92685e: /* 92685e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 926862: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 926866: jge 0x926872 */
  if ((sf == of)) goto L_926872;
L_926868: /* 926868: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 92686a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 92686d: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 92686f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_926872: /* 926872: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 926873: call 0x929f70 */
  esp -= 4; W32(esp, 0x926878u); SPILL(); f_929f70(); if (g_unwind) return; RELOAD();
/* 926878: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 92687b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 92687c: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 92687e: jl 0x926810 */
  if ((sf != of)) goto L_926810;
L_926880: /* 926880: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 926881: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 926882: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 926883: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 926884: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 926885: ret 0x10 */
  esp += 20; SPILL(); return;
}
