#include "recomp.h"
#include "rec_mod.h"

void f_9937e6(void) {
  LOAD_REGS();
L_9937e6: /* 9937e6: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 9937ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9937f0: /* 9937f0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9937f4: xor ecx, ecx */
  ecx = 0;
/* 9937f6: mov dword ptr [eax*8 + 0xcf7178], ecx */
  W32((uint32_t)(eax*8 + 0xcf7178u), ecx);
/* 9937fd: mov dword ptr [eax*8 + 0xcf717c], ecx */
  W32((uint32_t)(eax*8 + 0xcf717cu), ecx);
/* 993804: cmp dword ptr [esp + 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993809: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99380d: jl 0x993931 */
  if ((sf != of)) goto L_993931;
L_993813: /* 993813: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 993817: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 99381a: lea edx, [edi + eax] */
  edx = (uint32_t)(edi + eax);
/* 99381d: mov eax, 0xcf71b8 */
  eax = 0xcf71b8u;
/* 993822: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993824: mov dword ptr [esp + 0x28], 3 */
  W32((uint32_t)(esp + 0x28u), 0x3u);
/* 99382c: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 99382f: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
L_993833: /* 993833: fld qword ptr [ecx - 0x18] */
  { double v = F64((uint32_t)(ecx + 0xffffffe8u)); FPUSH(v); }
/* 993836: fcomp qword ptr [edi] */
  fpu_com(ST0, F64((uint32_t)(edi)));
  FPOP();
/* 993838: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99383a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99383d: jp 0x993846 */
  if (pf) goto L_993846;
L_99383f: /* 99383f: mov eax, 1 */
  eax = 0x1u;
/* 993844: jmp 0x993848 */
  goto L_993848;
L_993846: /* 993846: xor eax, eax */
  eax = 0;
L_993848: /* 993848: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 99384c: fld qword ptr [esi*8 + 0xcf7310] */
  { double v = F64((uint32_t)(esi*8 + 0xcf7310u)); FPUSH(v); }
/* 993853: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 993855: fmul qword ptr [ecx - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ecx + 0xffffffe8u)));
/* 993858: fst qword ptr [edx - 0x18] */
  WF64((uint32_t)(edx + 0xffffffe8u), ST0);
/* 99385b: fadd qword ptr [esi*8 + 0xcf7178] */
  ST0 = ST0 + (F64((uint32_t)(esi*8 + 0xcf7178u)));
/* 993862: fstp qword ptr [esi*8 + 0xcf7178] */
  WF64((uint32_t)(esi*8 + 0xcf7178u), ST0); FPOP();
/* 993869: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 99386b: fcomp qword ptr [edi] */
  fpu_com(ST0, F64((uint32_t)(edi)));
  FPOP();
/* 99386d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99386f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993872: jp 0x99387b */
  if (pf) goto L_99387b;
L_993874: /* 993874: mov eax, 1 */
  eax = 0x1u;
/* 993879: jmp 0x99387d */
  goto L_99387d;
L_99387b: /* 99387b: xor eax, eax */
  eax = 0;
L_99387d: /* 99387d: fld qword ptr [esi*8 + 0xcf7310] */
  { double v = F64((uint32_t)(esi*8 + 0xcf7310u)); FPUSH(v); }
/* 993884: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 993886: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 993888: fst qword ptr [edx] */
  WF64((uint32_t)(edx), ST0);
/* 99388a: fadd qword ptr [esi*8 + 0xcf7178] */
  ST0 = ST0 + (F64((uint32_t)(esi*8 + 0xcf7178u)));
/* 993891: fstp qword ptr [esi*8 + 0xcf7178] */
  WF64((uint32_t)(esi*8 + 0xcf7178u), ST0); FPOP();
/* 993898: fld qword ptr [ecx + 0x18] */
  { double v = F64((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 99389b: fcomp qword ptr [edi] */
  fpu_com(ST0, F64((uint32_t)(edi)));
  FPOP();
/* 99389d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99389f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9938a2: jp 0x9938ab */
  if (pf) goto L_9938ab;
L_9938a4: /* 9938a4: mov eax, 1 */
  eax = 0x1u;
/* 9938a9: jmp 0x9938ad */
  goto L_9938ad;
L_9938ab: /* 9938ab: xor eax, eax */
  eax = 0;
L_9938ad: /* 9938ad: fld qword ptr [esi*8 + 0xcf7310] */
  { double v = F64((uint32_t)(esi*8 + 0xcf7310u)); FPUSH(v); }
/* 9938b4: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 9938b6: fmul qword ptr [ecx + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ecx + 0x18u)));
/* 9938b9: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 9938bd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9938bf: fstp qword ptr [eax + ecx] */
  WF64((uint32_t)(eax + ecx), ST0); FPOP();
/* 9938c2: fadd qword ptr [esi*8 + 0xcf7178] */
  ST0 = ST0 + (F64((uint32_t)(esi*8 + 0xcf7178u)));
/* 9938c9: fstp qword ptr [esi*8 + 0xcf7178] */
  WF64((uint32_t)(esi*8 + 0xcf7178u), ST0); FPOP();
/* 9938d0: fld qword ptr [ecx + 0x30] */
  { double v = F64((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 9938d3: fcomp qword ptr [edi] */
  fpu_com(ST0, F64((uint32_t)(edi)));
  FPOP();
/* 9938d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9938d7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9938da: jp 0x9938e3 */
  if (pf) goto L_9938e3;
L_9938dc: /* 9938dc: mov eax, 1 */
  eax = 0x1u;
/* 9938e1: jmp 0x9938e5 */
  goto L_9938e5;
L_9938e3: /* 9938e3: xor eax, eax */
  eax = 0;
L_9938e5: /* 9938e5: fld qword ptr [esi*8 + 0xcf7310] */
  { double v = F64((uint32_t)(esi*8 + 0xcf7310u)); FPUSH(v); }
/* 9938ec: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 9938ee: fmul qword ptr [ecx + 0x30] */
  ST0 = ST0 * (F64((uint32_t)(ecx + 0x30u)));
/* 9938f1: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 9938f5: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9938f8: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9938fb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9938fd: fstp qword ptr [eax + ecx - 0x60] */
  WF64((uint32_t)(eax + ecx + 0xffffffa0u), ST0); FPOP();
/* 993901: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 993905: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993908: fadd qword ptr [esi*8 + 0xcf7178] */
  ST0 = ST0 + (F64((uint32_t)(esi*8 + 0xcf7178u)));
/* 99390f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 993913: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 993917: fstp qword ptr [esi*8 + 0xcf7178] */
  WF64((uint32_t)(esi*8 + 0xcf7178u), ST0); FPOP();
/* 99391e: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 993922: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993925: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993927: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99392b: jl 0x993833 */
  if ((sf != of)) goto L_993833;
L_993931: /* 993931: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 993935: cmp ecx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993939: jge 0x99399d */
  if ((sf == of)) goto L_99399d;
L_99393b: /* 99393b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99393f: mov eax, ecx */
  eax = ecx;
/* 993941: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 993944: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 993947: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993949: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99394c: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 993950: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993954: lea esi, [eax + 0xcf7190] */
  esi = (uint32_t)(eax + 0xcf7190u);
/* 99395a: sub edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99395e: mov edi, edi */
  edi = edi;
L_993960: /* 993960: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 993962: fcomp qword ptr [edi] */
  fpu_com(ST0, F64((uint32_t)(edi)));
  FPOP();
/* 993964: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993966: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993969: jp 0x993972 */
  if (pf) goto L_993972;
L_99396b: /* 99396b: mov eax, 1 */
  eax = 0x1u;
/* 993970: jmp 0x993974 */
  goto L_993974;
L_993972: /* 993972: xor eax, eax */
  eax = 0;
L_993974: /* 993974: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 993976: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 993978: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99397c: fmul qword ptr [eax*8 + 0xcf7310] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7310u)));
/* 993983: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993986: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993989: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 99398a: fst qword ptr [esi - 0x18] */
  WF64((uint32_t)(esi + 0xffffffe8u), ST0);
/* 99398d: fadd qword ptr [eax*8 + 0xcf7178] */
  ST0 = ST0 + (F64((uint32_t)(eax*8 + 0xcf7178u)));
/* 993994: fstp qword ptr [eax*8 + 0xcf7178] */
  WF64((uint32_t)(eax*8 + 0xcf7178u), ST0); FPOP();
/* 99399b: jne 0x993960 */
  if (!zf) goto L_993960;
L_99399d: /* 99399d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9939a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9939a2: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9939a5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9939a8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9939ac: jl 0x9937f0 */
  if ((sf != of)) goto L_9937f0;
L_9939b2: /* 9939b2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 9939b5: mov byte ptr [esp + 0x4c], 1 */
  W8((uint32_t)(esp + 0x4cu), 0x1u);
/* 9939ba: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 9939c2: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9939c5: jmp 0x9939d0 */
  goto L_9939d0;
L_9939d0: /* 9939d0: fld qword ptr [esi - 8] */
  { double v = F64((uint32_t)(esi + 0xfffffff8u)); FPUSH(v); }
/* 9939d3: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9939d9: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 9939df: call 0x99c958 */
  esp -= 4; W32(esp, 0x9939e4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9939e4: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 9939e6: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9939ec: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9939f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 9939f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x9939fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9939fb: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9939fe: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993a04: mov edi, eax */
  edi = eax;
/* 993a06: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 993a0c: call 0x99c958 */
  esp -= 4; W32(esp, 0x993a11u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 993a11: mov ecx, eax */
  ecx = eax;
/* 993a13: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 993a17: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a19: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 993a1a: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 993a1c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a1e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a21: jg 0x993a5a */
  if ((!zf && sf == of)) goto L_993a5a;
L_993a23: /* 993a23: mov eax, edi */
  eax = edi;
/* 993a25: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a27: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 993a28: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 993a2a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a2c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a2f: jg 0x993a5a */
  if ((!zf && sf == of)) goto L_993a5a;
L_993a31: /* 993a31: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 993a35: mov eax, ecx */
  eax = ecx;
/* 993a37: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a39: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 993a3a: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 993a3c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a3e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a41: jg 0x993a5a */
  if ((!zf && sf == of)) goto L_993a5a;
L_993a43: /* 993a43: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 993a47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993a48: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993a4b: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a4e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 993a52: jl 0x9939d0 */
  if ((sf != of)) goto L_9939d0;
L_993a58: /* 993a58: jmp 0x993a5f */
  goto L_993a5f;
L_993a5a: /* 993a5a: mov byte ptr [esp + 0x4c], 0 */
  W8((uint32_t)(esp + 0x4cu), 0x0u);
L_993a5f: /* 993a5f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 993a61: je 0x993ab3 */
  if (zf) goto L_993ab3;
L_993a63: /* 993a63: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 993a66: mov ecx, dword ptr [esi + 0x1a0] */
  ecx = R32((uint32_t)(esi + 0x1a0u));
/* 993a6c: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 993a70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993a71: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 993a75: lea eax, [esi + 0x1c4] */
  eax = (uint32_t)(esi + 0x1c4u);
/* 993a7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993a7c: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 993a80: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 993a86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993a87: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 993a8c: push 0xcf7190 */
  { uint32_t v = 0xcf7190u; esp -= 4; W32(esp, v); }
/* 993a91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993a92: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 993a96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993a97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 993a98: call 0x992e70 */
  esp -= 4; W32(esp, 0x993a9du); SPILL(); f_992e70(); if (g_unwind) return; RELOAD();
/* 993a9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993a9f: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 993aa3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993aa6: mov dword ptr [esi + 0x1a8], ecx */
  W32((uint32_t)(esi + 0x1a8u), ecx);
/* 993aac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993aad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993aae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993aaf: mov esp, ebp */
  esp = ebp;
/* 993ab1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 993ab2: ret  */
  esp += 4; SPILL(); return;
L_993ab3: /* 993ab3: xor ebx, ebx */
  ebx = 0;
/* 993ab5: jmp 0x993ac0 */
  goto L_993ac0;
L_993ac0: /* 993ac0: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 993ac4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 993ac8: lea esi, [ebx*8] */
  esi = (uint32_t)(ebx*8);
/* 993acf: fmul qword ptr [esi + 0xcf7178] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xcf7178u)));
/* 993ad5: xor ecx, ecx */
  ecx = 0;
/* 993ad7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ada: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993adc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 993ade: fstp qword ptr [esi + 0xcf7178] */
  WF64((uint32_t)(esi + 0xcf7178u), ST0); FPOP();
/* 993ae4: jl 0x993b3a */
  if ((sf != of)) goto L_993b3a;
L_993ae6: /* 993ae6: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 993aea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993aec: mov edx, 3 */
  edx = 0x3u;
/* 993af1: mov eax, esi */
  eax = esi;
L_993af3: /* 993af3: fld qword ptr [eax + 0xcf7190] */
  { double v = F64((uint32_t)(eax + 0xcf7190u)); FPUSH(v); }
/* 993af9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993afc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993afe: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993b01: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b04: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b06: fstp qword ptr [eax + 0xcf6f98] */
  WF64((uint32_t)(eax + 0xcf6f98u), ST0); FPOP();
/* 993b0c: fld qword ptr [eax + 0xcf7148] */
  { double v = F64((uint32_t)(eax + 0xcf7148u)); FPUSH(v); }
/* 993b12: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b14: fstp qword ptr [eax + 0xcf6fb0] */
  WF64((uint32_t)(eax + 0xcf6fb0u), ST0); FPOP();
/* 993b1a: fld qword ptr [eax + 0xcf7160] */
  { double v = F64((uint32_t)(eax + 0xcf7160u)); FPUSH(v); }
/* 993b20: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b22: fstp qword ptr [eax + 0xcf6fc8] */
  WF64((uint32_t)(eax + 0xcf6fc8u), ST0); FPOP();
/* 993b28: fld qword ptr [eax + 0xcf7178] */
  { double v = F64((uint32_t)(eax + 0xcf7178u)); FPUSH(v); }
/* 993b2e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b30: fstp qword ptr [eax + 0xcf6fe0] */
  WF64((uint32_t)(eax + 0xcf6fe0u), ST0); FPOP();
/* 993b36: jl 0x993af3 */
  if ((sf != of)) goto L_993af3;
L_993b38: /* 993b38: fstp st(0) */
  STI(0) = ST0; FPOP();
L_993b3a: /* 993b3a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993b3e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b40: jge 0x993b64 */
  if ((sf == of)) goto L_993b64;
L_993b42: /* 993b42: lea edi, [ebx + ecx*2] */
  edi = (uint32_t)(ebx + ecx*2);
/* 993b45: mov eax, ecx */
  eax = ecx;
/* 993b47: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b49: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993b4c: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 993b4e: mov edi, edi */
  edi = edi;
L_993b50: /* 993b50: fld qword ptr [eax + 0xcf7190] */
  { double v = F64((uint32_t)(eax + 0xcf7190u)); FPUSH(v); }
/* 993b56: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b59: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 993b5a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b5c: fstp qword ptr [eax + 0xcf6fe0] */
  WF64((uint32_t)(eax + 0xcf6fe0u), ST0); FPOP();
/* 993b62: jne 0x993b50 */
  if (!zf) goto L_993b50;
L_993b64: /* 993b64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993b66: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 993b67: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b6a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993b6c: fchs  */
  ST0 = -ST0;
/* 993b6e: fstp qword ptr [esi + 0xcf6fc8] */
  WF64((uint32_t)(esi + 0xcf6fc8u), ST0); FPOP();
/* 993b74: fld qword ptr [esi + 0xcf7310] */
  { double v = F64((uint32_t)(esi + 0xcf7310u)); FPUSH(v); }
/* 993b7a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b7c: fstp qword ptr [esi + 0xcf6fe0] */
  WF64((uint32_t)(esi + 0xcf6fe0u), ST0); FPOP();
/* 993b82: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993b84: jl 0x993ac0 */
  if ((sf != of)) goto L_993ac0;
L_993b8a: /* 993b8a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 993b8e: xor ecx, ecx */
  ecx = 0;
/* 993b90: xor edi, edi */
  edi = 0;
/* 993b92: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b94: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 993b98: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 993b9c: jle 0x993e0c */
  if ((zf || sf != of)) goto L_993e0c;
L_993ba2: /* 993ba2: xor esi, esi */
  esi = 0;
/* 993ba4: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ba7: jl 0x993c93 */
  if ((sf != of)) goto L_993c93;
L_993bad: /* 993bad: mov ebx, 3 */
  ebx = 0x3u;
/* 993bb2: mov edx, 0xcf6e50 */
  edx = 0xcf6e50u;
L_993bb7: /* 993bb7: fld qword ptr [edx - 8] */
  { double v = F64((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 993bba: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993bc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bc2: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bc5: jp 0x993bea */
  if (pf) goto L_993bea;
L_993bc7: /* 993bc7: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 993bc9: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993bcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bd1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bd4: jp 0x993bea */
  if (pf) goto L_993bea;
L_993bd6: /* 993bd6: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 993bd9: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993bdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993be1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993be4: jnp 0x993ce5 */
  if (!pf) goto L_993ce5;
L_993bea: /* 993bea: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 993bed: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993bf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bf5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bf8: jp 0x993c1e */
  if (pf) goto L_993c1e;
L_993bfa: /* 993bfa: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 993bfd: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c05: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c08: jp 0x993c1e */
  if (pf) goto L_993c1e;
L_993c0a: /* 993c0a: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 993c0d: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c15: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c18: jnp 0x993cda */
  if (!pf) goto L_993cda;
L_993c1e: /* 993c1e: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 993c21: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993c27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c29: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c2c: jp 0x993c52 */
  if (pf) goto L_993c52;
L_993c2e: /* 993c2e: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 993c31: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c39: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c3c: jp 0x993c52 */
  if (pf) goto L_993c52;
L_993c3e: /* 993c3e: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 993c41: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c49: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c4c: jnp 0x993cdd */
  if (!pf) goto L_993cdd;
L_993c52: /* 993c52: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 993c55: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993c5b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c5d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c60: jp 0x993c82 */
  if (pf) goto L_993c82;
L_993c62: /* 993c62: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 993c65: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c6d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c70: jp 0x993c82 */
  if (pf) goto L_993c82;
L_993c72: /* 993c72: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 993c75: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c7d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c80: jnp 0x993ce2 */
  if (!pf) goto L_993ce2;
L_993c82: /* 993c82: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993c85: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993c88: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993c8b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993c8d: jl 0x993bb7 */
  if ((sf != of)) goto L_993bb7;
L_993c93: /* 993c93: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993c95: jge 0x993ce7 */
  if ((sf == of)) goto L_993ce7;
L_993c97: /* 993c97: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 993c9a: lea edx, [edx*8 + 0xcf6e50] */
  edx = (uint32_t)(edx*8 + 0xcf6e50u);
L_993ca1: /* 993ca1: fld qword ptr [edx - 8] */
  { double v = F64((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 993ca4: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993caa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993cac: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993caf: jp 0x993cd0 */
  if (pf) goto L_993cd0;
L_993cb1: /* 993cb1: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 993cb3: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993cb9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993cbb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993cbe: jp 0x993cd0 */
  if (pf) goto L_993cd0;
L_993cc0: /* 993cc0: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 993cc3: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993cc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993ccb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993cce: jnp 0x993ce5 */
  if (!pf) goto L_993ce5;
L_993cd0: /* 993cd0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993cd1: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993cd4: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993cd6: jl 0x993ca1 */
  if ((sf != of)) goto L_993ca1;
L_993cd8: /* 993cd8: jmp 0x993ce5 */
  goto L_993ce5;
L_993cda: /* 993cda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993cdb: jmp 0x993ce5 */
  goto L_993ce5;
L_993cdd: /* 993cdd: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993ce0: jmp 0x993ce5 */
  goto L_993ce5;
L_993ce2: /* 993ce2: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_993ce5: /* 993ce5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_993ce7: /* 993ce7: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 993cea: jne 0x993d9c */
  if (!zf) goto L_993d9c;
L_993cf0: /* 993cf0: mov edx, dword ptr [ecx + 0xcf7190] */
  edx = R32((uint32_t)(ecx + 0xcf7190u));
/* 993cf6: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993cf9: mov dword ptr [eax + 0xcf6e48], edx */
  W32((uint32_t)(eax + 0xcf6e48u), edx);
/* 993cff: mov edx, dword ptr [ecx + 0xcf7194] */
  edx = R32((uint32_t)(ecx + 0xcf7194u));
/* 993d05: mov dword ptr [eax + 0xcf6e4c], edx */
  W32((uint32_t)(eax + 0xcf6e4cu), edx);
/* 993d0b: mov edx, dword ptr [ecx + 0xcf7198] */
  edx = R32((uint32_t)(ecx + 0xcf7198u));
/* 993d11: mov dword ptr [eax + 0xcf6e50], edx */
  W32((uint32_t)(eax + 0xcf6e50u), edx);
/* 993d17: mov edx, dword ptr [ecx + 0xcf719c] */
  edx = R32((uint32_t)(ecx + 0xcf719cu));
/* 993d1d: mov dword ptr [eax + 0xcf6e54], edx */
  W32((uint32_t)(eax + 0xcf6e54u), edx);
/* 993d23: mov edx, dword ptr [ecx + 0xcf71a0] */
  edx = R32((uint32_t)(ecx + 0xcf71a0u));
/* 993d29: mov dword ptr [eax + 0xcf6e58], edx */
  W32((uint32_t)(eax + 0xcf6e58u), edx);
/* 993d2f: mov edx, dword ptr [ecx + 0xcf71a4] */
  edx = R32((uint32_t)(ecx + 0xcf71a4u));
/* 993d35: mov dword ptr [eax + 0xcf6e5c], edx */
  W32((uint32_t)(eax + 0xcf6e5cu), edx);
/* 993d3b: mov edx, dword ptr [ecx + 0xcf6ff8] */
  edx = R32((uint32_t)(ecx + 0xcf6ff8u));
/* 993d41: mov dword ptr [eax + 0xcf6cc8], edx */
  W32((uint32_t)(eax + 0xcf6cc8u), edx);
/* 993d47: mov edx, dword ptr [ecx + 0xcf6ffc] */
  edx = R32((uint32_t)(ecx + 0xcf6ffcu));
/* 993d4d: mov dword ptr [eax + 0xcf6ccc], edx */
  W32((uint32_t)(eax + 0xcf6cccu), edx);
/* 993d53: mov edx, dword ptr [ecx + 0xcf7000] */
  edx = R32((uint32_t)(ecx + 0xcf7000u));
/* 993d59: mov dword ptr [eax + 0xcf6cd0], edx */
  W32((uint32_t)(eax + 0xcf6cd0u), edx);
/* 993d5f: mov edx, dword ptr [ecx + 0xcf7004] */
  edx = R32((uint32_t)(ecx + 0xcf7004u));
/* 993d65: mov dword ptr [eax + 0xcf6cd4], edx */
  W32((uint32_t)(eax + 0xcf6cd4u), edx);
/* 993d6b: mov edx, dword ptr [ecx + 0xcf7008] */
  edx = R32((uint32_t)(ecx + 0xcf7008u));
/* 993d71: mov dword ptr [eax + 0xcf6cd8], edx */
  W32((uint32_t)(eax + 0xcf6cd8u), edx);
/* 993d77: mov edx, dword ptr [ecx + 0xcf700c] */
  edx = R32((uint32_t)(ecx + 0xcf700cu));
/* 993d7d: mov dword ptr [eax + 0xcf6cdc], edx */
  W32((uint32_t)(eax + 0xcf6cdcu), edx);
/* 993d83: mov dword ptr [esi*8 + 0xcf6c48], 0 */
  W32((uint32_t)(esi*8 + 0xcf6c48u), 0x0u);
/* 993d8e: mov dword ptr [esi*8 + 0xcf6c4c], 0x3ff00000 */
  W32((uint32_t)(esi*8 + 0xcf6c4cu), 0x3ff00000u);
/* 993d99: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 993d9a: jmp 0x993de9 */
  goto L_993de9;
L_993d9c: /* 993d9c: fld qword ptr [ecx + 0xcf6ff8] */
  { double v = F64((uint32_t)(ecx + 0xcf6ff8u)); FPUSH(v); }
/* 993da2: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993da5: fadd qword ptr [eax + 0xcf6cc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xcf6cc8u)));
/* 993dab: fstp qword ptr [eax + 0xcf6cc8] */
  WF64((uint32_t)(eax + 0xcf6cc8u), ST0); FPOP();
/* 993db1: fld qword ptr [ecx + 0xcf7000] */
  { double v = F64((uint32_t)(ecx + 0xcf7000u)); FPUSH(v); }
/* 993db7: fadd qword ptr [eax + 0xcf6cd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xcf6cd0u)));
/* 993dbd: fstp qword ptr [eax + 0xcf6cd0] */
  WF64((uint32_t)(eax + 0xcf6cd0u), ST0); FPOP();
/* 993dc3: fld qword ptr [eax + 0xcf6cd8] */
  { double v = F64((uint32_t)(eax + 0xcf6cd8u)); FPUSH(v); }
/* 993dc9: fadd qword ptr [ecx + 0xcf7008] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xcf7008u)));
/* 993dcf: fstp qword ptr [eax + 0xcf6cd8] */
  WF64((uint32_t)(eax + 0xcf6cd8u), ST0); FPOP();
/* 993dd5: fld qword ptr [esi*8 + 0xcf6c48] */
  { double v = F64((uint32_t)(esi*8 + 0xcf6c48u)); FPUSH(v); }
/* 993ddc: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 993de2: fstp qword ptr [esi*8 + 0xcf6c48] */
  WF64((uint32_t)(esi*8 + 0xcf6c48u), ST0); FPOP();
L_993de9: /* 993de9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 993ded: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993df1: mov dword ptr [esp + eax*4 + 0xd0], esi */
  W32((uint32_t)(esp + eax*4 + 0xd0u), esi);
/* 993df8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993df9: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993dfc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993dfe: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 993e02: jl 0x993ba2 */
  if ((sf != of)) goto L_993ba2;
L_993e08: /* 993e08: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_993e0c: /* 993e0c: xor ecx, ecx */
  ecx = 0;
/* 993e0e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993e10: jle 0x993e60 */
  if ((zf || sf != of)) goto L_993e60;
L_993e12: /* 993e12: mov eax, 0xcf6cd0 */
  eax = 0xcf6cd0u;
/* 993e17: jmp 0x993e20 */
  goto L_993e20;
L_993e20: /* 993e20: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 993e27: fmul qword ptr [ecx*8 + 0xcf6c40] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf6c40u)));
/* 993e2e: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993e31: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993e33: fstp qword ptr [ecx*8 + 0xcf6c40] */
  WF64((uint32_t)(ecx*8 + 0xcf6c40u), ST0); FPOP();
/* 993e3a: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e40: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 993e43: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 993e46: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e4c: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 993e4f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 993e52: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e58: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 993e5b: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 993e5e: jl 0x993e20 */
  if ((sf != of)) goto L_993e20;
L_993e60: /* 993e60: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993e63: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e69: /* 993e69: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 993e6c: mov al, byte ptr [esi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1a4u))) & 0xffu);
/* 993e72: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 993e74: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e76: /* 993e76: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 993e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993e7b: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 993e81: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 993e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993e86: lea edx, [esi + 0x1ac] */
  edx = (uint32_t)(esi + 0x1acu);
/* 993e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993e8d: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 993e92: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 993e97: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993e9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993e9d: lea ebx, [esi + 0x1a8] */
  ebx = (uint32_t)(esi + 0x1a8u);
/* 993ea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993ea4: mov eax, 0xcf6e48 */
  eax = 0xcf6e48u;
/* 993ea9: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 993eab: call 0x993470 */
  esp -= 4; W32(esp, 0x993eb0u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 993eb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993eb2: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 993eb6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993eb9: xor eax, eax */
  eax = 0;
/* 993ebb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993ebd: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_993ec3: /* 993ec3: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 993ec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993ed0: /* 993ed0: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 993ed7: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 993edb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 993edd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993ede: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993ee1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ee3: jl 0x993ed0 */
  if ((sf != of)) goto L_993ed0;
L_993ee5: /* 993ee5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993ee6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993ee7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993ee8: mov esp, ebp */
  esp = ebp;
/* 993eea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 993eeb: ret  */
  esp += 4; SPILL(); return;
L_993eec: /* 993eec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993ef0: xor esi, esi */
  esi = 0;
/* 993ef2: mov ebx, 0xcf6c30 */
  ebx = 0xcf6c30u;
/* 993ef7: mov eax, 0xcf6ff8 */
  eax = 0xcf6ff8u;
/* 993efc: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 993f00: call 0x98f8d0 */
  esp -= 4; W32(esp, 0x993f05u); SPILL(); f_98f8d0(); if (g_unwind) return; RELOAD();
/* 993f05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 993f06: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 993f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993f0f: mov eax, ebx */
  eax = ebx;
/* 993f11: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 993f16: call 0x990110 */
  esp -= 4; W32(esp, 0x993f1bu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 993f1b: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 993f1f: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 993f23: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 993f27: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 993f2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993f2e: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 993f32: mov dword ptr [esp + 0x28], 0xcf6bd0 */
  W32((uint32_t)(esp + 0x28u), 0xcf6bd0u);
/* 993f3a: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 993f3e: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f46: jmp 0x993f60 */
  goto L_993f60;
L_993f48: /* 993f48: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f4c: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f54: jmp 0x993f60 */
  goto L_993f60;
L_993f56: /* 993f56: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_993f60: /* 993f60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 993f63: mov edx, dword ptr [ecx + 0x1a0] */
  edx = R32((uint32_t)(ecx + 0x1a0u));
/* 993f69: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 993f6d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 993f71: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 993f75: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993f76: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 993f78: lea edx, [edi + ecx - 1] */
  edx = (uint32_t)(edi + ecx + 0xffffffffu);
/* 993f7c: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993f7f: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 993f84: je 0x993fbc */
  if (zf) goto L_993fbc;
L_993f86: /* 993f86: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993f8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f8b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 993f8f: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 993f94: mov edx, esi */
  edx = esi;
/* 993f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f97: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993f9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993f9b: lea edx, [esp + edx + 0x124] */
  edx = (uint32_t)(esp + edx + 0x124u);
/* 993fa2: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 993fa7: call 0x9904a0 */
  esp -= 4; W32(esp, 0x993facu); SPILL(); f_9904a0(); if (g_unwind) return; RELOAD();
/* 993fac: fstp qword ptr [edi*8 + 0xcf6bc0] */
  WF64((uint32_t)(edi*8 + 0xcf6bc0u), ST0); FPOP();
/* 993fb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993fb6: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 993fba: jmp 0x993fce */
  goto L_993fce;
L_993fbc: /* 993fbc: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 993fc0: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993fc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993fc6: call 0x98fec0 */
  esp -= 4; W32(esp, 0x993fcbu); SPILL(); f_98fec0(); if (g_unwind) return; RELOAD();
/* 993fcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_993fce: /* 993fce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993fcf: mov eax, esi */
  eax = esi;
/* 993fd1: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 993fd6: jns 0x993fdd */
  if (!sf) goto L_993fdd;
L_993fd8: /* 993fd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 993fd9: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 993fdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_993fdd: /* 993fdd: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 993fe1: mov ecx, 0 */
  ecx = 0x0u;
/* 993fe6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 993fe9: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 993fed: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 993ff5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 993ff7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993ffa: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 993ffe: lea edx, [esp + eax + 0x110] */
  edx = (uint32_t)(esp + eax + 0x110u);
/* 994005: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 994009: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994010: /* 994010: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994014: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 994018: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99401c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99401d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99401e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99401f: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 994024: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 994029: call 0x990110 */
  esp -= 4; W32(esp, 0x99402eu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 99402e: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 994032: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994035: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994036: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994038: jl 0x994065 */
  if ((sf != of)) goto L_994065;
L_99403a: /* 99403a: mov eax, esi */
  eax = esi;
/* 99403c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99403f: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
L_994046: /* 994046: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99404a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99404e: mov ebx, edi */
  ebx = edi;
/* 994050: call 0x990440 */
  esp -= 4; W32(esp, 0x994055u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994055: mov ebx, eax */
  ebx = eax;
/* 994057: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994059: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_99405b: /* 99405b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99405c: sub edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 99405f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994061: jge 0x994046 */
  if ((sf == of)) goto L_994046;
L_994063: /* 994063: jmp 0x994069 */
  goto L_994069;
L_994065: /* 994065: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994067: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_994069: /* 994069: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 99406d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99406f: je 0x9940ca */
  if (zf) goto L_9940ca;
L_994071: /* 994071: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 994075: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 994076: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994079: jge 0x9940ca */
  if ((sf == of)) goto L_9940ca;
L_99407b: /* 99407b: mov ecx, edi */
  ecx = edi;
/* 99407d: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994080: lea esi, [esp + ecx + 0x110] */
  esi = (uint32_t)(esp + ecx + 0x110u);
/* 994087: jmp 0x994090 */
  goto L_994090;
L_994090: /* 994090: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994094: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 994098: mov ebx, esi */
  ebx = esi;
/* 99409a: call 0x990440 */
  esp -= 4; W32(esp, 0x99409fu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99409f: mov ebx, eax */
  ebx = eax;
/* 9940a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940a3: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_9940a5: /* 9940a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9940a6: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9940a9: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940ac: jl 0x994090 */
  if ((sf != of)) goto L_994090;
L_9940ae: /* 9940ae: jmp 0x9940ca */
  goto L_9940ca;
L_9940b0: /* 9940b0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940b6: je 0x9940ca */
  if (zf) goto L_9940ca;
L_9940b8: /* 9940b8: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9940bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9940bd: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9940c4: jl 0x994010 */
  if ((sf != of)) goto L_994010;
L_9940ca: /* 9940ca: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940ce: mov edx, eax */
  edx = eax;
/* 9940d0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9940d1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940d3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9940d7: je 0x9940e1 */
  if (zf) goto L_9940e1;
L_9940d9: /* 9940d9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940db: je 0x993f56 */
  if (zf) goto L_993f56;
L_9940e1: /* 9940e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9940e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9940e7: jle 0x9940ff */
  if ((zf || sf != of)) goto L_9940ff;
L_9940e9: /* 9940e9: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 9940ed: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9940f1: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9940f4: lea esi, [esp + esi + 0x110] */
  esi = (uint32_t)(esp + esi + 0x110u);
/* 9940fb: mov ecx, eax */
  ecx = eax;
/* 9940fd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_9940ff: /* 9940ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 994103: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 994107: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99410b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99410c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 994110: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 994114: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994117: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99411a: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99411d: cmp eax, 0xcf6c30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6c30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994122: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 994126: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99412a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99412e: jl 0x993f48 */
  if ((sf != of)) goto L_993f48;
L_994134: /* 994134: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 994138: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99413b: jne 0x994160 */
  if (!zf) goto L_994160;
L_99413d: /* 99413d: fld qword ptr [0xcf6bc0] */
  { double v = F64((uint32_t)(0xcf6bc0u)); FPUSH(v); }
/* 994143: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 99414b: fcomp qword ptr [0xcf6bc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6bc8u)));
  FPOP();
/* 994151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994156: jnp 0x99415c */
  if (!pf) goto L_99415c;
L_994158: /* 994158: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_99415c: /* 99415c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_994160: /* 994160: xor eax, eax */
  eax = 0;
/* 994162: xor esi, esi */
  esi = 0;
L_994164: /* 994164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994166: jne 0x9941eb */
  if (!zf) goto L_9941eb;
L_99416c: /* 99416c: lea eax, [esi + edx*2] */
  eax = (uint32_t)(esi + edx*2);
/* 99416f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 994172: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994175: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99417b: fcomp qword ptr [0xcf6fc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fc8u)));
  FPOP();
/* 994181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994186: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_994188: /* 994188: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99418e: fcomp qword ptr [0xcf6fe0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe0u)));
  FPOP();
/* 994194: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994196: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994199: je 0x9941eb */
  if (zf) goto L_9941eb;
L_99419b: /* 99419b: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941a1: fcomp qword ptr [0xcf6fd0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd0u)));
  FPOP();
/* 9941a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941a9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941ac: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941ae: /* 9941ae: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941b4: fcomp qword ptr [0xcf6fe8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe8u)));
  FPOP();
/* 9941ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941bf: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941c1: /* 9941c1: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941c7: fcomp qword ptr [0xcf6fd8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd8u)));
  FPOP();
/* 9941cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941d2: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941d4: /* 9941d4: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941da: fcomp qword ptr [0xcf6ff0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6ff0u)));
  FPOP();
/* 9941e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941e5: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941e7: /* 9941e7: xor eax, eax */
  eax = 0;
/* 9941e9: jmp 0x9941f0 */
  goto L_9941f0;
L_9941eb: /* 9941eb: mov eax, 1 */
  eax = 0x1u;
L_9941f0: /* 9941f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9941f1: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9941f4: jl 0x994164 */
  if ((sf != of)) goto L_994164;
L_9941fa: /* 9941fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9941fc: je 0x9943b4 */
  if (zf) goto L_9943b4;
L_994202: /* 994202: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 994206: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994208: jle 0x994220 */
  if ((zf || sf != of)) goto L_994220;
L_99420a: /* 99420a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99420e: mov eax, edx */
  eax = edx;
/* 994210: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 994213: lea esi, [esp + eax + 0x50] */
  esi = (uint32_t)(esp + eax + 0x50u);
/* 994217: lea edi, [esp + 0x110] */
  edi = (uint32_t)(esp + 0x110u);
/* 99421e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_994220: /* 994220: xor eax, eax */
  eax = 0;
/* 994222: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 994225: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994228: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99422c: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 994230: lea eax, [ecx + 0xcf6bd0] */
  eax = (uint32_t)(ecx + 0xcf6bd0u);
/* 994236: lea ecx, [esp + edx*4 + 0x40] */
  ecx = (uint32_t)(esp + edx*4 + 0x40u);
/* 99423a: mov dword ptr [esp + 0x30], 8 */
  W32((uint32_t)(esp + 0x30u), 0x8u);
/* 994242: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 994246: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 99424a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994250: /* 994250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 994253: mov ecx, dword ptr [edx + 0x1a0] */
  ecx = R32((uint32_t)(edx + 0x1a0u));
/* 994259: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99425d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 994261: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 994265: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 994266: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 994268: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 99426d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99426e: mov ecx, esi */
  ecx = esi;
/* 994270: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994273: push 0xcf6fc8 */
  { uint32_t v = 0xcf6fc8u; esp -= 4; W32(esp, v); }
/* 994278: lea edx, [esp + ecx + 0x11c] */
  edx = (uint32_t)(esp + ecx + 0x11cu);
/* 99427f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 994283: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 994288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 994289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99428a: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 99428f: call 0x990c00 */
  esp -= 4; W32(esp, 0x994294u); SPILL(); f_990c00(); if (g_unwind) return; RELOAD();
/* 994294: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 994298: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99429b: fstp qword ptr [edx*8 + 0xcf6bc0] */
  WF64((uint32_t)(edx*8 + 0xcf6bc0u), ST0); FPOP();
/* 9942a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9942a3: mov eax, esi */
  eax = esi;
/* 9942a5: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 9942aa: jns 0x9942b1 */
  if (!sf) goto L_9942b1;
L_9942ac: /* 9942ac: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9942ad: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9942b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_9942b1: /* 9942b1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9942b5: mov ecx, 0 */
  ecx = 0x0u;
/* 9942ba: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9942bd: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9942c1: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 9942c9: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9942cb: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9942ce: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9942d2: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
/* 9942d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9942e0: /* 9942e0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9942e4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9942e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9942e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9942ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9942eb: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 9942f0: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 9942f5: call 0x990110 */
  esp -= 4; W32(esp, 0x9942fau); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 9942fa: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9942fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994301: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994302: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994304: jl 0x99433d */
  if ((sf != of)) goto L_99433d;
L_994306: /* 994306: mov ecx, esi */
  ecx = esi;
/* 994308: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99430b: lea edx, [esp + ecx + 0x110] */
  edx = (uint32_t)(esp + ecx + 0x110u);
/* 994312: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_994316: /* 994316: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 99431a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99431e: mov eax, edi */
  eax = edi;
/* 994320: call 0x990440 */
  esp -= 4; W32(esp, 0x994325u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994325: mov ebx, eax */
  ebx = eax;
/* 994327: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994329: jne 0x994387 */
  if (!zf) goto L_994387;
L_99432b: /* 99432b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99432f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994330: sub ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 994333: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994335: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 994339: jge 0x994316 */
  if ((sf == of)) goto L_994316;
L_99433b: /* 99433b: jmp 0x994341 */
  goto L_994341;
L_99433d: /* 99433d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99433f: jne 0x994387 */
  if (!zf) goto L_994387;
L_994341: /* 994341: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 994345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994347: je 0x994399 */
  if (zf) goto L_994399;
L_994349: /* 994349: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99434d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99434e: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994351: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994355: jge 0x994399 */
  if ((sf == of)) goto L_994399;
L_994357: /* 994357: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99435b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99435e: lea esi, [esp + eax + 0x110] */
  esi = (uint32_t)(esp + eax + 0x110u);
L_994365: /* 994365: mov eax, edi */
  eax = edi;
/* 994367: mov ebx, esi */
  ebx = esi;
/* 994369: call 0x990440 */
  esp -= 4; W32(esp, 0x99436eu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99436e: mov ebx, eax */
  ebx = eax;
/* 994370: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994372: jne 0x994387 */
  if (!zf) goto L_994387;
L_994374: /* 994374: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994378: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994379: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99437c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99437f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994383: jl 0x994365 */
  if ((sf != of)) goto L_994365;
L_994385: /* 994385: jmp 0x994399 */
  goto L_994399;
L_994387: /* 994387: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 99438b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99438c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99438f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 994393: jl 0x9942e0 */
  if ((sf != of)) goto L_9942e0;
L_994399: /* 994399: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99439d: mov ecx, eax */
  ecx = eax;
/* 99439f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9943a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943a2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9943a6: je 0x9943b0 */
  if (zf) goto L_9943b0;
L_9943a8: /* 9943a8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943aa: je 0x994250 */
  if (zf) goto L_994250;
L_9943b0: /* 9943b0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_9943b4: /* 9943b4: lea esi, [edx + edx*2] */
  esi = (uint32_t)(edx + edx*2);
/* 9943b7: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9943ba: mov eax, 0xcf6c08 */
  eax = 0xcf6c08u;
/* 9943bf: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9943c1: lea ecx, [esi + 0xcf6bd8] */
  ecx = (uint32_t)(esi + 0xcf6bd8u);
/* 9943c7: mov edi, 2 */
  edi = 0x2u;
/* 9943cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9943d0: /* 9943d0: fld qword ptr [0xcf7178] */
  { double v = F64((uint32_t)(0xcf7178u)); FPUSH(v); }
/* 9943d6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9943d9: fadd qword ptr [ecx - 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe0u)));
/* 9943dc: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9943df: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9943e0: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 9943e3: fld qword ptr [0xcf7180] */
  { double v = F64((uint32_t)(0xcf7180u)); FPUSH(v); }
/* 9943e9: fadd qword ptr [ecx - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe8u)));
/* 9943ec: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 9943ef: fld qword ptr [0xcf7188] */
  { double v = F64((uint32_t)(0xcf7188u)); FPUSH(v); }
/* 9943f5: fadd qword ptr [ecx - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 9943f8: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9943fb: jne 0x9943d0 */
  if (!zf) goto L_9943d0;
L_9943fd: /* 9943fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994400: mov edx, dword ptr [esp + edx*4 + 0x40] */
  edx = R32((uint32_t)(esp + edx*4 + 0x40u));
/* 994404: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 99440a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99440b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99440d: lea ebx, [eax + 0x1a8] */
  ebx = (uint32_t)(eax + 0x1a8u);
/* 994413: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 994415: je 0x99441d */
  if (zf) goto L_99441d;
L_994417: /* 994417: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_99441d: /* 99441d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 994421: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 994424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 994425: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 994429: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99442a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99442e: lea edx, [edi + 0x1ac] */
  edx = (uint32_t)(edi + 0x1acu);
/* 994434: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994435: mov edx, dword ptr [edi + 0x1a0] */
  edx = R32((uint32_t)(edi + 0x1a0u));
/* 99443b: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 994440: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 994445: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 99444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99444b: mov eax, 0xcf6c00 */
  eax = 0xcf6c00u;
/* 994450: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 994452: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994453: call 0x993470 */
  esp -= 4; W32(esp, 0x994458u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 994458: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99445a: mov al, byte ptr [edi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1a4u))) & 0xffu);
/* 994460: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994463: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994465: je 0x994472 */
  if (zf) goto L_994472;
L_994467: /* 994467: cmp dword ptr [ebx], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99446a: je 0x994472 */
  if (zf) goto L_994472;
L_99446c: /* 99446c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_994472: /* 994472: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 994476: xor eax, eax */
  eax = 0;
/* 994478: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99447a: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_99447c: /* 99447c: lea ecx, [edi + 0x1c4] */
  ecx = (uint32_t)(edi + 0x1c4u);
L_994482: /* 994482: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 994489: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 99448d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 99448f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994490: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994493: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994495: jl 0x994482 */
  if ((sf != of)) goto L_994482;
L_994497: /* 994497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 994498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 994499: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99449a: mov esp, ebp */
  esp = ebp;
/* 99449c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99449d: ret  */
  esp += 4; SPILL(); return;
}

void f_9939c7(void) {
  LOAD_REGS();
L_9939c7: /* 9939c7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 9939ce: mov edi, edi */
  edi = edi;
L_9939d0: /* 9939d0: fld qword ptr [esi - 8] */
  { double v = F64((uint32_t)(esi + 0xfffffff8u)); FPUSH(v); }
/* 9939d3: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9939d9: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 9939df: call 0x99c958 */
  esp -= 4; W32(esp, 0x9939e4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9939e4: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 9939e6: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9939ec: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9939f0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 9939f6: call 0x99c958 */
  esp -= 4; W32(esp, 0x9939fbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9939fb: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 9939fe: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993a04: mov edi, eax */
  edi = eax;
/* 993a06: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 993a0c: call 0x99c958 */
  esp -= 4; W32(esp, 0x993a11u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 993a11: mov ecx, eax */
  ecx = eax;
/* 993a13: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 993a17: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a19: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 993a1a: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 993a1c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a1e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a21: jg 0x993a5a */
  if ((!zf && sf == of)) goto L_993a5a;
L_993a23: /* 993a23: mov eax, edi */
  eax = edi;
/* 993a25: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a27: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 993a28: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 993a2a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a2c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a2f: jg 0x993a5a */
  if ((!zf && sf == of)) goto L_993a5a;
L_993a31: /* 993a31: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 993a35: mov eax, ecx */
  eax = ecx;
/* 993a37: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a39: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 993a3a: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 993a3c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 993a3e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a41: jg 0x993a5a */
  if ((!zf && sf == of)) goto L_993a5a;
L_993a43: /* 993a43: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 993a47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993a48: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993a4b: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993a4e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 993a52: jl 0x9939d0 */
  if ((sf != of)) goto L_9939d0;
L_993a58: /* 993a58: jmp 0x993a5f */
  goto L_993a5f;
L_993a5a: /* 993a5a: mov byte ptr [esp + 0x4c], 0 */
  W8((uint32_t)(esp + 0x4cu), 0x0u);
L_993a5f: /* 993a5f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 993a61: je 0x993ab3 */
  if (zf) goto L_993ab3;
L_993a63: /* 993a63: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 993a66: mov ecx, dword ptr [esi + 0x1a0] */
  ecx = R32((uint32_t)(esi + 0x1a0u));
/* 993a6c: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 993a70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993a71: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 993a75: lea eax, [esi + 0x1c4] */
  eax = (uint32_t)(esi + 0x1c4u);
/* 993a7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993a7c: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 993a80: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 993a86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993a87: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 993a8c: push 0xcf7190 */
  { uint32_t v = 0xcf7190u; esp -= 4; W32(esp, v); }
/* 993a91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993a92: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 993a96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993a97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 993a98: call 0x992e70 */
  esp -= 4; W32(esp, 0x993a9du); SPILL(); f_992e70(); if (g_unwind) return; RELOAD();
/* 993a9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993a9f: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 993aa3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993aa6: mov dword ptr [esi + 0x1a8], ecx */
  W32((uint32_t)(esi + 0x1a8u), ecx);
/* 993aac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993aad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993aae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993aaf: mov esp, ebp */
  esp = ebp;
/* 993ab1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 993ab2: ret  */
  esp += 4; SPILL(); return;
L_993ab3: /* 993ab3: xor ebx, ebx */
  ebx = 0;
/* 993ab5: jmp 0x993ac0 */
  goto L_993ac0;
L_993ac0: /* 993ac0: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 993ac4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 993ac8: lea esi, [ebx*8] */
  esi = (uint32_t)(ebx*8);
/* 993acf: fmul qword ptr [esi + 0xcf7178] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xcf7178u)));
/* 993ad5: xor ecx, ecx */
  ecx = 0;
/* 993ad7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ada: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993adc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 993ade: fstp qword ptr [esi + 0xcf7178] */
  WF64((uint32_t)(esi + 0xcf7178u), ST0); FPOP();
/* 993ae4: jl 0x993b3a */
  if ((sf != of)) goto L_993b3a;
L_993ae6: /* 993ae6: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 993aea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993aec: mov edx, 3 */
  edx = 0x3u;
/* 993af1: mov eax, esi */
  eax = esi;
L_993af3: /* 993af3: fld qword ptr [eax + 0xcf7190] */
  { double v = F64((uint32_t)(eax + 0xcf7190u)); FPUSH(v); }
/* 993af9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993afc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993afe: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993b01: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b04: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b06: fstp qword ptr [eax + 0xcf6f98] */
  WF64((uint32_t)(eax + 0xcf6f98u), ST0); FPOP();
/* 993b0c: fld qword ptr [eax + 0xcf7148] */
  { double v = F64((uint32_t)(eax + 0xcf7148u)); FPUSH(v); }
/* 993b12: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b14: fstp qword ptr [eax + 0xcf6fb0] */
  WF64((uint32_t)(eax + 0xcf6fb0u), ST0); FPOP();
/* 993b1a: fld qword ptr [eax + 0xcf7160] */
  { double v = F64((uint32_t)(eax + 0xcf7160u)); FPUSH(v); }
/* 993b20: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b22: fstp qword ptr [eax + 0xcf6fc8] */
  WF64((uint32_t)(eax + 0xcf6fc8u), ST0); FPOP();
/* 993b28: fld qword ptr [eax + 0xcf7178] */
  { double v = F64((uint32_t)(eax + 0xcf7178u)); FPUSH(v); }
/* 993b2e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b30: fstp qword ptr [eax + 0xcf6fe0] */
  WF64((uint32_t)(eax + 0xcf6fe0u), ST0); FPOP();
/* 993b36: jl 0x993af3 */
  if ((sf != of)) goto L_993af3;
L_993b38: /* 993b38: fstp st(0) */
  STI(0) = ST0; FPOP();
L_993b3a: /* 993b3a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993b3e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b40: jge 0x993b64 */
  if ((sf == of)) goto L_993b64;
L_993b42: /* 993b42: lea edi, [ebx + ecx*2] */
  edi = (uint32_t)(ebx + ecx*2);
/* 993b45: mov eax, ecx */
  eax = ecx;
/* 993b47: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b49: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993b4c: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 993b4e: mov edi, edi */
  edi = edi;
L_993b50: /* 993b50: fld qword ptr [eax + 0xcf7190] */
  { double v = F64((uint32_t)(eax + 0xcf7190u)); FPUSH(v); }
/* 993b56: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b59: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 993b5a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b5c: fstp qword ptr [eax + 0xcf6fe0] */
  WF64((uint32_t)(eax + 0xcf6fe0u), ST0); FPOP();
/* 993b62: jne 0x993b50 */
  if (!zf) goto L_993b50;
L_993b64: /* 993b64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993b66: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 993b67: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b6a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993b6c: fchs  */
  ST0 = -ST0;
/* 993b6e: fstp qword ptr [esi + 0xcf6fc8] */
  WF64((uint32_t)(esi + 0xcf6fc8u), ST0); FPOP();
/* 993b74: fld qword ptr [esi + 0xcf7310] */
  { double v = F64((uint32_t)(esi + 0xcf7310u)); FPUSH(v); }
/* 993b7a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b7c: fstp qword ptr [esi + 0xcf6fe0] */
  WF64((uint32_t)(esi + 0xcf6fe0u), ST0); FPOP();
/* 993b82: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993b84: jl 0x993ac0 */
  if ((sf != of)) goto L_993ac0;
L_993b8a: /* 993b8a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 993b8e: xor ecx, ecx */
  ecx = 0;
/* 993b90: xor edi, edi */
  edi = 0;
/* 993b92: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b94: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 993b98: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 993b9c: jle 0x993e0c */
  if ((zf || sf != of)) goto L_993e0c;
L_993ba2: /* 993ba2: xor esi, esi */
  esi = 0;
/* 993ba4: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ba7: jl 0x993c93 */
  if ((sf != of)) goto L_993c93;
L_993bad: /* 993bad: mov ebx, 3 */
  ebx = 0x3u;
/* 993bb2: mov edx, 0xcf6e50 */
  edx = 0xcf6e50u;
L_993bb7: /* 993bb7: fld qword ptr [edx - 8] */
  { double v = F64((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 993bba: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993bc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bc2: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bc5: jp 0x993bea */
  if (pf) goto L_993bea;
L_993bc7: /* 993bc7: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 993bc9: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993bcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bd1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bd4: jp 0x993bea */
  if (pf) goto L_993bea;
L_993bd6: /* 993bd6: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 993bd9: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993bdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993be1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993be4: jnp 0x993ce5 */
  if (!pf) goto L_993ce5;
L_993bea: /* 993bea: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 993bed: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993bf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bf5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bf8: jp 0x993c1e */
  if (pf) goto L_993c1e;
L_993bfa: /* 993bfa: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 993bfd: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c05: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c08: jp 0x993c1e */
  if (pf) goto L_993c1e;
L_993c0a: /* 993c0a: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 993c0d: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c15: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c18: jnp 0x993cda */
  if (!pf) goto L_993cda;
L_993c1e: /* 993c1e: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 993c21: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993c27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c29: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c2c: jp 0x993c52 */
  if (pf) goto L_993c52;
L_993c2e: /* 993c2e: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 993c31: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c39: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c3c: jp 0x993c52 */
  if (pf) goto L_993c52;
L_993c3e: /* 993c3e: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 993c41: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c49: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c4c: jnp 0x993cdd */
  if (!pf) goto L_993cdd;
L_993c52: /* 993c52: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 993c55: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993c5b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c5d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c60: jp 0x993c82 */
  if (pf) goto L_993c82;
L_993c62: /* 993c62: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 993c65: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c6d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c70: jp 0x993c82 */
  if (pf) goto L_993c82;
L_993c72: /* 993c72: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 993c75: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c7d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c80: jnp 0x993ce2 */
  if (!pf) goto L_993ce2;
L_993c82: /* 993c82: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993c85: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993c88: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993c8b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993c8d: jl 0x993bb7 */
  if ((sf != of)) goto L_993bb7;
L_993c93: /* 993c93: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993c95: jge 0x993ce7 */
  if ((sf == of)) goto L_993ce7;
L_993c97: /* 993c97: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 993c9a: lea edx, [edx*8 + 0xcf6e50] */
  edx = (uint32_t)(edx*8 + 0xcf6e50u);
L_993ca1: /* 993ca1: fld qword ptr [edx - 8] */
  { double v = F64((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 993ca4: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993caa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993cac: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993caf: jp 0x993cd0 */
  if (pf) goto L_993cd0;
L_993cb1: /* 993cb1: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 993cb3: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993cb9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993cbb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993cbe: jp 0x993cd0 */
  if (pf) goto L_993cd0;
L_993cc0: /* 993cc0: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 993cc3: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993cc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993ccb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993cce: jnp 0x993ce5 */
  if (!pf) goto L_993ce5;
L_993cd0: /* 993cd0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993cd1: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993cd4: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993cd6: jl 0x993ca1 */
  if ((sf != of)) goto L_993ca1;
L_993cd8: /* 993cd8: jmp 0x993ce5 */
  goto L_993ce5;
L_993cda: /* 993cda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993cdb: jmp 0x993ce5 */
  goto L_993ce5;
L_993cdd: /* 993cdd: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993ce0: jmp 0x993ce5 */
  goto L_993ce5;
L_993ce2: /* 993ce2: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_993ce5: /* 993ce5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_993ce7: /* 993ce7: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 993cea: jne 0x993d9c */
  if (!zf) goto L_993d9c;
L_993cf0: /* 993cf0: mov edx, dword ptr [ecx + 0xcf7190] */
  edx = R32((uint32_t)(ecx + 0xcf7190u));
/* 993cf6: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993cf9: mov dword ptr [eax + 0xcf6e48], edx */
  W32((uint32_t)(eax + 0xcf6e48u), edx);
/* 993cff: mov edx, dword ptr [ecx + 0xcf7194] */
  edx = R32((uint32_t)(ecx + 0xcf7194u));
/* 993d05: mov dword ptr [eax + 0xcf6e4c], edx */
  W32((uint32_t)(eax + 0xcf6e4cu), edx);
/* 993d0b: mov edx, dword ptr [ecx + 0xcf7198] */
  edx = R32((uint32_t)(ecx + 0xcf7198u));
/* 993d11: mov dword ptr [eax + 0xcf6e50], edx */
  W32((uint32_t)(eax + 0xcf6e50u), edx);
/* 993d17: mov edx, dword ptr [ecx + 0xcf719c] */
  edx = R32((uint32_t)(ecx + 0xcf719cu));
/* 993d1d: mov dword ptr [eax + 0xcf6e54], edx */
  W32((uint32_t)(eax + 0xcf6e54u), edx);
/* 993d23: mov edx, dword ptr [ecx + 0xcf71a0] */
  edx = R32((uint32_t)(ecx + 0xcf71a0u));
/* 993d29: mov dword ptr [eax + 0xcf6e58], edx */
  W32((uint32_t)(eax + 0xcf6e58u), edx);
/* 993d2f: mov edx, dword ptr [ecx + 0xcf71a4] */
  edx = R32((uint32_t)(ecx + 0xcf71a4u));
/* 993d35: mov dword ptr [eax + 0xcf6e5c], edx */
  W32((uint32_t)(eax + 0xcf6e5cu), edx);
/* 993d3b: mov edx, dword ptr [ecx + 0xcf6ff8] */
  edx = R32((uint32_t)(ecx + 0xcf6ff8u));
/* 993d41: mov dword ptr [eax + 0xcf6cc8], edx */
  W32((uint32_t)(eax + 0xcf6cc8u), edx);
/* 993d47: mov edx, dword ptr [ecx + 0xcf6ffc] */
  edx = R32((uint32_t)(ecx + 0xcf6ffcu));
/* 993d4d: mov dword ptr [eax + 0xcf6ccc], edx */
  W32((uint32_t)(eax + 0xcf6cccu), edx);
/* 993d53: mov edx, dword ptr [ecx + 0xcf7000] */
  edx = R32((uint32_t)(ecx + 0xcf7000u));
/* 993d59: mov dword ptr [eax + 0xcf6cd0], edx */
  W32((uint32_t)(eax + 0xcf6cd0u), edx);
/* 993d5f: mov edx, dword ptr [ecx + 0xcf7004] */
  edx = R32((uint32_t)(ecx + 0xcf7004u));
/* 993d65: mov dword ptr [eax + 0xcf6cd4], edx */
  W32((uint32_t)(eax + 0xcf6cd4u), edx);
/* 993d6b: mov edx, dword ptr [ecx + 0xcf7008] */
  edx = R32((uint32_t)(ecx + 0xcf7008u));
/* 993d71: mov dword ptr [eax + 0xcf6cd8], edx */
  W32((uint32_t)(eax + 0xcf6cd8u), edx);
/* 993d77: mov edx, dword ptr [ecx + 0xcf700c] */
  edx = R32((uint32_t)(ecx + 0xcf700cu));
/* 993d7d: mov dword ptr [eax + 0xcf6cdc], edx */
  W32((uint32_t)(eax + 0xcf6cdcu), edx);
/* 993d83: mov dword ptr [esi*8 + 0xcf6c48], 0 */
  W32((uint32_t)(esi*8 + 0xcf6c48u), 0x0u);
/* 993d8e: mov dword ptr [esi*8 + 0xcf6c4c], 0x3ff00000 */
  W32((uint32_t)(esi*8 + 0xcf6c4cu), 0x3ff00000u);
/* 993d99: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 993d9a: jmp 0x993de9 */
  goto L_993de9;
L_993d9c: /* 993d9c: fld qword ptr [ecx + 0xcf6ff8] */
  { double v = F64((uint32_t)(ecx + 0xcf6ff8u)); FPUSH(v); }
/* 993da2: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993da5: fadd qword ptr [eax + 0xcf6cc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xcf6cc8u)));
/* 993dab: fstp qword ptr [eax + 0xcf6cc8] */
  WF64((uint32_t)(eax + 0xcf6cc8u), ST0); FPOP();
/* 993db1: fld qword ptr [ecx + 0xcf7000] */
  { double v = F64((uint32_t)(ecx + 0xcf7000u)); FPUSH(v); }
/* 993db7: fadd qword ptr [eax + 0xcf6cd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xcf6cd0u)));
/* 993dbd: fstp qword ptr [eax + 0xcf6cd0] */
  WF64((uint32_t)(eax + 0xcf6cd0u), ST0); FPOP();
/* 993dc3: fld qword ptr [eax + 0xcf6cd8] */
  { double v = F64((uint32_t)(eax + 0xcf6cd8u)); FPUSH(v); }
/* 993dc9: fadd qword ptr [ecx + 0xcf7008] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xcf7008u)));
/* 993dcf: fstp qword ptr [eax + 0xcf6cd8] */
  WF64((uint32_t)(eax + 0xcf6cd8u), ST0); FPOP();
/* 993dd5: fld qword ptr [esi*8 + 0xcf6c48] */
  { double v = F64((uint32_t)(esi*8 + 0xcf6c48u)); FPUSH(v); }
/* 993ddc: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 993de2: fstp qword ptr [esi*8 + 0xcf6c48] */
  WF64((uint32_t)(esi*8 + 0xcf6c48u), ST0); FPOP();
L_993de9: /* 993de9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 993ded: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993df1: mov dword ptr [esp + eax*4 + 0xd0], esi */
  W32((uint32_t)(esp + eax*4 + 0xd0u), esi);
/* 993df8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993df9: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993dfc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993dfe: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 993e02: jl 0x993ba2 */
  if ((sf != of)) goto L_993ba2;
L_993e08: /* 993e08: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_993e0c: /* 993e0c: xor ecx, ecx */
  ecx = 0;
/* 993e0e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993e10: jle 0x993e60 */
  if ((zf || sf != of)) goto L_993e60;
L_993e12: /* 993e12: mov eax, 0xcf6cd0 */
  eax = 0xcf6cd0u;
/* 993e17: jmp 0x993e20 */
  goto L_993e20;
L_993e20: /* 993e20: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 993e27: fmul qword ptr [ecx*8 + 0xcf6c40] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf6c40u)));
/* 993e2e: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993e31: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993e33: fstp qword ptr [ecx*8 + 0xcf6c40] */
  WF64((uint32_t)(ecx*8 + 0xcf6c40u), ST0); FPOP();
/* 993e3a: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e40: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 993e43: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 993e46: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e4c: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 993e4f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 993e52: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e58: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 993e5b: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 993e5e: jl 0x993e20 */
  if ((sf != of)) goto L_993e20;
L_993e60: /* 993e60: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993e63: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e69: /* 993e69: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 993e6c: mov al, byte ptr [esi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1a4u))) & 0xffu);
/* 993e72: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 993e74: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e76: /* 993e76: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 993e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993e7b: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 993e81: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 993e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993e86: lea edx, [esi + 0x1ac] */
  edx = (uint32_t)(esi + 0x1acu);
/* 993e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993e8d: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 993e92: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 993e97: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993e9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993e9d: lea ebx, [esi + 0x1a8] */
  ebx = (uint32_t)(esi + 0x1a8u);
/* 993ea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993ea4: mov eax, 0xcf6e48 */
  eax = 0xcf6e48u;
/* 993ea9: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 993eab: call 0x993470 */
  esp -= 4; W32(esp, 0x993eb0u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 993eb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993eb2: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 993eb6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993eb9: xor eax, eax */
  eax = 0;
/* 993ebb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993ebd: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_993ec3: /* 993ec3: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 993ec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993ed0: /* 993ed0: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 993ed7: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 993edb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 993edd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993ede: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993ee1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ee3: jl 0x993ed0 */
  if ((sf != of)) goto L_993ed0;
L_993ee5: /* 993ee5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993ee6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993ee7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993ee8: mov esp, ebp */
  esp = ebp;
/* 993eea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 993eeb: ret  */
  esp += 4; SPILL(); return;
L_993eec: /* 993eec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993ef0: xor esi, esi */
  esi = 0;
/* 993ef2: mov ebx, 0xcf6c30 */
  ebx = 0xcf6c30u;
/* 993ef7: mov eax, 0xcf6ff8 */
  eax = 0xcf6ff8u;
/* 993efc: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 993f00: call 0x98f8d0 */
  esp -= 4; W32(esp, 0x993f05u); SPILL(); f_98f8d0(); if (g_unwind) return; RELOAD();
/* 993f05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 993f06: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 993f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993f0f: mov eax, ebx */
  eax = ebx;
/* 993f11: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 993f16: call 0x990110 */
  esp -= 4; W32(esp, 0x993f1bu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 993f1b: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 993f1f: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 993f23: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 993f27: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 993f2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993f2e: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 993f32: mov dword ptr [esp + 0x28], 0xcf6bd0 */
  W32((uint32_t)(esp + 0x28u), 0xcf6bd0u);
/* 993f3a: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 993f3e: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f46: jmp 0x993f60 */
  goto L_993f60;
L_993f48: /* 993f48: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f4c: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f54: jmp 0x993f60 */
  goto L_993f60;
L_993f56: /* 993f56: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_993f60: /* 993f60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 993f63: mov edx, dword ptr [ecx + 0x1a0] */
  edx = R32((uint32_t)(ecx + 0x1a0u));
/* 993f69: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 993f6d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 993f71: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 993f75: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993f76: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 993f78: lea edx, [edi + ecx - 1] */
  edx = (uint32_t)(edi + ecx + 0xffffffffu);
/* 993f7c: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993f7f: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 993f84: je 0x993fbc */
  if (zf) goto L_993fbc;
L_993f86: /* 993f86: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993f8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f8b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 993f8f: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 993f94: mov edx, esi */
  edx = esi;
/* 993f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f97: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993f9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993f9b: lea edx, [esp + edx + 0x124] */
  edx = (uint32_t)(esp + edx + 0x124u);
/* 993fa2: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 993fa7: call 0x9904a0 */
  esp -= 4; W32(esp, 0x993facu); SPILL(); f_9904a0(); if (g_unwind) return; RELOAD();
/* 993fac: fstp qword ptr [edi*8 + 0xcf6bc0] */
  WF64((uint32_t)(edi*8 + 0xcf6bc0u), ST0); FPOP();
/* 993fb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993fb6: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 993fba: jmp 0x993fce */
  goto L_993fce;
L_993fbc: /* 993fbc: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 993fc0: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993fc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993fc6: call 0x98fec0 */
  esp -= 4; W32(esp, 0x993fcbu); SPILL(); f_98fec0(); if (g_unwind) return; RELOAD();
/* 993fcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_993fce: /* 993fce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993fcf: mov eax, esi */
  eax = esi;
/* 993fd1: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 993fd6: jns 0x993fdd */
  if (!sf) goto L_993fdd;
L_993fd8: /* 993fd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 993fd9: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 993fdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_993fdd: /* 993fdd: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 993fe1: mov ecx, 0 */
  ecx = 0x0u;
/* 993fe6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 993fe9: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 993fed: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 993ff5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 993ff7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993ffa: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 993ffe: lea edx, [esp + eax + 0x110] */
  edx = (uint32_t)(esp + eax + 0x110u);
/* 994005: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 994009: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994010: /* 994010: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994014: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 994018: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99401c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99401d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99401e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99401f: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 994024: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 994029: call 0x990110 */
  esp -= 4; W32(esp, 0x99402eu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 99402e: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 994032: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994035: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994036: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994038: jl 0x994065 */
  if ((sf != of)) goto L_994065;
L_99403a: /* 99403a: mov eax, esi */
  eax = esi;
/* 99403c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99403f: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
L_994046: /* 994046: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99404a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99404e: mov ebx, edi */
  ebx = edi;
/* 994050: call 0x990440 */
  esp -= 4; W32(esp, 0x994055u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994055: mov ebx, eax */
  ebx = eax;
/* 994057: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994059: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_99405b: /* 99405b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99405c: sub edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 99405f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994061: jge 0x994046 */
  if ((sf == of)) goto L_994046;
L_994063: /* 994063: jmp 0x994069 */
  goto L_994069;
L_994065: /* 994065: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994067: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_994069: /* 994069: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 99406d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99406f: je 0x9940ca */
  if (zf) goto L_9940ca;
L_994071: /* 994071: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 994075: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 994076: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994079: jge 0x9940ca */
  if ((sf == of)) goto L_9940ca;
L_99407b: /* 99407b: mov ecx, edi */
  ecx = edi;
/* 99407d: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994080: lea esi, [esp + ecx + 0x110] */
  esi = (uint32_t)(esp + ecx + 0x110u);
/* 994087: jmp 0x994090 */
  goto L_994090;
L_994090: /* 994090: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994094: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 994098: mov ebx, esi */
  ebx = esi;
/* 99409a: call 0x990440 */
  esp -= 4; W32(esp, 0x99409fu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99409f: mov ebx, eax */
  ebx = eax;
/* 9940a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940a3: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_9940a5: /* 9940a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9940a6: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9940a9: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940ac: jl 0x994090 */
  if ((sf != of)) goto L_994090;
L_9940ae: /* 9940ae: jmp 0x9940ca */
  goto L_9940ca;
L_9940b0: /* 9940b0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940b6: je 0x9940ca */
  if (zf) goto L_9940ca;
L_9940b8: /* 9940b8: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9940bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9940bd: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9940c4: jl 0x994010 */
  if ((sf != of)) goto L_994010;
L_9940ca: /* 9940ca: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940ce: mov edx, eax */
  edx = eax;
/* 9940d0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9940d1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940d3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9940d7: je 0x9940e1 */
  if (zf) goto L_9940e1;
L_9940d9: /* 9940d9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940db: je 0x993f56 */
  if (zf) goto L_993f56;
L_9940e1: /* 9940e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9940e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9940e7: jle 0x9940ff */
  if ((zf || sf != of)) goto L_9940ff;
L_9940e9: /* 9940e9: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 9940ed: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9940f1: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9940f4: lea esi, [esp + esi + 0x110] */
  esi = (uint32_t)(esp + esi + 0x110u);
/* 9940fb: mov ecx, eax */
  ecx = eax;
/* 9940fd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_9940ff: /* 9940ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 994103: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 994107: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99410b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99410c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 994110: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 994114: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994117: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99411a: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99411d: cmp eax, 0xcf6c30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6c30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994122: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 994126: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99412a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99412e: jl 0x993f48 */
  if ((sf != of)) goto L_993f48;
L_994134: /* 994134: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 994138: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99413b: jne 0x994160 */
  if (!zf) goto L_994160;
L_99413d: /* 99413d: fld qword ptr [0xcf6bc0] */
  { double v = F64((uint32_t)(0xcf6bc0u)); FPUSH(v); }
/* 994143: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 99414b: fcomp qword ptr [0xcf6bc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6bc8u)));
  FPOP();
/* 994151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994156: jnp 0x99415c */
  if (!pf) goto L_99415c;
L_994158: /* 994158: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_99415c: /* 99415c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_994160: /* 994160: xor eax, eax */
  eax = 0;
/* 994162: xor esi, esi */
  esi = 0;
L_994164: /* 994164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994166: jne 0x9941eb */
  if (!zf) goto L_9941eb;
L_99416c: /* 99416c: lea eax, [esi + edx*2] */
  eax = (uint32_t)(esi + edx*2);
/* 99416f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 994172: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994175: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99417b: fcomp qword ptr [0xcf6fc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fc8u)));
  FPOP();
/* 994181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994186: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_994188: /* 994188: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99418e: fcomp qword ptr [0xcf6fe0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe0u)));
  FPOP();
/* 994194: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994196: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994199: je 0x9941eb */
  if (zf) goto L_9941eb;
L_99419b: /* 99419b: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941a1: fcomp qword ptr [0xcf6fd0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd0u)));
  FPOP();
/* 9941a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941a9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941ac: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941ae: /* 9941ae: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941b4: fcomp qword ptr [0xcf6fe8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe8u)));
  FPOP();
/* 9941ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941bf: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941c1: /* 9941c1: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941c7: fcomp qword ptr [0xcf6fd8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd8u)));
  FPOP();
/* 9941cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941d2: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941d4: /* 9941d4: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941da: fcomp qword ptr [0xcf6ff0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6ff0u)));
  FPOP();
/* 9941e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941e5: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941e7: /* 9941e7: xor eax, eax */
  eax = 0;
/* 9941e9: jmp 0x9941f0 */
  goto L_9941f0;
L_9941eb: /* 9941eb: mov eax, 1 */
  eax = 0x1u;
L_9941f0: /* 9941f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9941f1: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9941f4: jl 0x994164 */
  if ((sf != of)) goto L_994164;
L_9941fa: /* 9941fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9941fc: je 0x9943b4 */
  if (zf) goto L_9943b4;
L_994202: /* 994202: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 994206: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994208: jle 0x994220 */
  if ((zf || sf != of)) goto L_994220;
L_99420a: /* 99420a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99420e: mov eax, edx */
  eax = edx;
/* 994210: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 994213: lea esi, [esp + eax + 0x50] */
  esi = (uint32_t)(esp + eax + 0x50u);
/* 994217: lea edi, [esp + 0x110] */
  edi = (uint32_t)(esp + 0x110u);
/* 99421e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_994220: /* 994220: xor eax, eax */
  eax = 0;
/* 994222: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 994225: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994228: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99422c: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 994230: lea eax, [ecx + 0xcf6bd0] */
  eax = (uint32_t)(ecx + 0xcf6bd0u);
/* 994236: lea ecx, [esp + edx*4 + 0x40] */
  ecx = (uint32_t)(esp + edx*4 + 0x40u);
/* 99423a: mov dword ptr [esp + 0x30], 8 */
  W32((uint32_t)(esp + 0x30u), 0x8u);
/* 994242: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 994246: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 99424a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994250: /* 994250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 994253: mov ecx, dword ptr [edx + 0x1a0] */
  ecx = R32((uint32_t)(edx + 0x1a0u));
/* 994259: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99425d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 994261: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 994265: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 994266: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 994268: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 99426d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99426e: mov ecx, esi */
  ecx = esi;
/* 994270: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994273: push 0xcf6fc8 */
  { uint32_t v = 0xcf6fc8u; esp -= 4; W32(esp, v); }
/* 994278: lea edx, [esp + ecx + 0x11c] */
  edx = (uint32_t)(esp + ecx + 0x11cu);
/* 99427f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 994283: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 994288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 994289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99428a: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 99428f: call 0x990c00 */
  esp -= 4; W32(esp, 0x994294u); SPILL(); f_990c00(); if (g_unwind) return; RELOAD();
/* 994294: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 994298: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99429b: fstp qword ptr [edx*8 + 0xcf6bc0] */
  WF64((uint32_t)(edx*8 + 0xcf6bc0u), ST0); FPOP();
/* 9942a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9942a3: mov eax, esi */
  eax = esi;
/* 9942a5: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 9942aa: jns 0x9942b1 */
  if (!sf) goto L_9942b1;
L_9942ac: /* 9942ac: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9942ad: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9942b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_9942b1: /* 9942b1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9942b5: mov ecx, 0 */
  ecx = 0x0u;
/* 9942ba: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9942bd: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9942c1: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 9942c9: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9942cb: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9942ce: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9942d2: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
/* 9942d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9942e0: /* 9942e0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9942e4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9942e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9942e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9942ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9942eb: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 9942f0: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 9942f5: call 0x990110 */
  esp -= 4; W32(esp, 0x9942fau); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 9942fa: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9942fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994301: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994302: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994304: jl 0x99433d */
  if ((sf != of)) goto L_99433d;
L_994306: /* 994306: mov ecx, esi */
  ecx = esi;
/* 994308: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99430b: lea edx, [esp + ecx + 0x110] */
  edx = (uint32_t)(esp + ecx + 0x110u);
/* 994312: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_994316: /* 994316: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 99431a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99431e: mov eax, edi */
  eax = edi;
/* 994320: call 0x990440 */
  esp -= 4; W32(esp, 0x994325u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994325: mov ebx, eax */
  ebx = eax;
/* 994327: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994329: jne 0x994387 */
  if (!zf) goto L_994387;
L_99432b: /* 99432b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99432f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994330: sub ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 994333: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994335: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 994339: jge 0x994316 */
  if ((sf == of)) goto L_994316;
L_99433b: /* 99433b: jmp 0x994341 */
  goto L_994341;
L_99433d: /* 99433d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99433f: jne 0x994387 */
  if (!zf) goto L_994387;
L_994341: /* 994341: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 994345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994347: je 0x994399 */
  if (zf) goto L_994399;
L_994349: /* 994349: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99434d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99434e: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994351: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994355: jge 0x994399 */
  if ((sf == of)) goto L_994399;
L_994357: /* 994357: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99435b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99435e: lea esi, [esp + eax + 0x110] */
  esi = (uint32_t)(esp + eax + 0x110u);
L_994365: /* 994365: mov eax, edi */
  eax = edi;
/* 994367: mov ebx, esi */
  ebx = esi;
/* 994369: call 0x990440 */
  esp -= 4; W32(esp, 0x99436eu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99436e: mov ebx, eax */
  ebx = eax;
/* 994370: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994372: jne 0x994387 */
  if (!zf) goto L_994387;
L_994374: /* 994374: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994378: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994379: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99437c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99437f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994383: jl 0x994365 */
  if ((sf != of)) goto L_994365;
L_994385: /* 994385: jmp 0x994399 */
  goto L_994399;
L_994387: /* 994387: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 99438b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99438c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99438f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 994393: jl 0x9942e0 */
  if ((sf != of)) goto L_9942e0;
L_994399: /* 994399: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99439d: mov ecx, eax */
  ecx = eax;
/* 99439f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9943a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943a2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9943a6: je 0x9943b0 */
  if (zf) goto L_9943b0;
L_9943a8: /* 9943a8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943aa: je 0x994250 */
  if (zf) goto L_994250;
L_9943b0: /* 9943b0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_9943b4: /* 9943b4: lea esi, [edx + edx*2] */
  esi = (uint32_t)(edx + edx*2);
/* 9943b7: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9943ba: mov eax, 0xcf6c08 */
  eax = 0xcf6c08u;
/* 9943bf: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9943c1: lea ecx, [esi + 0xcf6bd8] */
  ecx = (uint32_t)(esi + 0xcf6bd8u);
/* 9943c7: mov edi, 2 */
  edi = 0x2u;
/* 9943cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9943d0: /* 9943d0: fld qword ptr [0xcf7178] */
  { double v = F64((uint32_t)(0xcf7178u)); FPUSH(v); }
/* 9943d6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9943d9: fadd qword ptr [ecx - 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe0u)));
/* 9943dc: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9943df: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9943e0: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 9943e3: fld qword ptr [0xcf7180] */
  { double v = F64((uint32_t)(0xcf7180u)); FPUSH(v); }
/* 9943e9: fadd qword ptr [ecx - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe8u)));
/* 9943ec: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 9943ef: fld qword ptr [0xcf7188] */
  { double v = F64((uint32_t)(0xcf7188u)); FPUSH(v); }
/* 9943f5: fadd qword ptr [ecx - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 9943f8: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9943fb: jne 0x9943d0 */
  if (!zf) goto L_9943d0;
L_9943fd: /* 9943fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994400: mov edx, dword ptr [esp + edx*4 + 0x40] */
  edx = R32((uint32_t)(esp + edx*4 + 0x40u));
/* 994404: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 99440a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99440b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99440d: lea ebx, [eax + 0x1a8] */
  ebx = (uint32_t)(eax + 0x1a8u);
/* 994413: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 994415: je 0x99441d */
  if (zf) goto L_99441d;
L_994417: /* 994417: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_99441d: /* 99441d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 994421: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 994424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 994425: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 994429: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99442a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99442e: lea edx, [edi + 0x1ac] */
  edx = (uint32_t)(edi + 0x1acu);
/* 994434: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994435: mov edx, dword ptr [edi + 0x1a0] */
  edx = R32((uint32_t)(edi + 0x1a0u));
/* 99443b: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 994440: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 994445: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 99444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99444b: mov eax, 0xcf6c00 */
  eax = 0xcf6c00u;
/* 994450: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 994452: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994453: call 0x993470 */
  esp -= 4; W32(esp, 0x994458u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 994458: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99445a: mov al, byte ptr [edi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1a4u))) & 0xffu);
/* 994460: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994463: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994465: je 0x994472 */
  if (zf) goto L_994472;
L_994467: /* 994467: cmp dword ptr [ebx], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99446a: je 0x994472 */
  if (zf) goto L_994472;
L_99446c: /* 99446c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_994472: /* 994472: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 994476: xor eax, eax */
  eax = 0;
/* 994478: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99447a: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_99447c: /* 99447c: lea ecx, [edi + 0x1c4] */
  ecx = (uint32_t)(edi + 0x1c4u);
L_994482: /* 994482: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 994489: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 99448d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 99448f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994490: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994493: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994495: jl 0x994482 */
  if ((sf != of)) goto L_994482;
L_994497: /* 994497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 994498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 994499: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99449a: mov esp, ebp */
  esp = ebp;
/* 99449c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99449d: ret  */
  esp += 4; SPILL(); return;
}

void f_993ab7(void) {
  LOAD_REGS();
L_993ab7: /* 993ab7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 993abe: mov edi, edi */
  edi = edi;
L_993ac0: /* 993ac0: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 993ac4: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 993ac8: lea esi, [ebx*8] */
  esi = (uint32_t)(ebx*8);
/* 993acf: fmul qword ptr [esi + 0xcf7178] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0xcf7178u)));
/* 993ad5: xor ecx, ecx */
  ecx = 0;
/* 993ad7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ada: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993adc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 993ade: fstp qword ptr [esi + 0xcf7178] */
  WF64((uint32_t)(esi + 0xcf7178u), ST0); FPOP();
/* 993ae4: jl 0x993b3a */
  if ((sf != of)) goto L_993b3a;
L_993ae6: /* 993ae6: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 993aea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993aec: mov edx, 3 */
  edx = 0x3u;
/* 993af1: mov eax, esi */
  eax = esi;
L_993af3: /* 993af3: fld qword ptr [eax + 0xcf7190] */
  { double v = F64((uint32_t)(eax + 0xcf7190u)); FPUSH(v); }
/* 993af9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993afc: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993afe: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993b01: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b04: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b06: fstp qword ptr [eax + 0xcf6f98] */
  WF64((uint32_t)(eax + 0xcf6f98u), ST0); FPOP();
/* 993b0c: fld qword ptr [eax + 0xcf7148] */
  { double v = F64((uint32_t)(eax + 0xcf7148u)); FPUSH(v); }
/* 993b12: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b14: fstp qword ptr [eax + 0xcf6fb0] */
  WF64((uint32_t)(eax + 0xcf6fb0u), ST0); FPOP();
/* 993b1a: fld qword ptr [eax + 0xcf7160] */
  { double v = F64((uint32_t)(eax + 0xcf7160u)); FPUSH(v); }
/* 993b20: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b22: fstp qword ptr [eax + 0xcf6fc8] */
  WF64((uint32_t)(eax + 0xcf6fc8u), ST0); FPOP();
/* 993b28: fld qword ptr [eax + 0xcf7178] */
  { double v = F64((uint32_t)(eax + 0xcf7178u)); FPUSH(v); }
/* 993b2e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b30: fstp qword ptr [eax + 0xcf6fe0] */
  WF64((uint32_t)(eax + 0xcf6fe0u), ST0); FPOP();
/* 993b36: jl 0x993af3 */
  if ((sf != of)) goto L_993af3;
L_993b38: /* 993b38: fstp st(0) */
  STI(0) = ST0; FPOP();
L_993b3a: /* 993b3a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993b3e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b40: jge 0x993b64 */
  if ((sf == of)) goto L_993b64;
L_993b42: /* 993b42: lea edi, [ebx + ecx*2] */
  edi = (uint32_t)(ebx + ecx*2);
/* 993b45: mov eax, ecx */
  eax = ecx;
/* 993b47: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b49: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993b4c: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 993b4e: mov edi, edi */
  edi = edi;
L_993b50: /* 993b50: fld qword ptr [eax + 0xcf7190] */
  { double v = F64((uint32_t)(eax + 0xcf7190u)); FPUSH(v); }
/* 993b56: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993b59: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 993b5a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b5c: fstp qword ptr [eax + 0xcf6fe0] */
  WF64((uint32_t)(eax + 0xcf6fe0u), ST0); FPOP();
/* 993b62: jne 0x993b50 */
  if (!zf) goto L_993b50;
L_993b64: /* 993b64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993b66: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 993b67: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b6a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993b6c: fchs  */
  ST0 = -ST0;
/* 993b6e: fstp qword ptr [esi + 0xcf6fc8] */
  WF64((uint32_t)(esi + 0xcf6fc8u), ST0); FPOP();
/* 993b74: fld qword ptr [esi + 0xcf7310] */
  { double v = F64((uint32_t)(esi + 0xcf7310u)); FPUSH(v); }
/* 993b7a: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 993b7c: fstp qword ptr [esi + 0xcf6fe0] */
  WF64((uint32_t)(esi + 0xcf6fe0u), ST0); FPOP();
/* 993b82: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993b84: jl 0x993ac0 */
  if ((sf != of)) goto L_993ac0;
L_993b8a: /* 993b8a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 993b8e: xor ecx, ecx */
  ecx = 0;
/* 993b90: xor edi, edi */
  edi = 0;
/* 993b92: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993b94: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 993b98: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 993b9c: jle 0x993e0c */
  if ((zf || sf != of)) goto L_993e0c;
L_993ba2: /* 993ba2: xor esi, esi */
  esi = 0;
/* 993ba4: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ba7: jl 0x993c93 */
  if ((sf != of)) goto L_993c93;
L_993bad: /* 993bad: mov ebx, 3 */
  ebx = 0x3u;
/* 993bb2: mov edx, 0xcf6e50 */
  edx = 0xcf6e50u;
L_993bb7: /* 993bb7: fld qword ptr [edx - 8] */
  { double v = F64((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 993bba: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993bc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bc2: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bc5: jp 0x993bea */
  if (pf) goto L_993bea;
L_993bc7: /* 993bc7: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 993bc9: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993bcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bd1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bd4: jp 0x993bea */
  if (pf) goto L_993bea;
L_993bd6: /* 993bd6: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 993bd9: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993bdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993be1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993be4: jnp 0x993ce5 */
  if (!pf) goto L_993ce5;
L_993bea: /* 993bea: fld qword ptr [edx + 0x10] */
  { double v = F64((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 993bed: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993bf3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993bf5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993bf8: jp 0x993c1e */
  if (pf) goto L_993c1e;
L_993bfa: /* 993bfa: fld qword ptr [edx + 0x18] */
  { double v = F64((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 993bfd: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c05: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c08: jp 0x993c1e */
  if (pf) goto L_993c1e;
L_993c0a: /* 993c0a: fld qword ptr [edx + 0x20] */
  { double v = F64((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* 993c0d: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c15: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c18: jnp 0x993cda */
  if (!pf) goto L_993cda;
L_993c1e: /* 993c1e: fld qword ptr [edx + 0x28] */
  { double v = F64((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* 993c21: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993c27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c29: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c2c: jp 0x993c52 */
  if (pf) goto L_993c52;
L_993c2e: /* 993c2e: fld qword ptr [edx + 0x30] */
  { double v = F64((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 993c31: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c39: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c3c: jp 0x993c52 */
  if (pf) goto L_993c52;
L_993c3e: /* 993c3e: fld qword ptr [edx + 0x38] */
  { double v = F64((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 993c41: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c49: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c4c: jnp 0x993cdd */
  if (!pf) goto L_993cdd;
L_993c52: /* 993c52: fld qword ptr [edx + 0x40] */
  { double v = F64((uint32_t)(edx + 0x40u)); FPUSH(v); }
/* 993c55: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993c5b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c5d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c60: jp 0x993c82 */
  if (pf) goto L_993c82;
L_993c62: /* 993c62: fld qword ptr [edx + 0x48] */
  { double v = F64((uint32_t)(edx + 0x48u)); FPUSH(v); }
/* 993c65: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993c6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c6d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c70: jp 0x993c82 */
  if (pf) goto L_993c82;
L_993c72: /* 993c72: fld qword ptr [edx + 0x50] */
  { double v = F64((uint32_t)(edx + 0x50u)); FPUSH(v); }
/* 993c75: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993c7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993c7d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993c80: jnp 0x993ce2 */
  if (!pf) goto L_993ce2;
L_993c82: /* 993c82: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993c85: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993c88: add edx, 0x60 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993c8b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993c8d: jl 0x993bb7 */
  if ((sf != of)) goto L_993bb7;
L_993c93: /* 993c93: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993c95: jge 0x993ce7 */
  if ((sf == of)) goto L_993ce7;
L_993c97: /* 993c97: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 993c9a: lea edx, [edx*8 + 0xcf6e50] */
  edx = (uint32_t)(edx*8 + 0xcf6e50u);
L_993ca1: /* 993ca1: fld qword ptr [edx - 8] */
  { double v = F64((uint32_t)(edx + 0xfffffff8u)); FPUSH(v); }
/* 993ca4: fcomp qword ptr [ecx + 0xcf7190] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7190u)));
  FPOP();
/* 993caa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993cac: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993caf: jp 0x993cd0 */
  if (pf) goto L_993cd0;
L_993cb1: /* 993cb1: fld qword ptr [edx] */
  { double v = F64((uint32_t)(edx)); FPUSH(v); }
/* 993cb3: fcomp qword ptr [ecx + 0xcf7198] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf7198u)));
  FPOP();
/* 993cb9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993cbb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993cbe: jp 0x993cd0 */
  if (pf) goto L_993cd0;
L_993cc0: /* 993cc0: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 993cc3: fcomp qword ptr [ecx + 0xcf71a0] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xcf71a0u)));
  FPOP();
/* 993cc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993ccb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993cce: jnp 0x993ce5 */
  if (!pf) goto L_993ce5;
L_993cd0: /* 993cd0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993cd1: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993cd4: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993cd6: jl 0x993ca1 */
  if ((sf != of)) goto L_993ca1;
L_993cd8: /* 993cd8: jmp 0x993ce5 */
  goto L_993ce5;
L_993cda: /* 993cda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993cdb: jmp 0x993ce5 */
  goto L_993ce5;
L_993cdd: /* 993cdd: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 993ce0: jmp 0x993ce5 */
  goto L_993ce5;
L_993ce2: /* 993ce2: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_993ce5: /* 993ce5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_993ce7: /* 993ce7: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 993cea: jne 0x993d9c */
  if (!zf) goto L_993d9c;
L_993cf0: /* 993cf0: mov edx, dword ptr [ecx + 0xcf7190] */
  edx = R32((uint32_t)(ecx + 0xcf7190u));
/* 993cf6: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993cf9: mov dword ptr [eax + 0xcf6e48], edx */
  W32((uint32_t)(eax + 0xcf6e48u), edx);
/* 993cff: mov edx, dword ptr [ecx + 0xcf7194] */
  edx = R32((uint32_t)(ecx + 0xcf7194u));
/* 993d05: mov dword ptr [eax + 0xcf6e4c], edx */
  W32((uint32_t)(eax + 0xcf6e4cu), edx);
/* 993d0b: mov edx, dword ptr [ecx + 0xcf7198] */
  edx = R32((uint32_t)(ecx + 0xcf7198u));
/* 993d11: mov dword ptr [eax + 0xcf6e50], edx */
  W32((uint32_t)(eax + 0xcf6e50u), edx);
/* 993d17: mov edx, dword ptr [ecx + 0xcf719c] */
  edx = R32((uint32_t)(ecx + 0xcf719cu));
/* 993d1d: mov dword ptr [eax + 0xcf6e54], edx */
  W32((uint32_t)(eax + 0xcf6e54u), edx);
/* 993d23: mov edx, dword ptr [ecx + 0xcf71a0] */
  edx = R32((uint32_t)(ecx + 0xcf71a0u));
/* 993d29: mov dword ptr [eax + 0xcf6e58], edx */
  W32((uint32_t)(eax + 0xcf6e58u), edx);
/* 993d2f: mov edx, dword ptr [ecx + 0xcf71a4] */
  edx = R32((uint32_t)(ecx + 0xcf71a4u));
/* 993d35: mov dword ptr [eax + 0xcf6e5c], edx */
  W32((uint32_t)(eax + 0xcf6e5cu), edx);
/* 993d3b: mov edx, dword ptr [ecx + 0xcf6ff8] */
  edx = R32((uint32_t)(ecx + 0xcf6ff8u));
/* 993d41: mov dword ptr [eax + 0xcf6cc8], edx */
  W32((uint32_t)(eax + 0xcf6cc8u), edx);
/* 993d47: mov edx, dword ptr [ecx + 0xcf6ffc] */
  edx = R32((uint32_t)(ecx + 0xcf6ffcu));
/* 993d4d: mov dword ptr [eax + 0xcf6ccc], edx */
  W32((uint32_t)(eax + 0xcf6cccu), edx);
/* 993d53: mov edx, dword ptr [ecx + 0xcf7000] */
  edx = R32((uint32_t)(ecx + 0xcf7000u));
/* 993d59: mov dword ptr [eax + 0xcf6cd0], edx */
  W32((uint32_t)(eax + 0xcf6cd0u), edx);
/* 993d5f: mov edx, dword ptr [ecx + 0xcf7004] */
  edx = R32((uint32_t)(ecx + 0xcf7004u));
/* 993d65: mov dword ptr [eax + 0xcf6cd4], edx */
  W32((uint32_t)(eax + 0xcf6cd4u), edx);
/* 993d6b: mov edx, dword ptr [ecx + 0xcf7008] */
  edx = R32((uint32_t)(ecx + 0xcf7008u));
/* 993d71: mov dword ptr [eax + 0xcf6cd8], edx */
  W32((uint32_t)(eax + 0xcf6cd8u), edx);
/* 993d77: mov edx, dword ptr [ecx + 0xcf700c] */
  edx = R32((uint32_t)(ecx + 0xcf700cu));
/* 993d7d: mov dword ptr [eax + 0xcf6cdc], edx */
  W32((uint32_t)(eax + 0xcf6cdcu), edx);
/* 993d83: mov dword ptr [esi*8 + 0xcf6c48], 0 */
  W32((uint32_t)(esi*8 + 0xcf6c48u), 0x0u);
/* 993d8e: mov dword ptr [esi*8 + 0xcf6c4c], 0x3ff00000 */
  W32((uint32_t)(esi*8 + 0xcf6c4cu), 0x3ff00000u);
/* 993d99: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 993d9a: jmp 0x993de9 */
  goto L_993de9;
L_993d9c: /* 993d9c: fld qword ptr [ecx + 0xcf6ff8] */
  { double v = F64((uint32_t)(ecx + 0xcf6ff8u)); FPUSH(v); }
/* 993da2: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993da5: fadd qword ptr [eax + 0xcf6cc8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xcf6cc8u)));
/* 993dab: fstp qword ptr [eax + 0xcf6cc8] */
  WF64((uint32_t)(eax + 0xcf6cc8u), ST0); FPOP();
/* 993db1: fld qword ptr [ecx + 0xcf7000] */
  { double v = F64((uint32_t)(ecx + 0xcf7000u)); FPUSH(v); }
/* 993db7: fadd qword ptr [eax + 0xcf6cd0] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xcf6cd0u)));
/* 993dbd: fstp qword ptr [eax + 0xcf6cd0] */
  WF64((uint32_t)(eax + 0xcf6cd0u), ST0); FPOP();
/* 993dc3: fld qword ptr [eax + 0xcf6cd8] */
  { double v = F64((uint32_t)(eax + 0xcf6cd8u)); FPUSH(v); }
/* 993dc9: fadd qword ptr [ecx + 0xcf7008] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xcf7008u)));
/* 993dcf: fstp qword ptr [eax + 0xcf6cd8] */
  WF64((uint32_t)(eax + 0xcf6cd8u), ST0); FPOP();
/* 993dd5: fld qword ptr [esi*8 + 0xcf6c48] */
  { double v = F64((uint32_t)(esi*8 + 0xcf6c48u)); FPUSH(v); }
/* 993ddc: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 993de2: fstp qword ptr [esi*8 + 0xcf6c48] */
  WF64((uint32_t)(esi*8 + 0xcf6c48u), ST0); FPOP();
L_993de9: /* 993de9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 993ded: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993df1: mov dword ptr [esp + eax*4 + 0xd0], esi */
  W32((uint32_t)(esp + eax*4 + 0xd0u), esi);
/* 993df8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993df9: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993dfc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993dfe: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 993e02: jl 0x993ba2 */
  if ((sf != of)) goto L_993ba2;
L_993e08: /* 993e08: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_993e0c: /* 993e0c: xor ecx, ecx */
  ecx = 0;
/* 993e0e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993e10: jle 0x993e60 */
  if ((zf || sf != of)) goto L_993e60;
L_993e12: /* 993e12: mov eax, 0xcf6cd0 */
  eax = 0xcf6cd0u;
/* 993e17: jmp 0x993e20 */
  goto L_993e20;
L_993e20: /* 993e20: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 993e27: fmul qword ptr [ecx*8 + 0xcf6c40] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf6c40u)));
/* 993e2e: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993e31: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993e33: fstp qword ptr [ecx*8 + 0xcf6c40] */
  WF64((uint32_t)(ecx*8 + 0xcf6c40u), ST0); FPOP();
/* 993e3a: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e40: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 993e43: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 993e46: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e4c: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 993e4f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 993e52: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e58: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 993e5b: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 993e5e: jl 0x993e20 */
  if ((sf != of)) goto L_993e20;
L_993e60: /* 993e60: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993e63: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e69: /* 993e69: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 993e6c: mov al, byte ptr [esi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1a4u))) & 0xffu);
/* 993e72: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 993e74: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e76: /* 993e76: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 993e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993e7b: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 993e81: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 993e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993e86: lea edx, [esi + 0x1ac] */
  edx = (uint32_t)(esi + 0x1acu);
/* 993e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993e8d: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 993e92: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 993e97: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993e9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993e9d: lea ebx, [esi + 0x1a8] */
  ebx = (uint32_t)(esi + 0x1a8u);
/* 993ea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993ea4: mov eax, 0xcf6e48 */
  eax = 0xcf6e48u;
/* 993ea9: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 993eab: call 0x993470 */
  esp -= 4; W32(esp, 0x993eb0u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 993eb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993eb2: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 993eb6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993eb9: xor eax, eax */
  eax = 0;
/* 993ebb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993ebd: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_993ec3: /* 993ec3: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 993ec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993ed0: /* 993ed0: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 993ed7: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 993edb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 993edd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993ede: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993ee1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ee3: jl 0x993ed0 */
  if ((sf != of)) goto L_993ed0;
L_993ee5: /* 993ee5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993ee6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993ee7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993ee8: mov esp, ebp */
  esp = ebp;
/* 993eea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 993eeb: ret  */
  esp += 4; SPILL(); return;
L_993eec: /* 993eec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993ef0: xor esi, esi */
  esi = 0;
/* 993ef2: mov ebx, 0xcf6c30 */
  ebx = 0xcf6c30u;
/* 993ef7: mov eax, 0xcf6ff8 */
  eax = 0xcf6ff8u;
/* 993efc: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 993f00: call 0x98f8d0 */
  esp -= 4; W32(esp, 0x993f05u); SPILL(); f_98f8d0(); if (g_unwind) return; RELOAD();
/* 993f05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 993f06: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 993f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993f0f: mov eax, ebx */
  eax = ebx;
/* 993f11: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 993f16: call 0x990110 */
  esp -= 4; W32(esp, 0x993f1bu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 993f1b: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 993f1f: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 993f23: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 993f27: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 993f2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993f2e: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 993f32: mov dword ptr [esp + 0x28], 0xcf6bd0 */
  W32((uint32_t)(esp + 0x28u), 0xcf6bd0u);
/* 993f3a: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 993f3e: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f46: jmp 0x993f60 */
  goto L_993f60;
L_993f48: /* 993f48: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f4c: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f54: jmp 0x993f60 */
  goto L_993f60;
L_993f56: /* 993f56: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_993f60: /* 993f60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 993f63: mov edx, dword ptr [ecx + 0x1a0] */
  edx = R32((uint32_t)(ecx + 0x1a0u));
/* 993f69: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 993f6d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 993f71: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 993f75: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993f76: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 993f78: lea edx, [edi + ecx - 1] */
  edx = (uint32_t)(edi + ecx + 0xffffffffu);
/* 993f7c: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993f7f: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 993f84: je 0x993fbc */
  if (zf) goto L_993fbc;
L_993f86: /* 993f86: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993f8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f8b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 993f8f: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 993f94: mov edx, esi */
  edx = esi;
/* 993f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f97: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993f9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993f9b: lea edx, [esp + edx + 0x124] */
  edx = (uint32_t)(esp + edx + 0x124u);
/* 993fa2: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 993fa7: call 0x9904a0 */
  esp -= 4; W32(esp, 0x993facu); SPILL(); f_9904a0(); if (g_unwind) return; RELOAD();
/* 993fac: fstp qword ptr [edi*8 + 0xcf6bc0] */
  WF64((uint32_t)(edi*8 + 0xcf6bc0u), ST0); FPOP();
/* 993fb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993fb6: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 993fba: jmp 0x993fce */
  goto L_993fce;
L_993fbc: /* 993fbc: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 993fc0: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993fc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993fc6: call 0x98fec0 */
  esp -= 4; W32(esp, 0x993fcbu); SPILL(); f_98fec0(); if (g_unwind) return; RELOAD();
/* 993fcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_993fce: /* 993fce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993fcf: mov eax, esi */
  eax = esi;
/* 993fd1: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 993fd6: jns 0x993fdd */
  if (!sf) goto L_993fdd;
L_993fd8: /* 993fd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 993fd9: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 993fdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_993fdd: /* 993fdd: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 993fe1: mov ecx, 0 */
  ecx = 0x0u;
/* 993fe6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 993fe9: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 993fed: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 993ff5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 993ff7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993ffa: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 993ffe: lea edx, [esp + eax + 0x110] */
  edx = (uint32_t)(esp + eax + 0x110u);
/* 994005: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 994009: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994010: /* 994010: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994014: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 994018: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99401c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99401d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99401e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99401f: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 994024: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 994029: call 0x990110 */
  esp -= 4; W32(esp, 0x99402eu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 99402e: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 994032: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994035: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994036: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994038: jl 0x994065 */
  if ((sf != of)) goto L_994065;
L_99403a: /* 99403a: mov eax, esi */
  eax = esi;
/* 99403c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99403f: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
L_994046: /* 994046: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99404a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99404e: mov ebx, edi */
  ebx = edi;
/* 994050: call 0x990440 */
  esp -= 4; W32(esp, 0x994055u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994055: mov ebx, eax */
  ebx = eax;
/* 994057: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994059: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_99405b: /* 99405b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99405c: sub edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 99405f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994061: jge 0x994046 */
  if ((sf == of)) goto L_994046;
L_994063: /* 994063: jmp 0x994069 */
  goto L_994069;
L_994065: /* 994065: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994067: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_994069: /* 994069: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 99406d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99406f: je 0x9940ca */
  if (zf) goto L_9940ca;
L_994071: /* 994071: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 994075: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 994076: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994079: jge 0x9940ca */
  if ((sf == of)) goto L_9940ca;
L_99407b: /* 99407b: mov ecx, edi */
  ecx = edi;
/* 99407d: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994080: lea esi, [esp + ecx + 0x110] */
  esi = (uint32_t)(esp + ecx + 0x110u);
/* 994087: jmp 0x994090 */
  goto L_994090;
L_994090: /* 994090: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994094: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 994098: mov ebx, esi */
  ebx = esi;
/* 99409a: call 0x990440 */
  esp -= 4; W32(esp, 0x99409fu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99409f: mov ebx, eax */
  ebx = eax;
/* 9940a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940a3: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_9940a5: /* 9940a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9940a6: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9940a9: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940ac: jl 0x994090 */
  if ((sf != of)) goto L_994090;
L_9940ae: /* 9940ae: jmp 0x9940ca */
  goto L_9940ca;
L_9940b0: /* 9940b0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940b6: je 0x9940ca */
  if (zf) goto L_9940ca;
L_9940b8: /* 9940b8: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9940bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9940bd: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9940c4: jl 0x994010 */
  if ((sf != of)) goto L_994010;
L_9940ca: /* 9940ca: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940ce: mov edx, eax */
  edx = eax;
/* 9940d0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9940d1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940d3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9940d7: je 0x9940e1 */
  if (zf) goto L_9940e1;
L_9940d9: /* 9940d9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940db: je 0x993f56 */
  if (zf) goto L_993f56;
L_9940e1: /* 9940e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9940e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9940e7: jle 0x9940ff */
  if ((zf || sf != of)) goto L_9940ff;
L_9940e9: /* 9940e9: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 9940ed: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9940f1: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9940f4: lea esi, [esp + esi + 0x110] */
  esi = (uint32_t)(esp + esi + 0x110u);
/* 9940fb: mov ecx, eax */
  ecx = eax;
/* 9940fd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_9940ff: /* 9940ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 994103: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 994107: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99410b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99410c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 994110: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 994114: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994117: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99411a: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99411d: cmp eax, 0xcf6c30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6c30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994122: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 994126: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99412a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99412e: jl 0x993f48 */
  if ((sf != of)) goto L_993f48;
L_994134: /* 994134: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 994138: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99413b: jne 0x994160 */
  if (!zf) goto L_994160;
L_99413d: /* 99413d: fld qword ptr [0xcf6bc0] */
  { double v = F64((uint32_t)(0xcf6bc0u)); FPUSH(v); }
/* 994143: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 99414b: fcomp qword ptr [0xcf6bc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6bc8u)));
  FPOP();
/* 994151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994156: jnp 0x99415c */
  if (!pf) goto L_99415c;
L_994158: /* 994158: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_99415c: /* 99415c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_994160: /* 994160: xor eax, eax */
  eax = 0;
/* 994162: xor esi, esi */
  esi = 0;
L_994164: /* 994164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994166: jne 0x9941eb */
  if (!zf) goto L_9941eb;
L_99416c: /* 99416c: lea eax, [esi + edx*2] */
  eax = (uint32_t)(esi + edx*2);
/* 99416f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 994172: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994175: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99417b: fcomp qword ptr [0xcf6fc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fc8u)));
  FPOP();
/* 994181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994186: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_994188: /* 994188: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99418e: fcomp qword ptr [0xcf6fe0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe0u)));
  FPOP();
/* 994194: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994196: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994199: je 0x9941eb */
  if (zf) goto L_9941eb;
L_99419b: /* 99419b: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941a1: fcomp qword ptr [0xcf6fd0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd0u)));
  FPOP();
/* 9941a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941a9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941ac: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941ae: /* 9941ae: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941b4: fcomp qword ptr [0xcf6fe8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe8u)));
  FPOP();
/* 9941ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941bf: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941c1: /* 9941c1: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941c7: fcomp qword ptr [0xcf6fd8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd8u)));
  FPOP();
/* 9941cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941d2: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941d4: /* 9941d4: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941da: fcomp qword ptr [0xcf6ff0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6ff0u)));
  FPOP();
/* 9941e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941e5: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941e7: /* 9941e7: xor eax, eax */
  eax = 0;
/* 9941e9: jmp 0x9941f0 */
  goto L_9941f0;
L_9941eb: /* 9941eb: mov eax, 1 */
  eax = 0x1u;
L_9941f0: /* 9941f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9941f1: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9941f4: jl 0x994164 */
  if ((sf != of)) goto L_994164;
L_9941fa: /* 9941fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9941fc: je 0x9943b4 */
  if (zf) goto L_9943b4;
L_994202: /* 994202: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 994206: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994208: jle 0x994220 */
  if ((zf || sf != of)) goto L_994220;
L_99420a: /* 99420a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99420e: mov eax, edx */
  eax = edx;
/* 994210: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 994213: lea esi, [esp + eax + 0x50] */
  esi = (uint32_t)(esp + eax + 0x50u);
/* 994217: lea edi, [esp + 0x110] */
  edi = (uint32_t)(esp + 0x110u);
/* 99421e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_994220: /* 994220: xor eax, eax */
  eax = 0;
/* 994222: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 994225: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994228: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99422c: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 994230: lea eax, [ecx + 0xcf6bd0] */
  eax = (uint32_t)(ecx + 0xcf6bd0u);
/* 994236: lea ecx, [esp + edx*4 + 0x40] */
  ecx = (uint32_t)(esp + edx*4 + 0x40u);
/* 99423a: mov dword ptr [esp + 0x30], 8 */
  W32((uint32_t)(esp + 0x30u), 0x8u);
/* 994242: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 994246: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 99424a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994250: /* 994250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 994253: mov ecx, dword ptr [edx + 0x1a0] */
  ecx = R32((uint32_t)(edx + 0x1a0u));
/* 994259: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99425d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 994261: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 994265: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 994266: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 994268: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 99426d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99426e: mov ecx, esi */
  ecx = esi;
/* 994270: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994273: push 0xcf6fc8 */
  { uint32_t v = 0xcf6fc8u; esp -= 4; W32(esp, v); }
/* 994278: lea edx, [esp + ecx + 0x11c] */
  edx = (uint32_t)(esp + ecx + 0x11cu);
/* 99427f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 994283: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 994288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 994289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99428a: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 99428f: call 0x990c00 */
  esp -= 4; W32(esp, 0x994294u); SPILL(); f_990c00(); if (g_unwind) return; RELOAD();
/* 994294: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 994298: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99429b: fstp qword ptr [edx*8 + 0xcf6bc0] */
  WF64((uint32_t)(edx*8 + 0xcf6bc0u), ST0); FPOP();
/* 9942a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9942a3: mov eax, esi */
  eax = esi;
/* 9942a5: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 9942aa: jns 0x9942b1 */
  if (!sf) goto L_9942b1;
L_9942ac: /* 9942ac: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9942ad: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9942b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_9942b1: /* 9942b1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9942b5: mov ecx, 0 */
  ecx = 0x0u;
/* 9942ba: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9942bd: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9942c1: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 9942c9: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9942cb: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9942ce: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9942d2: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
/* 9942d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9942e0: /* 9942e0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9942e4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9942e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9942e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9942ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9942eb: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 9942f0: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 9942f5: call 0x990110 */
  esp -= 4; W32(esp, 0x9942fau); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 9942fa: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9942fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994301: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994302: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994304: jl 0x99433d */
  if ((sf != of)) goto L_99433d;
L_994306: /* 994306: mov ecx, esi */
  ecx = esi;
/* 994308: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99430b: lea edx, [esp + ecx + 0x110] */
  edx = (uint32_t)(esp + ecx + 0x110u);
/* 994312: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_994316: /* 994316: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 99431a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99431e: mov eax, edi */
  eax = edi;
/* 994320: call 0x990440 */
  esp -= 4; W32(esp, 0x994325u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994325: mov ebx, eax */
  ebx = eax;
/* 994327: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994329: jne 0x994387 */
  if (!zf) goto L_994387;
L_99432b: /* 99432b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99432f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994330: sub ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 994333: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994335: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 994339: jge 0x994316 */
  if ((sf == of)) goto L_994316;
L_99433b: /* 99433b: jmp 0x994341 */
  goto L_994341;
L_99433d: /* 99433d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99433f: jne 0x994387 */
  if (!zf) goto L_994387;
L_994341: /* 994341: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 994345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994347: je 0x994399 */
  if (zf) goto L_994399;
L_994349: /* 994349: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99434d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99434e: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994351: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994355: jge 0x994399 */
  if ((sf == of)) goto L_994399;
L_994357: /* 994357: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99435b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99435e: lea esi, [esp + eax + 0x110] */
  esi = (uint32_t)(esp + eax + 0x110u);
L_994365: /* 994365: mov eax, edi */
  eax = edi;
/* 994367: mov ebx, esi */
  ebx = esi;
/* 994369: call 0x990440 */
  esp -= 4; W32(esp, 0x99436eu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99436e: mov ebx, eax */
  ebx = eax;
/* 994370: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994372: jne 0x994387 */
  if (!zf) goto L_994387;
L_994374: /* 994374: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994378: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994379: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99437c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99437f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994383: jl 0x994365 */
  if ((sf != of)) goto L_994365;
L_994385: /* 994385: jmp 0x994399 */
  goto L_994399;
L_994387: /* 994387: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 99438b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99438c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99438f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 994393: jl 0x9942e0 */
  if ((sf != of)) goto L_9942e0;
L_994399: /* 994399: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99439d: mov ecx, eax */
  ecx = eax;
/* 99439f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9943a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943a2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9943a6: je 0x9943b0 */
  if (zf) goto L_9943b0;
L_9943a8: /* 9943a8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943aa: je 0x994250 */
  if (zf) goto L_994250;
L_9943b0: /* 9943b0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_9943b4: /* 9943b4: lea esi, [edx + edx*2] */
  esi = (uint32_t)(edx + edx*2);
/* 9943b7: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9943ba: mov eax, 0xcf6c08 */
  eax = 0xcf6c08u;
/* 9943bf: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9943c1: lea ecx, [esi + 0xcf6bd8] */
  ecx = (uint32_t)(esi + 0xcf6bd8u);
/* 9943c7: mov edi, 2 */
  edi = 0x2u;
/* 9943cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9943d0: /* 9943d0: fld qword ptr [0xcf7178] */
  { double v = F64((uint32_t)(0xcf7178u)); FPUSH(v); }
/* 9943d6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9943d9: fadd qword ptr [ecx - 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe0u)));
/* 9943dc: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9943df: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9943e0: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 9943e3: fld qword ptr [0xcf7180] */
  { double v = F64((uint32_t)(0xcf7180u)); FPUSH(v); }
/* 9943e9: fadd qword ptr [ecx - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe8u)));
/* 9943ec: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 9943ef: fld qword ptr [0xcf7188] */
  { double v = F64((uint32_t)(0xcf7188u)); FPUSH(v); }
/* 9943f5: fadd qword ptr [ecx - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 9943f8: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9943fb: jne 0x9943d0 */
  if (!zf) goto L_9943d0;
L_9943fd: /* 9943fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994400: mov edx, dword ptr [esp + edx*4 + 0x40] */
  edx = R32((uint32_t)(esp + edx*4 + 0x40u));
/* 994404: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 99440a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99440b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99440d: lea ebx, [eax + 0x1a8] */
  ebx = (uint32_t)(eax + 0x1a8u);
/* 994413: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 994415: je 0x99441d */
  if (zf) goto L_99441d;
L_994417: /* 994417: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_99441d: /* 99441d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 994421: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 994424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 994425: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 994429: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99442a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99442e: lea edx, [edi + 0x1ac] */
  edx = (uint32_t)(edi + 0x1acu);
/* 994434: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994435: mov edx, dword ptr [edi + 0x1a0] */
  edx = R32((uint32_t)(edi + 0x1a0u));
/* 99443b: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 994440: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 994445: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 99444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99444b: mov eax, 0xcf6c00 */
  eax = 0xcf6c00u;
/* 994450: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 994452: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994453: call 0x993470 */
  esp -= 4; W32(esp, 0x994458u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 994458: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99445a: mov al, byte ptr [edi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1a4u))) & 0xffu);
/* 994460: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994463: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994465: je 0x994472 */
  if (zf) goto L_994472;
L_994467: /* 994467: cmp dword ptr [ebx], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99446a: je 0x994472 */
  if (zf) goto L_994472;
L_99446c: /* 99446c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_994472: /* 994472: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 994476: xor eax, eax */
  eax = 0;
/* 994478: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99447a: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_99447c: /* 99447c: lea ecx, [edi + 0x1c4] */
  ecx = (uint32_t)(edi + 0x1c4u);
L_994482: /* 994482: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 994489: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 99448d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 99448f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994490: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994493: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994495: jl 0x994482 */
  if ((sf != of)) goto L_994482;
L_994497: /* 994497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 994498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 994499: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99449a: mov esp, ebp */
  esp = ebp;
/* 99449c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99449d: ret  */
  esp += 4; SPILL(); return;
}

void f_993e19(void) {
  LOAD_REGS();
L_993e19: /* 993e19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993e20: /* 993e20: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 993e27: fmul qword ptr [ecx*8 + 0xcf6c40] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf6c40u)));
/* 993e2e: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993e31: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993e33: fstp qword ptr [ecx*8 + 0xcf6c40] */
  WF64((uint32_t)(ecx*8 + 0xcf6c40u), ST0); FPOP();
/* 993e3a: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e40: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 993e43: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 993e46: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e4c: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 993e4f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 993e52: fld qword ptr [0xcf7328] */
  { double v = F64((uint32_t)(0xcf7328u)); FPUSH(v); }
/* 993e58: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 993e5b: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 993e5e: jl 0x993e20 */
  if ((sf != of)) goto L_993e20;
L_993e60: /* 993e60: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993e63: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e69: /* 993e69: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 993e6c: mov al, byte ptr [esi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1a4u))) & 0xffu);
/* 993e72: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 993e74: jne 0x993eec */
  if (!zf) goto L_993eec;
L_993e76: /* 993e76: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 993e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993e7b: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 993e81: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 993e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993e86: lea edx, [esi + 0x1ac] */
  edx = (uint32_t)(esi + 0x1acu);
/* 993e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993e8d: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 993e92: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 993e97: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993e9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993e9d: lea ebx, [esi + 0x1a8] */
  ebx = (uint32_t)(esi + 0x1a8u);
/* 993ea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993ea4: mov eax, 0xcf6e48 */
  eax = 0xcf6e48u;
/* 993ea9: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 993eab: call 0x993470 */
  esp -= 4; W32(esp, 0x993eb0u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 993eb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993eb2: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 993eb6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993eb9: xor eax, eax */
  eax = 0;
/* 993ebb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993ebd: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_993ec3: /* 993ec3: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 993ec9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993ed0: /* 993ed0: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 993ed7: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 993edb: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 993edd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993ede: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993ee1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993ee3: jl 0x993ed0 */
  if ((sf != of)) goto L_993ed0;
L_993ee5: /* 993ee5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993ee6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993ee7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993ee8: mov esp, ebp */
  esp = ebp;
/* 993eea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 993eeb: ret  */
  esp += 4; SPILL(); return;
L_993eec: /* 993eec: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993ef0: xor esi, esi */
  esi = 0;
/* 993ef2: mov ebx, 0xcf6c30 */
  ebx = 0xcf6c30u;
/* 993ef7: mov eax, 0xcf6ff8 */
  eax = 0xcf6ff8u;
/* 993efc: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 993f00: call 0x98f8d0 */
  esp -= 4; W32(esp, 0x993f05u); SPILL(); f_98f8d0(); if (g_unwind) return; RELOAD();
/* 993f05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 993f06: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 993f0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993f0f: mov eax, ebx */
  eax = ebx;
/* 993f11: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 993f16: call 0x990110 */
  esp -= 4; W32(esp, 0x993f1bu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 993f1b: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 993f1f: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 993f23: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 993f27: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 993f2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993f2e: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 993f32: mov dword ptr [esp + 0x28], 0xcf6bd0 */
  W32((uint32_t)(esp + 0x28u), 0xcf6bd0u);
/* 993f3a: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 993f3e: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f46: jmp 0x993f60 */
  goto L_993f60;
L_993f48: /* 993f48: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f4c: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f54: jmp 0x993f60 */
  goto L_993f60;
L_993f56: /* 993f56: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_993f60: /* 993f60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 993f63: mov edx, dword ptr [ecx + 0x1a0] */
  edx = R32((uint32_t)(ecx + 0x1a0u));
/* 993f69: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 993f6d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 993f71: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 993f75: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993f76: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 993f78: lea edx, [edi + ecx - 1] */
  edx = (uint32_t)(edi + ecx + 0xffffffffu);
/* 993f7c: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993f7f: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 993f84: je 0x993fbc */
  if (zf) goto L_993fbc;
L_993f86: /* 993f86: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993f8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f8b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 993f8f: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 993f94: mov edx, esi */
  edx = esi;
/* 993f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f97: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993f9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993f9b: lea edx, [esp + edx + 0x124] */
  edx = (uint32_t)(esp + edx + 0x124u);
/* 993fa2: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 993fa7: call 0x9904a0 */
  esp -= 4; W32(esp, 0x993facu); SPILL(); f_9904a0(); if (g_unwind) return; RELOAD();
/* 993fac: fstp qword ptr [edi*8 + 0xcf6bc0] */
  WF64((uint32_t)(edi*8 + 0xcf6bc0u), ST0); FPOP();
/* 993fb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993fb6: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 993fba: jmp 0x993fce */
  goto L_993fce;
L_993fbc: /* 993fbc: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 993fc0: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993fc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993fc6: call 0x98fec0 */
  esp -= 4; W32(esp, 0x993fcbu); SPILL(); f_98fec0(); if (g_unwind) return; RELOAD();
/* 993fcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_993fce: /* 993fce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993fcf: mov eax, esi */
  eax = esi;
/* 993fd1: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 993fd6: jns 0x993fdd */
  if (!sf) goto L_993fdd;
L_993fd8: /* 993fd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 993fd9: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 993fdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_993fdd: /* 993fdd: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 993fe1: mov ecx, 0 */
  ecx = 0x0u;
/* 993fe6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 993fe9: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 993fed: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 993ff5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 993ff7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993ffa: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 993ffe: lea edx, [esp + eax + 0x110] */
  edx = (uint32_t)(esp + eax + 0x110u);
/* 994005: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 994009: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994010: /* 994010: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994014: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 994018: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99401c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99401d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99401e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99401f: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 994024: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 994029: call 0x990110 */
  esp -= 4; W32(esp, 0x99402eu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 99402e: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 994032: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994035: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994036: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994038: jl 0x994065 */
  if ((sf != of)) goto L_994065;
L_99403a: /* 99403a: mov eax, esi */
  eax = esi;
/* 99403c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99403f: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
L_994046: /* 994046: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99404a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99404e: mov ebx, edi */
  ebx = edi;
/* 994050: call 0x990440 */
  esp -= 4; W32(esp, 0x994055u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994055: mov ebx, eax */
  ebx = eax;
/* 994057: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994059: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_99405b: /* 99405b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99405c: sub edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 99405f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994061: jge 0x994046 */
  if ((sf == of)) goto L_994046;
L_994063: /* 994063: jmp 0x994069 */
  goto L_994069;
L_994065: /* 994065: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994067: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_994069: /* 994069: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 99406d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99406f: je 0x9940ca */
  if (zf) goto L_9940ca;
L_994071: /* 994071: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 994075: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 994076: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994079: jge 0x9940ca */
  if ((sf == of)) goto L_9940ca;
L_99407b: /* 99407b: mov ecx, edi */
  ecx = edi;
/* 99407d: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994080: lea esi, [esp + ecx + 0x110] */
  esi = (uint32_t)(esp + ecx + 0x110u);
/* 994087: jmp 0x994090 */
  goto L_994090;
L_994090: /* 994090: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994094: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 994098: mov ebx, esi */
  ebx = esi;
/* 99409a: call 0x990440 */
  esp -= 4; W32(esp, 0x99409fu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99409f: mov ebx, eax */
  ebx = eax;
/* 9940a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940a3: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_9940a5: /* 9940a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9940a6: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9940a9: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940ac: jl 0x994090 */
  if ((sf != of)) goto L_994090;
L_9940ae: /* 9940ae: jmp 0x9940ca */
  goto L_9940ca;
L_9940b0: /* 9940b0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940b6: je 0x9940ca */
  if (zf) goto L_9940ca;
L_9940b8: /* 9940b8: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9940bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9940bd: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9940c4: jl 0x994010 */
  if ((sf != of)) goto L_994010;
L_9940ca: /* 9940ca: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940ce: mov edx, eax */
  edx = eax;
/* 9940d0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9940d1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940d3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9940d7: je 0x9940e1 */
  if (zf) goto L_9940e1;
L_9940d9: /* 9940d9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940db: je 0x993f56 */
  if (zf) goto L_993f56;
L_9940e1: /* 9940e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9940e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9940e7: jle 0x9940ff */
  if ((zf || sf != of)) goto L_9940ff;
L_9940e9: /* 9940e9: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 9940ed: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9940f1: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9940f4: lea esi, [esp + esi + 0x110] */
  esi = (uint32_t)(esp + esi + 0x110u);
/* 9940fb: mov ecx, eax */
  ecx = eax;
/* 9940fd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_9940ff: /* 9940ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 994103: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 994107: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99410b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99410c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 994110: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 994114: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994117: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99411a: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99411d: cmp eax, 0xcf6c30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6c30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994122: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 994126: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99412a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99412e: jl 0x993f48 */
  if ((sf != of)) goto L_993f48;
L_994134: /* 994134: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 994138: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99413b: jne 0x994160 */
  if (!zf) goto L_994160;
L_99413d: /* 99413d: fld qword ptr [0xcf6bc0] */
  { double v = F64((uint32_t)(0xcf6bc0u)); FPUSH(v); }
/* 994143: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 99414b: fcomp qword ptr [0xcf6bc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6bc8u)));
  FPOP();
/* 994151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994156: jnp 0x99415c */
  if (!pf) goto L_99415c;
L_994158: /* 994158: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_99415c: /* 99415c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_994160: /* 994160: xor eax, eax */
  eax = 0;
/* 994162: xor esi, esi */
  esi = 0;
L_994164: /* 994164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994166: jne 0x9941eb */
  if (!zf) goto L_9941eb;
L_99416c: /* 99416c: lea eax, [esi + edx*2] */
  eax = (uint32_t)(esi + edx*2);
/* 99416f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 994172: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994175: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99417b: fcomp qword ptr [0xcf6fc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fc8u)));
  FPOP();
/* 994181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994186: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_994188: /* 994188: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99418e: fcomp qword ptr [0xcf6fe0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe0u)));
  FPOP();
/* 994194: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994196: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994199: je 0x9941eb */
  if (zf) goto L_9941eb;
L_99419b: /* 99419b: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941a1: fcomp qword ptr [0xcf6fd0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd0u)));
  FPOP();
/* 9941a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941a9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941ac: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941ae: /* 9941ae: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941b4: fcomp qword ptr [0xcf6fe8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe8u)));
  FPOP();
/* 9941ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941bf: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941c1: /* 9941c1: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941c7: fcomp qword ptr [0xcf6fd8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd8u)));
  FPOP();
/* 9941cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941d2: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941d4: /* 9941d4: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941da: fcomp qword ptr [0xcf6ff0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6ff0u)));
  FPOP();
/* 9941e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941e5: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941e7: /* 9941e7: xor eax, eax */
  eax = 0;
/* 9941e9: jmp 0x9941f0 */
  goto L_9941f0;
L_9941eb: /* 9941eb: mov eax, 1 */
  eax = 0x1u;
L_9941f0: /* 9941f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9941f1: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9941f4: jl 0x994164 */
  if ((sf != of)) goto L_994164;
L_9941fa: /* 9941fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9941fc: je 0x9943b4 */
  if (zf) goto L_9943b4;
L_994202: /* 994202: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 994206: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994208: jle 0x994220 */
  if ((zf || sf != of)) goto L_994220;
L_99420a: /* 99420a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99420e: mov eax, edx */
  eax = edx;
/* 994210: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 994213: lea esi, [esp + eax + 0x50] */
  esi = (uint32_t)(esp + eax + 0x50u);
/* 994217: lea edi, [esp + 0x110] */
  edi = (uint32_t)(esp + 0x110u);
/* 99421e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_994220: /* 994220: xor eax, eax */
  eax = 0;
/* 994222: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 994225: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994228: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99422c: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 994230: lea eax, [ecx + 0xcf6bd0] */
  eax = (uint32_t)(ecx + 0xcf6bd0u);
/* 994236: lea ecx, [esp + edx*4 + 0x40] */
  ecx = (uint32_t)(esp + edx*4 + 0x40u);
/* 99423a: mov dword ptr [esp + 0x30], 8 */
  W32((uint32_t)(esp + 0x30u), 0x8u);
/* 994242: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 994246: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 99424a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994250: /* 994250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 994253: mov ecx, dword ptr [edx + 0x1a0] */
  ecx = R32((uint32_t)(edx + 0x1a0u));
/* 994259: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99425d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 994261: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 994265: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 994266: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 994268: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 99426d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99426e: mov ecx, esi */
  ecx = esi;
/* 994270: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994273: push 0xcf6fc8 */
  { uint32_t v = 0xcf6fc8u; esp -= 4; W32(esp, v); }
/* 994278: lea edx, [esp + ecx + 0x11c] */
  edx = (uint32_t)(esp + ecx + 0x11cu);
/* 99427f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 994283: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 994288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 994289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99428a: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 99428f: call 0x990c00 */
  esp -= 4; W32(esp, 0x994294u); SPILL(); f_990c00(); if (g_unwind) return; RELOAD();
/* 994294: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 994298: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99429b: fstp qword ptr [edx*8 + 0xcf6bc0] */
  WF64((uint32_t)(edx*8 + 0xcf6bc0u), ST0); FPOP();
/* 9942a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9942a3: mov eax, esi */
  eax = esi;
/* 9942a5: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 9942aa: jns 0x9942b1 */
  if (!sf) goto L_9942b1;
L_9942ac: /* 9942ac: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9942ad: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9942b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_9942b1: /* 9942b1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9942b5: mov ecx, 0 */
  ecx = 0x0u;
/* 9942ba: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9942bd: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9942c1: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 9942c9: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9942cb: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9942ce: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9942d2: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
/* 9942d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9942e0: /* 9942e0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9942e4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9942e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9942e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9942ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9942eb: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 9942f0: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 9942f5: call 0x990110 */
  esp -= 4; W32(esp, 0x9942fau); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 9942fa: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9942fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994301: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994302: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994304: jl 0x99433d */
  if ((sf != of)) goto L_99433d;
L_994306: /* 994306: mov ecx, esi */
  ecx = esi;
/* 994308: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99430b: lea edx, [esp + ecx + 0x110] */
  edx = (uint32_t)(esp + ecx + 0x110u);
/* 994312: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_994316: /* 994316: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 99431a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99431e: mov eax, edi */
  eax = edi;
/* 994320: call 0x990440 */
  esp -= 4; W32(esp, 0x994325u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994325: mov ebx, eax */
  ebx = eax;
/* 994327: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994329: jne 0x994387 */
  if (!zf) goto L_994387;
L_99432b: /* 99432b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99432f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994330: sub ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 994333: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994335: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 994339: jge 0x994316 */
  if ((sf == of)) goto L_994316;
L_99433b: /* 99433b: jmp 0x994341 */
  goto L_994341;
L_99433d: /* 99433d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99433f: jne 0x994387 */
  if (!zf) goto L_994387;
L_994341: /* 994341: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 994345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994347: je 0x994399 */
  if (zf) goto L_994399;
L_994349: /* 994349: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99434d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99434e: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994351: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994355: jge 0x994399 */
  if ((sf == of)) goto L_994399;
L_994357: /* 994357: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99435b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99435e: lea esi, [esp + eax + 0x110] */
  esi = (uint32_t)(esp + eax + 0x110u);
L_994365: /* 994365: mov eax, edi */
  eax = edi;
/* 994367: mov ebx, esi */
  ebx = esi;
/* 994369: call 0x990440 */
  esp -= 4; W32(esp, 0x99436eu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99436e: mov ebx, eax */
  ebx = eax;
/* 994370: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994372: jne 0x994387 */
  if (!zf) goto L_994387;
L_994374: /* 994374: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994378: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994379: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99437c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99437f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994383: jl 0x994365 */
  if ((sf != of)) goto L_994365;
L_994385: /* 994385: jmp 0x994399 */
  goto L_994399;
L_994387: /* 994387: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 99438b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99438c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99438f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 994393: jl 0x9942e0 */
  if ((sf != of)) goto L_9942e0;
L_994399: /* 994399: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99439d: mov ecx, eax */
  ecx = eax;
/* 99439f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9943a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943a2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9943a6: je 0x9943b0 */
  if (zf) goto L_9943b0;
L_9943a8: /* 9943a8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943aa: je 0x994250 */
  if (zf) goto L_994250;
L_9943b0: /* 9943b0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_9943b4: /* 9943b4: lea esi, [edx + edx*2] */
  esi = (uint32_t)(edx + edx*2);
/* 9943b7: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9943ba: mov eax, 0xcf6c08 */
  eax = 0xcf6c08u;
/* 9943bf: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9943c1: lea ecx, [esi + 0xcf6bd8] */
  ecx = (uint32_t)(esi + 0xcf6bd8u);
/* 9943c7: mov edi, 2 */
  edi = 0x2u;
/* 9943cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9943d0: /* 9943d0: fld qword ptr [0xcf7178] */
  { double v = F64((uint32_t)(0xcf7178u)); FPUSH(v); }
/* 9943d6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9943d9: fadd qword ptr [ecx - 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe0u)));
/* 9943dc: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9943df: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9943e0: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 9943e3: fld qword ptr [0xcf7180] */
  { double v = F64((uint32_t)(0xcf7180u)); FPUSH(v); }
/* 9943e9: fadd qword ptr [ecx - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe8u)));
/* 9943ec: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 9943ef: fld qword ptr [0xcf7188] */
  { double v = F64((uint32_t)(0xcf7188u)); FPUSH(v); }
/* 9943f5: fadd qword ptr [ecx - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 9943f8: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9943fb: jne 0x9943d0 */
  if (!zf) goto L_9943d0;
L_9943fd: /* 9943fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994400: mov edx, dword ptr [esp + edx*4 + 0x40] */
  edx = R32((uint32_t)(esp + edx*4 + 0x40u));
/* 994404: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 99440a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99440b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99440d: lea ebx, [eax + 0x1a8] */
  ebx = (uint32_t)(eax + 0x1a8u);
/* 994413: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 994415: je 0x99441d */
  if (zf) goto L_99441d;
L_994417: /* 994417: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_99441d: /* 99441d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 994421: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 994424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 994425: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 994429: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99442a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99442e: lea edx, [edi + 0x1ac] */
  edx = (uint32_t)(edi + 0x1acu);
/* 994434: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994435: mov edx, dword ptr [edi + 0x1a0] */
  edx = R32((uint32_t)(edi + 0x1a0u));
/* 99443b: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 994440: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 994445: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 99444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99444b: mov eax, 0xcf6c00 */
  eax = 0xcf6c00u;
/* 994450: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 994452: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994453: call 0x993470 */
  esp -= 4; W32(esp, 0x994458u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 994458: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99445a: mov al, byte ptr [edi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1a4u))) & 0xffu);
/* 994460: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994463: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994465: je 0x994472 */
  if (zf) goto L_994472;
L_994467: /* 994467: cmp dword ptr [ebx], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99446a: je 0x994472 */
  if (zf) goto L_994472;
L_99446c: /* 99446c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_994472: /* 994472: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 994476: xor eax, eax */
  eax = 0;
/* 994478: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99447a: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_99447c: /* 99447c: lea ecx, [edi + 0x1c4] */
  ecx = (uint32_t)(edi + 0x1c4u);
L_994482: /* 994482: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 994489: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 99448d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 99448f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994490: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994493: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994495: jl 0x994482 */
  if ((sf != of)) goto L_994482;
L_994497: /* 994497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 994498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 994499: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99449a: mov esp, ebp */
  esp = ebp;
/* 99449c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99449d: ret  */
  esp += 4; SPILL(); return;
}

void f_994089(void) {
  LOAD_REGS();
  goto L_994089;
L_993f48: /* 993f48: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f4c: mov dword ptr [esp + 0x30], 0x10 */
  W32((uint32_t)(esp + 0x30u), 0x10u);
/* 993f54: jmp 0x993f60 */
  goto L_993f60;
L_993f56: /* 993f56: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 993f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_993f60: /* 993f60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 993f63: mov edx, dword ptr [ecx + 0x1a0] */
  edx = R32((uint32_t)(ecx + 0x1a0u));
/* 993f69: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 993f6d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 993f71: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 993f75: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993f76: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 993f78: lea edx, [edi + ecx - 1] */
  edx = (uint32_t)(edi + ecx + 0xffffffffu);
/* 993f7c: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993f7f: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 993f84: je 0x993fbc */
  if (zf) goto L_993fbc;
L_993f86: /* 993f86: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993f8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f8b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 993f8f: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 993f94: mov edx, esi */
  edx = esi;
/* 993f96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993f97: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993f9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 993f9b: lea edx, [esp + edx + 0x124] */
  edx = (uint32_t)(esp + edx + 0x124u);
/* 993fa2: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 993fa7: call 0x9904a0 */
  esp -= 4; W32(esp, 0x993facu); SPILL(); f_9904a0(); if (g_unwind) return; RELOAD();
/* 993fac: fstp qword ptr [edi*8 + 0xcf6bc0] */
  WF64((uint32_t)(edi*8 + 0xcf6bc0u), ST0); FPOP();
/* 993fb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993fb6: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 993fba: jmp 0x993fce */
  goto L_993fce;
L_993fbc: /* 993fbc: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 993fc0: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 993fc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993fc6: call 0x98fec0 */
  esp -= 4; W32(esp, 0x993fcbu); SPILL(); f_98fec0(); if (g_unwind) return; RELOAD();
/* 993fcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_993fce: /* 993fce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 993fcf: mov eax, esi */
  eax = esi;
/* 993fd1: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 993fd6: jns 0x993fdd */
  if (!sf) goto L_993fdd;
L_993fd8: /* 993fd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 993fd9: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 993fdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_993fdd: /* 993fdd: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 993fe1: mov ecx, 0 */
  ecx = 0x0u;
/* 993fe6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 993fe9: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 993fed: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 993ff5: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 993ff7: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 993ffa: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 993ffe: lea edx, [esp + eax + 0x110] */
  edx = (uint32_t)(esp + eax + 0x110u);
/* 994005: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 994009: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994010: /* 994010: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994014: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 994018: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 99401c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99401d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99401e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99401f: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 994024: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 994029: call 0x990110 */
  esp -= 4; W32(esp, 0x99402eu); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 99402e: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 994032: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994035: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994036: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994038: jl 0x994065 */
  if ((sf != of)) goto L_994065;
L_99403a: /* 99403a: mov eax, esi */
  eax = esi;
/* 99403c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99403f: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
L_994046: /* 994046: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99404a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99404e: mov ebx, edi */
  ebx = edi;
/* 994050: call 0x990440 */
  esp -= 4; W32(esp, 0x994055u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994055: mov ebx, eax */
  ebx = eax;
/* 994057: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994059: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_99405b: /* 99405b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 99405c: sub edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 99405f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994061: jge 0x994046 */
  if ((sf == of)) goto L_994046;
L_994063: /* 994063: jmp 0x994069 */
  goto L_994069;
L_994065: /* 994065: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994067: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_994069: /* 994069: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 99406d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99406f: je 0x9940ca */
  if (zf) goto L_9940ca;
L_994071: /* 994071: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 994075: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 994076: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994079: jge 0x9940ca */
  if ((sf == of)) goto L_9940ca;
L_99407b: /* 99407b: mov ecx, edi */
  ecx = edi;
/* 99407d: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994080: lea esi, [esp + ecx + 0x110] */
  esi = (uint32_t)(esp + ecx + 0x110u);
/* 994087: jmp 0x994090 */
  goto L_994090;
L_994089: /* 994089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994090: /* 994090: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994094: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 994098: mov ebx, esi */
  ebx = esi;
/* 99409a: call 0x990440 */
  esp -= 4; W32(esp, 0x99409fu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99409f: mov ebx, eax */
  ebx = eax;
/* 9940a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940a3: jne 0x9940b0 */
  if (!zf) goto L_9940b0;
L_9940a5: /* 9940a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 9940a6: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9940a9: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940ac: jl 0x994090 */
  if ((sf != of)) goto L_994090;
L_9940ae: /* 9940ae: jmp 0x9940ca */
  goto L_9940ca;
L_9940b0: /* 9940b0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940b6: je 0x9940ca */
  if (zf) goto L_9940ca;
L_9940b8: /* 9940b8: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 9940bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9940bd: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9940c0: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 9940c4: jl 0x994010 */
  if ((sf != of)) goto L_994010;
L_9940ca: /* 9940ca: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 9940ce: mov edx, eax */
  edx = eax;
/* 9940d0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9940d1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940d3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9940d7: je 0x9940e1 */
  if (zf) goto L_9940e1;
L_9940d9: /* 9940d9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9940db: je 0x993f56 */
  if (zf) goto L_993f56;
L_9940e1: /* 9940e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9940e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9940e7: jle 0x9940ff */
  if ((zf || sf != of)) goto L_9940ff;
L_9940e9: /* 9940e9: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 9940ed: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 9940f1: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9940f4: lea esi, [esp + esi + 0x110] */
  esi = (uint32_t)(esp + esi + 0x110u);
/* 9940fb: mov ecx, eax */
  ecx = eax;
/* 9940fd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_9940ff: /* 9940ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 994103: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 994107: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 99410b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99410c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 994110: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 994114: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994117: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99411a: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99411d: cmp eax, 0xcf6c30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6c30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994122: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 994126: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99412a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 99412e: jl 0x993f48 */
  if ((sf != of)) goto L_993f48;
L_994134: /* 994134: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 994138: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99413b: jne 0x994160 */
  if (!zf) goto L_994160;
L_99413d: /* 99413d: fld qword ptr [0xcf6bc0] */
  { double v = F64((uint32_t)(0xcf6bc0u)); FPUSH(v); }
/* 994143: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 99414b: fcomp qword ptr [0xcf6bc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6bc8u)));
  FPOP();
/* 994151: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994153: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994156: jnp 0x99415c */
  if (!pf) goto L_99415c;
L_994158: /* 994158: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_99415c: /* 99415c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_994160: /* 994160: xor eax, eax */
  eax = 0;
/* 994162: xor esi, esi */
  esi = 0;
L_994164: /* 994164: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994166: jne 0x9941eb */
  if (!zf) goto L_9941eb;
L_99416c: /* 99416c: lea eax, [esi + edx*2] */
  eax = (uint32_t)(esi + edx*2);
/* 99416f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 994172: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994175: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99417b: fcomp qword ptr [0xcf6fc8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fc8u)));
  FPOP();
/* 994181: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994183: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994186: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_994188: /* 994188: fld qword ptr [ecx + 0xcf6bd0] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd0u)); FPUSH(v); }
/* 99418e: fcomp qword ptr [0xcf6fe0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe0u)));
  FPOP();
/* 994194: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994196: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994199: je 0x9941eb */
  if (zf) goto L_9941eb;
L_99419b: /* 99419b: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941a1: fcomp qword ptr [0xcf6fd0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd0u)));
  FPOP();
/* 9941a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941a9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941ac: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941ae: /* 9941ae: fld qword ptr [ecx + 0xcf6bd8] */
  { double v = F64((uint32_t)(ecx + 0xcf6bd8u)); FPUSH(v); }
/* 9941b4: fcomp qword ptr [0xcf6fe8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fe8u)));
  FPOP();
/* 9941ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941bf: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941c1: /* 9941c1: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941c7: fcomp qword ptr [0xcf6fd8] */
  fpu_com(ST0, F64((uint32_t)(0xcf6fd8u)));
  FPOP();
/* 9941cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9941d2: jnp 0x9941eb */
  if (!pf) goto L_9941eb;
L_9941d4: /* 9941d4: fld qword ptr [ecx + 0xcf6be0] */
  { double v = F64((uint32_t)(ecx + 0xcf6be0u)); FPUSH(v); }
/* 9941da: fcomp qword ptr [0xcf6ff0] */
  fpu_com(ST0, F64((uint32_t)(0xcf6ff0u)));
  FPOP();
/* 9941e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9941e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9941e5: je 0x9941eb */
  if (zf) goto L_9941eb;
L_9941e7: /* 9941e7: xor eax, eax */
  eax = 0;
/* 9941e9: jmp 0x9941f0 */
  goto L_9941f0;
L_9941eb: /* 9941eb: mov eax, 1 */
  eax = 0x1u;
L_9941f0: /* 9941f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9941f1: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9941f4: jl 0x994164 */
  if ((sf != of)) goto L_994164;
L_9941fa: /* 9941fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9941fc: je 0x9943b4 */
  if (zf) goto L_9943b4;
L_994202: /* 994202: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 994206: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994208: jle 0x994220 */
  if ((zf || sf != of)) goto L_994220;
L_99420a: /* 99420a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99420e: mov eax, edx */
  eax = edx;
/* 994210: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 994213: lea esi, [esp + eax + 0x50] */
  esi = (uint32_t)(esp + eax + 0x50u);
/* 994217: lea edi, [esp + 0x110] */
  edi = (uint32_t)(esp + 0x110u);
/* 99421e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_994220: /* 994220: xor eax, eax */
  eax = 0;
/* 994222: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 994225: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994228: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99422c: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 994230: lea eax, [ecx + 0xcf6bd0] */
  eax = (uint32_t)(ecx + 0xcf6bd0u);
/* 994236: lea ecx, [esp + edx*4 + 0x40] */
  ecx = (uint32_t)(esp + edx*4 + 0x40u);
/* 99423a: mov dword ptr [esp + 0x30], 8 */
  W32((uint32_t)(esp + 0x30u), 0x8u);
/* 994242: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 994246: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 99424a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994250: /* 994250: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 994253: mov ecx, dword ptr [edx + 0x1a0] */
  ecx = R32((uint32_t)(edx + 0x1a0u));
/* 994259: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 99425d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 994261: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 994265: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 994266: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 994268: push 0xcf6c30 */
  { uint32_t v = 0xcf6c30u; esp -= 4; W32(esp, v); }
/* 99426d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99426e: mov ecx, esi */
  ecx = esi;
/* 994270: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 994273: push 0xcf6fc8 */
  { uint32_t v = 0xcf6fc8u; esp -= 4; W32(esp, v); }
/* 994278: lea edx, [esp + ecx + 0x11c] */
  edx = (uint32_t)(esp + ecx + 0x11cu);
/* 99427f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 994283: push 0xcf6cc8 */
  { uint32_t v = 0xcf6cc8u; esp -= 4; W32(esp, v); }
/* 994288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 994289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 99428a: mov eax, 0xcf6c48 */
  eax = 0xcf6c48u;
/* 99428f: call 0x990c00 */
  esp -= 4; W32(esp, 0x994294u); SPILL(); f_990c00(); if (g_unwind) return; RELOAD();
/* 994294: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 994298: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99429b: fstp qword ptr [edx*8 + 0xcf6bc0] */
  WF64((uint32_t)(edx*8 + 0xcf6bc0u), ST0); FPOP();
/* 9942a2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 9942a3: mov eax, esi */
  eax = esi;
/* 9942a5: and eax, 0x8000000f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 9942aa: jns 0x9942b1 */
  if (!sf) goto L_9942b1;
L_9942ac: /* 9942ac: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9942ad: or eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 9942b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_9942b1: /* 9942b1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 9942b5: mov ecx, 0 */
  ecx = 0x0u;
/* 9942ba: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9942bd: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9942c1: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 9942c9: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 9942cb: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9942ce: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 9942d2: lea edi, [esp + eax + 0x110] */
  edi = (uint32_t)(esp + eax + 0x110u);
/* 9942d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9942e0: /* 9942e0: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 9942e4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9942e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9942e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9942ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9942eb: mov eax, 0xcf6c30 */
  eax = 0xcf6c30u;
/* 9942f0: mov edx, 0xcf6e48 */
  edx = 0xcf6e48u;
/* 9942f5: call 0x990110 */
  esp -= 4; W32(esp, 0x9942fau); SPILL(); f_990110(); if (g_unwind) return; RELOAD();
/* 9942fa: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9942fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994301: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994302: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994304: jl 0x99433d */
  if ((sf != of)) goto L_99433d;
L_994306: /* 994306: mov ecx, esi */
  ecx = esi;
/* 994308: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99430b: lea edx, [esp + ecx + 0x110] */
  edx = (uint32_t)(esp + ecx + 0x110u);
/* 994312: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_994316: /* 994316: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 99431a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99431e: mov eax, edi */
  eax = edi;
/* 994320: call 0x990440 */
  esp -= 4; W32(esp, 0x994325u); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 994325: mov ebx, eax */
  ebx = eax;
/* 994327: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994329: jne 0x994387 */
  if (!zf) goto L_994387;
L_99432b: /* 99432b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 99432f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 994330: sub ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 994333: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994335: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 994339: jge 0x994316 */
  if ((sf == of)) goto L_994316;
L_99433b: /* 99433b: jmp 0x994341 */
  goto L_994341;
L_99433d: /* 99433d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99433f: jne 0x994387 */
  if (!zf) goto L_994387;
L_994341: /* 994341: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 994345: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994347: je 0x994399 */
  if (zf) goto L_994399;
L_994349: /* 994349: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 99434d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99434e: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994351: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994355: jge 0x994399 */
  if ((sf == of)) goto L_994399;
L_994357: /* 994357: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 99435b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99435e: lea esi, [esp + eax + 0x110] */
  esi = (uint32_t)(esp + eax + 0x110u);
L_994365: /* 994365: mov eax, edi */
  eax = edi;
/* 994367: mov ebx, esi */
  ebx = esi;
/* 994369: call 0x990440 */
  esp -= 4; W32(esp, 0x99436eu); SPILL(); f_990440(); if (g_unwind) return; RELOAD();
/* 99436e: mov ebx, eax */
  ebx = eax;
/* 994370: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994372: jne 0x994387 */
  if (!zf) goto L_994387;
L_994374: /* 994374: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 994378: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994379: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99437c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99437f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 994383: jl 0x994365 */
  if ((sf != of)) goto L_994365;
L_994385: /* 994385: jmp 0x994399 */
  goto L_994399;
L_994387: /* 994387: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 99438b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99438c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99438f: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 994393: jl 0x9942e0 */
  if ((sf != of)) goto L_9942e0;
L_994399: /* 994399: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99439d: mov ecx, eax */
  ecx = eax;
/* 99439f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 9943a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943a2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9943a6: je 0x9943b0 */
  if (zf) goto L_9943b0;
L_9943a8: /* 9943a8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9943aa: je 0x994250 */
  if (zf) goto L_994250;
L_9943b0: /* 9943b0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
L_9943b4: /* 9943b4: lea esi, [edx + edx*2] */
  esi = (uint32_t)(edx + edx*2);
/* 9943b7: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9943ba: mov eax, 0xcf6c08 */
  eax = 0xcf6c08u;
/* 9943bf: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9943c1: lea ecx, [esi + 0xcf6bd8] */
  ecx = (uint32_t)(esi + 0xcf6bd8u);
/* 9943c7: mov edi, 2 */
  edi = 0x2u;
/* 9943cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9943d0: /* 9943d0: fld qword ptr [0xcf7178] */
  { double v = F64((uint32_t)(0xcf7178u)); FPUSH(v); }
/* 9943d6: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9943d9: fadd qword ptr [ecx - 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe0u)));
/* 9943dc: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9943df: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 9943e0: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 9943e3: fld qword ptr [0xcf7180] */
  { double v = F64((uint32_t)(0xcf7180u)); FPUSH(v); }
/* 9943e9: fadd qword ptr [ecx - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xffffffe8u)));
/* 9943ec: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 9943ef: fld qword ptr [0xcf7188] */
  { double v = F64((uint32_t)(0xcf7188u)); FPUSH(v); }
/* 9943f5: fadd qword ptr [ecx - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 9943f8: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9943fb: jne 0x9943d0 */
  if (!zf) goto L_9943d0;
L_9943fd: /* 9943fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994400: mov edx, dword ptr [esp + edx*4 + 0x40] */
  edx = R32((uint32_t)(esp + edx*4 + 0x40u));
/* 994404: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 99440a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99440b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99440d: lea ebx, [eax + 0x1a8] */
  ebx = (uint32_t)(eax + 0x1a8u);
/* 994413: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 994415: je 0x99441d */
  if (zf) goto L_99441d;
L_994417: /* 994417: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_99441d: /* 99441d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 994421: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 994424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 994425: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 994429: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99442a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 99442e: lea edx, [edi + 0x1ac] */
  edx = (uint32_t)(edi + 0x1acu);
/* 994434: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994435: mov edx, dword ptr [edi + 0x1a0] */
  edx = R32((uint32_t)(edi + 0x1a0u));
/* 99443b: push 0xcf7310 */
  { uint32_t v = 0xcf7310u; esp -= 4; W32(esp, v); }
/* 994440: push 0xcf6c48 */
  { uint32_t v = 0xcf6c48u; esp -= 4; W32(esp, v); }
/* 994445: push 0xcf6e48 */
  { uint32_t v = 0xcf6e48u; esp -= 4; W32(esp, v); }
/* 99444a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99444b: mov eax, 0xcf6c00 */
  eax = 0xcf6c00u;
/* 994450: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 994452: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 994453: call 0x993470 */
  esp -= 4; W32(esp, 0x994458u); SPILL(); f_993470(); if (g_unwind) return; RELOAD();
/* 994458: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99445a: mov al, byte ptr [edi + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1a4u))) & 0xffu);
/* 994460: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 994463: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994465: je 0x994472 */
  if (zf) goto L_994472;
L_994467: /* 994467: cmp dword ptr [ebx], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99446a: je 0x994472 */
  if (zf) goto L_994472;
L_99446c: /* 99446c: mov dword ptr [ebx], 4 */
  W32((uint32_t)(ebx), 0x4u);
L_994472: /* 994472: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 994476: xor eax, eax */
  eax = 0;
/* 994478: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99447a: jle 0x994497 */
  if ((zf || sf != of)) goto L_994497;
L_99447c: /* 99447c: lea ecx, [edi + 0x1c4] */
  ecx = (uint32_t)(edi + 0x1c4u);
L_994482: /* 994482: mov esi, dword ptr [esp + eax*4 + 0xd0] */
  esi = R32((uint32_t)(esp + eax*4 + 0xd0u));
/* 994489: mov esi, dword ptr [esp + esi*4 + 0x50] */
  esi = R32((uint32_t)(esp + esi*4 + 0x50u));
/* 99448d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 99448f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994490: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994493: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994495: jl 0x994482 */
  if ((sf != of)) goto L_994482;
L_994497: /* 994497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 994498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 994499: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99449a: mov esp, ebp */
  esp = ebp;
/* 99449c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99449d: ret  */
  esp += 4; SPILL(); return;
}

void f_9944a0(void) {
  LOAD_REGS();
L_9944a0: /* 9944a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9944a1: mov ebp, esp */
  ebp = esp;
/* 9944a3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9944a6: sub esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9944ac: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 9944af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9944b0: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 9944b3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9944b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9944b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9944b7: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 9944ba: mov dword ptr [esp + 0x6c], 0x40 */
  W32((uint32_t)(esp + 0x6cu), 0x40u);
/* 9944c2: jne 0x9944d1 */
  if (!zf) goto L_9944d1;
L_9944c4: /* 9944c4: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9944ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9944cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9944cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9944cd: mov esp, ebp */
  esp = ebp;
/* 9944cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9944d0: ret  */
  esp += 4; SPILL(); return;
L_9944d1: /* 9944d1: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 9944d4: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 9944d7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9944da: mov edx, 1 */
  edx = 0x1u;
/* 9944df: fstp qword ptr [0xcf7448] */
  WF64((uint32_t)(0xcf7448u), ST0); FPOP();
/* 9944e5: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9944eb: fdiv qword ptr [0xcf7448] */
  ST0 = ST0 / (F64((uint32_t)(0xcf7448u)));
/* 9944f1: fstp qword ptr [0xcf7440] */
  WF64((uint32_t)(0xcf7440u), ST0); FPOP();
/* 9944f7: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 9944f9: fst qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0);
/* 9944ff: fst qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0);
/* 994505: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 99450b: jl 0x994660 */
  if ((sf != of)) goto L_994660;
L_994511: /* 994511: mov esi, 4 */
  esi = 0x4u;
/* 994516: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_994519: /* 994519: fld qword ptr [0xcf7430] */
  { double v = F64((uint32_t)(0xcf7430u)); FPUSH(v); }
/* 99451f: fcomp qword ptr [ecx - 0x10] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xfffffff0u)));
  FPOP();
/* 994522: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994524: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994527: jne 0x99453a */
  if (!zf) goto L_99453a;
L_994529: /* 994529: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 99452c: mov edi, dword ptr [ecx - 0xc] */
  edi = R32((uint32_t)(ecx + 0xfffffff4u));
/* 99452f: mov dword ptr [0xcf7430], eax */
  W32((uint32_t)(0xcf7430u), eax);
/* 994534: mov dword ptr [0xcf7434], edi */
  W32((uint32_t)(0xcf7434u), edi);
L_99453a: /* 99453a: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 994540: fcomp qword ptr [ecx - 0x10] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xfffffff0u)));
  FPOP();
/* 994543: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994545: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994548: jp 0x99455b */
  if (pf) goto L_99455b;
L_99454a: /* 99454a: mov eax, dword ptr [ecx - 0x10] */
  eax = R32((uint32_t)(ecx + 0xfffffff0u));
/* 99454d: mov edi, dword ptr [ecx - 0xc] */
  edi = R32((uint32_t)(ecx + 0xfffffff4u));
/* 994550: mov dword ptr [0xcf7438], eax */
  W32((uint32_t)(0xcf7438u), eax);
/* 994555: mov dword ptr [0xcf743c], edi */
  W32((uint32_t)(0xcf743cu), edi);
L_99455b: /* 99455b: fadd qword ptr [ecx - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 99455e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 994561: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 994567: fld qword ptr [0xcf7430] */
  { double v = F64((uint32_t)(0xcf7430u)); FPUSH(v); }
/* 99456d: fcomp qword ptr [ecx - 8] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xfffffff8u)));
  FPOP();
/* 994570: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994572: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994575: jne 0x994588 */
  if (!zf) goto L_994588;
L_994577: /* 994577: mov eax, dword ptr [ecx - 8] */
  eax = R32((uint32_t)(ecx + 0xfffffff8u));
/* 99457a: mov edi, dword ptr [ecx - 4] */
  edi = R32((uint32_t)(ecx + 0xfffffffcu));
/* 99457d: mov dword ptr [0xcf7430], eax */
  W32((uint32_t)(0xcf7430u), eax);
/* 994582: mov dword ptr [0xcf7434], edi */
  W32((uint32_t)(0xcf7434u), edi);
L_994588: /* 994588: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 99458e: fcomp qword ptr [ecx - 8] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xfffffff8u)));
  FPOP();
/* 994591: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994593: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994596: jp 0x9945a9 */
  if (pf) goto L_9945a9;
L_994598: /* 994598: mov eax, dword ptr [ecx - 8] */
  eax = R32((uint32_t)(ecx + 0xfffffff8u));
/* 99459b: mov edi, dword ptr [ecx - 4] */
  edi = R32((uint32_t)(ecx + 0xfffffffcu));
/* 99459e: mov dword ptr [0xcf7438], eax */
  W32((uint32_t)(0xcf7438u), eax);
/* 9945a3: mov dword ptr [0xcf743c], edi */
  W32((uint32_t)(0xcf743cu), edi);
L_9945a9: /* 9945a9: fadd qword ptr [ecx - 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 9945ac: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9945af: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9945b5: fld qword ptr [0xcf7430] */
  { double v = F64((uint32_t)(0xcf7430u)); FPUSH(v); }
/* 9945bb: fcomp qword ptr [ecx] */
  fpu_com(ST0, F64((uint32_t)(ecx)));
  FPOP();
/* 9945bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9945bf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9945c2: jne 0x9945d4 */
  if (!zf) goto L_9945d4;
L_9945c4: /* 9945c4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9945c6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 9945c9: mov dword ptr [0xcf7430], eax */
  W32((uint32_t)(0xcf7430u), eax);
/* 9945ce: mov dword ptr [0xcf7434], edi */
  W32((uint32_t)(0xcf7434u), edi);
L_9945d4: /* 9945d4: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 9945da: fcomp qword ptr [ecx] */
  fpu_com(ST0, F64((uint32_t)(ecx)));
  FPOP();
/* 9945dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9945de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9945e1: jp 0x9945f3 */
  if (pf) goto L_9945f3;
L_9945e3: /* 9945e3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 9945e5: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 9945e8: mov dword ptr [0xcf7438], eax */
  W32((uint32_t)(0xcf7438u), eax);
/* 9945ed: mov dword ptr [0xcf743c], edi */
  W32((uint32_t)(0xcf743cu), edi);
L_9945f3: /* 9945f3: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9945f5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9945f8: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 9945fe: fld qword ptr [0xcf7430] */
  { double v = F64((uint32_t)(0xcf7430u)); FPUSH(v); }
/* 994604: fcomp qword ptr [ecx + 8] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 994607: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994609: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99460c: jne 0x99461f */
  if (!zf) goto L_99461f;
L_99460e: /* 99460e: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 994611: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 994614: mov dword ptr [0xcf7430], eax */
  W32((uint32_t)(0xcf7430u), eax);
/* 994619: mov dword ptr [0xcf7434], edi */
  W32((uint32_t)(0xcf7434u), edi);
L_99461f: /* 99461f: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 994625: fcomp qword ptr [ecx + 8] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 994628: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99462a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99462d: jp 0x994640 */
  if (pf) goto L_994640;
L_99462f: /* 99462f: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 994632: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 994635: mov dword ptr [0xcf7438], eax */
  W32((uint32_t)(0xcf7438u), eax);
/* 99463a: mov dword ptr [0xcf743c], edi */
  W32((uint32_t)(0xcf743cu), edi);
L_994640: /* 994640: fadd qword ptr [ecx + 8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + 0x8u)));
/* 994643: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 994646: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 994649: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99464c: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99464f: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994651: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 994657: jl 0x994519 */
  if ((sf != of)) goto L_994519;
L_99465d: /* 99465d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_994660: /* 994660: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994662: jge 0x9946a4 */
  if ((sf == of)) goto L_9946a4;
L_994664: /* 994664: fld qword ptr [0xcf7430] */
  { double v = F64((uint32_t)(0xcf7430u)); FPUSH(v); }
/* 99466a: fcomp qword ptr [ecx + edx*8] */
  fpu_com(ST0, F64((uint32_t)(ecx + edx*8)));
  FPOP();
/* 99466d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99466f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994672: jne 0x99467d */
  if (!zf) goto L_99467d;
L_994674: /* 994674: fld qword ptr [ecx + edx*8] */
  { double v = F64((uint32_t)(ecx + edx*8)); FPUSH(v); }
/* 994677: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
L_99467d: /* 99467d: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 994683: fcomp qword ptr [ecx + edx*8] */
  fpu_com(ST0, F64((uint32_t)(ecx + edx*8)));
  FPOP();
/* 994686: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994688: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99468b: jp 0x994696 */
  if (pf) goto L_994696;
L_99468d: /* 99468d: fld qword ptr [ecx + edx*8] */
  { double v = F64((uint32_t)(ecx + edx*8)); FPUSH(v); }
/* 994690: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
L_994696: /* 994696: fadd qword ptr [ecx + edx*8] */
  ST0 = ST0 + (F64((uint32_t)(ecx + edx*8)));
/* 994699: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99469a: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99469c: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 9946a2: jl 0x994664 */
  if ((sf != of)) goto L_994664;
L_9946a4: /* 9946a4: fmul qword ptr [0xcf7440] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7440u)));
/* 9946aa: xor eax, eax */
  eax = 0;
/* 9946ac: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9946ae: fstp qword ptr [0xcf7428] */
  WF64((uint32_t)(0xcf7428u), ST0); FPOP();
/* 9946b4: jle 0x9946d9 */
  if ((zf || sf != of)) goto L_9946d9;
L_9946b6: /* 9946b6: sub ecx, 0xcf73a8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf73a8u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 9946bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9946c0: /* 9946c0: fld qword ptr [ecx + eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(ecx + eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 9946c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9946c8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9946ca: fsub qword ptr [0xcf7428] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7428u)));
/* 9946d0: fstp qword ptr [eax*8 + 0xcf73a0] */
  WF64((uint32_t)(eax*8 + 0xcf73a0u), ST0); FPOP();
/* 9946d7: jl 0x9946c0 */
  if ((sf != of)) goto L_9946c0;
L_9946d9: /* 9946d9: fld qword ptr [0xcf7430] */
  { double v = F64((uint32_t)(0xcf7430u)); FPUSH(v); }
/* 9946df: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9946e2: fsub qword ptr [0xcf7428] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7428u)));
/* 9946e8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 9946e9: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 9946ed: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
/* 9946f3: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 9946f9: fsub qword ptr [0xcf7428] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7428u)));
/* 9946ff: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
L_994705: /* 994705: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994709: xor edx, edx */
  edx = 0;
/* 99470b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99470d: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 994715: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 994719: jle 0x994764 */
  if ((zf || sf != of)) goto L_994764;
L_99471b: /* 99471b: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 994721: mov esi, eax */
  esi = eax;
/* 994723: fsub qword ptr [0xcf7430] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7430u)));
/* 994729: mov ecx, esi */
  ecx = esi;
/* 99472b: fidiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x3cu)));
/* 99472f: xor eax, eax */
  eax = 0;
/* 994731: lea edi, [esp + 0x90] */
  edi = (uint32_t)(esp + 0x90u);
/* 994738: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99473a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994740: /* 994740: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 994744: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 994745: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994747: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 99474b: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 994751: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994753: fadd qword ptr [0xcf7430] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7430u)));
/* 994759: fstp qword ptr [edx*8 + 0xcf7368] */
  WF64((uint32_t)(edx*8 + 0xcf7368u), ST0); FPOP();
/* 994760: jl 0x994740 */
  if ((sf != of)) goto L_994740;
L_994762: /* 994762: fstp st(0) */
  STI(0) = ST0; FPOP();
L_994764: /* 994764: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994767: xor edx, edx */
  edx = 0;
/* 994769: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99476b: mov dword ptr [esp + eax*4 + 0x8c], edx */
  W32((uint32_t)(esp + eax*4 + 0x8cu), edx);
/* 994772: jle 0x9947d7 */
  if ((zf || sf != of)) goto L_9947d7;
L_994774: /* 994774: mov esi, 0xcf73a8 */
  esi = 0xcf73a8u;
/* 994779: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994780: /* 994780: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 994784: xor ecx, ecx */
  ecx = 0;
/* 994786: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994788: jle 0x9947a5 */
  if ((zf || sf != of)) goto L_9947a5;
L_99478a: /* 99478a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994790: /* 994790: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 994792: fcomp qword ptr [ecx*8 + 0xcf7370] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf7370u)));
  FPOP();
/* 994799: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99479b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99479e: jnp 0x9947a5 */
  if (!pf) goto L_9947a5;
L_9947a0: /* 9947a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9947a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9947a3: jl 0x994790 */
  if ((sf != of)) goto L_994790;
L_9947a5: /* 9947a5: mov eax, dword ptr [esp + ecx*4 + 0x90] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 9947ac: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 9947af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9947b0: mov dword ptr [esp + ecx*4 + 0x90], eax */
  W32((uint32_t)(esp + ecx*4 + 0x90u), eax);
/* 9947b7: xor eax, eax */
  eax = 0;
/* 9947b9: cmp dword ptr [edi + edx*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9947bc: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9947c0: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9947c3: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9947c6: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 9947c8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9947cb: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 9947ce: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9947cf: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9947d1: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9947d5: jl 0x994780 */
  if ((sf != of)) goto L_994780;
L_9947d7: /* 9947d7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9947da: xor esi, esi */
  esi = 0;
/* 9947dc: xor eax, eax */
  eax = 0;
/* 9947de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9947e0: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 9947e4: jle 0x994812 */
  if ((zf || sf != of)) goto L_994812;
L_9947e6: /* 9947e6: jmp 0x9947f0 */
  goto L_9947f0;
L_9947f0: /* 9947f0: mov edx, dword ptr [esp + eax*4 + 0x90] */
  edx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 9947f7: xor ecx, ecx */
  ecx = 0;
/* 9947f9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9947fb: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9947fe: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 994800: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994801: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994803: jl 0x9947f0 */
  if ((sf != of)) goto L_9947f0;
L_994805: /* 994805: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994808: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 99480c: je 0x995093 */
  if (zf) goto L_995093;
L_994812: /* 994812: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 994818: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 99481b: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 994821: xor eax, eax */
  eax = 0;
/* 994823: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994826: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 99482c: fst qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0);
/* 994832: jl 0x9948c2 */
  if ((sf != of)) goto L_9948c2;
L_994838: /* 994838: mov edx, 3 */
  edx = 0x3u;
/* 99483d: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
L_994840: /* 994840: fild dword ptr [ecx - 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 994843: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 994846: fild dword ptr [ecx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 994849: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99484c: fild dword ptr [ecx] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx)); FPUSH(v); }
/* 99484e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994851: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994853: fild dword ptr [ecx - 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 994856: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 99485a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99485c: fmul qword ptr [eax*8 + 0xcf7388] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7388u)));
/* 994863: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994865: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994867: fmul qword ptr [eax*8 + 0xcf7390] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7390u)));
/* 99486e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994870: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 994872: fmul qword ptr [eax*8 + 0xcf7398] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7398u)));
/* 994879: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 99487b: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99487f: fmul qword ptr [eax*8 + 0xcf73a0] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a0u)));
/* 994886: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994888: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99488a: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 99488c: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 99488e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 994890: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 994892: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* 994896: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 994898: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99489a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99489c: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 99489e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9948a0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9948a2: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948a6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9948a8: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948aa: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9948ae: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 9948b2: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948b6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948b8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948ba: jl 0x994840 */
  if ((sf != of)) goto L_994840;
L_9948bc: /* 9948bc: fst qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0);
L_9948c2: /* 9948c2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9948c4: jge 0x9948ed */
  if ((sf == of)) goto L_9948ed;
L_9948c6: /* 9948c6: fild dword ptr [esi + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 9948c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9948ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9948cc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948ce: fmul qword ptr [eax*8 + 0xcf73a0] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a0u)));
/* 9948d5: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9948d7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948d9: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 9948db: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948dd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9948df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 9948e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948e3: jl 0x9948c6 */
  if ((sf != of)) goto L_9948c6;
L_9948e5: /* 9948e5: fstp qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0); FPOP();
/* 9948eb: jmp 0x9948ef */
  goto L_9948ef;
L_9948ed: /* 9948ed: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9948ef: /* 9948ef: fmul qword ptr [0xcf7440] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7440u)));
/* 9948f5: fst qword ptr [0xcf7360] */
  WF64((uint32_t)(0xcf7360u), ST0);
/* 9948fb: fmul qword ptr [0xcf7360] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7360u)));
/* 994901: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994907: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 994909: fstp qword ptr [0xcf7358] */
  WF64((uint32_t)(0xcf7358u), ST0); FPOP();
/* 99490f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994911: fld qword ptr [0xcf7360] */
  { double v = F64((uint32_t)(0xcf7360u)); FPUSH(v); }
/* 994917: fchs  */
  ST0 = -ST0;
/* 994919: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 99491c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 994922: fst qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0);
/* 994929: fsub qword ptr [0xcf7360] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7360u)));
/* 99492f: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994935: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994937: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994939: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 99493f: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994945: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994947: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 994949: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 99494b: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 994951: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 994955: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994957: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 99495d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99495f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994961: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 994965: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 99496c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99496e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994970: fstp qword ptr [esp + 0xb0] */
  WF64((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 994977: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994979: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 994980: fmul qword ptr [0xcf7358] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7358u)));
/* 994986: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 99498a: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 99498e: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 994992: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994998: fmul qword ptr [0xcf7428] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7428u)));
/* 99499e: fchs  */
  ST0 = -ST0;
/* 9949a0: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9949a6: fsub qword ptr [0xcf7428] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7428u)));
/* 9949ac: fst qword ptr [esp + 0xc8] */
  WF64((uint32_t)(esp + 0xc8u), ST0);
/* 9949b3: fmul qword ptr [0xcf7358] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7358u)));
/* 9949b9: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 9949bf: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9949c1: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 9949c8: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 9949ce: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9949d0: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9949d4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9949d8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9949da: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9949dc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9949e0: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 9949e4: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 9949e8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9949ec: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9949ee: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9949f0: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9949f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9949f6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9949f8: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 9949fc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9949fe: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 994a02: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 994a06: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994a08: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994a0c: fabs  */
  ST0 = fabs(ST0);
/* 994a0e: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* 994a12: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994a16: fabs  */
  ST0 = fabs(ST0);
/* 994a18: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994a1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994a1e: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994a24: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994a28: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994a2c: mov ecx, dword ptr [0xcf7430] */
  ecx = R32((uint32_t)(0xcf7430u));
/* 994a32: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 994a36: mov edx, dword ptr [0xcf7434] */
  edx = R32((uint32_t)(0xcf7434u));
/* 994a3c: mov eax, dword ptr [0xcf7438] */
  eax = R32((uint32_t)(0xcf7438u));
/* 994a41: mov dword ptr [0xcf7348], ecx */
  W32((uint32_t)(0xcf7348u), ecx);
/* 994a47: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994a4b: mov ecx, dword ptr [0xcf743c] */
  ecx = R32((uint32_t)(0xcf743cu));
/* 994a51: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994a55: mov dword ptr [0xcf734c], edx */
  W32((uint32_t)(0xcf734cu), edx);
/* 994a5b: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 994a5f: mov dword ptr [0xcf7350], eax */
  W32((uint32_t)(0xcf7350u), eax);
/* 994a64: mov dword ptr [0xcf7354], ecx */
  W32((uint32_t)(0xcf7354u), ecx);
/* 994a6a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994a6e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994a70: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994a72: fabs  */
  ST0 = fabs(ST0);
/* 994a74: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 994a76: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 994a7a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994a7c: fabs  */
  ST0 = fabs(ST0);
/* 994a7e: fadd qword ptr [esp + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x58u)));
/* 994a82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994a84: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994a8a: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 994a8e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994a90: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994a92: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994a96: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994a9a: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994a9e: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994aa2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994aa4: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 994aa8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aaa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aac: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994ab0: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 994ab4: fabs  */
  ST0 = fabs(ST0);
/* 994ab6: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* 994aba: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994abe: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 994ac2: fabs  */
  ST0 = fabs(ST0);
/* 994ac4: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994ac8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994aca: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994ad0: fst qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0);
/* 994ad4: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 994ad8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994adc: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994ae0: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 994ae2: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994ae6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994ae8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 994aea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aec: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994af2: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994af6: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994afa: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994b00: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994b02: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994b04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994b06: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 994b0c: fmul qword ptr [0xcf7368] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7368u)));
/* 994b12: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994b16: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 994b18: fstp qword ptr [0xcf7340] */
  WF64((uint32_t)(0xcf7340u), ST0); FPOP();
/* 994b1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994b20: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994b26: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994b2a: fstp qword ptr [0xcf7338] */
  WF64((uint32_t)(0xcf7338u), ST0); FPOP();
/* 994b30: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 994b36: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 994b3a: fdiv qword ptr [esp + 0x40] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x40u)));
/* 994b3e: mov edx, eax */
  edx = eax;
/* 994b40: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 994b41: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994b43: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 994b47: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 994b4d: fdiv qword ptr [0xcf7358] */
  ST0 = ST0 / (F64((uint32_t)(0xcf7358u)));
/* 994b53: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994b55: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* 994b59: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 994b60: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994b62: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
/* 994b68: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 994b6a: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 994b6e: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* 994b72: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994b74: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
/* 994b7a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994b7c: je 0x995093 */
  if (zf) goto L_995093;
L_994b82: /* 994b82: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 994b86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994b88: je 0x994705 */
  if (zf) goto L_994705;
L_994b8e: /* 994b8e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994b93: jle 0x994ba3 */
  if ((zf || sf != of)) goto L_994ba3;
L_994b95: /* 994b95: mov ecx, eax */
  ecx = eax;
/* 994b97: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 994b9a: lea edi, [esp + 0xd0] */
  edi = (uint32_t)(esp + 0xd0u);
/* 994ba1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_994ba3: /* 994ba3: xor ecx, ecx */
  ecx = 0;
/* 994ba5: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994ba8: jl 0x994d57 */
  if ((sf != of)) goto L_994d57;
L_994bae: /* 994bae: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 994bb1: mov edx, 2 */
  edx = 0x2u;
/* 994bb6: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_994bb9: /* 994bb9: mov esi, dword ptr [ebx - 8] */
  esi = R32((uint32_t)(ebx + 0xfffffff8u));
/* 994bbc: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994bc3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994bc6: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994bcd: jne 0x994bda */
  if (!zf) goto L_994bda;
L_994bcf: /* 994bcf: mov dword ptr [esp + esi*4 + 0xf0], ecx */
  W32((uint32_t)(esp + esi*4 + 0xf0u), ecx);
/* 994bd6: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 994bd8: jmp 0x994c16 */
  goto L_994c16;
L_994bda: /* 994bda: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994be1: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994be8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994bea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994bed: jne 0x994bf1 */
  if (!zf) goto L_994bf1;
L_994bef: /* 994bef: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_994bf1: /* 994bf1: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994bf8: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994bff: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994c06: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994c0d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c0f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994c12: jp 0x994c16 */
  if (pf) goto L_994c16;
L_994c14: /* 994c14: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_994c16: /* 994c16: mov esi, dword ptr [ebx - 4] */
  esi = R32((uint32_t)(ebx + 0xfffffffcu));
/* 994c19: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994c20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994c23: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994c2a: jne 0x994c3a */
  if (!zf) goto L_994c3a;
L_994c2c: /* 994c2c: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c2f: mov dword ptr [esp + esi*4 + 0xf0], eax */
  W32((uint32_t)(esp + esi*4 + 0xf0u), eax);
/* 994c36: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 994c38: jmp 0x994c7c */
  goto L_994c7c;
L_994c3a: /* 994c3a: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994c41: fcomp qword ptr [ecx*8 + 0xcf73b0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b0u)));
  FPOP();
/* 994c48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c4a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994c4d: jne 0x994c54 */
  if (!zf) goto L_994c54;
L_994c4f: /* 994c4f: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c52: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_994c54: /* 994c54: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994c5b: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994c62: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994c69: fcomp qword ptr [ecx*8 + 0xcf73b0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b0u)));
  FPOP();
/* 994c70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994c75: jp 0x994c7c */
  if (pf) goto L_994c7c;
L_994c77: /* 994c77: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c7a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_994c7c: /* 994c7c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 994c7e: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994c85: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994c88: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994c8f: jne 0x994c9c */
  if (!zf) goto L_994c9c;
L_994c91: /* 994c91: mov dword ptr [esp + esi*4 + 0xf0], edx */
  W32((uint32_t)(esp + esi*4 + 0xf0u), edx);
/* 994c98: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 994c9a: jmp 0x994cd8 */
  goto L_994cd8;
L_994c9c: /* 994c9c: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994ca3: fcomp qword ptr [ecx*8 + 0xcf73b8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b8u)));
  FPOP();
/* 994caa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994cac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994caf: jne 0x994cb3 */
  if (!zf) goto L_994cb3;
L_994cb1: /* 994cb1: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_994cb3: /* 994cb3: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994cba: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994cc1: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994cc8: fcomp qword ptr [ecx*8 + 0xcf73b8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b8u)));
  FPOP();
/* 994ccf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994cd1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994cd4: jp 0x994cd8 */
  if (pf) goto L_994cd8;
L_994cd6: /* 994cd6: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_994cd8: /* 994cd8: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 994cdb: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994ce2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994ce5: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994cec: jne 0x994cfc */
  if (!zf) goto L_994cfc;
L_994cee: /* 994cee: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994cf1: mov dword ptr [esp + esi*4 + 0xf0], eax */
  W32((uint32_t)(esp + esi*4 + 0xf0u), eax);
/* 994cf8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 994cfa: jmp 0x994d3e */
  goto L_994d3e;
L_994cfc: /* 994cfc: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d03: fcomp qword ptr [ecx*8 + 0xcf73c0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73c0u)));
  FPOP();
/* 994d0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d0c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994d0f: jne 0x994d16 */
  if (!zf) goto L_994d16;
L_994d11: /* 994d11: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d14: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_994d16: /* 994d16: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994d1d: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d24: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994d2b: fcomp qword ptr [ecx*8 + 0xcf73c0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73c0u)));
  FPOP();
/* 994d32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d34: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994d37: jp 0x994d3e */
  if (pf) goto L_994d3e;
L_994d39: /* 994d39: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d3c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_994d3e: /* 994d3e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 994d41: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 994d44: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d47: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994d4a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 994d4d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994d4f: jl 0x994bb9 */
  if ((sf != of)) goto L_994bb9;
L_994d55: /* 994d55: jmp 0x994d5a */
  goto L_994d5a;
L_994d57: /* 994d57: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_994d5a: /* 994d5a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994d5c: jge 0x994dc3 */
  if ((sf == of)) goto L_994dc3;
L_994d5e: /* 994d5e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_994d61: /* 994d61: mov edx, dword ptr [ebx + ecx*4] */
  edx = R32((uint32_t)(ebx + ecx*4));
/* 994d64: mov eax, dword ptr [esp + edx*4 + 0xd0] */
  eax = R32((uint32_t)(esp + edx*4 + 0xd0u));
/* 994d6b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994d6e: lea esi, [esp + edx*4 + 0xd0] */
  esi = (uint32_t)(esp + edx*4 + 0xd0u);
/* 994d75: jne 0x994d82 */
  if (!zf) goto L_994d82;
L_994d77: /* 994d77: mov dword ptr [esp + edx*4 + 0xf0], ecx */
  W32((uint32_t)(esp + edx*4 + 0xf0u), ecx);
/* 994d7e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 994d80: jmp 0x994dbe */
  goto L_994dbe;
L_994d82: /* 994d82: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d89: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994d90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994d95: jne 0x994d99 */
  if (!zf) goto L_994d99;
L_994d97: /* 994d97: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_994d99: /* 994d99: mov eax, dword ptr [esp + edx*4 + 0xf0] */
  eax = R32((uint32_t)(esp + edx*4 + 0xf0u));
/* 994da0: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994da7: lea edx, [esp + edx*4 + 0xf0] */
  edx = (uint32_t)(esp + edx*4 + 0xf0u);
/* 994dae: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994db5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994db7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994dba: jp 0x994dbe */
  if (pf) goto L_994dbe;
L_994dbc: /* 994dbc: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_994dbe: /* 994dbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 994dbf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994dc1: jl 0x994d61 */
  if ((sf != of)) goto L_994d61;
L_994dc3: /* 994dc3: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994dc9: xor edx, edx */
  edx = 0;
/* 994dcb: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 994dd1: fstp qword ptr [esp + 0x110] */
  WF64((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 994dd8: jmp 0x994de0 */
  goto L_994de0;
L_994de0: /* 994de0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994de2: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 994dea: mov dword ptr [esp + 0x7c], 0x3ff00000 */
  W32((uint32_t)(esp + 0x7cu), 0x3ff00000u);
/* 994df2: je 0x994dfc */
  if (zf) goto L_994dfc;
L_994df4: /* 994df4: mov dword ptr [esp + 0x7c], 0xbff00000 */
  W32((uint32_t)(esp + 0x7cu), 0xbff00000u);
L_994dfc: /* 994dfc: fld qword ptr [0xcf7440] */
  { double v = F64((uint32_t)(0xcf7440u)); FPUSH(v); }
/* 994e02: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994e06: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e0a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994e0c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e0e: mov ecx, edx */
  ecx = edx;
/* 994e10: fadd qword ptr [0xcf7360] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7360u)));
/* 994e16: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 994e1a: fstp qword ptr [esp + 0xb8] */
  WF64((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 994e21: fld qword ptr [0xcf7360] */
  { double v = F64((uint32_t)(0xcf7360u)); FPUSH(v); }
/* 994e27: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e2b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 994e2d: fsubr qword ptr [esp + 0x110] */
  ST0 = (F64((uint32_t)(esp + 0x110u))) - ST0;
/* 994e34: fsub qword ptr [0xcf7440] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7440u)));
/* 994e3a: fstp qword ptr [esp + 0x118] */
  WF64((uint32_t)(esp + 0x118u), ST0); FPOP();
/* 994e41: jge 0x995089 */
  if ((sf == of)) goto L_995089;
L_994e47: /* 994e47: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 994e4a: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 994e4e: mov edi, edi */
  edi = edi;
L_994e50: /* 994e50: mov eax, dword ptr [esp + ecx*4 + 0x90] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 994e57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994e59: je 0x995078 */
  if (zf) goto L_995078;
L_994e5f: /* 994e5f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e62: jg 0x994e6d */
  if ((!zf && sf == of)) goto L_994e6d;
L_994e64: /* 994e64: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e67: jle 0x995078 */
  if ((zf || sf != of)) goto L_995078;
L_994e6d: /* 994e6d: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 994e71: lea eax, [edx*8] */
  eax = (uint32_t)(edx*8);
/* 994e78: mov ebx, ecx */
  ebx = ecx;
/* 994e7a: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 994e7c: mov eax, dword ptr [esp + ebx*4 + 0xf0] */
  eax = R32((uint32_t)(esp + ebx*4 + 0xf0u));
/* 994e83: fmul qword ptr [eax*8 + 0xcf73a8] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a8u)));
/* 994e8a: fadd qword ptr [0xcf7368] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7368u)));
/* 994e90: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 994e94: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994e98: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e9c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 994e9e: fadd qword ptr [esp + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x118u)));
/* 994ea5: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994ea9: fld qword ptr [esp + 0xb8] */
  { double v = F64((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 994eb0: fchs  */
  ST0 = -ST0;
/* 994eb2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 994eb6: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 994ebd: fsub qword ptr [esp + 0xb8] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0xb8u)));
/* 994ec4: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 994ec8: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 994ecc: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994ed0: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994ed6: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994eda: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994ede: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994ee2: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994ee8: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994eec: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994ef0: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994ef4: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994efa: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994efe: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 994f05: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f07: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 994f0b: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 994f12: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f16: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f1a: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994f1e: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 994f22: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994f26: fmul qword ptr [0xcf7428] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7428u)));
/* 994f2c: fchs  */
  ST0 = -ST0;
/* 994f2e: fld qword ptr [esp + 0xc8] */
  { double v = F64((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 994f35: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994f39: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 994f3d: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 994f41: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994f45: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 994f49: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994f4d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 994f4f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994f51: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994f55: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994f57: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994f59: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994f5d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994f5f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 994f61: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 994f65: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 994f67: fstp qword ptr [esp + 0xc0] */
  WF64((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 994f6e: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 994f72: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f74: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994f78: fabs  */
  ST0 = fabs(ST0);
/* 994f7a: fsubr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) - ST0;
/* 994f7e: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994f82: fabs  */
  ST0 = fabs(ST0);
/* 994f84: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 994f88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994f8a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994f90: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f92: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994f96: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f9a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994f9e: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994fa2: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994fa6: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994faa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994fac: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994fae: fabs  */
  ST0 = fabs(ST0);
/* 994fb0: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 994fb2: fld qword ptr [esp + 0xc0] */
  { double v = F64((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 994fb9: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994fbb: fabs  */
  ST0 = fabs(ST0);
/* 994fbd: fadd qword ptr [esp + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0xc0u)));
/* 994fc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994fc6: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994fcc: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994fd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fd4: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994fd8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994fda: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 994fdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fde: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994fe2: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 994fe9: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994fed: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994ff1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994ff3: fabs  */
  ST0 = fabs(ST0);
/* 994ff5: fsubr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) - ST0;
/* 994ff9: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994ffd: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994fff: fabs  */
  ST0 = fabs(ST0);
/* 995001: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 995005: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995007: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99500d: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 995011: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995013: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 995017: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 99501b: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99501f: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 995023: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 995027: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 99502b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99502d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99502f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995031: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 995037: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 995039: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99503b: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 99503f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995041: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 995045: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 995049: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 99504d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99504f: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 995051: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995053: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 995057: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 99505b: fst qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0);
/* 99505f: fmul qword ptr [0xcf7340] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7340u)));
/* 995065: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 995067: fmul qword ptr [0xcf7338] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7338u)));
/* 99506d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99506f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995071: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995074: jnp 0x9950d4 */
  if (!pf) goto L_9950d4;
L_995076: /* 995076: fstp st(0) */
  STI(0) = ST0; FPOP();
L_995078: /* 995078: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 995079: lea eax, [edx + esi - 1] */
  eax = (uint32_t)(edx + esi + 0xffffffffu);
/* 99507d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99507f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 995083: jl 0x994e50 */
  if ((sf != of)) goto L_994e50;
L_995089: /* 995089: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99508a: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99508d: jl 0x994de0 */
  if ((sf != of)) goto L_994de0;
L_995093: /* 995093: lea edi, [esp + 0x90] */
  edi = (uint32_t)(esp + 0x90u);
/* 99509a: mov esi, 0xcf7430 */
  esi = 0xcf7430u;
/* 99509f: nop  */
L_9950a0: /* 9950a0: fld qword ptr [0xcf7428] */
  { double v = F64((uint32_t)(0xcf7428u)); FPUSH(v); }
/* 9950a6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9950a9: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 9950ab: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9950b1: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 9950b7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9950ba: call 0x99cf1e */
  esp -= 4; W32(esp, 0x9950bfu); SPILL(); hle_floor(); RELOAD();
/* 9950bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9950c2: call 0x99c958 */
  esp -= 4; W32(esp, 0x9950c7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9950c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9950c9: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9950cb: jge 0x99513c */
  if ((sf == of)) goto L_99513c;
L_9950cd: /* 9950cd: xor eax, eax */
  eax = 0;
/* 9950cf: jmp 0x995148 */
  goto L_995148;
L_9950d4: /* 9950d4: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9950da: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9950de: fdiv qword ptr [esp + 0x28] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x28u)));
/* 9950e2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 9950e6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 9950e9: mov dword ptr [0xcf7338], ecx */
  W32((uint32_t)(0xcf7338u), ecx);
/* 9950ef: mov dword ptr [0xcf733c], edx */
  W32((uint32_t)(0xcf733cu), edx);
/* 9950f5: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9950fb: fdiv qword ptr [esp + 0x10] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x10u)));
/* 9950ff: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 995101: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* 995105: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 995109: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 99510d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99510f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995111: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
/* 995117: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 995119: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 99511d: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 995121: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 995125: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995127: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995129: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
/* 99512f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995131: fstp qword ptr [0xcf7340] */
  WF64((uint32_t)(0xcf7340u), ST0); FPOP();
/* 995137: jmp 0x994705 */
  goto L_994705;
L_99513c: /* 99513c: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995141: jle 0x995148 */
  if ((zf || sf != of)) goto L_995148;
L_995143: /* 995143: mov eax, 0xff */
  eax = 0xffu;
L_995148: /* 995148: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 99514a: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99514d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995150: cmp esi, 0xcf7440 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcf7440u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995156: jl 0x9950a0 */
  if ((sf != of)) goto L_9950a0;
L_99515c: /* 99515c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 99515f: mov ecx, 2 */
  ecx = 0x2u;
/* 995164: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995166: jle 0x9951ab */
  if ((zf || sf != of)) goto L_9951ab;
L_995168: /* 995168: lea esi, [edi - 2] */
  esi = (uint32_t)(edi + 0xfffffffeu);
/* 99516b: mov eax, esi */
  eax = esi;
/* 99516d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99516e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 995170: mov edx, eax */
  edx = eax;
/* 995172: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 995174: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 995178: jmp 0x995180 */
  goto L_995180;
L_99517a: /* 99517a: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 99517e: mov edi, edi */
  edi = edi;
L_995180: /* 995180: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 995183: imul ebx, dword ptr [esp + 0x94] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x94u)));
  ebx = (uint32_t)r;
  }
/* 99518b: mov eax, esi */
  eax = esi;
/* 99518d: imul eax, dword ptr [esp + 0x90] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x90u)));
  eax = (uint32_t)r;
  }
/* 995195: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995197: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995199: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99519a: idiv dword ptr [esp + 0x3c] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x3cu)); if (!d) d = (int32_t)guest_divzero(0x99519a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99519e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99519f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9951a0: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9951a2: mov dword ptr [esp + ecx*4 + 0x8c], eax */
  W32((uint32_t)(esp + ecx*4 + 0x8cu), eax);
/* 9951a9: jl 0x99517a */
  if ((sf != of)) goto L_99517a;
L_9951ab: /* 9951ab: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9951ae: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9951b4: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 9951bb: fst qword ptr [0xcf7330] */
  WF64((uint32_t)(0xcf7330u), ST0);
/* 9951c1: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 9951c8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9951ca: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9951cd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9951d0: xor ebx, ebx */
  ebx = 0;
/* 9951d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9951d4: jle 0x995269 */
  if ((zf || sf != of)) goto L_995269;
L_9951da: /* 9951da: jmp 0x9951e0 */
  goto L_9951e0;
L_9951dc: /* 9951dc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9951df: nop  */
L_9951e0: /* 9951e0: mov ecx, 1 */
  ecx = 0x1u;
/* 9951e5: xor esi, esi */
  esi = 0;
/* 9951e7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9951e9: jle 0x995234 */
  if ((zf || sf != of)) goto L_995234;
L_9951eb: /* 9951eb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9951ee: fld qword ptr [eax + ebx*8] */
  { double v = F64((uint32_t)(eax + ebx*8)); FPUSH(v); }
/* 9951f1: xor edi, edi */
  edi = 0;
/* 9951f3: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9951f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_995200: /* 995200: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 995207: fild dword ptr [esp + edx + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + edx + 0x90u)); FPUSH(v); }
/* 99520e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 995210: fabs  */
  ST0 = fabs(ST0);
/* 995212: fild dword ptr [esp + edi + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + edi + 0x90u)); FPUSH(v); }
/* 995219: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99521b: fabs  */
  ST0 = fabs(ST0);
/* 99521d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99521f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995221: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 995224: jne 0x99522a */
  if (!zf) goto L_99522a;
L_995226: /* 995226: mov esi, ecx */
  esi = ecx;
/* 995228: mov edi, edx */
  edi = edx;
L_99522a: /* 99522a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99522d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99522e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995230: jl 0x995200 */
  if ((sf != of)) goto L_995200;
L_995232: /* 995232: fstp st(0) */
  STI(0) = ST0; FPOP();
L_995234: /* 995234: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 995237: fild dword ptr [esp + esi*4 + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + esi*4 + 0x90u)); FPUSH(v); }
/* 99523e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 995241: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 995244: mov dword ptr [ecx + ebx*4], esi */
  W32((uint32_t)(ecx + ebx*4), esi);
/* 995247: fld qword ptr [edx + ebx*8] */
  { double v = F64((uint32_t)(edx + ebx*8)); FPUSH(v); }
/* 99524a: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 995250: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 995251: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995253: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 995255: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 995257: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995259: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99525b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99525d: jl 0x9951dc */
  if ((sf != of)) goto L_9951dc;
L_995263: /* 995263: fst qword ptr [0xcf7330] */
  WF64((uint32_t)(0xcf7330u), ST0);
L_995269: /* 995269: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99526a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99526b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99526c: mov esp, ebp */
  esp = ebp;
/* 99526e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99526f: ret  */
  esp += 4; SPILL(); return;
}

void f_9947e8(void) {
  LOAD_REGS();
  goto L_9947e8;
L_994705: /* 994705: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994709: xor edx, edx */
  edx = 0;
/* 99470b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99470d: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 994715: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 994719: jle 0x994764 */
  if ((zf || sf != of)) goto L_994764;
L_99471b: /* 99471b: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 994721: mov esi, eax */
  esi = eax;
/* 994723: fsub qword ptr [0xcf7430] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7430u)));
/* 994729: mov ecx, esi */
  ecx = esi;
/* 99472b: fidiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x3cu)));
/* 99472f: xor eax, eax */
  eax = 0;
/* 994731: lea edi, [esp + 0x90] */
  edi = (uint32_t)(esp + 0x90u);
/* 994738: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99473a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994740: /* 994740: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 994744: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 994745: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994747: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 99474b: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 994751: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994753: fadd qword ptr [0xcf7430] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7430u)));
/* 994759: fstp qword ptr [edx*8 + 0xcf7368] */
  WF64((uint32_t)(edx*8 + 0xcf7368u), ST0); FPOP();
/* 994760: jl 0x994740 */
  if ((sf != of)) goto L_994740;
L_994762: /* 994762: fstp st(0) */
  STI(0) = ST0; FPOP();
L_994764: /* 994764: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994767: xor edx, edx */
  edx = 0;
/* 994769: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99476b: mov dword ptr [esp + eax*4 + 0x8c], edx */
  W32((uint32_t)(esp + eax*4 + 0x8cu), edx);
/* 994772: jle 0x9947d7 */
  if ((zf || sf != of)) goto L_9947d7;
L_994774: /* 994774: mov esi, 0xcf73a8 */
  esi = 0xcf73a8u;
/* 994779: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994780: /* 994780: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 994784: xor ecx, ecx */
  ecx = 0;
/* 994786: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994788: jle 0x9947a5 */
  if ((zf || sf != of)) goto L_9947a5;
L_99478a: /* 99478a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994790: /* 994790: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 994792: fcomp qword ptr [ecx*8 + 0xcf7370] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf7370u)));
  FPOP();
/* 994799: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99479b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99479e: jnp 0x9947a5 */
  if (!pf) goto L_9947a5;
L_9947a0: /* 9947a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9947a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9947a3: jl 0x994790 */
  if ((sf != of)) goto L_994790;
L_9947a5: /* 9947a5: mov eax, dword ptr [esp + ecx*4 + 0x90] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 9947ac: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 9947af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9947b0: mov dword ptr [esp + ecx*4 + 0x90], eax */
  W32((uint32_t)(esp + ecx*4 + 0x90u), eax);
/* 9947b7: xor eax, eax */
  eax = 0;
/* 9947b9: cmp dword ptr [edi + edx*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9947bc: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9947c0: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9947c3: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9947c6: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 9947c8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9947cb: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 9947ce: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9947cf: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9947d1: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9947d5: jl 0x994780 */
  if ((sf != of)) goto L_994780;
L_9947d7: /* 9947d7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9947da: xor esi, esi */
  esi = 0;
/* 9947dc: xor eax, eax */
  eax = 0;
/* 9947de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9947e0: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 9947e4: jle 0x994812 */
  if ((zf || sf != of)) goto L_994812;
L_9947e6: /* 9947e6: jmp 0x9947f0 */
  goto L_9947f0;
L_9947e8: /* 9947e8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 9947ef: nop  */
L_9947f0: /* 9947f0: mov edx, dword ptr [esp + eax*4 + 0x90] */
  edx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 9947f7: xor ecx, ecx */
  ecx = 0;
/* 9947f9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9947fb: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9947fe: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 994800: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994801: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994803: jl 0x9947f0 */
  if ((sf != of)) goto L_9947f0;
L_994805: /* 994805: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994808: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 99480c: je 0x995093 */
  if (zf) goto L_995093;
L_994812: /* 994812: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 994818: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 99481b: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 994821: xor eax, eax */
  eax = 0;
/* 994823: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994826: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 99482c: fst qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0);
/* 994832: jl 0x9948c2 */
  if ((sf != of)) goto L_9948c2;
L_994838: /* 994838: mov edx, 3 */
  edx = 0x3u;
/* 99483d: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
L_994840: /* 994840: fild dword ptr [ecx - 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 994843: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 994846: fild dword ptr [ecx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 994849: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99484c: fild dword ptr [ecx] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx)); FPUSH(v); }
/* 99484e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994851: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994853: fild dword ptr [ecx - 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 994856: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 99485a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99485c: fmul qword ptr [eax*8 + 0xcf7388] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7388u)));
/* 994863: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994865: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994867: fmul qword ptr [eax*8 + 0xcf7390] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7390u)));
/* 99486e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994870: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 994872: fmul qword ptr [eax*8 + 0xcf7398] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7398u)));
/* 994879: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 99487b: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99487f: fmul qword ptr [eax*8 + 0xcf73a0] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a0u)));
/* 994886: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994888: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99488a: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 99488c: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 99488e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 994890: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 994892: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* 994896: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 994898: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99489a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99489c: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 99489e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9948a0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9948a2: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948a6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9948a8: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948aa: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9948ae: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 9948b2: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948b6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948b8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948ba: jl 0x994840 */
  if ((sf != of)) goto L_994840;
L_9948bc: /* 9948bc: fst qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0);
L_9948c2: /* 9948c2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9948c4: jge 0x9948ed */
  if ((sf == of)) goto L_9948ed;
L_9948c6: /* 9948c6: fild dword ptr [esi + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 9948c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9948ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9948cc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948ce: fmul qword ptr [eax*8 + 0xcf73a0] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a0u)));
/* 9948d5: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9948d7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948d9: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 9948db: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948dd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9948df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 9948e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948e3: jl 0x9948c6 */
  if ((sf != of)) goto L_9948c6;
L_9948e5: /* 9948e5: fstp qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0); FPOP();
/* 9948eb: jmp 0x9948ef */
  goto L_9948ef;
L_9948ed: /* 9948ed: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9948ef: /* 9948ef: fmul qword ptr [0xcf7440] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7440u)));
/* 9948f5: fst qword ptr [0xcf7360] */
  WF64((uint32_t)(0xcf7360u), ST0);
/* 9948fb: fmul qword ptr [0xcf7360] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7360u)));
/* 994901: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994907: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 994909: fstp qword ptr [0xcf7358] */
  WF64((uint32_t)(0xcf7358u), ST0); FPOP();
/* 99490f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994911: fld qword ptr [0xcf7360] */
  { double v = F64((uint32_t)(0xcf7360u)); FPUSH(v); }
/* 994917: fchs  */
  ST0 = -ST0;
/* 994919: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 99491c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 994922: fst qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0);
/* 994929: fsub qword ptr [0xcf7360] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7360u)));
/* 99492f: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994935: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994937: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994939: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 99493f: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994945: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994947: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 994949: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 99494b: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 994951: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 994955: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994957: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 99495d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99495f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994961: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 994965: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 99496c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99496e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994970: fstp qword ptr [esp + 0xb0] */
  WF64((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 994977: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994979: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 994980: fmul qword ptr [0xcf7358] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7358u)));
/* 994986: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 99498a: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 99498e: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 994992: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994998: fmul qword ptr [0xcf7428] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7428u)));
/* 99499e: fchs  */
  ST0 = -ST0;
/* 9949a0: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9949a6: fsub qword ptr [0xcf7428] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7428u)));
/* 9949ac: fst qword ptr [esp + 0xc8] */
  WF64((uint32_t)(esp + 0xc8u), ST0);
/* 9949b3: fmul qword ptr [0xcf7358] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7358u)));
/* 9949b9: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 9949bf: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9949c1: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 9949c8: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 9949ce: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9949d0: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9949d4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9949d8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9949da: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9949dc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9949e0: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 9949e4: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 9949e8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9949ec: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9949ee: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9949f0: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9949f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9949f6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9949f8: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 9949fc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9949fe: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 994a02: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 994a06: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994a08: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994a0c: fabs  */
  ST0 = fabs(ST0);
/* 994a0e: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* 994a12: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994a16: fabs  */
  ST0 = fabs(ST0);
/* 994a18: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994a1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994a1e: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994a24: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994a28: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994a2c: mov ecx, dword ptr [0xcf7430] */
  ecx = R32((uint32_t)(0xcf7430u));
/* 994a32: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 994a36: mov edx, dword ptr [0xcf7434] */
  edx = R32((uint32_t)(0xcf7434u));
/* 994a3c: mov eax, dword ptr [0xcf7438] */
  eax = R32((uint32_t)(0xcf7438u));
/* 994a41: mov dword ptr [0xcf7348], ecx */
  W32((uint32_t)(0xcf7348u), ecx);
/* 994a47: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994a4b: mov ecx, dword ptr [0xcf743c] */
  ecx = R32((uint32_t)(0xcf743cu));
/* 994a51: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994a55: mov dword ptr [0xcf734c], edx */
  W32((uint32_t)(0xcf734cu), edx);
/* 994a5b: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 994a5f: mov dword ptr [0xcf7350], eax */
  W32((uint32_t)(0xcf7350u), eax);
/* 994a64: mov dword ptr [0xcf7354], ecx */
  W32((uint32_t)(0xcf7354u), ecx);
/* 994a6a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994a6e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994a70: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994a72: fabs  */
  ST0 = fabs(ST0);
/* 994a74: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 994a76: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 994a7a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994a7c: fabs  */
  ST0 = fabs(ST0);
/* 994a7e: fadd qword ptr [esp + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x58u)));
/* 994a82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994a84: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994a8a: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 994a8e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994a90: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994a92: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994a96: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994a9a: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994a9e: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994aa2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994aa4: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 994aa8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aaa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aac: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994ab0: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 994ab4: fabs  */
  ST0 = fabs(ST0);
/* 994ab6: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* 994aba: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994abe: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 994ac2: fabs  */
  ST0 = fabs(ST0);
/* 994ac4: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994ac8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994aca: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994ad0: fst qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0);
/* 994ad4: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 994ad8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994adc: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994ae0: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 994ae2: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994ae6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994ae8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 994aea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aec: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994af2: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994af6: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994afa: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994b00: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994b02: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994b04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994b06: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 994b0c: fmul qword ptr [0xcf7368] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7368u)));
/* 994b12: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994b16: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 994b18: fstp qword ptr [0xcf7340] */
  WF64((uint32_t)(0xcf7340u), ST0); FPOP();
/* 994b1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994b20: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994b26: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994b2a: fstp qword ptr [0xcf7338] */
  WF64((uint32_t)(0xcf7338u), ST0); FPOP();
/* 994b30: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 994b36: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 994b3a: fdiv qword ptr [esp + 0x40] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x40u)));
/* 994b3e: mov edx, eax */
  edx = eax;
/* 994b40: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 994b41: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994b43: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 994b47: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 994b4d: fdiv qword ptr [0xcf7358] */
  ST0 = ST0 / (F64((uint32_t)(0xcf7358u)));
/* 994b53: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994b55: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* 994b59: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 994b60: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994b62: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
/* 994b68: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 994b6a: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 994b6e: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* 994b72: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994b74: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
/* 994b7a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994b7c: je 0x995093 */
  if (zf) goto L_995093;
L_994b82: /* 994b82: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 994b86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994b88: je 0x994705 */
  if (zf) goto L_994705;
L_994b8e: /* 994b8e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994b93: jle 0x994ba3 */
  if ((zf || sf != of)) goto L_994ba3;
L_994b95: /* 994b95: mov ecx, eax */
  ecx = eax;
/* 994b97: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 994b9a: lea edi, [esp + 0xd0] */
  edi = (uint32_t)(esp + 0xd0u);
/* 994ba1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_994ba3: /* 994ba3: xor ecx, ecx */
  ecx = 0;
/* 994ba5: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994ba8: jl 0x994d57 */
  if ((sf != of)) goto L_994d57;
L_994bae: /* 994bae: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 994bb1: mov edx, 2 */
  edx = 0x2u;
/* 994bb6: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_994bb9: /* 994bb9: mov esi, dword ptr [ebx - 8] */
  esi = R32((uint32_t)(ebx + 0xfffffff8u));
/* 994bbc: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994bc3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994bc6: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994bcd: jne 0x994bda */
  if (!zf) goto L_994bda;
L_994bcf: /* 994bcf: mov dword ptr [esp + esi*4 + 0xf0], ecx */
  W32((uint32_t)(esp + esi*4 + 0xf0u), ecx);
/* 994bd6: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 994bd8: jmp 0x994c16 */
  goto L_994c16;
L_994bda: /* 994bda: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994be1: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994be8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994bea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994bed: jne 0x994bf1 */
  if (!zf) goto L_994bf1;
L_994bef: /* 994bef: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_994bf1: /* 994bf1: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994bf8: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994bff: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994c06: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994c0d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c0f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994c12: jp 0x994c16 */
  if (pf) goto L_994c16;
L_994c14: /* 994c14: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_994c16: /* 994c16: mov esi, dword ptr [ebx - 4] */
  esi = R32((uint32_t)(ebx + 0xfffffffcu));
/* 994c19: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994c20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994c23: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994c2a: jne 0x994c3a */
  if (!zf) goto L_994c3a;
L_994c2c: /* 994c2c: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c2f: mov dword ptr [esp + esi*4 + 0xf0], eax */
  W32((uint32_t)(esp + esi*4 + 0xf0u), eax);
/* 994c36: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 994c38: jmp 0x994c7c */
  goto L_994c7c;
L_994c3a: /* 994c3a: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994c41: fcomp qword ptr [ecx*8 + 0xcf73b0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b0u)));
  FPOP();
/* 994c48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c4a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994c4d: jne 0x994c54 */
  if (!zf) goto L_994c54;
L_994c4f: /* 994c4f: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c52: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_994c54: /* 994c54: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994c5b: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994c62: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994c69: fcomp qword ptr [ecx*8 + 0xcf73b0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b0u)));
  FPOP();
/* 994c70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994c75: jp 0x994c7c */
  if (pf) goto L_994c7c;
L_994c77: /* 994c77: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c7a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_994c7c: /* 994c7c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 994c7e: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994c85: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994c88: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994c8f: jne 0x994c9c */
  if (!zf) goto L_994c9c;
L_994c91: /* 994c91: mov dword ptr [esp + esi*4 + 0xf0], edx */
  W32((uint32_t)(esp + esi*4 + 0xf0u), edx);
/* 994c98: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 994c9a: jmp 0x994cd8 */
  goto L_994cd8;
L_994c9c: /* 994c9c: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994ca3: fcomp qword ptr [ecx*8 + 0xcf73b8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b8u)));
  FPOP();
/* 994caa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994cac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994caf: jne 0x994cb3 */
  if (!zf) goto L_994cb3;
L_994cb1: /* 994cb1: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_994cb3: /* 994cb3: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994cba: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994cc1: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994cc8: fcomp qword ptr [ecx*8 + 0xcf73b8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b8u)));
  FPOP();
/* 994ccf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994cd1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994cd4: jp 0x994cd8 */
  if (pf) goto L_994cd8;
L_994cd6: /* 994cd6: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_994cd8: /* 994cd8: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 994cdb: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994ce2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994ce5: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994cec: jne 0x994cfc */
  if (!zf) goto L_994cfc;
L_994cee: /* 994cee: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994cf1: mov dword ptr [esp + esi*4 + 0xf0], eax */
  W32((uint32_t)(esp + esi*4 + 0xf0u), eax);
/* 994cf8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 994cfa: jmp 0x994d3e */
  goto L_994d3e;
L_994cfc: /* 994cfc: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d03: fcomp qword ptr [ecx*8 + 0xcf73c0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73c0u)));
  FPOP();
/* 994d0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d0c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994d0f: jne 0x994d16 */
  if (!zf) goto L_994d16;
L_994d11: /* 994d11: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d14: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_994d16: /* 994d16: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994d1d: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d24: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994d2b: fcomp qword ptr [ecx*8 + 0xcf73c0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73c0u)));
  FPOP();
/* 994d32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d34: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994d37: jp 0x994d3e */
  if (pf) goto L_994d3e;
L_994d39: /* 994d39: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d3c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_994d3e: /* 994d3e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 994d41: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 994d44: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d47: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994d4a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 994d4d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994d4f: jl 0x994bb9 */
  if ((sf != of)) goto L_994bb9;
L_994d55: /* 994d55: jmp 0x994d5a */
  goto L_994d5a;
L_994d57: /* 994d57: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_994d5a: /* 994d5a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994d5c: jge 0x994dc3 */
  if ((sf == of)) goto L_994dc3;
L_994d5e: /* 994d5e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_994d61: /* 994d61: mov edx, dword ptr [ebx + ecx*4] */
  edx = R32((uint32_t)(ebx + ecx*4));
/* 994d64: mov eax, dword ptr [esp + edx*4 + 0xd0] */
  eax = R32((uint32_t)(esp + edx*4 + 0xd0u));
/* 994d6b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994d6e: lea esi, [esp + edx*4 + 0xd0] */
  esi = (uint32_t)(esp + edx*4 + 0xd0u);
/* 994d75: jne 0x994d82 */
  if (!zf) goto L_994d82;
L_994d77: /* 994d77: mov dword ptr [esp + edx*4 + 0xf0], ecx */
  W32((uint32_t)(esp + edx*4 + 0xf0u), ecx);
/* 994d7e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 994d80: jmp 0x994dbe */
  goto L_994dbe;
L_994d82: /* 994d82: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d89: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994d90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994d95: jne 0x994d99 */
  if (!zf) goto L_994d99;
L_994d97: /* 994d97: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_994d99: /* 994d99: mov eax, dword ptr [esp + edx*4 + 0xf0] */
  eax = R32((uint32_t)(esp + edx*4 + 0xf0u));
/* 994da0: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994da7: lea edx, [esp + edx*4 + 0xf0] */
  edx = (uint32_t)(esp + edx*4 + 0xf0u);
/* 994dae: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994db5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994db7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994dba: jp 0x994dbe */
  if (pf) goto L_994dbe;
L_994dbc: /* 994dbc: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_994dbe: /* 994dbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 994dbf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994dc1: jl 0x994d61 */
  if ((sf != of)) goto L_994d61;
L_994dc3: /* 994dc3: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994dc9: xor edx, edx */
  edx = 0;
/* 994dcb: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 994dd1: fstp qword ptr [esp + 0x110] */
  WF64((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 994dd8: jmp 0x994de0 */
  goto L_994de0;
L_994de0: /* 994de0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994de2: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 994dea: mov dword ptr [esp + 0x7c], 0x3ff00000 */
  W32((uint32_t)(esp + 0x7cu), 0x3ff00000u);
/* 994df2: je 0x994dfc */
  if (zf) goto L_994dfc;
L_994df4: /* 994df4: mov dword ptr [esp + 0x7c], 0xbff00000 */
  W32((uint32_t)(esp + 0x7cu), 0xbff00000u);
L_994dfc: /* 994dfc: fld qword ptr [0xcf7440] */
  { double v = F64((uint32_t)(0xcf7440u)); FPUSH(v); }
/* 994e02: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994e06: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e0a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994e0c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e0e: mov ecx, edx */
  ecx = edx;
/* 994e10: fadd qword ptr [0xcf7360] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7360u)));
/* 994e16: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 994e1a: fstp qword ptr [esp + 0xb8] */
  WF64((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 994e21: fld qword ptr [0xcf7360] */
  { double v = F64((uint32_t)(0xcf7360u)); FPUSH(v); }
/* 994e27: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e2b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 994e2d: fsubr qword ptr [esp + 0x110] */
  ST0 = (F64((uint32_t)(esp + 0x110u))) - ST0;
/* 994e34: fsub qword ptr [0xcf7440] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7440u)));
/* 994e3a: fstp qword ptr [esp + 0x118] */
  WF64((uint32_t)(esp + 0x118u), ST0); FPOP();
/* 994e41: jge 0x995089 */
  if ((sf == of)) goto L_995089;
L_994e47: /* 994e47: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 994e4a: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 994e4e: mov edi, edi */
  edi = edi;
L_994e50: /* 994e50: mov eax, dword ptr [esp + ecx*4 + 0x90] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 994e57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994e59: je 0x995078 */
  if (zf) goto L_995078;
L_994e5f: /* 994e5f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e62: jg 0x994e6d */
  if ((!zf && sf == of)) goto L_994e6d;
L_994e64: /* 994e64: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e67: jle 0x995078 */
  if ((zf || sf != of)) goto L_995078;
L_994e6d: /* 994e6d: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 994e71: lea eax, [edx*8] */
  eax = (uint32_t)(edx*8);
/* 994e78: mov ebx, ecx */
  ebx = ecx;
/* 994e7a: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 994e7c: mov eax, dword ptr [esp + ebx*4 + 0xf0] */
  eax = R32((uint32_t)(esp + ebx*4 + 0xf0u));
/* 994e83: fmul qword ptr [eax*8 + 0xcf73a8] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a8u)));
/* 994e8a: fadd qword ptr [0xcf7368] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7368u)));
/* 994e90: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 994e94: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994e98: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e9c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 994e9e: fadd qword ptr [esp + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x118u)));
/* 994ea5: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994ea9: fld qword ptr [esp + 0xb8] */
  { double v = F64((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 994eb0: fchs  */
  ST0 = -ST0;
/* 994eb2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 994eb6: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 994ebd: fsub qword ptr [esp + 0xb8] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0xb8u)));
/* 994ec4: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 994ec8: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 994ecc: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994ed0: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994ed6: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994eda: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994ede: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994ee2: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994ee8: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994eec: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994ef0: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994ef4: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994efa: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994efe: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 994f05: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f07: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 994f0b: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 994f12: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f16: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f1a: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994f1e: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 994f22: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994f26: fmul qword ptr [0xcf7428] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7428u)));
/* 994f2c: fchs  */
  ST0 = -ST0;
/* 994f2e: fld qword ptr [esp + 0xc8] */
  { double v = F64((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 994f35: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994f39: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 994f3d: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 994f41: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994f45: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 994f49: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994f4d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 994f4f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994f51: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994f55: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994f57: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994f59: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994f5d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994f5f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 994f61: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 994f65: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 994f67: fstp qword ptr [esp + 0xc0] */
  WF64((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 994f6e: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 994f72: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f74: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994f78: fabs  */
  ST0 = fabs(ST0);
/* 994f7a: fsubr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) - ST0;
/* 994f7e: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994f82: fabs  */
  ST0 = fabs(ST0);
/* 994f84: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 994f88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994f8a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994f90: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f92: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994f96: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f9a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994f9e: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994fa2: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994fa6: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994faa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994fac: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994fae: fabs  */
  ST0 = fabs(ST0);
/* 994fb0: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 994fb2: fld qword ptr [esp + 0xc0] */
  { double v = F64((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 994fb9: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994fbb: fabs  */
  ST0 = fabs(ST0);
/* 994fbd: fadd qword ptr [esp + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0xc0u)));
/* 994fc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994fc6: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994fcc: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994fd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fd4: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994fd8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994fda: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 994fdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fde: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994fe2: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 994fe9: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994fed: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994ff1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994ff3: fabs  */
  ST0 = fabs(ST0);
/* 994ff5: fsubr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) - ST0;
/* 994ff9: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994ffd: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994fff: fabs  */
  ST0 = fabs(ST0);
/* 995001: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 995005: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995007: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99500d: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 995011: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995013: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 995017: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 99501b: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99501f: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 995023: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 995027: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 99502b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99502d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99502f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995031: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 995037: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 995039: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99503b: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 99503f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995041: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 995045: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 995049: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 99504d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99504f: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 995051: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995053: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 995057: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 99505b: fst qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0);
/* 99505f: fmul qword ptr [0xcf7340] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7340u)));
/* 995065: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 995067: fmul qword ptr [0xcf7338] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7338u)));
/* 99506d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99506f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995071: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995074: jnp 0x9950d4 */
  if (!pf) goto L_9950d4;
L_995076: /* 995076: fstp st(0) */
  STI(0) = ST0; FPOP();
L_995078: /* 995078: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 995079: lea eax, [edx + esi - 1] */
  eax = (uint32_t)(edx + esi + 0xffffffffu);
/* 99507d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99507f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 995083: jl 0x994e50 */
  if ((sf != of)) goto L_994e50;
L_995089: /* 995089: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99508a: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99508d: jl 0x994de0 */
  if ((sf != of)) goto L_994de0;
L_995093: /* 995093: lea edi, [esp + 0x90] */
  edi = (uint32_t)(esp + 0x90u);
/* 99509a: mov esi, 0xcf7430 */
  esi = 0xcf7430u;
/* 99509f: nop  */
L_9950a0: /* 9950a0: fld qword ptr [0xcf7428] */
  { double v = F64((uint32_t)(0xcf7428u)); FPUSH(v); }
/* 9950a6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9950a9: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 9950ab: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9950b1: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 9950b7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9950ba: call 0x99cf1e */
  esp -= 4; W32(esp, 0x9950bfu); SPILL(); hle_floor(); RELOAD();
/* 9950bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9950c2: call 0x99c958 */
  esp -= 4; W32(esp, 0x9950c7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9950c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9950c9: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9950cb: jge 0x99513c */
  if ((sf == of)) goto L_99513c;
L_9950cd: /* 9950cd: xor eax, eax */
  eax = 0;
/* 9950cf: jmp 0x995148 */
  goto L_995148;
L_9950d4: /* 9950d4: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9950da: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9950de: fdiv qword ptr [esp + 0x28] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x28u)));
/* 9950e2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 9950e6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 9950e9: mov dword ptr [0xcf7338], ecx */
  W32((uint32_t)(0xcf7338u), ecx);
/* 9950ef: mov dword ptr [0xcf733c], edx */
  W32((uint32_t)(0xcf733cu), edx);
/* 9950f5: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9950fb: fdiv qword ptr [esp + 0x10] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x10u)));
/* 9950ff: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 995101: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* 995105: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 995109: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 99510d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99510f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995111: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
/* 995117: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 995119: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 99511d: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 995121: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 995125: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995127: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995129: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
/* 99512f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995131: fstp qword ptr [0xcf7340] */
  WF64((uint32_t)(0xcf7340u), ST0); FPOP();
/* 995137: jmp 0x994705 */
  goto L_994705;
L_99513c: /* 99513c: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995141: jle 0x995148 */
  if ((zf || sf != of)) goto L_995148;
L_995143: /* 995143: mov eax, 0xff */
  eax = 0xffu;
L_995148: /* 995148: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 99514a: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99514d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995150: cmp esi, 0xcf7440 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcf7440u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995156: jl 0x9950a0 */
  if ((sf != of)) goto L_9950a0;
L_99515c: /* 99515c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 99515f: mov ecx, 2 */
  ecx = 0x2u;
/* 995164: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995166: jle 0x9951ab */
  if ((zf || sf != of)) goto L_9951ab;
L_995168: /* 995168: lea esi, [edi - 2] */
  esi = (uint32_t)(edi + 0xfffffffeu);
/* 99516b: mov eax, esi */
  eax = esi;
/* 99516d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99516e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 995170: mov edx, eax */
  edx = eax;
/* 995172: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 995174: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 995178: jmp 0x995180 */
  goto L_995180;
L_99517a: /* 99517a: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 99517e: mov edi, edi */
  edi = edi;
L_995180: /* 995180: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 995183: imul ebx, dword ptr [esp + 0x94] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x94u)));
  ebx = (uint32_t)r;
  }
/* 99518b: mov eax, esi */
  eax = esi;
/* 99518d: imul eax, dword ptr [esp + 0x90] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x90u)));
  eax = (uint32_t)r;
  }
/* 995195: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995197: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995199: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99519a: idiv dword ptr [esp + 0x3c] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x3cu)); if (!d) d = (int32_t)guest_divzero(0x99519a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99519e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99519f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9951a0: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9951a2: mov dword ptr [esp + ecx*4 + 0x8c], eax */
  W32((uint32_t)(esp + ecx*4 + 0x8cu), eax);
/* 9951a9: jl 0x99517a */
  if ((sf != of)) goto L_99517a;
L_9951ab: /* 9951ab: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9951ae: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9951b4: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 9951bb: fst qword ptr [0xcf7330] */
  WF64((uint32_t)(0xcf7330u), ST0);
/* 9951c1: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 9951c8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9951ca: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9951cd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9951d0: xor ebx, ebx */
  ebx = 0;
/* 9951d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9951d4: jle 0x995269 */
  if ((zf || sf != of)) goto L_995269;
L_9951da: /* 9951da: jmp 0x9951e0 */
  goto L_9951e0;
L_9951dc: /* 9951dc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9951df: nop  */
L_9951e0: /* 9951e0: mov ecx, 1 */
  ecx = 0x1u;
/* 9951e5: xor esi, esi */
  esi = 0;
/* 9951e7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9951e9: jle 0x995234 */
  if ((zf || sf != of)) goto L_995234;
L_9951eb: /* 9951eb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9951ee: fld qword ptr [eax + ebx*8] */
  { double v = F64((uint32_t)(eax + ebx*8)); FPUSH(v); }
/* 9951f1: xor edi, edi */
  edi = 0;
/* 9951f3: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9951f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_995200: /* 995200: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 995207: fild dword ptr [esp + edx + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + edx + 0x90u)); FPUSH(v); }
/* 99520e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 995210: fabs  */
  ST0 = fabs(ST0);
/* 995212: fild dword ptr [esp + edi + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + edi + 0x90u)); FPUSH(v); }
/* 995219: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99521b: fabs  */
  ST0 = fabs(ST0);
/* 99521d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99521f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995221: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 995224: jne 0x99522a */
  if (!zf) goto L_99522a;
L_995226: /* 995226: mov esi, ecx */
  esi = ecx;
/* 995228: mov edi, edx */
  edi = edx;
L_99522a: /* 99522a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99522d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99522e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995230: jl 0x995200 */
  if ((sf != of)) goto L_995200;
L_995232: /* 995232: fstp st(0) */
  STI(0) = ST0; FPOP();
L_995234: /* 995234: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 995237: fild dword ptr [esp + esi*4 + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + esi*4 + 0x90u)); FPUSH(v); }
/* 99523e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 995241: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 995244: mov dword ptr [ecx + ebx*4], esi */
  W32((uint32_t)(ecx + ebx*4), esi);
/* 995247: fld qword ptr [edx + ebx*8] */
  { double v = F64((uint32_t)(edx + ebx*8)); FPUSH(v); }
/* 99524a: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 995250: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 995251: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995253: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 995255: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 995257: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995259: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99525b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99525d: jl 0x9951dc */
  if ((sf != of)) goto L_9951dc;
L_995263: /* 995263: fst qword ptr [0xcf7330] */
  WF64((uint32_t)(0xcf7330u), ST0);
L_995269: /* 995269: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99526a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99526b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99526c: mov esp, ebp */
  esp = ebp;
/* 99526e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99526f: ret  */
  esp += 4; SPILL(); return;
}

void f_994dda(void) {
  LOAD_REGS();
  goto L_994dda;
L_994705: /* 994705: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994709: xor edx, edx */
  edx = 0;
/* 99470b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99470d: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 994715: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 994719: jle 0x994764 */
  if ((zf || sf != of)) goto L_994764;
L_99471b: /* 99471b: fld qword ptr [0xcf7438] */
  { double v = F64((uint32_t)(0xcf7438u)); FPUSH(v); }
/* 994721: mov esi, eax */
  esi = eax;
/* 994723: fsub qword ptr [0xcf7430] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7430u)));
/* 994729: mov ecx, esi */
  ecx = esi;
/* 99472b: fidiv dword ptr [esp + 0x3c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x3cu)));
/* 99472f: xor eax, eax */
  eax = 0;
/* 994731: lea edi, [esp + 0x90] */
  edi = (uint32_t)(esp + 0x90u);
/* 994738: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 99473a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994740: /* 994740: fild dword ptr [esp + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 994744: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 994745: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994747: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 99474b: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 994751: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994753: fadd qword ptr [0xcf7430] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7430u)));
/* 994759: fstp qword ptr [edx*8 + 0xcf7368] */
  WF64((uint32_t)(edx*8 + 0xcf7368u), ST0); FPOP();
/* 994760: jl 0x994740 */
  if ((sf != of)) goto L_994740;
L_994762: /* 994762: fstp st(0) */
  STI(0) = ST0; FPOP();
L_994764: /* 994764: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994767: xor edx, edx */
  edx = 0;
/* 994769: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99476b: mov dword ptr [esp + eax*4 + 0x8c], edx */
  W32((uint32_t)(esp + eax*4 + 0x8cu), edx);
/* 994772: jle 0x9947d7 */
  if ((zf || sf != of)) goto L_9947d7;
L_994774: /* 994774: mov esi, 0xcf73a8 */
  esi = 0xcf73a8u;
/* 994779: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_994780: /* 994780: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 994784: xor ecx, ecx */
  ecx = 0;
/* 994786: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994788: jle 0x9947a5 */
  if ((zf || sf != of)) goto L_9947a5;
L_99478a: /* 99478a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994790: /* 994790: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 994792: fcomp qword ptr [ecx*8 + 0xcf7370] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf7370u)));
  FPOP();
/* 994799: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99479b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99479e: jnp 0x9947a5 */
  if (!pf) goto L_9947a5;
L_9947a0: /* 9947a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9947a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9947a3: jl 0x994790 */
  if ((sf != of)) goto L_994790;
L_9947a5: /* 9947a5: mov eax, dword ptr [esp + ecx*4 + 0x90] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 9947ac: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 9947af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9947b0: mov dword ptr [esp + ecx*4 + 0x90], eax */
  W32((uint32_t)(esp + ecx*4 + 0x90u), eax);
/* 9947b7: xor eax, eax */
  eax = 0;
/* 9947b9: cmp dword ptr [edi + edx*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9947bc: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 9947c0: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 9947c3: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9947c6: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 9947c8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 9947cb: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 9947ce: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9947cf: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9947d1: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 9947d5: jl 0x994780 */
  if ((sf != of)) goto L_994780;
L_9947d7: /* 9947d7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9947da: xor esi, esi */
  esi = 0;
/* 9947dc: xor eax, eax */
  eax = 0;
/* 9947de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9947e0: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 9947e4: jle 0x994812 */
  if ((zf || sf != of)) goto L_994812;
L_9947e6: /* 9947e6: jmp 0x9947f0 */
  goto L_9947f0;
L_9947f0: /* 9947f0: mov edx, dword ptr [esp + eax*4 + 0x90] */
  edx = R32((uint32_t)(esp + eax*4 + 0x90u));
/* 9947f7: xor ecx, ecx */
  ecx = 0;
/* 9947f9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9947fb: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9947fe: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 994800: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 994801: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994803: jl 0x9947f0 */
  if ((sf != of)) goto L_9947f0;
L_994805: /* 994805: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994808: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 99480c: je 0x995093 */
  if (zf) goto L_995093;
L_994812: /* 994812: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 994818: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 99481b: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 994821: xor eax, eax */
  eax = 0;
/* 994823: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994826: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 99482c: fst qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0);
/* 994832: jl 0x9948c2 */
  if ((sf != of)) goto L_9948c2;
L_994838: /* 994838: mov edx, 3 */
  edx = 0x3u;
/* 99483d: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
L_994840: /* 994840: fild dword ptr [ecx - 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 994843: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 994846: fild dword ptr [ecx - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 994849: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99484c: fild dword ptr [ecx] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx)); FPUSH(v); }
/* 99484e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994851: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994853: fild dword ptr [ecx - 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* 994856: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 99485a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99485c: fmul qword ptr [eax*8 + 0xcf7388] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7388u)));
/* 994863: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994865: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994867: fmul qword ptr [eax*8 + 0xcf7390] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7390u)));
/* 99486e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994870: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 994872: fmul qword ptr [eax*8 + 0xcf7398] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf7398u)));
/* 994879: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 99487b: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 99487f: fmul qword ptr [eax*8 + 0xcf73a0] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a0u)));
/* 994886: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 994888: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99488a: faddp st(5) */
  STI(5) = STI(5) + ST0;
  FPOP();
/* 99488c: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 99488e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 994890: fadd st(4) */
  ST0 = ST0 + STI(4);
/* 994892: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* 994896: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 994898: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 99489a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99489c: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 99489e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9948a0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9948a2: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948a6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9948a8: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948aa: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 9948ae: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 9948b2: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 9948b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948b6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948b8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948ba: jl 0x994840 */
  if ((sf != of)) goto L_994840;
L_9948bc: /* 9948bc: fst qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0);
L_9948c2: /* 9948c2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9948c4: jge 0x9948ed */
  if ((sf == of)) goto L_9948ed;
L_9948c6: /* 9948c6: fild dword ptr [esi + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 9948c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9948ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9948cc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948ce: fmul qword ptr [eax*8 + 0xcf73a0] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a0u)));
/* 9948d5: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 9948d7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948d9: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 9948db: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9948dd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9948df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 9948e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9948e3: jl 0x9948c6 */
  if ((sf != of)) goto L_9948c6;
L_9948e5: /* 9948e5: fstp qword ptr [0xcf7368] */
  WF64((uint32_t)(0xcf7368u), ST0); FPOP();
/* 9948eb: jmp 0x9948ef */
  goto L_9948ef;
L_9948ed: /* 9948ed: fstp st(0) */
  STI(0) = ST0; FPOP();
L_9948ef: /* 9948ef: fmul qword ptr [0xcf7440] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7440u)));
/* 9948f5: fst qword ptr [0xcf7360] */
  WF64((uint32_t)(0xcf7360u), ST0);
/* 9948fb: fmul qword ptr [0xcf7360] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7360u)));
/* 994901: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994907: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 994909: fstp qword ptr [0xcf7358] */
  WF64((uint32_t)(0xcf7358u), ST0); FPOP();
/* 99490f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994911: fld qword ptr [0xcf7360] */
  { double v = F64((uint32_t)(0xcf7360u)); FPUSH(v); }
/* 994917: fchs  */
  ST0 = -ST0;
/* 994919: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 99491c: fsub qword ptr [0xa0da58] */
  ST0 = ST0 - (F64((uint32_t)(0xa0da58u)));
/* 994922: fst qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0);
/* 994929: fsub qword ptr [0xcf7360] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7360u)));
/* 99492f: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994935: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994937: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994939: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 99493f: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994945: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994947: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 994949: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 99494b: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 994951: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 994955: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994957: fadd qword ptr [0xcf7358] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7358u)));
/* 99495d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99495f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994961: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 994965: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 99496c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99496e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994970: fstp qword ptr [esp + 0xb0] */
  WF64((uint32_t)(esp + 0xb0u), ST0); FPOP();
/* 994977: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994979: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 994980: fmul qword ptr [0xcf7358] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7358u)));
/* 994986: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 99498a: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 99498e: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 994992: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994998: fmul qword ptr [0xcf7428] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7428u)));
/* 99499e: fchs  */
  ST0 = -ST0;
/* 9949a0: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9949a6: fsub qword ptr [0xcf7428] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7428u)));
/* 9949ac: fst qword ptr [esp + 0xc8] */
  WF64((uint32_t)(esp + 0xc8u), ST0);
/* 9949b3: fmul qword ptr [0xcf7358] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7358u)));
/* 9949b9: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 9949bf: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9949c1: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 9949c8: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 9949ce: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 9949d0: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 9949d4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9949d8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 9949da: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9949dc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 9949e0: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 9949e4: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 9949e8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 9949ec: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 9949ee: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 9949f0: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 9949f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9949f6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 9949f8: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 9949fc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 9949fe: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 994a02: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 994a06: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994a08: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994a0c: fabs  */
  ST0 = fabs(ST0);
/* 994a0e: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* 994a12: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994a16: fabs  */
  ST0 = fabs(ST0);
/* 994a18: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994a1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994a1e: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994a24: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994a28: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994a2c: mov ecx, dword ptr [0xcf7430] */
  ecx = R32((uint32_t)(0xcf7430u));
/* 994a32: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 994a36: mov edx, dword ptr [0xcf7434] */
  edx = R32((uint32_t)(0xcf7434u));
/* 994a3c: mov eax, dword ptr [0xcf7438] */
  eax = R32((uint32_t)(0xcf7438u));
/* 994a41: mov dword ptr [0xcf7348], ecx */
  W32((uint32_t)(0xcf7348u), ecx);
/* 994a47: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994a4b: mov ecx, dword ptr [0xcf743c] */
  ecx = R32((uint32_t)(0xcf743cu));
/* 994a51: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994a55: mov dword ptr [0xcf734c], edx */
  W32((uint32_t)(0xcf734cu), edx);
/* 994a5b: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* 994a5f: mov dword ptr [0xcf7350], eax */
  W32((uint32_t)(0xcf7350u), eax);
/* 994a64: mov dword ptr [0xcf7354], ecx */
  W32((uint32_t)(0xcf7354u), ecx);
/* 994a6a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994a6e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994a70: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994a72: fabs  */
  ST0 = fabs(ST0);
/* 994a74: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 994a76: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 994a7a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994a7c: fabs  */
  ST0 = fabs(ST0);
/* 994a7e: fadd qword ptr [esp + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x58u)));
/* 994a82: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994a84: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994a8a: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 994a8e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994a90: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994a92: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994a96: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994a9a: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994a9e: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994aa2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994aa4: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 994aa8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aaa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aac: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994ab0: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 994ab4: fabs  */
  ST0 = fabs(ST0);
/* 994ab6: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* 994aba: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994abe: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* 994ac2: fabs  */
  ST0 = fabs(ST0);
/* 994ac4: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994ac8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994aca: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994ad0: fst qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0);
/* 994ad4: fsub qword ptr [esp + 0x50] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x50u)));
/* 994ad8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994adc: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 994ae0: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 994ae2: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994ae6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994ae8: fsubp st(2) */
  STI(2) = STI(2) - ST0;
  FPOP();
/* 994aea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994aec: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994af2: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994af6: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994afa: fld qword ptr [0xcf7448] */
  { double v = F64((uint32_t)(0xcf7448u)); FPUSH(v); }
/* 994b00: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994b02: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994b04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994b06: fld qword ptr [0xcf7368] */
  { double v = F64((uint32_t)(0xcf7368u)); FPUSH(v); }
/* 994b0c: fmul qword ptr [0xcf7368] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7368u)));
/* 994b12: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994b16: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 994b18: fstp qword ptr [0xcf7340] */
  WF64((uint32_t)(0xcf7340u), ST0); FPOP();
/* 994b1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994b20: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994b26: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994b2a: fstp qword ptr [0xcf7338] */
  WF64((uint32_t)(0xcf7338u), ST0); FPOP();
/* 994b30: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 994b36: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 994b3a: fdiv qword ptr [esp + 0x40] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x40u)));
/* 994b3e: mov edx, eax */
  edx = eax;
/* 994b40: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 994b41: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994b43: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 994b47: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 994b4d: fdiv qword ptr [0xcf7358] */
  ST0 = ST0 / (F64((uint32_t)(0xcf7358u)));
/* 994b53: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994b55: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* 994b59: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* 994b60: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994b62: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
/* 994b68: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 994b6a: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* 994b6e: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* 994b72: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994b74: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
/* 994b7a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994b7c: je 0x995093 */
  if (zf) goto L_995093;
L_994b82: /* 994b82: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 994b86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994b88: je 0x994705 */
  if (zf) goto L_994705;
L_994b8e: /* 994b8e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 994b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 994b93: jle 0x994ba3 */
  if ((zf || sf != of)) goto L_994ba3;
L_994b95: /* 994b95: mov ecx, eax */
  ecx = eax;
/* 994b97: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 994b9a: lea edi, [esp + 0xd0] */
  edi = (uint32_t)(esp + 0xd0u);
/* 994ba1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_994ba3: /* 994ba3: xor ecx, ecx */
  ecx = 0;
/* 994ba5: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994ba8: jl 0x994d57 */
  if ((sf != of)) goto L_994d57;
L_994bae: /* 994bae: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 994bb1: mov edx, 2 */
  edx = 0x2u;
/* 994bb6: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_994bb9: /* 994bb9: mov esi, dword ptr [ebx - 8] */
  esi = R32((uint32_t)(ebx + 0xfffffff8u));
/* 994bbc: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994bc3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994bc6: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994bcd: jne 0x994bda */
  if (!zf) goto L_994bda;
L_994bcf: /* 994bcf: mov dword ptr [esp + esi*4 + 0xf0], ecx */
  W32((uint32_t)(esp + esi*4 + 0xf0u), ecx);
/* 994bd6: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 994bd8: jmp 0x994c16 */
  goto L_994c16;
L_994bda: /* 994bda: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994be1: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994be8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994bea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994bed: jne 0x994bf1 */
  if (!zf) goto L_994bf1;
L_994bef: /* 994bef: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_994bf1: /* 994bf1: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994bf8: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994bff: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994c06: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994c0d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c0f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994c12: jp 0x994c16 */
  if (pf) goto L_994c16;
L_994c14: /* 994c14: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_994c16: /* 994c16: mov esi, dword ptr [ebx - 4] */
  esi = R32((uint32_t)(ebx + 0xfffffffcu));
/* 994c19: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994c20: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994c23: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994c2a: jne 0x994c3a */
  if (!zf) goto L_994c3a;
L_994c2c: /* 994c2c: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c2f: mov dword ptr [esp + esi*4 + 0xf0], eax */
  W32((uint32_t)(esp + esi*4 + 0xf0u), eax);
/* 994c36: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 994c38: jmp 0x994c7c */
  goto L_994c7c;
L_994c3a: /* 994c3a: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994c41: fcomp qword ptr [ecx*8 + 0xcf73b0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b0u)));
  FPOP();
/* 994c48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c4a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994c4d: jne 0x994c54 */
  if (!zf) goto L_994c54;
L_994c4f: /* 994c4f: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c52: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_994c54: /* 994c54: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994c5b: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994c62: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994c69: fcomp qword ptr [ecx*8 + 0xcf73b0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b0u)));
  FPOP();
/* 994c70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994c72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994c75: jp 0x994c7c */
  if (pf) goto L_994c7c;
L_994c77: /* 994c77: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 994c7a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_994c7c: /* 994c7c: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 994c7e: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994c85: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994c88: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994c8f: jne 0x994c9c */
  if (!zf) goto L_994c9c;
L_994c91: /* 994c91: mov dword ptr [esp + esi*4 + 0xf0], edx */
  W32((uint32_t)(esp + esi*4 + 0xf0u), edx);
/* 994c98: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 994c9a: jmp 0x994cd8 */
  goto L_994cd8;
L_994c9c: /* 994c9c: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994ca3: fcomp qword ptr [ecx*8 + 0xcf73b8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b8u)));
  FPOP();
/* 994caa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994cac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994caf: jne 0x994cb3 */
  if (!zf) goto L_994cb3;
L_994cb1: /* 994cb1: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_994cb3: /* 994cb3: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994cba: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994cc1: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994cc8: fcomp qword ptr [ecx*8 + 0xcf73b8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73b8u)));
  FPOP();
/* 994ccf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994cd1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994cd4: jp 0x994cd8 */
  if (pf) goto L_994cd8;
L_994cd6: /* 994cd6: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_994cd8: /* 994cd8: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 994cdb: mov eax, dword ptr [esp + esi*4 + 0xd0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xd0u));
/* 994ce2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994ce5: lea edi, [esp + esi*4 + 0xd0] */
  edi = (uint32_t)(esp + esi*4 + 0xd0u);
/* 994cec: jne 0x994cfc */
  if (!zf) goto L_994cfc;
L_994cee: /* 994cee: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994cf1: mov dword ptr [esp + esi*4 + 0xf0], eax */
  W32((uint32_t)(esp + esi*4 + 0xf0u), eax);
/* 994cf8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 994cfa: jmp 0x994d3e */
  goto L_994d3e;
L_994cfc: /* 994cfc: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d03: fcomp qword ptr [ecx*8 + 0xcf73c0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73c0u)));
  FPOP();
/* 994d0a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d0c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994d0f: jne 0x994d16 */
  if (!zf) goto L_994d16;
L_994d11: /* 994d11: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d14: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_994d16: /* 994d16: mov eax, dword ptr [esp + esi*4 + 0xf0] */
  eax = R32((uint32_t)(esp + esi*4 + 0xf0u));
/* 994d1d: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d24: lea esi, [esp + esi*4 + 0xf0] */
  esi = (uint32_t)(esp + esi*4 + 0xf0u);
/* 994d2b: fcomp qword ptr [ecx*8 + 0xcf73c0] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73c0u)));
  FPOP();
/* 994d32: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d34: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994d37: jp 0x994d3e */
  if (pf) goto L_994d3e;
L_994d39: /* 994d39: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d3c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_994d3e: /* 994d3e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 994d41: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 994d44: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 994d47: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 994d4a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 994d4d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994d4f: jl 0x994bb9 */
  if ((sf != of)) goto L_994bb9;
L_994d55: /* 994d55: jmp 0x994d5a */
  goto L_994d5a;
L_994d57: /* 994d57: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_994d5a: /* 994d5a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994d5c: jge 0x994dc3 */
  if ((sf == of)) goto L_994dc3;
L_994d5e: /* 994d5e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_994d61: /* 994d61: mov edx, dword ptr [ebx + ecx*4] */
  edx = R32((uint32_t)(ebx + ecx*4));
/* 994d64: mov eax, dword ptr [esp + edx*4 + 0xd0] */
  eax = R32((uint32_t)(esp + edx*4 + 0xd0u));
/* 994d6b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 994d6e: lea esi, [esp + edx*4 + 0xd0] */
  esi = (uint32_t)(esp + edx*4 + 0xd0u);
/* 994d75: jne 0x994d82 */
  if (!zf) goto L_994d82;
L_994d77: /* 994d77: mov dword ptr [esp + edx*4 + 0xf0], ecx */
  W32((uint32_t)(esp + edx*4 + 0xf0u), ecx);
/* 994d7e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 994d80: jmp 0x994dbe */
  goto L_994dbe;
L_994d82: /* 994d82: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994d89: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994d90: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994d92: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 994d95: jne 0x994d99 */
  if (!zf) goto L_994d99;
L_994d97: /* 994d97: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_994d99: /* 994d99: mov eax, dword ptr [esp + edx*4 + 0xf0] */
  eax = R32((uint32_t)(esp + edx*4 + 0xf0u));
/* 994da0: fld qword ptr [eax*8 + 0xcf73a8] */
  { double v = F64((uint32_t)(eax*8 + 0xcf73a8u)); FPUSH(v); }
/* 994da7: lea edx, [esp + edx*4 + 0xf0] */
  edx = (uint32_t)(esp + edx*4 + 0xf0u);
/* 994dae: fcomp qword ptr [ecx*8 + 0xcf73a8] */
  fpu_com(ST0, F64((uint32_t)(ecx*8 + 0xcf73a8u)));
  FPOP();
/* 994db5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 994db7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 994dba: jp 0x994dbe */
  if (pf) goto L_994dbe;
L_994dbc: /* 994dbc: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_994dbe: /* 994dbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 994dbf: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994dc1: jl 0x994d61 */
  if ((sf != of)) goto L_994d61;
L_994dc3: /* 994dc3: fld qword ptr [0xcf7358] */
  { double v = F64((uint32_t)(0xcf7358u)); FPUSH(v); }
/* 994dc9: xor edx, edx */
  edx = 0;
/* 994dcb: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 994dd1: fstp qword ptr [esp + 0x110] */
  WF64((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 994dd8: jmp 0x994de0 */
  goto L_994de0;
L_994dda: /* 994dda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_994de0: /* 994de0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994de2: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 994dea: mov dword ptr [esp + 0x7c], 0x3ff00000 */
  W32((uint32_t)(esp + 0x7cu), 0x3ff00000u);
/* 994df2: je 0x994dfc */
  if (zf) goto L_994dfc;
L_994df4: /* 994df4: mov dword ptr [esp + 0x7c], 0xbff00000 */
  W32((uint32_t)(esp + 0x7cu), 0xbff00000u);
L_994dfc: /* 994dfc: fld qword ptr [0xcf7440] */
  { double v = F64((uint32_t)(0xcf7440u)); FPUSH(v); }
/* 994e02: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 994e06: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e0a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 994e0c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e0e: mov ecx, edx */
  ecx = edx;
/* 994e10: fadd qword ptr [0xcf7360] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7360u)));
/* 994e16: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 994e1a: fstp qword ptr [esp + 0xb8] */
  WF64((uint32_t)(esp + 0xb8u), ST0); FPOP();
/* 994e21: fld qword ptr [0xcf7360] */
  { double v = F64((uint32_t)(0xcf7360u)); FPUSH(v); }
/* 994e27: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e2b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 994e2d: fsubr qword ptr [esp + 0x110] */
  ST0 = (F64((uint32_t)(esp + 0x110u))) - ST0;
/* 994e34: fsub qword ptr [0xcf7440] */
  ST0 = ST0 - (F64((uint32_t)(0xcf7440u)));
/* 994e3a: fstp qword ptr [esp + 0x118] */
  WF64((uint32_t)(esp + 0x118u), ST0); FPOP();
/* 994e41: jge 0x995089 */
  if ((sf == of)) goto L_995089;
L_994e47: /* 994e47: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 994e4a: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 994e4e: mov edi, edi */
  edi = edi;
L_994e50: /* 994e50: mov eax, dword ptr [esp + ecx*4 + 0x90] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x90u));
/* 994e57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 994e59: je 0x995078 */
  if (zf) goto L_995078;
L_994e5f: /* 994e5f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e62: jg 0x994e6d */
  if ((!zf && sf == of)) goto L_994e6d;
L_994e64: /* 994e64: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 994e67: jle 0x995078 */
  if ((zf || sf != of)) goto L_995078;
L_994e6d: /* 994e6d: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 994e71: lea eax, [edx*8] */
  eax = (uint32_t)(edx*8);
/* 994e78: mov ebx, ecx */
  ebx = ecx;
/* 994e7a: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 994e7c: mov eax, dword ptr [esp + ebx*4 + 0xf0] */
  eax = R32((uint32_t)(esp + ebx*4 + 0xf0u));
/* 994e83: fmul qword ptr [eax*8 + 0xcf73a8] */
  ST0 = ST0 * (F64((uint32_t)(eax*8 + 0xcf73a8u)));
/* 994e8a: fadd qword ptr [0xcf7368] */
  ST0 = ST0 + (F64((uint32_t)(0xcf7368u)));
/* 994e90: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 994e94: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994e98: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* 994e9c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 994e9e: fadd qword ptr [esp + 0x118] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x118u)));
/* 994ea5: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 994ea9: fld qword ptr [esp + 0xb8] */
  { double v = F64((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 994eb0: fchs  */
  ST0 = -ST0;
/* 994eb2: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 994eb6: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 994ebd: fsub qword ptr [esp + 0xb8] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0xb8u)));
/* 994ec4: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 994ec8: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 994ecc: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994ed0: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994ed6: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994eda: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994ede: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 994ee2: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994ee8: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994eec: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994ef0: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 994ef4: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 994efa: fadd qword ptr [esp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x10u)));
/* 994efe: fst qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0);
/* 994f05: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f07: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 994f0b: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 994f12: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f16: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f1a: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994f1e: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 994f22: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 994f26: fmul qword ptr [0xcf7428] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7428u)));
/* 994f2c: fchs  */
  ST0 = -ST0;
/* 994f2e: fld qword ptr [esp + 0xc8] */
  { double v = F64((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 994f35: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 994f39: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 994f3d: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 994f41: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 994f45: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 994f49: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994f4d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 994f4f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994f51: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994f55: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994f57: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994f59: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994f5d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994f5f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 994f61: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 994f65: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 994f67: fstp qword ptr [esp + 0xc0] */
  WF64((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 994f6e: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 994f72: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f74: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994f78: fabs  */
  ST0 = fabs(ST0);
/* 994f7a: fsubr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) - ST0;
/* 994f7e: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994f82: fabs  */
  ST0 = fabs(ST0);
/* 994f84: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 994f88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994f8a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994f90: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 994f92: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994f96: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994f9a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 994f9e: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994fa2: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* 994fa6: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 994faa: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 994fac: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994fae: fabs  */
  ST0 = fabs(ST0);
/* 994fb0: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 994fb2: fld qword ptr [esp + 0xc0] */
  { double v = F64((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 994fb9: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994fbb: fabs  */
  ST0 = fabs(ST0);
/* 994fbd: fadd qword ptr [esp + 0xc0] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0xc0u)));
/* 994fc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 994fc6: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 994fcc: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994fd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fd4: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994fd8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 994fda: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 994fdc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 994fde: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 994fe2: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* 994fe9: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 994fed: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 994ff1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 994ff3: fabs  */
  ST0 = fabs(ST0);
/* 994ff5: fsubr qword ptr [esp + 0x18] */
  ST0 = (F64((uint32_t)(esp + 0x18u))) - ST0;
/* 994ff9: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 994ffd: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 994fff: fabs  */
  ST0 = fabs(ST0);
/* 995001: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* 995005: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995007: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 99500d: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 995011: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995013: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 995017: fsub qword ptr [esp + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x20u)));
/* 99501b: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 99501f: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* 995023: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 995027: fmul qword ptr [esp + 0x70] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x70u)));
/* 99502b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99502d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 99502f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995031: fmul qword ptr [0xcf7448] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7448u)));
/* 995037: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 995039: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 99503b: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 99503f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995041: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 995045: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 995049: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 99504d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 99504f: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 995051: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995053: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 995057: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 99505b: fst qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0);
/* 99505f: fmul qword ptr [0xcf7340] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7340u)));
/* 995065: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 995067: fmul qword ptr [0xcf7338] */
  ST0 = ST0 * (F64((uint32_t)(0xcf7338u)));
/* 99506d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99506f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995071: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995074: jnp 0x9950d4 */
  if (!pf) goto L_9950d4;
L_995076: /* 995076: fstp st(0) */
  STI(0) = ST0; FPOP();
L_995078: /* 995078: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 995079: lea eax, [edx + esi - 1] */
  eax = (uint32_t)(edx + esi + 0xffffffffu);
/* 99507d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99507f: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 995083: jl 0x994e50 */
  if ((sf != of)) goto L_994e50;
L_995089: /* 995089: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99508a: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99508d: jl 0x994de0 */
  if ((sf != of)) goto L_994de0;
L_995093: /* 995093: lea edi, [esp + 0x90] */
  edi = (uint32_t)(esp + 0x90u);
/* 99509a: mov esi, 0xcf7430 */
  esi = 0xcf7430u;
/* 99509f: nop  */
L_9950a0: /* 9950a0: fld qword ptr [0xcf7428] */
  { double v = F64((uint32_t)(0xcf7428u)); FPUSH(v); }
/* 9950a6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9950a9: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 9950ab: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9950b1: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 9950b7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 9950ba: call 0x99cf1e */
  esp -= 4; W32(esp, 0x9950bfu); SPILL(); hle_floor(); RELOAD();
/* 9950bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9950c2: call 0x99c958 */
  esp -= 4; W32(esp, 0x9950c7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 9950c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9950c9: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 9950cb: jge 0x99513c */
  if ((sf == of)) goto L_99513c;
L_9950cd: /* 9950cd: xor eax, eax */
  eax = 0;
/* 9950cf: jmp 0x995148 */
  goto L_995148;
L_9950d4: /* 9950d4: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9950da: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 9950de: fdiv qword ptr [esp + 0x28] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x28u)));
/* 9950e2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 9950e6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 9950e9: mov dword ptr [0xcf7338], ecx */
  W32((uint32_t)(0xcf7338u), ecx);
/* 9950ef: mov dword ptr [0xcf733c], edx */
  W32((uint32_t)(0xcf733cu), edx);
/* 9950f5: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 9950fb: fdiv qword ptr [esp + 0x10] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x10u)));
/* 9950ff: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 995101: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* 995105: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 995109: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 99510d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99510f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995111: fstp qword ptr [0xcf7430] */
  WF64((uint32_t)(0xcf7430u), ST0); FPOP();
/* 995117: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 995119: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 99511d: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 995121: fmul qword ptr [esp + 0x58] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x58u)));
/* 995125: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 995127: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995129: fstp qword ptr [0xcf7438] */
  WF64((uint32_t)(0xcf7438u), ST0); FPOP();
/* 99512f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 995131: fstp qword ptr [0xcf7340] */
  WF64((uint32_t)(0xcf7340u), ST0); FPOP();
/* 995137: jmp 0x994705 */
  goto L_994705;
L_99513c: /* 99513c: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995141: jle 0x995148 */
  if ((zf || sf != of)) goto L_995148;
L_995143: /* 995143: mov eax, 0xff */
  eax = 0xffu;
L_995148: /* 995148: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 99514a: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99514d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 995150: cmp esi, 0xcf7440 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcf7440u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995156: jl 0x9950a0 */
  if ((sf != of)) goto L_9950a0;
L_99515c: /* 99515c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 99515f: mov ecx, 2 */
  ecx = 0x2u;
/* 995164: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995166: jle 0x9951ab */
  if ((zf || sf != of)) goto L_9951ab;
L_995168: /* 995168: lea esi, [edi - 2] */
  esi = (uint32_t)(edi + 0xfffffffeu);
/* 99516b: mov eax, esi */
  eax = esi;
/* 99516d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99516e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 995170: mov edx, eax */
  edx = eax;
/* 995172: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 995174: mov dword ptr [esp + 0x6c], edx */
  W32((uint32_t)(esp + 0x6cu), edx);
/* 995178: jmp 0x995180 */
  goto L_995180;
L_99517a: /* 99517a: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 99517e: mov edi, edi */
  edi = edi;
L_995180: /* 995180: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 995183: imul ebx, dword ptr [esp + 0x94] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x94u)));
  ebx = (uint32_t)r;
  }
/* 99518b: mov eax, esi */
  eax = esi;
/* 99518d: imul eax, dword ptr [esp + 0x90] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x90u)));
  eax = (uint32_t)r;
  }
/* 995195: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 995197: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995199: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 99519a: idiv dword ptr [esp + 0x3c] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x3cu)); if (!d) d = (int32_t)guest_divzero(0x99519a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 99519e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99519f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 9951a0: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9951a2: mov dword ptr [esp + ecx*4 + 0x8c], eax */
  W32((uint32_t)(esp + ecx*4 + 0x8cu), eax);
/* 9951a9: jl 0x99517a */
  if ((sf != of)) goto L_99517a;
L_9951ab: /* 9951ab: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 9951ae: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9951b4: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* 9951bb: fst qword ptr [0xcf7330] */
  WF64((uint32_t)(0xcf7330u), ST0);
/* 9951c1: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 9951c8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 9951ca: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 9951cd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 9951d0: xor ebx, ebx */
  ebx = 0;
/* 9951d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9951d4: jle 0x995269 */
  if ((zf || sf != of)) goto L_995269;
L_9951da: /* 9951da: jmp 0x9951e0 */
  goto L_9951e0;
L_9951dc: /* 9951dc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 9951df: nop  */
L_9951e0: /* 9951e0: mov ecx, 1 */
  ecx = 0x1u;
/* 9951e5: xor esi, esi */
  esi = 0;
/* 9951e7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9951e9: jle 0x995234 */
  if ((zf || sf != of)) goto L_995234;
L_9951eb: /* 9951eb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 9951ee: fld qword ptr [eax + ebx*8] */
  { double v = F64((uint32_t)(eax + ebx*8)); FPUSH(v); }
/* 9951f1: xor edi, edi */
  edi = 0;
/* 9951f3: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9951f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_995200: /* 995200: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 995207: fild dword ptr [esp + edx + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + edx + 0x90u)); FPUSH(v); }
/* 99520e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 995210: fabs  */
  ST0 = fabs(ST0);
/* 995212: fild dword ptr [esp + edi + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + edi + 0x90u)); FPUSH(v); }
/* 995219: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 99521b: fabs  */
  ST0 = fabs(ST0);
/* 99521d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 99521f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995221: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 995224: jne 0x99522a */
  if (!zf) goto L_99522a;
L_995226: /* 995226: mov esi, ecx */
  esi = ecx;
/* 995228: mov edi, edx */
  edi = edx;
L_99522a: /* 99522a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 99522d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99522e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995230: jl 0x995200 */
  if ((sf != of)) goto L_995200;
L_995232: /* 995232: fstp st(0) */
  STI(0) = ST0; FPOP();
L_995234: /* 995234: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 995237: fild dword ptr [esp + esi*4 + 0x90] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + esi*4 + 0x90u)); FPUSH(v); }
/* 99523e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 995241: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 995244: mov dword ptr [ecx + ebx*4], esi */
  W32((uint32_t)(ecx + ebx*4), esi);
/* 995247: fld qword ptr [edx + ebx*8] */
  { double v = F64((uint32_t)(edx + ebx*8)); FPUSH(v); }
/* 99524a: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 995250: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 995251: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995253: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 995255: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 995257: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 995259: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 99525b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99525d: jl 0x9951dc */
  if ((sf != of)) goto L_9951dc;
L_995263: /* 995263: fst qword ptr [0xcf7330] */
  WF64((uint32_t)(0xcf7330u), ST0);
L_995269: /* 995269: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99526a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 99526b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99526c: mov esp, ebp */
  esp = ebp;
/* 99526e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99526f: ret  */
  esp += 4; SPILL(); return;
}

void f_995270(void) {
  LOAD_REGS();
L_995270: /* 995270: sub esp, 0x1d8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 995276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995277: mov eax, 6 */
  eax = 0x6u;
/* 99527c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99527d: xor ecx, ecx */
  ecx = 0;
/* 99527f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 995280: mov ebx, 1 */
  ebx = 0x1u;
/* 995285: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 995289: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 99528d: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 995291: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 995295: mov eax, dword ptr [esp + 0x1e8] */
  eax = R32((uint32_t)(esp + 0x1e8u));
/* 99529c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99529d: xor edi, edi */
  edi = 0;
/* 99529f: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9952a1: mov ebp, ecx */
  ebp = ecx;
/* 9952a3: mov edx, ecx */
  edx = ecx;
/* 9952a5: mov esi, ecx */
  esi = ecx;
/* 9952a7: mov dword ptr [esp + 0x6c], 8 */
  W32((uint32_t)(esp + 0x6cu), 0x8u);
/* 9952af: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 9952b3: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 9952b7: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 9952bb: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* 9952bf: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 9952c3: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 9952c7: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 9952cb: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 9952cf: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 9952d3: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 9952d7: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 9952db: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 9952df: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 9952e3: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 9952e7: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 9952eb: jle 0x995399 */
  if ((zf || sf != of)) goto L_995399;
L_9952f1: /* 9952f1: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
L_9952f4: /* 9952f4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 9952f6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 9952f7: fstp qword ptr [ebp*8 + 0xcf7470] */
  WF64((uint32_t)(ebp*8 + 0xcf7470u), ST0); FPOP();
/* 9952fe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 9952ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 995301: fstp qword ptr [edx*8 + 0xcf74f0] */
  WF64((uint32_t)(edx*8 + 0xcf74f0u), ST0); FPOP();
/* 995308: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 99530a: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 995310: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995312: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995315: jnp 0x995329 */
  if (!pf) goto L_995329;
L_995317: /* 995317: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 99531b: fstp qword ptr [eax*8 + 0xcf7578] */
  WF64((uint32_t)(eax*8 + 0xcf7578u), ST0); FPOP();
/* 995322: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 995323: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 995327: jmp 0x99532b */
  goto L_99532b;
L_995329: /* 995329: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99532b: /* 99532b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 99532d: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 995333: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995335: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995338: jnp 0x99534c */
  if (!pf) goto L_99534c;
L_99533a: /* 99533a: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 99533e: fstp qword ptr [eax*8 + 0xcf75f8] */
  WF64((uint32_t)(eax*8 + 0xcf75f8u), ST0); FPOP();
/* 995345: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 995346: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 99534a: jmp 0x99534e */
  goto L_99534e;
L_99534c: /* 99534c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99534e: /* 99534e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 995350: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 995356: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995358: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99535b: jnp 0x995374 */
  if (!pf) goto L_995374;
L_99535d: /* 99535d: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 995363: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995365: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995368: jnp 0x995374 */
  if (!pf) goto L_995374;
L_99536a: /* 99536a: fstp qword ptr [ecx*8 + 0xcf7678] */
  WF64((uint32_t)(ecx*8 + 0xcf7678u), ST0); FPOP();
/* 995371: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 995372: jmp 0x995376 */
  goto L_995376;
L_995374: /* 995374: fstp st(0) */
  STI(0) = ST0; FPOP();
L_995376: /* 995376: mov eax, dword ptr [esp + 0x1ec] */
  eax = R32((uint32_t)(esp + 0x1ecu));
/* 99537d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 99537e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 995381: cmp edi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 995383: jl 0x9952f4 */
  if ((sf != of)) goto L_9952f4;
L_995389: /* 995389: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 99538d: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 995391: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 995395: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
L_995399: /* 995399: mov eax, dword ptr [esp + 0x1ec] */
  eax = R32((uint32_t)(esp + 0x1ecu));
/* 9953a0: mov edi, dword ptr [eax + 0x44] */
  edi = R32((uint32_t)(eax + 0x44u));
/* 9953a3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9953a5: je 0x9953b1 */
  if (zf) goto L_9953b1;
L_9953a7: /* 9953a7: cmp ebp, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9953ab: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 9953af: jne 0x9953b9 */
  if (!zf) goto L_9953b9;
L_9953b1: /* 9953b1: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
L_9953b9: /* 9953b9: xor edi, edi */
  edi = 0;
/* 9953bb: cmp dword ptr [eax + 0x48], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x48u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9953be: je 0x9953c8 */
  if (zf) goto L_9953c8;
L_9953c0: /* 9953c0: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9953c2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 9953c6: jne 0x9953cc */
  if (!zf) goto L_9953cc;
L_9953c8: /* 9953c8: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_9953cc: /* 9953cc: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 9953d0: xor eax, eax */
  eax = 0;
/* 9953d2: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9953d4: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9953d7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 9953db: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 9953df: mov ebx, 0xcf7478 */
  ebx = 0xcf7478u;
/* 9953e4: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 9953e8: xor eax, eax */
  eax = 0;
/* 9953ea: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9953ec: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9953ef: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 9953f3: xor eax, eax */
  eax = 0;
/* 9953f5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9953f7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9953fa: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 995401: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 995405: xor esi, esi */
  esi = 0;
/* 995407: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 99540b: jmp 0x995410 */
  goto L_995410;
L_995410: /* 995410: mov eax, dword ptr [esp + esi + 0x18] */
  eax = R32((uint32_t)(esp + esi + 0x18u));
/* 995414: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995416: je 0x9954a0 */
  if (zf) goto L_9954a0;
L_99541c: /* 99541c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 995420: mov eax, dword ptr [esp + esi + 0x2c] */
  eax = R32((uint32_t)(esp + esi + 0x2cu));
/* 995424: mov ecx, dword ptr [esp + esi + 0x6c] */
  ecx = R32((uint32_t)(esp + esi + 0x6cu));
/* 995428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 995429: lea ebp, [esp + edi + 0x84] */
  ebp = (uint32_t)(esp + edi + 0x84u);
/* 995430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 995431: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 995432: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 995433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 995434: call 0x9944a0 */
  esp -= 4; W32(esp, 0x995439u); SPILL(); f_9944a0(); if (g_unwind) return; RELOAD();
/* 995439: fstp qword ptr [edi + 0xcf7450] */
  WF64((uint32_t)(edi + 0xcf7450u), ST0); FPOP();
/* 99543f: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 995443: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 995446: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995448: mov ecx, 1 */
  ecx = 0x1u;
/* 99544d: mov dword ptr [esp + esi + 0x18], ecx */
  W32((uint32_t)(esp + esi + 0x18u), ecx);
/* 995451: je 0x995478 */
  if (zf) goto L_995478;
L_995453: /* 995453: mov eax, dword ptr [esp + esi + 0x44] */
  eax = R32((uint32_t)(esp + esi + 0x44u));
/* 995457: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995459: jne 0x995478 */
  if (!zf) goto L_995478;
L_99545b: /* 99545b: cmp dword ptr [ebp], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99545f: je 0x995470 */
  if (zf) goto L_995470;
L_995461: /* 995461: mov eax, dword ptr [esp + edi + 0x84] */
  eax = R32((uint32_t)(esp + edi + 0x84u));
/* 995468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99546a: je 0x995470 */
  if (zf) goto L_995470;
L_99546c: /* 99546c: xor eax, eax */
  eax = 0;
/* 99546e: jmp 0x995472 */
  goto L_995472;
L_995470: /* 995470: mov eax, ecx */
  eax = ecx;
L_995472: /* 995472: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 995474: mov dword ptr [esp + esi + 0x18], eax */
  W32((uint32_t)(esp + esi + 0x18u), eax);
L_995478: /* 995478: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99547c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99547e: je 0x9954a0 */
  if (zf) goto L_9954a0;
L_995480: /* 995480: mov eax, dword ptr [esp + esi + 0x58] */
  eax = R32((uint32_t)(esp + esi + 0x58u));
/* 995484: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995486: jne 0x9954a0 */
  if (!zf) goto L_9954a0;
L_995488: /* 995488: cmp dword ptr [ebp], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99548b: je 0x99549a */
  if (zf) goto L_99549a;
L_99548d: /* 99548d: cmp dword ptr [esp + edi + 0x84], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + edi + 0x84u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 995494: je 0x99549a */
  if (zf) goto L_99549a;
L_995496: /* 995496: xor eax, eax */
  eax = 0;
/* 995498: jmp 0x99549c */
  goto L_99549c;
L_99549a: /* 99549a: mov eax, ecx */
  eax = ecx;
L_99549c: /* 99549c: and dword ptr [esp + esi + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + esi + 0x18u), r);
  }
L_9954a0: /* 9954a0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9954a4: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9954a7: add ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9954ad: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 9954b0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9954b3: cmp ebx, 0xcf76f8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcf76f8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9954b9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 9954bd: jl 0x995410 */
  if ((sf != of)) goto L_995410;
L_9954c3: /* 9954c3: xor ecx, ecx */
  ecx = 0;
L_9954c5: /* 9954c5: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 9954c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9954cb: jne 0x9954d3 */
  if (!zf) goto L_9954d3;
L_9954cd: /* 9954cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9954ce: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9954d1: jl 0x9954c5 */
  if ((sf != of)) goto L_9954c5;
L_9954d3: /* 9954d3: mov esi, ecx */
  esi = ecx;
/* 9954d5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9954d6: mov edx, 5 */
  edx = 0x5u;
/* 9954db: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9954dd: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9954e0: jl 0x9955b3 */
  if ((sf != of)) goto L_9955b3;
L_9954e6: /* 9954e6: mov ebp, 0x10 */
  ebp = 0x10u;
/* 9954eb: mov eax, 0x18 */
  eax = 0x18u;
/* 9954f0: sub ebp, 0xcf7458 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcf7458u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 9954f6: sub eax, 0xcf7458 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf7458u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9954fb: lea edx, [esi*8] */
  edx = (uint32_t)(esi*8);
/* 995502: lea ebx, [ecx*8 + 8] */
  ebx = (uint32_t)(ecx*8 + 0x8u);
/* 995509: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_99550d: /* 99550d: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 995511: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995513: je 0x995533 */
  if (zf) goto L_995533;
L_995515: /* 995515: lea edi, [ecx*8] */
  edi = (uint32_t)(ecx*8);
/* 99551c: fld qword ptr [edi + 0xcf7450] */
  { double v = F64((uint32_t)(edi + 0xcf7450u)); FPUSH(v); }
/* 995522: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 995528: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99552a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99552d: jp 0x995533 */
  if (pf) goto L_995533;
L_99552f: /* 99552f: mov esi, ecx */
  esi = ecx;
/* 995531: mov edx, edi */
  edx = edi;
L_995533: /* 995533: mov eax, dword ptr [esp + ecx*4 + 0x1c] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x1cu));
/* 995537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995539: je 0x995554 */
  if (zf) goto L_995554;
L_99553b: /* 99553b: fld qword ptr [ecx*8 + 0xcf7458] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf7458u)); FPUSH(v); }
/* 995542: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 995548: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99554a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99554d: jp 0x995554 */
  if (pf) goto L_995554;
L_99554f: /* 99554f: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 995552: mov edx, ebx */
  edx = ebx;
L_995554: /* 995554: mov eax, dword ptr [esp + ecx*4 + 0x20] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x20u));
/* 995558: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99555a: je 0x99557a */
  if (zf) goto L_99557a;
L_99555c: /* 99555c: fld qword ptr [ecx*8 + 0xcf7460] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf7460u)); FPUSH(v); }
/* 995563: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 995569: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99556b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99556e: jp 0x99557a */
  if (pf) goto L_99557a;
L_995570: /* 995570: lea esi, [ecx + 2] */
  esi = (uint32_t)(ecx + 0x2u);
/* 995573: lea edx, [ebp + ecx*8 + 0xcf7458] */
  edx = (uint32_t)(ebp + ecx*8 + 0xcf7458u);
L_99557a: /* 99557a: mov eax, dword ptr [esp + ecx*4 + 0x24] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x24u));
/* 99557e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995580: je 0x9955a4 */
  if (zf) goto L_9955a4;
L_995582: /* 995582: fld qword ptr [ecx*8 + 0xcf7468] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf7468u)); FPUSH(v); }
/* 995589: fcomp qword ptr [edx + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf7450u)));
  FPOP();
/* 99558f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 995591: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 995594: jp 0x9955a4 */
  if (pf) goto L_9955a4;
L_995596: /* 995596: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 99559a: lea esi, [ecx + 3] */
  esi = (uint32_t)(ecx + 0x3u);
/* 99559d: lea edx, [eax + ecx*8 + 0xcf7458] */
  edx = (uint32_t)(eax + ecx*8 + 0xcf7458u);
L_9955a4: /* 9955a4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9955a7: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 9955aa: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9955ad: jl 0x99550d */
  if ((sf != of)) goto L_99550d;
L_9955b3: /* 9955b3: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9955b6: jge 0x9955ec */
  if ((sf == of)) goto L_9955ec;
L_9955b8: /* 9955b8: lea edi, [esi*8] */
  edi = (uint32_t)(esi*8);
/* 9955bf: nop  */
L_9955c0: /* 9955c0: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 9955c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9955c6: je 0x9955e6 */
  if (zf) goto L_9955e6;
L_9955c8: /* 9955c8: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 9955cf: fld qword ptr [edx + 0xcf7450] */
  { double v = F64((uint32_t)(edx + 0xcf7450u)); FPUSH(v); }
/* 9955d5: fcomp qword ptr [edi + 0xcf7450] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xcf7450u)));
  FPOP();
/* 9955db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9955dd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9955e0: jp 0x9955e6 */
  if (pf) goto L_9955e6;
L_9955e2: /* 9955e2: mov esi, ecx */
  esi = ecx;
/* 9955e4: mov edi, edx */
  edi = edx;
L_9955e6: /* 9955e6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9955e7: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9955ea: jl 0x9955c0 */
  if ((sf != of)) goto L_9955c0;
L_9955ec: /* 9955ec: mov ecx, dword ptr [esp + 0x1ec] */
  ecx = R32((uint32_t)(esp + 0x1ecu));
/* 9955f3: mov edx, dword ptr [esp + esi*4 + 0x6c] */
  edx = R32((uint32_t)(esp + esi*4 + 0x6cu));
/* 9955f7: mov eax, dword ptr [esp + esi*8 + 0x80] */
  eax = R32((uint32_t)(esp + esi*8 + 0x80u));
/* 9955fe: mov dword ptr [ecx + 0x4c], edx */
  W32((uint32_t)(ecx + 0x4cu), edx);
/* 995601: mov edx, dword ptr [esp + esi*8 + 0x84] */
  edx = R32((uint32_t)(esp + esi*8 + 0x84u));
/* 995608: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 99560b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 99560d: mov dword ptr [ecx + 0x54], edx */
  W32((uint32_t)(ecx + 0x54u), edx);
/* 995610: xor edi, edi */
  edi = 0;
/* 995612: xor edx, edx */
  edx = 0;
/* 995614: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 995616: jle 0x995681 */
  if ((zf || sf != of)) goto L_995681;
L_995618: /* 995618: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99561b: jmp 0x995620 */
  goto L_995620;
L_995620: /* 995620: fld dword ptr [ecx - 0x54] */
  { double v = F32((uint32_t)(ecx + 0xffffffacu)); FPUSH(v); }
/* 995623: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 995629: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99562b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99562e: jp 0x995642 */
  if (pf) goto L_995642;
L_995630: /* 995630: mov eax, dword ptr [esp + esi*4 + 0x44] */
  eax = R32((uint32_t)(esp + esi*4 + 0x44u));
/* 995634: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995636: je 0x995642 */
  if (zf) goto L_995642;
L_995638: /* 995638: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99563a: mov dword ptr [ecx], 6 */
  W32((uint32_t)(ecx), 0x6u);
/* 995640: jmp 0x995670 */
  goto L_995670;
L_995642: /* 995642: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 995648: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99564a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99564d: jp 0x99565f */
  if (pf) goto L_99565f;
L_99564f: /* 99564f: mov eax, dword ptr [esp + esi*4 + 0x58] */
  eax = R32((uint32_t)(esp + esi*4 + 0x58u));
/* 995653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 995655: je 0x99565f */
  if (zf) goto L_99565f;
L_995657: /* 995657: mov dword ptr [ecx], 7 */
  W32((uint32_t)(ecx), 0x7u);
/* 99565d: jmp 0x995670 */
  goto L_995670;
L_99565f: /* 99565f: mov eax, esi */
  eax = esi;
/* 995661: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 995664: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 995666: mov eax, dword ptr [esp + eax*4 + 0xa8] */
  eax = R32((uint32_t)(esp + eax*4 + 0xa8u));
/* 99566d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 99566f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_995670: /* 995670: mov eax, dword ptr [esp + 0x1ec] */
  eax = R32((uint32_t)(esp + 0x1ecu));
/* 995677: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 995679: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99567a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99567d: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99567f: jl 0x995620 */
  if ((sf != of)) goto L_995620;
L_995681: /* 995681: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 995682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 995683: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 995684: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 995685: add esp, 0x1d8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1d8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99568b: ret  */
  esp += 4; SPILL(); return;
}
