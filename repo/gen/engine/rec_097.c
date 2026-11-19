#include "recomp.h"
#include "rec_mod.h"

void f_89fcca(void) {
  LOAD_REGS();
  goto L_89fcca;
L_89fc71: /* 89fc71: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fc75: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 89fc7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89fc7f: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89fc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89fc89: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89fc8c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89fc8f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89fc91: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 89fc94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fc95: lea ecx, [esp + 0x26c] */
  ecx = (uint32_t)(esp + 0x26cu);
/* 89fc9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fc9d: mov ecx, edi */
  ecx = edi;
/* 89fc9f: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x89fca5u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 89fca5: mov esi, eax */
  esi = eax;
/* 89fca7: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fcac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fcae: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 89fcb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fcb6: xor esi, esi */
  esi = 0;
/* 89fcb8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fcba: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 89fcbe: jle 0x8a0083 */
  if ((zf || sf != of)) goto L_8a0083;
L_89fcc4: /* 89fcc4: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 89fcc8: jmp 0x89fcd0 */
  goto L_89fcd0;
L_89fcca: /* 89fcca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89fcd0: /* 89fcd0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89fcd4: mov eax, dword ptr [esi + edx + 0x30] */
  eax = R32((uint32_t)(esi + edx + 0x30u));
/* 89fcd8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fcda: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89fcde: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fce4: /* 89fce4: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 89fce7: mov edi, dword ptr [ecx + 0xf8] */
  edi = R32((uint32_t)(ecx + 0xf8u));
/* 89fced: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89fcf0: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 89fcf3: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fcf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89fcf7: jne 0x89fd3d */
  if (!zf) goto L_89fd3d;
L_89fcf9: /* 89fcf9: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fcfc: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89fcff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd05: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89fd09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd0b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd0e: jne 0x89fd86 */
  if (!zf) goto L_89fd86;
L_89fd10: /* 89fd10: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd1e: jnp 0x8a0063 */
  if (!pf) goto L_8a0063;
L_89fd24: /* 89fd24: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd27: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd2c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd2f: jp 0x89fd86 */
  if (pf) goto L_89fd86;
L_89fd31: /* 89fd31: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd34: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd37: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 89fd3b: jmp 0x89fd82 */
  goto L_89fd82;
L_89fd3d: /* 89fd3d: fld dword ptr [edx + 0x4c] */
  { double v = F32((uint32_t)(edx + 0x4cu)); FPUSH(v); }
/* 89fd40: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fd43: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd4e: jne 0x89fd7f */
  if (!zf) goto L_89fd7f;
L_89fd50: /* 89fd50: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd53: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd5b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd5e: jp 0x89fd6a */
  if (pf) goto L_89fd6a;
L_89fd60: /* 89fd60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89fd62: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89fd68: jmp 0x89fd7f */
  goto L_89fd7f;
L_89fd6a: /* 89fd6a: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd6d: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd75: jp 0x89fd7f */
  if (pf) goto L_89fd7f;
L_89fd77: /* 89fd77: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd7a: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd7d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_89fd7f: /* 89fd7f: fmul dword ptr [esi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3cu)));
L_89fd82: /* 89fd82: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_89fd86: /* 89fd86: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89fd8a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd95: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fd9b: /* 89fd9b: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fd9e: mov edi, esp */
  edi = esp;
/* 89fda0: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fda5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fda7: lea ecx, [esp + 0x288] */
  ecx = (uint32_t)(esp + 0x288u);
/* 89fdae: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdb3u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fdb5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fdb8: mov dword ptr [esp + 0x18c], ecx */
  W32((uint32_t)(esp + 0x18cu), ecx);
/* 89fdbf: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fdc2: mov dword ptr [esp + 0x190], edx */
  W32((uint32_t)(esp + 0x190u), edx);
/* 89fdc9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fdcc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fdd0: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 89fdd6: mov dword ptr [esp + 0x194], ecx */
  W32((uint32_t)(esp + 0x194u), ecx);
/* 89fddd: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fde0: mov edi, esp */
  edi = esp;
/* 89fde2: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fde4: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fde9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fdeb: lea ecx, [esp + 0x278] */
  ecx = (uint32_t)(esp + 0x278u);
/* 89fdf2: mov dword ptr [esp + 0x1c8], edx */
  W32((uint32_t)(esp + 0x1c8u), edx);
/* 89fdf9: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdfeu); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fe00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fe03: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 89fe0a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fe0d: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 89fe14: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fe17: mov dword ptr [esp + 0xe4], ecx */
  W32((uint32_t)(esp + 0xe4u), ecx);
/* 89fe1e: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 89fe25: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 89fe2c: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89fe32u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89fe32: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 89fe36: lea eax, [esp + 0x17c] */
  eax = (uint32_t)(esp + 0x17cu);
/* 89fe3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fe3f: lea edx, [esp + 0x194] */
  edx = (uint32_t)(esp + 0x194u);
/* 89fe46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fe47: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 89fe4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe4f: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89fe54u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89fe54: mov edx, dword ptr [esp + 0x18c] */
  edx = R32((uint32_t)(esp + 0x18cu));
/* 89fe5b: mov eax, dword ptr [esp + 0x190] */
  eax = R32((uint32_t)(esp + 0x190u));
/* 89fe62: mov ecx, esp */
  ecx = esp;
/* 89fe64: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fe66: mov edx, dword ptr [esp + 0x194] */
  edx = R32((uint32_t)(esp + 0x194u));
/* 89fe6d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fe70: mov eax, dword ptr [esp + 0x198] */
  eax = R32((uint32_t)(esp + 0x198u));
/* 89fe77: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fe7a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 89fe7d: lea ecx, [esp + 0x2d8] */
  ecx = (uint32_t)(esp + 0x2d8u);
/* 89fe84: call 0x6c867a */
  esp -= 4; W32(esp, 0x89fe89u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89fe89: mov esi, eax */
  esi = eax;
/* 89fe8b: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fe90: lea edi, [esp + 0x1fc] */
  edi = (uint32_t)(esp + 0x1fcu);
/* 89fe97: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fe99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fe9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 89fea3: lea edi, [edx + ebx] */
  edi = (uint32_t)(edx + ebx);
/* 89fea6: mov eax, edi */
  eax = edi;
/* 89fea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89feaa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fead: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89feb0: mov dword ptr [esp + 0x1fc], ecx */
  W32((uint32_t)(esp + 0x1fcu), ecx);
/* 89feb7: mov dword ptr [esp + 0x200], edx */
  W32((uint32_t)(esp + 0x200u), edx);
/* 89febe: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fec2: mov dword ptr [esp + 0x204], eax */
  W32((uint32_t)(esp + 0x204u), eax);
/* 89fec9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fece: lea esi, [esp + 0x1fc] */
  esi = (uint32_t)(esp + 0x1fcu);
/* 89fed5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fed7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fedb: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fee1: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 89fee7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89feeb: mov esi, dword ptr [edx + ecx + 0x34] */
  esi = R32((uint32_t)(edx + ecx + 0x34u));
/* 89feef: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 89fef2: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89fef5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fef7: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 89fefa: lea eax, [esp + 0x1cc] */
  eax = (uint32_t)(esp + 0x1ccu);
/* 89ff01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff02: mov ecx, edi */
  ecx = edi;
/* 89ff04: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89ff0au); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89ff0a: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* 89ff11: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x89ff17u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 89ff17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff18: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89ff1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff20: lea ecx, [esp + 0x1e0] */
  ecx = (uint32_t)(esp + 0x1e0u);
/* 89ff27: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff2du); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff2d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff2f: mov dword ptr [esp + 0x128], edx */
  W32((uint32_t)(esp + 0x128u), edx);
/* 89ff36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ff39: mov dword ptr [esp + 0x12c], ecx */
  W32((uint32_t)(esp + 0x12cu), ecx);
/* 89ff40: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ff43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff44: lea eax, [esp + 0x174] */
  eax = (uint32_t)(esp + 0x174u);
/* 89ff4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff4c: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* 89ff53: mov dword ptr [esp + 0x138], edx */
  W32((uint32_t)(esp + 0x138u), edx);
/* 89ff5a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff60u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ff62: mov dword ptr [esp + 0x134], ecx */
  W32((uint32_t)(esp + 0x134u), ecx);
/* 89ff69: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89ff6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff6d: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 89ff71: mov dword ptr [esp + 0x13c], edx */
  W32((uint32_t)(esp + 0x13cu), edx);
/* 89ff78: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89ff7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff7c: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 89ff83: mov dword ptr [esp + 0x144], eax */
  W32((uint32_t)(esp + 0x144u), eax);
/* 89ff8a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff90u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff90: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 89ff93: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 89ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff98: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 89ff9b: mov dword ptr [esp + 0x140], edx */
  W32((uint32_t)(esp + 0x140u), edx);
/* 89ffa2: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 89ffa5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ffa8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 89ffaa: mov dword ptr [esp + 0x144], ecx */
  W32((uint32_t)(esp + 0x144u), ecx);
/* 89ffb1: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 89ffb3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ffb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ffb7: lea eax, [esp + 0x230] */
  eax = (uint32_t)(esp + 0x230u);
/* 89ffbe: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 89ffc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ffc6: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89ffcd: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 89ffd4: mov dword ptr [esp + 0x150], edx */
  W32((uint32_t)(esp + 0x150u), edx);
/* 89ffdb: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 89ffe2: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ffe8u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ffe8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ffea: mov dword ptr [esp + 0x11c], ecx */
  W32((uint32_t)(esp + 0x11cu), ecx);
/* 89fff1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fff4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fff8: mov dword ptr [esp + 0x120], edx */
  W32((uint32_t)(esp + 0x120u), edx);
/* 89ffff: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a0002: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8a0006: mov dword ptr [esp + 0x124], eax */
  W32((uint32_t)(esp + 0x124u), eax);
/* 8a000d: mov ebp, dword ptr [ecx + 0x130] */
  ebp = R32((uint32_t)(ecx + 0x130u));
/* 8a0013: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a0016: mov edi, esp */
  edi = esp;
/* 8a0018: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a001d: lea esi, [esp + 0x14c] */
  esi = (uint32_t)(esp + 0x14cu);
/* 8a0024: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0026: lea ecx, [esp + 0x268] */
  ecx = (uint32_t)(esp + 0x268u);
/* 8a002d: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a002f: call 0x6c775c */
  esp -= 4; W32(esp, 0x8a0034u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 8a0034: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0036: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 8a0039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a003c: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 8a003f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0042: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8a0045: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a0048: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8a004b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a004f: mov ecx, dword ptr [ecx + 0x130] */
  ecx = R32((uint32_t)(ecx + 0x130u));
/* 8a0055: add ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0059: call dword ptr [0xcfa35c] */
  esp -= 4; W32(esp, 0x8a005fu); SPILL(); f_4e39c7(); if (g_unwind) return; /* Core!?Normalize@FQuat@@QAEHXZ */ RELOAD();
/* 8a005f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a0063: /* 8a0063: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a0067: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a006b: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8a006f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0070: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0073: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0075: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a0079: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 8a007d: jl 0x89fcd0 */
  if ((sf != of)) goto L_89fcd0;
L_8a0083: /* 8a0083: mov eax, dword ptr [ecx + 0x120] */
  eax = R32((uint32_t)(ecx + 0x120u));
/* 8a0089: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a008b: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8a0093: jle 0x8a02f2 */
  if ((zf || sf != of)) goto L_8a02f2;
L_8a0099: /* 8a0099: xor ebp, ebp */
  ebp = 0;
/* 8a009b: jmp 0x8a00a0 */
  goto L_8a00a0;
L_8a00a0: /* 8a00a0: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a00a6: mov esi, dword ptr [edx + ebp] */
  esi = R32((uint32_t)(edx + ebp));
/* 8a00a9: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* 8a00ac: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a00b0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a00b2: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a00b8: /* 8a00b8: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8a00bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a00c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a00c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a00c6: jne 0x8a022a */
  if (!zf) goto L_8a022a;
L_8a00cc: /* 8a00cc: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00d2: lea edx, [eax + ebp + 8] */
  edx = (uint32_t)(eax + ebp + 0x8u);
/* 8a00d6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a00d8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8a00dc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a00df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8a00e3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a00e6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8a00ea: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00f0: mov ecx, dword ptr [eax + ebp + 0x24] */
  ecx = R32((uint32_t)(eax + ebp + 0x24u));
/* 8a00f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a00f5: lea edx, [esp + 0x164] */
  edx = (uint32_t)(esp + 0x164u);
/* 8a00fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a00fd: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8a0101: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x8a0107u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 8a0107: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8a010d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a010e: lea eax, [esp + 0xf0] */
  eax = (uint32_t)(esp + 0xf0u);
/* 8a0115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0116: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0119: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8a011fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8a011f: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 8a0126: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a012cu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a012c: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8a0133: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0139u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0139: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8a0140: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0146u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0146: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a014a: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a0150: mov edx, dword ptr [ecx + ebp + 0x20] */
  edx = R32((uint32_t)(ecx + ebp + 0x20u));
/* 8a0154: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a0156: jne 0x8a017f */
  if (!zf) goto L_8a017f;
L_8a0158: /* 8a0158: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a015e: lea edx, [esp + 0x328] */
  edx = (uint32_t)(esp + 0x328u);
/* 8a0165: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0166: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0168: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a016eu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a016e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a016f: lea eax, [esp + 0x29c] */
  eax = (uint32_t)(esp + 0x29cu);
/* 8a0176: lea ecx, [esp + 0xf0] */
  ecx = (uint32_t)(esp + 0xf0u);
/* 8a017d: jmp 0x8a01d0 */
  goto L_8a01d0;
L_8a017f: /* 8a017f: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 8a0186: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0187: lea ecx, [eax + 0xc0] */
  ecx = (uint32_t)(eax + 0xc0u);
/* 8a018d: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a0193u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0193: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 8a019a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01a0u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01a0: lea ecx, [esp + 0x1b4] */
  ecx = (uint32_t)(esp + 0x1b4u);
/* 8a01a7: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01adu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ad: lea ecx, [esp + 0x1c0] */
  ecx = (uint32_t)(esp + 0x1c0u);
/* 8a01b4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01bau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ba: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 8a01c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a01c2: lea eax, [esp + 0x2fc] */
  eax = (uint32_t)(esp + 0x2fcu);
/* 8a01c9: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
L_8a01d0: /* 8a01d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a01d1: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x8a01d7u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8a01d7: mov esi, eax */
  esi = eax;
/* 8a01d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a01dd: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 8a01e4: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a01e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a01eb: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a01f1: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a01f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a01f5: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
/* 8a01fc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a01ff: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 8a0206: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a0209: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 8a0210: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 8a0216: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a0218: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a021d: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 8a0224: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0226: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a022a: /* 8a022a: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a0230: fld dword ptr [edx + ebp + 0x28] */
  { double v = F32((uint32_t)(edx + ebp + 0x28u)); FPUSH(v); }
/* 8a0234: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a023a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a023c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a023f: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a0245: /* 8a0245: mov eax, edx */
  eax = edx;
/* 8a0247: lea edx, [eax + ebp + 0x14] */
  edx = (uint32_t)(eax + ebp + 0x14u);
/* 8a024b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a024d: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8a0251: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a0254: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8a0258: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a025b: lea eax, [esp + 0x358] */
  eax = (uint32_t)(esp + 0x358u);
/* 8a0262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0263: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0269: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 8a026d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a0273u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0274: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8a027b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a027c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8a0280: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8a0286u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a0286: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0288: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8a028c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a028f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8a0293: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0296: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a029a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 8a029e: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a02a4: fld dword ptr [ecx + ebp + 0x28] */
  { double v = F32((uint32_t)(ecx + ebp + 0x28u)); FPUSH(v); }
/* 8a02a8: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8a02ae: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8a02b2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a02b4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8a02b6: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8a02ba: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a02bc: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8a02c0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a02c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a02c4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a02c6: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a02c9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a02cc: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a02cf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a02d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a02d6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8a02d8: /* 8a02d8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a02dc: mov edx, dword ptr [ecx + 0x120] */
  edx = R32((uint32_t)(ecx + 0x120u));
/* 8a02e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a02e3: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a02e6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a02e8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a02ec: jl 0x8a00a0 */
  if ((sf != of)) goto L_8a00a0;
L_8a02f2: /* 8a02f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8a02f6: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 8a02fa: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8a02fe: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0304: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0305: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a0308: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a030b: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a030e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0310: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8a0314: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8a0318: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8a031c: jl 0x89fc71 */
  if ((sf != of)) goto L_89fc71;
L_8a0322: /* 8a0322: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 8a0329: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 8a0331: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a0336u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a0336: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8a033a: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 8a0342: call 0x6c4499 */
  esp -= 4; W32(esp, 0x8a0347u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 8a0347: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 8a034e: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 8a0356: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8a035bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8a035b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 8a035f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 8a0367: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x8a036cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 8a036c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8a0370: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a037b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x8a0380u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 8a0380: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8a0384: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a038b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a038d: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a0393: /* 8a0393: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a0396: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 8a039c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a039e: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a03a4: /* 8a03a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03aa: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03b0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03b2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03b8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03bc: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03c5: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 8a03cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03d1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03d7: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03df: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03e5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03e9: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03ef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03f2: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 8a03f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0402: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0408: xor eax, eax */
  eax = 0;
/* 8a040a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a040c: jle 0x8a047b */
  if ((zf || sf != of)) goto L_8a047b;
L_8a040e: /* 8a040e: xor edx, edx */
  edx = 0;
/* 8a0410: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a0414: xor esi, esi */
  esi = 0;
/* 8a0416: jmp 0x8a0420 */
  goto L_8a0420;
L_8a0420: /* 8a0420: mov ecx, dword ptr [ecx + 0x17c] */
  ecx = R32((uint32_t)(ecx + 0x17cu));
/* 8a0426: mov edi, dword ptr [ebp + 0x1dc] */
  edi = R32((uint32_t)(ebp + 0x1dcu));
/* 8a042c: mov edi, dword ptr [edx + edi + 0x34] */
  edi = R32((uint32_t)(edx + edi + 0x34u));
/* 8a0430: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a0434: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a0437: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a043b: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 8a0441: mov ecx, dword ptr [ecx + 0x170] */
  ecx = R32((uint32_t)(ecx + 0x170u));
/* 8a0447: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0449: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a044b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a044d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8a044f: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8a0452: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8a0455: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8a0458: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a045c: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8a045f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0463: mov edi, dword ptr [ecx + 0xb8] */
  edi = R32((uint32_t)(ecx + 0xb8u));
/* 8a0469: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a046a: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a046d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a0470: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0473: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0475: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8a0479: jl 0x8a0420 */
  if ((sf != of)) goto L_8a0420;
L_8a047b: /* 8a047b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8a047d: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 8a0484: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8a048a: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 8a048e: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 8a0494: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8a0497: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a049e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04a0: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04a6: /* 8a04a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a04a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04ab: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04b1: /* 8a04b1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8a04b4: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 8a04ba: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 8a04bd: mov esi, dword ptr [edx + 0x50] */
  esi = R32((uint32_t)(edx + 0x50u));
/* 8a04c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04c2: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04c8: /* 8a04c8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a04cc: mov esi, dword ptr [edx + 0xfc] */
  esi = R32((uint32_t)(edx + 0xfcu));
/* 8a04d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04d4: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04da: /* 8a04da: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8a04dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04df: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04e5: /* 8a04e5: mov eax, ecx */
  eax = ecx;
/* 8a04e7: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8a04ea: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a04ee: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8a04f4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8a04f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a04f8: mov dword ptr [esp + 0x390], 7 */
  W32((uint32_t)(esp + 0x390u), 0x7u);
/* 8a0503: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0509u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0509: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 8a0510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0511: mov ecx, esi */
  ecx = esi;
/* 8a0513: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0519u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a051a: mov ecx, ebp */
  ecx = ebp;
/* 8a051c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0522u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0523: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8a052a: push 0xae7e40 */
  { uint32_t v = 0xae7e40u; esp -= 4; W32(esp, v); }
/* 8a052f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0530: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a0536u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a0536: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a0539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a053a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a053e: mov byte ptr [esp + 0x394], 8 */
  W8((uint32_t)(esp + 0x394u), 0x8u);
/* 8a0546: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a054cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a054c: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0553: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a055b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0561u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0561: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a0564: fadd dword ptr [0x9f7fc4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7fc4u)));
/* 8a056a: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8a056c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0570: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a0575: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a0578: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a057c: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0580: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0584: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a058au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a058a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a058f: push 0xae7eac */
  { uint32_t v = 0xae7eacu; esp -= 4; W32(esp, v); }
/* 8a0594: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a0596: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a0598: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a059du); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a059d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05a0: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05a9: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a05ac: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 8a05b3: test dword ptr [eax + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a05bd: je 0x8a05fa */
  if (zf) goto L_8a05fa;
L_8a05bf: /* 8a05bf: mov ecx, esi */
  ecx = esi;
/* 8a05c1: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a05c6: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a05ca: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a05ce: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a05d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a05d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a05d8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a05dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a05dd: push 0xae7eb4 */
  { uint32_t v = 0xae7eb4u; esp -= 4; W32(esp, v); }
/* 8a05e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a05e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a05e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a05e6: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a05ebu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a05eb: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05ee: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05f7: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_8a05fa: /* 8a05fa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a05fe: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 8a0604: xor ebp, ebp */
  ebp = 0;
/* 8a0606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a0608: jle 0x8a0772 */
  if ((zf || sf != of)) goto L_8a0772;
L_8a060e: /* 8a060e: xor esi, esi */
  esi = 0;
/* 8a0610: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a0614: jmp 0x8a0620 */
  goto L_8a0620;
L_8a0620: /* 8a0620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a0622: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8a0629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8a062fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8a062f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0633: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a0639: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 8a0640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0641: lea ecx, [edx + esi + 8] */
  ecx = (uint32_t)(edx + esi + 0x8u);
/* 8a0645: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8a064bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8a064b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a064d: je 0x8a0758 */
  if (zf) goto L_8a0758;
L_8a0653: /* 8a0653: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0657: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a065d: mov edx, dword ptr [edx + esi + 8] */
  edx = R32((uint32_t)(edx + esi + 0x8u));
/* 8a0661: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a0663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0664: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8a066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a066a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a066c: je 0x8a067d */
  if (zf) goto L_8a067d;
L_8a066e: /* 8a066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0672: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0675: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8a067bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a067b: jmp 0x8a0683 */
  goto L_8a0683;
L_8a067d: /* 8a067d: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_8a0683: /* 8a0683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0687: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8a068e: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 8a0694: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8a0698: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8a069c: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8a069f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a06a1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8a06a8: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8a06ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06af: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x8a06b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a06b5: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8a06bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06bd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a06c2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a06c2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8a06c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06c6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06c9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8a06cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06cf: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a06d5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a06d5: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 8a06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06dd: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a06e3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a06e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06e5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 8a06ec: push 0xae7ed8 */
  { uint32_t v = 0xae7ed8u; esp -= 4; W32(esp, v); }
/* 8a06f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a06f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a06f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a06f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a06fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06fc: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a0700: mov byte ptr [esp + 0x394], 9 */
  W8((uint32_t)(esp + 0x394u), 0x9u);
/* 8a0708: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a070eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a070e: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0715: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a071d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0723u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0723: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0727: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a072c: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a0730: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0734: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a073eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a073e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a0742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0743: push 0xae7f70 */
  { uint32_t v = 0xae7f70u; esp -= 4; W32(esp, v); }
/* 8a0748: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a074a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a074b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a074c: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a0751u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a0751: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a0755: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a0758: /* 8a0758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a075c: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 8a0762: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a0763: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0766: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0768: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a076c: jl 0x8a0620 */
  if ((sf != of)) goto L_8a0620;
L_8a0772: /* 8a0772: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0776: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a0781: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0787u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8a0787: /* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8a009d(void) {
  LOAD_REGS();
  goto L_8a009d;
L_89fc71: /* 89fc71: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fc75: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 89fc7b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89fc7f: mov eax, dword ptr [edx + eax + 0x34] */
  eax = R32((uint32_t)(edx + eax + 0x34u));
/* 89fc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89fc89: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89fc8c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89fc8f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89fc91: lea edi, [ebx + ecx] */
  edi = (uint32_t)(ebx + ecx);
/* 89fc94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fc95: lea ecx, [esp + 0x26c] */
  ecx = (uint32_t)(esp + 0x26cu);
/* 89fc9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fc9d: mov ecx, edi */
  ecx = edi;
/* 89fc9f: call dword ptr [0xcfab50] */
  esp -= 4; W32(esp, 0x89fca5u); SPILL(); f_4e39bd(); if (g_unwind) return; /* Core!?ApplyPivot@FCoords@@QBE?AV1@ABV1@@Z */ RELOAD();
/* 89fca5: mov esi, eax */
  esi = eax;
/* 89fca7: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fcac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fcae: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* 89fcb2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fcb6: xor esi, esi */
  esi = 0;
/* 89fcb8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89fcba: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 89fcbe: jle 0x8a0083 */
  if ((zf || sf != of)) goto L_8a0083;
L_89fcc4: /* 89fcc4: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 89fcc8: jmp 0x89fcd0 */
  goto L_89fcd0;
L_89fcd0: /* 89fcd0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 89fcd4: mov eax, dword ptr [esi + edx + 0x30] */
  eax = R32((uint32_t)(esi + edx + 0x30u));
/* 89fcd8: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fcda: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89fcde: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fce4: /* 89fce4: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 89fce7: mov edi, dword ptr [ecx + 0xf8] */
  edi = R32((uint32_t)(ecx + 0xf8u));
/* 89fced: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89fcf0: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 89fcf3: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89fcf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89fcf7: jne 0x89fd3d */
  if (!zf) goto L_89fd3d;
L_89fcf9: /* 89fcf9: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fcfc: mov eax, dword ptr [edx + 0x4c] */
  eax = R32((uint32_t)(edx + 0x4cu));
/* 89fcff: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd05: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 89fd09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd0b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd0e: jne 0x89fd86 */
  if (!zf) goto L_89fd86;
L_89fd10: /* 89fd10: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd13: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd1e: jnp 0x8a0063 */
  if (!pf) goto L_8a0063;
L_89fd24: /* 89fd24: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd27: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd2c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd2f: jp 0x89fd86 */
  if (pf) goto L_89fd86;
L_89fd31: /* 89fd31: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd34: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd37: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 89fd3b: jmp 0x89fd82 */
  goto L_89fd82;
L_89fd3d: /* 89fd3d: fld dword ptr [edx + 0x4c] */
  { double v = F32((uint32_t)(edx + 0x4cu)); FPUSH(v); }
/* 89fd40: fld dword ptr [edx + 0x50] */
  { double v = F32((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 89fd43: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd4e: jne 0x89fd7f */
  if (!zf) goto L_89fd7f;
L_89fd50: /* 89fd50: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd53: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd5b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd5e: jp 0x89fd6a */
  if (pf) goto L_89fd6a;
L_89fd60: /* 89fd60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89fd62: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 89fd68: jmp 0x89fd7f */
  goto L_89fd7f;
L_89fd6a: /* 89fd6a: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd6d: fcomp dword ptr [edx + 0x50] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x50u)));
  FPOP();
/* 89fd70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 89fd75: jp 0x89fd7f */
  if (pf) goto L_89fd7f;
L_89fd77: /* 89fd77: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 89fd7a: fdiv dword ptr [edx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x50u)));
/* 89fd7d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
L_89fd7f: /* 89fd7f: fmul dword ptr [esi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3cu)));
L_89fd82: /* 89fd82: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
L_89fd86: /* 89fd86: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89fd8a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89fd90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89fd92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89fd95: jne 0x8a0063 */
  if (!zf) goto L_8a0063;
L_89fd9b: /* 89fd9b: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fd9e: mov edi, esp */
  edi = esp;
/* 89fda0: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fda5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fda7: lea ecx, [esp + 0x288] */
  ecx = (uint32_t)(esp + 0x288u);
/* 89fdae: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdb3u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fdb5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fdb8: mov dword ptr [esp + 0x18c], ecx */
  W32((uint32_t)(esp + 0x18cu), ecx);
/* 89fdbf: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fdc2: mov dword ptr [esp + 0x190], edx */
  W32((uint32_t)(esp + 0x190u), edx);
/* 89fdc9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fdcc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 89fdd0: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 89fdd6: mov dword ptr [esp + 0x194], ecx */
  W32((uint32_t)(esp + 0x194u), ecx);
/* 89fddd: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89fde0: mov edi, esp */
  edi = esp;
/* 89fde2: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fde4: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fde9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fdeb: lea ecx, [esp + 0x278] */
  ecx = (uint32_t)(esp + 0x278u);
/* 89fdf2: mov dword ptr [esp + 0x1c8], edx */
  W32((uint32_t)(esp + 0x1c8u), edx);
/* 89fdf9: call 0x6c775c */
  esp -= 4; W32(esp, 0x89fdfeu); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 89fdfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89fe00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fe03: mov dword ptr [esp + 0xdc], ecx */
  W32((uint32_t)(esp + 0xdcu), ecx);
/* 89fe0a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 89fe0d: mov dword ptr [esp + 0xe0], edx */
  W32((uint32_t)(esp + 0xe0u), edx);
/* 89fe14: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 89fe17: mov dword ptr [esp + 0xe4], ecx */
  W32((uint32_t)(esp + 0xe4u), ecx);
/* 89fe1e: lea ecx, [esp + 0x17c] */
  ecx = (uint32_t)(esp + 0x17cu);
/* 89fe25: mov dword ptr [esp + 0xe8], edx */
  W32((uint32_t)(esp + 0xe8u), edx);
/* 89fe2c: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x89fe32u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 89fe32: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 89fe36: lea eax, [esp + 0x17c] */
  eax = (uint32_t)(esp + 0x17cu);
/* 89fe3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89fe3f: lea edx, [esp + 0x194] */
  edx = (uint32_t)(esp + 0x194u);
/* 89fe46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89fe47: lea eax, [esp + 0xe8] */
  eax = (uint32_t)(esp + 0xe8u);
/* 89fe4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89fe4f: call 0x6c59ac */
  esp -= 4; W32(esp, 0x89fe54u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 89fe54: mov edx, dword ptr [esp + 0x18c] */
  edx = R32((uint32_t)(esp + 0x18cu));
/* 89fe5b: mov eax, dword ptr [esp + 0x190] */
  eax = R32((uint32_t)(esp + 0x190u));
/* 89fe62: mov ecx, esp */
  ecx = esp;
/* 89fe64: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89fe66: mov edx, dword ptr [esp + 0x194] */
  edx = R32((uint32_t)(esp + 0x194u));
/* 89fe6d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89fe70: mov eax, dword ptr [esp + 0x198] */
  eax = R32((uint32_t)(esp + 0x198u));
/* 89fe77: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89fe7a: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 89fe7d: lea ecx, [esp + 0x2d8] */
  ecx = (uint32_t)(esp + 0x2d8u);
/* 89fe84: call 0x6c867a */
  esp -= 4; W32(esp, 0x89fe89u); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 89fe89: mov esi, eax */
  esi = eax;
/* 89fe8b: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fe90: lea edi, [esp + 0x1fc] */
  edi = (uint32_t)(esp + 0x1fcu);
/* 89fe97: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fe99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fe9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 89fea3: lea edi, [edx + ebx] */
  edi = (uint32_t)(edx + ebx);
/* 89fea6: mov eax, edi */
  eax = edi;
/* 89fea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89feaa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fead: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89feb0: mov dword ptr [esp + 0x1fc], ecx */
  W32((uint32_t)(esp + 0x1fcu), ecx);
/* 89feb7: mov dword ptr [esp + 0x200], edx */
  W32((uint32_t)(esp + 0x200u), edx);
/* 89febe: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 89fec2: mov dword ptr [esp + 0x204], eax */
  W32((uint32_t)(esp + 0x204u), eax);
/* 89fec9: mov ecx, 0xc */
  ecx = 0xcu;
/* 89fece: lea esi, [esp + 0x1fc] */
  esi = (uint32_t)(esp + 0x1fcu);
/* 89fed5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89fed7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fedb: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 89fee1: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 89fee7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 89feeb: mov esi, dword ptr [edx + ecx + 0x34] */
  esi = R32((uint32_t)(edx + ecx + 0x34u));
/* 89feef: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 89fef2: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89fef5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89fef7: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 89fefa: lea eax, [esp + 0x1cc] */
  eax = (uint32_t)(esp + 0x1ccu);
/* 89ff01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff02: mov ecx, edi */
  ecx = edi;
/* 89ff04: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x89ff0au); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 89ff0a: lea ecx, [esp + 0x11c] */
  ecx = (uint32_t)(esp + 0x11cu);
/* 89ff11: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x89ff17u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 89ff17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff18: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 89ff1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff20: lea ecx, [esp + 0x1e0] */
  ecx = (uint32_t)(esp + 0x1e0u);
/* 89ff27: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff2du); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff2d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff2f: mov dword ptr [esp + 0x128], edx */
  W32((uint32_t)(esp + 0x128u), edx);
/* 89ff36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ff39: mov dword ptr [esp + 0x12c], ecx */
  W32((uint32_t)(esp + 0x12cu), ecx);
/* 89ff40: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ff43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff44: lea eax, [esp + 0x174] */
  eax = (uint32_t)(esp + 0x174u);
/* 89ff4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ff4c: lea ecx, [esp + 0x1ec] */
  ecx = (uint32_t)(esp + 0x1ecu);
/* 89ff53: mov dword ptr [esp + 0x138], edx */
  W32((uint32_t)(esp + 0x138u), edx);
/* 89ff5a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff60u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ff62: mov dword ptr [esp + 0x134], ecx */
  W32((uint32_t)(esp + 0x134u), ecx);
/* 89ff69: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89ff6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ff6d: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 89ff71: mov dword ptr [esp + 0x13c], edx */
  W32((uint32_t)(esp + 0x13cu), edx);
/* 89ff78: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89ff7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ff7c: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 89ff83: mov dword ptr [esp + 0x144], eax */
  W32((uint32_t)(esp + 0x144u), eax);
/* 89ff8a: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ff90u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ff90: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 89ff93: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 89ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89ff98: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 89ff9b: mov dword ptr [esp + 0x140], edx */
  W32((uint32_t)(esp + 0x140u), edx);
/* 89ffa2: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 89ffa5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89ffa8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 89ffaa: mov dword ptr [esp + 0x144], ecx */
  W32((uint32_t)(esp + 0x144u), ecx);
/* 89ffb1: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 89ffb3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 89ffb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89ffb7: lea eax, [esp + 0x230] */
  eax = (uint32_t)(esp + 0x230u);
/* 89ffbe: fstp dword ptr [esp + 0xb8] */
  WF32((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 89ffc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ffc6: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 89ffcd: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 89ffd4: mov dword ptr [esp + 0x150], edx */
  W32((uint32_t)(esp + 0x150u), edx);
/* 89ffdb: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 89ffe2: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x89ffe8u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 89ffe8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89ffea: mov dword ptr [esp + 0x11c], ecx */
  W32((uint32_t)(esp + 0x11cu), ecx);
/* 89fff1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89fff4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 89fff8: mov dword ptr [esp + 0x120], edx */
  W32((uint32_t)(esp + 0x120u), edx);
/* 89ffff: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a0002: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8a0006: mov dword ptr [esp + 0x124], eax */
  W32((uint32_t)(esp + 0x124u), eax);
/* 8a000d: mov ebp, dword ptr [ecx + 0x130] */
  ebp = R32((uint32_t)(ecx + 0x130u));
/* 8a0013: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a0016: mov edi, esp */
  edi = esp;
/* 8a0018: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a001d: lea esi, [esp + 0x14c] */
  esi = (uint32_t)(esp + 0x14cu);
/* 8a0024: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0026: lea ecx, [esp + 0x268] */
  ecx = (uint32_t)(esp + 0x268u);
/* 8a002d: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a002f: call 0x6c775c */
  esp -= 4; W32(esp, 0x8a0034u); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 8a0034: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0036: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 8a0039: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a003c: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 8a003f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0042: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8a0045: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a0048: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8a004b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a004f: mov ecx, dword ptr [ecx + 0x130] */
  ecx = R32((uint32_t)(ecx + 0x130u));
/* 8a0055: add ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0059: call dword ptr [0xcfa35c] */
  esp -= 4; W32(esp, 0x8a005fu); SPILL(); f_4e39c7(); if (g_unwind) return; /* Core!?Normalize@FQuat@@QAEHXZ */ RELOAD();
/* 8a005f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a0063: /* 8a0063: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a0067: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a006b: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 8a006f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0070: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0073: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0075: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a0079: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 8a007d: jl 0x89fcd0 */
  if ((sf != of)) goto L_89fcd0;
L_8a0083: /* 8a0083: mov eax, dword ptr [ecx + 0x120] */
  eax = R32((uint32_t)(ecx + 0x120u));
/* 8a0089: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a008b: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8a0093: jle 0x8a02f2 */
  if ((zf || sf != of)) goto L_8a02f2;
L_8a0099: /* 8a0099: xor ebp, ebp */
  ebp = 0;
/* 8a009b: jmp 0x8a00a0 */
  goto L_8a00a0;
L_8a009d: /* 8a009d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a00a0: /* 8a00a0: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a00a6: mov esi, dword ptr [edx + ebp] */
  esi = R32((uint32_t)(edx + ebp));
/* 8a00a9: lea eax, [edx + ebp] */
  eax = (uint32_t)(edx + ebp);
/* 8a00ac: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a00b0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a00b2: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a00b8: /* 8a00b8: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 8a00bb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a00c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a00c3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a00c6: jne 0x8a022a */
  if (!zf) goto L_8a022a;
L_8a00cc: /* 8a00cc: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00d2: lea edx, [eax + ebp + 8] */
  edx = (uint32_t)(eax + ebp + 0x8u);
/* 8a00d6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a00d8: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 8a00dc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a00df: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8a00e3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a00e6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8a00ea: mov eax, dword ptr [ecx + 0x11c] */
  eax = R32((uint32_t)(ecx + 0x11cu));
/* 8a00f0: mov ecx, dword ptr [eax + ebp + 0x24] */
  ecx = R32((uint32_t)(eax + ebp + 0x24u));
/* 8a00f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a00f5: lea edx, [esp + 0x164] */
  edx = (uint32_t)(esp + 0x164u);
/* 8a00fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a00fd: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8a0101: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x8a0107u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 8a0107: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8a010d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a010e: lea eax, [esp + 0xf0] */
  eax = (uint32_t)(esp + 0xf0u);
/* 8a0115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0116: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0119: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8a011fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8a011f: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 8a0126: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a012cu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a012c: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8a0133: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0139u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0139: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8a0140: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a0146u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a0146: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a014a: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a0150: mov edx, dword ptr [ecx + ebp + 0x20] */
  edx = R32((uint32_t)(ecx + ebp + 0x20u));
/* 8a0154: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a0156: jne 0x8a017f */
  if (!zf) goto L_8a017f;
L_8a0158: /* 8a0158: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a015e: lea edx, [esp + 0x328] */
  edx = (uint32_t)(esp + 0x328u);
/* 8a0165: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0166: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0168: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a016eu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a016e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a016f: lea eax, [esp + 0x29c] */
  eax = (uint32_t)(esp + 0x29cu);
/* 8a0176: lea ecx, [esp + 0xf0] */
  ecx = (uint32_t)(esp + 0xf0u);
/* 8a017d: jmp 0x8a01d0 */
  goto L_8a01d0;
L_8a017f: /* 8a017f: lea ecx, [esp + 0x19c] */
  ecx = (uint32_t)(esp + 0x19cu);
/* 8a0186: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0187: lea ecx, [eax + 0xc0] */
  ecx = (uint32_t)(eax + 0xc0u);
/* 8a018d: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8a0193u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0193: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* 8a019a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01a0u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01a0: lea ecx, [esp + 0x1b4] */
  ecx = (uint32_t)(esp + 0x1b4u);
/* 8a01a7: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01adu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ad: lea ecx, [esp + 0x1c0] */
  ecx = (uint32_t)(esp + 0x1c0u);
/* 8a01b4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a01bau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a01ba: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 8a01c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a01c2: lea eax, [esp + 0x2fc] */
  eax = (uint32_t)(esp + 0x2fcu);
/* 8a01c9: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
L_8a01d0: /* 8a01d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a01d1: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x8a01d7u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8a01d7: mov esi, eax */
  esi = eax;
/* 8a01d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a01dd: lea edi, [esp + 0xec] */
  edi = (uint32_t)(esp + 0xecu);
/* 8a01e4: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a01e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a01eb: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8a01f1: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a01f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a01f5: mov dword ptr [esp + 0xec], edx */
  W32((uint32_t)(esp + 0xecu), edx);
/* 8a01fc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a01ff: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 8a0206: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a0209: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 8a0210: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 8a0216: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a0218: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a021d: lea esi, [esp + 0xec] */
  esi = (uint32_t)(esp + 0xecu);
/* 8a0224: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a0226: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_8a022a: /* 8a022a: mov edx, dword ptr [ecx + 0x11c] */
  edx = R32((uint32_t)(ecx + 0x11cu));
/* 8a0230: fld dword ptr [edx + ebp + 0x28] */
  { double v = F32((uint32_t)(edx + ebp + 0x28u)); FPUSH(v); }
/* 8a0234: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a023a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a023c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a023f: jne 0x8a02d8 */
  if (!zf) goto L_8a02d8;
L_8a0245: /* 8a0245: mov eax, edx */
  eax = edx;
/* 8a0247: lea edx, [eax + ebp + 0x14] */
  edx = (uint32_t)(eax + ebp + 0x14u);
/* 8a024b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a024d: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8a0251: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a0254: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 8a0258: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a025b: lea eax, [esp + 0x358] */
  eax = (uint32_t)(esp + 0x358u);
/* 8a0262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0263: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0269: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 8a026d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a0273u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a0273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0274: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8a027b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a027c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8a0280: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8a0286u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a0286: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a0288: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8a028c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a028f: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8a0293: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a0296: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a029a: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 8a029e: mov ecx, dword ptr [eax + 0x11c] */
  ecx = R32((uint32_t)(eax + 0x11cu));
/* 8a02a4: fld dword ptr [ecx + ebp + 0x28] */
  { double v = F32((uint32_t)(ecx + ebp + 0x28u)); FPUSH(v); }
/* 8a02a8: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8a02ae: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8a02b2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a02b4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8a02b6: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8a02ba: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a02bc: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8a02c0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a02c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a02c4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a02c6: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a02c9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a02cc: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a02cf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a02d2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a02d6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8a02d8: /* 8a02d8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8a02dc: mov edx, dword ptr [ecx + 0x120] */
  edx = R32((uint32_t)(ecx + 0x120u));
/* 8a02e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a02e3: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a02e6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a02e8: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8a02ec: jl 0x8a00a0 */
  if ((sf != of)) goto L_8a00a0;
L_8a02f2: /* 8a02f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8a02f6: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 8a02fa: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8a02fe: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0304: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a0305: add ebp, 0x40 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8a0308: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a030b: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a030e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0310: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8a0314: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8a0318: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8a031c: jl 0x89fc71 */
  if ((sf != of)) goto L_89fc71;
L_8a0322: /* 8a0322: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 8a0329: mov byte ptr [esp + 0x390], 4 */
  W8((uint32_t)(esp + 0x390u), 0x4u);
/* 8a0331: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a0336u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a0336: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8a033a: mov byte ptr [esp + 0x390], 3 */
  W8((uint32_t)(esp + 0x390u), 0x3u);
/* 8a0342: call 0x6c4499 */
  esp -= 4; W32(esp, 0x8a0347u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 8a0347: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 8a034e: mov byte ptr [esp + 0x390], 2 */
  W8((uint32_t)(esp + 0x390u), 0x2u);
/* 8a0356: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8a035bu); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8a035b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 8a035f: mov byte ptr [esp + 0x390], 1 */
  W8((uint32_t)(esp + 0x390u), 0x1u);
/* 8a0367: call 0x6c1d52 */
  esp -= 4; W32(esp, 0x8a036cu); SPILL(); f_6c1d52(); if (g_unwind) return; RELOAD();
/* 8a036c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8a0370: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a037b: call 0x6c8305 */
  esp -= 4; W32(esp, 0x8a0380u); SPILL(); f_6c8305(); if (g_unwind) return; RELOAD();
/* 8a0380: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8a0384: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a038b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a038d: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a0393: /* 8a0393: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a0396: mov eax, dword ptr [edx + 0x108] */
  eax = R32((uint32_t)(edx + 0x108u));
/* 8a039c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a039e: je 0x8a047b */
  if (zf) goto L_8a047b;
L_8a03a4: /* 8a03a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03aa: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03b0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03b2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03b8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03bc: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a03c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03c5: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 8a03cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03d1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a03d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a03d7: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a03dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03df: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a03e5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a03e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a03e9: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8a03ef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a03f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a03f2: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 8a03f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a03feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a03fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0402: mov edx, dword ptr [ecx + 0xb8] */
  edx = R32((uint32_t)(ecx + 0xb8u));
/* 8a0408: xor eax, eax */
  eax = 0;
/* 8a040a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a040c: jle 0x8a047b */
  if ((zf || sf != of)) goto L_8a047b;
L_8a040e: /* 8a040e: xor edx, edx */
  edx = 0;
/* 8a0410: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a0414: xor esi, esi */
  esi = 0;
/* 8a0416: jmp 0x8a0420 */
  goto L_8a0420;
L_8a0420: /* 8a0420: mov ecx, dword ptr [ecx + 0x17c] */
  ecx = R32((uint32_t)(ecx + 0x17cu));
/* 8a0426: mov edi, dword ptr [ebp + 0x1dc] */
  edi = R32((uint32_t)(ebp + 0x1dcu));
/* 8a042c: mov edi, dword ptr [edx + edi + 0x34] */
  edi = R32((uint32_t)(edx + edi + 0x34u));
/* 8a0430: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a0434: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a0437: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a043b: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 8a0441: mov ecx, dword ptr [ecx + 0x170] */
  ecx = R32((uint32_t)(ecx + 0x170u));
/* 8a0447: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0449: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a044b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a044d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8a044f: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8a0452: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8a0455: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8a0458: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a045c: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8a045f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0463: mov edi, dword ptr [ecx + 0xb8] */
  edi = R32((uint32_t)(ecx + 0xb8u));
/* 8a0469: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a046a: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a046d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a0470: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0473: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0475: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8a0479: jl 0x8a0420 */
  if ((sf != of)) goto L_8a0420;
L_8a047b: /* 8a047b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8a047d: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 8a0484: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8a048a: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 8a048e: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 8a0494: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8a0497: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a049e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04a0: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04a6: /* 8a04a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a04a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04ab: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04b1: /* 8a04b1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8a04b4: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 8a04ba: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 8a04bd: mov esi, dword ptr [edx + 0x50] */
  esi = R32((uint32_t)(edx + 0x50u));
/* 8a04c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04c2: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04c8: /* 8a04c8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a04cc: mov esi, dword ptr [edx + 0xfc] */
  esi = R32((uint32_t)(edx + 0xfcu));
/* 8a04d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04d4: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04da: /* 8a04da: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8a04dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04df: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04e5: /* 8a04e5: mov eax, ecx */
  eax = ecx;
/* 8a04e7: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8a04ea: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a04ee: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8a04f4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8a04f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a04f8: mov dword ptr [esp + 0x390], 7 */
  W32((uint32_t)(esp + 0x390u), 0x7u);
/* 8a0503: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0509u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0509: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 8a0510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0511: mov ecx, esi */
  ecx = esi;
/* 8a0513: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0519u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a051a: mov ecx, ebp */
  ecx = ebp;
/* 8a051c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0522u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0523: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8a052a: push 0xae7e40 */
  { uint32_t v = 0xae7e40u; esp -= 4; W32(esp, v); }
/* 8a052f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0530: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a0536u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a0536: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a0539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a053a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a053e: mov byte ptr [esp + 0x394], 8 */
  W8((uint32_t)(esp + 0x394u), 0x8u);
/* 8a0546: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a054cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a054c: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0553: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a055b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0561u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0561: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a0564: fadd dword ptr [0x9f7fc4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7fc4u)));
/* 8a056a: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8a056c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0570: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a0575: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a0578: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a057c: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0580: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0584: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a058au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a058a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a058f: push 0xae7eac */
  { uint32_t v = 0xae7eacu; esp -= 4; W32(esp, v); }
/* 8a0594: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a0596: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a0598: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a059du); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a059d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05a0: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05a9: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a05ac: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 8a05b3: test dword ptr [eax + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a05bd: je 0x8a05fa */
  if (zf) goto L_8a05fa;
L_8a05bf: /* 8a05bf: mov ecx, esi */
  ecx = esi;
/* 8a05c1: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a05c6: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a05ca: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a05ce: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a05d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a05d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a05d8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a05dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a05dd: push 0xae7eb4 */
  { uint32_t v = 0xae7eb4u; esp -= 4; W32(esp, v); }
/* 8a05e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a05e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a05e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a05e6: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a05ebu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a05eb: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05ee: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05f7: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_8a05fa: /* 8a05fa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a05fe: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 8a0604: xor ebp, ebp */
  ebp = 0;
/* 8a0606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a0608: jle 0x8a0772 */
  if ((zf || sf != of)) goto L_8a0772;
L_8a060e: /* 8a060e: xor esi, esi */
  esi = 0;
/* 8a0610: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a0614: jmp 0x8a0620 */
  goto L_8a0620;
L_8a0620: /* 8a0620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a0622: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8a0629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8a062fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8a062f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0633: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a0639: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 8a0640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0641: lea ecx, [edx + esi + 8] */
  ecx = (uint32_t)(edx + esi + 0x8u);
/* 8a0645: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8a064bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8a064b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a064d: je 0x8a0758 */
  if (zf) goto L_8a0758;
L_8a0653: /* 8a0653: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0657: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a065d: mov edx, dword ptr [edx + esi + 8] */
  edx = R32((uint32_t)(edx + esi + 0x8u));
/* 8a0661: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a0663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0664: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8a066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a066a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a066c: je 0x8a067d */
  if (zf) goto L_8a067d;
L_8a066e: /* 8a066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0672: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0675: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8a067bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a067b: jmp 0x8a0683 */
  goto L_8a0683;
L_8a067d: /* 8a067d: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_8a0683: /* 8a0683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0687: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8a068e: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 8a0694: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8a0698: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8a069c: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8a069f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a06a1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8a06a8: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8a06ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06af: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x8a06b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a06b5: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8a06bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06bd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a06c2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a06c2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8a06c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06c6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06c9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8a06cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06cf: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a06d5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a06d5: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 8a06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06dd: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a06e3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a06e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06e5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 8a06ec: push 0xae7ed8 */
  { uint32_t v = 0xae7ed8u; esp -= 4; W32(esp, v); }
/* 8a06f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a06f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a06f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a06f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a06fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06fc: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a0700: mov byte ptr [esp + 0x394], 9 */
  W8((uint32_t)(esp + 0x394u), 0x9u);
/* 8a0708: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a070eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a070e: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0715: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a071d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0723u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0723: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0727: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a072c: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a0730: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0734: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a073eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a073e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a0742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0743: push 0xae7f70 */
  { uint32_t v = 0xae7f70u; esp -= 4; W32(esp, v); }
/* 8a0748: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a074a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a074b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a074c: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a0751u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a0751: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a0755: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a0758: /* 8a0758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a075c: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 8a0762: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a0763: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0766: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0768: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a076c: jl 0x8a0620 */
  if ((sf != of)) goto L_8a0620;
L_8a0772: /* 8a0772: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0776: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a0781: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0787u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8a0787: /* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8a0418(void) {
  LOAD_REGS();
L_8a0418: /* 8a0418: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8a041f: nop  */
L_8a0420: /* 8a0420: mov ecx, dword ptr [ecx + 0x17c] */
  ecx = R32((uint32_t)(ecx + 0x17cu));
/* 8a0426: mov edi, dword ptr [ebp + 0x1dc] */
  edi = R32((uint32_t)(ebp + 0x1dcu));
/* 8a042c: mov edi, dword ptr [edx + edi + 0x34] */
  edi = R32((uint32_t)(edx + edi + 0x34u));
/* 8a0430: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a0434: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a0437: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a043b: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 8a0441: mov ecx, dword ptr [ecx + 0x170] */
  ecx = R32((uint32_t)(ecx + 0x170u));
/* 8a0447: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a0449: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a044b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a044d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8a044f: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8a0452: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8a0455: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8a0458: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8a045c: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8a045f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0463: mov edi, dword ptr [ecx + 0xb8] */
  edi = R32((uint32_t)(ecx + 0xb8u));
/* 8a0469: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a046a: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a046d: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a0470: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0473: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0475: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 8a0479: jl 0x8a0420 */
  if ((sf != of)) goto L_8a0420;
L_8a047b: /* 8a047b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8a047d: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 8a0484: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8a048a: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 8a048e: mov edx, dword ptr [0xce83d4] */
  edx = R32((uint32_t)(0xce83d4u));
/* 8a0494: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8a0497: mov eax, dword ptr [esp + 0x39c] */
  eax = R32((uint32_t)(esp + 0x39cu));
/* 8a049e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04a0: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04a6: /* 8a04a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a04a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04ab: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04b1: /* 8a04b1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8a04b4: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 8a04ba: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 8a04bd: mov esi, dword ptr [edx + 0x50] */
  esi = R32((uint32_t)(edx + 0x50u));
/* 8a04c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04c2: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04c8: /* 8a04c8: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a04cc: mov esi, dword ptr [edx + 0xfc] */
  esi = R32((uint32_t)(edx + 0xfcu));
/* 8a04d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04d4: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04da: /* 8a04da: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8a04dd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a04df: je 0x8a0787 */
  if (zf) goto L_8a0787;
L_8a04e5: /* 8a04e5: mov eax, ecx */
  eax = ecx;
/* 8a04e7: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8a04ea: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a04ee: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8a04f4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8a04f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a04f8: mov dword ptr [esp + 0x390], 7 */
  W32((uint32_t)(esp + 0x390u), 0x7u);
/* 8a0503: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0509u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0509: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 8a0510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0511: mov ecx, esi */
  ecx = esi;
/* 8a0513: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0519u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a051a: mov ecx, ebp */
  ecx = ebp;
/* 8a051c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a0522u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a0522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0523: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8a052a: push 0xae7e40 */
  { uint32_t v = 0xae7e40u; esp -= 4; W32(esp, v); }
/* 8a052f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a0530: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a0536u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a0536: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a0539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a053a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a053e: mov byte ptr [esp + 0x394], 8 */
  W8((uint32_t)(esp + 0x394u), 0x8u);
/* 8a0546: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a054cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a054c: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0553: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a055b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0561u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0561: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a0564: fadd dword ptr [0x9f7fc4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7fc4u)));
/* 8a056a: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8a056c: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0570: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a0575: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a0578: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a057c: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0580: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0584: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a058au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a058a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a058e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a058f: push 0xae7eac */
  { uint32_t v = 0xae7eacu; esp -= 4; W32(esp, v); }
/* 8a0594: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a0596: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a0598: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a059du); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a059d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05a0: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05a9: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8a05ac: mov eax, dword ptr [esp + 0x398] */
  eax = R32((uint32_t)(esp + 0x398u));
/* 8a05b3: test dword ptr [eax + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a05bd: je 0x8a05fa */
  if (zf) goto L_8a05fa;
L_8a05bf: /* 8a05bf: mov ecx, esi */
  ecx = esi;
/* 8a05c1: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a05c6: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a05ca: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a05ce: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a05d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a05d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a05d8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a05dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a05dd: push 0xae7eb4 */
  { uint32_t v = 0xae7eb4u; esp -= 4; W32(esp, v); }
/* 8a05e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a05e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a05e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a05e6: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a05ebu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a05eb: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8a05ee: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 8a05f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a05f7: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_8a05fa: /* 8a05fa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8a05fe: mov eax, dword ptr [edx + 0xfc] */
  eax = R32((uint32_t)(edx + 0xfcu));
/* 8a0604: xor ebp, ebp */
  ebp = 0;
/* 8a0606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a0608: jle 0x8a0772 */
  if ((zf || sf != of)) goto L_8a0772;
L_8a060e: /* 8a060e: xor esi, esi */
  esi = 0;
/* 8a0610: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a0614: jmp 0x8a0620 */
  goto L_8a0620;
L_8a0620: /* 8a0620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a0622: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8a0629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8a062fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8a062f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0633: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a0639: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 8a0640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0641: lea ecx, [edx + esi + 8] */
  ecx = (uint32_t)(edx + esi + 0x8u);
/* 8a0645: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8a064bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8a064b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a064d: je 0x8a0758 */
  if (zf) goto L_8a0758;
L_8a0653: /* 8a0653: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0657: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a065d: mov edx, dword ptr [edx + esi + 8] */
  edx = R32((uint32_t)(edx + esi + 0x8u));
/* 8a0661: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a0663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0664: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8a066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a066a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a066c: je 0x8a067d */
  if (zf) goto L_8a067d;
L_8a066e: /* 8a066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0672: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0675: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8a067bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a067b: jmp 0x8a0683 */
  goto L_8a0683;
L_8a067d: /* 8a067d: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_8a0683: /* 8a0683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0687: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8a068e: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 8a0694: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8a0698: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8a069c: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8a069f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a06a1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8a06a8: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8a06ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06af: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x8a06b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a06b5: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8a06bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06bd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a06c2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a06c2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8a06c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06c6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06c9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8a06cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06cf: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a06d5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a06d5: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 8a06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06dd: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a06e3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a06e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06e5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 8a06ec: push 0xae7ed8 */
  { uint32_t v = 0xae7ed8u; esp -= 4; W32(esp, v); }
/* 8a06f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a06f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a06f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a06f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a06fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06fc: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a0700: mov byte ptr [esp + 0x394], 9 */
  W8((uint32_t)(esp + 0x394u), 0x9u);
/* 8a0708: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a070eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a070e: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0715: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a071d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0723u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0723: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0727: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a072c: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a0730: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0734: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a073eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a073e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a0742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0743: push 0xae7f70 */
  { uint32_t v = 0xae7f70u; esp -= 4; W32(esp, v); }
/* 8a0748: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a074a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a074b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a074c: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a0751u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a0751: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a0755: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a0758: /* 8a0758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a075c: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 8a0762: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a0763: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0766: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0768: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a076c: jl 0x8a0620 */
  if ((sf != of)) goto L_8a0620;
L_8a0772: /* 8a0772: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0776: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a0781: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0787u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8a0787: /* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8a0616(void) {
  LOAD_REGS();
L_8a0616: /* 8a0616: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8a061d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a0620: /* 8a0620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a0622: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8a0629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8a062fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8a062f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0633: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a0639: lea eax, [esp + 0x88] */
  eax = (uint32_t)(esp + 0x88u);
/* 8a0640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0641: lea ecx, [edx + esi + 8] */
  ecx = (uint32_t)(edx + esi + 0x8u);
/* 8a0645: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8a064bu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8a064b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a064d: je 0x8a0758 */
  if (zf) goto L_8a0758;
L_8a0653: /* 8a0653: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0657: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 8a065d: mov edx, dword ptr [edx + esi + 8] */
  edx = R32((uint32_t)(edx + esi + 0x8u));
/* 8a0661: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a0663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a0664: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8a066au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a066a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a066c: je 0x8a067d */
  if (zf) goto L_8a067d;
L_8a066e: /* 8a066e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0672: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0675: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8a067bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a067b: jmp 0x8a0683 */
  goto L_8a0683;
L_8a067d: /* 8a067d: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
L_8a0683: /* 8a0683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a0687: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8a068e: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 8a0694: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8a0698: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8a069c: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8a069f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a06a1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06a4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8a06a8: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 8a06ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06af: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0x8a06b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a06b5: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8a06bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06bd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a06c2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a06c2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8a06c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06c6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a06c9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8a06cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a06cf: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a06d5u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a06d5: mov ecx, dword ptr [esp + 0xc4] */
  ecx = R32((uint32_t)(esp + 0xc4u));
/* 8a06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06dd: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a06e3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a06e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a06e5: lea ecx, [esp + 0xd4] */
  ecx = (uint32_t)(esp + 0xd4u);
/* 8a06ec: push 0xae7ed8 */
  { uint32_t v = 0xae7ed8u; esp -= 4; W32(esp, v); }
/* 8a06f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a06f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8a06f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8a06f8: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a06fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a06fc: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a0700: mov byte ptr [esp + 0x394], 9 */
  W8((uint32_t)(esp + 0x394u), 0x9u);
/* 8a0708: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8a070eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a070e: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 8a0715: mov byte ptr [esp + 0x390], 7 */
  W8((uint32_t)(esp + 0x390u), 0x7u);
/* 8a071d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0723u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0723: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0727: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 8a072c: mov byte ptr [esp + 0x15], bl */
  W8((uint32_t)(esp + 0x15u), (ebx & 0xffu));
/* 8a0730: mov byte ptr [esp + 0x16], bl */
  W8((uint32_t)(esp + 0x16u), (ebx & 0xffu));
/* 8a0734: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8a0738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8a073eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8a073e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8a0742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a0743: push 0xae7f70 */
  { uint32_t v = 0xae7f70u; esp -= 4; W32(esp, v); }
/* 8a0748: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a074a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a074b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a074c: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x8a0751u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 8a0751: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8a0755: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a0758: /* 8a0758: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a075c: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 8a0762: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8a0763: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a0766: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a0768: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8a076c: jl 0x8a0620 */
  if ((sf != of)) goto L_8a0620;
L_8a0772: /* 8a0772: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8a0776: mov dword ptr [esp + 0x390], 0xffffffff */
  W32((uint32_t)(esp + 0x390u), 0xffffffffu);
/* 8a0781: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a0787u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a0787: mov ecx, dword ptr [esp + 0x388] */
  ecx = R32((uint32_t)(esp + 0x388u));
/* 8a078e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a078f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a0790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a0791: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a0798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a0799: add esp, 0x384 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x384u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a079f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8a10e0(void) {
  LOAD_REGS();
L_8a10e0: /* 8a10e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a10e2: push 0x9d5d83 */
  { uint32_t v = 0x9d5d83u; esp -= 4; W32(esp, v); }
/* 8a10e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a10ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a10ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a10f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a10f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a10f7: mov esi, ecx */
  esi = ecx;
/* 8a10f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a10fa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8a10fe: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1104u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1104: xor edi, edi */
  edi = 0;
/* 8a1106: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a1109: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8a110d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1113u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1113: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8a1116: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 8a111b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1121u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1121: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8a1124: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 8a1129: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a112fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a112f: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 8a1132: mov byte ptr [esp + 0x14], 3 */
  W8((uint32_t)(esp + 0x14u), 0x3u);
/* 8a1137: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8a113cu); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8a113c: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 8a113f: mov byte ptr [esp + 0x14], 4 */
  W8((uint32_t)(esp + 0x14u), 0x4u);
/* 8a1144: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8a1149u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8a1149: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 8a114c: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 8a1151: call 0x6c8f26 */
  esp -= 4; W32(esp, 0x8a1156u); SPILL(); f_6c8f26(); if (g_unwind) return; RELOAD();
/* 8a1156: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8a115c: mov byte ptr [esp + 0x14], 6 */
  W8((uint32_t)(esp + 0x14u), 0x6u);
/* 8a1161: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a1167u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a1167: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a1169: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 8a116f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1170: mov byte ptr [esp + 0x1c], 7 */
  W8((uint32_t)(esp + 0x1cu), 0x7u);
/* 8a1175: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8a117bu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8a117b: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* 8a1181: mov dword ptr [esi + 0xac], edi */
  W32((uint32_t)(esi + 0xacu), edi);
/* 8a1187: mov dword ptr [esi + 0xa4], 0x9f92a4 */
  W32((uint32_t)(esi + 0xa4u), 0x9f92a4u);
/* 8a1191: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a1193: lea ecx, [esi + 0xc8] */
  ecx = (uint32_t)(esi + 0xc8u);
/* 8a1199: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a119a: mov byte ptr [esp + 0x1c], 8 */
  W8((uint32_t)(esp + 0x1cu), 0x8u);
/* 8a119f: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8a11a5u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8a11a5: mov dword ptr [esi + 0xc0], edi */
  W32((uint32_t)(esi + 0xc0u), edi);
/* 8a11ab: mov dword ptr [esi + 0xc4], edi */
  W32((uint32_t)(esi + 0xc4u), edi);
/* 8a11b1: mov dword ptr [esi + 0xbc], 0x9f8368 */
  W32((uint32_t)(esi + 0xbcu), 0x9f8368u);
/* 8a11bb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a11bd: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 8a11c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a11c4: mov byte ptr [esp + 0x1c], 9 */
  W8((uint32_t)(esp + 0x1cu), 0x9u);
/* 8a11c9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8a11cfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8a11cf: mov dword ptr [esi + 0xd8], edi */
  W32((uint32_t)(esi + 0xd8u), edi);
/* 8a11d5: mov dword ptr [esi + 0xdc], edi */
  W32((uint32_t)(esi + 0xdcu), edi);
/* 8a11db: mov dword ptr [esi + 0xd4], 0x9f859c */
  W32((uint32_t)(esi + 0xd4u), 0x9f859cu);
/* 8a11e5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a11e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a11e8: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 8a11ee: mov byte ptr [esp + 0x1c], 0xa */
  W8((uint32_t)(esp + 0x1cu), 0xau);
/* 8a11f3: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8a11f9u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8a11f9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a11fd: mov dword ptr [esi + 0xf0], edi */
  W32((uint32_t)(esi + 0xf0u), edi);
/* 8a1203: mov dword ptr [esi + 0xf4], edi */
  W32((uint32_t)(esi + 0xf4u), edi);
/* 8a1209: mov dword ptr [esi + 0xec], 0x9f83e0 */
  W32((uint32_t)(esi + 0xecu), 0x9f83e0u);
/* 8a1213: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a1214: mov eax, esi */
  eax = esi;
/* 8a1216: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a1217: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a121e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1221: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1290(void) {
  LOAD_REGS();
L_8a1290: /* 8a1290: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a1291: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a1292: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1293: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8a1297: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1298: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8a129c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a129d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a129e: call 0x6c90b1 */
  esp -= 4; W32(esp, 0x8a12a3u); SPILL(); f_6c90b1(); if (g_unwind) return; RELOAD();
/* 8a12a3: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 8a12a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a12a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12a8: call 0x6c1fb4 */
  esp -= 4; W32(esp, 0x8a12adu); SPILL(); f_6c1fb4(); if (g_unwind) return; RELOAD();
/* 8a12ad: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8a12b3: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8a12b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a12b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12b8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a12bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a12ba: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 8a12bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a12be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12bf: call 0x6c2ce3 */
  esp -= 4; W32(esp, 0x8a12c4u); SPILL(); f_6c2ce3(); if (g_unwind) return; RELOAD();
/* 8a12c4: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 8a12c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a12c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12c9: call 0x6c2ce3 */
  esp -= 4; W32(esp, 0x8a12ceu); SPILL(); f_6c2ce3(); if (g_unwind) return; RELOAD();
/* 8a12ce: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 8a12d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a12d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12d3: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8a12d8u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8a12d8: lea edx, [edi + 0x50] */
  edx = (uint32_t)(edi + 0x50u);
/* 8a12db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a12dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12dd: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8a12e2u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8a12e2: lea eax, [edi + 0x6c] */
  eax = (uint32_t)(edi + 0x6cu);
/* 8a12e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a12e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12e7: call 0x6c4705 */
  esp -= 4; W32(esp, 0x8a12ecu); SPILL(); f_6c4705(); if (g_unwind) return; RELOAD();
/* 8a12ec: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a12ef: lea ecx, [edi + 0xa4] */
  ecx = (uint32_t)(edi + 0xa4u);
/* 8a12f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a12f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a12f7: call 0x6c231f */
  esp -= 4; W32(esp, 0x8a12fcu); SPILL(); f_6c231f(); if (g_unwind) return; RELOAD();
/* 8a12fc: lea edx, [edi + 0xbc] */
  edx = (uint32_t)(edi + 0xbcu);
/* 8a1302: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1304: call 0x6c772f */
  esp -= 4; W32(esp, 0x8a1309u); SPILL(); f_6c772f(); if (g_unwind) return; RELOAD();
/* 8a1309: lea eax, [edi + 0xd4] */
  eax = (uint32_t)(edi + 0xd4u);
/* 8a130f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1311: call 0x6c7ba8 */
  esp -= 4; W32(esp, 0x8a1316u); SPILL(); f_6c7ba8(); if (g_unwind) return; RELOAD();
/* 8a1316: lea ecx, [edi + 0xec] */
  ecx = (uint32_t)(edi + 0xecu);
/* 8a131c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a131d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a131e: call 0x6c6f14 */
  esp -= 4; W32(esp, 0x8a1323u); SPILL(); f_6c6f14(); if (g_unwind) return; RELOAD();
/* 8a1323: mov ebp, dword ptr [0xcfa1b4] */
  ebp = R32((uint32_t)(0xcfa1b4u));
/* 8a1329: lea edx, [edi + 0x104] */
  edx = (uint32_t)(edi + 0x104u);
/* 8a132f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1331: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a1333u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1333: lea eax, [edi + 0x108] */
  eax = (uint32_t)(edi + 0x108u);
/* 8a1339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a133a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a133b: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a133du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a133d: lea ecx, [edi + 0x10c] */
  ecx = (uint32_t)(edi + 0x10cu);
/* 8a1343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1344: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1345: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a1347u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1347: lea edx, [edi + 0x110] */
  edx = (uint32_t)(edi + 0x110u);
/* 8a134d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a134e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a134f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a1351u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1351: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1354: lea eax, [edi + 0x114] */
  eax = (uint32_t)(edi + 0x114u);
/* 8a135a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a135b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a135c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a135eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a135e: lea ecx, [edi + 0x118] */
  ecx = (uint32_t)(edi + 0x118u);
/* 8a1364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1366: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a1368u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1368: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a136b: mov ecx, esi */
  ecx = esi;
/* 8a136d: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x8a1373u); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 8a1373: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a1375: jne 0x8a1387 */
  if (!zf) goto L_8a1387;
L_8a1377: /* 8a1377: add edi, 0x98 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a137d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a137e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a137f: call 0x6c67cb */
  esp -= 4; W32(esp, 0x8a1384u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 8a1384: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a1387: /* 8a1387: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a1388: mov eax, esi */
  eax = esi;
/* 8a138a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a138b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a138c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a138d: ret  */
  esp += 4; SPILL(); return;
}

void f_8a13d0(void) {
  LOAD_REGS();
L_8a13d0: /* 8a13d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a13d1: mov ebp, esp */
  ebp = esp;
/* 8a13d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a13d5: push 0x9d5db0 */
  { uint32_t v = 0x9d5db0u; esp -= 4; W32(esp, v); }
/* 8a13da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a13e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a13e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a13e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a13eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a13ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a13ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a13f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a13f1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a13f4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a13f7: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8a13f9: xor ebx, ebx */
  ebx = 0;
/* 8a13fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a13fc: mov ecx, edi */
  ecx = edi;
/* 8a13fe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8a1401: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8a1407u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8a1407: mov ecx, esi */
  ecx = esi;
/* 8a1409: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8a140fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8a140f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a1411: je 0x8a146b */
  if (zf) goto L_8a146b;
L_8a1413: /* 8a1413: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8a1416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1417: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1418: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a141eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a141e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a1421: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1424: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1425: mov ecx, edi */
  ecx = edi;
/* 8a1427: call 0x6c3d5a */
  esp -= 4; W32(esp, 0x8a142cu); SPILL(); f_6c3d5a(); if (g_unwind) return; RELOAD();
/* 8a142c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a1430: /* 8a1430: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1433: jge 0x8a14a0 */
  if ((sf == of)) goto L_8a14a0;
L_8a1435: /* 8a1435: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8a1437: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a1439: mov ecx, edi */
  ecx = edi;
/* 8a143b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a1441u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a1441: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8a1444: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8a1446: je 0x8a145c */
  if (zf) goto L_8a145c;
L_8a1448: /* 8a1448: mov ecx, eax */
  ecx = eax;
/* 8a144a: call 0x6c8855 */
  esp -= 4; W32(esp, 0x8a144fu); SPILL(); f_6c8855(); if (g_unwind) return; RELOAD();
/* 8a144f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1451: call 0x6c1834 */
  esp -= 4; W32(esp, 0x8a1456u); SPILL(); f_6c1834(); if (g_unwind) return; RELOAD();
/* 8a1456: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1459: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a145a: jmp 0x8a1430 */
  goto L_8a1430;
L_8a145c: /* 8a145c: xor eax, eax */
  eax = 0;
/* 8a145e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a145f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1460: call 0x6c1834 */
  esp -= 4; W32(esp, 0x8a1465u); SPILL(); f_6c1834(); if (g_unwind) return; RELOAD();
/* 8a1465: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1468: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a1469: jmp 0x8a1430 */
  goto L_8a1430;
L_8a146b: /* 8a146b: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8a146e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a146f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1470: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a1476u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a1476: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1479: xor esi, esi */
  esi = 0;
/* 8a147b: jmp 0x8a1480 */
  goto L_8a1480;
L_8a1480: /* 8a1480: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1482: jge 0x8a149d */
  if ((sf == of)) goto L_8a149d;
L_8a1484: /* 8a1484: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a1486: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a1489: mov edx, esi */
  edx = esi;
/* 8a148b: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 8a148e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a1490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1492: call 0x6c1834 */
  esp -= 4; W32(esp, 0x8a1497u); SPILL(); f_6c1834(); if (g_unwind) return; RELOAD();
/* 8a1497: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a149a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a149b: jmp 0x8a1480 */
  goto L_8a1480;
L_8a149d: /* 8a149d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8a14a0: /* 8a14a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a14a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a14a4: mov eax, esi */
  eax = esi;
/* 8a14a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a14a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a14ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a14af: mov esp, ebp */
  esp = ebp;
/* 8a14b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a14b2: ret  */
  esp += 4; SPILL(); return;
}

void f_8a147d(void) {
  LOAD_REGS();
L_8a147d: /* 8a147d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a1480: /* 8a1480: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1482: jge 0x8a149d */
  if ((sf == of)) goto L_8a149d;
L_8a1484: /* 8a1484: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a1486: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a1489: mov edx, esi */
  edx = esi;
/* 8a148b: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 8a148e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a1490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1492: call 0x6c1834 */
  esp -= 4; W32(esp, 0x8a1497u); SPILL(); f_6c1834(); if (g_unwind) return; RELOAD();
/* 8a1497: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a149a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a149b: jmp 0x8a1480 */
  goto L_8a1480;
L_8a149d: /* 8a149d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a14a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a14a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a14a4: mov eax, esi */
  eax = esi;
/* 8a14a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a14a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a14ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a14af: mov esp, ebp */
  esp = ebp;
/* 8a14b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a14b2: ret  */
  esp += 4; SPILL(); return;
}

void f_8a14b3(void) {
  LOAD_REGS();
L_8a14b3: /* 8a14b3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a14b6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a14bb: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8a14be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a14bf: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a14c2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a14c7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a14c7(); return;
}

void f_8a14c7(void) {
  LOAD_REGS();
L_8a14c7: /* 8a14c7: push 0xa1a9d8 */
  { uint32_t v = 0xa1a9d8u; esp -= 4; W32(esp, v); }
/* 8a14cc: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8a14d1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a14d7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a14d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a14da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a14dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a14de: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a14e3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a14e3: guest_badaddr(0x8a14e3); return;
}

void f_8a1540(void) {
  LOAD_REGS();
L_8a1540: /* 8a1540: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a1541: mov ebp, esp */
  ebp = esp;
/* 8a1543: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a1545: push 0x9d5dc0 */
  { uint32_t v = 0x9d5dc0u; esp -= 4; W32(esp, v); }
/* 8a154a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a1550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1551: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a1558: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a155b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a155c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a155d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8a1560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1561: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a1564: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a1567: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8a1569: xor ebx, ebx */
  ebx = 0;
/* 8a156b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a156c: mov ecx, esi */
  ecx = esi;
/* 8a156e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8a1571: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8a1577u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8a1577: mov ecx, edi */
  ecx = edi;
/* 8a1579: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8a157fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8a157f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a1581: je 0x8a161f */
  if (zf) goto L_8a161f;
L_8a1587: /* 8a1587: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8a158a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a158b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a158c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a1592u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a1592: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a1595: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1599: mov ecx, esi */
  ecx = esi;
/* 8a159b: call 0x6cb5d2 */
  esp -= 4; W32(esp, 0x8a15a0u); SPILL(); f_6cb5d2(); if (g_unwind) return; RELOAD();
/* 8a15a0: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8a15a3: mov ebx, dword ptr [0xcfa27c] */
  ebx = R32((uint32_t)(0xcfa27cu));
/* 8a15a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a15b0: /* 8a15b0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a15b3: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a15b6: jge 0x8a167c */
  if ((sf == of)) goto L_8a167c;
L_8a15bc: /* 8a15bc: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8a15be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a15c0: mov ecx, esi */
  ecx = esi;
/* 8a15c2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a15c8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a15c8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a15ca: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a15cd: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8a15d0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a15d2: je 0x8a15dd */
  if (zf) goto L_8a15dd;
L_8a15d4: /* 8a15d4: call 0x6c22bb */
  esp -= 4; W32(esp, 0x8a15d9u); SPILL(); f_6c22bb(); if (g_unwind) return; RELOAD();
/* 8a15d9: mov esi, eax */
  esi = eax;
/* 8a15db: jmp 0x8a15df */
  goto L_8a15df;
L_8a15dd: /* 8a15dd: xor esi, esi */
  esi = 0;
L_8a15df: /* 8a15df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8a15e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a15e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a15e4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a15e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a15e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a15e9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8a15ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a15ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a15ee: call 0x6c7f6d */
  esp -= 4; W32(esp, 0x8a15f3u); SPILL(); f_6c7f6d(); if (g_unwind) return; RELOAD();
/* 8a15f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a15f6: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 8a15f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a15fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a15fb: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8a1600u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8a1600: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1603: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a1606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1608: call 0x6c67df */
  esp -= 4; W32(esp, 0x8a160du); SPILL(); f_6c67df(); if (g_unwind) return; RELOAD();
/* 8a160d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a1610: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8a1613: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a1616: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1619: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a161a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a161d: jmp 0x8a15b0 */
  goto L_8a15b0;
L_8a161f: /* 8a161f: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8a1622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1624: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a162au); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a162a: mov ebx, dword ptr [0xcfa27c] */
  ebx = R32((uint32_t)(0xcfa27cu));
/* 8a1630: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1633: xor edi, edi */
  edi = 0;
L_8a1635: /* 8a1635: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1638: jge 0x8a1679 */
  if ((sf == of)) goto L_8a1679;
L_8a163a: /* 8a163a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a163c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8a163f: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8a1642: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 8a1645: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1646: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1647: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a1649u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1649: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a164c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8a164f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1651: call 0x6c7f6d */
  esp -= 4; W32(esp, 0x8a1656u); SPILL(); f_6c7f6d(); if (g_unwind) return; RELOAD();
/* 8a1656: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1659: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 8a165c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a165d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a165e: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8a1663u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8a1663: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1666: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a1669: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a166a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a166b: call 0x6c67df */
  esp -= 4; W32(esp, 0x8a1670u); SPILL(); f_6c67df(); if (g_unwind) return; RELOAD();
/* 8a1670: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8a1673: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1676: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a1677: jmp 0x8a1635 */
  goto L_8a1635;
L_8a1679: /* 8a1679: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_8a167c: /* 8a167c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a167f: mov eax, edi */
  eax = edi;
/* 8a1681: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a1682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a1683: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a168a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a168b: mov esp, ebp */
  esp = ebp;
/* 8a168d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a168e: ret  */
  esp += 4; SPILL(); return;
}

void f_8a168f(void) {
  LOAD_REGS();
L_8a168f: /* 8a168f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a1692: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a1697: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8a169a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a169b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8a169e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a16a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a16a3(); return;
}

void f_8a16a3(void) {
  LOAD_REGS();
L_8a16a3: /* 8a16a3: push 0xa1a9f0 */
  { uint32_t v = 0xa1a9f0u; esp -= 4; W32(esp, v); }
/* 8a16a8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8a16ad: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a16b3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a16b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a16b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a16b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a16ba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a16bfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a16bf: guest_badaddr(0x8a16bf); return;
}

void f_8a1720(void) {
  LOAD_REGS();
L_8a1720: /* 8a1720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a1721: mov ebp, esp */
  ebp = esp;
/* 8a1723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a1725: push 0x9d5dd0 */
  { uint32_t v = 0x9d5dd0u; esp -= 4; W32(esp, v); }
/* 8a172a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a1730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a1738: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a173b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a173c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a173d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a1740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1741: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a1744: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a1747: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 8a174c: xor ebx, ebx */
  ebx = 0;
/* 8a174e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a174f: mov ecx, edi */
  ecx = edi;
/* 8a1751: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8a1754: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8a175au); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8a175a: mov ecx, esi */
  ecx = esi;
/* 8a175c: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8a1762u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8a1762: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a1764: je 0x8a17c1 */
  if (zf) goto L_8a17c1;
L_8a1766: /* 8a1766: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8a1769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a176a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a176b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a1771u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a1771: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a1774: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1777: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1778: mov ecx, edi */
  ecx = edi;
/* 8a177a: call 0x6ccafe */
  esp -= 4; W32(esp, 0x8a177fu); SPILL(); f_6ccafe(); if (g_unwind) return; RELOAD();
/* 8a177f: nop  */
L_8a1780: /* 8a1780: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1783: jge 0x8a17f4 */
  if ((sf == of)) goto L_8a17f4;
L_8a1785: /* 8a1785: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 8a178a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a178c: mov ecx, edi */
  ecx = edi;
/* 8a178e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a1794u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a1794: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8a179a: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8a179c: je 0x8a17b2 */
  if (zf) goto L_8a17b2;
L_8a179e: /* 8a179e: mov ecx, eax */
  ecx = eax;
/* 8a17a0: call 0x6cb72b */
  esp -= 4; W32(esp, 0x8a17a5u); SPILL(); f_6cb72b(); if (g_unwind) return; RELOAD();
/* 8a17a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a17a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a17a7: call 0x6c3e72 */
  esp -= 4; W32(esp, 0x8a17acu); SPILL(); f_6c3e72(); if (g_unwind) return; RELOAD();
/* 8a17ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a17af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a17b0: jmp 0x8a1780 */
  goto L_8a1780;
L_8a17b2: /* 8a17b2: xor eax, eax */
  eax = 0;
/* 8a17b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a17b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a17b6: call 0x6c3e72 */
  esp -= 4; W32(esp, 0x8a17bbu); SPILL(); f_6c3e72(); if (g_unwind) return; RELOAD();
/* 8a17bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a17be: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a17bf: jmp 0x8a1780 */
  goto L_8a1780;
L_8a17c1: /* 8a17c1: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8a17c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a17c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a17c6: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a17ccu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a17cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a17cf: xor esi, esi */
  esi = 0;
L_8a17d1: /* 8a17d1: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a17d3: jge 0x8a17f1 */
  if ((sf == of)) goto L_8a17f1;
L_8a17d5: /* 8a17d5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a17d7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a17da: mov edx, esi */
  edx = esi;
/* 8a17dc: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 8a17e2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a17e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a17e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a17e6: call 0x6c3e72 */
  esp -= 4; W32(esp, 0x8a17ebu); SPILL(); f_6c3e72(); if (g_unwind) return; RELOAD();
/* 8a17eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a17ee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a17ef: jmp 0x8a17d1 */
  goto L_8a17d1;
L_8a17f1: /* 8a17f1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8a17f4: /* 8a17f4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a17f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a17f8: mov eax, esi */
  eax = esi;
/* 8a17fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a17fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a1802: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a1803: mov esp, ebp */
  esp = ebp;
/* 8a1805: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a1806: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1807(void) {
  LOAD_REGS();
L_8a1807: /* 8a1807: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a180a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a180f: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8a1812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1813: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a1816: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a181bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a181b(); return;
}

void f_8a181b(void) {
  LOAD_REGS();
L_8a181b: /* 8a181b: push 0xa1aa08 */
  { uint32_t v = 0xa1aa08u; esp -= 4; W32(esp, v); }
/* 8a1820: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8a1825: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a182bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a182b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a182e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1830: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1832: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a1837u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a1837: guest_badaddr(0x8a1837); return;
}

void f_8a1890(void) {
  LOAD_REGS();
L_8a1890: /* 8a1890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1891: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1892: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 8a1896: mov ecx, edi */
  ecx = edi;
/* 8a1898: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8a189eu); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8a189e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a18a0: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8a18a4: je 0x8a18ad */
  if (zf) goto L_8a18ad;
L_8a18a6: /* 8a18a6: mov dword ptr [esi + 0x14], 4 */
  W32((uint32_t)(esi + 0x14u), 0x4u);
L_8a18ad: /* 8a18ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a18ae: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 8a18b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a18b5: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 8a18b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a18b9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8a18bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a18bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a18be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a18bf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a18c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a18c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a18c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a18c5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a18c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a18c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a18ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a18cb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a18cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a18cd: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 8a18d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a18d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a18d2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a18d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a18d4: mov ebp, dword ptr [0xcfa280] */
  ebp = R32((uint32_t)(0xcfa280u));
/* 8a18da: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 8a18dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a18de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a18df: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a18e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a18e1: lea ebx, [esi + 0x14] */
  ebx = (uint32_t)(esi + 0x14u);
/* 8a18e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a18e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a18e6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a18e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a18e8: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8a18eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a18ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a18ed: call 0x6c90bb */
  esp -= 4; W32(esp, 0x8a18f2u); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 8a18f2: lea edx, [esi + 0x24] */
  edx = (uint32_t)(esi + 0x24u);
/* 8a18f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a18f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a18f7: call 0x6c2720 */
  esp -= 4; W32(esp, 0x8a18fcu); SPILL(); f_6c2720(); if (g_unwind) return; RELOAD();
/* 8a18fc: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 8a18ff: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1902: lea ecx, [eax + 0x1c] */
  ecx = (uint32_t)(eax + 0x1cu);
/* 8a1905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1906: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 8a1909: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a190a: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8a190d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a190e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a190f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1910: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x8a1916u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 8a1916: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a191a: call 0x6c7f6d */
  esp -= 4; W32(esp, 0x8a191fu); SPILL(); f_6c7f6d(); if (g_unwind) return; RELOAD();
/* 8a191f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1922: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1923: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8a1928u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8a1928: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a192b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a192c: call 0x6c67df */
  esp -= 4; W32(esp, 0x8a1931u); SPILL(); f_6c67df(); if (g_unwind) return; RELOAD();
/* 8a1931: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a1933: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1936: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1939: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a193a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a193b: jl 0x8a194a */
  if ((sf != of)) goto L_8a194a;
L_8a193d: /* 8a193d: add esi, 0x58 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a1940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1942: call 0x6c7dd8 */
  esp -= 4; W32(esp, 0x8a1947u); SPILL(); f_6c7dd8(); if (g_unwind) return; RELOAD();
/* 8a1947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a194a: /* 8a194a: mov eax, edi */
  eax = edi;
/* 8a194c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a194d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a194e: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1980(void) {
  LOAD_REGS();
L_8a1980: /* 8a1980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a1981: mov ebp, esp */
  ebp = esp;
/* 8a1983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a1985: push 0x9d5deb */
  { uint32_t v = 0x9d5debu; esp -= 4; W32(esp, v); }
/* 8a198a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a1990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a1998: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a199b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a199c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a199d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a19a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a19a1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a19a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a19a7: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 8a19a9: xor ebx, ebx */
  ebx = 0;
/* 8a19ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a19ac: mov ecx, edi */
  ecx = edi;
/* 8a19ae: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8a19b1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8a19b7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8a19b7: mov ecx, esi */
  ecx = esi;
/* 8a19b9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8a19bfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8a19bf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a19c1: je 0x8a1a2c */
  if (zf) goto L_8a1a2c;
L_8a19c3: /* 8a19c3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8a19c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a19c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a19c8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a19ceu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a19ce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a19d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a19d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a19d5: mov ecx, edi */
  ecx = edi;
/* 8a19d7: call 0x6cb5a5 */
  esp -= 4; W32(esp, 0x8a19dcu); SPILL(); f_6cb5a5(); if (g_unwind) return; RELOAD();
/* 8a19dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a19e0: /* 8a19e0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a19e3: jge 0x8a1a60 */
  if ((sf == of)) goto L_8a1a60;
L_8a19e5: /* 8a19e5: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 8a19e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a19e9: mov ecx, edi */
  ecx = edi;
/* 8a19eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a19f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a19f1: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 8a19f4: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8a19f6: mov esi, eax */
  esi = eax;
/* 8a19f8: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8a19fb: je 0x8a1a17 */
  if (zf) goto L_8a1a17;
L_8a19fd: /* 8a19fd: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8a1a00: call 0x6c3873 */
  esp -= 4; W32(esp, 0x8a1a05u); SPILL(); f_6c3873(); if (g_unwind) return; RELOAD();
/* 8a1a05: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 8a1a08: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a1a0c: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8a1a11u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8a1a11: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a1a15: jmp 0x8a1a19 */
  goto L_8a1a19;
L_8a1a17: /* 8a1a17: xor esi, esi */
  esi = 0;
L_8a1a19: /* 8a1a19: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8a1a1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1a1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1a1e: call 0x6ca786 */
  esp -= 4; W32(esp, 0x8a1a23u); SPILL(); f_6ca786(); if (g_unwind) return; RELOAD();
/* 8a1a23: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a1a26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1a29: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a1a2a: jmp 0x8a19e0 */
  goto L_8a19e0;
L_8a1a2c: /* 8a1a2c: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8a1a2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a1a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1a31: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a1a37u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a1a37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1a3a: xor esi, esi */
  esi = 0;
/* 8a1a3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a1a40: /* 8a1a40: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1a42: jge 0x8a1a5d */
  if ((sf == of)) goto L_8a1a5d;
L_8a1a44: /* 8a1a44: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a1a46: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a1a49: mov eax, esi */
  eax = esi;
/* 8a1a4b: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 8a1a4e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a1a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1a51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1a52: call 0x6ca786 */
  esp -= 4; W32(esp, 0x8a1a57u); SPILL(); f_6ca786(); if (g_unwind) return; RELOAD();
/* 8a1a57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1a5a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a1a5b: jmp 0x8a1a40 */
  goto L_8a1a40;
L_8a1a5d: /* 8a1a5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8a1a60: /* 8a1a60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a1a63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a1a64: mov eax, esi */
  eax = esi;
/* 8a1a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a1a67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a1a6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a1a6f: mov esp, ebp */
  esp = ebp;
/* 8a1a71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a1a72: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1a73(void) {
  LOAD_REGS();
L_8a1a73: /* 8a1a73: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a1a76: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a1a7b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8a1a7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1a7f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8a1a82: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a1a87u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a1a87(); return;
}

void f_8a1a87(void) {
  LOAD_REGS();
L_8a1a87: /* 8a1a87: push 0xa1aa20 */
  { uint32_t v = 0xa1aa20u; esp -= 4; W32(esp, v); }
/* 8a1a8c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8a1a91: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a1a97u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a1a97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1a9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1a9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1a9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a1aa3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a1aa3: guest_badaddr(0x8a1aa3); return;
}

void f_8a1b00(void) {
  LOAD_REGS();
L_8a1b00: /* 8a1b00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a1b01: mov ebp, esp */
  ebp = esp;
/* 8a1b03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a1b05: push 0x9d5e00 */
  { uint32_t v = 0x9d5e00u; esp -= 4; W32(esp, v); }
/* 8a1b0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a1b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1b11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a1b18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a1b1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a1b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1b1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a1b20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1b21: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a1b24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a1b27: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8a1b29: xor ebx, ebx */
  ebx = 0;
/* 8a1b2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1b2c: mov ecx, edi */
  ecx = edi;
/* 8a1b2e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8a1b31: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8a1b37u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8a1b37: mov ecx, esi */
  ecx = esi;
/* 8a1b39: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8a1b3fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8a1b3f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a1b41: je 0x8a1b9b */
  if (zf) goto L_8a1b9b;
L_8a1b43: /* 8a1b43: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8a1b46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1b47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1b48: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a1b4eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a1b4e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a1b51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1b54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1b55: mov ecx, edi */
  ecx = edi;
/* 8a1b57: call 0x6c2d79 */
  esp -= 4; W32(esp, 0x8a1b5cu); SPILL(); f_6c2d79(); if (g_unwind) return; RELOAD();
/* 8a1b5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a1b60: /* 8a1b60: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1b63: jge 0x8a1bd0 */
  if ((sf == of)) goto L_8a1bd0;
L_8a1b65: /* 8a1b65: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8a1b67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a1b69: mov ecx, edi */
  ecx = edi;
/* 8a1b6b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a1b71u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a1b71: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 8a1b74: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8a1b76: je 0x8a1b8c */
  if (zf) goto L_8a1b8c;
L_8a1b78: /* 8a1b78: mov ecx, eax */
  ecx = eax;
/* 8a1b7a: call 0x6c373d */
  esp -= 4; W32(esp, 0x8a1b7fu); SPILL(); f_6c373d(); if (g_unwind) return; RELOAD();
/* 8a1b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1b81: call 0x6c743c */
  esp -= 4; W32(esp, 0x8a1b86u); SPILL(); f_6c743c(); if (g_unwind) return; RELOAD();
/* 8a1b86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1b89: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a1b8a: jmp 0x8a1b60 */
  goto L_8a1b60;
L_8a1b8c: /* 8a1b8c: xor eax, eax */
  eax = 0;
/* 8a1b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1b8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1b90: call 0x6c743c */
  esp -= 4; W32(esp, 0x8a1b95u); SPILL(); f_6c743c(); if (g_unwind) return; RELOAD();
/* 8a1b95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1b98: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a1b99: jmp 0x8a1b60 */
  goto L_8a1b60;
L_8a1b9b: /* 8a1b9b: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8a1b9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a1b9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1ba0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8a1ba6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8a1ba6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1ba9: xor esi, esi */
  esi = 0;
/* 8a1bab: jmp 0x8a1bb0 */
  goto L_8a1bb0;
L_8a1bb0: /* 8a1bb0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1bb2: jge 0x8a1bcd */
  if ((sf == of)) goto L_8a1bcd;
L_8a1bb4: /* 8a1bb4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a1bb6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a1bb9: mov edx, esi */
  edx = esi;
/* 8a1bbb: imul edx, edx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x64u);
  edx = (uint32_t)r;
  }
/* 8a1bbe: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a1bc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1bc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1bc2: call 0x6c743c */
  esp -= 4; W32(esp, 0x8a1bc7u); SPILL(); f_6c743c(); if (g_unwind) return; RELOAD();
/* 8a1bc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1bca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a1bcb: jmp 0x8a1bb0 */
  goto L_8a1bb0;
L_8a1bcd: /* 8a1bcd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8a1bd0: /* 8a1bd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a1bd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a1bd4: mov eax, esi */
  eax = esi;
/* 8a1bd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a1bd7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a1bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a1bdf: mov esp, ebp */
  esp = ebp;
/* 8a1be1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a1be2: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1bad(void) {
  LOAD_REGS();
L_8a1bad: /* 8a1bad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a1bb0: /* 8a1bb0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1bb2: jge 0x8a1bcd */
  if ((sf == of)) goto L_8a1bcd;
L_8a1bb4: /* 8a1bb4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a1bb6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a1bb9: mov edx, esi */
  edx = esi;
/* 8a1bbb: imul edx, edx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x64u);
  edx = (uint32_t)r;
  }
/* 8a1bbe: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a1bc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1bc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1bc2: call 0x6c743c */
  esp -= 4; W32(esp, 0x8a1bc7u); SPILL(); f_6c743c(); if (g_unwind) return; RELOAD();
/* 8a1bc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1bca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a1bcb: jmp 0x8a1bb0 */
  goto L_8a1bb0;
L_8a1bcd: /* 8a1bcd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a1bd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a1bd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a1bd4: mov eax, esi */
  eax = esi;
/* 8a1bd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a1bd7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a1bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a1bdf: mov esp, ebp */
  esp = ebp;
/* 8a1be1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a1be2: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1be3(void) {
  LOAD_REGS();
L_8a1be3: /* 8a1be3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a1be6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a1beb: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8a1bee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1bef: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a1bf2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a1bf7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a1bf7(); return;
}

void f_8a1bf7(void) {
  LOAD_REGS();
L_8a1bf7: /* 8a1bf7: push 0xa1aa38 */
  { uint32_t v = 0xa1aa38u; esp -= 4; W32(esp, v); }
/* 8a1bfc: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8a1c01: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a1c07u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a1c07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1c0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1c0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1c0e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a1c13u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a1c13: guest_badaddr(0x8a1c13); return;
}

void f_8a1c70(void) {
  LOAD_REGS();
L_8a1c70: /* 8a1c70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8a1c74: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 8a1c77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1c78: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 8a1c7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1c7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1c7d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a1c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1c82: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8a1c88u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8a1c88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1c8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1c8c: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8a1c91u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8a1c91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1c94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1c95: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8a1c9au); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8a1c9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1c9d: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1cb0(void) {
  LOAD_REGS();
L_8a1cb0: /* 8a1cb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a1cb2: push 0x9d5e3a */
  { uint32_t v = 0x9d5e3au; esp -= 4; W32(esp, v); }
/* 8a1cb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a1cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1cbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a1cc5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a1cc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1cc9: mov esi, ecx */
  esi = ecx;
/* 8a1ccb: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8a1ccf: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x8a1cd5u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 8a1cd5: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 8a1cd8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8a1ce0: mov dword ptr [esi], 0xa06620 */
  W32((uint32_t)(esi), 0xa06620u);
/* 8a1ce6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1cecu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1cec: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8a1cef: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 8a1cf4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1cfau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1cfa: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8a1cfd: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 8a1d02: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1d08u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1d08: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a1d0c: mov eax, esi */
  eax = esi;
/* 8a1d0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a1d0f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a1d16: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1d19: ret  */
  esp += 4; SPILL(); return;
}

void f_8a1d40(void) {
  LOAD_REGS();
L_8a1d40: /* 8a1d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a1d41: mov ebp, esp */
  ebp = esp;
/* 8a1d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a1d45: push 0x9d5e60 */
  { uint32_t v = 0x9d5e60u; esp -= 4; W32(esp, v); }
/* 8a1d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a1d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a1d58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a1d5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a1d5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1d5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1d5e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a1d61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a1d64: mov esi, ecx */
  esi = ecx;
/* 8a1d66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1d67: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8a1d6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a1d71: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x8a1d77u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 8a1d77: mov ecx, edi */
  ecx = edi;
/* 8a1d79: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8a1d7fu); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8a1d7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a1d81: je 0x8a1d8a */
  if (zf) goto L_8a1d8a;
L_8a1d83: /* 8a1d83: mov dword ptr [esi + 0x28], 4 */
  W32((uint32_t)(esi + 0x28u), 0x4u);
L_8a1d8a: /* 8a1d8a: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 8a1d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1d8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1d8f: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8a1d95u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8a1d95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1d98: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 8a1d9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1d9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1d9d: call 0x6c7621 */
  esp -= 4; W32(esp, 0x8a1da2u); SPILL(); f_6c7621(); if (g_unwind) return; RELOAD();
/* 8a1da2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1da5: lea edx, [esi + 0x38] */
  edx = (uint32_t)(esi + 0x38u);
/* 8a1da8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1da9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1daa: call 0x6c530d */
  esp -= 4; W32(esp, 0x8a1dafu); SPILL(); f_6c530d(); if (g_unwind) return; RELOAD();
/* 8a1daf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1db2: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a1db5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1db6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1db7: call 0x6c2b2b */
  esp -= 4; W32(esp, 0x8a1dbcu); SPILL(); f_6c2b2b(); if (g_unwind) return; RELOAD();
/* 8a1dbc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1dbf: mov ecx, edi */
  ecx = edi;
/* 8a1dc1: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x8a1dc7u); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 8a1dc7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a1dca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a1dcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a1dcc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a1dd3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a1dd4: mov esp, ebp */
  esp = ebp;
/* 8a1dd6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a1dd7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a1dda(void) {
  LOAD_REGS();
L_8a1dda: /* 8a1dda: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a1ddd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a1de2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a1de5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1de6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a1de9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a1deeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a1dee(); return;
}

void f_8a1dee(void) {
  LOAD_REGS();
L_8a1dee: /* 8a1dee: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8a1df4: push 0xa1aa50 */
  { uint32_t v = 0xa1aa50u; esp -= 4; W32(esp, v); }
/* 8a1df9: push 0xae754c */
  { uint32_t v = 0xae754cu; esp -= 4; W32(esp, v); }
/* 8a1dfe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a1e00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1e00: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a1e03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1e06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1e08: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8a1e0eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8a1e0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1e0f: push 0xae7554 */
  { uint32_t v = 0xae7554u; esp -= 4; W32(esp, v); }
/* 8a1e14: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a1e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1e16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1e19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1e1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a1e1d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a1e22u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a1e22: guest_badaddr(0x8a1e22); return;
}

void f_8a1e70(void) {
  LOAD_REGS();
L_8a1e70: /* 8a1e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a1e71: mov ebp, esp */
  ebp = esp;
/* 8a1e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a1e75: push 0x9d5e89 */
  { uint32_t v = 0x9d5e89u; esp -= 4; W32(esp, v); }
/* 8a1e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a1e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a1e88: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a1e8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a1e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1e8d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a1e90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a1e91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a1e94: mov edi, ecx */
  edi = ecx;
/* 8a1e96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1e97: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8a1e9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a1ea1: call 0x6ca029 */
  esp -= 4; W32(esp, 0x8a1ea6u); SPILL(); f_6ca029(); if (g_unwind) return; RELOAD();
/* 8a1ea6: lea eax, [edi + 0x1f8] */
  eax = (uint32_t)(edi + 0x1f8u);
/* 8a1eac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1ead: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1eae: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8a1eb3u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8a1eb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1eb6: lea ecx, [edi + 0x1dc] */
  ecx = (uint32_t)(edi + 0x1dcu);
/* 8a1ebc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1ebd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1ebe: call 0x6cab05 */
  esp -= 4; W32(esp, 0x8a1ec3u); SPILL(); f_6cab05(); if (g_unwind) return; RELOAD();
/* 8a1ec3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a1ec5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1ec8: lea eax, [edi + 0x21c] */
  eax = (uint32_t)(edi + 0x21cu);
/* 8a1ece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1ecf: mov ecx, esi */
  ecx = esi;
/* 8a1ed1: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8a1ed4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1ed4: lea ecx, [edi + 0x1e8] */
  ecx = (uint32_t)(edi + 0x1e8u);
/* 8a1eda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1edb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1edc: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8a1ee2u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8a1ee2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1ee5: lea edx, [edi + 0x204] */
  edx = (uint32_t)(edi + 0x204u);
/* 8a1eeb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1eed: call 0x6c8599 */
  esp -= 4; W32(esp, 0x8a1ef2u); SPILL(); f_6c8599(); if (g_unwind) return; RELOAD();
/* 8a1ef2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1ef5: lea eax, [edi + 0x210] */
  eax = (uint32_t)(edi + 0x210u);
/* 8a1efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1efd: call 0x6c10a0 */
  esp -= 4; W32(esp, 0x8a1f02u); SPILL(); f_6c10a0(); if (g_unwind) return; RELOAD();
/* 8a1f02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1f05: lea ecx, [edi + 0x2ec] */
  ecx = (uint32_t)(edi + 0x2ecu);
/* 8a1f0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1f0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1f0d: call 0x6c2d8d */
  esp -= 4; W32(esp, 0x8a1f12u); SPILL(); f_6c2d8d(); if (g_unwind) return; RELOAD();
/* 8a1f12: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1f15: lea edx, [edi + 0x2f8] */
  edx = (uint32_t)(edi + 0x2f8u);
/* 8a1f1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1f1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1f1d: call 0x6c2d8d */
  esp -= 4; W32(esp, 0x8a1f22u); SPILL(); f_6c2d8d(); if (g_unwind) return; RELOAD();
/* 8a1f22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1f25: lea eax, [edi + 0x304] */
  eax = (uint32_t)(edi + 0x304u);
/* 8a1f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1f2d: call 0x6c765d */
  esp -= 4; W32(esp, 0x8a1f32u); SPILL(); f_6c765d(); if (g_unwind) return; RELOAD();
/* 8a1f32: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 8a1f35: mov ebx, 2 */
  ebx = 0x2u;
/* 8a1f3a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1f3d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1f3f: jge 0x8a1fbb */
  if ((sf == of)) goto L_8a1fbb;
L_8a1f41: /* 8a1f41: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a1f44: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1f4au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1f4a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8a1f4d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a1f51: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a1f57u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a1f57: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a1f5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1f5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1f5c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8a1f5f: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8a1f64u); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8a1f64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1f67: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8a1f6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1f6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1f6c: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8a1f71u); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8a1f71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1f74: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8a1f77: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a1f7du); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a1f7d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8a1f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1f81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1f82: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a1f86: call 0x6c67cb */
  esp -= 4; W32(esp, 0x8a1f8bu); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 8a1f8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1f8e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8a1f91: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8a1f94: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a1f9au); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a1f9a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8a1f9d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a1fa1: call 0x6ccb8f */
  esp -= 4; W32(esp, 0x8a1fa6u); SPILL(); f_6ccb8f(); if (g_unwind) return; RELOAD();
/* 8a1fa6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a1fa9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a1fad: call 0x6ccb8f */
  esp -= 4; W32(esp, 0x8a1fb2u); SPILL(); f_6ccb8f(); if (g_unwind) return; RELOAD();
/* 8a1fb2: cmp dword ptr [edi + 0x58], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x58u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a1fb5: jl 0x8a204e */
  if ((sf != of)) goto L_8a204e;
L_8a1fbb: /* 8a1fbb: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 8a1fc0: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8a1fc2: lea ecx, [edi + 0x1ec] */
  ecx = (uint32_t)(edi + 0x1ecu);
/* 8a1fc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1fc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1fca: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 8a1fd0: call 0x6c7fcc */
  esp -= 4; W32(esp, 0x8a1fd5u); SPILL(); f_6c7fcc(); if (g_unwind) return; RELOAD();
/* 8a1fd5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a1fd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1fda: lea eax, [edi + 0x220] */
  eax = (uint32_t)(edi + 0x220u);
/* 8a1fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a1fe1: mov ecx, esi */
  ecx = esi;
/* 8a1fe3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8a1fe6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a1fe6: lea ecx, [edi + 0x134] */
  ecx = (uint32_t)(edi + 0x134u);
/* 8a1fec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a1fed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1fee: call 0x6c6f14 */
  esp -= 4; W32(esp, 0x8a1ff3u); SPILL(); f_6c6f14(); if (g_unwind) return; RELOAD();
/* 8a1ff3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a1ff6: lea edx, [edi + 0x164] */
  edx = (uint32_t)(edi + 0x164u);
/* 8a1ffc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a1ffd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a1ffe: call 0x6c772f */
  esp -= 4; W32(esp, 0x8a2003u); SPILL(); f_6c772f(); if (g_unwind) return; RELOAD();
/* 8a2003: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2006: lea eax, [edi + 0x17c] */
  eax = (uint32_t)(edi + 0x17cu);
/* 8a200c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a200d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a200e: call 0x6c4d81 */
  esp -= 4; W32(esp, 0x8a2013u); SPILL(); f_6c4d81(); if (g_unwind) return; RELOAD();
/* 8a2013: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2016: lea ecx, [edi + 0x194] */
  ecx = (uint32_t)(edi + 0x194u);
/* 8a201c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a201d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a201e: call 0x6c231f */
  esp -= 4; W32(esp, 0x8a2023u); SPILL(); f_6c231f(); if (g_unwind) return; RELOAD();
/* 8a2023: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2026: lea edx, [edi + 0x1ac] */
  edx = (uint32_t)(edi + 0x1acu);
/* 8a202c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a202d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a202e: call 0x6c9d1d */
  esp -= 4; W32(esp, 0x8a2033u); SPILL(); f_6c9d1d(); if (g_unwind) return; RELOAD();
/* 8a2033: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2036: lea eax, [edi + 0x1c4] */
  eax = (uint32_t)(edi + 0x1c4u);
/* 8a203c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a203d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a203e: call 0x6c9d1d */
  esp -= 4; W32(esp, 0x8a2043u); SPILL(); f_6c9d1d(); if (g_unwind) return; RELOAD();
/* 8a2043: mov ecx, dword ptr [0xcfa408] */
  ecx = R32((uint32_t)(0xcfa408u));
/* 8a2049: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a204c: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
L_8a204e: /* 8a204e: mov ecx, esi */
  ecx = esi;
/* 8a2050: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x8a2056u); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 8a2056: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2058: jne 0x8a212a */
  if (!zf) goto L_8a212a;
L_8a205e: /* 8a205e: lea edx, [edi + 0x2e0] */
  edx = (uint32_t)(edi + 0x2e0u);
/* 8a2064: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2066: call 0x6c3df5 */
  esp -= 4; W32(esp, 0x8a206bu); SPILL(); f_6c3df5(); if (g_unwind) return; RELOAD();
/* 8a206b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a206e: lea ebx, [edi + 0x224] */
  ebx = (uint32_t)(edi + 0x224u);
/* 8a2074: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a2075: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2076: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8a207cu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8a207c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a207f: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8a2082: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2084: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8a2089u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8a2089: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a208c: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a208f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a2090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2091: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8a2096u); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8a2096: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2099: lea ebx, [edi + 0x250] */
  ebx = (uint32_t)(edi + 0x250u);
/* 8a209f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a20a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a20a1: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8a20a7u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8a20a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a20aa: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8a20ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a20ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a20af: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8a20b4u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8a20b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a20b7: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a20ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a20bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a20bc: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8a20c1u); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8a20c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a20c4: lea ebx, [edi + 0x27c] */
  ebx = (uint32_t)(edi + 0x27cu);
/* 8a20ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a20cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a20cc: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8a20d2u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8a20d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a20d5: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8a20d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a20d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a20da: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8a20dfu); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8a20df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a20e2: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a20e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a20e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a20e7: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8a20ecu); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8a20ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a20ef: lea ebx, [edi + 0x2a8] */
  ebx = (uint32_t)(edi + 0x2a8u);
/* 8a20f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a20f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a20f7: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8a20fdu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8a20fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2100: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8a2103: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2104: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2105: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8a210au); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8a210a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a210d: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a2110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a2111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2112: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8a2117u); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8a2117: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a211a: lea eax, [edi + 0x2d4] */
  eax = (uint32_t)(edi + 0x2d4u);
/* 8a2120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2122: call 0x6c765d */
  esp -= 4; W32(esp, 0x8a2127u); SPILL(); f_6c765d(); if (g_unwind) return; RELOAD();
/* 8a2127: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a212a: /* 8a212a: mov ecx, esi */
  ecx = esi;
/* 8a212c: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8a2132u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8a2132: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a2135: jl 0x8a2148 */
  if ((sf != of)) goto L_8a2148;
L_8a2137: /* 8a2137: lea ecx, [edi + 0x130] */
  ecx = (uint32_t)(edi + 0x130u);
/* 8a213d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a213e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a213f: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x8a2145u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 8a2145: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a2148: /* 8a2148: mov ecx, esi */
  ecx = esi;
/* 8a214a: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8a2150u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8a2150: cmp eax, 0x7c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a2153: jl 0x8a2183 */
  if ((sf != of)) goto L_8a2183;
L_8a2155: /* 8a2155: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a2157: lea eax, [edi + 0x334] */
  eax = (uint32_t)(edi + 0x334u);
/* 8a215d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a215e: mov ecx, esi */
  ecx = esi;
/* 8a2160: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8a2163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a2163: lea ecx, [edi + 0x310] */
  ecx = (uint32_t)(edi + 0x310u);
/* 8a2169: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a216a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a216b: call 0x6cc06d */
  esp -= 4; W32(esp, 0x8a2170u); SPILL(); f_6cc06d(); if (g_unwind) return; RELOAD();
/* 8a2170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2173: lea edx, [edi + 0x31c] */
  edx = (uint32_t)(edi + 0x31cu);
/* 8a2179: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a217a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a217b: call 0x6c8175 */
  esp -= 4; W32(esp, 0x8a2180u); SPILL(); f_6c8175(); if (g_unwind) return; RELOAD();
/* 8a2180: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a2183: /* 8a2183: mov ecx, esi */
  ecx = esi;
/* 8a2185: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8a218bu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8a218b: cmp eax, 0x7d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a218e: jl 0x8a21a0 */
  if ((sf != of)) goto L_8a21a0;
L_8a2190: /* 8a2190: add edi, 0x328 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x328u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a2196: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a2197: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2198: call 0x6c8e13 */
  esp -= 4; W32(esp, 0x8a219du); SPILL(); f_6c8e13(); if (g_unwind) return; RELOAD();
/* 8a219d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a21a0: /* 8a21a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a21a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a21a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a21a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a21ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a21ad: mov esp, ebp */
  esp = ebp;
/* 8a21af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a21b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a21b3(void) {
  LOAD_REGS();
L_8a21b3: /* 8a21b3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a21b6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a21bb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a21be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a21bf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a21c2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a21c7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a21c7(); return;
}

void f_8a21c7(void) {
  LOAD_REGS();
L_8a21c7: /* 8a21c7: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8a21cd: push 0xa1aa90 */
  { uint32_t v = 0xa1aa90u; esp -= 4; W32(esp, v); }
/* 8a21d2: push 0xae75fc */
  { uint32_t v = 0xae75fcu; esp -= 4; W32(esp, v); }
/* 8a21d7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a21d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a21d9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a21dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a21df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a21e1: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8a21e7u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8a21e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a21e8: push 0xae7604 */
  { uint32_t v = 0xae7604u; esp -= 4; W32(esp, v); }
/* 8a21ed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a21efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a21ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a21f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a21f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a21f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a21fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a21fb: guest_badaddr(0x8a21fb); return;
}

void f_8a22f0(void) {
  LOAD_REGS();
L_8a22f0: /* 8a22f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a22f4: cmp byte ptr [eax + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8a22f8: je 0x8a2321 */
  if (zf) goto L_8a2321;
L_8a22fa: /* 8a22fa: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 8a2300: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2303: jne 0x8a2319 */
  if (!zf) goto L_8a2319;
L_8a2305: /* 8a2305: mov eax, dword ptr [ecx + 0x314] */
  eax = R32((uint32_t)(ecx + 0x314u));
/* 8a230b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a230d: jg 0x8a2321 */
  if ((!zf && sf == of)) goto L_8a2321;
L_8a230f: /* 8a230f: mov eax, dword ptr [ecx + 0x320] */
  eax = R32((uint32_t)(ecx + 0x320u));
/* 8a2315: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a2317: jg 0x8a2321 */
  if ((!zf && sf == of)) goto L_8a2321;
L_8a2319: /* 8a2319: mov eax, 1 */
  eax = 0x1u;
/* 8a231e: ret 4 */
  esp += 8; SPILL(); return;
L_8a2321: /* 8a2321: xor eax, eax */
  eax = 0;
/* 8a2323: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a2340(void) {
  LOAD_REGS();
L_8a2340: /* 8a2340: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8a2342: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8a2344: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 8a2346: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8a2349: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8a234c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 8a234f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8a2352: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8a2355: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 8a2358: ret  */
  esp += 4; SPILL(); return;
}

void f_8a2370(void) {
  LOAD_REGS();
L_8a2370: /* 8a2370: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8a2373: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8a2375: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8a2378: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a237a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a237c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8a237e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8a2380: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8a2382: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a2384: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a2386: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8a2388: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 8a238a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a238c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a238e: ret  */
  esp += 4; SPILL(); return;
}

void f_8a23a0(void) {
  LOAD_REGS();
L_8a23a0: /* 8a23a0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8a23a3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8a23a5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8a23a8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a23aa: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a23ac: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8a23ae: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8a23b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8a23b2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a23b4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a23b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8a23b8: fsqrt  */
  ST0 = sqrt(ST0);
/* 8a23ba: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 8a23bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a23be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a23c0: ret  */
  esp += 4; SPILL(); return;
}

void f_8a23e0(void) {
  LOAD_REGS();
L_8a23e0: /* 8a23e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a23e1: mov ebp, esp */
  ebp = esp;
/* 8a23e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a23e5: push 0x9d5ea0 */
  { uint32_t v = 0x9d5ea0u; esp -= 4; W32(esp, v); }
/* 8a23ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a23f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a23f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a23f8: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a23fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a23ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2400: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8a2403: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a2404: mov ebx, ecx */
  ebx = ecx;
/* 8a2406: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a2408: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a240b: xor edi, edi */
  edi = 0;
/* 8a240d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a240e: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 8a2411: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8a2414: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x8a2417u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a2417: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a2419: je 0x8a2484 */
  if (zf) goto L_8a2484;
L_8a241b: /* 8a241b: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 8a241e: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 8a2421: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2422: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8a2425: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2426: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 8a2429: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a242c: mov eax, esp */
  eax = esp;
/* 8a242e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a2430: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 8a2433: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a2436: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8a2439: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8a243c: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 8a243f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2442: mov edx, esp */
  edx = esp;
/* 8a2444: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a2446: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8a2449: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a244c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a244f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8a2452: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8a2455: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2458: mov ecx, esp */
  ecx = esp;
/* 8a245a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a245c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8a245f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a2462: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a2465: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2466: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a2469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_8a246a: /* 8a246a: mov ecx, ebx */
  ecx = ebx;
/* 8a246c: call 0x6c7572 */
  esp -= 4; W32(esp, 0x8a2471u); SPILL(); f_6c7572(); if (g_unwind) return; RELOAD();
/* 8a2471: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a2474: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a247b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a247c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a247d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a247e: mov esp, ebp */
  esp = ebp;
/* 8a2480: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a2481: ret 0x34 */
  esp += 56; SPILL(); return;
L_8a2484: /* 8a2484: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8a2486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2487: mov ecx, ebx */
  ecx = ebx;
/* 8a2489: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8a248fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a248f: mov esi, eax */
  esi = eax;
/* 8a2491: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a2493: je 0x8a2798 */
  if (zf) goto L_8a2798;
L_8a2499: /* 8a2499: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 8a249e: mov ecx, esi */
  ecx = esi;
/* 8a24a0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8a24a6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8a24a6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a24a8: je 0x8a2798 */
  if (zf) goto L_8a2798;
L_8a24ae: /* 8a24ae: mov eax, dword ptr [ebx + 0x314] */
  eax = R32((uint32_t)(ebx + 0x314u));
/* 8a24b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a24b6: mov edi, esi */
  edi = esi;
/* 8a24b8: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8a24bb: jg 0x8a24cb */
  if ((!zf && sf == of)) goto L_8a24cb;
L_8a24bd: /* 8a24bd: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 8a24c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a24c5: jle 0x8a279b */
  if ((zf || sf != of)) goto L_8a279b;
L_8a24cb: /* 8a24cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a24ce: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8a24d1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8a24d3: mov dword ptr [eax + 0x24], 0x3f800000 */
  W32((uint32_t)(eax + 0x24u), 0x3f800000u);
/* 8a24da: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a24dc: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 8a24e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a24e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a24e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a24e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a24e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a24ea: mov ecx, esi */
  ecx = esi;
/* 8a24ec: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x8a24f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a24f2: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 8a24f8: cmp eax, dword ptr [ebx + 0x320] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a24fe: jne 0x8a28c6 */
  if (!zf) goto L_8a28c6;
L_8a2504: /* 8a2504: xor ecx, ecx */
  ecx = 0;
/* 8a2506: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8a2509: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a2510: /* 8a2510: cmp ecx, dword ptr [ebx + 0x32c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a2516: jge 0x8a28dd */
  if ((sf == of)) goto L_8a28dd;
L_8a251c: /* 8a251c: mov edx, dword ptr [ebx + 0x31c] */
  edx = R32((uint32_t)(ebx + 0x31cu));
/* 8a2522: mov eax, ecx */
  eax = ecx;
/* 8a2524: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8a2527: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a2529: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 8a252f: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8a2532: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a2534: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8a2537: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2538: mov ecx, edi */
  ecx = edi;
/* 8a253a: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a253fu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a253f: mov esi, eax */
  esi = eax;
/* 8a2541: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a2544: jne 0x8a255b */
  if (!zf) goto L_8a255b;
L_8a2546: /* 8a2546: push 0x3e */
  { uint32_t v = 0x3eu; esp -= 4; W32(esp, v); }
/* 8a2548: push 0xae89f8 */
  { uint32_t v = 0xae89f8u; esp -= 4; W32(esp, v); }
/* 8a254d: push 0xae8a14 */
  { uint32_t v = 0xae8a14u; esp -= 4; W32(esp, v); }
/* 8a2552: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a2558u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a2558: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a255b: /* 8a255b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a255c: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 8a2562: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2563: mov ecx, edi */
  ecx = edi;
/* 8a2565: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a256au); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a256a: mov ecx, dword ptr [ebp - 0x110] */
  ecx = R32((uint32_t)(ebp + 0xfffffef0u));
/* 8a2570: mov esi, dword ptr [ebp - 0x118] */
  esi = R32((uint32_t)(ebp + 0xfffffee8u));
/* 8a2576: mov edi, dword ptr [ebp - 0x114] */
  edi = R32((uint32_t)(ebp + 0xfffffeecu));
/* 8a257c: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8a257f: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8a2582: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2583: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8a2589: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x8a258fu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 8a258f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8a2592: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a2595: mov eax, esi */
  eax = esi;
/* 8a2597: mov ecx, edi */
  ecx = edi;
/* 8a2599: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a259f: mov esi, ebx */
  esi = ebx;
/* 8a25a1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8a25a3: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8a25a6: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8a25a9: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8a25ac: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 8a25af: mov esi, ebx */
  esi = ebx;
/* 8a25b1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8a25b3: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a25b6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8a25b9: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8a25bc: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a25bf: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8a25c2: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a25c5: mov dword ptr [ebp - 0xe0], edx */
  W32((uint32_t)(ebp + 0xffffff20u), edx);
/* 8a25cb: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a25d1: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8a25d4: mov edx, esi */
  edx = esi;
/* 8a25d6: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8a25d8: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 8a25db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8a25de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a25e1: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8a25e4: mov edx, esi */
  edx = esi;
/* 8a25e6: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a25e8: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 8a25ee: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a25f1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a25f4: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8a25f7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a25fa: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8a2601: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a2604: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 8a260a: add edi, 0x294 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a2610: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8a2617: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a261a: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8a2620: mov ecx, edi */
  ecx = edi;
/* 8a2622: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a2624: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8a262b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a262e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8a2631: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a2634: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a2637: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8a263a: mov edx, edi */
  edx = edi;
/* 8a263c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a263e: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8a2644: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8a2647: xor eax, eax */
  eax = 0;
/* 8a2649: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a264c: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 8a2652: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8a2655: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 8a265b: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 8a2661: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 8a2667: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 8a266d: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 8a2673: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 8a2679: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 8a267f: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8a2682: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 8a2685: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8a2688: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a268b: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 8a268e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a268f: mov dword ptr [ebp - 0x74], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff8cu), 0xffffffffu);
/* 8a2696: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8a2699: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a269b: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 8a269e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a269f: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 8a26a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a26a5: mov ecx, esp */
  ecx = esp;
/* 8a26a7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a26a9: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 8a26ac: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8a26af: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 8a26b2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a26b5: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8a26b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a26bb: mov ecx, esp */
  ecx = esp;
/* 8a26bd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a26bf: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8a26c2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8a26c5: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8a26c8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a26cb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8a26ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a26d1: mov ecx, esp */
  ecx = esp;
/* 8a26d3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a26d5: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8a26d8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8a26db: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8a26de: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a26e1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8a26e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a26e5: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a26e8: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 8a26ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a26ef: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x8a26f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a26f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a26f4: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a26f7: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8a26fa: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 8a26fc: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a26ff: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 8a2702: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a2705: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 8a2708: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a270b: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8a270e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a2711: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8a2714: mov edx, esi */
  edx = esi;
/* 8a2716: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8a2718: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8a271b: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8a271e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a2721: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8a2723: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a2726: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8a2729: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a272c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8a272f: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a2732: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8a2735: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a2738: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a273b: mov dword ptr [ebp - 0xd4], esi */
  W32((uint32_t)(ebp + 0xffffff2cu), esi);
/* 8a2741: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8a2744: mov esi, edi */
  esi = edi;
/* 8a2746: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8a2748: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8a274b: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8a274e: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8a2751: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8a2753: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 8a2759: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 8a275c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 8a275f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8a2762: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 8a2765: jne 0x8a2784 */
  if (!zf) goto L_8a2784;
L_8a2767: /* 8a2767: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8a276a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a276d: fcomp dword ptr [edi + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x24u)));
  FPOP();
/* 8a2770: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a2772: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a2775: jp 0x8a2784 */
  if (pf) goto L_8a2784;
L_8a2777: /* 8a2777: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a277c: lea esi, [ebp - 0x9c] */
  esi = (uint32_t)(ebp + 0xffffff64u);
/* 8a2782: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_8a2784: /* 8a2784: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a2787: mov ebx, dword ptr [ebp - 0x54] */
  ebx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8a278a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a278d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a278e: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8a2791: mov ecx, eax */
  ecx = eax;
/* 8a2793: jmp 0x8a2510 */
  goto L_8a2510;
L_8a2798: /* 8a2798: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_8a279b: /* 8a279b: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 8a279e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a279f: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
/* 8a27a2: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8a27a9: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8a27b0: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8a27b7: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x8a27bdu); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 8a27bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a27bf: jne 0x8a29d6 */
  if (!zf) goto L_8a29d6;
L_8a27c5: /* 8a27c5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8a27c8: cmp byte ptr [eax + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8a27cc: jne 0x8a29d6 */
  if (!zf) goto L_8a29d6;
L_8a27d2: /* 8a27d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a27d4: je 0x8a29be */
  if (zf) goto L_8a29be;
L_8a27da: /* 8a27da: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8a27dd: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8a27e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a27e3: mov ecx, esp */
  ecx = esp;
/* 8a27e5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a27e7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8a27ea: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a27ed: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 8a27f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a27f1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a27f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x8a27f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 8a27f9: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8a27fc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8a27ff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2802: mov ecx, esp */
  ecx = esp;
/* 8a2804: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a2806: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8a2809: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a280c: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8a280f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2810: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a2813: call 0x6c882d */
  esp -= 4; W32(esp, 0x8a2818u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 8a2818: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a281b: mov dword ptr [ebp - 0xb4], 0x7f7fffff */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x7f7fffffu);
/* 8a2825: mov dword ptr [ebp + 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0x38u), 0xffffffffu);
/* 8a282c: xor eax, eax */
  eax = 0;
L_8a282e: /* 8a282e: cmp eax, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a2834: mov dword ptr [ebp + 0x34], eax */
  W32((uint32_t)(ebp + 0x34u), eax);
/* 8a2837: jge 0x8a2917 */
  if ((sf == of)) goto L_8a2917;
L_8a283d: /* 8a283d: mov ecx, dword ptr [edi + 0x2dc] */
  ecx = R32((uint32_t)(edi + 0x2dcu));
/* 8a2843: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 8a2846: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2848: je 0x8a28bd */
  if (zf) goto L_8a28bd;
L_8a284a: /* 8a284a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a284b: call 0x9285f0 */
  esp -= 4; W32(esp, 0x8a2850u); SPILL(); f_9285f0(); if (g_unwind) return; RELOAD();
/* 8a2850: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2852: jne 0x8a2865 */
  if (!zf) goto L_8a2865;
L_8a2854: /* 8a2854: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2855: call 0x9287f0 */
  esp -= 4; W32(esp, 0x8a285au); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 8a285a: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8a285d: je 0x8a2865 */
  if (zf) goto L_8a2865;
L_8a285f: /* 8a285f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2860: call 0x928630 */
  esp -= 4; W32(esp, 0x8a2865u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_8a2865: /* 8a2865: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2866: call 0x9287f0 */
  esp -= 4; W32(esp, 0x8a286bu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 8a286b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a286c: call 0x92a860 */
  esp -= 4; W32(esp, 0x8a2871u); SPILL(); f_92a860(); if (g_unwind) return; RELOAD();
/* 8a2871: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2873: je 0x8a28bd */
  if (zf) goto L_8a28bd;
L_8a2875: /* 8a2875: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 8a287b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a287c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a287f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2880: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 8a2883: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2884: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2885: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x8a2887u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a2887: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2889: je 0x8a28bd */
  if (zf) goto L_8a28bd;
L_8a288b: /* 8a288b: cmp dword ptr [ebp + 0x38], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x38u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a288f: je 0x8a28a1 */
  if (zf) goto L_8a28a1;
L_8a2891: /* 8a2891: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8a2894: fcomp dword ptr [ebp - 0xb4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff4cu)));
  FPOP();
/* 8a289a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a289c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a289f: jp 0x8a28bd */
  if (pf) goto L_8a28bd;
L_8a28a1: /* 8a28a1: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 8a28a4: mov ecx, 8 */
  ecx = 0x8u;
/* 8a28a9: lea esi, [ebp - 0x8c] */
  esi = (uint32_t)(ebp + 0xffffff74u);
/* 8a28af: lea edi, [ebp - 0xd0] */
  edi = (uint32_t)(ebp + 0xffffff30u);
/* 8a28b5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a28b7: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a28ba: mov dword ptr [ebp + 0x38], eax */
  W32((uint32_t)(ebp + 0x38u), eax);
L_8a28bd: /* 8a28bd: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 8a28c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a28c1: jmp 0x8a282e */
  goto L_8a282e;
L_8a28c6: /* 8a28c6: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a28cc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a28ce: push 0xae8a30 */
  { uint32_t v = 0xae8a30u; esp -= 4; W32(esp, v); }
/* 8a28d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a28d4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a28dau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a28da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a28dd: /* 8a28dd: xor eax, eax */
  eax = 0;
/* 8a28df: nop  */
L_8a28e0: /* 8a28e0: cmp eax, dword ptr [ebx + 0x314] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x314u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a28e6: jge 0x8a28eb */
  if ((sf == of)) goto L_8a28eb;
L_8a28e8: /* 8a28e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a28e9: jmp 0x8a28e0 */
  goto L_8a28e0;
L_8a28eb: /* 8a28eb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a28ee: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 8a28f1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8a28f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a28f9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a28fc: jp 0x8a29be */
  if (pf) goto L_8a29be;
L_8a2902: /* 8a2902: xor eax, eax */
  eax = 0;
/* 8a2904: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a2907: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a290e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a290f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a2910: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a2911: mov esp, ebp */
  esp = ebp;
/* 8a2913: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a2914: ret 0x34 */
  esp += 56; SPILL(); return;
L_8a2917: /* 8a2917: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 8a291a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8a291d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a291f: je 0x8a29b8 */
  if (zf) goto L_8a29b8;
L_8a2925: /* 8a2925: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a2928: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 8a292e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a292f: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8a2932: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2933: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x8a2938u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 8a2938: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8a293b: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8a293e: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 8a2944: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8a2947: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 8a294d: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8a2950: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 8a2956: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8a2959: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 8a295c: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 8a295f: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 8a2962: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a2964: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 8a2967: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8a296a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8a296d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a296f: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 8a2972: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 8a2974: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 8a2977: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 8a297a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8a297d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8a2980: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8a2983: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2986: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8a2988: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a298a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8a298c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8a298e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a2990: fsqrt  */
  ST0 = sqrt(ST0);
/* 8a2992: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8a2994: fdivr dword ptr [ebp - 0xb4] */
  ST0 = (F32((uint32_t)(ebp + 0xffffff4cu))) / ST0;
/* 8a299a: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* 8a299d: mov dword ptr [edi + 0x2f8], eax */
  W32((uint32_t)(edi + 0x2f8u), eax);
/* 8a29a3: xor eax, eax */
  eax = 0;
/* 8a29a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a29a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a29af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a29b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a29b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a29b2: mov esp, ebp */
  esp = ebp;
/* 8a29b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a29b5: ret 0x34 */
  esp += 56; SPILL(); return;
L_8a29b8: /* 8a29b8: mov dword ptr [edi + 0x2f8], eax */
  W32((uint32_t)(edi + 0x2f8u), eax);
L_8a29be: /* 8a29be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a29c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a29c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a29c3: mov eax, 1 */
  eax = 0x1u;
/* 8a29c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a29cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a29d0: mov esp, ebp */
  esp = ebp;
/* 8a29d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a29d3: ret 0x34 */
  esp += 56; SPILL(); return;
L_8a29d6: /* 8a29d6: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 8a29d9: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 8a29dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a29dd: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 8a29e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a29e1: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* 8a29e4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a29e7: mov ecx, esp */
  ecx = esp;
/* 8a29e9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a29eb: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 8a29ee: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a29f1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a29f4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8a29f7: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 8a29fa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a29fd: mov eax, esp */
  eax = esp;
/* 8a29ff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a2a01: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8a2a04: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a2a07: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8a2a0a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8a2a0d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8a2a10: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2a13: mov edx, esp */
  edx = esp;
/* 8a2a15: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a2a17: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8a2a1a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a2a1d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8a2a20: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a2a23: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8a2a26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2a27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2a28: jmp 0x8a246a */
  goto L_8a246a;
}

void f_8a2a2d(void) {
  LOAD_REGS();
L_8a2a2d: /* 8a2a2d: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 8a2a33: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a2a38: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a2a3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2a3c: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8a2a3f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a2a44u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a2a44(); return;
}

void f_8a2a44(void) {
  LOAD_REGS();
L_8a2a44: /* 8a2a44: push 0xa1aacc */
  { uint32_t v = 0xa1aaccu; esp -= 4; W32(esp, v); }
/* 8a2a49: push 0xae8aa8 */
  { uint32_t v = 0xae8aa8u; esp -= 4; W32(esp, v); }
/* 8a2a4e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a2a54u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a2a54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a2a57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a2a59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a2a5b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a2a60u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a2a60: guest_badaddr(0x8a2a60); return;
}

void f_8a2c20(void) {
  LOAD_REGS();
L_8a2c20: /* 8a2c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a2c21: mov ebp, esp */
  ebp = esp;
/* 8a2c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a2c25: push 0x9d5eb0 */
  { uint32_t v = 0x9d5eb0u; esp -= 4; W32(esp, v); }
/* 8a2c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a2c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a2c38: sub esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2c3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a2c3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2c40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a2c41: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a2c44: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 8a2c4a: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2c4d: mov esi, ecx */
  esi = ecx;
/* 8a2c4f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a2c52: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 8a2c55: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a2c5c: je 0x8a2cad */
  if (zf) goto L_8a2cad;
L_8a2c5e: /* 8a2c5e: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 8a2c61: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8a2c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2c65: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8a2c68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2c6b: mov ecx, esp */
  ecx = esp;
/* 8a2c6d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a2c6f: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8a2c72: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a2c75: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a2c78: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8a2c7b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8a2c7e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2c81: mov eax, esp */
  eax = esp;
/* 8a2c83: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a2c85: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8a2c88: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a2c8b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8a2c8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a2c8f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8a2c92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_8a2c93: /* 8a2c93: mov ecx, esi */
  ecx = esi;
/* 8a2c95: call 0x6c59c0 */
  esp -= 4; W32(esp, 0x8a2c9au); SPILL(); f_6c59c0(); if (g_unwind) return; RELOAD();
/* 8a2c9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a2c9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a2ca4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a2ca5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a2ca6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a2ca7: mov esp, ebp */
  esp = ebp;
/* 8a2ca9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a2caa: ret 0x24 */
  esp += 40; SPILL(); return;
L_8a2cad: /* 8a2cad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8a2caf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a2cb0: mov ecx, esi */
  ecx = esi;
/* 8a2cb2: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x8a2cb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a2cb8: mov ebx, eax */
  ebx = eax;
/* 8a2cba: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2cbc: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8a2cbf: je 0x8a2fd3 */
  if (zf) goto L_8a2fd3;
L_8a2cc5: /* 8a2cc5: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 8a2cca: mov ecx, ebx */
  ecx = ebx;
/* 8a2ccc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8a2cd2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8a2cd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2cd4: je 0x8a2fd3 */
  if (zf) goto L_8a2fd3;
L_8a2cda: /* 8a2cda: mov eax, dword ptr [esi + 0x314] */
  eax = R32((uint32_t)(esi + 0x314u));
/* 8a2ce0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a2ce2: jg 0x8a2cf2 */
  if ((!zf && sf == of)) goto L_8a2cf2;
L_8a2ce4: /* 8a2ce4: mov eax, dword ptr [esi + 0x320] */
  eax = R32((uint32_t)(esi + 0x320u));
/* 8a2cea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a2cec: jle 0x8a2fd3 */
  if ((zf || sf != of)) goto L_8a2fd3;
L_8a2cf2: /* 8a2cf2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a2cf5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8a2cf7: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 8a2cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2cfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a2d00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a2d02: mov dword ptr [ecx + 0x24], 0x3f800000 */
  W32((uint32_t)(ecx + 0x24u), 0x3f800000u);
/* 8a2d09: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8a2d0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a2d0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a2d0e: mov ecx, ebx */
  ecx = ebx;
/* 8a2d10: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x8a2d16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a2d16: mov eax, dword ptr [esi + 0x32c] */
  eax = R32((uint32_t)(esi + 0x32cu));
/* 8a2d1c: cmp eax, dword ptr [esi + 0x320] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a2d22: jne 0x8a2f92 */
  if (!zf) goto L_8a2f92;
L_8a2d28: /* 8a2d28: xor ecx, ecx */
  ecx = 0;
/* 8a2d2a: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8a2d2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a2d30: /* 8a2d30: cmp ecx, dword ptr [esi + 0x32c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a2d36: jge 0x8a2fa9 */
  if ((sf == of)) goto L_8a2fa9;
L_8a2d3c: /* 8a2d3c: mov edx, dword ptr [esi + 0x31c] */
  edx = R32((uint32_t)(esi + 0x31cu));
/* 8a2d42: mov eax, ecx */
  eax = ecx;
/* 8a2d44: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8a2d47: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a2d49: mov edx, dword ptr [esi + 0x328] */
  edx = R32((uint32_t)(esi + 0x328u));
/* 8a2d4f: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8a2d52: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a2d54: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8a2d57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2d58: mov ecx, ebx */
  ecx = ebx;
/* 8a2d5a: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a2d5fu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a2d5f: mov esi, eax */
  esi = eax;
/* 8a2d61: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a2d64: jne 0x8a2d7e */
  if (!zf) goto L_8a2d7e;
L_8a2d66: /* 8a2d66: push 0xef */
  { uint32_t v = 0xefu; esp -= 4; W32(esp, v); }
/* 8a2d6b: push 0xae8ab0 */
  { uint32_t v = 0xae8ab0u; esp -= 4; W32(esp, v); }
/* 8a2d70: push 0xae8acc */
  { uint32_t v = 0xae8accu; esp -= 4; W32(esp, v); }
/* 8a2d75: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a2d7bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a2d7b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a2d7e: /* 8a2d7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a2d7f: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 8a2d85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2d86: mov ecx, ebx */
  ecx = ebx;
/* 8a2d88: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a2d8du); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a2d8d: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 8a2d93: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 8a2d99: mov ebx, dword ptr [ebp - 0xdc] */
  ebx = R32((uint32_t)(ebp + 0xffffff24u));
/* 8a2d9f: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8a2da2: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8a2da5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2da6: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 8a2dac: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x8a2db2u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 8a2db2: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a2db5: mov eax, esi */
  eax = esi;
/* 8a2db7: mov ecx, ebx */
  ecx = ebx;
/* 8a2db9: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a2dbf: mov esi, edi */
  esi = edi;
/* 8a2dc1: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8a2dc3: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 8a2dc6: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8a2dc9: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8a2dcc: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 8a2dcf: mov esi, edi */
  esi = edi;
/* 8a2dd1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8a2dd3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a2dd6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8a2dd9: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8a2ddc: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a2ddf: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8a2de2: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a2de5: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 8a2deb: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a2df1: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 8a2df4: mov edx, esi */
  edx = esi;
/* 8a2df6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8a2df8: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8a2dfb: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8a2dfe: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a2e01: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8a2e04: mov edx, esi */
  edx = esi;
/* 8a2e06: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a2e08: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 8a2e0e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a2e11: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a2e14: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8a2e17: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8a2e1a: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8a2e21: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a2e24: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 8a2e27: add ebx, 0x294 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a2e2d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8a2e34: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a2e37: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 8a2e3a: mov ecx, ebx */
  ecx = ebx;
/* 8a2e3c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a2e3e: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8a2e45: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a2e48: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8a2e4b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a2e4e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a2e51: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8a2e54: mov edx, ebx */
  edx = ebx;
/* 8a2e56: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a2e58: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a2e5b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8a2e5e: xor eax, eax */
  eax = 0;
/* 8a2e60: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8a2e63: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a2e66: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8a2e69: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 8a2e6f: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 8a2e75: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 8a2e7b: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 8a2e81: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8a2e84: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 8a2e87: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8a2e8a: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8a2e8d: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8a2e90: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 8a2e93: mov dword ptr [ebp - 0x68], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0xffffffffu);
/* 8a2e9a: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8a2e9d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a2ea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2ea1: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8a2ea4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2ea7: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8a2eaa: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a2eac: mov edx, esp */
  edx = esp;
/* 8a2eae: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8a2eb0: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 8a2eb3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a2eb6: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8a2eb9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8a2ebc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8a2ebf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2ec2: mov edx, esp */
  edx = esp;
/* 8a2ec4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8a2ec6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8a2ec9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a2ecc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8a2ecf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8a2ed2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8a2ed5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a2ed6: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8a2edc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2edd: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a2ee0: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x8a2ee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a2ee3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a2ee5: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8a2ee8: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a2eeb: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8a2eed: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a2ef0: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 8a2ef3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a2ef6: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8a2ef9: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a2efc: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8a2eff: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a2f02: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8a2f05: mov edx, esi */
  edx = esi;
/* 8a2f07: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8a2f09: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8a2f0c: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8a2f0f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a2f12: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8a2f14: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a2f17: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8a2f1a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a2f1d: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8a2f20: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8a2f23: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8a2f26: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a2f29: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a2f2c: mov dword ptr [ebp - 0xa8], esi */
  W32((uint32_t)(ebp + 0xffffff58u), esi);
/* 8a2f32: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8a2f35: mov esi, ebx */
  esi = ebx;
/* 8a2f37: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8a2f39: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8a2f3c: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8a2f3f: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8a2f42: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 8a2f44: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 8a2f4a: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 8a2f4d: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8a2f50: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8a2f53: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 8a2f56: jne 0x8a2f7b */
  if (!zf) goto L_8a2f7b;
L_8a2f58: /* 8a2f58: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a2f5b: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a2f60: lea esi, [ebp - 0x90] */
  esi = (uint32_t)(ebp + 0xffffff70u);
/* 8a2f66: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a2f68: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a2f6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a2f72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a2f73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a2f74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a2f75: mov esp, ebp */
  esp = ebp;
/* 8a2f77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a2f78: ret 0x24 */
  esp += 40; SPILL(); return;
L_8a2f7b: /* 8a2f7b: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a2f7e: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a2f81: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a2f84: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a2f87: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a2f88: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a2f8b: mov ecx, eax */
  ecx = eax;
/* 8a2f8d: jmp 0x8a2d30 */
  goto L_8a2d30;
L_8a2f92: /* 8a2f92: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a2f98: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a2f9a: push 0xae8ae8 */
  { uint32_t v = 0xae8ae8u; esp -= 4; W32(esp, v); }
/* 8a2f9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a2fa0: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a2fa6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a2fa6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a2fa9: /* 8a2fa9: xor eax, eax */
  eax = 0;
/* 8a2fab: jmp 0x8a2fb0 */
  goto L_8a2fb0;
L_8a2fb0: /* 8a2fb0: cmp eax, dword ptr [esi + 0x314] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x314u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a2fb6: jge 0x8a2fbb */
  if ((sf == of)) goto L_8a2fbb;
L_8a2fb8: /* 8a2fb8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a2fb9: jmp 0x8a2fb0 */
  goto L_8a2fb0;
L_8a2fbb: /* 8a2fbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a2fbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a2fbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a2fc0: mov eax, 1 */
  eax = 0x1u;
/* 8a2fc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a2fcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a2fcd: mov esp, ebp */
  esp = ebp;
/* 8a2fcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a2fd0: ret 0x24 */
  esp += 40; SPILL(); return;
L_8a2fd3: /* 8a2fd3: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8a2fd6: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8a2fd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a2fda: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 8a2fdd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2fe0: mov edx, esp */
  edx = esp;
/* 8a2fe2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a2fe4: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8a2fe7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a2fea: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a2fed: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8a2ff0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8a2ff3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a2ff6: mov ecx, esp */
  ecx = esp;
/* 8a2ff8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a2ffa: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8a2ffd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a3000: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a3003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a3004: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a3007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3008: jmp 0x8a2c93 */
  goto L_8a2c93;
}

void f_8a2fad(void) {
  LOAD_REGS();
L_8a2fad: /* 8a2fad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a2fb0: /* 8a2fb0: cmp eax, dword ptr [esi + 0x314] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x314u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a2fb6: jge 0x8a2fbb */
  if ((sf == of)) goto L_8a2fbb;
L_8a2fb8: /* 8a2fb8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a2fb9: jmp 0x8a2fb0 */
  goto L_8a2fb0;
L_8a2fbb: /* 8a2fbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a2fbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a2fbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a2fc0: mov eax, 1 */
  eax = 0x1u;
/* 8a2fc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a2fcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a2fcd: mov esp, ebp */
  esp = ebp;
/* 8a2fcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a2fd0: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_8a300d(void) {
  LOAD_REGS();
L_8a300d: /* 8a300d: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8a3013: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a3018: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a301b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a301c: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8a301f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a3024u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a3024(); return;
}

void f_8a3024(void) {
  LOAD_REGS();
L_8a3024: /* 8a3024: push 0xa1ab08 */
  { uint32_t v = 0xa1ab08u; esp -= 4; W32(esp, v); }
/* 8a3029: push 0xae8b60 */
  { uint32_t v = 0xae8b60u; esp -= 4; W32(esp, v); }
/* 8a302e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a3034u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a3034: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a3037: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a3039: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a303b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a3040u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a3040: guest_badaddr(0x8a3040); return;
}

void f_8a3160(void) {
  LOAD_REGS();
L_8a3160: /* 8a3160: sub esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a3166: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a3167: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a3168: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a3169: xor ebp, ebp */
  ebp = 0;
/* 8a316b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a316c: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8a3170: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8a3176u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8a3176: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a3178: mov ecx, ebx */
  ecx = ebx;
/* 8a317a: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x8a3180u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a3180: mov esi, eax */
  esi = eax;
/* 8a3182: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a3184: jne 0x8a319e */
  if (!zf) goto L_8a319e;
L_8a3186: /* 8a3186: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 8a318b: push 0xae8b68 */
  { uint32_t v = 0xae8b68u; esp -= 4; W32(esp, v); }
/* 8a3190: push 0xae8b84 */
  { uint32_t v = 0xae8b84u; esp -= 4; W32(esp, v); }
/* 8a3195: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a319bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a319b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a319e: /* 8a319e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8a31a0: mov ecx, ebx */
  ecx = ebx;
/* 8a31a2: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8a31a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a31a8: mov edi, eax */
  edi = eax;
/* 8a31aa: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a31ac: je 0x8a31bf */
  if (zf) goto L_8a31bf;
L_8a31ae: /* 8a31ae: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 8a31b3: mov ecx, edi */
  ecx = edi;
/* 8a31b5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8a31bbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8a31bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a31bd: jne 0x8a31d9 */
  if (!zf) goto L_8a31d9;
L_8a31bf: /* 8a31bf: push 0x13c */
  { uint32_t v = 0x13cu; esp -= 4; W32(esp, v); }
/* 8a31c4: push 0xae8b8c */
  { uint32_t v = 0xae8b8cu; esp -= 4; W32(esp, v); }
/* 8a31c9: push 0xae8ba8 */
  { uint32_t v = 0xae8ba8u; esp -= 4; W32(esp, v); }
/* 8a31ce: xor edi, edi */
  edi = 0;
/* 8a31d0: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a31d6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a31d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a31d9: /* 8a31d9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a31db: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8a31dd: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 8a31e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a31e2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a31e3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a31e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a31e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a31e6: mov ecx, ebx */
  ecx = ebx;
/* 8a31e8: call dword ptr [eax + 0x114] */
  { uint32_t t = R32((uint32_t)(eax + 0x114u)); esp -= 4; W32(esp, 0x8a31eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a31ee: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 8a31f4: xor esi, esi */
  esi = 0;
/* 8a31f6: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a31f8: jle 0x8a32b5 */
  if ((zf || sf != of)) goto L_8a32b5;
L_8a31fe: /* 8a31fe: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 8a3202: jmp 0x8a3210 */
  goto L_8a3210;
L_8a3210: /* 8a3210: mov eax, dword ptr [edi + 0x31c] */
  eax = R32((uint32_t)(edi + 0x31cu));
/* 8a3216: add eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a321a: mov edx, dword ptr [edi + 0x328] */
  edx = R32((uint32_t)(edi + 0x328u));
/* 8a3220: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 8a3223: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a3225: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8a3229: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a322a: mov ecx, ebx */
  ecx = ebx;
/* 8a322c: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a3231u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a3231: mov ebp, eax */
  ebp = eax;
/* 8a3233: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a3236: jne 0x8a3250 */
  if (!zf) goto L_8a3250;
L_8a3238: /* 8a3238: push 0x149 */
  { uint32_t v = 0x149u; esp -= 4; W32(esp, v); }
/* 8a323d: push 0xae8bb0 */
  { uint32_t v = 0xae8bb0u; esp -= 4; W32(esp, v); }
/* 8a3242: push 0xae8bcc */
  { uint32_t v = 0xae8bccu; esp -= 4; W32(esp, v); }
/* 8a3247: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a324du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a324d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a3250: /* 8a3250: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 8a3257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3258: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a3259: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 8a3260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3261: mov ecx, ebx */
  ecx = ebx;
/* 8a3263: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a3268u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a3268: mov ecx, eax */
  ecx = eax;
/* 8a326a: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a3270u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a3270: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a3274: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 8a327b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a327c: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8a3280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3281: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a3284: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x8a328au); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a328a: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 8a328e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a328f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8a3293: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8a3299u); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3299: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a329d: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 8a32a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a32a4: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a32a7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a32a9: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 8a32ad: jl 0x8a3210 */
  if ((sf != of)) goto L_8a3210;
L_8a32b3: /* 8a32b3: xor ebp, ebp */
  ebp = 0;
L_8a32b5: /* 8a32b5: cmp dword ptr [edi + 0x314], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x314u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a32bb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8a32bf: jle 0x8a33ef */
  if ((zf || sf != of)) goto L_8a33ef;
L_8a32c5: /* 8a32c5: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 8a32c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a32d0: /* 8a32d0: mov esi, dword ptr [edi + 0x310] */
  esi = R32((uint32_t)(edi + 0x310u));
/* 8a32d6: add esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a32da: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a32dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a32dd: mov ecx, ebx */
  ecx = ebx;
/* 8a32df: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a32e4u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a32e4: mov ebp, eax */
  ebp = eax;
/* 8a32e6: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a32e9: jne 0x8a3303 */
  if (!zf) goto L_8a3303;
L_8a32eb: /* 8a32eb: push 0x15c */
  { uint32_t v = 0x15cu; esp -= 4; W32(esp, v); }
/* 8a32f0: push 0xae8be4 */
  { uint32_t v = 0xae8be4u; esp -= 4; W32(esp, v); }
/* 8a32f5: push 0xae8c00 */
  { uint32_t v = 0xae8c00u; esp -= 4; W32(esp, v); }
/* 8a32fa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a3300u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a3300: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a3303: /* 8a3303: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 8a330a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a330b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a330c: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 8a3313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3314: mov ecx, ebx */
  ecx = ebx;
/* 8a3316: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a331bu); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a331b: mov ecx, eax */
  ecx = eax;
/* 8a331d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a3323u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a3323: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 8a332a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a332b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8a332f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3330: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8a3333: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8a3339u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a3339: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8a333c: mov edx, ecx */
  edx = ecx;
/* 8a333e: mov eax, ecx */
  eax = ecx;
/* 8a3340: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8a3344: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a3346: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a334a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a334e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8a3352: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8a3358u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8a3358: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8a335c: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 8a3360: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8a3364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3365: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a3369: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8a336d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8a3371: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 8a3375: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8a3379: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8a337d: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8a3381: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8a3385: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8a338bu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8a338b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8a338f: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 8a3393: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 8a3397: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a3398: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a339c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8a33a0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8a33a4: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8a33a8: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8a33ac: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8a33b0: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 8a33b4: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8a33b8: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8a33beu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8a33be: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 8a33c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a33c3: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8a33c7: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8a33cdu); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a33cd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a33d1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a33d5: mov ecx, dword ptr [edi + 0x314] */
  ecx = R32((uint32_t)(edi + 0x314u));
/* 8a33db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a33dc: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a33df: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a33e1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8a33e5: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 8a33e9: jl 0x8a32d0 */
  if ((sf != of)) goto L_8a32d0;
L_8a33ef: /* 8a33ef: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 8a33f6: mov ecx, 7 */
  ecx = 0x7u;
/* 8a33fb: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* 8a33ff: mov edi, eax */
  edi = eax;
/* 8a3401: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a3403: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a3404: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3405: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a3406: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a340c: ret  */
  esp += 4; SPILL(); return;
}

void f_8a3204(void) {
  LOAD_REGS();
L_8a3204: /* 8a3204: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8a320b: jmp 0x8a3210 */
  goto L_8a3210;
L_8a3210: /* 8a3210: mov eax, dword ptr [edi + 0x31c] */
  eax = R32((uint32_t)(edi + 0x31cu));
/* 8a3216: add eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a321a: mov edx, dword ptr [edi + 0x328] */
  edx = R32((uint32_t)(edi + 0x328u));
/* 8a3220: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 8a3223: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a3225: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8a3229: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a322a: mov ecx, ebx */
  ecx = ebx;
/* 8a322c: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a3231u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a3231: mov ebp, eax */
  ebp = eax;
/* 8a3233: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a3236: jne 0x8a3250 */
  if (!zf) goto L_8a3250;
L_8a3238: /* 8a3238: push 0x149 */
  { uint32_t v = 0x149u; esp -= 4; W32(esp, v); }
/* 8a323d: push 0xae8bb0 */
  { uint32_t v = 0xae8bb0u; esp -= 4; W32(esp, v); }
/* 8a3242: push 0xae8bcc */
  { uint32_t v = 0xae8bccu; esp -= 4; W32(esp, v); }
/* 8a3247: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a324du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a324d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a3250: /* 8a3250: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 8a3257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3258: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a3259: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 8a3260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3261: mov ecx, ebx */
  ecx = ebx;
/* 8a3263: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a3268u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a3268: mov ecx, eax */
  ecx = eax;
/* 8a326a: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a3270u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a3270: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a3274: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 8a327b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a327c: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8a3280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3281: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a3284: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x8a328au); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a328a: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 8a328e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a328f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8a3293: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8a3299u); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3299: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a329d: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 8a32a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a32a4: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a32a7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a32a9: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 8a32ad: jl 0x8a3210 */
  if ((sf != of)) goto L_8a3210;
L_8a32b3: /* 8a32b3: xor ebp, ebp */
  ebp = 0;
/* 8a32b5: cmp dword ptr [edi + 0x314], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x314u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a32bb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8a32bf: jle 0x8a33ef */
  if ((zf || sf != of)) goto L_8a33ef;
L_8a32c5: /* 8a32c5: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 8a32c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a32d0: /* 8a32d0: mov esi, dword ptr [edi + 0x310] */
  esi = R32((uint32_t)(edi + 0x310u));
/* 8a32d6: add esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a32da: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a32dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a32dd: mov ecx, ebx */
  ecx = ebx;
/* 8a32df: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a32e4u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a32e4: mov ebp, eax */
  ebp = eax;
/* 8a32e6: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a32e9: jne 0x8a3303 */
  if (!zf) goto L_8a3303;
L_8a32eb: /* 8a32eb: push 0x15c */
  { uint32_t v = 0x15cu; esp -= 4; W32(esp, v); }
/* 8a32f0: push 0xae8be4 */
  { uint32_t v = 0xae8be4u; esp -= 4; W32(esp, v); }
/* 8a32f5: push 0xae8c00 */
  { uint32_t v = 0xae8c00u; esp -= 4; W32(esp, v); }
/* 8a32fa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a3300u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a3300: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a3303: /* 8a3303: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 8a330a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a330b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a330c: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 8a3313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3314: mov ecx, ebx */
  ecx = ebx;
/* 8a3316: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a331bu); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a331b: mov ecx, eax */
  ecx = eax;
/* 8a331d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a3323u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a3323: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 8a332a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a332b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8a332f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3330: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8a3333: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8a3339u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a3339: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8a333c: mov edx, ecx */
  edx = ecx;
/* 8a333e: mov eax, ecx */
  eax = ecx;
/* 8a3340: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8a3344: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a3346: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a334a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a334e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8a3352: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8a3358u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8a3358: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8a335c: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 8a3360: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8a3364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3365: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a3369: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8a336d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8a3371: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 8a3375: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8a3379: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8a337d: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8a3381: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8a3385: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8a338bu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8a338b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8a338f: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 8a3393: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 8a3397: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a3398: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a339c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8a33a0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8a33a4: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8a33a8: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8a33ac: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8a33b0: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 8a33b4: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8a33b8: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8a33beu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8a33be: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 8a33c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a33c3: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8a33c7: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8a33cdu); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a33cd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a33d1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a33d5: mov ecx, dword ptr [edi + 0x314] */
  ecx = R32((uint32_t)(edi + 0x314u));
/* 8a33db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a33dc: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a33df: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a33e1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8a33e5: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 8a33e9: jl 0x8a32d0 */
  if ((sf != of)) goto L_8a32d0;
L_8a33ef: /* 8a33ef: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 8a33f6: mov ecx, 7 */
  ecx = 0x7u;
/* 8a33fb: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* 8a33ff: mov edi, eax */
  edi = eax;
/* 8a3401: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a3403: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a3404: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3405: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a3406: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a340c: ret  */
  esp += 4; SPILL(); return;
}

void f_8a320d(void) {
  LOAD_REGS();
L_8a320d: /* 8a320d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a3210: /* 8a3210: mov eax, dword ptr [edi + 0x31c] */
  eax = R32((uint32_t)(edi + 0x31cu));
/* 8a3216: add eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a321a: mov edx, dword ptr [edi + 0x328] */
  edx = R32((uint32_t)(edi + 0x328u));
/* 8a3220: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 8a3223: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a3225: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8a3229: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a322a: mov ecx, ebx */
  ecx = ebx;
/* 8a322c: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a3231u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a3231: mov ebp, eax */
  ebp = eax;
/* 8a3233: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a3236: jne 0x8a3250 */
  if (!zf) goto L_8a3250;
L_8a3238: /* 8a3238: push 0x149 */
  { uint32_t v = 0x149u; esp -= 4; W32(esp, v); }
/* 8a323d: push 0xae8bb0 */
  { uint32_t v = 0xae8bb0u; esp -= 4; W32(esp, v); }
/* 8a3242: push 0xae8bcc */
  { uint32_t v = 0xae8bccu; esp -= 4; W32(esp, v); }
/* 8a3247: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a324du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a324d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a3250: /* 8a3250: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 8a3257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3258: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a3259: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 8a3260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3261: mov ecx, ebx */
  ecx = ebx;
/* 8a3263: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a3268u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a3268: mov ecx, eax */
  ecx = eax;
/* 8a326a: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a3270u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a3270: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a3274: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 8a327b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a327c: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8a3280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3281: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a3284: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x8a328au); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a328a: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 8a328e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a328f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8a3293: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8a3299u); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3299: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a329d: mov eax, dword ptr [edi + 0x32c] */
  eax = R32((uint32_t)(edi + 0x32cu));
/* 8a32a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a32a4: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a32a7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a32a9: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 8a32ad: jl 0x8a3210 */
  if ((sf != of)) goto L_8a3210;
L_8a32b3: /* 8a32b3: xor ebp, ebp */
  ebp = 0;
/* 8a32b5: cmp dword ptr [edi + 0x314], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x314u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a32bb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8a32bf: jle 0x8a33ef */
  if ((zf || sf != of)) goto L_8a33ef;
L_8a32c5: /* 8a32c5: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 8a32c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a32d0: /* 8a32d0: mov esi, dword ptr [edi + 0x310] */
  esi = R32((uint32_t)(edi + 0x310u));
/* 8a32d6: add esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a32da: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a32dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a32dd: mov ecx, ebx */
  ecx = ebx;
/* 8a32df: call 0x6cceaa */
  esp -= 4; W32(esp, 0x8a32e4u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 8a32e4: mov ebp, eax */
  ebp = eax;
/* 8a32e6: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a32e9: jne 0x8a3303 */
  if (!zf) goto L_8a3303;
L_8a32eb: /* 8a32eb: push 0x15c */
  { uint32_t v = 0x15cu; esp -= 4; W32(esp, v); }
/* 8a32f0: push 0xae8be4 */
  { uint32_t v = 0xae8be4u; esp -= 4; W32(esp, v); }
/* 8a32f5: push 0xae8c00 */
  { uint32_t v = 0xae8c00u; esp -= 4; W32(esp, v); }
/* 8a32fa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a3300u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a3300: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a3303: /* 8a3303: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 8a330a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a330b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a330c: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 8a3313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3314: mov ecx, ebx */
  ecx = ebx;
/* 8a3316: call 0x6c5060 */
  esp -= 4; W32(esp, 0x8a331bu); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 8a331b: mov ecx, eax */
  ecx = eax;
/* 8a331d: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8a3323u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8a3323: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 8a332a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a332b: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8a332f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3330: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8a3333: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8a3339u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8a3339: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8a333c: mov edx, ecx */
  edx = ecx;
/* 8a333e: mov eax, ecx */
  eax = ecx;
/* 8a3340: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8a3344: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a3346: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a334a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8a334e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8a3352: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8a3358u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8a3358: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8a335c: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 8a3360: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8a3364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3365: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a3369: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8a336d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8a3371: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 8a3375: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8a3379: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8a337d: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8a3381: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8a3385: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8a338bu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8a338b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8a338f: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 8a3393: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 8a3397: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a3398: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8a339c: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8a33a0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8a33a4: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8a33a8: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8a33ac: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8a33b0: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 8a33b4: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8a33b8: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8a33beu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8a33be: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 8a33c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a33c3: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8a33c7: call dword ptr [0xcfabb4] */
  esp -= 4; W32(esp, 0x8a33cdu); SPILL(); f_4e2ed2(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a33cd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8a33d1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a33d5: mov ecx, dword ptr [edi + 0x314] */
  ecx = R32((uint32_t)(edi + 0x314u));
/* 8a33db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a33dc: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a33df: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a33e1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8a33e5: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 8a33e9: jl 0x8a32d0 */
  if ((sf != of)) goto L_8a32d0;
L_8a33ef: /* 8a33ef: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 8a33f6: mov ecx, 7 */
  ecx = 0x7u;
/* 8a33fb: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* 8a33ff: mov edi, eax */
  edi = eax;
/* 8a3401: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a3403: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a3404: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3405: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a3406: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a340c: ret  */
  esp += 4; SPILL(); return;
}

void f_8a34c0(void) {
  LOAD_REGS();
L_8a34c0: /* 8a34c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a34c1: mov ebp, esp */
  ebp = esp;
/* 8a34c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a34c5: push 0x9d5ec0 */
  { uint32_t v = 0x9d5ec0u; esp -= 4; W32(esp, v); }
/* 8a34ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a34d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a34d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a34d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a34db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a34dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a34dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a34de: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8a34e1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a34e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a34e6: mov esi, ecx */
  esi = ecx;
/* 8a34e8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a34ef: je 0x8a358c */
  if (zf) goto L_8a358c;
L_8a34f5: /* 8a34f5: mov ebx, dword ptr [edi + 0xec] */
  ebx = R32((uint32_t)(edi + 0xecu));
/* 8a34fb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a34fd: je 0x8a358c */
  if (zf) goto L_8a358c;
L_8a3503: /* 8a3503: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 8a3508: mov ecx, ebx */
  ecx = ebx;
/* 8a350a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8a3510u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8a3510: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a3512: je 0x8a358c */
  if (zf) goto L_8a358c;
L_8a3514: /* 8a3514: mov eax, dword ptr [esi + 0x314] */
  eax = R32((uint32_t)(esi + 0x314u));
/* 8a351a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a351c: jg 0x8a356b */
  if ((!zf && sf == of)) goto L_8a356b;
L_8a351e: /* 8a351e: mov eax, dword ptr [esi + 0x320] */
  eax = R32((uint32_t)(esi + 0x320u));
/* 8a3524: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a3526: jg 0x8a356b */
  if ((!zf && sf == of)) goto L_8a356b;
L_8a3528: /* 8a3528: mov eax, dword ptr [ebx + 0x318] */
  eax = R32((uint32_t)(ebx + 0x318u));
/* 8a352e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a3530: jne 0x8a3546 */
  if (!zf) goto L_8a3546;
L_8a3532: /* 8a3532: mov eax, dword ptr [ebx + 0x2e0] */
  eax = R32((uint32_t)(ebx + 0x2e0u));
/* 8a3538: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a353a: je 0x8a358c */
  if (zf) goto L_8a358c;
L_8a353c: /* 8a353c: mov eax, dword ptr [ebx + 0x2f4] */
  eax = R32((uint32_t)(ebx + 0x2f4u));
/* 8a3542: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a3544: je 0x8a358c */
  if (zf) goto L_8a358c;
L_8a3546: /* 8a3546: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a3549: lea esi, [ebx + 0x2fc] */
  esi = (uint32_t)(ebx + 0x2fcu);
/* 8a354f: mov ecx, 7 */
  ecx = 0x7u;
/* 8a3554: mov edi, eax */
  edi = eax;
/* 8a3556: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a3558: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a355b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a3562: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a3563: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3564: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a3565: mov esp, ebp */
  esp = ebp;
/* 8a3567: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a3568: ret 8 */
  esp += 12; SPILL(); return;
L_8a356b: /* 8a356b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a356e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a356f: call 0x8a3160 */
  esp -= 4; W32(esp, 0x8a3574u); SPILL(); f_8a3160(); if (g_unwind) return; RELOAD();
/* 8a3574: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a3577: mov eax, esi */
  eax = esi;
/* 8a3579: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a357c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a3583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a3584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3585: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a3586: mov esp, ebp */
  esp = ebp;
/* 8a3588: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a3589: ret 8 */
  esp += 12; SPILL(); return;
L_8a358c: /* 8a358c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a358d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a3590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a3591: mov ecx, esi */
  ecx = esi;
/* 8a3593: call 0x6c4593 */
  esp -= 4; W32(esp, 0x8a3598u); SPILL(); f_6c4593(); if (g_unwind) return; RELOAD();
/* 8a3598: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a359b: mov eax, edi */
  eax = edi;
/* 8a359d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a359e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a359f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a35a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a35a7: mov esp, ebp */
  esp = ebp;
/* 8a35a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a35aa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a35ad(void) {
  LOAD_REGS();
L_8a35ad: /* 8a35ad: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a35b0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a35b5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a35b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a35b9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a35bc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a35c1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a35c1(); return;
}

void f_8a35c1(void) {
  LOAD_REGS();
L_8a35c1: /* 8a35c1: push 0xa1ab48 */
  { uint32_t v = 0xa1ab48u; esp -= 4; W32(esp, v); }
/* 8a35c6: push 0xae8c18 */
  { uint32_t v = 0xae8c18u; esp -= 4; W32(esp, v); }
/* 8a35cb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a35d1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a35d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a35d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a35d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a35d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a35ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a35dd: guest_badaddr(0x8a35dd); return;
}

void f_8a3630(void) {
  LOAD_REGS();
L_8a3630: /* 8a3630: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8a3634: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8a3638: mov ax, word ptr [ecx + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 8a363c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a363d: mov si, word ptr [edx + 4] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x4u))) & 0xffffu);
/* 8a3641: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8a3644: ja 0x8a3677 */
  if ((!cf && !zf)) goto L_8a3677;
L_8a3646: /* 8a3646: jae 0x8a364d */
  if (!cf) goto L_8a364d;
L_8a3648: /* 8a3648: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8a364b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a364c: ret  */
  esp += 4; SPILL(); return;
L_8a364d: /* 8a364d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8a364f: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 8a3651: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a3653: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a3656: jnp 0x8a3677 */
  if (!pf) goto L_8a3677;
L_8a3658: /* 8a3658: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8a365a: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 8a365c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a365e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a3661: jne 0x8a366a */
  if (!zf) goto L_8a366a;
L_8a3663: /* 8a3663: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 8a3668: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3669: ret  */
  esp += 4; SPILL(); return;
L_8a366a: /* 8a366a: mov cx, word ptr [ecx + 6] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 8a366e: mov dx, word ptr [edx + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x6u))) & 0xffffu);
/* 8a3672: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8a3675: jbe 0x8a367e */
  if ((cf | zf)) goto L_8a367e;
L_8a3677: /* 8a3677: mov eax, 1 */
  eax = 0x1u;
/* 8a367c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a367d: ret  */
  esp += 4; SPILL(); return;
L_8a367e: /* 8a367e: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8a3680: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3681: ret  */
  esp += 4; SPILL(); return;
}

void f_8a36b0(void) {
  LOAD_REGS();
L_8a36b0: /* 8a36b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a36d0(void) {
  LOAD_REGS();
L_8a36d0: /* 8a36d0: mov eax, 1 */
  eax = 0x1u;
/* 8a36d5: ret  */
  esp += 4; SPILL(); return;
}

void f_8a36f0(void) {
  LOAD_REGS();
L_8a36f0: /* 8a36f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a36f2: push 0x9d5ee2 */
  { uint32_t v = 0x9d5ee2u; esp -= 4; W32(esp, v); }
/* 8a36f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a36fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a36fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a3705: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a3708: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8a370c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a370d: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a3713u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a3713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3714: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8a3718: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8a371eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8a371e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8a3722: xor ebx, ebx */
  ebx = 0;
/* 8a3724: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 8a3728: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8a372eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8a372e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a372f: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 8a3733: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8a3739u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8a3739: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 8a373d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a373e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8a3742: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 8a3747: call dword ptr [0xcfabbc] */
  esp -= 4; W32(esp, 0x8a374du); SPILL(); f_4e1c8a(); if (g_unwind) return; /* Core!??OFString@@QBEHABV0@@Z */ RELOAD();
/* 8a374d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a374f: je 0x8a3786 */
  if (zf) goto L_8a3786;
L_8a3751: /* 8a3751: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8a3755: mov byte ptr [esp + 0x24], bl */
  W8((uint32_t)(esp + 0x24u), (ebx & 0xffu));
/* 8a3759: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a375fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a375f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8a3763: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 8a376b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a3771u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a3771: mov eax, 1 */
  eax = 0x1u;
/* 8a3776: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a3777: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8a377b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a3782: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a3785: ret  */
  esp += 4; SPILL(); return;
L_8a3786: /* 8a3786: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8a378a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a378b: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8a378f: call dword ptr [0xcfabb8] */
  esp -= 4; W32(esp, 0x8a3795u); SPILL(); f_4e3198(); if (g_unwind) return; /* Core!??MFString@@QBEHABV0@@Z */ RELOAD();
/* 8a3795: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a3797: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8a379b: mov byte ptr [esp + 0x24], bl */
  W8((uint32_t)(esp + 0x24u), (ebx & 0xffu));
/* 8a379f: je 0x8a37cc */
  if (zf) goto L_8a37cc;
L_8a37a1: /* 8a37a1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a37a7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a37a7: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8a37ab: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 8a37b3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a37b9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a37b9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8a37bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a37bd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8a37c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a37c8: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a37cb: ret  */
  esp += 4; SPILL(); return;
L_8a37cc: /* 8a37cc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a37d2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a37d2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8a37d6: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 8a37de: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8a37e4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8a37e4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8a37e8: xor eax, eax */
  eax = 0;
/* 8a37ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a37eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a37f2: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a37f5: ret  */
  esp += 4; SPILL(); return;
}

void f_8a3850(void) {
  LOAD_REGS();
L_8a3850: /* 8a3850: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8a3854: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8a3857: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a385d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a385f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a3862: jp 0x8a3882 */
  if (pf) goto L_8a3882;
L_8a3864: /* 8a3864: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8a3866: fchs  */
  ST0 = -ST0;
/* 8a3868: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 8a386a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8a386d: fchs  */
  ST0 = -ST0;
/* 8a386f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 8a3872: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8a3875: fchs  */
  ST0 = -ST0;
/* 8a3877: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 8a387a: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8a387d: fchs  */
  ST0 = -ST0;
/* 8a387f: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
L_8a3882: /* 8a3882: ret  */
  esp += 4; SPILL(); return;
}

void f_8a38a0(void) {
  LOAD_REGS();
L_8a38a0: /* 8a38a0: mov edx, 0x40000000 */
  edx = 0x40000000u;
/* 8a38a5: mov eax, 0xc0000000 */
  eax = 0xc0000000u;
/* 8a38aa: mov dword ptr [ecx + 0x7c], edx */
  W32((uint32_t)(ecx + 0x7cu), edx);
/* 8a38ad: mov dword ptr [ecx + 0x80], eax */
  W32((uint32_t)(ecx + 0x80u), eax);
/* 8a38b3: mov dword ptr [ecx + 0x84], edx */
  W32((uint32_t)(ecx + 0x84u), edx);
/* 8a38b9: mov dword ptr [ecx + 0x88], eax */
  W32((uint32_t)(ecx + 0x88u), eax);
/* 8a38bf: mov dword ptr [ecx + 0x8c], edx */
  W32((uint32_t)(ecx + 0x8cu), edx);
/* 8a38c5: mov dword ptr [ecx + 0x90], eax */
  W32((uint32_t)(ecx + 0x90u), eax);
/* 8a38cb: mov dword ptr [ecx + 0x94], edx */
  W32((uint32_t)(ecx + 0x94u), edx);
/* 8a38d1: mov dword ptr [ecx + 0x98], eax */
  W32((uint32_t)(ecx + 0x98u), eax);
/* 8a38d7: ret  */
  esp += 4; SPILL(); return;
}

void f_8a38f0(void) {
  LOAD_REGS();
L_8a38f0: /* 8a38f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a38f2: push 0x9d5f69 */
  { uint32_t v = 0x9d5f69u; esp -= 4; W32(esp, v); }
/* 8a38f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a38fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a38fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a3905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3906: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a3907: mov esi, ecx */
  esi = ecx;
/* 8a3909: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a390a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8a390e: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a3914u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3914: xor edi, edi */
  edi = 0;
/* 8a3916: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a3919: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8a391d: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a3923u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3923: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8a3926: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 8a392b: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a3931u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3931: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8a3934: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 8a3939: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a393fu); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a393f: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 8a3942: mov byte ptr [esp + 0x14], 3 */
  W8((uint32_t)(esp + 0x14u), 0x3u);
/* 8a3947: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a394du); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a394d: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 8a3950: mov byte ptr [esp + 0x14], 4 */
  W8((uint32_t)(esp + 0x14u), 0x4u);
/* 8a3955: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a395bu); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a395b: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 8a395e: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 8a3963: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a3969u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3969: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 8a396c: mov byte ptr [esp + 0x14], 6 */
  W8((uint32_t)(esp + 0x14u), 0x6u);
/* 8a3971: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a3977u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3977: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 8a397a: mov byte ptr [esp + 0x14], 7 */
  W8((uint32_t)(esp + 0x14u), 0x7u);
/* 8a397f: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a3985u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3985: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 8a3988: mov byte ptr [esp + 0x14], 8 */
  W8((uint32_t)(esp + 0x14u), 0x8u);
/* 8a398d: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8a3993u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3993: mov ecx, 0x40000000 */
  ecx = 0x40000000u;
/* 8a3998: mov eax, 0xc0000000 */
  eax = 0xc0000000u;
/* 8a399d: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 8a39a0: mov dword ptr [esi + 0x9c], edi */
  W32((uint32_t)(esi + 0x9cu), edi);
/* 8a39a6: mov dword ptr [esi + 0xa0], edi */
  W32((uint32_t)(esi + 0xa0u), edi);
/* 8a39ac: mov dword ptr [esi + 0xa4], edi */
  W32((uint32_t)(esi + 0xa4u), edi);
/* 8a39b2: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* 8a39b8: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 8a39bb: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 8a39c1: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 8a39c7: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 8a39cd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a39d1: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 8a39d7: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 8a39dd: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 8a39e3: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* 8a39e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a39ea: mov eax, esi */
  eax = esi;
/* 8a39ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a39ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a39f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a39f7: ret  */
  esp += 4; SPILL(); return;
}

void f_8a3a50(void) {
  LOAD_REGS();
L_8a3a50: /* 8a3a50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a3a52: push 0x9d5ff9 */
  { uint32_t v = 0x9d5ff9u; esp -= 4; W32(esp, v); }
/* 8a3a57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a3a5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3a5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a3a65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3a66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a3a67: mov esi, ecx */
  esi = ecx;
/* 8a3a69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8a3a6d: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 8a3a70: mov dword ptr [esp + 0x10], 8 */
  W32((uint32_t)(esp + 0x10u), 0x8u);
/* 8a3a78: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3a7eu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3a7e: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 8a3a81: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 8a3a86: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3a8cu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3a8c: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 8a3a8f: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 8a3a94: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3a9au); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3a9a: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 8a3a9d: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 8a3aa2: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3aa8u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3aa8: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 8a3aab: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 8a3ab0: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3ab6u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3ab6: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 8a3ab9: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 8a3abe: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3ac4u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3ac4: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8a3ac7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 8a3acc: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3ad2u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3ad2: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8a3ad5: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 8a3ada: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3ae0u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3ae0: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a3ae3: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 8a3ae8: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3aeeu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3aee: mov ecx, esi */
  ecx = esi;
/* 8a3af0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8a3af8: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a3afeu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a3afe: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a3b02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3b03: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a3b0a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a3b0d: ret  */
  esp += 4; SPILL(); return;
}

void f_8a3b40(void) {
  LOAD_REGS();
L_8a3b40: /* 8a3b40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a3b42: push 0x9d6089 */
  { uint32_t v = 0x9d6089u; esp -= 4; W32(esp, v); }
/* 8a3b47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a3b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3b4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a3b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3b56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a3b57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a3b58: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 8a3b5c: mov esi, ecx */
  esi = ecx;
/* 8a3b5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a3b5f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8a3b63: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3b69u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3b69: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 8a3b6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3b6d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a3b70: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8a3b78: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3b7eu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3b7e: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8a3b81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3b82: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8a3b85: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 8a3b8a: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3b90u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3b90: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 8a3b93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a3b94: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8a3b97: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 8a3b9c: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3ba2u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3ba2: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 8a3ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3ba6: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 8a3ba9: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 8a3bae: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3bb4u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3bb4: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 8a3bb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3bb8: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 8a3bbb: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 8a3bc0: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3bc6u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3bc6: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 8a3bc9: lea eax, [edi + 0x4c] */
  eax = (uint32_t)(edi + 0x4cu);
/* 8a3bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3bcd: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 8a3bd0: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 8a3bd5: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 8a3bd8: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3bdeu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3bde: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 8a3be1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3be2: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 8a3be5: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 8a3bea: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3bf0u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3bf0: lea edx, [edi + 0x64] */
  edx = (uint32_t)(edi + 0x64u);
/* 8a3bf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a3bf4: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 8a3bf7: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 8a3bfc: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3c02u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3c02: lea eax, [edi + 0x70] */
  eax = (uint32_t)(edi + 0x70u);
/* 8a3c05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3c06: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 8a3c09: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 8a3c0e: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x8a3c14u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 8a3c14: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 8a3c17: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 8a3c1a: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* 8a3c20: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 8a3c26: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 8a3c2c: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 8a3c32: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 8a3c38: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 8a3c3e: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 8a3c44: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 8a3c4a: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 8a3c50: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 8a3c56: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 8a3c5c: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 8a3c62: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 8a3c68: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 8a3c6e: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* 8a3c74: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 8a3c7a: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* 8a3c80: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* 8a3c86: mov edx, dword ptr [edi + 0xa4] */
  edx = R32((uint32_t)(edi + 0xa4u));
/* 8a3c8c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a3c90: mov dword ptr [esi + 0xa4], edx */
  W32((uint32_t)(esi + 0xa4u), edx);
/* 8a3c96: mov eax, dword ptr [edi + 0xa8] */
  eax = R32((uint32_t)(edi + 0xa8u));
/* 8a3c9c: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 8a3ca2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a3ca3: mov eax, esi */
  eax = esi;
/* 8a3ca5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3ca6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a3cad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a3cb0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3d20(void) {
  LOAD_REGS();
L_8a3d20: /* 8a3d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a3d21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a3d22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 8a3d26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a3d27: mov esi, ecx */
  esi = ecx;
/* 8a3d29: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d2fu); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d2f: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 8a3d32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3d33: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a3d36: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d3cu); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d3c: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8a3d3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3d40: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8a3d43: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d49u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d49: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 8a3d4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a3d4d: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8a3d50: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d56u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d56: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 8a3d59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3d5a: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 8a3d5d: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d63u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d63: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 8a3d66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3d67: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 8a3d6a: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d70u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d70: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 8a3d73: lea eax, [edi + 0x4c] */
  eax = (uint32_t)(edi + 0x4cu);
/* 8a3d76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3d77: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 8a3d7a: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 8a3d7d: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d83u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d83: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 8a3d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a3d87: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 8a3d8a: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d90u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d90: lea edx, [edi + 0x64] */
  edx = (uint32_t)(edi + 0x64u);
/* 8a3d93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a3d94: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 8a3d97: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3d9du); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3d9d: lea eax, [edi + 0x70] */
  eax = (uint32_t)(edi + 0x70u);
/* 8a3da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3da1: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 8a3da4: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x8a3daau); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a3daa: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 8a3dad: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 8a3db0: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* 8a3db6: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 8a3dbc: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 8a3dc2: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 8a3dc8: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 8a3dce: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 8a3dd4: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 8a3dda: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 8a3de0: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 8a3de6: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 8a3dec: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 8a3df2: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 8a3df8: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 8a3dfe: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 8a3e04: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* 8a3e0a: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 8a3e10: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* 8a3e16: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* 8a3e1c: mov edx, dword ptr [edi + 0xa4] */
  edx = R32((uint32_t)(edi + 0xa4u));
/* 8a3e22: mov dword ptr [esi + 0xa4], edx */
  W32((uint32_t)(esi + 0xa4u), edx);
/* 8a3e28: mov eax, dword ptr [edi + 0xa8] */
  eax = R32((uint32_t)(edi + 0xa8u));
/* 8a3e2e: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 8a3e34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a3e35: mov eax, esi */
  eax = esi;
/* 8a3e37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3e38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3e90(void) {
  LOAD_REGS();
L_8a3e90: /* 8a3e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3e95: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a3e97: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a3e9du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3e9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3eb0(void) {
  LOAD_REGS();
L_8a3eb0: /* 8a3eb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3eb4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a3eb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3eb7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a3ebdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3ebd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3ed0(void) {
  LOAD_REGS();
L_8a3ed0: /* 8a3ed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3ed4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a3ed6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3ed7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a3eddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3edd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3ef0(void) {
  LOAD_REGS();
L_8a3ef0: /* 8a3ef0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3ef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3ef5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a3ef7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a3efdu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3efd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3f10(void) {
  LOAD_REGS();
L_8a3f10: /* 8a3f10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3f14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3f15: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8a3f17: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a3f1du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3f1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3f30(void) {
  LOAD_REGS();
L_8a3f30: /* 8a3f30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3f34: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a3f36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3f37: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a3f3du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3f3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3f50(void) {
  LOAD_REGS();
L_8a3f50: /* 8a3f50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3f54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3f55: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a3f57: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a3f5du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3f5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3f70(void) {
  LOAD_REGS();
L_8a3f70: /* 8a3f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a3f71: mov esi, ecx */
  esi = ecx;
/* 8a3f73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a3f79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a3f79: mov eax, esi */
  eax = esi;
/* 8a3f7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a3f7c: ret  */
  esp += 4; SPILL(); return;
}

void f_8a3f90(void) {
  LOAD_REGS();
L_8a3f90: /* 8a3f90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3f94: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a3f96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3f97: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a3f9du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3f9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3fb0(void) {
  LOAD_REGS();
L_8a3fb0: /* 8a3fb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3fb4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a3fb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3fb7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a3fbdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3fbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3fd0(void) {
  LOAD_REGS();
L_8a3fd0: /* 8a3fd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3fd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3fd5: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 8a3fd7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a3fddu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3fdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a3ff0(void) {
  LOAD_REGS();
L_8a3ff0: /* 8a3ff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a3ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a3ff5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8a3ff7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a3ffdu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a3ffd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4010(void) {
  LOAD_REGS();
L_8a4010: /* 8a4010: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a4012: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8a4016: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 8a4019: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4030(void) {
  LOAD_REGS();
L_8a4030: /* 8a4030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4031: mov esi, ecx */
  esi = ecx;
/* 8a4033: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a4039u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a4039: mov eax, esi */
  eax = esi;
/* 8a403b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a403c: ret  */
  esp += 4; SPILL(); return;
}

void f_8a4050(void) {
  LOAD_REGS();
L_8a4050: /* 8a4050: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4054: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8a4056: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a4059: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8a405c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4070(void) {
  LOAD_REGS();
L_8a4070: /* 8a4070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4075: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a4077: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a407du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a407d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4090(void) {
  LOAD_REGS();
L_8a4090: /* 8a4090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4091: mov esi, ecx */
  esi = ecx;
/* 8a4093: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a4099u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a4099: mov eax, esi */
  eax = esi;
/* 8a409b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a409c: ret  */
  esp += 4; SPILL(); return;
}

void f_8a40b0(void) {
  LOAD_REGS();
L_8a40b0: /* 8a40b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a40b4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8a40b6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a40b9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8a40bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a40d0(void) {
  LOAD_REGS();
L_8a40d0: /* 8a40d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a40d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a40d5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a40d7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a40ddu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a40dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a40f0(void) {
  LOAD_REGS();
L_8a40f0: /* 8a40f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a40f1: mov esi, ecx */
  esi = ecx;
/* 8a40f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a40f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a40f9: mov eax, esi */
  eax = esi;
/* 8a40fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a40fc: ret  */
  esp += 4; SPILL(); return;
}

void f_8a4110(void) {
  LOAD_REGS();
L_8a4110: /* 8a4110: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a4112: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8a4116: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 8a4119: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4130(void) {
  LOAD_REGS();
L_8a4130: /* 8a4130: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4134: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4135: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4137: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a413du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a413d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4150(void) {
  LOAD_REGS();
L_8a4150: /* 8a4150: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4154: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a4156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4157: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a415du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a415d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4170(void) {
  LOAD_REGS();
L_8a4170: /* 8a4170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4174: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a4176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4177: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a417du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a417d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4190(void) {
  LOAD_REGS();
L_8a4190: /* 8a4190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4194: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4196: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4197: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a419du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a419d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a41b0(void) {
  LOAD_REGS();
L_8a41b0: /* 8a41b0: mov eax, 1 */
  eax = 0x1u;
/* 8a41b5: ret  */
  esp += 4; SPILL(); return;
}

void f_8a41d0(void) {
  LOAD_REGS();
L_8a41d0: /* 8a41d0: mov eax, 1 */
  eax = 0x1u;
/* 8a41d5: ret  */
  esp += 4; SPILL(); return;
}

void f_8a41f0(void) {
  LOAD_REGS();
L_8a41f0: /* 8a41f0: mov eax, 1 */
  eax = 0x1u;
/* 8a41f5: ret  */
  esp += 4; SPILL(); return;
}

void f_8a4210(void) {
  LOAD_REGS();
L_8a4210: /* 8a4210: mov eax, 1 */
  eax = 0x1u;
/* 8a4215: ret  */
  esp += 4; SPILL(); return;
}

void f_8a4230(void) {
  LOAD_REGS();
L_8a4230: /* 8a4230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4234: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a4238: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8a423b: jbe 0x8a4240 */
  if ((cf | zf)) goto L_8a4240;
L_8a423d: /* 8a423d: mov ax, cx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
L_8a4240: /* 8a4240: ret  */
  esp += 4; SPILL(); return;
}

void f_8a4260(void) {
  LOAD_REGS();
L_8a4260: /* 8a4260: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8a4264: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a4268: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8a426b: jae 0x8a4270 */
  if (!cf) goto L_8a4270;
L_8a426d: /* 8a426d: mov ax, cx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
L_8a4270: /* 8a4270: ret  */
  esp += 4; SPILL(); return;
}

void f_8a4290(void) {
  LOAD_REGS();
L_8a4290: /* 8a4290: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8a4294: mov eax, ecx */
  eax = ecx;
/* 8a4296: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a429a: and ecx, 0x3ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8a42a0: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8a42a6: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a42a9: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a42ab: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a42ad: and edx, 0xc0000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8a42b3: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a42b6: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a42b8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8a42bc: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8a42c2: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a42c4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a42c6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8a42e0(void) {
  LOAD_REGS();
L_8a42e0: /* 8a42e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a42e1: mov ebp, esp */
  ebp = esp;
/* 8a42e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a42e5: push 0x9d60b0 */
  { uint32_t v = 0x9d60b0u; esp -= 4; W32(esp, v); }
/* 8a42ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a42f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a42f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a42f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a42fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a42fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a42ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4301: xor edi, edi */
  edi = 0;
/* 8a4303: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a4305: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a4308: mov esi, ecx */
  esi = ecx;
/* 8a430a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8a430d: jne 0x8a4499 */
  if (!zf) goto L_8a4499;
L_8a4313: /* 8a4313: mov eax, dword ptr [esi + 0x134] */
  eax = R32((uint32_t)(esi + 0x134u));
/* 8a4319: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 8a431f: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a4321u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4321: mov edx, dword ptr [esi + 0x14c] */
  edx = R32((uint32_t)(esi + 0x14cu));
/* 8a4327: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 8a432d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a432fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a432f: mov eax, dword ptr [esi + 0x164] */
  eax = R32((uint32_t)(esi + 0x164u));
/* 8a4335: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 8a433b: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a433du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a433d: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* 8a4343: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8a4349: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a434bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a434b: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* 8a4351: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 8a4357: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a4359u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4359: mov edx, dword ptr [esi + 0x1ac] */
  edx = R32((uint32_t)(esi + 0x1acu));
/* 8a435f: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 8a4365: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a4367u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4367: mov eax, dword ptr [esi + 0x1c4] */
  eax = R32((uint32_t)(esi + 0x1c4u));
/* 8a436d: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 8a4373: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a4375u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4375: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 8a437b: mov edi, dword ptr [esi + 0x18c] */
  edi = R32((uint32_t)(esi + 0x18cu));
/* 8a4381: mov eax, dword ptr [esi + 0x144] */
  eax = R32((uint32_t)(esi + 0x144u));
/* 8a4387: mov ecx, dword ptr [esi + 0x15c] */
  ecx = R32((uint32_t)(esi + 0x15cu));
/* 8a438d: mov ebx, dword ptr [esi + 0x1d4] */
  ebx = R32((uint32_t)(esi + 0x1d4u));
/* 8a4393: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a4395: lea eax, [edi + eax + 0xe] */
  eax = (uint32_t)(edi + eax + 0xeu);
/* 8a4399: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a439b: lea edx, [ecx + eax*2] */
  edx = (uint32_t)(ecx + eax*2);
/* 8a439e: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 8a43a4: mov ecx, dword ptr [esi + 0x1bc] */
  ecx = R32((uint32_t)(esi + 0x1bcu));
/* 8a43aa: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 8a43ad: lea edi, [ebx + eax*2] */
  edi = (uint32_t)(ebx + eax*2);
/* 8a43b0: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a43b2: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a43b4: xor ebx, ebx */
  ebx = 0;
/* 8a43b6: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 8a43b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a43c0: /* 8a43c0: cmp ebx, dword ptr [esi + 0x1f0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a43c6: jge 0x8a4499 */
  if ((sf == of)) goto L_8a4499;
L_8a43cc: /* 8a43cc: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* 8a43d2: imul ebx, ebx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x11cu);
  ebx = (uint32_t)r;
  }
/* 8a43d8: mov edx, dword ptr [ebx + ecx + 0xa4] */
  edx = R32((uint32_t)(ebx + ecx + 0xa4u));
/* 8a43df: lea ecx, [ebx + ecx + 0xa4] */
  ecx = (uint32_t)(ebx + ecx + 0xa4u);
/* 8a43e6: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a43e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a43e8: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* 8a43ee: mov edx, dword ptr [ebx + eax + 0xbc] */
  edx = R32((uint32_t)(ebx + eax + 0xbcu));
/* 8a43f5: lea ecx, [ebx + eax + 0xbc] */
  ecx = (uint32_t)(ebx + eax + 0xbcu);
/* 8a43fc: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a43feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a43fe: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* 8a4404: mov edx, dword ptr [ebx + eax + 0xd4] */
  edx = R32((uint32_t)(ebx + eax + 0xd4u));
/* 8a440b: lea ecx, [ebx + eax + 0xd4] */
  ecx = (uint32_t)(ebx + eax + 0xd4u);
/* 8a4412: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a4414u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4414: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* 8a441a: mov edx, dword ptr [ebx + eax + 0xec] */
  edx = R32((uint32_t)(ebx + eax + 0xecu));
/* 8a4421: lea ecx, [ebx + eax + 0xec] */
  ecx = (uint32_t)(ebx + eax + 0xecu);
/* 8a4428: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a442au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a442a: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* 8a4430: mov ecx, dword ptr [ebx + eax + 0xfc] */
  ecx = R32((uint32_t)(ebx + eax + 0xfcu));
/* 8a4437: mov edx, dword ptr [ebx + eax + 0xcc] */
  edx = R32((uint32_t)(ebx + eax + 0xccu));
/* 8a443e: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a4440: lea eax, [ecx + edx + 8] */
  eax = (uint32_t)(ecx + edx + 0x8u);
/* 8a4444: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 8a444a: mov ecx, dword ptr [ebx + 0xe4] */
  ecx = R32((uint32_t)(ebx + 0xe4u));
/* 8a4450: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a4453: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a4455: lea edx, [edi + eax*4] */
  edx = (uint32_t)(edi + eax*4);
/* 8a4458: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a445b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a445c: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 8a445f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8a4462: mov ebx, eax */
  ebx = eax;
/* 8a4464: jmp 0x8a43c0 */
  goto L_8a43c0;
L_8a4499: /* 8a4499: xor edx, edx */
  edx = 0;
/* 8a449b: jmp 0x8a44a0 */
  goto L_8a44a0;
L_8a44a0: /* 8a44a0: cmp edx, dword ptr [esi + 0x1f0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a44a6: jge 0x8a44ea */
  if ((sf == of)) goto L_8a44ea;
L_8a44a8: /* 8a44a8: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* 8a44ae: mov eax, edx */
  eax = edx;
/* 8a44b0: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8a44b6: mov ebx, dword ptr [eax + ecx + 0x10] */
  ebx = R32((uint32_t)(eax + ecx + 0x10u));
/* 8a44ba: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a44bc: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* 8a44c2: lea ebx, [ebx + ecx*2] */
  ebx = (uint32_t)(ebx + ecx*2);
/* 8a44c5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8a44c8: add ecx, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44cb: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 8a44ce: lea ecx, [ecx + ebx*4] */
  ecx = (uint32_t)(ecx + ebx*4);
/* 8a44d1: add ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44d4: mov ebx, dword ptr [eax + 0x9c] */
  ebx = R32((uint32_t)(eax + 0x9cu));
/* 8a44da: lea ecx, [ebx + ecx*2 + 0x5e] */
  ecx = (uint32_t)(ebx + ecx*2 + 0x5eu);
/* 8a44de: add ecx, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44e1: add ecx, dword ptr [eax + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44e4: lea edi, [edi + ecx*2] */
  edi = (uint32_t)(edi + ecx*2);
/* 8a44e7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a44e8: jmp 0x8a44a0 */
  goto L_8a44a0;
L_8a44ea: /* 8a44ea: mov edx, dword ptr [esi + 0x308] */
  edx = R32((uint32_t)(esi + 0x308u));
/* 8a44f0: mov eax, dword ptr [esi + 0x2d8] */
  eax = R32((uint32_t)(esi + 0x2d8u));
/* 8a44f6: lea eax, [edx + eax + 3] */
  eax = (uint32_t)(edx + eax + 0x3u);
/* 8a44fa: mov edx, dword ptr [esi + 0x2fc] */
  edx = R32((uint32_t)(esi + 0x2fcu));
/* 8a4500: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a4503: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a4506: add eax, dword ptr [esi + 0x2f0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2f0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a450c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a450f: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 8a4512: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4513: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4514: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a451b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a451c: mov esp, ebp */
  esp = ebp;
/* 8a451e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a451f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4469(void) {
  LOAD_REGS();
L_8a4469: /* 8a4469: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a446c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a4471: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a4474: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a4475: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a4478: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a447du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a447d(); return;
}

void f_8a447d(void) {
  LOAD_REGS();
L_8a447d: /* 8a447d: push 0xa1aba8 */
  { uint32_t v = 0xa1aba8u; esp -= 4; W32(esp, v); }
/* 8a4482: push 0xae8fe4 */
  { uint32_t v = 0xae8fe4u; esp -= 4; W32(esp, v); }
/* 8a4487: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a448du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a448d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a4490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4492: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4494: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a4499u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8a4499: xor edx, edx */
  edx = 0;
/* 8a449b: jmp 0x8a44a0 */
  goto L_8a44a0;
L_8a44a0: /* 8a44a0: cmp edx, dword ptr [esi + 0x1f0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a44a6: jge 0x8a44ea */
  if ((sf == of)) goto L_8a44ea;
L_8a44a8: /* 8a44a8: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* 8a44ae: mov eax, edx */
  eax = edx;
/* 8a44b0: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8a44b6: mov ebx, dword ptr [eax + ecx + 0x10] */
  ebx = R32((uint32_t)(eax + ecx + 0x10u));
/* 8a44ba: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a44bc: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* 8a44c2: lea ebx, [ebx + ecx*2] */
  ebx = (uint32_t)(ebx + ecx*2);
/* 8a44c5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8a44c8: add ecx, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44cb: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 8a44ce: lea ecx, [ecx + ebx*4] */
  ecx = (uint32_t)(ecx + ebx*4);
/* 8a44d1: add ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44d4: mov ebx, dword ptr [eax + 0x9c] */
  ebx = R32((uint32_t)(eax + 0x9cu));
/* 8a44da: lea ecx, [ebx + ecx*2 + 0x5e] */
  ecx = (uint32_t)(ebx + ecx*2 + 0x5eu);
/* 8a44de: add ecx, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44e1: add ecx, dword ptr [eax + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44e4: lea edi, [edi + ecx*2] */
  edi = (uint32_t)(edi + ecx*2);
/* 8a44e7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a44e8: jmp 0x8a44a0 */
  goto L_8a44a0;
L_8a44ea: /* 8a44ea: mov edx, dword ptr [esi + 0x308] */
  edx = R32((uint32_t)(esi + 0x308u));
/* 8a44f0: mov eax, dword ptr [esi + 0x2d8] */
  eax = R32((uint32_t)(esi + 0x2d8u));
/* 8a44f6: lea eax, [edx + eax + 3] */
  eax = (uint32_t)(edx + eax + 0x3u);
/* 8a44fa: mov edx, dword ptr [esi + 0x2fc] */
  edx = R32((uint32_t)(esi + 0x2fcu));
/* 8a4500: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a4503: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a4506: add eax, dword ptr [esi + 0x2f0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2f0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a450c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a450f: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 8a4512: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4513: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4514: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a451b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a451c: mov esp, ebp */
  esp = ebp;
/* 8a451e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a451f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a449d(void) {
  LOAD_REGS();
L_8a449d: /* 8a449d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a44a0: /* 8a44a0: cmp edx, dword ptr [esi + 0x1f0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a44a6: jge 0x8a44ea */
  if ((sf == of)) goto L_8a44ea;
L_8a44a8: /* 8a44a8: mov ecx, dword ptr [esi + 0x1ec] */
  ecx = R32((uint32_t)(esi + 0x1ecu));
/* 8a44ae: mov eax, edx */
  eax = edx;
/* 8a44b0: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8a44b6: mov ebx, dword ptr [eax + ecx + 0x10] */
  ebx = R32((uint32_t)(eax + ecx + 0x10u));
/* 8a44ba: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a44bc: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* 8a44c2: lea ebx, [ebx + ecx*2] */
  ebx = (uint32_t)(ebx + ecx*2);
/* 8a44c5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8a44c8: add ecx, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44cb: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 8a44ce: lea ecx, [ecx + ebx*4] */
  ecx = (uint32_t)(ecx + ebx*4);
/* 8a44d1: add ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44d4: mov ebx, dword ptr [eax + 0x9c] */
  ebx = R32((uint32_t)(eax + 0x9cu));
/* 8a44da: lea ecx, [ebx + ecx*2 + 0x5e] */
  ecx = (uint32_t)(ebx + ecx*2 + 0x5eu);
/* 8a44de: add ecx, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44e1: add ecx, dword ptr [eax + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a44e4: lea edi, [edi + ecx*2] */
  edi = (uint32_t)(edi + ecx*2);
/* 8a44e7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a44e8: jmp 0x8a44a0 */
  goto L_8a44a0;
L_8a44ea: /* 8a44ea: mov edx, dword ptr [esi + 0x308] */
  edx = R32((uint32_t)(esi + 0x308u));
/* 8a44f0: mov eax, dword ptr [esi + 0x2d8] */
  eax = R32((uint32_t)(esi + 0x2d8u));
/* 8a44f6: lea eax, [edx + eax + 3] */
  eax = (uint32_t)(edx + eax + 0x3u);
/* 8a44fa: mov edx, dword ptr [esi + 0x2fc] */
  edx = R32((uint32_t)(esi + 0x2fcu));
/* 8a4500: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a4503: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a4506: add eax, dword ptr [esi + 0x2f0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2f0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a450c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a450f: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 8a4512: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4513: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4514: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a451b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a451c: mov esp, ebp */
  esp = ebp;
/* 8a451e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a451f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a45d0(void) {
  LOAD_REGS();
L_8a45d0: /* 8a45d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a45d1: mov ebp, esp */
  ebp = esp;
/* 8a45d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a45d5: push 0x9d60c0 */
  { uint32_t v = 0x9d60c0u; esp -= 4; W32(esp, v); }
/* 8a45da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a45e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a45e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a45e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a45eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a45ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a45ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a45f0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a45f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a45f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a45f6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a45fd: jl 0x8a46fe */
  if ((sf != of)) goto L_8a46fe;
L_8a4603: /* 8a4603: cmp esi, dword ptr [ecx + 0x1f0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4609: jge 0x8a46fe */
  if ((sf == of)) goto L_8a46fe;
L_8a460f: /* 8a460f: mov edi, dword ptr [ecx + 0x1ec] */
  edi = R32((uint32_t)(ecx + 0x1ecu));
/* 8a4615: imul esi, esi, 0x11c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x11cu);
  esi = (uint32_t)r;
  }
/* 8a461b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8a461e: xor edx, edx */
  edx = 0;
/* 8a4620: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a4622: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a4624: jne 0x8a4685 */
  if (!zf) goto L_8a4685;
L_8a4626: /* 8a4626: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 8a462c: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 8a4632: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a4634u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4634: mov edx, dword ptr [esi + 0xbc] */
  edx = R32((uint32_t)(esi + 0xbcu));
/* 8a463a: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 8a4640: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a4642u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4642: mov eax, dword ptr [esi + 0xd4] */
  eax = R32((uint32_t)(esi + 0xd4u));
/* 8a4648: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* 8a464e: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a4650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4650: mov edx, dword ptr [esi + 0xec] */
  edx = R32((uint32_t)(esi + 0xecu));
/* 8a4656: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 8a465c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a465eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a465e: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* 8a4664: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* 8a466a: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 8a4670: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 8a4674: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a4677: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 8a467d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a467f: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a4682: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
L_8a4685: /* 8a4685: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* 8a468b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8a468e: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 8a4691: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8a4694: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* 8a4697: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 8a469a: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a469c: mov edi, dword ptr [esi + 0x58] */
  edi = R32((uint32_t)(esi + 0x58u));
/* 8a469f: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a46a2: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8a46a5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 8a46ab: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a46ad: lea ecx, [eax + ecx*2 + 0x5e] */
  ecx = (uint32_t)(eax + ecx*2 + 0x5eu);
/* 8a46b1: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 8a46b4: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a46b6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a46b8: lea eax, [edx + ecx*2] */
  eax = (uint32_t)(edx + ecx*2);
/* 8a46bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a46be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a46c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a46c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a46c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a46c8: mov esp, ebp */
  esp = ebp;
/* 8a46ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a46cb: ret 8 */
  esp += 12; SPILL(); return;
L_8a46fe: /* 8a46fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4701: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4702: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4703: xor eax, eax */
  eax = 0;
/* 8a4705: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a470c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a470d: mov esp, ebp */
  esp = ebp;
/* 8a470f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4710: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a46ce(void) {
  LOAD_REGS();
L_8a46ce: /* 8a46ce: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a46d1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a46d6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8a46d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a46da: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8a46dd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a46e2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a46e2(); return;
}

void f_8a46e2(void) {
  LOAD_REGS();
L_8a46e2: /* 8a46e2: push 0xa1abec */
  { uint32_t v = 0xa1abecu; esp -= 4; W32(esp, v); }
/* 8a46e7: push 0xae8fec */
  { uint32_t v = 0xae8fecu; esp -= 4; W32(esp, v); }
/* 8a46ec: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a46f2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a46f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a46f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a46f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a46f9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a46feu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8a46fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4701: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4702: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4703: xor eax, eax */
  eax = 0;
/* 8a4705: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a470c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a470d: mov esp, ebp */
  esp = ebp;
/* 8a470f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4710: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a4780(void) {
  LOAD_REGS();
L_8a4780: /* 8a4780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a4781: mov ebp, esp */
  ebp = esp;
/* 8a4783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a4785: push 0x9d60d0 */
  { uint32_t v = 0x9d60d0u; esp -= 4; W32(esp, v); }
/* 8a478a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a4790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a4798: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a479b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a479c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a479d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a479e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a47a1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a47a8: xor eax, eax */
  eax = 0;
/* 8a47aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a47b0: /* 8a47b0: cmp eax, dword ptr [ecx + 0xac] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a47b6: jge 0x8a47db */
  if ((sf == of)) goto L_8a47db;
L_8a47b8: /* 8a47b8: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 8a47be: mov di, word ptr [edx + eax*8 + 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*8 + 0x2u))) & 0xffffu);
/* 8a47c3: movzx esi, word ptr [edx + eax*8] */
  esi = (uint32_t)(R16((uint32_t)(edx + eax*8)));
/* 8a47c7: lea edx, [edx + eax*8] */
  edx = (uint32_t)(edx + eax*8);
/* 8a47ca: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 8a47cd: mov edx, dword ptr [ecx + 0xa8] */
  edx = R32((uint32_t)(ecx + 0xa8u));
/* 8a47d3: mov word ptr [edx + eax*8 + 2], si */
  W16((uint32_t)(edx + eax*8 + 0x2u), (esi & 0xffffu));
/* 8a47d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a47d9: jmp 0x8a47b0 */
  goto L_8a47b0;
L_8a47db: /* 8a47db: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8a47e1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8a47e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a47e2: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a47e7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a47e9: push 0xae9250 */
  { uint32_t v = 0xae9250u; esp -= 4; W32(esp, v); }
/* 8a47ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a47ef: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a47f5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a47f5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a47f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a47fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a47fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a47fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a4804: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4805: mov esp, ebp */
  esp = ebp;
/* 8a4807: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4808: ret  */
  esp += 4; SPILL(); return;
}

void f_8a4809(void) {
  LOAD_REGS();
L_8a4809: /* 8a4809: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a480c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a4811: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8a4814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4815: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8a4818: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a481du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a481d(); return;
}

void f_8a481d(void) {
  LOAD_REGS();
L_8a481d: /* 8a481d: push 0xa1ac30 */
  { uint32_t v = 0xa1ac30u; esp -= 4; W32(esp, v); }
/* 8a4822: push 0xae9290 */
  { uint32_t v = 0xae9290u; esp -= 4; W32(esp, v); }
/* 8a4827: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a482du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a482d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a4830: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4832: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4834: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a4839u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a4839: guest_badaddr(0x8a4839); return;
}

void f_8a4870(void) {
  LOAD_REGS();
L_8a4870: /* 8a4870: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a4871: mov ebp, esp */
  ebp = esp;
/* 8a4873: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a4875: push 0x9d60e0 */
  { uint32_t v = 0x9d60e0u; esp -= 4; W32(esp, v); }
/* 8a487a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a4880: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4881: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a4888: sub esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a488e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a488f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4890: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4891: xor esi, esi */
  esi = 0;
/* 8a4893: xor edi, edi */
  edi = 0;
/* 8a4895: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a4898: mov ebx, ecx */
  ebx = ecx;
/* 8a489a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8a489d: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_8a48a0: /* 8a48a0: cmp esi, dword ptr [ebx + 0x48] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a48a3: jge 0x8a48cf */
  if ((sf == of)) goto L_8a48cf;
L_8a48a5: /* 8a48a5: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* 8a48a8: mov eax, esi */
  eax = esi;
/* 8a48aa: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8a48ad: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a48af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a48b0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8a48b3: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8a48b9u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8a48b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a48bb: je 0x8a48cc */
  if (zf) goto L_8a48cc;
L_8a48bd: /* 8a48bd: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 8a48c0: mov eax, esi */
  eax = esi;
/* 8a48c2: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 8a48c5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a48c7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a48ca: mov edi, eax */
  edi = eax;
L_8a48cc: /* 8a48cc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a48cd: jmp 0x8a48a0 */
  goto L_8a48a0;
L_8a48cf: /* 8a48cf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a48d1: je 0x8a4a3a */
  if (zf) goto L_8a4a3a;
L_8a48d7: /* 8a48d7: xor esi, esi */
  esi = 0;
L_8a48d9: /* 8a48d9: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 8a48dc: cmp esi, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a48df: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8a48e2: jge 0x8a4a22 */
  if ((sf == of)) goto L_8a4a22;
L_8a48e8: /* 8a48e8: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8a48eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a48ec: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8a48ef: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8a48f6: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8a48fd: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8a4904: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x8a490au); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 8a490a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a490c: je 0x8a4934 */
  if (zf) goto L_8a4934;
L_8a490e: /* 8a490e: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 8a4911: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8a4914: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8a4917: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8a491a: fadd dword ptr [edx + ecx*4] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx*4)));
/* 8a491d: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a4920: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a4922: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8a4925: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a4928: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a492b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8a492e: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a4931: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_8a4934: /* 8a4934: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 8a4937: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a493a: mov ebx, esi */
  ebx = esi;
/* 8a493c: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8a493f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a4941: mov eax, ecx */
  eax = ecx;
/* 8a4943: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a4945: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8a4948: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8a494b: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 8a494e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a4951: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8a4954: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8a4957: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a495d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a495f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a4962: jnp 0x8a49cd */
  if (!pf) goto L_8a49cd;
L_8a4964: /* 8a4964: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a4966: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a4969: mov edx, esp */
  edx = esp;
/* 8a496b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a496d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8a4970: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8a4973: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8a4976: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 8a4979: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a497c: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 8a497f: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8a4985: call 0x6c867a */
  esp -= 4; W32(esp, 0x8a498au); SPILL(); f_6c867a(); if (g_unwind) return; RELOAD();
/* 8a498a: mov esi, eax */
  esi = eax;
/* 8a498c: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a4991: lea edi, [ebp - 0x7c] */
  edi = (uint32_t)(ebp + 0xffffff84u);
/* 8a4994: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8a4997: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a4999: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a499a: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8a499d: call dword ptr [0xcfaba4] */
  esp -= 4; W32(esp, 0x8a49a3u); SPILL(); f_4e2d33(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8a49a3: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a49a6: mov edi, esp */
  edi = esp;
/* 8a49a8: mov ecx, 0xc */
  ecx = 0xcu;
/* 8a49ad: lea esi, [ebp - 0x7c] */
  esi = (uint32_t)(ebp + 0xffffff84u);
/* 8a49b0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a49b2: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8a49b5: call 0x6c775c */
  esp -= 4; W32(esp, 0x8a49bau); SPILL(); f_6c775c(); if (g_unwind) return; RELOAD();
/* 8a49ba: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a49bc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a49bf: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 8a49c2: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a49c5: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a49c8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8a49cb: jmp 0x8a49d0 */
  goto L_8a49d0;
L_8a49cd: /* 8a49cd: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_8a49d0: /* 8a49d0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a49d3: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 8a49d6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8a49d9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a49db: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8a49dd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8a49e0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a49e3: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8a49e6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a49e9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8a49ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a49ed: jmp 0x8a48d9 */
  goto L_8a48d9;
L_8a4a22: /* 8a4a22: mov eax, 1 */
  eax = 0x1u;
/* 8a4a27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4a2a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a4a31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4a32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4a33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4a34: mov esp, ebp */
  esp = ebp;
/* 8a4a36: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4a37: ret 0x34 */
  esp += 56; SPILL(); return;
L_8a4a3a: /* 8a4a3a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4a3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4a3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4a3f: xor eax, eax */
  eax = 0;
/* 8a4a41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a4a48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4a49: mov esp, ebp */
  esp = ebp;
/* 8a4a4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4a4c: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_8a49f2(void) {
  LOAD_REGS();
L_8a49f2: /* 8a49f2: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8a49f5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a49fa: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8a49fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a49fe: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8a4a01: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a4a06u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a4a06(); return;
}

void f_8a4a06(void) {
  LOAD_REGS();
L_8a4a06: /* 8a4a06: push 0xa1ac6c */
  { uint32_t v = 0xa1ac6cu; esp -= 4; W32(esp, v); }
/* 8a4a0b: push 0xae9648 */
  { uint32_t v = 0xae9648u; esp -= 4; W32(esp, v); }
/* 8a4a10: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a4a16u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a4a16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a4a19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4a1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4a1d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a4a22u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8a4a22: mov eax, 1 */
  eax = 0x1u;
/* 8a4a27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4a2a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a4a31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4a32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4a33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4a34: mov esp, ebp */
  esp = ebp;
/* 8a4a36: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4a37: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_8a4ad0(void) {
  LOAD_REGS();
L_8a4ad0: /* 8a4ad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a4ad1: mov ebp, esp */
  ebp = esp;
/* 8a4ad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a4ad5: push 0x9d60f0 */
  { uint32_t v = 0x9d60f0u; esp -= 4; W32(esp, v); }
/* 8a4ada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a4ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4ae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a4ae8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a4aeb: xor eax, eax */
  eax = 0;
/* 8a4aed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a4aee: mov ebx, ecx */
  ebx = ecx;
/* 8a4af0: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 8a4af3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4af4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4af5: xor edi, edi */
  edi = 0;
/* 8a4af7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a4af9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a4afc: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 8a4aff: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8a4b02: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8a4b05: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8a4b08: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8a4b0b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a4b0e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8a4b11: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8a4b14: je 0x8a4b7a */
  if (zf) goto L_8a4b7a;
L_8a4b16: /* 8a4b16: xor esi, esi */
  esi = 0;
L_8a4b18: /* 8a4b18: cmp esi, dword ptr [ebx + 0x5c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4b1b: jge 0x8a4b63 */
  if ((sf == of)) goto L_8a4b63;
L_8a4b1d: /* 8a4b1d: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 8a4b20: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8a4b23: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a4b25: je 0x8a4b30 */
  if (zf) goto L_8a4b30;
L_8a4b27: /* 8a4b27: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a4b29: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8a4b2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4b2c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a4b2e: xor eax, eax */
  eax = 0;
L_8a4b30: /* 8a4b30: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a4b31: jmp 0x8a4b18 */
  goto L_8a4b18;
L_8a4b63: /* 8a4b63: xor eax, eax */
  eax = 0;
/* 8a4b65: mov eax, edi */
  eax = edi;
/* 8a4b67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4b6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a4b71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4b72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4b73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4b74: mov esp, ebp */
  esp = ebp;
/* 8a4b76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4b77: ret 4 */
  esp += 8; SPILL(); return;
L_8a4b7a: /* 8a4b7a: xor edi, edi */
  edi = 0;
/* 8a4b7c: xor esi, esi */
  esi = 0;
/* 8a4b7e: mov edi, edi */
  edi = edi;
L_8a4b80: /* 8a4b80: cmp esi, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4b83: jge 0x8a4bd4 */
  if ((sf == of)) goto L_8a4bd4;
L_8a4b85: /* 8a4b85: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8a4b88: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 8a4b8b: mov ecx, dword ptr [eax + edx*8 + 8] */
  ecx = R32((uint32_t)(eax + edx*8 + 0x8u));
/* 8a4b8f: lea edx, [eax + edx*8] */
  edx = (uint32_t)(eax + edx*8);
/* 8a4b92: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 8a4b95: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 8a4b98: lea ebx, [eax + edx] */
  ebx = (uint32_t)(eax + edx);
/* 8a4b9b: lea ebx, [ebx + eax*2] */
  ebx = (uint32_t)(ebx + eax*2);
/* 8a4b9e: lea ebx, [ebx + ecx*4] */
  ebx = (uint32_t)(ebx + ecx*4);
/* 8a4ba1: lea edi, [edi + ebx*4 + 4] */
  edi = (uint32_t)(edi + ebx*4 + 0x4u);
/* 8a4ba5: add dword ptr [ebp - 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8a4ba8: add dword ptr [ebp - 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8a4bab: add dword ptr [ebp - 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8a4bae: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a4bb1: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a4bb4: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a4bb6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a4bb9: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8a4bbc: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a4bbf: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a4bc2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8a4bc5: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8a4bc8: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8a4bcb: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a4bce: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8a4bd1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a4bd2: jmp 0x8a4b80 */
  goto L_8a4b80;
L_8a4bd4: /* 8a4bd4: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* 8a4bd7: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* 8a4bda: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a4bdd: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 8a4be0: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8a4be3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a4be6: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 8a4be9: add ecx, dword ptr [ebx + 0x50] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x50u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a4bec: lea eax, [edi + ecx*4] */
  eax = (uint32_t)(edi + ecx*4);
/* 8a4bef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4bf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4bf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4bf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a4bfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4bfc: mov esp, ebp */
  esp = ebp;
/* 8a4bfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4bff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4b33(void) {
  LOAD_REGS();
L_8a4b33: /* 8a4b33: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a4b36: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a4b3b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8a4b3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a4b3f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a4b42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a4b47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a4b47(); return;
}

void f_8a4b47(void) {
  LOAD_REGS();
L_8a4b47: /* 8a4b47: push 0xa1acb8 */
  { uint32_t v = 0xa1acb8u; esp -= 4; W32(esp, v); }
/* 8a4b4c: push 0xae9700 */
  { uint32_t v = 0xae9700u; esp -= 4; W32(esp, v); }
/* 8a4b51: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a4b57u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a4b57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a4b5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4b5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4b5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a4b63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8a4b63: xor eax, eax */
  eax = 0;
/* 8a4b65: mov eax, edi */
  eax = edi;
/* 8a4b67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a4b6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a4b71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4b72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4b73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4b74: mov esp, ebp */
  esp = ebp;
/* 8a4b76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4b77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4c60(void) {
  LOAD_REGS();
L_8a4c60: /* 8a4c60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4c61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a4c63: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4c65: mov esi, ecx */
  esi = ecx;
/* 8a4c67: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4c6du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4c6d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8a4c71: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a4c73: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8a4c75: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8a4c78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4c79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4c90(void) {
  LOAD_REGS();
L_8a4c90: /* 8a4c90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4c91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4c92: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8a4c94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4c96: mov esi, ecx */
  esi = ecx;
/* 8a4c98: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4c9eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4c9e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a4ca0: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8a4ca4: mov edi, eax */
  edi = eax;
/* 8a4ca6: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a4ca9: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a4cab: mov ecx, 8 */
  ecx = 0x8u;
/* 8a4cb0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a4cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4cb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4cd0(void) {
  LOAD_REGS();
L_8a4cd0: /* 8a4cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4cd1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4cd3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4cd5: mov esi, ecx */
  esi = ecx;
/* 8a4cd7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4cddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4cdd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a4cdf: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8a4ce3: mov si, word ptr [edx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 8a4ce6: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8a4ce9: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 8a4cec: mov si, word ptr [edx + 2] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x2u))) & 0xffffu);
/* 8a4cf0: mov word ptr [ecx + 2], si */
  W16((uint32_t)(ecx + 0x2u), (esi & 0xffffu));
/* 8a4cf4: mov si, word ptr [edx + 4] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x4u))) & 0xffffu);
/* 8a4cf8: mov word ptr [ecx + 4], si */
  W16((uint32_t)(ecx + 0x4u), (esi & 0xffffu));
/* 8a4cfc: mov dx, word ptr [edx + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x6u))) & 0xffffu);
/* 8a4d00: mov word ptr [ecx + 6], dx */
  W16((uint32_t)(ecx + 0x6u), (edx & 0xffffu));
/* 8a4d04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4d05: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4d20(void) {
  LOAD_REGS();
L_8a4d20: /* 8a4d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4d21: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a4d23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4d25: mov esi, ecx */
  esi = ecx;
/* 8a4d27: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4d2du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4d2d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a4d2f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a4d32: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8a4d35: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8a4d39: mov si, word ptr [edx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 8a4d3c: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 8a4d3f: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8a4d42: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8a4d45: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a4d48: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a4d4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4d4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4d60(void) {
  LOAD_REGS();
L_8a4d60: /* 8a4d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4d61: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a4d63: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4d65: mov esi, ecx */
  esi = ecx;
/* 8a4d67: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4d6du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4d6d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a4d6f: mov ecx, eax */
  ecx = eax;
/* 8a4d71: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a4d74: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a4d76: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8a4d7a: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8a4d7c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8a4d7e: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8a4d81: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8a4d84: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 8a4d87: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 8a4d8a: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 8a4d8d: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 8a4d90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4d91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4db0(void) {
  LOAD_REGS();
L_8a4db0: /* 8a4db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4db1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4db2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a4db4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4db6: mov edi, ecx */
  edi = ecx;
/* 8a4db8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4dbeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4dbe: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a4dc0: mov esi, eax */
  esi = eax;
/* 8a4dc2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8a4dc6: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8a4dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4dca: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8a4dcd: call 0x6c11e5 */
  esp -= 4; W32(esp, 0x8a4dd2u); SPILL(); f_6c11e5(); if (g_unwind) return; RELOAD();
/* 8a4dd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4dd3: mov eax, esi */
  eax = esi;
/* 8a4dd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4dd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4df0(void) {
  LOAD_REGS();
L_8a4df0: /* 8a4df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4df1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4df3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4df5: mov esi, ecx */
  esi = ecx;
/* 8a4df7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4dfdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4dfd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a4dff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a4e03: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8a4e05: mov dword ptr [edx + eax*8], esi */
  W32((uint32_t)(edx + eax*8), esi);
/* 8a4e08: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8a4e0b: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a4e0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4e10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4e30(void) {
  LOAD_REGS();
L_8a4e30: /* 8a4e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4e31: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4e33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a4e35: mov esi, ecx */
  esi = ecx;
/* 8a4e37: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4e3du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4e3d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a4e3f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a4e43: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8a4e45: mov dword ptr [edx + eax*8], esi */
  W32((uint32_t)(edx + eax*8), esi);
/* 8a4e48: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8a4e4b: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a4e4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4e50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a4e70(void) {
  LOAD_REGS();
L_8a4e70: /* 8a4e70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a4e71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a4e72: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8a4e78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4e79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4e7a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8a4e7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a4e80: mov esi, ecx */
  esi = ecx;
/* 8a4e82: jge 0x8a4e98 */
  if ((sf == of)) goto L_8a4e98;
L_8a4e84: /* 8a4e84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8a4e89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a4e8e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8a4e93: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a4e95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4e95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a4e98: /* 8a4e98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4e9b: jle 0x8a4eb1 */
  if ((zf || sf != of)) goto L_8a4eb1;
L_8a4e9d: /* 8a4e9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a4ea2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a4ea7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a4eac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a4eaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4eae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a4eb1: /* 8a4eb1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8a4eb5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8a4eb8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8a4ebb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4ebd: jle 0x8a4ed3 */
  if ((zf || sf != of)) goto L_8a4ed3;
L_8a4ebf: /* 8a4ebf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a4ec4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a4ec9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a4ece: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a4ed0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4ed0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a4ed3: /* 8a4ed3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4ed5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a4ed6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4ed7: mov ecx, esi */
  ecx = esi;
/* 8a4ed9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a4edfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a4edf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4ee0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4ee1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4ee2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4ee3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a4f10(void) {
  LOAD_REGS();
L_8a4f10: /* 8a4f10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a4f11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a4f12: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8a4f18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4f19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4f1a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8a4f1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a4f20: mov esi, ecx */
  esi = ecx;
/* 8a4f22: jge 0x8a4f38 */
  if ((sf == of)) goto L_8a4f38;
L_8a4f24: /* 8a4f24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8a4f29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a4f2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8a4f33: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a4f35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4f35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a4f38: /* 8a4f38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4f3b: jle 0x8a4f51 */
  if ((zf || sf != of)) goto L_8a4f51;
L_8a4f3d: /* 8a4f3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a4f42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a4f47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a4f4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a4f4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4f4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a4f51: /* 8a4f51: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8a4f55: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8a4f58: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 8a4f5b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4f5d: jle 0x8a4f73 */
  if ((zf || sf != of)) goto L_8a4f73;
L_8a4f5f: /* 8a4f5f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a4f64: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a4f69: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a4f6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8a4f70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a4f70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a4f73: /* 8a4f73: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a4f76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4f77: mov ecx, esi */
  ecx = esi;
/* 8a4f79: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a4f7fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a4f7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a4f80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a4f81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a4f82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a4f83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a4fb0(void) {
  LOAD_REGS();
L_8a4fb0: /* 8a4fb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a4fb1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a4fb2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 8a4fb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a4fb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a4fb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4fba: mov esi, ecx */
  esi = ecx;
/* 8a4fbc: lea edi, [ebp + 0xb0] */
  edi = (uint32_t)(ebp + 0xb0u);
/* 8a4fc2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4fc4: mov ecx, edi */
  ecx = edi;
/* 8a4fc6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a4fccu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a4fcc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8a4fcf: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a4fd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a4fd2: mov ecx, edi */
  ecx = edi;
/* 8a4fd4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a4fdau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a4fda: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8a4fdd: xor eax, eax */
  eax = 0;
/* 8a4fdf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a4fe1: jle 0x8a4ffd */
  if ((zf || sf != of)) goto L_8a4ffd;
L_8a4fe3: /* 8a4fe3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a4fe5: mov ebx, dword ptr [ecx + eax*8] */
  ebx = R32((uint32_t)(ecx + eax*8));
/* 8a4fe8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a4fea: mov dword ptr [edx + eax*8], ebx */
  W32((uint32_t)(edx + eax*8), ebx);
/* 8a4fed: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* 8a4ff1: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a4ff5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8a4ff8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a4ff9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a4ffb: jl 0x8a4fe3 */
  if ((sf != of)) goto L_8a4fe3;
L_8a4ffd: /* 8a4ffd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a4fff: lea ebx, [ebp + 0xc8] */
  ebx = (uint32_t)(ebp + 0xc8u);
/* 8a5005: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5007: mov ecx, ebx */
  ecx = ebx;
/* 8a5009: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a500fu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a500f: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 8a5012: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5014: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a5015: mov ecx, ebx */
  ecx = ebx;
/* 8a5017: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a501du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a501d: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8a5020: xor edi, edi */
  edi = 0;
/* 8a5022: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5024: jle 0x8a505b */
  if ((zf || sf != of)) goto L_8a505b;
L_8a5026: /* 8a5026: xor edx, edx */
  edx = 0;
/* 8a5028: jmp 0x8a5030 */
  goto L_8a5030;
L_8a5030: /* 8a5030: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8a5033: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5035: mov bp, word ptr [eax + edx] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx))) & 0xffffu);
/* 8a5039: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a503b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a503d: mov word ptr [ecx], bp */
  W16((uint32_t)(ecx), (ebp & 0xffffu));
/* 8a5040: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8a5043: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8a5046: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a5049: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8a504c: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8a504f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a5050: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a5053: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5055: jl 0x8a5030 */
  if ((sf != of)) goto L_8a5030;
L_8a5057: /* 8a5057: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_8a505b: /* 8a505b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a505d: lea ebx, [ebp + 0xe0] */
  ebx = (uint32_t)(ebp + 0xe0u);
/* 8a5063: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5065: mov ecx, ebx */
  ecx = ebx;
/* 8a5067: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a506du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a506d: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8a5070: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5072: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5073: mov ecx, ebx */
  ecx = ebx;
/* 8a5075: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a507bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a507b: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 8a507e: xor edx, edx */
  edx = 0;
/* 8a5080: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5082: jle 0x8a50ba */
  if ((zf || sf != of)) goto L_8a50ba;
L_8a5084: /* 8a5084: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8a5087: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5089: lea edi, [edx*8] */
  edi = (uint32_t)(edx*8);
/* 8a5090: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5092: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5094: mov di, word ptr [eax] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a5097: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 8a509a: mov di, word ptr [eax + 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a509e: mov word ptr [ecx + 2], di */
  W16((uint32_t)(ecx + 0x2u), (edi & 0xffffu));
/* 8a50a2: mov di, word ptr [eax + 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a50a6: mov word ptr [ecx + 4], di */
  W16((uint32_t)(ecx + 0x4u), (edi & 0xffffu));
/* 8a50aa: mov ax, word ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a50ae: mov word ptr [ecx + 6], ax */
  W16((uint32_t)(ecx + 0x6u), (eax & 0xffffu));
/* 8a50b2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 8a50b5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a50b6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a50b8: jl 0x8a5084 */
  if ((sf != of)) goto L_8a5084;
L_8a50ba: /* 8a50ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a50bc: lea edi, [ebp + 0xf8] */
  edi = (uint32_t)(ebp + 0xf8u);
/* 8a50c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a50c4: mov ecx, edi */
  ecx = edi;
/* 8a50c6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a50ccu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a50cc: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8a50cf: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a50d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a50d2: mov ecx, edi */
  ecx = edi;
/* 8a50d4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a50dau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a50da: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8a50dd: xor ecx, ecx */
  ecx = 0;
/* 8a50df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a50e1: jle 0x8a5109 */
  if ((zf || sf != of)) goto L_8a5109;
L_8a50e3: /* 8a50e3: xor eax, eax */
  eax = 0;
L_8a50e5: /* 8a50e5: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 8a50e8: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a50ea: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a50ec: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 8a50ee: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a50f0: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 8a50f2: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 8a50f5: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 8a50f8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a50fb: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8a50fe: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8a5101: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a5102: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5105: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5107: jl 0x8a50e5 */
  if ((sf != of)) goto L_8a50e5;
L_8a5109: /* 8a5109: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a510a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a510b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a510c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a510d: ret 4 */
  esp += 8; SPILL(); return;
}
