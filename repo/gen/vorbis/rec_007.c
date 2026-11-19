#include "recomp.h"
#include "rec_mod.h"

void f_10039a0(void) {
  LOAD_REGS();
L_10039a0: /* 10039a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10039a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10039a4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10039a5: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10039a9: mov ebx, dword ptr [ebp] */
  ebx = R32((uint32_t)(ebp));
/* 10039ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10039ad: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 10039b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10039b2: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 10039b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10039b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10039b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10039b9: call 0x1003170 */
  esp -= 4; W32(esp, 0x10039beu); SPILL(); f_1003170(); if (g_unwind) return; RELOAD();
/* 10039be: mov edx, eax */
  edx = eax;
/* 10039c0: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 10039c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10039c7: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 10039ca: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 10039ce: je 0x1003b3d */
  if (zf) goto L_1003b3d;
L_10039d4: /* 10039d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10039d5: jne 0x1003be2 */
  if (!zf) goto L_1003be2;
L_10039db: /* 10039db: xor eax, eax */
  eax = 0;
/* 10039dd: xor ecx, ecx */
  ecx = 0;
/* 10039df: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10039e2: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 10039e6: jl 0x1003ae0 */
  if ((sf != of)) goto L_1003ae0;
L_10039ec: /* 10039ec: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 10039ef: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 10039f7: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
L_10039fa: /* 10039fa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10039fd: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* 1003a00: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1003a04: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1003a08: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 1003a0e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1003a10: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1003a13: jp 0x1003a1e */
  if (pf) goto L_1003a1e;
L_1003a15: /* 1003a15: mov dword ptr [esi + ecx*4], 0 */
  W32((uint32_t)(esi + ecx*4), 0x0u);
/* 1003a1c: jmp 0x1003a28 */
  goto L_1003a28;
L_1003a1e: /* 1003a1e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1003a21: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 1003a25: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
L_1003a28: /* 1003a28: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1003a2b: mov eax, dword ptr [edx + eax + 4] */
  eax = R32((uint32_t)(edx + eax + 0x4u));
/* 1003a2f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1003a33: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1003a37: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003a39: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 1003a3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1003a41: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1003a44: jp 0x1003a4f */
  if (pf) goto L_1003a4f;
L_1003a46: /* 1003a46: mov dword ptr [esi + ecx*4], 0 */
  W32((uint32_t)(esi + ecx*4), 0x0u);
/* 1003a4d: jmp 0x1003a59 */
  goto L_1003a59;
L_1003a4f: /* 1003a4f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1003a52: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 1003a56: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
L_1003a59: /* 1003a59: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1003a5c: mov eax, dword ptr [edx + eax + 8] */
  eax = R32((uint32_t)(edx + eax + 0x8u));
/* 1003a60: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1003a64: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1003a68: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003a6a: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 1003a70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1003a72: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1003a75: jp 0x1003a80 */
  if (pf) goto L_1003a80;
L_1003a77: /* 1003a77: mov dword ptr [esi + ecx*4], 0 */
  W32((uint32_t)(esi + ecx*4), 0x0u);
/* 1003a7e: jmp 0x1003a8a */
  goto L_1003a8a;
L_1003a80: /* 1003a80: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1003a83: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 1003a87: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
L_1003a8a: /* 1003a8a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1003a8d: mov eax, dword ptr [edx + eax + 0xc] */
  eax = R32((uint32_t)(edx + eax + 0xcu));
/* 1003a91: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1003a95: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1003a99: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003a9b: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 1003aa1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1003aa3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1003aa6: jp 0x1003ab1 */
  if (pf) goto L_1003ab1;
L_1003aa8: /* 1003aa8: mov dword ptr [esi + ecx*4], 0 */
  W32((uint32_t)(esi + ecx*4), 0x0u);
/* 1003aaf: jmp 0x1003abb */
  goto L_1003abb;
L_1003ab1: /* 1003ab1: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1003ab4: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 1003ab8: fstp dword ptr [esi + ecx*4] */
  WF32((uint32_t)(esi + ecx*4), ST0); FPOP();
L_1003abb: /* 1003abb: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1003ac0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1003ac4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003ac7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003ac9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003acc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003ace: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003ad2: jl 0x10039fa */
  if ((sf != of)) goto L_10039fa;
L_1003ad8: /* 1003ad8: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1003adc: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_1003ae0: /* 1003ae0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003ae2: jge 0x1003be2 */
  if ((sf == of)) goto L_1003be2;
L_1003ae8: /* 1003ae8: lea esi, [esi + ecx*4] */
  esi = (uint32_t)(esi + ecx*4);
/* 1003aeb: mov ecx, edx */
  ecx = edx;
/* 1003aed: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 1003af0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003af2: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1003af5: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1003af8: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1003afa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1003b00: /* 1003b00: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1003b03: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* 1003b06: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 1003b0a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1003b0e: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* 1003b14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1003b16: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1003b19: jp 0x1003b23 */
  if (pf) goto L_1003b23;
L_1003b1b: /* 1003b1b: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 1003b21: jmp 0x1003b2b */
  goto L_1003b2b;
L_1003b23: /* 1003b23: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1003b25: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 1003b29: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_1003b2b: /* 1003b2b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003b2e: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003b30: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1003b31: jne 0x1003b00 */
  if (!zf) goto L_1003b00;
L_1003b33: /* 1003b33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1003b34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003b35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003b36: mov eax, edx */
  eax = edx;
/* 1003b38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003b39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1003b3c: ret  */
  esp += 4; SPILL(); return;
L_1003b3d: /* 1003b3d: xor ecx, ecx */
  ecx = 0;
/* 1003b3f: xor eax, eax */
  eax = 0;
/* 1003b41: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003b44: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1003b48: jl 0x1003bba */
  if ((sf != of)) goto L_1003bba;
L_1003b4a: /* 1003b4a: mov ecx, edx */
  ecx = edx;
/* 1003b4c: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 1003b4f: mov dword ptr [esp + 0x1c], 3 */
  W32((uint32_t)(esp + 0x1cu), 0x3u);
/* 1003b57: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
L_1003b5a: /* 1003b5a: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1003b5d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 1003b60: fsub dword ptr [ecx + edx] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx)));
/* 1003b63: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003b66: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1003b69: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 1003b6c: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003b6e: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1003b71: fsub dword ptr [ecx + edx - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx + 0xfffffff4u)));
/* 1003b75: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1003b78: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 1003b7b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003b7d: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1003b80: fsub dword ptr [ecx + edx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx + 0xfffffff8u)));
/* 1003b84: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1003b87: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 1003b8a: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003b8c: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1003b8f: fsub dword ptr [ecx + edx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx + 0xfffffffcu)));
/* 1003b93: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1003b97: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003b9a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1003b9e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1003ba2: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1003ba5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003ba8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003baa: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003bac: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1003bb0: jl 0x1003b5a */
  if ((sf != of)) goto L_1003b5a;
L_1003bb2: /* 1003bb2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1003bb6: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
L_1003bba: /* 1003bba: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003bbc: jge 0x1003be2 */
  if ((sf == of)) goto L_1003be2;
L_1003bbe: /* 1003bbe: lea esi, [esi + eax*4] */
  esi = (uint32_t)(esi + eax*4);
/* 1003bc1: mov eax, edx */
  eax = edx;
/* 1003bc3: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 1003bc6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003bc8: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1003bcb: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1003bce: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_1003bd0: /* 1003bd0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 1003bd2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1003bd5: fsub dword ptr [ecx + eax] */
  ST0 = ST0 - (F32((uint32_t)(ecx + eax)));
/* 1003bd8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003bdb: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1003bdd: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003bdf: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1003be0: jne 0x1003bd0 */
  if (!zf) goto L_1003bd0;
L_1003be2: /* 1003be2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1003be3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003be4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003be5: mov eax, edx */
  eax = edx;
/* 1003be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003be8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1003beb: ret  */
  esp += 4; SPILL(); return;
}

void f_1003bf0(void) {
  LOAD_REGS();
L_1003bf0: /* 1003bf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1003bf1: mov ebp, esp */
  ebp = esp;
/* 1003bf3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 1003bf6: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1003bf9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1003bfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1003bfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1003bfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1003bff: mov ecx, 0x100d178 */
  ecx = 0x100d178u;
/* 1003c04: xor esi, esi */
  esi = 0;
/* 1003c06: xor edi, edi */
  edi = 0;
/* 1003c08: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003c0c: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1003c0f: nop  */
L_1003c10: /* 1003c10: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003c13: cmp ecx, 0x100d188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100d188u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003c19: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1003c1d: jge 0x1003c23 */
  if ((sf == of)) goto L_1003c23;
L_1003c1f: /* 1003c1f: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 1003c21: jmp 0x1003c26 */
  goto L_1003c26;
L_1003c23: /* 1003c23: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_1003c26: /* 1003c26: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 1003c2a: mov eax, ebx */
  eax = ebx;
/* 1003c2c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1003c2d: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x1003c2d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1003c2f: mov edx, eax */
  edx = eax;
/* 1003c31: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* 1003c34: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebx = r;
  }
/* 1003c36: jne 0x1003c10 */
  if (!zf) goto L_1003c10;
L_1003c38: /* 1003c38: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1003c3b: lea ebx, [ecx + edi*4] */
  ebx = (uint32_t)(ecx + edi*4);
/* 1003c3e: mov edi, edi */
  edi = edi;
L_1003c40: /* 1003c40: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1003c43: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1003c44: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1003c47: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 1003c4a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003c4e: jne 0x1003c7d */
  if (!zf) goto L_1003c7d;
L_1003c50: /* 1003c50: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003c53: je 0x1003c7d */
  if (zf) goto L_1003c7d;
L_1003c55: /* 1003c55: jle 0x1003c73 */
  if ((zf || sf != of)) goto L_1003c73;
L_1003c57: /* 1003c57: lea edx, [edi - 1] */
  edx = (uint32_t)(edi + 0xffffffffu);
/* 1003c5a: mov ecx, ebx */
  ecx = ebx;
/* 1003c5c: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_1003c60: /* 1003c60: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1003c62: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 1003c65: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1003c69: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1003c6c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1003c6d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 1003c71: jne 0x1003c60 */
  if (!zf) goto L_1003c60;
L_1003c73: /* 1003c73: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 1003c76: mov dword ptr [ecx + 8], 2 */
  W32((uint32_t)(ecx + 0x8u), 0x2u);
L_1003c7d: /* 1003c7d: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1003c80: je 0x1003c9b */
  if (zf) goto L_1003c9b;
L_1003c82: /* 1003c82: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1003c83: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x1003c83);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1003c85: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1003c89: mov edx, eax */
  edx = eax;
/* 1003c8b: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* 1003c8e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 1003c90: je 0x1003c40 */
  if (zf) goto L_1003c40;
L_1003c92: /* 1003c92: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 1003c96: jmp 0x1003c10 */
  goto L_1003c10;
L_1003c9b: /* 1003c9b: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 1003c9e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1003ca1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1003ca4: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 1003ca7: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 1003cab: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1003cac: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003cae: fld dword ptr [0x100d188] */
  { double v = F32((uint32_t)(0x100d188u)); FPUSH(v); }
/* 1003cb4: fdiv dword ptr [esp + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x30u)));
/* 1003cb8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1003cba: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 1003cc2: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 1003cca: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 1003cce: jle 0x1003de7 */
  if ((zf || sf != of)) goto L_1003de7;
L_1003cd4: /* 1003cd4: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003cd7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 1003cdb: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 1003cdf: nop  */
L_1003ce0: /* 1003ce0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1003ce4: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 1003ce6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1003ce9: mov ecx, esi */
  ecx = esi;
/* 1003ceb: imul ecx, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  ecx = (uint32_t)r;
  }
/* 1003cf0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1003cf1: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x1003cf1);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1003cf3: xor edi, edi */
  edi = 0;
/* 1003cf5: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1003cf9: mov ebx, eax */
  ebx = eax;
/* 1003cfb: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 1003cfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003d00: jle 0x1003dc9 */
  if ((zf || sf != of)) goto L_1003dc9;
L_1003d06: /* 1003d06: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1003d0a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 1003d0d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1003d11: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 1003d14: lea esi, [esi + edx*4] */
  esi = (uint32_t)(esi + edx*4);
/* 1003d17: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003d19: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 1003d1d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1003d21: jmp 0x1003d30 */
  goto L_1003d30;
L_1003d23: /* 1003d23: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 1003d27: jmp 0x1003d30 */
  goto L_1003d30;
L_1003d30: /* 1003d30: add edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003d34: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003d37: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1003d3b: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 1003d3f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1003d47: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1003d4b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003d4f: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1003d53: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 1003d57: jle 0x1003da9 */
  if ((zf || sf != of)) goto L_1003da9;
L_1003d59: /* 1003d59: lea edi, [ebx - 3] */
  edi = (uint32_t)(ebx + 0xfffffffdu);
/* 1003d5c: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1003d5e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1003d5f: nop  */
L_1003d60: /* 1003d60: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1003d64: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1003d67: fadd dword ptr [0x100a0c8] */
  ST0 = ST0 + (F32((uint32_t)(0x100a0c8u)));
/* 1003d6d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1003d71: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1003d75: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 1003d79: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 1003d7d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 1003d81: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1003d84: call 0x1009244 */
  esp -= 4; W32(esp, 0x1003d89u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* 1003d89: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1003d8b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003d8e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 1003d92: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1003d95: call 0x100923e */
  esp -= 4; W32(esp, 0x1003d9au); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 1003d9a: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1003d9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1003d9f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003da2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1003da3: jne 0x1003d60 */
  if (!zf) goto L_1003d60;
L_1003da5: /* 1003da5: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
L_1003da9: /* 1003da9: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 1003dad: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1003db4: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003db6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1003dba: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1003dbb: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 1003dbf: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1003dc3: jne 0x1003d23 */
  if (!zf) goto L_1003d23;
L_1003dc9: /* 1003dc9: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1003dcd: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1003dd1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1003dd5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003dd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1003dd9: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1003ddd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 1003de1: jne 0x1003ce0 */
  if (!zf) goto L_1003ce0;
L_1003de7: /* 1003de7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1003de8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003de9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003dea: mov esp, ebp */
  esp = ebp;
/* 1003dec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003ded: ret  */
  esp += 4; SPILL(); return;
}

void f_1003d29(void) {
  LOAD_REGS();
  goto L_1003d29;
L_1003ce0: /* 1003ce0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1003ce4: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 1003ce6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1003ce9: mov ecx, esi */
  ecx = esi;
/* 1003ceb: imul ecx, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  ecx = (uint32_t)r;
  }
/* 1003cf0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 1003cf1: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x1003cf1);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 1003cf3: xor edi, edi */
  edi = 0;
/* 1003cf5: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1003cf9: mov ebx, eax */
  ebx = eax;
/* 1003cfb: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 1003cfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003d00: jle 0x1003dc9 */
  if ((zf || sf != of)) goto L_1003dc9;
L_1003d06: /* 1003d06: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1003d0a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 1003d0d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1003d11: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 1003d14: lea esi, [esi + edx*4] */
  esi = (uint32_t)(esi + edx*4);
/* 1003d17: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003d19: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 1003d1d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1003d21: jmp 0x1003d30 */
  goto L_1003d30;
L_1003d23: /* 1003d23: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 1003d27: jmp 0x1003d30 */
  goto L_1003d30;
L_1003d29: /* 1003d29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1003d30: /* 1003d30: add edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003d34: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003d37: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1003d3b: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 1003d3f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 1003d47: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1003d4b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003d4f: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 1003d53: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 1003d57: jle 0x1003da9 */
  if ((zf || sf != of)) goto L_1003da9;
L_1003d59: /* 1003d59: lea edi, [ebx - 3] */
  edi = (uint32_t)(ebx + 0xfffffffdu);
/* 1003d5c: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 1003d5e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1003d5f: nop  */
L_1003d60: /* 1003d60: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1003d64: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1003d67: fadd dword ptr [0x100a0c8] */
  ST0 = ST0 + (F32((uint32_t)(0x100a0c8u)));
/* 1003d6d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1003d71: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1003d75: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 1003d79: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 1003d7d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 1003d81: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1003d84: call 0x1009244 */
  esp -= 4; W32(esp, 0x1003d89u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* 1003d89: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1003d8b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003d8e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 1003d92: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1003d95: call 0x100923e */
  esp -= 4; W32(esp, 0x1003d9au); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 1003d9a: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 1003d9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1003d9f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003da2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1003da3: jne 0x1003d60 */
  if (!zf) goto L_1003d60;
L_1003da5: /* 1003da5: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
L_1003da9: /* 1003da9: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 1003dad: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1003db4: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1003db6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1003dba: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1003dbb: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 1003dbf: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 1003dc3: jne 0x1003d23 */
  if (!zf) goto L_1003d23;
L_1003dc9: /* 1003dc9: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 1003dcd: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1003dd1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1003dd5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1003dd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1003dd9: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1003ddd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 1003de1: jne 0x1003ce0 */
  if (!zf) goto L_1003ce0;
L_1003de7: /* 1003de7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1003de8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1003de9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1003dea: mov esp, ebp */
  esp = ebp;
/* 1003dec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1003ded: ret  */
  esp += 4; SPILL(); return;
}

void f_1003df0(void) {
  LOAD_REGS();
L_1003df0: /* 1003df0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1003df3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1003df4: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1003df8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1003df9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1003dfa: mov esi, eax */
  esi = eax;
/* 1003dfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1003dfd: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 1003e01: mov edx, esi */
  edx = esi;
/* 1003e03: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 1003e06: xor eax, eax */
  eax = 0;
/* 1003e08: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003e0b: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1003e0f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003e13: jl 0x1003ea5 */
  if ((sf != of)) goto L_1003ea5;
L_1003e19: /* 1003e19: lea edi, [esi + esi] */
  edi = (uint32_t)(esi + esi);
/* 1003e1c: mov dword ptr [esp + 0x20], 3 */
  W32((uint32_t)(esp + 0x20u), 0x3u);
/* 1003e24: lea edi, [ebx + edi*4 - 4] */
  edi = (uint32_t)(ebx + edi*4 + 0xfffffffcu);
L_1003e28: /* 1003e28: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 1003e2b: lea ebp, [esi*8] */
  ebp = (uint32_t)(esi*8);
/* 1003e32: fadd dword ptr [ecx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4)));
/* 1003e35: fstp dword ptr [ebx + eax*8] */
  WF32((uint32_t)(ebx + eax*8), ST0); FPOP();
/* 1003e38: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 1003e3b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003e3d: fsub dword ptr [ecx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4)));
/* 1003e40: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003e42: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 1003e44: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003e46: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 1003e49: fadd dword ptr [ecx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4)));
/* 1003e4c: fstp dword ptr [ebx + eax*8] */
  WF32((uint32_t)(ebx + eax*8), ST0); FPOP();
/* 1003e4f: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 1003e52: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003e54: fsub dword ptr [ecx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4)));
/* 1003e57: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003e59: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 1003e5b: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003e5d: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 1003e60: fadd dword ptr [ecx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4)));
/* 1003e63: fstp dword ptr [ebx + eax*8] */
  WF32((uint32_t)(ebx + eax*8), ST0); FPOP();
/* 1003e66: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 1003e69: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003e6b: fsub dword ptr [ecx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4)));
/* 1003e6e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003e70: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 1003e72: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003e74: fld dword ptr [ecx + edx*4] */
  { double v = F32((uint32_t)(ecx + edx*4)); FPUSH(v); }
/* 1003e77: fadd dword ptr [ecx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4)));
/* 1003e7a: fstp dword ptr [ebx + eax*8] */
  WF32((uint32_t)(ebx + eax*8), ST0); FPOP();
/* 1003e7d: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 1003e80: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003e82: fsub dword ptr [ecx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4)));
/* 1003e85: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003e87: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 1003e89: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003e8b: add dword ptr [esp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 1003e90: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1003e94: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1003e97: cmp ebp, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003e9b: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1003e9f: jl 0x1003e28 */
  if ((sf != of)) goto L_1003e28;
L_1003ea1: /* 1003ea1: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
L_1003ea5: /* 1003ea5: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003ea9: jge 0x1003f22 */
  if ((sf == of)) goto L_1003f22;
L_1003eab: /* 1003eab: lea ebp, [ebx + eax*8] */
  ebp = (uint32_t)(ebx + eax*8);
/* 1003eae: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 1003eb1: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1003eb5: lea ebp, [esi + esi] */
  ebp = (uint32_t)(esi + esi);
/* 1003eb8: lea eax, [ebp + eax*2] */
  eax = (uint32_t)(ebp + eax*2);
/* 1003ebc: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1003ec0: lea eax, [ebx + eax*4 - 4] */
  eax = (uint32_t)(ebx + eax*4 + 0xfffffffcu);
/* 1003ec4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1003ec8: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 1003ecc: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 1003ecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1003ed3: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_1003ed5: /* 1003ed5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1003ed7: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1003edb: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1003edd: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1003ee0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1003ee2: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 1003ee4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1003ee8: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1003eea: lea edx, [esi*8] */
  edx = (uint32_t)(esi*8);
/* 1003ef1: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1003ef3: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1003ef7: lea ebp, [esi*4] */
  ebp = (uint32_t)(esi*4);
/* 1003efe: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003f00: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1003f04: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1003f06: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 1003f0a: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1003f0e: lea ebp, [esi*4] */
  ebp = (uint32_t)(esi*4);
/* 1003f15: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003f17: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1003f18: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1003f1c: jne 0x1003ed5 */
  if (!zf) goto L_1003ed5;
L_1003f1e: /* 1003f1e: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
L_1003f22: /* 1003f22: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003f25: jl 0x1004088 */
  if ((sf != of)) goto L_1004088;
L_1003f2b: /* 1003f2b: je 0x1004053 */
  if (zf) goto L_1004053;
L_1003f31: /* 1003f31: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1003f33: jle 0x100403f */
  if ((zf || sf != of)) goto L_100403f;
L_1003f39: /* 1003f39: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 1003f3d: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 1003f40: lea eax, [ebx + esi*8] */
  eax = (uint32_t)(ebx + esi*8);
/* 1003f43: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 1003f47: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 1003f4b: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1003f4f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 1003f53: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
L_1003f57: /* 1003f57: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1003f5a: jle 0x1003ffa */
  if ((zf || sf != of)) goto L_1003ffa;
L_1003f60: /* 1003f60: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 1003f64: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 1003f68: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1003f6c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1003f70: lea ebx, [esi - 3] */
  ebx = (uint32_t)(esi + 0xfffffffdu);
/* 1003f73: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 1003f75: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1003f79: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 1003f7d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003f80: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_1003f81: /* 1003f81: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 1003f84: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1003f87: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1003f8a: sub ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1003f8d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1003f8f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1003f92: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 1003f94: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 1003f98: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1003f9c: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1003f9f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1003fa1: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1003fa5: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1003fa8: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 1003fa9: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 1003fad: fld dword ptr [edi - 0xc] */
  { double v = F32((uint32_t)(edi + 0xfffffff4u)); FPUSH(v); }
/* 1003fb0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 1003fb2: fld dword ptr [edi - 8] */
  { double v = F32((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 1003fb5: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1003fb8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1003fba: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1003fbe: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003fc2: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 1003fc4: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1003fc7: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1003fcb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1003fcf: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 1003fd1: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1003fd4: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1003fd8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 1003fdc: fadd dword ptr [edx - 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1003fdf: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1003fe2: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1003fe6: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1003fe9: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 1003fed: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1003ff0: jne 0x1003f81 */
  if (!zf) goto L_1003f81;
L_1003ff2: /* 1003ff2: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 1003ff6: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
L_1003ffa: /* 1003ffa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1003ffe: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1004002: lea eax, [esi*8] */
  eax = (uint32_t)(esi*8);
/* 1004009: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100400b: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 100400f: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 1004016: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004018: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 100401c: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 1004020: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004022: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1004026: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004028: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 100402c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100402d: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 1004031: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 1004035: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 1004039: jne 0x1003f57 */
  if (!zf) goto L_1003f57;
L_100403f: /* 100403f: mov edx, esi */
  edx = esi;
/* 1004041: and edx, 0x80000001 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 1004047: jns 0x100404e */
  if (!sf) goto L_100404e;
L_1004049: /* 1004049: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 100404a: or edx, 0xfffffffe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 100404d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_100404e: /* 100404e: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1004051: je 0x1004088 */
  if (zf) goto L_1004088;
L_1004053: /* 1004053: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 1004057: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* 100405a: mov eax, edx */
  eax = edx;
/* 100405c: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100405e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1004060: jle 0x1004088 */
  if ((zf || sf != of)) goto L_1004088;
L_1004062: /* 1004062: lea ebp, [esi*8] */
  ebp = (uint32_t)(esi*8);
/* 1004069: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 100406c: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 100406f: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1004071: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
L_1004074: /* 1004074: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004076: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004078: fchs  */
  ST0 = -ST0;
/* 100407a: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 100407c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 100407e: mov dword ptr [ebx - 4], edx */
  W32((uint32_t)(ebx + 0xfffffffcu), edx);
/* 1004081: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1004083: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004085: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1004086: jne 0x1004074 */
  if (!zf) goto L_1004074;
L_1004088: /* 1004088: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1004089: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 100408a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 100408b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 100408c: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100408f: ret  */
  esp += 4; SPILL(); return;
}

void f_1004090(void) {
  LOAD_REGS();
L_1004090: /* 1004090: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1004093: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1004094: mov ebx, dword ptr [esp + 0x70] */
  ebx = R32((uint32_t)(esp + 0x70u));
/* 1004098: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1004099: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 100409a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 100409b: mov edi, ecx */
  edi = ecx;
/* 100409d: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 10040a0: lea esi, [edi + edi] */
  esi = (uint32_t)(edi + edi);
/* 10040a3: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 10040a7: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 10040aa: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 10040ae: xor esi, esi */
  esi = 0;
/* 10040b0: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10040b3: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 10040b7: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 10040bb: jl 0x10042e0 */
  if ((sf != of)) goto L_10042e0;
L_10040c1: /* 10040c1: mov dword ptr [esp + 0x48], 3 */
  W32((uint32_t)(esp + 0x48u), 0x3u);
L_10040c9: /* 10040c9: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 10040cd: fld dword ptr [eax + ebx*4] */
  { double v = F32((uint32_t)(eax + ebx*4)); FPUSH(v); }
/* 10040d0: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 10040d4: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 10040d7: lea ebp, [esi*4] */
  ebp = (uint32_t)(esi*4);
/* 10040de: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10040e2: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10040e5: fadd dword ptr [eax + ebx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebx*4)));
/* 10040e8: lea ebx, [ebp + ecx*4] */
  ebx = (uint32_t)(ebp + ecx*4);
/* 10040ec: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 10040f0: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 10040f4: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 10040f8: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 10040fb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 10040ff: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 1004103: fstp dword ptr [edx + ebx*4 - 4] */
  WF32((uint32_t)(edx + ebx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004107: lea ebx, [ecx + ecx] */
  ebx = (uint32_t)(ecx + ecx);
/* 100410a: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 100410d: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100410f: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1004113: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1004117: fsub dword ptr [eax + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebp*4)));
/* 100411a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100411e: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1004120: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 1004124: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1004128: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 100412b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100412f: fsub dword ptr [eax + edi*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi*4)));
/* 1004132: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1004134: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 1004137: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100413b: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100413d: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1004141: add dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1004145: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1004149: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 100414c: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1004150: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 1004153: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1004157: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 100415a: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 100415d: lea ebp, [esi*4] */
  ebp = (uint32_t)(esi*4);
/* 1004164: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1004168: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 100416c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1004170: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1004174: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 1004177: lea ebp, [ebp + ecx*4] */
  ebp = (uint32_t)(ebp + ecx*4);
/* 100417b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 100417f: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 1004183: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 1004187: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100418b: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 100418e: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004190: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1004194: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1004198: fsub dword ptr [eax + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebp*4)));
/* 100419b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100419f: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10041a1: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 10041a5: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10041a9: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 10041ac: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10041b0: fsub dword ptr [eax + edi*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi*4)));
/* 10041b3: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10041b5: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 10041b8: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10041bc: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10041be: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 10041c2: add dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 10041c6: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10041ca: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 10041cd: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10041d1: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 10041d4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10041d8: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10041db: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 10041de: lea ebp, [esi*4] */
  ebp = (uint32_t)(esi*4);
/* 10041e5: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 10041e9: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 10041ed: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 10041f1: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 10041f5: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 10041f8: lea ebp, [ebp + ecx*4] */
  ebp = (uint32_t)(ebp + ecx*4);
/* 10041fc: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1004200: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 1004204: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 1004208: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100420c: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 100420f: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004211: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1004215: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1004219: fsub dword ptr [eax + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebp*4)));
/* 100421c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1004220: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1004222: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 1004226: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100422a: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 100422d: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1004231: fsub dword ptr [eax + edi*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi*4)));
/* 1004234: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1004236: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 1004239: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100423d: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100423f: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 1004243: add dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 1004247: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100424b: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 100424e: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 1004252: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* 1004255: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1004259: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 100425c: fadd dword ptr [eax + ebp*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp*4)));
/* 100425f: lea ebp, [esi*4] */
  ebp = (uint32_t)(esi*4);
/* 1004266: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 100426a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 100426e: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1004272: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1004276: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 1004279: lea ebp, [ebp + ecx*4] */
  ebp = (uint32_t)(ebp + ecx*4);
/* 100427d: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1004281: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 1004285: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 1004289: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100428d: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1004290: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004292: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 1004296: fsub dword ptr [eax + ebx*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebx*4)));
/* 1004299: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 100429d: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 100429f: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 10042a3: fld dword ptr [eax + ebx*4] */
  { double v = F32((uint32_t)(eax + ebx*4)); FPUSH(v); }
/* 10042a6: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10042a8: fsub dword ptr [eax + edi*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi*4)));
/* 10042ab: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 10042af: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 10042b3: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10042b5: fstp dword ptr [edx + ebp*4] */
  WF32((uint32_t)(edx + ebp*4), ST0); FPOP();
/* 10042b8: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 10042bc: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10042bf: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10042c3: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 10042c7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 10042cb: mov ebx, dword ptr [esp + 0x7c] */
  ebx = R32((uint32_t)(esp + 0x7cu));
/* 10042cf: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10042d2: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10042d4: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10042d6: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 10042da: jl 0x10040c9 */
  if ((sf != of)) goto L_10040c9;
L_10042e0: /* 10042e0: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 10042e4: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10042e6: jge 0x100439f */
  if ((sf == of)) goto L_100439f;
L_10042ec: /* 10042ec: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 10042ef: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 10042f3: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10042f7: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 10042fa: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 10042fe: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1004302: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 1004305: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 1004309: mov edi, ebx */
  edi = ebx;
/* 100430b: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 100430d: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
L_1004311: /* 1004311: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 1004315: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1004317: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 100431b: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 100431d: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1004321: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1004325: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1004328: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 100432a: lea edi, [esi*4] */
  edi = (uint32_t)(esi*4);
/* 1004331: lea ebp, [edi + ecx*4] */
  ebp = (uint32_t)(edi + ecx*4);
/* 1004334: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 1004338: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 100433c: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 1004340: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 1004343: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 1004347: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 100434b: fstp dword ptr [edx + ebp*4 - 4] */
  WF32((uint32_t)(edx + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* 100434f: lea ebp, [ecx + ecx] */
  ebp = (uint32_t)(ecx + ecx);
/* 1004352: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1004355: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1004357: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 100435b: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 100435e: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1004362: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1004364: fstp dword ptr [edx + edi*4 - 4] */
  WF32((uint32_t)(edx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1004368: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 100436b: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 100436f: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 1004372: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 1004375: lea edi, [ecx*4] */
  edi = (uint32_t)(ecx*4);
/* 100437c: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100437e: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 1004382: add dword ptr [esp + 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x2cu), r);
  }
/* 1004386: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 100438a: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100438c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1004390: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1004391: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 1004395: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1004399: jne 0x1004311 */
  if (!zf) goto L_1004311;
L_100439f: /* 100439f: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10043a2: jl 0x1004a29 */
  if ((sf != of)) goto L_1004a29;
L_10043a8: /* 10043a8: je 0x100469b */
  if (zf) goto L_100469b;
L_10043ae: /* 10043ae: xor ebp, ebp */
  ebp = 0;
/* 10043b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10043b2: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 10043b6: jle 0x1004692 */
  if ((zf || sf != of)) goto L_1004692;
L_10043bc: /* 10043bc: mov esi, ecx */
  esi = ecx;
/* 10043be: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10043c1: mov dword ptr [esp + 0x74], esi */
  W32((uint32_t)(esp + 0x74u), esi);
/* 10043c5: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 10043c9: lea edi, [esi + esi*2] */
  edi = (uint32_t)(esi + esi*2);
/* 10043cc: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 10043cf: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 10043d2: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 10043d6: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10043da: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 10043de: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
L_10043e2: /* 10043e2: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10043e5: lea edi, [ecx + ecx] */
  edi = (uint32_t)(ecx + ecx);
/* 10043e8: lea esi, [edi + ebp*4] */
  esi = (uint32_t)(edi + ebp*4);
/* 10043eb: jle 0x100465a */
  if ((zf || sf != of)) goto L_100465a;
L_10043f1: /* 10043f1: lea ebx, [edx + esi*4] */
  ebx = (uint32_t)(edx + esi*4);
/* 10043f4: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 10043f8: lea ebx, [eax + ebp*4] */
  ebx = (uint32_t)(eax + ebp*4);
/* 10043fb: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 10043ff: lea ebx, [ecx + ecx] */
  ebx = (uint32_t)(ecx + ecx);
/* 1004402: lea ebx, [ebx + ebp*4] */
  ebx = (uint32_t)(ebx + ebp*4);
/* 1004405: lea ebx, [edx + ebx*4] */
  ebx = (uint32_t)(edx + ebx*4);
/* 1004408: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 100440c: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 1004410: lea ebx, [ebp + ebx*2] */
  ebx = (uint32_t)(ebp + ebx*2);
/* 1004414: mov ebp, dword ptr [esp + 0x80] */
  ebp = R32((uint32_t)(esp + 0x80u));
/* 100441b: lea ebx, [eax + ebx*4] */
  ebx = (uint32_t)(eax + ebx*4);
/* 100441e: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 1004422: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* 1004426: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 100442a: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 1004431: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1004433: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 1004437: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 100443e: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1004440: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1004442: mov ebp, dword ptr [esp + 0x88] */
  ebp = R32((uint32_t)(esp + 0x88u));
/* 1004449: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 100444d: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 1004454: lea esi, [edx + edi*4] */
  esi = (uint32_t)(edx + edi*4);
/* 1004457: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 100445b: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 100445f: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 1004463: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 1004465: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 1004469: mov esi, dword ptr [esp + 0x88] */
  esi = R32((uint32_t)(esp + 0x88u));
/* 1004470: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 1004474: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 1004478: mov esi, dword ptr [esp + 0x80] */
  esi = R32((uint32_t)(esp + 0x80u));
/* 100447f: lea ebx, [ecx - 3] */
  ebx = (uint32_t)(ecx + 0xfffffffdu);
/* 1004482: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 1004484: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1004487: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 1004488: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 100448c: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
L_1004490: /* 1004490: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1004494: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 1004497: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 100449a: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100449d: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 10044a0: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 10044a4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 10044a6: mov ebp, 8 */
  ebp = 0x8u;
/* 10044ab: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10044ad: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 10044b1: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 10044b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 10044b7: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10044b9: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10044bc: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 10044c0: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 10044c4: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 10044c8: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 10044cb: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 10044cd: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10044cf: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 10044d2: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 10044d6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 10044d8: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 10044dc: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10044de: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 10044e2: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 10044e6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10044e8: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10044ea: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 10044ee: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 10044f2: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 10044f6: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10044f8: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 10044fc: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 1004500: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 1004504: fld dword ptr [ebx + ebp] */
  { double v = F32((uint32_t)(ebx + ebp)); FPUSH(v); }
/* 1004507: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 100450b: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 100450e: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 1004512: fld dword ptr [esi + ebp] */
  { double v = F32((uint32_t)(esi + ebp)); FPUSH(v); }
/* 1004515: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1004519: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 100451c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 100451e: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 1004522: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 1004525: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 1004529: fmul dword ptr [ebx + ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ebp)));
/* 100452c: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 1004530: fld dword ptr [ebx + esi] */
  { double v = F32((uint32_t)(ebx + esi)); FPUSH(v); }
/* 1004533: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 1004537: fmul dword ptr [ebx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xfffffffcu)));
/* 100453a: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 100453e: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1004542: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004544: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 1004548: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 100454a: fmul dword ptr [esi + ebp] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebp)));
/* 100454d: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1004551: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 1004554: fmul dword ptr [ebx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xfffffffcu)));
/* 1004557: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004559: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 100455d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 100455f: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 1004562: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 1004566: fld dword ptr [ebx - 4] */
  { double v = F32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 1004569: fmul dword ptr [esi + ebp] */
  ST0 = ST0 * (F32((uint32_t)(esi + ebp)));
/* 100456c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 100456e: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 1004572: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1004576: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 100457a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100457e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1004582: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 1004586: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 100458a: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 100458e: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 1004592: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1004596: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 100459a: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 100459e: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 10045a2: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 10045a6: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 10045aa: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10045ad: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 10045b0: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 10045b4: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 10045b7: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 10045bb: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 10045bf: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 10045c3: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 10045c6: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 10045ca: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10045cd: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10045d1: fsub dword ptr [esp + 0x64] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x64u)));
/* 10045d5: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 10045d9: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 10045dd: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 10045e1: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10045e4: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 10045e8: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 10045ec: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10045ef: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10045f3: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 10045f7: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 10045fb: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10045fe: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1004602: fsub dword ptr [esp + 0x60] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x60u)));
/* 1004606: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1004609: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 100460d: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 1004611: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 1004615: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1004618: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 100461c: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 1004620: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1004623: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1004627: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 100462b: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 100462f: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1004632: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1004636: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 100463a: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100463d: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 1004641: add ebp, 8 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004644: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 1004648: dec dword ptr [esp + 0x68] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x68u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x68u), r);
  }
/* 100464c: jne 0x1004490 */
  if (!zf) goto L_1004490;
L_1004652: /* 1004652: mov ebp, dword ptr [esp + 0x6c] */
  ebp = R32((uint32_t)(esp + 0x6cu));
/* 1004656: mov ebx, dword ptr [esp + 0x7c] */
  ebx = R32((uint32_t)(esp + 0x7cu));
L_100465a: /* 100465a: mov esi, dword ptr [esp + 0x74] */
  esi = R32((uint32_t)(esp + 0x74u));
/* 100465e: add dword ptr [esp + 0x40], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1004662: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 1004666: lea esi, [ecx*4] */
  esi = (uint32_t)(ecx*4);
/* 100466d: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100466f: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 1004673: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1004677: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1004679: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 100467d: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100467f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 1004680: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 1004684: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1004688: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
/* 100468c: jne 0x10043e2 */
  if (!zf) goto L_10043e2;
L_1004692: /* 1004692: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1004695: jne 0x1004a29 */
  if (!zf) goto L_1004a29;
L_100469b: /* 100469b: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100469e: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* 10046a2: lea esi, [edi + ecx - 1] */
  esi = (uint32_t)(edi + ecx + 0xffffffffu);
/* 10046a6: lea edi, [esi + edi*2] */
  edi = (uint32_t)(esi + edi*2);
/* 10046a9: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 10046ad: mov edi, ecx */
  edi = ecx;
/* 10046af: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 10046b3: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 10046bb: jl 0x100496a */
  if ((sf != of)) goto L_100496a;
L_10046c1: /* 10046c1: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 10046c8: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 10046cb: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 10046cf: lea ebx, [ecx + ecx*2] */
  ebx = (uint32_t)(ecx + ecx*2);
/* 10046d2: lea ebx, [edx + ebx*4] */
  ebx = (uint32_t)(edx + ebx*4);
/* 10046d5: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 10046d9: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 10046dd: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10046df: lea ebp, [eax + ecx*4 - 4] */
  ebp = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* 10046e3: mov dword ptr [esp + 0x70], 3 */
  W32((uint32_t)(esp + 0x70u), 0x3u);
/* 10046eb: lea ebx, [eax + ebx*4] */
  ebx = (uint32_t)(eax + ebx*4);
/* 10046ee: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 10046f2: jmp 0x10046f8 */
  goto L_10046f8;
L_10046f4: /* 10046f4: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
L_10046f8: /* 10046f8: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10046fc: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 10046ff: fadd dword ptr [eax + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4)));
/* 1004702: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 1004708: fchs  */
  ST0 = -ST0;
/* 100470a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 100470e: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1004711: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1004713: fsub dword ptr [eax + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebp*4)));
/* 1004716: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 100471a: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 1004720: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 1004724: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 1004728: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 100472b: fstp dword ptr [edx + edi*4 - 4] */
  WF32((uint32_t)(edx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 100472f: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 1004732: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1004736: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 100473a: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100473d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1004741: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 1004743: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 1004746: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 100474a: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 100474c: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100474f: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 1004756: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1004758: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 100475c: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 1004760: add dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1004764: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 100476b: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100476d: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1004771: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004773: add dword ptr [esp + 0x24], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1004777: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 100477b: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 100477f: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 1004786: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1004788: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100478c: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 100478f: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 1004793: fadd dword ptr [eax + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4)));
/* 1004796: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 100479c: fchs  */
  ST0 = -ST0;
/* 100479e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10047a2: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10047a5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10047a7: fsub dword ptr [eax + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebp*4)));
/* 10047aa: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10047ae: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 10047b4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10047b8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10047bc: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 10047be: fstp dword ptr [edx + edi*4 - 4] */
  WF32((uint32_t)(edx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 10047c2: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 10047c4: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 10047c8: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 10047cc: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10047cf: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 10047d3: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 10047d5: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 10047d8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 10047dc: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 10047de: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 10047e1: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 10047e8: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10047ea: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 10047ee: add dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 10047f2: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 10047f9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10047fb: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10047ff: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1004803: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004805: add dword ptr [esp + 0x24], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 1004809: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 100480d: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1004811: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 1004818: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100481a: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 100481e: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 1004821: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 1004825: fadd dword ptr [eax + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4)));
/* 1004828: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 100482e: fchs  */
  ST0 = -ST0;
/* 1004830: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 1004834: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 1004837: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1004839: fsub dword ptr [eax + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebp*4)));
/* 100483c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1004840: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 1004846: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 100484a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 100484e: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1004850: fstp dword ptr [edx + edi*4 - 4] */
  WF32((uint32_t)(edx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1004854: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1004856: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 100485a: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 100485e: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1004861: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1004865: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 1004867: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 100486a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 100486e: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1004870: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1004873: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 100487a: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100487c: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1004880: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 1004884: add dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1004888: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 100488f: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1004891: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 1004895: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004897: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 100489b: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100489d: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 10048a1: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 10048a5: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 10048a9: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 10048b0: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10048b2: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 10048b6: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* 10048b9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 10048bd: fadd dword ptr [eax + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4)));
/* 10048c0: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 10048c6: fchs  */
  ST0 = -ST0;
/* 10048c8: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10048cc: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 10048cf: fsub dword ptr [eax + ebp*4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ebp*4)));
/* 10048d2: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 10048d6: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 10048dc: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10048e0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10048e4: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 10048e6: fstp dword ptr [edx + edi*4 - 4] */
  WF32((uint32_t)(edx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 10048ea: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 10048ec: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 10048f0: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 10048f4: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10048f7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 10048fb: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 10048fd: fstp dword ptr [edx + edi*4] */
  WF32((uint32_t)(edx + edi*4), ST0); FPOP();
/* 1004900: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1004904: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 1004906: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1004908: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100490b: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 1004912: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1004914: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1004918: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 100491c: add dword ptr [esp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1004920: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 1004927: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1004929: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* 100492d: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100492f: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 1004933: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1004937: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 100493b: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100493d: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 1004941: lea ebx, [ecx*4] */
  ebx = (uint32_t)(ecx*4);
/* 1004948: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100494a: mov ebx, dword ptr [esp + 0x7c] */
  ebx = R32((uint32_t)(esp + 0x7cu));
/* 100494e: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 1004952: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1004957: mov ebp, dword ptr [esp + 0x70] */
  ebp = R32((uint32_t)(esp + 0x70u));
/* 100495b: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100495e: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004960: mov dword ptr [esp + 0x70], ebp */
  W32((uint32_t)(esp + 0x70u), ebp);
/* 1004964: jl 0x10046f4 */
  if ((sf != of)) goto L_10046f4;
L_100496a: /* 100496a: cmp dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100496e: jge 0x1004a29 */
  if ((sf == of)) goto L_1004a29;
L_1004974: /* 1004974: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 100497b: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 100497e: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1004982: lea ebp, [ecx*4] */
  ebp = (uint32_t)(ecx*4);
/* 1004989: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 100498d: lea ebp, [edx + edi*4] */
  ebp = (uint32_t)(edx + edi*4);
/* 1004990: mov dword ptr [esp + 0x74], ebp */
  W32((uint32_t)(esp + 0x74u), ebp);
/* 1004994: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 1004998: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 100499b: lea ebp, [eax + ebp*4] */
  ebp = (uint32_t)(eax + ebp*4);
/* 100499e: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 10049a1: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10049a5: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 10049a9: lea ebp, [eax + esi*4] */
  ebp = (uint32_t)(eax + esi*4);
/* 10049ac: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10049ae: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 10049b1: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 10049b5: lea eax, [eax + esi*4 - 4] */
  eax = (uint32_t)(eax + esi*4 + 0xfffffffcu);
/* 10049b9: sub ebx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10049bd: mov esi, dword ptr [esp + 0x6c] */
  esi = R32((uint32_t)(esp + 0x6cu));
/* 10049c1: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 10049c5: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
L_10049c9: /* 10049c9: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 10049cd: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 10049cf: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 10049d2: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 10049d8: fchs  */
  ST0 = -ST0;
/* 10049da: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 10049de: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 10049e1: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10049e3: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 10049e5: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10049e7: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10049eb: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 10049ef: fmul dword ptr [0x100d18c] */
  ST0 = ST0 * (F32((uint32_t)(0x100d18cu)));
/* 10049f5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 10049f9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 10049fd: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10049ff: fstp dword ptr [ebx - 4] */
  WF32((uint32_t)(ebx + 0xfffffffcu), ST0); FPOP();
/* 1004a02: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004a04: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004a06: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 1004a0a: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1004a0d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1004a11: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 1004a13: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 1004a15: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1004a17: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 1004a1b: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 1004a1d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004a1f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1004a21: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004a23: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1004a27: jne 0x10049c9 */
  if (!zf) goto L_10049c9;
L_1004a29: /* 1004a29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1004a2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1004a2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1004a2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1004a2d: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1004a30: ret  */
  esp += 4; SPILL(); return;
}

void f_1004a40(void) {
  LOAD_REGS();
L_1004a40: /* 1004a40: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1004a43: fild dword ptr [esp + 0x80] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 1004a4a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1004a4b: mov ebp, dword ptr [esp + 0x8c] */
  ebp = R32((uint32_t)(esp + 0x8cu));
/* 1004a52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1004a53: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 1004a57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1004a58: fld dword ptr [0x100d190] */
  { double v = F32((uint32_t)(0x100d190u)); FPUSH(v); }
/* 1004a5e: mov esi, eax */
  esi = eax;
/* 1004a60: fdiv dword ptr [esp + 0x7c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x7cu)));
/* 1004a64: mov edi, ecx */
  edi = ecx;
/* 1004a66: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 1004a6a: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 1004a6e: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 1004a75: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 1004a7c: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1004a83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1004a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1004a85: call 0x1009244 */
  esp -= 4; W32(esp, 0x1004a8au); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* 1004a8a: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 1004a8e: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 1004a95: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 1004a9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1004a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1004a9e: call 0x100923e */
  esp -= 4; W32(esp, 0x1004aa3u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* 1004aa3: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 1004aa7: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1004aae: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 1004ab1: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 1004ab3: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1004ab7: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
/* 1004aba: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 1004abc: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1004ac0: mov ecx, ebx */
  ecx = ebx;
/* 1004ac2: imul ecx, dword ptr [esp + 0xa0] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xa0u)));
  ecx = (uint32_t)r;
  }
/* 1004aca: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1004ace: mov ecx, ebx */
  ecx = ebx;
/* 1004ad0: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 1004ad3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1004ad6: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1004ad9: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 1004add: je 0x1005219 */
  if (zf) goto L_1005219;
L_1004ae3: /* 1004ae3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1004ae5: jle 0x1004b13 */
  if ((zf || sf != of)) goto L_1004b13;
L_1004ae7: /* 1004ae7: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 1004aee: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1004af5: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1004af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1004afb: jmp 0x1004b00 */
  goto L_1004b00;
L_1004b00: /* 1004b00: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1004b03: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1004b05: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 1004b09: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004b0c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1004b0d: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1004b11: jne 0x1004b00 */
  if (!zf) goto L_1004b00;
L_1004b13: /* 1004b13: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 1004b1a: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004b1d: jle 0x1004b7b */
  if ((zf || sf != of)) goto L_1004b7b;
L_1004b1f: /* 1004b1f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1004b23: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 1004b2a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1004b2b: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 1004b2f: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004b36: mov eax, esi */
  eax = esi;
/* 1004b38: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1004b3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1004b40: /* 1004b40: add eax, dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004b44: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1004b46: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1004b4a: jle 0x1004b73 */
  if ((zf || sf != of)) goto L_1004b73;
L_1004b4c: /* 1004b4c: mov ecx, edi */
  ecx = edi;
/* 1004b4e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1004b50: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
L_1004b54: /* 1004b54: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1004b57: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1004b59: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004b60: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004b62: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1004b66: jne 0x1004b54 */
  if (!zf) goto L_1004b54;
L_1004b68: /* 1004b68: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004b6f: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
L_1004b73: /* 1004b73: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 1004b77: jne 0x1004b40 */
  if (!zf) goto L_1004b40;
L_1004b79: /* 1004b79: jmp 0x1004b82 */
  goto L_1004b82;
L_1004b7b: /* 1004b7b: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
L_1004b82: /* 1004b82: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1004b86: mov eax, ebx */
  eax = ebx;
/* 1004b88: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1004b8a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004b8c: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 1004b93: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 1004b97: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 1004b9f: jle 0x1004cb9 */
  if ((zf || sf != of)) goto L_1004cb9;
L_1004ba5: /* 1004ba5: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ba8: jle 0x1004e8d */
  if ((zf || sf != of)) goto L_1004e8d;
L_1004bae: /* 1004bae: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1004bb5: lea eax, [edx + eax*4 - 4] */
  eax = (uint32_t)(edx + eax*4 + 0xfffffffcu);
/* 1004bb9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1004bbd: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 1004bc4: mov edx, esi */
  edx = esi;
/* 1004bc6: mov eax, edi */
  eax = edi;
/* 1004bc8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1004bca: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004bcc: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 1004bd3: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1004bd6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1004bd7: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1004bdb: jmp 0x1004be1 */
  goto L_1004be1;
L_1004bdd: /* 1004bdd: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
L_1004be1: /* 1004be1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1004be5: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1004be8: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004bea: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004bec: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1004bf0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1004bf4: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 1004bfb: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004bfd: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 1004c04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1004c06: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1004c0a: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1004c0e: jle 0x1004caa */
  if ((zf || sf != of)) goto L_1004caa;
L_1004c14: /* 1004c14: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 1004c18: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1004c1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1004c20: /* 1004c20: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 1004c27: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004c29: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004c2b: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004c2e: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1004c32: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1004c36: jle 0x1004c9c */
  if ((zf || sf != of)) goto L_1004c9c;
L_1004c38: /* 1004c38: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1004c3c: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1004c40: mov edx, esi */
  edx = esi;
/* 1004c42: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004c44: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1004c48: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1004c4b: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1004c4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1004c4e: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
L_1004c52: /* 1004c52: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 1004c55: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1004c59: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 1004c5c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004c5f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1004c62: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004c65: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004c67: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004c6a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1004c6e: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1004c72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004c74: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 1004c77: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1004c7b: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004c7e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004c81: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004c83: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004c85: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004c87: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1004c89: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 1004c8d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1004c8e: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1004c92: jne 0x1004c52 */
  if (!zf) goto L_1004c52;
L_1004c94: /* 1004c94: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1004c98: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
L_1004c9c: /* 1004c9c: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1004ca0: jne 0x1004c20 */
  if (!zf) goto L_1004c20;
L_1004ca6: /* 1004ca6: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
L_1004caa: /* 1004caa: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1004cae: jne 0x1004bdd */
  if (!zf) goto L_1004bdd;
L_1004cb4: /* 1004cb4: jmp 0x1004e89 */
  goto L_1004e89;
L_1004cb9: /* 1004cb9: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004cbc: jle 0x1004e8d */
  if ((zf || sf != of)) goto L_1004e8d;
L_1004cc2: /* 1004cc2: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1004cc9: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 1004ccc: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1004cd0: lea ecx, [edx + eax*4 - 4] */
  ecx = (uint32_t)(edx + eax*4 + 0xfffffffcu);
/* 1004cd4: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 1004cdb: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1004cdc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
L_1004ce0: /* 1004ce0: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004ce7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004ce9: add dword ptr [esp + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 1004ced: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1004cf1: add edx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004cf5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004cf7: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004cfa: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1004cfe: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1004d02: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1004d06: jle 0x1004e7f */
  if ((zf || sf != of)) goto L_1004e7f;
L_1004d0c: /* 1004d0c: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1004d10: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1004d12: lea eax, [edx + ebp + 1] */
  eax = (uint32_t)(edx + ebp + 0x1u);
/* 1004d16: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1004d19: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1004d1b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1004d1c: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1004d20: jmp 0x1004d30 */
  goto L_1004d30;
L_1004d22: /* 1004d22: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1004d26: jmp 0x1004d30 */
  goto L_1004d30;
L_1004d30: /* 1004d30: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004d37: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004d3a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004d3d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004d40: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1004d44: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1004d4c: jl 0x1004e08 */
  if ((sf != of)) goto L_1004e08;
L_1004d52: /* 1004d52: mov edx, 3 */
  edx = 0x3u;
L_1004d57: /* 1004d57: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d5a: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1004d5e: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004d62: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004d65: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004d67: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 1004d6b: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d6e: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1004d75: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004d78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004d7a: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004d7e: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d81: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d84: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004d88: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004d8a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004d8c: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004d8f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004d91: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d94: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004d98: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004d9a: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004d9f: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004da3: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004da6: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004da9: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004dad: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004daf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004db1: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004db4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004db6: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004db9: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004dbd: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004dbf: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004dc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004dc4: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004dc8: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004dcb: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004dce: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004dd2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004dd4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004dd6: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004dd9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004ddb: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004dde: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004de2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004de4: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004de7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004de9: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004ded: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004df0: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004df3: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004df7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004df9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004dfb: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004dfe: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004e00: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004e02: jl 0x1004d57 */
  if ((sf != of)) goto L_1004d57;
L_1004e08: /* 1004e08: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 1004e0c: cmp edx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004e13: jge 0x1004e66 */
  if ((sf == of)) goto L_1004e66;
L_1004e15: /* 1004e15: mov edx, esi */
  edx = esi;
/* 1004e17: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004e19: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1004e1d: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004e24: sub edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004e28: lea ebp, [esi + eax*4] */
  ebp = (uint32_t)(esi + eax*4);
/* 1004e2b: lea eax, [edi + eax*4 - 4] */
  eax = (uint32_t)(edi + eax*4 + 0xfffffffcu);
/* 1004e2f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
L_1004e33: /* 1004e33: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004e35: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1004e39: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004e3c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004e3e: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1004e41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004e43: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 1004e46: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004e4d: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004e50: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004e53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004e55: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004e57: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004e59: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004e5b: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1004e5e: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004e60: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1004e64: jne 0x1004e33 */
  if (!zf) goto L_1004e33;
L_1004e66: /* 1004e66: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 1004e6a: jne 0x1004d22 */
  if (!zf) goto L_1004d22;
L_1004e70: /* 1004e70: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 1004e74: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1004e78: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
L_1004e7f: /* 1004e7f: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1004e83: jne 0x1004ce0 */
  if (!zf) goto L_1004ce0;
L_1004e89: /* 1004e89: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
L_1004e8d: /* 1004e8d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1004e91: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 1004e98: imul edx, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  edx = (uint32_t)r;
  }
/* 1004ea0: cmp dword ptr [esp + 0x64], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x64u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ea4: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 1004eac: jge 0x10050c5 */
  if ((sf == of)) goto L_10050c5;
L_1004eb2: /* 1004eb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1004eb6: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004eb9: jle 0x1005219 */
  if ((zf || sf != of)) goto L_1005219;
L_1004ebf: /* 1004ebf: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1004ec3: mov eax, ecx */
  eax = ecx;
/* 1004ec5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1004ec6: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 1004eca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1004ed0: /* 1004ed0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1004ed4: add dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1004ed8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1004edc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004ede: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004ee0: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ee3: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1004ee7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1004eeb: jle 0x10050b6 */
  if ((zf || sf != of)) goto L_10050b6;
L_1004ef1: /* 1004ef1: sub edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004ef5: lea eax, [ebx - 3] */
  eax = (uint32_t)(ebx + 0xfffffffdu);
/* 1004ef8: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1004efa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1004efb: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 1004eff: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 1004f03: jmp 0x1004f10 */
  goto L_1004f10;
L_1004f05: /* 1004f05: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 1004f09: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 1004f0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1004f10: /* 1004f10: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f13: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1004f17: mov eax, ecx */
  eax = ecx;
/* 1004f19: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f1b: cmp dword ptr [esp + 0x90], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x90u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004f23: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1004f2b: jl 0x100500b */
  if ((sf != of)) goto L_100500b;
L_1004f31: /* 1004f31: mov edx, 3 */
  edx = 0x3u;
L_1004f36: /* 1004f36: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f38: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f3c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004f3e: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f42: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1004f46: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004f49: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 1004f4d: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f51: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1004f58: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f5b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004f5e: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004f61: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f65: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f68: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004f6b: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004f6e: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f72: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f76: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004f78: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004f7b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f7d: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f81: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f85: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f89: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f8c: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004f8f: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f93: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f96: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004f99: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004f9c: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fa0: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fa4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004fa6: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004fa9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004fab: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004faf: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fb3: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fb7: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fba: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004fbd: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fc1: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fc4: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004fc7: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004fca: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fce: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fd2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004fd4: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004fd7: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004fd9: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004fdb: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fdf: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fe3: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fe7: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fea: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004fed: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004ff1: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004ff4: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004ff7: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004ffa: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004ffe: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005002: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1005005: jl 0x1004f36 */
  if ((sf != of)) goto L_1004f36;
L_100500b: /* 100500b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100500f: cmp edx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005016: jge 0x10050a1 */
  if ((sf == of)) goto L_10050a1;
L_100501c: /* 100501c: lea ebp, [edi + ecx*4] */
  ebp = (uint32_t)(edi + ecx*4);
/* 100501f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 1005023: lea ebp, [edi + eax*4] */
  ebp = (uint32_t)(edi + eax*4);
/* 1005026: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 100502a: mov ebp, edi */
  ebp = edi;
/* 100502c: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 100502e: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1005032: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005039: sub ebp, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 100503d: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005044: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 1005048: lea ecx, [esi + ecx*4 - 4] */
  ecx = (uint32_t)(esi + ecx*4 + 0xfffffffcu);
/* 100504c: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
L_1005050: /* 1005050: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 1005054: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 1005057: fadd dword ptr [ecx + edx] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx)));
/* 100505a: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100505c: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 1005060: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1005064: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005066: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005068: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100506a: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 100506e: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1005072: fstp dword ptr [eax + ebp] */
  WF32((uint32_t)(eax + ebp), ST0); FPOP();
/* 1005075: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1005078: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 100507b: fstp dword ptr [ecx + ebp] */
  WF32((uint32_t)(ecx + ebp), ST0); FPOP();
/* 100507e: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 1005082: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1005085: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 1005088: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100508b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 100508f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005091: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005093: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005096: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 100509a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 100509b: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 100509f: jne 0x1005050 */
  if (!zf) goto L_1005050;
L_10050a1: /* 10050a1: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10050a5: jne 0x1004f05 */
  if (!zf) goto L_1004f05;
L_10050ab: /* 10050ab: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 10050b2: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
L_10050b6: /* 10050b6: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 10050ba: jne 0x1004ed0 */
  if (!zf) goto L_1004ed0;
L_10050c0: /* 10050c0: jmp 0x1005219 */
  goto L_1005219;
L_10050c5: /* 10050c5: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10050ca: jle 0x1005219 */
  if ((zf || sf != of)) goto L_1005219;
L_10050d0: /* 10050d0: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 10050d3: lea edx, [esi + edx*4 - 4] */
  edx = (uint32_t)(esi + edx*4 + 0xfffffffcu);
/* 10050d7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 10050db: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10050df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 10050e3: lea eax, [esi - 4] */
  eax = (uint32_t)(esi + 0xfffffffcu);
/* 10050e6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10050e7: mov ecx, edi */
  ecx = edi;
/* 10050e9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10050ed: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
L_10050f1: /* 10050f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10050f5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10050f9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10050fc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10050fe: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1005102: sub dword ptr [esp + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005106: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 100510a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100510c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100510e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005115: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005117: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100511b: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 100511f: jle 0x100520f */
  if ((zf || sf != of)) goto L_100520f;
L_1005125: /* 1005125: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005129: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 100512d: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005131: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1005135: mov ecx, edx */
  ecx = edx;
/* 1005137: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 100513e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1005142: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005146: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 100514a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1005150: /* 1005150: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005153: jle 0x10051d3 */
  if ((zf || sf != of)) goto L_10051d3;
L_1005155: /* 1005155: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1005159: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 100515d: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1005161: mov edx, edi */
  edx = edi;
/* 1005163: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005165: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1005169: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 100516c: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 100516e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100516f: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 1005173: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1005177: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100517b: jmp 0x1005180 */
  goto L_1005180;
L_1005180: /* 1005180: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1005184: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 1005187: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 100518a: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100518d: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1005191: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1005195: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005198: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100519b: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100519e: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10051a2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 10051a6: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 10051a9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051ac: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 10051af: fstp dword ptr [ecx + edx] */
  WF32((uint32_t)(ecx + edx), ST0); FPOP();
/* 10051b2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10051b6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051b9: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10051bc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051be: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10051c2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10051c4: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 10051c6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051c8: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 10051cc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10051cd: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 10051d1: jne 0x1005180 */
  if (!zf) goto L_1005180;
L_10051d3: /* 10051d3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10051d7: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10051db: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10051e2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051e4: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10051e8: add dword ptr [esp + 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10051ec: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 10051f0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10051f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051f4: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 10051f8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10051f9: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 10051fd: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005201: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 1005205: jne 0x1005150 */
  if (!zf) goto L_1005150;
L_100520b: /* 100520b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
L_100520f: /* 100520f: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1005213: jne 0x10050f1 */
  if (!zf) goto L_10050f1;
L_1005219: /* 1005219: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100521b: jle 0x1005244 */
  if ((zf || sf != of)) goto L_1005244;
L_100521d: /* 100521d: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005224: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 100522b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100522d: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
L_1005231: /* 1005231: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1005234: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1005236: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 100523a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100523d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100523e: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005242: jne 0x1005231 */
  if (!zf) goto L_1005231;
L_1005244: /* 1005244: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 100524b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 100524f: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 1005252: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005255: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005259: jle 0x1005368 */
  if ((zf || sf != of)) goto L_1005368;
L_100525f: /* 100525f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005263: mov eax, ebx */
  eax = ebx;
/* 1005265: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005267: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005269: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 100526a: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100526e: jmp 0x1005278 */
  goto L_1005278;
L_1005270: /* 1005270: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005274: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
L_1005278: /* 1005278: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 100527c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100527e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005280: cmp dword ptr [esp + 0x90], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x90u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005288: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100528c: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1005290: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005298: jl 0x1005310 */
  if ((sf != of)) goto L_1005310;
L_100529a: /* 100529a: mov edx, 3 */
  edx = 0x3u;
L_100529f: /* 100529f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052a1: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052a4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052a6: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052a9: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 10052ad: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10052b0: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 10052b4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052b7: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 10052be: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10052c4: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052c7: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052c9: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052cc: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052ce: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052d1: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052d4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052d7: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052da: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052dd: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052df: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052e2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052e4: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052e7: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052ea: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052ed: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052f0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052f3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052f5: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052f8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052fa: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10052fc: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052ff: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005302: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1005305: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005308: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 100530b: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 100530e: jl 0x100529f */
  if ((sf != of)) goto L_100529f;
L_1005310: /* 1005310: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005317: cmp dword ptr [esp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100531b: jge 0x1005353 */
  if ((sf == of)) goto L_1005353;
L_100531d: /* 100531d: mov ebp, edi */
  ebp = edi;
/* 100531f: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1005321: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1005325: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1005329: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 100532c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 100532f: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_1005331: /* 1005331: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 1005338: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 100533b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100533d: fadd dword ptr [eax + ebp] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp)));
/* 1005340: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005342: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005343: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1005347: fstp dword ptr [eax + ebp] */
  WF32((uint32_t)(eax + ebp), ST0); FPOP();
/* 100534a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100534c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 100534e: fstp dword ptr [ecx + ebp] */
  WF32((uint32_t)(ecx + ebp), ST0); FPOP();
/* 1005351: jne 0x1005331 */
  if (!zf) goto L_1005331;
L_1005353: /* 1005353: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1005357: jne 0x1005270 */
  if (!zf) goto L_1005270;
L_100535d: /* 100535d: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005364: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
L_1005368: /* 1005368: xor eax, eax */
  eax = 0;
/* 100536a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 100536e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1005372: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 1005379: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 100537a: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 100537d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1005381: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005385: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005388: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* 1005390: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 1005394: jle 0x1005837 */
  if ((zf || sf != of)) goto L_1005837;
L_100539a: /* 100539a: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 10053a1: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
/* 10053a4: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053ac: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10053b3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10053b4: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 10053b8: lea edx, [edx + edi*4 + 8] */
  edx = (uint32_t)(edx + edi*4 + 0x8u);
/* 10053bc: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 10053c0: jmp 0x10053d0 */
  goto L_10053d0;
L_10053c2: /* 10053c2: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 10053c6: jmp 0x10053d0 */
  goto L_10053d0;
L_10053d0: /* 10053d0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 10053d4: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 10053d8: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 10053dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10053e0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10053e4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10053e6: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 10053ea: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053ee: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053f2: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10053f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10053f6: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10053f8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10053fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1005400: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1005404: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005408: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 100540c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1005410: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 1005414: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005418: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100541c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100541e: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1005422: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 1005426: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100542a: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100542e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005430: xor ecx, ecx */
  ecx = 0;
/* 1005432: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005435: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005439: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100543d: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 1005441: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005445: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005449: jl 0x1005540 */
  if ((sf != of)) goto L_1005540;
L_100544f: /* 100544f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005456: mov eax, edx */
  eax = edx;
/* 1005458: lea edx, [ecx + edi*4 + 8] */
  edx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100545c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1005460: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005464: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1005467: lea ecx, [ecx + ebp*4 + 8] */
  ecx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 100546b: mov dword ptr [esp + 0x50], 3 */
  W32((uint32_t)(esp + 0x50u), 0x3u);
/* 1005473: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_1005477: /* 1005477: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 100547b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100547f: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005482: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005486: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005489: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100548c: fadd dword ptr [edx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffe8u)));
/* 100548f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005492: fstp dword ptr [edi - 0x18] */
  WF32((uint32_t)(edi + 0xffffffe8u), ST0); FPOP();
/* 1005495: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 1005499: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100549c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054a0: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 10054a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054a7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054aa: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ae: fadd dword ptr [edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffecu)));
/* 10054b1: fstp dword ptr [edi - 0x14] */
  WF32((uint32_t)(edi + 0xffffffecu), ST0); FPOP();
/* 10054b4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054b8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054bb: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054bf: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10054c2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054c6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054c8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054cc: fadd dword ptr [edx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff0u)));
/* 10054cf: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 10054d2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054d8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054dc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10054df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054e6: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ea: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 10054ed: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 10054f0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054f4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054f7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10054fb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10054fe: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005502: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005506: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1005509: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100550c: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005510: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1005515: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100551a: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 100551f: add dword ptr [esp + 0x40], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005524: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1005529: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 100552e: cmp dword ptr [esp + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005532: jl 0x1005477 */
  if ((sf != of)) goto L_1005477;
L_1005538: /* 1005538: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 100553c: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1005540: /* 1005540: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005542: jge 0x10055d9 */
  if ((sf == of)) goto L_10055d9;
L_1005548: /* 1005548: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 100554c: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005553: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005556: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 100555a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 100555e: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 1005565: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005568: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 100556c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005570: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005577: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 100557a: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1005581: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005585: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1005589: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 100558c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1005590: /* 1005590: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1005594: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 100559b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 100559d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10055a0: fadd dword ptr [edi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4)));
/* 10055a3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055a7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055a9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055ad: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10055b1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 10055b3: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 10055b7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055b9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055c0: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10055c4: add dword ptr [esp + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 10055c9: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055cd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10055d1: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055d3: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 10055d7: jl 0x1005590 */
  if ((sf != of)) goto L_1005590;
L_10055d9: /* 10055d9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10055dd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10055e1: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 10055e5: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10055e9: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055ee: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10055f2: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10055f6: jle 0x1005829 */
  if ((zf || sf != of)) goto L_1005829;
L_10055fc: /* 10055fc: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005603: lea edx, [ecx + ebp*4 + 8] */
  edx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 1005607: lea ecx, [ecx + edi*4 + 8] */
  ecx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100560b: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 100560f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005613: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005616: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 100561a: jmp 0x1005630 */
  goto L_1005630;
L_100561c: /* 100561c: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 1005620: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 1005627: jmp 0x1005630 */
  goto L_1005630;
L_1005630: /* 1005630: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 1005634: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1005638: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 100563c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100563e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005642: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005646: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 100564a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 100564e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005650: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005654: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1005656: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005658: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100565a: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100565d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 1005661: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 1005668: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100566c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1005670: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 1005674: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1005678: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 100567c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1005680: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1005684: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1005688: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 100568c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005690: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005692: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1005696: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100569a: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 100569e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10056a2: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 10056a6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10056ae: jl 0x100579a */
  if ((sf != of)) goto L_100579a;
L_10056b4: /* 10056b4: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 10056b8: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10056bc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10056c0: mov dword ptr [esp + 0x40], 3 */
  W32((uint32_t)(esp + 0x40u), 0x3u);
L_10056c8: /* 10056c8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10056cc: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 10056d0: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 10056d3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056d6: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10056da: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 10056de: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10056e1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056e4: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 10056e8: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10056ec: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10056ef: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10056f6: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 10056fa: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 10056fd: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005701: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005704: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005708: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100570b: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 100570f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005712: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 1005716: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 1005719: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 100571d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005721: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005724: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005727: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 100572b: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 100572f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005732: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1005735: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005738: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100573b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100573e: cmp ebp, dword ptr [esp + 0x94] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005745: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1005748: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100574c: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 100574f: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1005752: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1005755: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005759: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 100575c: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 100575f: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1005762: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005766: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1005769: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 100576c: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 100576f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005773: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 1005776: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005779: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 100577c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005780: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1005783: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1005786: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1005789: jl 0x10056c8 */
  if ((sf != of)) goto L_10056c8;
L_100578f: /* 100578f: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005796: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100579a: /* 100579a: cmp dword ptr [esp + 0x30], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100579e: jge 0x100581f */
  if ((sf == of)) goto L_100581f;
L_10057a0: /* 10057a0: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 10057a7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10057ab: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 10057b2: lea ecx, [edi + edx*4] */
  ecx = (uint32_t)(edi + edx*4);
/* 10057b5: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057b9: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 10057bc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10057c4: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 10057c7: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057cb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 10057ce: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10057d2: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 10057d6: mov eax, ebp */
  eax = ebp;
/* 10057d8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10057da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10057e0: /* 10057e0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057e4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10057e8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 10057ea: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057ee: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10057f1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057f5: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 10057f7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10057fa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10057fd: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 1005800: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005804: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005807: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 100580b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100580e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100580f: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005812: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1005816: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1005819: jne 0x10057e0 */
  if (!zf) goto L_10057e0;
L_100581b: /* 100581b: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100581f: /* 100581f: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005823: jne 0x100561c */
  if (!zf) goto L_100561c;
L_1005829: /* 1005829: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 100582d: jne 0x10053c2 */
  if (!zf) goto L_10053c2;
L_1005833: /* 1005833: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_1005837: /* 1005837: xor edx, edx */
  edx = 0;
/* 1005839: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100583c: jle 0x100591f */
  if ((zf || sf != of)) goto L_100591f;
L_1005842: /* 1005842: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005849: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100584d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005850: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1005851: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 1005855: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 100585c: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1005860: jmp 0x1005870 */
  goto L_1005870;
L_1005862: /* 1005862: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005866: jmp 0x1005870 */
  goto L_1005870;
L_1005870: /* 1005870: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005874: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005876: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 100587d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005881: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005883: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1005887: xor edx, edx */
  edx = 0;
/* 1005889: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100588c: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005890: jl 0x10058f2 */
  if ((sf != of)) goto L_10058f2;
L_1005892: /* 1005892: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1005896: mov edi, 3 */
  edi = 0x3u;
/* 100589b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_100589e: /* 100589e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 10058a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058a4: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10058a7: mov dword ptr [esp + 0x80], edi */
  W32((uint32_t)(esp + 0x80u), edi);
/* 10058ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10058b2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058b5: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10058b8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10058bc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10058bf: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 10058c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10058c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10058cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10058cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10058d2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10058d7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10058da: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10058dd: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10058e0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 10058e3: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10058e6: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10058e9: jl 0x100589e */
  if ((sf != of)) goto L_100589e;
L_10058eb: /* 10058eb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_10058f2: /* 10058f2: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058f4: jge 0x1005915 */
  if ((sf == of)) goto L_1005915;
L_10058f6: /* 10058f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 10058fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1005901: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
L_1005904: /* 1005904: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1005906: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005909: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100590c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100590d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100590f: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005913: jl 0x1005904 */
  if ((sf != of)) goto L_1005904;
L_1005915: /* 1005915: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 1005919: jne 0x1005862 */
  if (!zf) goto L_1005862;
L_100591f: /* 100591f: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005926: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005928: jge 0x1005987 */
  if ((sf == of)) goto L_1005987;
L_100592a: /* 100592a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100592c: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_1005932: /* 1005932: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005939: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100593b: mov edx, esi */
  edx = esi;
/* 100593d: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005944: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
L_1005948: /* 1005948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100594a: jle 0x1005977 */
  if ((zf || sf != of)) goto L_1005977;
L_100594c: /* 100594c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100594e: mov eax, edx */
  eax = edx;
L_1005950: /* 1005950: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 1005952: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 1005954: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100595b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100595d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005961: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005964: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005966: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005967: jne 0x1005950 */
  if (!zf) goto L_1005950;
L_1005969: /* 1005969: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005970: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
L_1005977: /* 1005977: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100597b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100597e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100597f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005983: jne 0x1005948 */
  if (!zf) goto L_1005948;
L_1005985: /* 1005985: jmp 0x10059f2 */
  goto L_10059f2;
L_1005987: /* 1005987: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005989: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_100598b: /* 100598b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100598f: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005996: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 100599d: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 10059a4: mov ebp, esi */
  ebp = esi;
/* 10059a6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059aa: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10059ae: mov edi, edi */
  edi = edi;
L_10059b0: /* 10059b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10059b2: jle 0x10059cd */
  if ((zf || sf != of)) goto L_10059cd;
L_10059b4: /* 10059b4: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059b8: mov eax, ebp */
  eax = ebp;
/* 10059ba: mov edx, ebx */
  edx = ebx;
/* 10059bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10059c0: /* 10059c0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10059c2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 10059c4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10059c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10059cb: jne 0x10059c0 */
  if (!zf) goto L_10059c0;
L_10059cd: /* 10059cd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059d1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10059d8: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10059df: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10059e1: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 10059e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10059e8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059ec: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10059f0: jne 0x10059b0 */
  if (!zf) goto L_10059b0;
L_10059f2: /* 10059f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10059f6: imul ebp, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  ebp = (uint32_t)r;
  }
/* 10059fe: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005a03: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005a06: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1005a0a: jle 0x1005aa7 */
  if ((zf || sf != of)) goto L_1005aa7;
L_1005a10: /* 1005a10: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1005a14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005a17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1005a18: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005a1f: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 1005a26: lea edx, [esi + ebp*4] */
  edx = (uint32_t)(esi + ebp*4);
/* 1005a29: mov ecx, esi */
  ecx = esi;
/* 1005a2b: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 1005a2f: nop  */
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_1004afd(void) {
  LOAD_REGS();
L_1004afd: /* 1004afd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1004b00: /* 1004b00: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1004b03: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1004b05: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 1004b09: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004b0c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1004b0d: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1004b11: jne 0x1004b00 */
  if (!zf) goto L_1004b00;
L_1004b13: /* 1004b13: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 1004b1a: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004b1d: jle 0x1004b7b */
  if ((zf || sf != of)) goto L_1004b7b;
L_1004b1f: /* 1004b1f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1004b23: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 1004b2a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1004b2b: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 1004b2f: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004b36: mov eax, esi */
  eax = esi;
/* 1004b38: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1004b3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1004b40: /* 1004b40: add eax, dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004b44: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1004b46: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1004b4a: jle 0x1004b73 */
  if ((zf || sf != of)) goto L_1004b73;
L_1004b4c: /* 1004b4c: mov ecx, edi */
  ecx = edi;
/* 1004b4e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1004b50: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
L_1004b54: /* 1004b54: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1004b57: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1004b59: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004b60: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004b62: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1004b66: jne 0x1004b54 */
  if (!zf) goto L_1004b54;
L_1004b68: /* 1004b68: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004b6f: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
L_1004b73: /* 1004b73: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 1004b77: jne 0x1004b40 */
  if (!zf) goto L_1004b40;
L_1004b79: /* 1004b79: jmp 0x1004b82 */
  goto L_1004b82;
L_1004b7b: /* 1004b7b: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
L_1004b82: /* 1004b82: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1004b86: mov eax, ebx */
  eax = ebx;
/* 1004b88: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1004b8a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004b8c: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 1004b93: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 1004b97: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 1004b9f: jle 0x1004cb9 */
  if ((zf || sf != of)) goto L_1004cb9;
L_1004ba5: /* 1004ba5: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ba8: jle 0x1004e8d */
  if ((zf || sf != of)) goto L_1004e8d;
L_1004bae: /* 1004bae: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1004bb5: lea eax, [edx + eax*4 - 4] */
  eax = (uint32_t)(edx + eax*4 + 0xfffffffcu);
/* 1004bb9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1004bbd: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 1004bc4: mov edx, esi */
  edx = esi;
/* 1004bc6: mov eax, edi */
  eax = edi;
/* 1004bc8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1004bca: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004bcc: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 1004bd3: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1004bd6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1004bd7: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1004bdb: jmp 0x1004be1 */
  goto L_1004be1;
L_1004bdd: /* 1004bdd: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
L_1004be1: /* 1004be1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1004be5: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1004be8: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004bea: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004bec: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1004bf0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 1004bf4: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 1004bfb: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004bfd: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 1004c04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1004c06: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1004c0a: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1004c0e: jle 0x1004caa */
  if ((zf || sf != of)) goto L_1004caa;
L_1004c14: /* 1004c14: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 1004c18: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1004c1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1004c20: /* 1004c20: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 1004c27: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004c29: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004c2b: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004c2e: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1004c32: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1004c36: jle 0x1004c9c */
  if ((zf || sf != of)) goto L_1004c9c;
L_1004c38: /* 1004c38: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1004c3c: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1004c40: mov edx, esi */
  edx = esi;
/* 1004c42: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004c44: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1004c48: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1004c4b: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1004c4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1004c4e: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
L_1004c52: /* 1004c52: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 1004c55: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1004c59: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 1004c5c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004c5f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1004c62: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004c65: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004c67: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004c6a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1004c6e: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1004c72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004c74: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 1004c77: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 1004c7b: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004c7e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004c81: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004c83: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004c85: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004c87: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1004c89: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 1004c8d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1004c8e: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1004c92: jne 0x1004c52 */
  if (!zf) goto L_1004c52;
L_1004c94: /* 1004c94: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1004c98: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
L_1004c9c: /* 1004c9c: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1004ca0: jne 0x1004c20 */
  if (!zf) goto L_1004c20;
L_1004ca6: /* 1004ca6: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
L_1004caa: /* 1004caa: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1004cae: jne 0x1004bdd */
  if (!zf) goto L_1004bdd;
L_1004cb4: /* 1004cb4: jmp 0x1004e89 */
  goto L_1004e89;
L_1004cb9: /* 1004cb9: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004cbc: jle 0x1004e8d */
  if ((zf || sf != of)) goto L_1004e8d;
L_1004cc2: /* 1004cc2: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 1004cc9: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 1004ccc: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1004cd0: lea ecx, [edx + eax*4 - 4] */
  ecx = (uint32_t)(edx + eax*4 + 0xfffffffcu);
/* 1004cd4: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 1004cdb: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1004cdc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
L_1004ce0: /* 1004ce0: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004ce7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004ce9: add dword ptr [esp + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 1004ced: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1004cf1: add edx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004cf5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004cf7: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004cfa: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1004cfe: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1004d02: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1004d06: jle 0x1004e7f */
  if ((zf || sf != of)) goto L_1004e7f;
L_1004d0c: /* 1004d0c: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1004d10: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1004d12: lea eax, [edx + ebp + 1] */
  eax = (uint32_t)(edx + ebp + 0x1u);
/* 1004d16: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1004d19: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1004d1b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1004d1c: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1004d20: jmp 0x1004d30 */
  goto L_1004d30;
L_1004d22: /* 1004d22: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1004d26: jmp 0x1004d30 */
  goto L_1004d30;
L_1004d30: /* 1004d30: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004d37: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004d3a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004d3d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004d40: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1004d44: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1004d4c: jl 0x1004e08 */
  if ((sf != of)) goto L_1004e08;
L_1004d52: /* 1004d52: mov edx, 3 */
  edx = 0x3u;
L_1004d57: /* 1004d57: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d5a: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1004d5e: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004d62: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004d65: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004d67: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 1004d6b: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d6e: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1004d75: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004d78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004d7a: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004d7e: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d81: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d84: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004d88: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004d8a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004d8c: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004d8f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004d91: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d94: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004d98: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004d9a: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004d9f: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004da3: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004da6: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004da9: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004dad: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004daf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004db1: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004db4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004db6: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004db9: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004dbd: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004dbf: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004dc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004dc4: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004dc8: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004dcb: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004dce: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004dd2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004dd4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004dd6: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004dd9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004ddb: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004dde: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004de2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004de4: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004de7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004de9: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004ded: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004df0: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004df3: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004df7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004df9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004dfb: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004dfe: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004e00: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004e02: jl 0x1004d57 */
  if ((sf != of)) goto L_1004d57;
L_1004e08: /* 1004e08: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 1004e0c: cmp edx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004e13: jge 0x1004e66 */
  if ((sf == of)) goto L_1004e66;
L_1004e15: /* 1004e15: mov edx, esi */
  edx = esi;
/* 1004e17: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004e19: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1004e1d: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004e24: sub edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004e28: lea ebp, [esi + eax*4] */
  ebp = (uint32_t)(esi + eax*4);
/* 1004e2b: lea eax, [edi + eax*4 - 4] */
  eax = (uint32_t)(edi + eax*4 + 0xfffffffcu);
/* 1004e2f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
L_1004e33: /* 1004e33: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004e35: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1004e39: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004e3c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004e3e: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1004e41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004e43: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 1004e46: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004e4d: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004e50: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004e53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004e55: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004e57: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004e59: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004e5b: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1004e5e: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004e60: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1004e64: jne 0x1004e33 */
  if (!zf) goto L_1004e33;
L_1004e66: /* 1004e66: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 1004e6a: jne 0x1004d22 */
  if (!zf) goto L_1004d22;
L_1004e70: /* 1004e70: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 1004e74: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1004e78: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
L_1004e7f: /* 1004e7f: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1004e83: jne 0x1004ce0 */
  if (!zf) goto L_1004ce0;
L_1004e89: /* 1004e89: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
L_1004e8d: /* 1004e8d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1004e91: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 1004e98: imul edx, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  edx = (uint32_t)r;
  }
/* 1004ea0: cmp dword ptr [esp + 0x64], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x64u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ea4: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 1004eac: jge 0x10050c5 */
  if ((sf == of)) goto L_10050c5;
L_1004eb2: /* 1004eb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1004eb6: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004eb9: jle 0x1005219 */
  if ((zf || sf != of)) goto L_1005219;
L_1004ebf: /* 1004ebf: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1004ec3: mov eax, ecx */
  eax = ecx;
/* 1004ec5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1004ec6: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 1004eca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1004ed0: /* 1004ed0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1004ed4: add dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1004ed8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1004edc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004ede: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004ee0: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ee3: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1004ee7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1004eeb: jle 0x10050b6 */
  if ((zf || sf != of)) goto L_10050b6;
L_1004ef1: /* 1004ef1: sub edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004ef5: lea eax, [ebx - 3] */
  eax = (uint32_t)(ebx + 0xfffffffdu);
/* 1004ef8: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1004efa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1004efb: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 1004eff: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 1004f03: jmp 0x1004f10 */
  goto L_1004f10;
L_1004f05: /* 1004f05: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 1004f09: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 1004f0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1004f10: /* 1004f10: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f13: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1004f17: mov eax, ecx */
  eax = ecx;
/* 1004f19: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f1b: cmp dword ptr [esp + 0x90], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x90u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004f23: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1004f2b: jl 0x100500b */
  if ((sf != of)) goto L_100500b;
L_1004f31: /* 1004f31: mov edx, 3 */
  edx = 0x3u;
L_1004f36: /* 1004f36: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f38: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f3c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004f3e: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f42: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1004f46: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004f49: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 1004f4d: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f51: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1004f58: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f5b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004f5e: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004f61: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f65: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f68: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004f6b: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004f6e: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f72: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f76: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004f78: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004f7b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f7d: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f81: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f85: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f89: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f8c: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004f8f: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f93: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f96: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004f99: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004f9c: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fa0: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fa4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004fa6: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004fa9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004fab: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004faf: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fb3: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fb7: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fba: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004fbd: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fc1: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fc4: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004fc7: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004fca: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fce: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fd2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004fd4: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004fd7: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004fd9: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004fdb: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fdf: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fe3: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fe7: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fea: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004fed: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004ff1: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004ff4: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004ff7: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004ffa: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004ffe: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005002: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1005005: jl 0x1004f36 */
  if ((sf != of)) goto L_1004f36;
L_100500b: /* 100500b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100500f: cmp edx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005016: jge 0x10050a1 */
  if ((sf == of)) goto L_10050a1;
L_100501c: /* 100501c: lea ebp, [edi + ecx*4] */
  ebp = (uint32_t)(edi + ecx*4);
/* 100501f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 1005023: lea ebp, [edi + eax*4] */
  ebp = (uint32_t)(edi + eax*4);
/* 1005026: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 100502a: mov ebp, edi */
  ebp = edi;
/* 100502c: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 100502e: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1005032: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005039: sub ebp, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 100503d: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005044: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 1005048: lea ecx, [esi + ecx*4 - 4] */
  ecx = (uint32_t)(esi + ecx*4 + 0xfffffffcu);
/* 100504c: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
L_1005050: /* 1005050: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 1005054: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 1005057: fadd dword ptr [ecx + edx] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx)));
/* 100505a: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100505c: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 1005060: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1005064: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005066: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005068: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100506a: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 100506e: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1005072: fstp dword ptr [eax + ebp] */
  WF32((uint32_t)(eax + ebp), ST0); FPOP();
/* 1005075: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1005078: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 100507b: fstp dword ptr [ecx + ebp] */
  WF32((uint32_t)(ecx + ebp), ST0); FPOP();
/* 100507e: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 1005082: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1005085: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 1005088: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100508b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 100508f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005091: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005093: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005096: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 100509a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 100509b: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 100509f: jne 0x1005050 */
  if (!zf) goto L_1005050;
L_10050a1: /* 10050a1: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10050a5: jne 0x1004f05 */
  if (!zf) goto L_1004f05;
L_10050ab: /* 10050ab: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 10050b2: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
L_10050b6: /* 10050b6: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 10050ba: jne 0x1004ed0 */
  if (!zf) goto L_1004ed0;
L_10050c0: /* 10050c0: jmp 0x1005219 */
  goto L_1005219;
L_10050c5: /* 10050c5: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10050ca: jle 0x1005219 */
  if ((zf || sf != of)) goto L_1005219;
L_10050d0: /* 10050d0: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 10050d3: lea edx, [esi + edx*4 - 4] */
  edx = (uint32_t)(esi + edx*4 + 0xfffffffcu);
/* 10050d7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 10050db: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10050df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 10050e3: lea eax, [esi - 4] */
  eax = (uint32_t)(esi + 0xfffffffcu);
/* 10050e6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10050e7: mov ecx, edi */
  ecx = edi;
/* 10050e9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10050ed: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
L_10050f1: /* 10050f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10050f5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10050f9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10050fc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10050fe: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1005102: sub dword ptr [esp + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005106: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 100510a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100510c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100510e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005115: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005117: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100511b: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 100511f: jle 0x100520f */
  if ((zf || sf != of)) goto L_100520f;
L_1005125: /* 1005125: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005129: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 100512d: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005131: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1005135: mov ecx, edx */
  ecx = edx;
/* 1005137: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 100513e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1005142: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005146: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 100514a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1005150: /* 1005150: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005153: jle 0x10051d3 */
  if ((zf || sf != of)) goto L_10051d3;
L_1005155: /* 1005155: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1005159: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 100515d: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1005161: mov edx, edi */
  edx = edi;
/* 1005163: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005165: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1005169: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 100516c: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 100516e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100516f: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 1005173: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1005177: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100517b: jmp 0x1005180 */
  goto L_1005180;
L_1005180: /* 1005180: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1005184: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 1005187: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 100518a: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100518d: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1005191: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1005195: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005198: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100519b: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100519e: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10051a2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 10051a6: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 10051a9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051ac: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 10051af: fstp dword ptr [ecx + edx] */
  WF32((uint32_t)(ecx + edx), ST0); FPOP();
/* 10051b2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10051b6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051b9: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10051bc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051be: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10051c2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10051c4: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 10051c6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051c8: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 10051cc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10051cd: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 10051d1: jne 0x1005180 */
  if (!zf) goto L_1005180;
L_10051d3: /* 10051d3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10051d7: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10051db: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10051e2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051e4: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10051e8: add dword ptr [esp + 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10051ec: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 10051f0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10051f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051f4: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 10051f8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10051f9: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 10051fd: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005201: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 1005205: jne 0x1005150 */
  if (!zf) goto L_1005150;
L_100520b: /* 100520b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
L_100520f: /* 100520f: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1005213: jne 0x10050f1 */
  if (!zf) goto L_10050f1;
L_1005219: /* 1005219: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100521b: jle 0x1005244 */
  if ((zf || sf != of)) goto L_1005244;
L_100521d: /* 100521d: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005224: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 100522b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100522d: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
L_1005231: /* 1005231: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1005234: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1005236: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 100523a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100523d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100523e: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005242: jne 0x1005231 */
  if (!zf) goto L_1005231;
L_1005244: /* 1005244: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 100524b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 100524f: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 1005252: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005255: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005259: jle 0x1005368 */
  if ((zf || sf != of)) goto L_1005368;
L_100525f: /* 100525f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005263: mov eax, ebx */
  eax = ebx;
/* 1005265: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005267: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005269: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 100526a: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100526e: jmp 0x1005278 */
  goto L_1005278;
L_1005270: /* 1005270: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005274: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
L_1005278: /* 1005278: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 100527c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100527e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005280: cmp dword ptr [esp + 0x90], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x90u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005288: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100528c: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1005290: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005298: jl 0x1005310 */
  if ((sf != of)) goto L_1005310;
L_100529a: /* 100529a: mov edx, 3 */
  edx = 0x3u;
L_100529f: /* 100529f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052a1: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052a4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052a6: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052a9: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 10052ad: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10052b0: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 10052b4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052b7: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 10052be: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10052c4: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052c7: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052c9: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052cc: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052ce: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052d1: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052d4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052d7: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052da: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052dd: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052df: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052e2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052e4: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052e7: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052ea: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052ed: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052f0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052f3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052f5: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052f8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052fa: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10052fc: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052ff: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005302: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1005305: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005308: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 100530b: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 100530e: jl 0x100529f */
  if ((sf != of)) goto L_100529f;
L_1005310: /* 1005310: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005317: cmp dword ptr [esp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100531b: jge 0x1005353 */
  if ((sf == of)) goto L_1005353;
L_100531d: /* 100531d: mov ebp, edi */
  ebp = edi;
/* 100531f: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1005321: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1005325: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1005329: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 100532c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 100532f: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_1005331: /* 1005331: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 1005338: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 100533b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100533d: fadd dword ptr [eax + ebp] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp)));
/* 1005340: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005342: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005343: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1005347: fstp dword ptr [eax + ebp] */
  WF32((uint32_t)(eax + ebp), ST0); FPOP();
/* 100534a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100534c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 100534e: fstp dword ptr [ecx + ebp] */
  WF32((uint32_t)(ecx + ebp), ST0); FPOP();
/* 1005351: jne 0x1005331 */
  if (!zf) goto L_1005331;
L_1005353: /* 1005353: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1005357: jne 0x1005270 */
  if (!zf) goto L_1005270;
L_100535d: /* 100535d: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005364: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
L_1005368: /* 1005368: xor eax, eax */
  eax = 0;
/* 100536a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 100536e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1005372: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 1005379: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 100537a: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 100537d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1005381: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005385: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005388: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* 1005390: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 1005394: jle 0x1005837 */
  if ((zf || sf != of)) goto L_1005837;
L_100539a: /* 100539a: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 10053a1: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
/* 10053a4: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053ac: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10053b3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10053b4: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 10053b8: lea edx, [edx + edi*4 + 8] */
  edx = (uint32_t)(edx + edi*4 + 0x8u);
/* 10053bc: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 10053c0: jmp 0x10053d0 */
  goto L_10053d0;
L_10053c2: /* 10053c2: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 10053c6: jmp 0x10053d0 */
  goto L_10053d0;
L_10053d0: /* 10053d0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 10053d4: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 10053d8: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 10053dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10053e0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10053e4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10053e6: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 10053ea: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053ee: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053f2: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10053f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10053f6: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10053f8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10053fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1005400: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1005404: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005408: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 100540c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1005410: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 1005414: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005418: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100541c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100541e: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1005422: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 1005426: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100542a: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100542e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005430: xor ecx, ecx */
  ecx = 0;
/* 1005432: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005435: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005439: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100543d: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 1005441: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005445: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005449: jl 0x1005540 */
  if ((sf != of)) goto L_1005540;
L_100544f: /* 100544f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005456: mov eax, edx */
  eax = edx;
/* 1005458: lea edx, [ecx + edi*4 + 8] */
  edx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100545c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1005460: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005464: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1005467: lea ecx, [ecx + ebp*4 + 8] */
  ecx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 100546b: mov dword ptr [esp + 0x50], 3 */
  W32((uint32_t)(esp + 0x50u), 0x3u);
/* 1005473: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_1005477: /* 1005477: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 100547b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100547f: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005482: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005486: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005489: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100548c: fadd dword ptr [edx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffe8u)));
/* 100548f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005492: fstp dword ptr [edi - 0x18] */
  WF32((uint32_t)(edi + 0xffffffe8u), ST0); FPOP();
/* 1005495: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 1005499: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100549c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054a0: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 10054a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054a7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054aa: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ae: fadd dword ptr [edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffecu)));
/* 10054b1: fstp dword ptr [edi - 0x14] */
  WF32((uint32_t)(edi + 0xffffffecu), ST0); FPOP();
/* 10054b4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054b8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054bb: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054bf: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10054c2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054c6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054c8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054cc: fadd dword ptr [edx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff0u)));
/* 10054cf: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 10054d2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054d8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054dc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10054df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054e6: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ea: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 10054ed: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 10054f0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054f4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054f7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10054fb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10054fe: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005502: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005506: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1005509: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100550c: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005510: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1005515: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100551a: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 100551f: add dword ptr [esp + 0x40], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005524: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1005529: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 100552e: cmp dword ptr [esp + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005532: jl 0x1005477 */
  if ((sf != of)) goto L_1005477;
L_1005538: /* 1005538: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 100553c: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1005540: /* 1005540: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005542: jge 0x10055d9 */
  if ((sf == of)) goto L_10055d9;
L_1005548: /* 1005548: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 100554c: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005553: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005556: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 100555a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 100555e: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 1005565: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005568: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 100556c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005570: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005577: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 100557a: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1005581: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005585: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1005589: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 100558c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1005590: /* 1005590: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1005594: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 100559b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 100559d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10055a0: fadd dword ptr [edi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4)));
/* 10055a3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055a7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055a9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055ad: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10055b1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 10055b3: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 10055b7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055b9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055c0: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10055c4: add dword ptr [esp + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 10055c9: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055cd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10055d1: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055d3: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 10055d7: jl 0x1005590 */
  if ((sf != of)) goto L_1005590;
L_10055d9: /* 10055d9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10055dd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10055e1: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 10055e5: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10055e9: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055ee: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10055f2: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10055f6: jle 0x1005829 */
  if ((zf || sf != of)) goto L_1005829;
L_10055fc: /* 10055fc: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005603: lea edx, [ecx + ebp*4 + 8] */
  edx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 1005607: lea ecx, [ecx + edi*4 + 8] */
  ecx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100560b: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 100560f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005613: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005616: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 100561a: jmp 0x1005630 */
  goto L_1005630;
L_100561c: /* 100561c: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 1005620: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 1005627: jmp 0x1005630 */
  goto L_1005630;
L_1005630: /* 1005630: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 1005634: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1005638: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 100563c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100563e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005642: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005646: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 100564a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 100564e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005650: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005654: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1005656: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005658: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100565a: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100565d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 1005661: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 1005668: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100566c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1005670: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 1005674: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1005678: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 100567c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1005680: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1005684: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1005688: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 100568c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005690: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005692: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1005696: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100569a: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 100569e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10056a2: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 10056a6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10056ae: jl 0x100579a */
  if ((sf != of)) goto L_100579a;
L_10056b4: /* 10056b4: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 10056b8: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10056bc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10056c0: mov dword ptr [esp + 0x40], 3 */
  W32((uint32_t)(esp + 0x40u), 0x3u);
L_10056c8: /* 10056c8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10056cc: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 10056d0: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 10056d3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056d6: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10056da: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 10056de: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10056e1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056e4: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 10056e8: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10056ec: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10056ef: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10056f6: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 10056fa: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 10056fd: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005701: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005704: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005708: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100570b: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 100570f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005712: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 1005716: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 1005719: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 100571d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005721: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005724: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005727: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 100572b: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 100572f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005732: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1005735: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005738: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100573b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100573e: cmp ebp, dword ptr [esp + 0x94] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005745: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1005748: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100574c: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 100574f: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1005752: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1005755: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005759: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 100575c: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 100575f: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1005762: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005766: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1005769: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 100576c: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 100576f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005773: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 1005776: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005779: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 100577c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005780: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1005783: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1005786: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1005789: jl 0x10056c8 */
  if ((sf != of)) goto L_10056c8;
L_100578f: /* 100578f: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005796: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100579a: /* 100579a: cmp dword ptr [esp + 0x30], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100579e: jge 0x100581f */
  if ((sf == of)) goto L_100581f;
L_10057a0: /* 10057a0: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 10057a7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10057ab: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 10057b2: lea ecx, [edi + edx*4] */
  ecx = (uint32_t)(edi + edx*4);
/* 10057b5: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057b9: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 10057bc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10057c4: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 10057c7: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057cb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 10057ce: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10057d2: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 10057d6: mov eax, ebp */
  eax = ebp;
/* 10057d8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10057da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10057e0: /* 10057e0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057e4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10057e8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 10057ea: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057ee: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10057f1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057f5: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 10057f7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10057fa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10057fd: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 1005800: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005804: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005807: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 100580b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100580e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100580f: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005812: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1005816: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1005819: jne 0x10057e0 */
  if (!zf) goto L_10057e0;
L_100581b: /* 100581b: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100581f: /* 100581f: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005823: jne 0x100561c */
  if (!zf) goto L_100561c;
L_1005829: /* 1005829: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 100582d: jne 0x10053c2 */
  if (!zf) goto L_10053c2;
L_1005833: /* 1005833: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_1005837: /* 1005837: xor edx, edx */
  edx = 0;
/* 1005839: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100583c: jle 0x100591f */
  if ((zf || sf != of)) goto L_100591f;
L_1005842: /* 1005842: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005849: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100584d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005850: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1005851: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 1005855: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 100585c: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1005860: jmp 0x1005870 */
  goto L_1005870;
L_1005862: /* 1005862: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005866: jmp 0x1005870 */
  goto L_1005870;
L_1005870: /* 1005870: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005874: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005876: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 100587d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005881: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005883: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1005887: xor edx, edx */
  edx = 0;
/* 1005889: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100588c: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005890: jl 0x10058f2 */
  if ((sf != of)) goto L_10058f2;
L_1005892: /* 1005892: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1005896: mov edi, 3 */
  edi = 0x3u;
/* 100589b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_100589e: /* 100589e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 10058a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058a4: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10058a7: mov dword ptr [esp + 0x80], edi */
  W32((uint32_t)(esp + 0x80u), edi);
/* 10058ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10058b2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058b5: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10058b8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10058bc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10058bf: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 10058c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10058c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10058cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10058cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10058d2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10058d7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10058da: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10058dd: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10058e0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 10058e3: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10058e6: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10058e9: jl 0x100589e */
  if ((sf != of)) goto L_100589e;
L_10058eb: /* 10058eb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_10058f2: /* 10058f2: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058f4: jge 0x1005915 */
  if ((sf == of)) goto L_1005915;
L_10058f6: /* 10058f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 10058fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1005901: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
L_1005904: /* 1005904: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1005906: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005909: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100590c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100590d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100590f: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005913: jl 0x1005904 */
  if ((sf != of)) goto L_1005904;
L_1005915: /* 1005915: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 1005919: jne 0x1005862 */
  if (!zf) goto L_1005862;
L_100591f: /* 100591f: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005926: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005928: jge 0x1005987 */
  if ((sf == of)) goto L_1005987;
L_100592a: /* 100592a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100592c: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_1005932: /* 1005932: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005939: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100593b: mov edx, esi */
  edx = esi;
/* 100593d: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005944: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
L_1005948: /* 1005948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100594a: jle 0x1005977 */
  if ((zf || sf != of)) goto L_1005977;
L_100594c: /* 100594c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100594e: mov eax, edx */
  eax = edx;
L_1005950: /* 1005950: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 1005952: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 1005954: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100595b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100595d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005961: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005964: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005966: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005967: jne 0x1005950 */
  if (!zf) goto L_1005950;
L_1005969: /* 1005969: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005970: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
L_1005977: /* 1005977: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100597b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100597e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100597f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005983: jne 0x1005948 */
  if (!zf) goto L_1005948;
L_1005985: /* 1005985: jmp 0x10059f2 */
  goto L_10059f2;
L_1005987: /* 1005987: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005989: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_100598b: /* 100598b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100598f: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005996: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 100599d: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 10059a4: mov ebp, esi */
  ebp = esi;
/* 10059a6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059aa: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10059ae: mov edi, edi */
  edi = edi;
L_10059b0: /* 10059b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10059b2: jle 0x10059cd */
  if ((zf || sf != of)) goto L_10059cd;
L_10059b4: /* 10059b4: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059b8: mov eax, ebp */
  eax = ebp;
/* 10059ba: mov edx, ebx */
  edx = ebx;
/* 10059bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10059c0: /* 10059c0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10059c2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 10059c4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10059c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10059cb: jne 0x10059c0 */
  if (!zf) goto L_10059c0;
L_10059cd: /* 10059cd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059d1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10059d8: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10059df: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10059e1: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 10059e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10059e8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059ec: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10059f0: jne 0x10059b0 */
  if (!zf) goto L_10059b0;
L_10059f2: /* 10059f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10059f6: imul ebp, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  ebp = (uint32_t)r;
  }
/* 10059fe: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005a03: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005a06: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1005a0a: jle 0x1005aa7 */
  if ((zf || sf != of)) goto L_1005aa7;
L_1005a10: /* 1005a10: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1005a14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005a17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1005a18: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005a1f: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 1005a26: lea edx, [esi + ebp*4] */
  edx = (uint32_t)(esi + ebp*4);
/* 1005a29: mov ecx, esi */
  ecx = esi;
/* 1005a2b: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 1005a2f: nop  */
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_1004d28(void) {
  LOAD_REGS();
  goto L_1004d28;
L_1004ce0: /* 1004ce0: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004ce7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004ce9: add dword ptr [esp + 0x48], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x48u), r);
  }
/* 1004ced: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1004cf1: add edx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004cf5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004cf7: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004cfa: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1004cfe: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1004d02: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1004d06: jle 0x1004e7f */
  if ((zf || sf != of)) goto L_1004e7f;
L_1004d0c: /* 1004d0c: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1004d10: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1004d12: lea eax, [edx + ebp + 1] */
  eax = (uint32_t)(edx + ebp + 0x1u);
/* 1004d16: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1004d19: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1004d1b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1004d1c: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1004d20: jmp 0x1004d30 */
  goto L_1004d30;
L_1004d22: /* 1004d22: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1004d26: jmp 0x1004d30 */
  goto L_1004d30;
L_1004d28: /* 1004d28: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 1004d2f: nop  */
L_1004d30: /* 1004d30: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004d37: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004d3a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004d3d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004d40: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1004d44: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1004d4c: jl 0x1004e08 */
  if ((sf != of)) goto L_1004e08;
L_1004d52: /* 1004d52: mov edx, 3 */
  edx = 0x3u;
L_1004d57: /* 1004d57: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d5a: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1004d5e: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004d62: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004d65: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004d67: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 1004d6b: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d6e: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1004d75: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004d78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004d7a: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004d7e: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d81: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d84: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004d88: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004d8a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004d8c: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004d8f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004d91: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004d94: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004d98: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004d9a: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004d9d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004d9f: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004da3: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004da6: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004da9: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004dad: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004daf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004db1: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004db4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004db6: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004db9: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004dbd: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004dbf: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004dc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004dc4: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004dc8: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004dcb: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004dce: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004dd2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004dd4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004dd6: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004dd9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004ddb: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004dde: fmul dword ptr [edi + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4 + 0xfffffffcu)));
/* 1004de2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004de4: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004de7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004de9: fstp dword ptr [esi + eax*4 - 4] */
  WF32((uint32_t)(esi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004ded: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004df0: fmul dword ptr [edi + eax*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*4)));
/* 1004df3: fld dword ptr [edi + eax*4 - 4] */
  { double v = F32((uint32_t)(edi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004df7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004df9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004dfb: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 1004dfe: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004e00: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004e02: jl 0x1004d57 */
  if ((sf != of)) goto L_1004d57;
L_1004e08: /* 1004e08: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 1004e0c: cmp edx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004e13: jge 0x1004e66 */
  if ((sf == of)) goto L_1004e66;
L_1004e15: /* 1004e15: mov edx, esi */
  edx = esi;
/* 1004e17: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004e19: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1004e1d: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1004e24: sub edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004e28: lea ebp, [esi + eax*4] */
  ebp = (uint32_t)(esi + eax*4);
/* 1004e2b: lea eax, [edi + eax*4 - 4] */
  eax = (uint32_t)(edi + eax*4 + 0xfffffffcu);
/* 1004e2f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
L_1004e33: /* 1004e33: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1004e35: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 1004e39: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004e3c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004e3e: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1004e41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1004e43: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 1004e46: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1004e4d: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1004e50: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 1004e53: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1004e55: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004e57: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 1004e59: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1004e5b: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1004e5e: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004e60: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1004e64: jne 0x1004e33 */
  if (!zf) goto L_1004e33;
L_1004e66: /* 1004e66: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 1004e6a: jne 0x1004d22 */
  if (!zf) goto L_1004d22;
L_1004e70: /* 1004e70: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 1004e74: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1004e78: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
L_1004e7f: /* 1004e7f: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 1004e83: jne 0x1004ce0 */
  if (!zf) goto L_1004ce0;
L_1004e89: /* 1004e89: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 1004e8d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 1004e91: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 1004e98: imul edx, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  edx = (uint32_t)r;
  }
/* 1004ea0: cmp dword ptr [esp + 0x64], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x64u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ea4: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 1004eac: jge 0x10050c5 */
  if ((sf == of)) goto L_10050c5;
L_1004eb2: /* 1004eb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1004eb6: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004eb9: jle 0x1005219 */
  if ((zf || sf != of)) goto L_1005219;
L_1004ebf: /* 1004ebf: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 1004ec3: mov eax, ecx */
  eax = ecx;
/* 1004ec5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1004ec6: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 1004eca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1004ed0: /* 1004ed0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1004ed4: add dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 1004ed8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 1004edc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004ede: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004ee0: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004ee3: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1004ee7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1004eeb: jle 0x10050b6 */
  if ((zf || sf != of)) goto L_10050b6;
L_1004ef1: /* 1004ef1: sub edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1004ef5: lea eax, [ebx - 3] */
  eax = (uint32_t)(ebx + 0xfffffffdu);
/* 1004ef8: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 1004efa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 1004efb: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
/* 1004eff: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 1004f03: jmp 0x1004f10 */
  goto L_1004f10;
L_1004f05: /* 1004f05: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 1004f09: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 1004f0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1004f10: /* 1004f10: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f13: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1004f17: mov eax, ecx */
  eax = ecx;
/* 1004f19: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f1b: cmp dword ptr [esp + 0x90], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x90u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004f23: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1004f2b: jl 0x100500b */
  if ((sf != of)) goto L_100500b;
L_1004f31: /* 1004f31: mov edx, 3 */
  edx = 0x3u;
L_1004f36: /* 1004f36: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f38: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f3c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004f3e: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f42: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1004f46: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1004f49: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 1004f4d: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f51: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1004f58: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f5b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1004f5e: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004f61: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f65: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f68: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004f6b: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004f6e: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f72: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f76: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004f78: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004f7b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004f7d: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004f81: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004f85: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f89: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f8c: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004f8f: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004f93: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004f96: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004f99: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004f9c: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fa0: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fa4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004fa6: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004fa9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004fab: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004faf: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fb3: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fb7: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fba: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004fbd: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fc1: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fc4: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004fc7: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004fca: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fce: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fd2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1004fd4: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1004fd7: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1004fd9: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1004fdb: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004fdf: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1004fe3: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* 1004fe7: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004fea: fsub dword ptr [esi + ecx*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4)));
/* 1004fed: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* 1004ff1: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 1004ff4: fadd dword ptr [esi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + ecx*4)));
/* 1004ff7: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1004ffa: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1004ffe: fsub dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005002: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 1005005: jl 0x1004f36 */
  if ((sf != of)) goto L_1004f36;
L_100500b: /* 100500b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 100500f: cmp edx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005016: jge 0x10050a1 */
  if ((sf == of)) goto L_10050a1;
L_100501c: /* 100501c: lea ebp, [edi + ecx*4] */
  ebp = (uint32_t)(edi + ecx*4);
/* 100501f: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 1005023: lea ebp, [edi + eax*4] */
  ebp = (uint32_t)(edi + eax*4);
/* 1005026: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 100502a: mov ebp, edi */
  ebp = edi;
/* 100502c: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 100502e: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1005032: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005039: sub ebp, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 100503d: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005044: lea eax, [esi + eax*4 - 4] */
  eax = (uint32_t)(esi + eax*4 + 0xfffffffcu);
/* 1005048: lea ecx, [esi + ecx*4 - 4] */
  ecx = (uint32_t)(esi + ecx*4 + 0xfffffffcu);
/* 100504c: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
L_1005050: /* 1005050: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 1005054: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* 1005057: fadd dword ptr [ecx + edx] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx)));
/* 100505a: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100505c: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 1005060: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 1005064: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005066: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005068: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 100506a: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 100506e: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1005072: fstp dword ptr [eax + ebp] */
  WF32((uint32_t)(eax + ebp), ST0); FPOP();
/* 1005075: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1005078: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 100507b: fstp dword ptr [ecx + ebp] */
  WF32((uint32_t)(ecx + ebp), ST0); FPOP();
/* 100507e: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 1005082: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 1005085: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 1005088: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 100508b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 100508f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005091: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005093: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005096: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 100509a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 100509b: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 100509f: jne 0x1005050 */
  if (!zf) goto L_1005050;
L_10050a1: /* 10050a1: dec dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x5cu), r);
  }
/* 10050a5: jne 0x1004f05 */
  if (!zf) goto L_1004f05;
L_10050ab: /* 10050ab: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 10050b2: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
L_10050b6: /* 10050b6: dec dword ptr [esp + 0x58] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x58u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x58u), r);
  }
/* 10050ba: jne 0x1004ed0 */
  if (!zf) goto L_1004ed0;
L_10050c0: /* 10050c0: jmp 0x1005219 */
  goto L_1005219;
L_10050c5: /* 10050c5: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10050ca: jle 0x1005219 */
  if ((zf || sf != of)) goto L_1005219;
L_10050d0: /* 10050d0: lea eax, [edi + edx*4] */
  eax = (uint32_t)(edi + edx*4);
/* 10050d3: lea edx, [esi + edx*4 - 4] */
  edx = (uint32_t)(esi + edx*4 + 0xfffffffcu);
/* 10050d7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 10050db: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 10050df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 10050e3: lea eax, [esi - 4] */
  eax = (uint32_t)(esi + 0xfffffffcu);
/* 10050e6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 10050e7: mov ecx, edi */
  ecx = edi;
/* 10050e9: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 10050ed: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
L_10050f1: /* 10050f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10050f5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10050f9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10050fc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10050fe: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1005102: sub dword ptr [esp + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005106: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 100510a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100510c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100510e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005115: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005117: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100511b: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 100511f: jle 0x100520f */
  if ((zf || sf != of)) goto L_100520f;
L_1005125: /* 1005125: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005129: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 100512d: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005131: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1005135: mov ecx, edx */
  ecx = edx;
/* 1005137: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 100513e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1005142: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005146: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 100514a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1005150: /* 1005150: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005153: jle 0x10051d3 */
  if ((zf || sf != of)) goto L_10051d3;
L_1005155: /* 1005155: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1005159: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 100515d: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1005161: mov edx, edi */
  edx = edi;
/* 1005163: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005165: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1005169: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 100516c: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 100516e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100516f: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 1005173: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1005177: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100517b: jmp 0x1005180 */
  goto L_1005180;
L_1005180: /* 1005180: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1005184: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 1005187: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 100518a: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100518d: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1005191: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1005195: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005198: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100519b: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100519e: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10051a2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 10051a6: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 10051a9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051ac: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 10051af: fstp dword ptr [ecx + edx] */
  WF32((uint32_t)(ecx + edx), ST0); FPOP();
/* 10051b2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10051b6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051b9: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10051bc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051be: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10051c2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10051c4: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 10051c6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051c8: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 10051cc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10051cd: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 10051d1: jne 0x1005180 */
  if (!zf) goto L_1005180;
L_10051d3: /* 10051d3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10051d7: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10051db: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10051e2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051e4: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10051e8: add dword ptr [esp + 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10051ec: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 10051f0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10051f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051f4: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 10051f8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10051f9: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 10051fd: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005201: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 1005205: jne 0x1005150 */
  if (!zf) goto L_1005150;
L_100520b: /* 100520b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
L_100520f: /* 100520f: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1005213: jne 0x10050f1 */
  if (!zf) goto L_10050f1;
L_1005219: /* 1005219: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100521b: jle 0x1005244 */
  if ((zf || sf != of)) goto L_1005244;
L_100521d: /* 100521d: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005224: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 100522b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100522d: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
L_1005231: /* 1005231: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1005234: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1005236: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 100523a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100523d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100523e: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005242: jne 0x1005231 */
  if (!zf) goto L_1005231;
L_1005244: /* 1005244: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 100524b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 100524f: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 1005252: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005255: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005259: jle 0x1005368 */
  if ((zf || sf != of)) goto L_1005368;
L_100525f: /* 100525f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005263: mov eax, ebx */
  eax = ebx;
/* 1005265: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005267: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005269: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 100526a: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100526e: jmp 0x1005278 */
  goto L_1005278;
L_1005270: /* 1005270: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005274: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
L_1005278: /* 1005278: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 100527c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100527e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005280: cmp dword ptr [esp + 0x90], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x90u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005288: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100528c: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1005290: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005298: jl 0x1005310 */
  if ((sf != of)) goto L_1005310;
L_100529a: /* 100529a: mov edx, 3 */
  edx = 0x3u;
L_100529f: /* 100529f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052a1: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052a4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052a6: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052a9: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 10052ad: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10052b0: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 10052b4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052b7: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 10052be: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10052c4: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052c7: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052c9: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052cc: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052ce: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052d1: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052d4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052d7: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052da: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052dd: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052df: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052e2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052e4: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052e7: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052ea: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052ed: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052f0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052f3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052f5: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052f8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052fa: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10052fc: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052ff: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005302: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1005305: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005308: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 100530b: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 100530e: jl 0x100529f */
  if ((sf != of)) goto L_100529f;
L_1005310: /* 1005310: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005317: cmp dword ptr [esp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100531b: jge 0x1005353 */
  if ((sf == of)) goto L_1005353;
L_100531d: /* 100531d: mov ebp, edi */
  ebp = edi;
/* 100531f: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1005321: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1005325: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1005329: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 100532c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 100532f: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_1005331: /* 1005331: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 1005338: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 100533b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100533d: fadd dword ptr [eax + ebp] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp)));
/* 1005340: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005342: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005343: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1005347: fstp dword ptr [eax + ebp] */
  WF32((uint32_t)(eax + ebp), ST0); FPOP();
/* 100534a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100534c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 100534e: fstp dword ptr [ecx + ebp] */
  WF32((uint32_t)(ecx + ebp), ST0); FPOP();
/* 1005351: jne 0x1005331 */
  if (!zf) goto L_1005331;
L_1005353: /* 1005353: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1005357: jne 0x1005270 */
  if (!zf) goto L_1005270;
L_100535d: /* 100535d: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005364: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
L_1005368: /* 1005368: xor eax, eax */
  eax = 0;
/* 100536a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 100536e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1005372: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 1005379: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 100537a: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 100537d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1005381: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005385: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005388: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* 1005390: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 1005394: jle 0x1005837 */
  if ((zf || sf != of)) goto L_1005837;
L_100539a: /* 100539a: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 10053a1: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
/* 10053a4: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053ac: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10053b3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10053b4: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 10053b8: lea edx, [edx + edi*4 + 8] */
  edx = (uint32_t)(edx + edi*4 + 0x8u);
/* 10053bc: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 10053c0: jmp 0x10053d0 */
  goto L_10053d0;
L_10053c2: /* 10053c2: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 10053c6: jmp 0x10053d0 */
  goto L_10053d0;
L_10053d0: /* 10053d0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 10053d4: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 10053d8: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 10053dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10053e0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10053e4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10053e6: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 10053ea: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053ee: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053f2: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10053f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10053f6: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10053f8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10053fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1005400: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1005404: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005408: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 100540c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1005410: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 1005414: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005418: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100541c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100541e: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1005422: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 1005426: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100542a: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100542e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005430: xor ecx, ecx */
  ecx = 0;
/* 1005432: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005435: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005439: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100543d: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 1005441: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005445: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005449: jl 0x1005540 */
  if ((sf != of)) goto L_1005540;
L_100544f: /* 100544f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005456: mov eax, edx */
  eax = edx;
/* 1005458: lea edx, [ecx + edi*4 + 8] */
  edx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100545c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1005460: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005464: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1005467: lea ecx, [ecx + ebp*4 + 8] */
  ecx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 100546b: mov dword ptr [esp + 0x50], 3 */
  W32((uint32_t)(esp + 0x50u), 0x3u);
/* 1005473: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_1005477: /* 1005477: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 100547b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100547f: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005482: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005486: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005489: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100548c: fadd dword ptr [edx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffe8u)));
/* 100548f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005492: fstp dword ptr [edi - 0x18] */
  WF32((uint32_t)(edi + 0xffffffe8u), ST0); FPOP();
/* 1005495: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 1005499: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100549c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054a0: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 10054a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054a7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054aa: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ae: fadd dword ptr [edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffecu)));
/* 10054b1: fstp dword ptr [edi - 0x14] */
  WF32((uint32_t)(edi + 0xffffffecu), ST0); FPOP();
/* 10054b4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054b8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054bb: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054bf: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10054c2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054c6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054c8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054cc: fadd dword ptr [edx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff0u)));
/* 10054cf: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 10054d2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054d8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054dc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10054df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054e6: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ea: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 10054ed: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 10054f0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054f4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054f7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10054fb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10054fe: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005502: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005506: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1005509: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100550c: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005510: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1005515: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100551a: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 100551f: add dword ptr [esp + 0x40], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005524: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1005529: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 100552e: cmp dword ptr [esp + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005532: jl 0x1005477 */
  if ((sf != of)) goto L_1005477;
L_1005538: /* 1005538: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 100553c: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1005540: /* 1005540: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005542: jge 0x10055d9 */
  if ((sf == of)) goto L_10055d9;
L_1005548: /* 1005548: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 100554c: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005553: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005556: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 100555a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 100555e: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 1005565: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005568: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 100556c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005570: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005577: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 100557a: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1005581: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005585: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1005589: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 100558c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1005590: /* 1005590: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1005594: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 100559b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 100559d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10055a0: fadd dword ptr [edi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4)));
/* 10055a3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055a7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055a9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055ad: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10055b1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 10055b3: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 10055b7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055b9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055c0: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10055c4: add dword ptr [esp + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 10055c9: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055cd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10055d1: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055d3: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 10055d7: jl 0x1005590 */
  if ((sf != of)) goto L_1005590;
L_10055d9: /* 10055d9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10055dd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10055e1: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 10055e5: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10055e9: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055ee: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10055f2: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10055f6: jle 0x1005829 */
  if ((zf || sf != of)) goto L_1005829;
L_10055fc: /* 10055fc: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005603: lea edx, [ecx + ebp*4 + 8] */
  edx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 1005607: lea ecx, [ecx + edi*4 + 8] */
  ecx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100560b: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 100560f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005613: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005616: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 100561a: jmp 0x1005630 */
  goto L_1005630;
L_100561c: /* 100561c: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 1005620: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 1005627: jmp 0x1005630 */
  goto L_1005630;
L_1005630: /* 1005630: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 1005634: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1005638: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 100563c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100563e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005642: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005646: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 100564a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 100564e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005650: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005654: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1005656: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005658: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100565a: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100565d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 1005661: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 1005668: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100566c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1005670: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 1005674: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1005678: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 100567c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1005680: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1005684: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1005688: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 100568c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005690: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005692: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1005696: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100569a: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 100569e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10056a2: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 10056a6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10056ae: jl 0x100579a */
  if ((sf != of)) goto L_100579a;
L_10056b4: /* 10056b4: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 10056b8: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10056bc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10056c0: mov dword ptr [esp + 0x40], 3 */
  W32((uint32_t)(esp + 0x40u), 0x3u);
L_10056c8: /* 10056c8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10056cc: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 10056d0: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 10056d3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056d6: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10056da: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 10056de: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10056e1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056e4: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 10056e8: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10056ec: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10056ef: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10056f6: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 10056fa: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 10056fd: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005701: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005704: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005708: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100570b: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 100570f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005712: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 1005716: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 1005719: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 100571d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005721: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005724: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005727: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 100572b: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 100572f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005732: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1005735: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005738: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100573b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100573e: cmp ebp, dword ptr [esp + 0x94] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005745: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1005748: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100574c: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 100574f: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1005752: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1005755: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005759: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 100575c: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 100575f: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1005762: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005766: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1005769: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 100576c: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 100576f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005773: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 1005776: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005779: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 100577c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005780: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1005783: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1005786: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1005789: jl 0x10056c8 */
  if ((sf != of)) goto L_10056c8;
L_100578f: /* 100578f: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005796: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100579a: /* 100579a: cmp dword ptr [esp + 0x30], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100579e: jge 0x100581f */
  if ((sf == of)) goto L_100581f;
L_10057a0: /* 10057a0: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 10057a7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10057ab: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 10057b2: lea ecx, [edi + edx*4] */
  ecx = (uint32_t)(edi + edx*4);
/* 10057b5: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057b9: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 10057bc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10057c4: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 10057c7: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057cb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 10057ce: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10057d2: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 10057d6: mov eax, ebp */
  eax = ebp;
/* 10057d8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10057da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10057e0: /* 10057e0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057e4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10057e8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 10057ea: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057ee: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10057f1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057f5: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 10057f7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10057fa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10057fd: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 1005800: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005804: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005807: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 100580b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100580e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100580f: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005812: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1005816: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1005819: jne 0x10057e0 */
  if (!zf) goto L_10057e0;
L_100581b: /* 100581b: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100581f: /* 100581f: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005823: jne 0x100561c */
  if (!zf) goto L_100561c;
L_1005829: /* 1005829: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 100582d: jne 0x10053c2 */
  if (!zf) goto L_10053c2;
L_1005833: /* 1005833: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_1005837: /* 1005837: xor edx, edx */
  edx = 0;
/* 1005839: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100583c: jle 0x100591f */
  if ((zf || sf != of)) goto L_100591f;
L_1005842: /* 1005842: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005849: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100584d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005850: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1005851: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 1005855: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 100585c: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1005860: jmp 0x1005870 */
  goto L_1005870;
L_1005862: /* 1005862: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005866: jmp 0x1005870 */
  goto L_1005870;
L_1005870: /* 1005870: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005874: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005876: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 100587d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005881: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005883: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1005887: xor edx, edx */
  edx = 0;
/* 1005889: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100588c: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005890: jl 0x10058f2 */
  if ((sf != of)) goto L_10058f2;
L_1005892: /* 1005892: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1005896: mov edi, 3 */
  edi = 0x3u;
/* 100589b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_100589e: /* 100589e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 10058a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058a4: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10058a7: mov dword ptr [esp + 0x80], edi */
  W32((uint32_t)(esp + 0x80u), edi);
/* 10058ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10058b2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058b5: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10058b8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10058bc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10058bf: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 10058c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10058c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10058cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10058cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10058d2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10058d7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10058da: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10058dd: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10058e0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 10058e3: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10058e6: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10058e9: jl 0x100589e */
  if ((sf != of)) goto L_100589e;
L_10058eb: /* 10058eb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_10058f2: /* 10058f2: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058f4: jge 0x1005915 */
  if ((sf == of)) goto L_1005915;
L_10058f6: /* 10058f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 10058fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1005901: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
L_1005904: /* 1005904: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1005906: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005909: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100590c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100590d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100590f: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005913: jl 0x1005904 */
  if ((sf != of)) goto L_1005904;
L_1005915: /* 1005915: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 1005919: jne 0x1005862 */
  if (!zf) goto L_1005862;
L_100591f: /* 100591f: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005926: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005928: jge 0x1005987 */
  if ((sf == of)) goto L_1005987;
L_100592a: /* 100592a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100592c: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_1005932: /* 1005932: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005939: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100593b: mov edx, esi */
  edx = esi;
/* 100593d: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005944: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
L_1005948: /* 1005948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100594a: jle 0x1005977 */
  if ((zf || sf != of)) goto L_1005977;
L_100594c: /* 100594c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100594e: mov eax, edx */
  eax = edx;
L_1005950: /* 1005950: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 1005952: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 1005954: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100595b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100595d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005961: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005964: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005966: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005967: jne 0x1005950 */
  if (!zf) goto L_1005950;
L_1005969: /* 1005969: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005970: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
L_1005977: /* 1005977: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100597b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100597e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100597f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005983: jne 0x1005948 */
  if (!zf) goto L_1005948;
L_1005985: /* 1005985: jmp 0x10059f2 */
  goto L_10059f2;
L_1005987: /* 1005987: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005989: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_100598b: /* 100598b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100598f: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005996: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 100599d: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 10059a4: mov ebp, esi */
  ebp = esi;
/* 10059a6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059aa: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10059ae: mov edi, edi */
  edi = edi;
L_10059b0: /* 10059b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10059b2: jle 0x10059cd */
  if ((zf || sf != of)) goto L_10059cd;
L_10059b4: /* 10059b4: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059b8: mov eax, ebp */
  eax = ebp;
/* 10059ba: mov edx, ebx */
  edx = ebx;
/* 10059bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10059c0: /* 10059c0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10059c2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 10059c4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10059c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10059cb: jne 0x10059c0 */
  if (!zf) goto L_10059c0;
L_10059cd: /* 10059cd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059d1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10059d8: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10059df: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10059e1: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 10059e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10059e8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059ec: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10059f0: jne 0x10059b0 */
  if (!zf) goto L_10059b0;
L_10059f2: /* 10059f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10059f6: imul ebp, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  ebp = (uint32_t)r;
  }
/* 10059fe: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005a03: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005a06: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1005a0a: jle 0x1005aa7 */
  if ((zf || sf != of)) goto L_1005aa7;
L_1005a10: /* 1005a10: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1005a14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005a17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1005a18: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005a1f: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 1005a26: lea edx, [esi + ebp*4] */
  edx = (uint32_t)(esi + ebp*4);
/* 1005a29: mov ecx, esi */
  ecx = esi;
/* 1005a2b: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 1005a2f: nop  */
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_100517d(void) {
  LOAD_REGS();
  goto L_100517d;
L_10050f1: /* 10050f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10050f5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 10050f9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10050fc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10050fe: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 1005102: sub dword ptr [esp + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005106: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 100510a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100510c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100510e: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005115: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005117: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 100511b: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 100511f: jle 0x100520f */
  if ((zf || sf != of)) goto L_100520f;
L_1005125: /* 1005125: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005129: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 100512d: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005131: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 1005135: mov ecx, edx */
  ecx = edx;
/* 1005137: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 100513e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 1005142: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005146: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 100514a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1005150: /* 1005150: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005153: jle 0x10051d3 */
  if ((zf || sf != of)) goto L_10051d3;
L_1005155: /* 1005155: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 1005159: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 100515d: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 1005161: mov edx, edi */
  edx = edi;
/* 1005163: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005165: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 1005169: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 100516c: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 100516e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100516f: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 1005173: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 1005177: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100517b: jmp 0x1005180 */
  goto L_1005180;
L_100517d: /* 100517d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_1005180: /* 1005180: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 1005184: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 1005187: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 100518a: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100518d: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 1005191: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 1005195: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005198: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100519b: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100519e: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10051a2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 10051a6: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 10051a9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051ac: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 10051af: fstp dword ptr [ecx + edx] */
  WF32((uint32_t)(ecx + edx), ST0); FPOP();
/* 10051b2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10051b6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 10051b9: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 10051bc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051be: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 10051c2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 10051c4: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 10051c6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 10051c8: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 10051cc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10051cd: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 10051d1: jne 0x1005180 */
  if (!zf) goto L_1005180;
L_10051d3: /* 10051d3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10051d7: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 10051db: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10051e2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051e4: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 10051e8: add dword ptr [esp + 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 10051ec: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 10051f0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10051f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10051f4: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 10051f8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10051f9: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 10051fd: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 1005201: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 1005205: jne 0x1005150 */
  if (!zf) goto L_1005150;
L_100520b: /* 100520b: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
L_100520f: /* 100520f: dec dword ptr [esp + 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x54u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x54u), r);
  }
/* 1005213: jne 0x10050f1 */
  if (!zf) goto L_10050f1;
L_1005219: /* 1005219: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100521b: jle 0x1005244 */
  if ((zf || sf != of)) goto L_1005244;
L_100521d: /* 100521d: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005224: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 100522b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100522d: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
L_1005231: /* 1005231: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 1005234: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 1005236: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 100523a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100523d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 100523e: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005242: jne 0x1005231 */
  if (!zf) goto L_1005231;
L_1005244: /* 1005244: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 100524b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 100524f: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 1005252: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005255: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005259: jle 0x1005368 */
  if ((zf || sf != of)) goto L_1005368;
L_100525f: /* 100525f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005263: mov eax, ebx */
  eax = ebx;
/* 1005265: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005267: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005269: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 100526a: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 100526e: jmp 0x1005278 */
  goto L_1005278;
L_1005270: /* 1005270: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005274: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
L_1005278: /* 1005278: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 100527c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100527e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005280: cmp dword ptr [esp + 0x90], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x90u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005288: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 100528c: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 1005290: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005298: jl 0x1005310 */
  if ((sf != of)) goto L_1005310;
L_100529a: /* 100529a: mov edx, 3 */
  edx = 0x3u;
L_100529f: /* 100529f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052a1: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052a4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052a6: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052a9: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 10052ad: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10052b0: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 10052b4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052b7: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 10052be: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052c1: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10052c4: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052c7: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052c9: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052cc: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052ce: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052d1: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052d4: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052d7: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052da: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052dd: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052df: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052e2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052e4: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052e7: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 10052ea: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 10052ed: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052f0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 10052f3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10052f5: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 10052f8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10052fa: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10052fc: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 10052ff: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005302: fstp dword ptr [edi + eax*4] */
  WF32((uint32_t)(edi + eax*4), ST0); FPOP();
/* 1005305: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005308: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 100530b: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
/* 100530e: jl 0x100529f */
  if ((sf != of)) goto L_100529f;
L_1005310: /* 1005310: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005317: cmp dword ptr [esp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100531b: jge 0x1005353 */
  if ((sf == of)) goto L_1005353;
L_100531d: /* 100531d: mov ebp, edi */
  ebp = edi;
/* 100531f: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 1005321: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 1005325: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 1005329: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 100532c: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 100532f: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_1005331: /* 1005331: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 1005338: fld dword ptr [ecx + ebp] */
  { double v = F32((uint32_t)(ecx + ebp)); FPUSH(v); }
/* 100533b: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100533d: fadd dword ptr [eax + ebp] */
  ST0 = ST0 + (F32((uint32_t)(eax + ebp)));
/* 1005340: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005342: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005343: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 1005347: fstp dword ptr [eax + ebp] */
  WF32((uint32_t)(eax + ebp), ST0); FPOP();
/* 100534a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 100534c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 100534e: fstp dword ptr [ecx + ebp] */
  WF32((uint32_t)(ecx + ebp), ST0); FPOP();
/* 1005351: jne 0x1005331 */
  if (!zf) goto L_1005331;
L_1005353: /* 1005353: dec dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x60u), r);
  }
/* 1005357: jne 0x1005270 */
  if (!zf) goto L_1005270;
L_100535d: /* 100535d: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005364: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
L_1005368: /* 1005368: xor eax, eax */
  eax = 0;
/* 100536a: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 100536e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 1005372: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 1005379: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 100537a: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 100537d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 1005381: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005385: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005388: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* 1005390: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 1005394: jle 0x1005837 */
  if ((zf || sf != of)) goto L_1005837;
L_100539a: /* 100539a: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 10053a1: lea edi, [edx + 8] */
  edi = (uint32_t)(edx + 0x8u);
/* 10053a4: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053ac: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 10053b3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10053b4: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 10053b8: lea edx, [edx + edi*4 + 8] */
  edx = (uint32_t)(edx + edi*4 + 0x8u);
/* 10053bc: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 10053c0: jmp 0x10053d0 */
  goto L_10053d0;
L_10053c2: /* 10053c2: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 10053c6: jmp 0x10053d0 */
  goto L_10053d0;
L_10053d0: /* 10053d0: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 10053d4: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 10053d8: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 10053dc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 10053e0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10053e4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10053e6: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 10053ea: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 10053ee: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10053f2: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10053f4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 10053f6: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10053f8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10053fc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 1005400: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 1005404: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005408: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 100540c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 1005410: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 1005414: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005418: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 100541c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100541e: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 1005422: mov dword ptr [esp + 0x4c], edi */
  W32((uint32_t)(esp + 0x4cu), edi);
/* 1005426: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 100542a: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 100542e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005430: xor ecx, ecx */
  ecx = 0;
/* 1005432: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005435: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005439: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 100543d: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 1005441: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005445: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005449: jl 0x1005540 */
  if ((sf != of)) goto L_1005540;
L_100544f: /* 100544f: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005456: mov eax, edx */
  eax = edx;
/* 1005458: lea edx, [ecx + edi*4 + 8] */
  edx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100545c: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 1005460: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005464: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 1005467: lea ecx, [ecx + ebp*4 + 8] */
  ecx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 100546b: mov dword ptr [esp + 0x50], 3 */
  W32((uint32_t)(esp + 0x50u), 0x3u);
/* 1005473: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_1005477: /* 1005477: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 100547b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 100547f: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005482: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 1005486: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005489: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100548c: fadd dword ptr [edx - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffe8u)));
/* 100548f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005492: fstp dword ptr [edi - 0x18] */
  WF32((uint32_t)(edi + 0xffffffe8u), ST0); FPOP();
/* 1005495: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 1005499: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100549c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054a0: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 10054a3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054a7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054aa: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ae: fadd dword ptr [edx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffecu)));
/* 10054b1: fstp dword ptr [edi - 0x14] */
  WF32((uint32_t)(edi + 0xffffffecu), ST0); FPOP();
/* 10054b4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054b8: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 10054bb: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054bf: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10054c2: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054c6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054c8: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054cc: fadd dword ptr [edx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff0u)));
/* 10054cf: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 10054d2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054d6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 10054d8: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 10054dc: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10054df: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 10054e3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054e6: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 10054ea: fadd dword ptr [edx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffff4u)));
/* 10054ed: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 10054f0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10054f4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 10054f7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 10054fb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10054fe: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 1005502: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005506: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 1005509: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100550c: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005510: add dword ptr [esp + 0x28], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 1005515: add dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 100551a: add dword ptr [esp + 0x38], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x38u), r);
  }
/* 100551f: add dword ptr [esp + 0x40], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x40u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x40u), r);
  }
/* 1005524: add dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 1005529: add dword ptr [esp + 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 100552e: cmp dword ptr [esp + 0x50], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005532: jl 0x1005477 */
  if ((sf != of)) goto L_1005477;
L_1005538: /* 1005538: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 100553c: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_1005540: /* 1005540: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005542: jge 0x10055d9 */
  if ((sf == of)) goto L_10055d9;
L_1005548: /* 1005548: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 100554c: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005553: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005556: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 100555a: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 100555e: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 1005565: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 1005568: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 100556c: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005570: mov edx, dword ptr [esp + 0xa0] */
  edx = R32((uint32_t)(esp + 0xa0u));
/* 1005577: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 100557a: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 1005581: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 1005585: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 1005589: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 100558c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1005590: /* 1005590: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 1005594: mov edi, dword ptr [esp + 0x9c] */
  edi = R32((uint32_t)(esp + 0x9cu));
/* 100559b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 100559d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10055a0: fadd dword ptr [edi + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4)));
/* 10055a3: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055a7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055a9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055ad: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 10055b1: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 10055b3: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 10055b7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 10055b9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10055bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055c0: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 10055c4: add dword ptr [esp + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x44u), r);
  }
/* 10055c9: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 10055cd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10055d0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 10055d1: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055d3: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 10055d7: jl 0x1005590 */
  if ((sf != of)) goto L_1005590;
L_10055d9: /* 10055d9: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 10055dd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 10055e1: mov edi, dword ptr [esp + 0x70] */
  edi = R32((uint32_t)(esp + 0x70u));
/* 10055e5: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 10055e9: cmp dword ptr [esp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10055ee: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 10055f2: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 10055f6: jle 0x1005829 */
  if ((zf || sf != of)) goto L_1005829;
L_10055fc: /* 10055fc: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 1005603: lea edx, [ecx + ebp*4 + 8] */
  edx = (uint32_t)(ecx + ebp*4 + 0x8u);
/* 1005607: lea ecx, [ecx + edi*4 + 8] */
  ecx = (uint32_t)(ecx + edi*4 + 0x8u);
/* 100560b: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 100560f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1005613: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005616: mov dword ptr [esp + 0x78], ecx */
  W32((uint32_t)(esp + 0x78u), ecx);
/* 100561a: jmp 0x1005630 */
  goto L_1005630;
L_100561c: /* 100561c: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 1005620: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 1005627: jmp 0x1005630 */
  goto L_1005630;
L_1005630: /* 1005630: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 1005634: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 1005638: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 100563c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100563e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005642: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 1005646: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 100564a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 100564e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005650: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 1005654: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 1005656: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005658: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100565a: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100565d: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 1005661: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 1005668: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100566c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 1005670: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 1005674: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 1005678: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 100567c: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 1005680: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 1005684: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 1005688: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 100568c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 1005690: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1005692: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 1005696: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 100569a: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 100569e: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 10056a2: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 10056a6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 10056ae: jl 0x100579a */
  if ((sf != of)) goto L_100579a;
L_10056b4: /* 10056b4: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 10056b8: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 10056bc: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 10056c0: mov dword ptr [esp + 0x40], 3 */
  W32((uint32_t)(esp + 0x40u), 0x3u);
L_10056c8: /* 10056c8: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10056cc: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 10056d0: fmul dword ptr [edx - 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff8u)));
/* 10056d3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056d6: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 10056da: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 10056de: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10056e1: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056e4: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 10056e8: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 10056ec: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10056ef: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10056f2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 10056f6: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 10056fa: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 10056fd: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005701: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005704: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 1005708: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 100570b: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 100570f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005712: mov dword ptr [esp + 0x5c], ebp */
  W32((uint32_t)(esp + 0x5cu), ebp);
/* 1005716: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 1005719: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 100571d: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005721: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005724: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005727: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 100572b: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 100572f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005732: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 1005735: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005738: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100573b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 100573e: cmp ebp, dword ptr [esp + 0x94] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005745: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 1005748: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 100574c: fmul dword ptr [edi - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xffffffecu)));
/* 100574f: fadd dword ptr [ecx - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffecu)));
/* 1005752: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* 1005755: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005759: fmul dword ptr [edx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff0u)));
/* 100575c: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 100575f: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 1005762: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005766: fmul dword ptr [edi - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff0u)));
/* 1005769: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 100576c: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* 100576f: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 1005773: fmul dword ptr [edx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffff4u)));
/* 1005776: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005779: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 100577c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005780: fmul dword ptr [edi - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff4u)));
/* 1005783: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* 1005786: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* 1005789: jl 0x10056c8 */
  if ((sf != of)) goto L_10056c8;
L_100578f: /* 100578f: mov ebp, dword ptr [esp + 0x94] */
  ebp = R32((uint32_t)(esp + 0x94u));
/* 1005796: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100579a: /* 100579a: cmp dword ptr [esp + 0x30], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100579e: jge 0x100581f */
  if ((sf == of)) goto L_100581f;
L_10057a0: /* 10057a0: mov edi, dword ptr [esp + 0xa0] */
  edi = R32((uint32_t)(esp + 0xa0u));
/* 10057a7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 10057ab: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 10057b2: lea ecx, [edi + edx*4] */
  ecx = (uint32_t)(edi + edx*4);
/* 10057b5: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057b9: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 10057bc: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057c0: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 10057c4: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 10057c7: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057cb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 10057ce: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 10057d2: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 10057d6: mov eax, ebp */
  eax = ebp;
/* 10057d8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10057da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10057e0: /* 10057e0: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 10057e4: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 10057e8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 10057ea: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 10057ee: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10057f1: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 10057f5: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 10057f7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10057fa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10057fd: fstp dword ptr [edi - 4] */
  WF32((uint32_t)(edi + 0xfffffffcu), ST0); FPOP();
/* 1005800: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 1005804: fmul dword ptr [edx - 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xfffffffcu)));
/* 1005807: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 100580b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100580e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100580f: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005812: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 1005816: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* 1005819: jne 0x10057e0 */
  if (!zf) goto L_10057e0;
L_100581b: /* 100581b: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
L_100581f: /* 100581f: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005823: jne 0x100561c */
  if (!zf) goto L_100561c;
L_1005829: /* 1005829: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 100582d: jne 0x10053c2 */
  if (!zf) goto L_10053c2;
L_1005833: /* 1005833: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_1005837: /* 1005837: xor edx, edx */
  edx = 0;
/* 1005839: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100583c: jle 0x100591f */
  if ((zf || sf != of)) goto L_100591f;
L_1005842: /* 1005842: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 1005849: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 100584d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005850: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 1005851: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 1005855: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 100585c: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 1005860: jmp 0x1005870 */
  goto L_1005870;
L_1005862: /* 1005862: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 1005866: jmp 0x1005870 */
  goto L_1005870;
L_1005870: /* 1005870: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005874: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005876: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 100587d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 1005881: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005883: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 1005887: xor edx, edx */
  edx = 0;
/* 1005889: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100588c: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005890: jl 0x10058f2 */
  if ((sf != of)) goto L_10058f2;
L_1005892: /* 1005892: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 1005896: mov edi, 3 */
  edi = 0x3u;
/* 100589b: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_100589e: /* 100589e: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 10058a1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058a4: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* 10058a7: mov dword ptr [esp + 0x80], edi */
  W32((uint32_t)(esp + 0x80u), edi);
/* 10058ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10058b2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10058b5: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 10058b8: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10058bc: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 10058bf: mov edi, dword ptr [esp + 0x80] */
  edi = R32((uint32_t)(esp + 0x80u));
/* 10058c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 10058c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10058cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10058cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10058d2: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 10058d7: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 10058da: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* 10058dd: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 10058e0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 10058e3: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 10058e6: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* 10058e9: jl 0x100589e */
  if ((sf != of)) goto L_100589e;
L_10058eb: /* 10058eb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
L_10058f2: /* 10058f2: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10058f4: jge 0x1005915 */
  if ((sf == of)) goto L_1005915;
L_10058f6: /* 10058f6: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* 10058fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 1005901: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
L_1005904: /* 1005904: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1005906: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005909: fadd dword ptr [eax + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edx*4)));
/* 100590c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100590d: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 100590f: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005913: jl 0x1005904 */
  if ((sf != of)) goto L_1005904;
L_1005915: /* 1005915: dec dword ptr [esp + 0x7c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x7cu), r);
  }
/* 1005919: jne 0x1005862 */
  if (!zf) goto L_1005862;
L_100591f: /* 100591f: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005926: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005928: jge 0x1005987 */
  if ((sf == of)) goto L_1005987;
L_100592a: /* 100592a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100592c: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_1005932: /* 1005932: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005939: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 100593b: mov edx, esi */
  edx = esi;
/* 100593d: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005944: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
L_1005948: /* 1005948: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 100594a: jle 0x1005977 */
  if ((zf || sf != of)) goto L_1005977;
L_100594c: /* 100594c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100594e: mov eax, edx */
  eax = edx;
L_1005950: /* 1005950: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 1005952: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 1005954: lea ebp, [ebx*4] */
  ebp = (uint32_t)(ebx*4);
/* 100595b: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 100595d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005961: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005964: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005966: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005967: jne 0x1005950 */
  if (!zf) goto L_1005950;
L_1005969: /* 1005969: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005970: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
L_1005977: /* 1005977: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 100597b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100597e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 100597f: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005983: jne 0x1005948 */
  if (!zf) goto L_1005948;
L_1005985: /* 1005985: jmp 0x10059f2 */
  goto L_10059f2;
L_1005987: /* 1005987: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005989: jle 0x10059f2 */
  if ((zf || sf != of)) goto L_10059f2;
L_100598b: /* 100598b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 100598f: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 1005996: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 100599d: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 10059a4: mov ebp, esi */
  ebp = esi;
/* 10059a6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059aa: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 10059ae: mov edi, edi */
  edi = edi;
L_10059b0: /* 10059b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10059b2: jle 0x10059cd */
  if ((zf || sf != of)) goto L_10059cd;
L_10059b4: /* 10059b4: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059b8: mov eax, ebp */
  eax = ebp;
/* 10059ba: mov edx, ebx */
  edx = ebx;
/* 10059bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_10059c0: /* 10059c0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 10059c2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 10059c4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10059c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 10059cb: jne 0x10059c0 */
  if (!zf) goto L_10059c0;
L_10059cd: /* 10059cd: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 10059d1: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 10059d8: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 10059df: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10059e1: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 10059e5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10059e7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 10059e8: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 10059ec: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 10059f0: jne 0x10059b0 */
  if (!zf) goto L_10059b0;
L_10059f2: /* 10059f2: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 10059f6: imul ebp, dword ptr [esp + 0x8c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8cu)));
  ebp = (uint32_t)r;
  }
/* 10059fe: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005a03: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005a06: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 1005a0a: jle 0x1005aa7 */
  if ((zf || sf != of)) goto L_1005aa7;
L_1005a10: /* 1005a10: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 1005a14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005a17: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 1005a18: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005a1f: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 1005a26: lea edx, [esi + ebp*4] */
  edx = (uint32_t)(esi + ebp*4);
/* 1005a29: mov ecx, esi */
  ecx = esi;
/* 1005a2b: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 1005a2f: nop  */
L_1005a30: /* 1005a30: add eax, dword ptr [esp + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a37: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 1005a3b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005a3e: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a40: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 1005a42: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005a49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005a4b: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 1005a4f: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 1005a53: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 1005a57: jle 0x1005aa1 */
  if ((zf || sf != of)) goto L_1005aa1;
L_1005a59: /* 1005a59: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005a60: lea edi, [ebx*4] */
  edi = (uint32_t)(ebx*4);
/* 1005a67: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a6b: jmp 0x1005a70 */
  goto L_1005a70;
L_1005a70: /* 1005a70: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 1005a72: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 1005a75: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 1005a77: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 1005a79: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005a7d: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 1005a80: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005a82: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005a86: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005a88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005a8a: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 1005a8b: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005a8f: jne 0x1005a70 */
  if (!zf) goto L_1005a70;
L_1005a91: /* 1005a91: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 1005a95: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 1005a99: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 1005a9d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
L_1005aa1: /* 1005aa1: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005aa5: jne 0x1005a30 */
  if (!zf) goto L_1005a30;
L_1005aa7: /* 1005aa7: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1005aaa: je 0x1005eb7 */
  if (zf) goto L_1005eb7;
L_1005ab0: /* 1005ab0: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 1005ab4: cmp ecx, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005abb: jge 0x1005d59 */
  if ((sf == of)) goto L_1005d59;
L_1005ac1: /* 1005ac1: mov eax, ebx */
  eax = ebx;
/* 1005ac3: mov ecx, ebp */
  ecx = ebp;
/* 1005ac5: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 1005ac9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 1005acb: xor edi, edi */
  edi = 0;
/* 1005acd: xor edx, edx */
  edx = 0;
/* 1005acf: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005ad2: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005ad8: /* 1005ad8: lea ebp, [eax + ebx - 2] */
  ebp = (uint32_t)(eax + ebx + 0xfffffffeu);
/* 1005adc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005ae0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 1005ae1: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
L_1005ae5: /* 1005ae5: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 1005ae8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005aea: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005aec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005af0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005af2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005af4: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005af7: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 1005afb: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005aff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 1005b03: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 1005b07: jle 0x1005d48 */
  if ((zf || sf != of)) goto L_1005d48;
L_1005b0d: /* 1005b0d: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 1005b10: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005b12: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005b14: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005b17: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005b19: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005b1a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005b1e: mov dword ptr [esp + 0x64], ebp */
  W32((uint32_t)(esp + 0x64u), ebp);
/* 1005b22: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 1005b26: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 1005b2d: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 1005b31: jmp 0x1005b40 */
  goto L_1005b40;
L_1005b33: /* 1005b33: mov ecx, dword ptr [esp + 0x80] */
  ecx = R32((uint32_t)(esp + 0x80u));
/* 1005b3a: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 1005b3e: mov edi, edi */
  edi = edi;
L_1005b40: /* 1005b40: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005b47: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005b4b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005b4d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005b4f: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005b52: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005b56: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 1005b5e: jl 0x1005c91 */
  if ((sf != of)) goto L_1005c91;
L_1005b64: /* 1005b64: mov dword ptr [esp + 0x7c], 3 */
  W32((uint32_t)(esp + 0x7cu), 0x3u);
/* 1005b6c: jmp 0x1005b72 */
  goto L_1005b72;
L_1005b6e: /* 1005b6e: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_1005b72: /* 1005b72: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b76: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005b7d: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005b81: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b85: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005b89: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005b8d: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005b91: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b94: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005b97: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005b9b: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005b9e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005ba0: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005ba3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005ba5: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005ba9: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bad: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bb1: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bb3: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bb7: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bb9: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bc0: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bc4: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bc8: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005bcc: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005bd0: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bd3: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005bd6: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005bda: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005bdd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005bdf: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005be2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005be4: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005be8: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005bec: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005bf0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005bf2: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005bf6: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005bf8: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005bff: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c03: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c07: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c0b: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c0f: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c12: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c15: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c19: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c1c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c1e: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c21: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c23: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c27: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c2b: fld dword ptr [esi + ecx*4 - 4] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c2f: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c31: fadd dword ptr [esi + eax*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4 + 0xfffffffcu)));
/* 1005c35: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c37: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005c3e: fstp dword ptr [ebp + edi*4 - 4] */
  WF32((uint32_t)(ebp + edi*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c42: fld dword ptr [esi + eax*4 - 4] */
  { double v = F32((uint32_t)(esi + eax*4 + 0xfffffffcu)); FPUSH(v); }
/* 1005c46: fsub dword ptr [esi + ecx*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + ecx*4 + 0xfffffffcu)));
/* 1005c4a: fstp dword ptr [ebp + edx*4 - 4] */
  WF32((uint32_t)(ebp + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 1005c4e: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c51: fadd dword ptr [esi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(esi + eax*4)));
/* 1005c54: fstp dword ptr [ebp + edi*4] */
  WF32((uint32_t)(ebp + edi*4), ST0); FPOP();
/* 1005c58: fld dword ptr [esi + ecx*4] */
  { double v = F32((uint32_t)(esi + ecx*4)); FPUSH(v); }
/* 1005c5b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005c5d: fsub dword ptr [esi + eax*4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4)));
/* 1005c60: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005c62: fstp dword ptr [ebp + edx*4] */
  WF32((uint32_t)(ebp + edx*4), ST0); FPOP();
/* 1005c66: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 1005c6a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c6c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 1005c70: add dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 1005c75: mov edi, dword ptr [esp + 0x7c] */
  edi = R32((uint32_t)(esp + 0x7cu));
/* 1005c79: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005c7b: mov ebp, dword ptr [esp + 0x90] */
  ebp = R32((uint32_t)(esp + 0x90u));
/* 1005c82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005c85: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 1005c89: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c8b: jl 0x1005b6e */
  if ((sf != of)) goto L_1005b6e;
L_1005c91: /* 1005c91: cmp dword ptr [esp + 0xc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005c95: jge 0x1005d13 */
  if ((sf == of)) goto L_1005d13;
L_1005c97: /* 1005c97: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 1005c9b: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 1005c9f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 1005ca2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 1005ca6: mov edi, dword ptr [esp + 0x98] */
  edi = R32((uint32_t)(esp + 0x98u));
/* 1005cad: lea ebp, [edi + ebp*4] */
  ebp = (uint32_t)(edi + ebp*4);
/* 1005cb0: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 1005cb3: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 1005cba: sub edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005cbe: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 1005cc1: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 1005cc4: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005cc8: jmp 0x1005cd0 */
  goto L_1005cd0;
L_1005cca: /* 1005cca: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 1005cce: mov edi, edi */
  edi = edi;
L_1005cd0: /* 1005cd0: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cd3: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cd6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1005cd9: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 1005cdc: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 1005cdf: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 1005ce2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005ce4: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 1005ce6: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 1005ce9: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 1005ced: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 1005cef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 1005cf1: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 1005cf3: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005cf5: mov ebp, dword ptr [esp + 0x7c] */
  ebp = R32((uint32_t)(esp + 0x7cu));
/* 1005cf9: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 1005cfd: add ebp, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005d01: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* 1005d08: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d0a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005d0c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1005d0d: mov dword ptr [esp + 0x7c], ebp */
  W32((uint32_t)(esp + 0x7cu), ebp);
/* 1005d11: jne 0x1005cca */
  if (!zf) goto L_1005cca;
L_1005d13: /* 1005d13: mov edi, dword ptr [esp + 0x64] */
  edi = R32((uint32_t)(esp + 0x64u));
/* 1005d17: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 1005d1b: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005d1f: sub edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1005d22: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005d25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 1005d26: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 1005d2a: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 1005d2e: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005d32: jne 0x1005b33 */
  if (!zf) goto L_1005b33;
L_1005d38: /* 1005d38: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 1005d3c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 1005d40: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 1005d44: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
L_1005d48: /* 1005d48: dec dword ptr [esp + 0x70] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x70u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x70u), r);
  }
/* 1005d4c: jne 0x1005ae5 */
  if (!zf) goto L_1005ae5;
L_1005d52: /* 1005d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005d54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005d55: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005d58: ret  */
  esp += 4; SPILL(); return;
L_1005d59: /* 1005d59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 1005d5d: mov edx, ebx */
  edx = ebx;
/* 1005d5f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 1005d61: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005d64: jle 0x1005eb7 */
  if ((zf || sf != of)) goto L_1005eb7;
L_1005d6a: /* 1005d6a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1005d6e: lea edi, [esi + ebp*4 + 8] */
  edi = (uint32_t)(esi + ebp*4 + 0x8u);
/* 1005d72: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* 1005d79: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005d7b: lea edx, [ebp + edx*4 - 8] */
  edx = (uint32_t)(ebp + edx*4 + 0xfffffff8u);
/* 1005d7f: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 1005d83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 1005d87: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 1005d8a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 1005d8d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 1005d90: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005d93: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 1005d97: lea edi, [ebp + 8] */
  edi = (uint32_t)(ebp + 0x8u);
/* 1005d9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 1005d9b: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 1005da2: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* 1005da6: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 1005daa: mov dword ptr [esp + 0x64], esi */
  W32((uint32_t)(esp + 0x64u), esi);
/* 1005dae: mov dword ptr [esp + 0x78], edx */
  W32((uint32_t)(esp + 0x78u), edx);
/* 1005db2: jmp 0x1005dc0 */
  goto L_1005dc0;
L_1005db4: /* 1005db4: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 1005dbb: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 1005dbf: nop  */
L_1005dc0: /* 1005dc0: mov edi, dword ptr [esp + 0x60] */
  edi = R32((uint32_t)(esp + 0x60u));
/* 1005dc4: mov esi, dword ptr [esp + 0x5c] */
  esi = R32((uint32_t)(esp + 0x5cu));
/* 1005dc8: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 1005dcc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005dce: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005dd0: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005dd4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005dd6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 1005dd8: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 1005ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1005de1: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 1005de5: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 1005de9: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 1005ded: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 1005df1: jle 0x1005ead */
  if ((zf || sf != of)) goto L_1005ead;
L_1005df7: /* 1005df7: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 1005dfb: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 1005e02: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 1005e06: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 1005e0a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e0e: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 1005e15: mov eax, edi */
  eax = edi;
/* 1005e17: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 1005e1b: mov ebp, esi */
  ebp = esi;
/* 1005e1d: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005e21: mov dword ptr [esp + 0x7c], edx */
  W32((uint32_t)(esp + 0x7cu), edx);
L_1005e25: /* 1005e25: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1005e28: jle 0x1005e73 */
  if ((zf || sf != of)) goto L_1005e73;
L_1005e2a: /* 1005e2a: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 1005e2e: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 1005e32: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e36: lea edx, [ebx - 3] */
  edx = (uint32_t)(ebx + 0xfffffffdu);
/* 1005e39: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 1005e3b: mov edi, ebp */
  edi = ebp;
/* 1005e3d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1005e3e: mov edi, edi */
  edi = edi;
L_1005e40: /* 1005e40: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 1005e43: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1005e46: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1005e49: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1005e4c: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e4f: sub esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 1005e52: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 1005e53: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 1005e56: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 1005e59: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* 1005e5c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 1005e5f: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e62: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e65: fstp dword ptr [edi - 8] */
  WF32((uint32_t)(edi + 0xfffffff8u), ST0); FPOP();
/* 1005e68: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 1005e6b: fsub dword ptr [ecx - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 1005e6e: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 1005e71: jne 0x1005e40 */
  if (!zf) goto L_1005e40;
L_1005e73: /* 1005e73: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 1005e77: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 1005e7b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 1005e7f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 1005e83: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1005e85: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 1005e87: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 1005e8e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1005e90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1005e92: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 1005e96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 1005e97: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 1005e9b: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 1005e9f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 1005ea3: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 1005ea7: jne 0x1005e25 */
  if (!zf) goto L_1005e25;
L_1005ead: /* 1005ead: dec dword ptr [esp + 0x78] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x78u), r);
  }
/* 1005eb1: jne 0x1005db4 */
  if (!zf) goto L_1005db4;
L_1005eb7: /* 1005eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1005eb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1005eb9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1005eba: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1005ebd: ret  */
  esp += 4; SPILL(); return;
}
