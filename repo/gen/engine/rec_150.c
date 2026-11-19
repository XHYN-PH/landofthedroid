#include "recomp.h"
#include "rec_mod.h"

void f_99187d(void) {
  LOAD_REGS();
  goto L_99187d;
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
L_99187d: /* 99187d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
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

void f_991afd(void) {
  LOAD_REGS();
L_991afd: /* 991afd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
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

void f_991ea8(void) {
  LOAD_REGS();
L_991ea8: /* 991ea8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 991eaf: nop  */
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

void f_992e70(void) {
  LOAD_REGS();
L_992e70: /* 992e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 992e71: mov ebp, esp */
  ebp = esp;
/* 992e73: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 992e76: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 992e79: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 992e7c: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 992e7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 992e7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 992e80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 992e81: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 992e83: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992e86: mov dword ptr [0xb04364], eax */
  W32((uint32_t)(0xb04364u), eax);
/* 992e8b: mov eax, dword ptr [0xcf6b78] */
  eax = R32((uint32_t)(0xcf6b78u));
/* 992e90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 992e92: jne 0x99300b */
  if (!zf) goto L_99300b;
L_992e98: /* 992e98: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 992e9a: mov dword ptr [0xcf6b78], 1 */
  W32((uint32_t)(0xcf6b78u), 0x1u);
/* 992ea4: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 992ea8: jmp 0x992eb0 */
  goto L_992eb0;
L_992eb0: /* 992eb0: mov edi, dword ptr [edx*4 + 0xb04360] */
  edi = R32((uint32_t)(edx*4 + 0xb04360u));
/* 992eb7: mov eax, 1 */
  eax = 0x1u;
/* 992ebc: mov ecx, edi */
  ecx = edi;
/* 992ebe: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 992ec0: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 992ec4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 992ec5: mov ebx, eax */
  ebx = eax;
/* 992ec7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992ec9: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 992ecd: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 992ed1: jl 0x992ffd */
  if ((sf != of)) goto L_992ffd;
L_992ed7: /* 992ed7: jmp 0x992ee0 */
  goto L_992ee0;
L_992ee0: /* 992ee0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992ee2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992ee6: jl 0x992fee */
  if ((sf != of)) goto L_992fee;
L_992eec: /* 992eec: mov esi, 8 */
  esi = 0x8u;
/* 992ef1: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esi = r;
  }
/* 992ef3: mov edx, ebx */
  edx = ebx;
/* 992ef5: mov ecx, esi */
  ecx = esi;
/* 992ef7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 992ef9: lea ecx, [edi + edi - 8] */
  ecx = (uint32_t)(edi + edi + 0xfffffff8u);
/* 992efd: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
  }
/* 992eff: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 992f03: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 992f05: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 992f09: jmp 0x992f17 */
  goto L_992f17;
L_992f0b: /* 992f0b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992f0f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 992f13: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_992f17: /* 992f17: lea ecx, [edi + edi - 8] */
  ecx = (uint32_t)(edi + edi + 0xfffffff8u);
/* 992f1b: mov ebx, eax */
  ebx = eax;
/* 992f1d: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* 992f1f: mov ecx, esi */
  ecx = esi;
/* 992f21: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 992f23: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 992f2b: mov edi, 0xb04380 */
  edi = 0xb04380u;
/* 992f30: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 992f32: jmp 0x992f38 */
  goto L_992f38;
L_992f34: /* 992f34: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_992f38: /* 992f38: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 992f3b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 992f3d: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 992f40: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 992f43: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f45: add eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f48: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f49: idiv dword ptr [edi + 0xc] */
  { int32_t d = (int32_t)R32((uint32_t)(edi + 0xcu)); if (!d) d = (int32_t)guest_divzero(0x992f49);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 992f4c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 992f50: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 992f53: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 992f57: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f59: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 992f5c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f5e: mov esi, eax */
  esi = eax;
/* 992f60: mov al, byte ptr [esi + esi*2 + 0xcf5078] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf5078u))) & 0xffu);
/* 992f67: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 992f69: je 0x992f95 */
  if (zf) goto L_992f95;
L_992f6b: /* 992f6b: movzx edx, byte ptr [esi + esi*2 + 0xcf5079] */
  edx = (uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf5079u)));
/* 992f73: movzx eax, byte ptr [esi + esi*2 + 0xcf507a] */
  eax = (uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf507au)));
/* 992f7b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f7d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f7e: mov ecx, eax */
  ecx = eax;
/* 992f80: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 992f82: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 992f84: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 992f88: mov eax, ebx */
  eax = ebx;
/* 992f8a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f8c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f8d: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 992f8f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f91: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992f93: jle 0x992fbb */
  if ((zf || sf != of)) goto L_992fbb;
L_992f95: /* 992f95: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 992f99: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 992f9d: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 992fa1: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 992fa3: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 992fa5: mov byte ptr [esi + esi*2 + 0xcf5078], 1 */
  W8((uint32_t)(esi + esi*2 + 0xcf5078u), 0x1u);
/* 992fad: mov byte ptr [esi + esi*2 + 0xcf5079], dl */
  W8((uint32_t)(esi + esi*2 + 0xcf5079u), (edx & 0xffu));
/* 992fb4: mov byte ptr [esi + esi*2 + 0xcf507a], al */
  W8((uint32_t)(esi + esi*2 + 0xcf507au), (eax & 0xffu));
L_992fbb: /* 992fbb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 992fbf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 992fc0: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 992fc3: cmp edi, 0xb043b0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb043b0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992fc9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 992fcd: jl 0x992f34 */
  if ((sf != of)) goto L_992f34;
L_992fd3: /* 992fd3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992fd7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 992fdb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 992fdc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992fe0: jns 0x992f0b */
  if (!sf) goto L_992f0b;
L_992fe6: /* 992fe6: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 992fea: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
L_992fee: /* 992fee: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 992fef: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 992ff3: jns 0x992ee0 */
  if (!sf) goto L_992ee0;
L_992ff9: /* 992ff9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_992ffd: /* 992ffd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 992ffe: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993001: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 993005: jl 0x992eb0 */
  if ((sf != of)) goto L_992eb0;
L_99300b: /* 99300b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99300e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 993010: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993011: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993013: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 99301b: jle 0x99332c */
  if ((zf || sf != of)) goto L_99332c;
L_993021: /* 993021: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 993024: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 993027: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 993029: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 99302d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 993031: mov eax, 0xcf5060 */
  eax = 0xcf5060u;
/* 993036: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99303a: jmp 0x993040 */
  goto L_993040;
L_99303c: /* 99303c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_993040: /* 993040: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 993043: xor ecx, ecx */
  ecx = 0;
/* 993045: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 993047: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 99304a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 99304e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993052: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_993056: /* 993056: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 993058: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99305b: fdiv qword ptr [esi + edi] */
  ST0 = ST0 / (F64((uint32_t)(esi + edi)));
/* 99305e: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993064: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 99306a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 99306d: call 0x99cf1e */
  esp -= 4; W32(esp, 0x993072u); SPILL(); hle_floor(); RELOAD();
/* 993072: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993075: call 0x99c958 */
  esp -= 4; W32(esp, 0x99307au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 99307a: mov ebx, eax */
  ebx = eax;
/* 99307c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99307e: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 993082: jge 0x99308e */
  if ((sf == of)) goto L_99308e;
L_993084: /* 993084: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 99308c: jmp 0x99309e */
  goto L_99309e;
L_99308e: /* 99308e: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993094: jl 0x9930a2 */
  if ((sf != of)) goto L_9930a2;
L_993096: /* 993096: mov dword ptr [esp + 0x1c], 0xff */
  W32((uint32_t)(esp + 0x1cu), 0xffu);
L_99309e: /* 99309e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_9930a2: /* 9930a2: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9930a6: lea ecx, [edx + ebx*2] */
  ecx = (uint32_t)(edx + ebx*2);
/* 9930a9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9930ad: mov eax, ebx */
  eax = ebx;
/* 9930af: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9930b1: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 9930b4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9930b6: mov dl, byte ptr [eax + eax*2 + 0xcf5078] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + eax*2 + 0xcf5078u))) & 0xffu);
/* 9930bd: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 9930c1: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 9930c9: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
/* 9930cd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9930d1: mov ecx, 0xcf5050 */
  ecx = 0xcf5050u;
/* 9930d6: jmp 0x9930e0 */
  goto L_9930e0;
L_9930d8: /* 9930d8: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 9930dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9930e0: /* 9930e0: mov al, byte ptr [esp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 9930e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9930e6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 9930ea: je 0x99310c */
  if (zf) goto L_99310c;
L_9930ec: /* 9930ec: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 9930ee: fdiv qword ptr [esi + edi] */
  ST0 = ST0 / (F64((uint32_t)(esi + edi)));
/* 9930f1: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9930f7: fisub dword ptr [esp + 0x1c] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(esp + 0x1cu)));
/* 9930fb: fimul dword ptr [esp + 0x20] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x20u)));
/* 9930ff: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 993105: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993107: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99310a: jne 0x99316f */
  if (!zf) goto L_99316f;
L_99310c: /* 99310c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993110: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993112: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993114: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 993118: jge 0x99311e */
  if ((sf == of)) goto L_99311e;
L_99311a: /* 99311a: xor ebx, ebx */
  ebx = 0;
/* 99311c: jmp 0x99312b */
  goto L_99312b;
L_99311e: /* 99311e: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993124: jl 0x99312f */
  if ((sf != of)) goto L_99312f;
L_993126: /* 993126: mov ebx, 0xff */
  ebx = 0xffu;
L_99312b: /* 99312b: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_99312f: /* 99312f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 993133: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 993136: mov eax, ebx */
  eax = ebx;
/* 993138: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99313a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99313e: lea edx, [edx + eax*2] */
  edx = (uint32_t)(edx + eax*2);
/* 993141: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993143: mov dl, byte ptr [eax + eax*2 + 0xcf5078] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + eax*2 + 0xcf5078u))) & 0xffu);
/* 99314a: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99314c: lea eax, [eax + eax*2 + 0xcf5078] */
  eax = (uint32_t)(eax + eax*2 + 0xcf5078u);
/* 993153: jne 0x99316f */
  if (!zf) goto L_99316f;
L_993155: /* 993155: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993159: imul edx, edx, 0x1b */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1bu);
  edx = (uint32_t)r;
  }
/* 99315c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993160: /* 993160: add ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993164: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993166: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 993169: je 0x993160 */
  if (zf) goto L_993160;
L_99316b: /* 99316b: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_99316f: /* 99316f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 993172: xor edx, edx */
  edx = 0;
/* 993174: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993177: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 993179: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99317c: jl 0x99320a */
  if ((sf != of)) goto L_99320a;
L_993182: /* 993182: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 993186: mov ebx, 3 */
  ebx = 0x3u;
/* 99318b: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
L_99318e: /* 99318e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993190: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993193: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 993196: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993199: fld qword ptr [eax - 0x30] */
  { double v = F64((uint32_t)(eax + 0xffffffd0u)); FPUSH(v); }
/* 99319c: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99319f: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9931a2: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931a8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931aa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931ac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931ae: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931b0: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931b6: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931b9: fld qword ptr [eax - 0x78] */
  { double v = F64((uint32_t)(eax + 0xffffff88u)); FPUSH(v); }
/* 9931bc: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931c2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931c4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931c8: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931ca: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931ce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931d0: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931d3: fld qword ptr [eax - 0x60] */
  { double v = F64((uint32_t)(eax + 0xffffffa0u)); FPUSH(v); }
/* 9931d6: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931dc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931e2: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931e4: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931ea: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931ed: fld qword ptr [eax - 0x48] */
  { double v = F64((uint32_t)(eax + 0xffffffb8u)); FPUSH(v); }
/* 9931f0: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931f8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931fa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931fc: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931fe: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 993200: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993202: jl 0x99318e */
  if ((sf != of)) goto L_99318e;
L_993204: /* 993204: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 993208: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99320a: /* 99320a: cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99320d: jge 0x993256 */
  if ((sf == of)) goto L_993256;
L_99320f: /* 99320f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 993213: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 993217: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 99321a: mov ebx, edx */
  ebx = edx;
/* 99321c: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99321e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 993221: lea eax, [eax + ebx*8] */
  eax = (uint32_t)(eax + ebx*8);
/* 993224: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 993227: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 993229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993230: /* 993230: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993232: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993235: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 993236: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 993239: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 99323c: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993242: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 993244: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993246: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 993248: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 99324a: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 99324c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99324e: jne 0x993230 */
  if (!zf) goto L_993230;
L_993250: /* 993250: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 993254: fstp st(0) */
  STI(0) = ST0; FPOP();
L_993256: /* 993256: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99325a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 99325e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 993260: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993263: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993266: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 993268: cmp ecx, 0xcf5060 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf5060u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99326e: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 993272: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 993276: jl 0x9930d8 */
  if ((sf != of)) goto L_9930d8;
L_99327c: /* 99327c: fld qword ptr [0xcf5050] */
  { double v = F64((uint32_t)(0xcf5050u)); FPUSH(v); }
/* 993282: fcomp qword ptr [0xcf5058] */
  fpu_com(ST0, F64((uint32_t)(0xcf5058u)));
  FPOP();
/* 993288: fld qword ptr [0xcf5050] */
  { double v = F64((uint32_t)(0xcf5050u)); FPUSH(v); }
/* 99328e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993290: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993293: jp 0x9932a3 */
  if (pf) goto L_9932a3;
L_993295: /* 993295: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 993299: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 99329b: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 99329d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9932a1: jmp 0x9932d9 */
  goto L_9932d9;
L_9932a3: /* 9932a3: fcomp qword ptr [0xcf5058] */
  fpu_com(ST0, F64((uint32_t)(0xcf5058u)));
  FPOP();
/* 9932a9: fld qword ptr [0xcf5058] */
  { double v = F64((uint32_t)(0xcf5058u)); FPUSH(v); }
/* 9932af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9932b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9932b4: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9932b8: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 9932ba: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 9932bc: jne 0x9932ca */
  if (!zf) goto L_9932ca;
L_9932be: /* 9932be: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9932c2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9932c6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9932c8: jmp 0x9932df */
  goto L_9932df;
L_9932ca: /* 9932ca: test byte ptr [esp + 0x1c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x1cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9932cf: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9932d3: jne 0x9932d9 */
  if (!zf) goto L_9932d9;
L_9932d5: /* 9932d5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
L_9932d9: /* 9932d9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9932dd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_9932df: /* 9932df: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9932e3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9932e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9932e8: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9932eb: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9932ee: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9932f1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9932f5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 9932f9: jl 0x993056 */
  if ((sf != of)) goto L_993056;
L_9932ff: /* 9932ff: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 993303: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 993307: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99330b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 99330e: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993311: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 993315: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 993317: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993318: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99331b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99331c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99331e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 993322: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 993326: jl 0x99303c */
  if ((sf != of)) goto L_99303c;
L_99332c: /* 99332c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 99332f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 993331: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993334: jne 0x993392 */
  if (!zf) goto L_993392;
L_993336: /* 993336: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 993339: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 99333f: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 993345: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 993347: je 0x993360 */
  if (zf) goto L_993360;
L_993349: /* 993349: fcomp qword ptr [0xcf5070] */
  fpu_com(ST0, F64((uint32_t)(0xcf5070u)));
  FPOP();
/* 99334f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993351: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993354: jp 0x993388 */
  if (pf) goto L_993388;
L_993356: /* 993356: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 99335e: jmp 0x9933ba */
  goto L_9933ba;
L_993360: /* 993360: fcomp qword ptr [0xcf5068] */
  fpu_com(ST0, F64((uint32_t)(0xcf5068u)));
  FPOP();
/* 993366: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993368: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99336b: jp 0x993375 */
  if (pf) goto L_993375;
L_99336d: /* 99336d: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 993373: jmp 0x993349 */
  goto L_993349;
L_993375: /* 993375: fld qword ptr [0xcf5068] */
  { double v = F64((uint32_t)(0xcf5068u)); FPUSH(v); }
/* 99337b: fcomp qword ptr [0xcf5070] */
  fpu_com(ST0, F64((uint32_t)(0xcf5070u)));
  FPOP();
/* 993381: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993383: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993386: jnp 0x9933b2 */
  if (!pf) goto L_9933b2;
L_993388: /* 993388: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 993390: jmp 0x9933ba */
  goto L_9933ba;
L_993392: /* 993392: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993395: jne 0x9933ba */
  if (!zf) goto L_9933ba;
L_993397: /* 993397: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 99339d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9933a5: fcomp qword ptr [0xcf5068] */
  fpu_com(ST0, F64((uint32_t)(0xcf5068u)));
  FPOP();
/* 9933ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9933ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9933b0: jnp 0x9933ba */
  if (!pf) goto L_9933ba;
L_9933b2: /* 9933b2: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_9933ba: /* 9933ba: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9933be: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 9933c1: xor eax, eax */
  eax = 0;
/* 9933c3: lea edi, [esp + edi*4 + 0x3c] */
  edi = (uint32_t)(esp + edi*4 + 0x3cu);
/* 9933c7: sub esi, 0xb04360 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xb04360u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9933cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9933d0: /* 9933d0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9933d2: lea edx, [eax + ecx*2] */
  edx = (uint32_t)(eax + ecx*2);
/* 9933d5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9933d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9933db: lea edx, [edx + ecx*2] */
  edx = (uint32_t)(edx + ecx*2);
/* 9933de: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9933e0: mov edx, ecx */
  edx = ecx;
/* 9933e2: movzx ebx, byte ptr [edx + edx*2 + 0xcf5079] */
  ebx = (uint32_t)(R8((uint32_t)(edx + edx*2 + 0xcf5079u)));
/* 9933ea: xor ecx, ecx */
  ecx = 0;
/* 9933ec: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 9933ee: sub cl, byte ptr [eax*4 + 0xb04360] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax*4 + 0xb04360u)));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9933f5: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 9933f8: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 9933fa: xor ecx, ecx */
  ecx = 0;
/* 9933fc: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 9933fe: mov dword ptr [esi + eax*4 + 0xb04360], ebx */
  W32((uint32_t)(esi + eax*4 + 0xb04360u), ebx);
/* 993405: mov bl, byte ptr [eax*4 + 0xb04360] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax*4 + 0xb04360u))) & 0xffu);
/* 99340c: movzx edx, byte ptr [edx + edx*2 + 0xcf507a] */
  edx = (uint32_t)(R8((uint32_t)(edx + edx*2 + 0xcf507au)));
/* 993414: sub cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 993416: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 993418: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993419: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99341c: mov dword ptr [esi + eax*4 + 0xb04368], edx */
  W32((uint32_t)(esi + eax*4 + 0xb04368u), edx);
/* 993423: jl 0x9933d0 */
  if ((sf != of)) goto L_9933d0;
L_993425: /* 993425: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 993428: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99342a: je 0x99343f */
  if (zf) goto L_99343f;
L_99342c: /* 99342c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 99342f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 993432: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 993435: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993437: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 993439: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 99343c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_99343f: /* 99343f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 993442: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993444: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 993448: jle 0x993452 */
  if ((zf || sf != of)) goto L_993452;
L_99344a: /* 99344a: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 99344d: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 993450: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_993452: /* 993452: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 993454: je 0x99345e */
  if (zf) goto L_99345e;
L_993456: /* 993456: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 993459: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 99345c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_99345e: /* 99345e: fld qword ptr [edx*8 + 0xcf5060] */
  { double v = F64((uint32_t)(edx*8 + 0xcf5060u)); FPUSH(v); }
/* 993465: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993466: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993467: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993468: mov esp, ebp */
  esp = ebp;
/* 99346a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99346b: ret  */
  esp += 4; SPILL(); return;
}

void f_992eaa(void) {
  LOAD_REGS();
L_992eaa: /* 992eaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_992eb0: /* 992eb0: mov edi, dword ptr [edx*4 + 0xb04360] */
  edi = R32((uint32_t)(edx*4 + 0xb04360u));
/* 992eb7: mov eax, 1 */
  eax = 0x1u;
/* 992ebc: mov ecx, edi */
  ecx = edi;
/* 992ebe: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 992ec0: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 992ec4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 992ec5: mov ebx, eax */
  ebx = eax;
/* 992ec7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992ec9: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 992ecd: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 992ed1: jl 0x992ffd */
  if ((sf != of)) goto L_992ffd;
L_992ed7: /* 992ed7: jmp 0x992ee0 */
  goto L_992ee0;
L_992ee0: /* 992ee0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992ee2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992ee6: jl 0x992fee */
  if ((sf != of)) goto L_992fee;
L_992eec: /* 992eec: mov esi, 8 */
  esi = 0x8u;
/* 992ef1: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esi = r;
  }
/* 992ef3: mov edx, ebx */
  edx = ebx;
/* 992ef5: mov ecx, esi */
  ecx = esi;
/* 992ef7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 992ef9: lea ecx, [edi + edi - 8] */
  ecx = (uint32_t)(edi + edi + 0xfffffff8u);
/* 992efd: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
  }
/* 992eff: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 992f03: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 992f05: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 992f09: jmp 0x992f17 */
  goto L_992f17;
L_992f0b: /* 992f0b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992f0f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 992f13: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_992f17: /* 992f17: lea ecx, [edi + edi - 8] */
  ecx = (uint32_t)(edi + edi + 0xfffffff8u);
/* 992f1b: mov ebx, eax */
  ebx = eax;
/* 992f1d: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* 992f1f: mov ecx, esi */
  ecx = esi;
/* 992f21: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 992f23: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 992f2b: mov edi, 0xb04380 */
  edi = 0xb04380u;
/* 992f30: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 992f32: jmp 0x992f38 */
  goto L_992f38;
L_992f34: /* 992f34: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_992f38: /* 992f38: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 992f3b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 992f3d: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 992f40: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 992f43: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f45: add eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f48: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f49: idiv dword ptr [edi + 0xc] */
  { int32_t d = (int32_t)R32((uint32_t)(edi + 0xcu)); if (!d) d = (int32_t)guest_divzero(0x992f49);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 992f4c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 992f50: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 992f53: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 992f57: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f59: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 992f5c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f5e: mov esi, eax */
  esi = eax;
/* 992f60: mov al, byte ptr [esi + esi*2 + 0xcf5078] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf5078u))) & 0xffu);
/* 992f67: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 992f69: je 0x992f95 */
  if (zf) goto L_992f95;
L_992f6b: /* 992f6b: movzx edx, byte ptr [esi + esi*2 + 0xcf5079] */
  edx = (uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf5079u)));
/* 992f73: movzx eax, byte ptr [esi + esi*2 + 0xcf507a] */
  eax = (uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf507au)));
/* 992f7b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f7d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f7e: mov ecx, eax */
  ecx = eax;
/* 992f80: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 992f82: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 992f84: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 992f88: mov eax, ebx */
  eax = ebx;
/* 992f8a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f8c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f8d: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 992f8f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f91: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992f93: jle 0x992fbb */
  if ((zf || sf != of)) goto L_992fbb;
L_992f95: /* 992f95: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 992f99: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 992f9d: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 992fa1: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 992fa3: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 992fa5: mov byte ptr [esi + esi*2 + 0xcf5078], 1 */
  W8((uint32_t)(esi + esi*2 + 0xcf5078u), 0x1u);
/* 992fad: mov byte ptr [esi + esi*2 + 0xcf5079], dl */
  W8((uint32_t)(esi + esi*2 + 0xcf5079u), (edx & 0xffu));
/* 992fb4: mov byte ptr [esi + esi*2 + 0xcf507a], al */
  W8((uint32_t)(esi + esi*2 + 0xcf507au), (eax & 0xffu));
L_992fbb: /* 992fbb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 992fbf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 992fc0: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 992fc3: cmp edi, 0xb043b0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb043b0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992fc9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 992fcd: jl 0x992f34 */
  if ((sf != of)) goto L_992f34;
L_992fd3: /* 992fd3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992fd7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 992fdb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 992fdc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992fe0: jns 0x992f0b */
  if (!sf) goto L_992f0b;
L_992fe6: /* 992fe6: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 992fea: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
L_992fee: /* 992fee: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 992fef: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 992ff3: jns 0x992ee0 */
  if (!sf) goto L_992ee0;
L_992ff9: /* 992ff9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_992ffd: /* 992ffd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 992ffe: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993001: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 993005: jl 0x992eb0 */
  if ((sf != of)) goto L_992eb0;
L_99300b: /* 99300b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99300e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 993010: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993011: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993013: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 99301b: jle 0x99332c */
  if ((zf || sf != of)) goto L_99332c;
L_993021: /* 993021: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 993024: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 993027: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 993029: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 99302d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 993031: mov eax, 0xcf5060 */
  eax = 0xcf5060u;
/* 993036: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99303a: jmp 0x993040 */
  goto L_993040;
L_99303c: /* 99303c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_993040: /* 993040: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 993043: xor ecx, ecx */
  ecx = 0;
/* 993045: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 993047: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 99304a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 99304e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993052: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_993056: /* 993056: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 993058: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99305b: fdiv qword ptr [esi + edi] */
  ST0 = ST0 / (F64((uint32_t)(esi + edi)));
/* 99305e: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993064: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 99306a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 99306d: call 0x99cf1e */
  esp -= 4; W32(esp, 0x993072u); SPILL(); hle_floor(); RELOAD();
/* 993072: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993075: call 0x99c958 */
  esp -= 4; W32(esp, 0x99307au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 99307a: mov ebx, eax */
  ebx = eax;
/* 99307c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99307e: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 993082: jge 0x99308e */
  if ((sf == of)) goto L_99308e;
L_993084: /* 993084: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 99308c: jmp 0x99309e */
  goto L_99309e;
L_99308e: /* 99308e: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993094: jl 0x9930a2 */
  if ((sf != of)) goto L_9930a2;
L_993096: /* 993096: mov dword ptr [esp + 0x1c], 0xff */
  W32((uint32_t)(esp + 0x1cu), 0xffu);
L_99309e: /* 99309e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_9930a2: /* 9930a2: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9930a6: lea ecx, [edx + ebx*2] */
  ecx = (uint32_t)(edx + ebx*2);
/* 9930a9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9930ad: mov eax, ebx */
  eax = ebx;
/* 9930af: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9930b1: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 9930b4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9930b6: mov dl, byte ptr [eax + eax*2 + 0xcf5078] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + eax*2 + 0xcf5078u))) & 0xffu);
/* 9930bd: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 9930c1: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 9930c9: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
/* 9930cd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9930d1: mov ecx, 0xcf5050 */
  ecx = 0xcf5050u;
/* 9930d6: jmp 0x9930e0 */
  goto L_9930e0;
L_9930d8: /* 9930d8: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 9930dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9930e0: /* 9930e0: mov al, byte ptr [esp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 9930e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9930e6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 9930ea: je 0x99310c */
  if (zf) goto L_99310c;
L_9930ec: /* 9930ec: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 9930ee: fdiv qword ptr [esi + edi] */
  ST0 = ST0 / (F64((uint32_t)(esi + edi)));
/* 9930f1: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9930f7: fisub dword ptr [esp + 0x1c] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(esp + 0x1cu)));
/* 9930fb: fimul dword ptr [esp + 0x20] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x20u)));
/* 9930ff: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 993105: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993107: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99310a: jne 0x99316f */
  if (!zf) goto L_99316f;
L_99310c: /* 99310c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993110: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993112: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993114: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 993118: jge 0x99311e */
  if ((sf == of)) goto L_99311e;
L_99311a: /* 99311a: xor ebx, ebx */
  ebx = 0;
/* 99311c: jmp 0x99312b */
  goto L_99312b;
L_99311e: /* 99311e: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993124: jl 0x99312f */
  if ((sf != of)) goto L_99312f;
L_993126: /* 993126: mov ebx, 0xff */
  ebx = 0xffu;
L_99312b: /* 99312b: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_99312f: /* 99312f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 993133: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 993136: mov eax, ebx */
  eax = ebx;
/* 993138: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99313a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99313e: lea edx, [edx + eax*2] */
  edx = (uint32_t)(edx + eax*2);
/* 993141: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993143: mov dl, byte ptr [eax + eax*2 + 0xcf5078] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + eax*2 + 0xcf5078u))) & 0xffu);
/* 99314a: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99314c: lea eax, [eax + eax*2 + 0xcf5078] */
  eax = (uint32_t)(eax + eax*2 + 0xcf5078u);
/* 993153: jne 0x99316f */
  if (!zf) goto L_99316f;
L_993155: /* 993155: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993159: imul edx, edx, 0x1b */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1bu);
  edx = (uint32_t)r;
  }
/* 99315c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993160: /* 993160: add ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993164: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993166: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 993169: je 0x993160 */
  if (zf) goto L_993160;
L_99316b: /* 99316b: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_99316f: /* 99316f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 993172: xor edx, edx */
  edx = 0;
/* 993174: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993177: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 993179: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99317c: jl 0x99320a */
  if ((sf != of)) goto L_99320a;
L_993182: /* 993182: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 993186: mov ebx, 3 */
  ebx = 0x3u;
/* 99318b: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
L_99318e: /* 99318e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993190: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993193: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 993196: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993199: fld qword ptr [eax - 0x30] */
  { double v = F64((uint32_t)(eax + 0xffffffd0u)); FPUSH(v); }
/* 99319c: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99319f: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9931a2: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931a8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931aa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931ac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931ae: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931b0: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931b6: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931b9: fld qword ptr [eax - 0x78] */
  { double v = F64((uint32_t)(eax + 0xffffff88u)); FPUSH(v); }
/* 9931bc: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931c2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931c4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931c8: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931ca: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931ce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931d0: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931d3: fld qword ptr [eax - 0x60] */
  { double v = F64((uint32_t)(eax + 0xffffffa0u)); FPUSH(v); }
/* 9931d6: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931dc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931e2: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931e4: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931ea: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931ed: fld qword ptr [eax - 0x48] */
  { double v = F64((uint32_t)(eax + 0xffffffb8u)); FPUSH(v); }
/* 9931f0: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931f8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931fa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931fc: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931fe: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 993200: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993202: jl 0x99318e */
  if ((sf != of)) goto L_99318e;
L_993204: /* 993204: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 993208: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99320a: /* 99320a: cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99320d: jge 0x993256 */
  if ((sf == of)) goto L_993256;
L_99320f: /* 99320f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 993213: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 993217: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 99321a: mov ebx, edx */
  ebx = edx;
/* 99321c: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99321e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 993221: lea eax, [eax + ebx*8] */
  eax = (uint32_t)(eax + ebx*8);
/* 993224: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 993227: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 993229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993230: /* 993230: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993232: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993235: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 993236: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 993239: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 99323c: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993242: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 993244: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993246: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 993248: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 99324a: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 99324c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99324e: jne 0x993230 */
  if (!zf) goto L_993230;
L_993250: /* 993250: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 993254: fstp st(0) */
  STI(0) = ST0; FPOP();
L_993256: /* 993256: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99325a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 99325e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 993260: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993263: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993266: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 993268: cmp ecx, 0xcf5060 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf5060u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99326e: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 993272: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 993276: jl 0x9930d8 */
  if ((sf != of)) goto L_9930d8;
L_99327c: /* 99327c: fld qword ptr [0xcf5050] */
  { double v = F64((uint32_t)(0xcf5050u)); FPUSH(v); }
/* 993282: fcomp qword ptr [0xcf5058] */
  fpu_com(ST0, F64((uint32_t)(0xcf5058u)));
  FPOP();
/* 993288: fld qword ptr [0xcf5050] */
  { double v = F64((uint32_t)(0xcf5050u)); FPUSH(v); }
/* 99328e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993290: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993293: jp 0x9932a3 */
  if (pf) goto L_9932a3;
L_993295: /* 993295: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 993299: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 99329b: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 99329d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9932a1: jmp 0x9932d9 */
  goto L_9932d9;
L_9932a3: /* 9932a3: fcomp qword ptr [0xcf5058] */
  fpu_com(ST0, F64((uint32_t)(0xcf5058u)));
  FPOP();
/* 9932a9: fld qword ptr [0xcf5058] */
  { double v = F64((uint32_t)(0xcf5058u)); FPUSH(v); }
/* 9932af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9932b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9932b4: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9932b8: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 9932ba: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 9932bc: jne 0x9932ca */
  if (!zf) goto L_9932ca;
L_9932be: /* 9932be: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9932c2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9932c6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9932c8: jmp 0x9932df */
  goto L_9932df;
L_9932ca: /* 9932ca: test byte ptr [esp + 0x1c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x1cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9932cf: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9932d3: jne 0x9932d9 */
  if (!zf) goto L_9932d9;
L_9932d5: /* 9932d5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
L_9932d9: /* 9932d9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9932dd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_9932df: /* 9932df: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9932e3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9932e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9932e8: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9932eb: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9932ee: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9932f1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9932f5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 9932f9: jl 0x993056 */
  if ((sf != of)) goto L_993056;
L_9932ff: /* 9932ff: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 993303: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 993307: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99330b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 99330e: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993311: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 993315: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 993317: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993318: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99331b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99331c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99331e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 993322: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 993326: jl 0x99303c */
  if ((sf != of)) goto L_99303c;
L_99332c: /* 99332c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 99332f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 993331: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993334: jne 0x993392 */
  if (!zf) goto L_993392;
L_993336: /* 993336: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 993339: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 99333f: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 993345: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 993347: je 0x993360 */
  if (zf) goto L_993360;
L_993349: /* 993349: fcomp qword ptr [0xcf5070] */
  fpu_com(ST0, F64((uint32_t)(0xcf5070u)));
  FPOP();
/* 99334f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993351: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993354: jp 0x993388 */
  if (pf) goto L_993388;
L_993356: /* 993356: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 99335e: jmp 0x9933ba */
  goto L_9933ba;
L_993360: /* 993360: fcomp qword ptr [0xcf5068] */
  fpu_com(ST0, F64((uint32_t)(0xcf5068u)));
  FPOP();
/* 993366: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993368: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99336b: jp 0x993375 */
  if (pf) goto L_993375;
L_99336d: /* 99336d: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 993373: jmp 0x993349 */
  goto L_993349;
L_993375: /* 993375: fld qword ptr [0xcf5068] */
  { double v = F64((uint32_t)(0xcf5068u)); FPUSH(v); }
/* 99337b: fcomp qword ptr [0xcf5070] */
  fpu_com(ST0, F64((uint32_t)(0xcf5070u)));
  FPOP();
/* 993381: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993383: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993386: jnp 0x9933b2 */
  if (!pf) goto L_9933b2;
L_993388: /* 993388: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 993390: jmp 0x9933ba */
  goto L_9933ba;
L_993392: /* 993392: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993395: jne 0x9933ba */
  if (!zf) goto L_9933ba;
L_993397: /* 993397: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 99339d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9933a5: fcomp qword ptr [0xcf5068] */
  fpu_com(ST0, F64((uint32_t)(0xcf5068u)));
  FPOP();
/* 9933ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9933ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9933b0: jnp 0x9933ba */
  if (!pf) goto L_9933ba;
L_9933b2: /* 9933b2: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_9933ba: /* 9933ba: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9933be: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 9933c1: xor eax, eax */
  eax = 0;
/* 9933c3: lea edi, [esp + edi*4 + 0x3c] */
  edi = (uint32_t)(esp + edi*4 + 0x3cu);
/* 9933c7: sub esi, 0xb04360 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xb04360u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9933cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9933d0: /* 9933d0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9933d2: lea edx, [eax + ecx*2] */
  edx = (uint32_t)(eax + ecx*2);
/* 9933d5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9933d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9933db: lea edx, [edx + ecx*2] */
  edx = (uint32_t)(edx + ecx*2);
/* 9933de: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9933e0: mov edx, ecx */
  edx = ecx;
/* 9933e2: movzx ebx, byte ptr [edx + edx*2 + 0xcf5079] */
  ebx = (uint32_t)(R8((uint32_t)(edx + edx*2 + 0xcf5079u)));
/* 9933ea: xor ecx, ecx */
  ecx = 0;
/* 9933ec: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 9933ee: sub cl, byte ptr [eax*4 + 0xb04360] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax*4 + 0xb04360u)));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9933f5: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 9933f8: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 9933fa: xor ecx, ecx */
  ecx = 0;
/* 9933fc: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 9933fe: mov dword ptr [esi + eax*4 + 0xb04360], ebx */
  W32((uint32_t)(esi + eax*4 + 0xb04360u), ebx);
/* 993405: mov bl, byte ptr [eax*4 + 0xb04360] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax*4 + 0xb04360u))) & 0xffu);
/* 99340c: movzx edx, byte ptr [edx + edx*2 + 0xcf507a] */
  edx = (uint32_t)(R8((uint32_t)(edx + edx*2 + 0xcf507au)));
/* 993414: sub cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 993416: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 993418: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993419: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99341c: mov dword ptr [esi + eax*4 + 0xb04368], edx */
  W32((uint32_t)(esi + eax*4 + 0xb04368u), edx);
/* 993423: jl 0x9933d0 */
  if ((sf != of)) goto L_9933d0;
L_993425: /* 993425: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 993428: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99342a: je 0x99343f */
  if (zf) goto L_99343f;
L_99342c: /* 99342c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 99342f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 993432: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 993435: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993437: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 993439: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 99343c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_99343f: /* 99343f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 993442: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993444: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 993448: jle 0x993452 */
  if ((zf || sf != of)) goto L_993452;
L_99344a: /* 99344a: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 99344d: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 993450: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_993452: /* 993452: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 993454: je 0x99345e */
  if (zf) goto L_99345e;
L_993456: /* 993456: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 993459: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 99345c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_99345e: /* 99345e: fld qword ptr [edx*8 + 0xcf5060] */
  { double v = F64((uint32_t)(edx*8 + 0xcf5060u)); FPUSH(v); }
/* 993465: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993466: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993467: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993468: mov esp, ebp */
  esp = ebp;
/* 99346a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99346b: ret  */
  esp += 4; SPILL(); return;
}

void f_992ed9(void) {
  LOAD_REGS();
  goto L_992ed9;
L_992eb0: /* 992eb0: mov edi, dword ptr [edx*4 + 0xb04360] */
  edi = R32((uint32_t)(edx*4 + 0xb04360u));
/* 992eb7: mov eax, 1 */
  eax = 0x1u;
/* 992ebc: mov ecx, edi */
  ecx = edi;
/* 992ebe: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 992ec0: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 992ec4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 992ec5: mov ebx, eax */
  ebx = eax;
/* 992ec7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992ec9: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 992ecd: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 992ed1: jl 0x992ffd */
  if ((sf != of)) goto L_992ffd;
L_992ed7: /* 992ed7: jmp 0x992ee0 */
  goto L_992ee0;
L_992ed9: /* 992ed9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_992ee0: /* 992ee0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 992ee2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992ee6: jl 0x992fee */
  if ((sf != of)) goto L_992fee;
L_992eec: /* 992eec: mov esi, 8 */
  esi = 0x8u;
/* 992ef1: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esi = r;
  }
/* 992ef3: mov edx, ebx */
  edx = ebx;
/* 992ef5: mov ecx, esi */
  ecx = esi;
/* 992ef7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 992ef9: lea ecx, [edi + edi - 8] */
  ecx = (uint32_t)(edi + edi + 0xfffffff8u);
/* 992efd: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
  }
/* 992eff: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 992f03: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 992f05: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 992f09: jmp 0x992f17 */
  goto L_992f17;
L_992f0b: /* 992f0b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992f0f: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 992f13: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_992f17: /* 992f17: lea ecx, [edi + edi - 8] */
  ecx = (uint32_t)(edi + edi + 0xfffffff8u);
/* 992f1b: mov ebx, eax */
  ebx = eax;
/* 992f1d: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* 992f1f: mov ecx, esi */
  ecx = esi;
/* 992f21: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 992f23: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 992f2b: mov edi, 0xb04380 */
  edi = 0xb04380u;
/* 992f30: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 992f32: jmp 0x992f38 */
  goto L_992f38;
L_992f34: /* 992f34: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_992f38: /* 992f38: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 992f3b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 992f3d: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 992f40: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 992f43: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f45: add eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f48: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f49: idiv dword ptr [edi + 0xc] */
  { int32_t d = (int32_t)R32((uint32_t)(edi + 0xcu)); if (!d) d = (int32_t)guest_divzero(0x992f49);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 992f4c: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 992f50: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 992f53: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 992f57: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f59: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 992f5c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 992f5e: mov esi, eax */
  esi = eax;
/* 992f60: mov al, byte ptr [esi + esi*2 + 0xcf5078] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf5078u))) & 0xffu);
/* 992f67: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 992f69: je 0x992f95 */
  if (zf) goto L_992f95;
L_992f6b: /* 992f6b: movzx edx, byte ptr [esi + esi*2 + 0xcf5079] */
  edx = (uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf5079u)));
/* 992f73: movzx eax, byte ptr [esi + esi*2 + 0xcf507a] */
  eax = (uint32_t)(R8((uint32_t)(esi + esi*2 + 0xcf507au)));
/* 992f7b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f7d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f7e: mov ecx, eax */
  ecx = eax;
/* 992f80: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 992f82: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 992f84: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 992f88: mov eax, ebx */
  eax = ebx;
/* 992f8a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f8c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 992f8d: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 992f8f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 992f91: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992f93: jle 0x992fbb */
  if ((zf || sf != of)) goto L_992fbb;
L_992f95: /* 992f95: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 992f99: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 992f9d: mov al, byte ptr [esp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* 992fa1: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  cf = (c <= 8) ? (((uint32_t)a >> (8 - c)) & 1) : 0;
  of = ((r >> 7) & 1) ^ (((uint32_t)a >> (8 - c)) & 1);
  zf = r == 0;
  sf = (r >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 992fa3: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 992fa5: mov byte ptr [esi + esi*2 + 0xcf5078], 1 */
  W8((uint32_t)(esi + esi*2 + 0xcf5078u), 0x1u);
/* 992fad: mov byte ptr [esi + esi*2 + 0xcf5079], dl */
  W8((uint32_t)(esi + esi*2 + 0xcf5079u), (edx & 0xffu));
/* 992fb4: mov byte ptr [esi + esi*2 + 0xcf507a], al */
  W8((uint32_t)(esi + esi*2 + 0xcf507au), (eax & 0xffu));
L_992fbb: /* 992fbb: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 992fbf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 992fc0: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 992fc3: cmp edi, 0xb043b0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb043b0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 992fc9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 992fcd: jl 0x992f34 */
  if ((sf != of)) goto L_992f34;
L_992fd3: /* 992fd3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 992fd7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 992fdb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x7fffffffu;
  eax = r;
  }
/* 992fdc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 992fe0: jns 0x992f0b */
  if (!sf) goto L_992f0b;
L_992fe6: /* 992fe6: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 992fea: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
L_992fee: /* 992fee: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 992fef: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 992ff3: jns 0x992ee0 */
  if (!sf) goto L_992ee0;
L_992ff9: /* 992ff9: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_992ffd: /* 992ffd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 992ffe: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993001: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 993005: jl 0x992eb0 */
  if ((sf != of)) goto L_992eb0;
L_99300b: /* 99300b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99300e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 993010: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 993011: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993013: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 99301b: jle 0x99332c */
  if ((zf || sf != of)) goto L_99332c;
L_993021: /* 993021: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 993024: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 993027: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 993029: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 99302d: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 993031: mov eax, 0xcf5060 */
  eax = 0xcf5060u;
/* 993036: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 99303a: jmp 0x993040 */
  goto L_993040;
L_99303c: /* 99303c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_993040: /* 993040: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 993043: xor ecx, ecx */
  ecx = 0;
/* 993045: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 993047: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 99304a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 99304e: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 993052: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
L_993056: /* 993056: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 993058: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99305b: fdiv qword ptr [esi + edi] */
  ST0 = ST0 / (F64((uint32_t)(esi + edi)));
/* 99305e: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993064: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 99306a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 99306d: call 0x99cf1e */
  esp -= 4; W32(esp, 0x993072u); SPILL(); hle_floor(); RELOAD();
/* 993072: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993075: call 0x99c958 */
  esp -= 4; W32(esp, 0x99307au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 99307a: mov ebx, eax */
  ebx = eax;
/* 99307c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99307e: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 993082: jge 0x99308e */
  if ((sf == of)) goto L_99308e;
L_993084: /* 993084: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 99308c: jmp 0x99309e */
  goto L_99309e;
L_99308e: /* 99308e: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993094: jl 0x9930a2 */
  if ((sf != of)) goto L_9930a2;
L_993096: /* 993096: mov dword ptr [esp + 0x1c], 0xff */
  W32((uint32_t)(esp + 0x1cu), 0xffu);
L_99309e: /* 99309e: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_9930a2: /* 9930a2: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9930a6: lea ecx, [edx + ebx*2] */
  ecx = (uint32_t)(edx + ebx*2);
/* 9930a9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9930ad: mov eax, ebx */
  eax = ebx;
/* 9930af: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9930b1: lea ecx, [edx + eax*2] */
  ecx = (uint32_t)(edx + eax*2);
/* 9930b4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9930b6: mov dl, byte ptr [eax + eax*2 + 0xcf5078] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + eax*2 + 0xcf5078u))) & 0xffu);
/* 9930bd: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 9930c1: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 9930c9: mov byte ptr [esp + 0xf], dl */
  W8((uint32_t)(esp + 0xfu), (edx & 0xffu));
/* 9930cd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 9930d1: mov ecx, 0xcf5050 */
  ecx = 0xcf5050u;
/* 9930d6: jmp 0x9930e0 */
  goto L_9930e0;
L_9930d8: /* 9930d8: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 9930dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9930e0: /* 9930e0: mov al, byte ptr [esp + 0xf] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xfu))) & 0xffu);
/* 9930e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9930e6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 9930ea: je 0x99310c */
  if (zf) goto L_99310c;
L_9930ec: /* 9930ec: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 9930ee: fdiv qword ptr [esi + edi] */
  ST0 = ST0 / (F64((uint32_t)(esi + edi)));
/* 9930f1: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9930f7: fisub dword ptr [esp + 0x1c] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(esp + 0x1cu)));
/* 9930fb: fimul dword ptr [esp + 0x20] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x20u)));
/* 9930ff: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 993105: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993107: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99310a: jne 0x99316f */
  if (!zf) goto L_99316f;
L_99310c: /* 99310c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993110: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993112: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993114: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 993118: jge 0x99311e */
  if ((sf == of)) goto L_99311e;
L_99311a: /* 99311a: xor ebx, ebx */
  ebx = 0;
/* 99311c: jmp 0x99312b */
  goto L_99312b;
L_99311e: /* 99311e: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993124: jl 0x99312f */
  if ((sf != of)) goto L_99312f;
L_993126: /* 993126: mov ebx, 0xff */
  ebx = 0xffu;
L_99312b: /* 99312b: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_99312f: /* 99312f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 993133: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 993136: mov eax, ebx */
  eax = ebx;
/* 993138: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99313a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 99313e: lea edx, [edx + eax*2] */
  edx = (uint32_t)(edx + eax*2);
/* 993141: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993143: mov dl, byte ptr [eax + eax*2 + 0xcf5078] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + eax*2 + 0xcf5078u))) & 0xffu);
/* 99314a: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99314c: lea eax, [eax + eax*2 + 0xcf5078] */
  eax = (uint32_t)(eax + eax*2 + 0xcf5078u);
/* 993153: jne 0x99316f */
  if (!zf) goto L_99316f;
L_993155: /* 993155: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 993159: imul edx, edx, 0x1b */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1bu);
  edx = (uint32_t)r;
  }
/* 99315c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993160: /* 993160: add ebx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993164: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993166: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 993169: je 0x993160 */
  if (zf) goto L_993160;
L_99316b: /* 99316b: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
L_99316f: /* 99316f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 993172: xor edx, edx */
  edx = 0;
/* 993174: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993177: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 993179: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 99317c: jl 0x99320a */
  if ((sf != of)) goto L_99320a;
L_993182: /* 993182: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 993186: mov ebx, 3 */
  ebx = 0x3u;
/* 99318b: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
L_99318e: /* 99318e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993190: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 993193: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 993196: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993199: fld qword ptr [eax - 0x30] */
  { double v = F64((uint32_t)(eax + 0xffffffd0u)); FPUSH(v); }
/* 99319c: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 99319f: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9931a2: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931a8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931aa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931ac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931ae: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931b0: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931b6: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931b9: fld qword ptr [eax - 0x78] */
  { double v = F64((uint32_t)(eax + 0xffffff88u)); FPUSH(v); }
/* 9931bc: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931c2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931c4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931c8: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931ca: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931ce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931d0: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931d3: fld qword ptr [eax - 0x60] */
  { double v = F64((uint32_t)(eax + 0xffffffa0u)); FPUSH(v); }
/* 9931d6: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931dc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931de: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931e0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931e2: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931e4: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 9931e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 9931e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931ea: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 9931ed: fld qword ptr [eax - 0x48] */
  { double v = F64((uint32_t)(eax + 0xffffffb8u)); FPUSH(v); }
/* 9931f0: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 9931f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9931f8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 9931fa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 9931fc: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 9931fe: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 993200: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 993202: jl 0x99318e */
  if ((sf != of)) goto L_99318e;
L_993204: /* 993204: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 993208: fstp st(0) */
  STI(0) = ST0; FPOP();
L_99320a: /* 99320a: cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99320d: jge 0x993256 */
  if ((sf == of)) goto L_993256;
L_99320f: /* 99320f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 993213: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 993217: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 99321a: mov ebx, edx */
  ebx = edx;
/* 99321c: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99321e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 993221: lea eax, [eax + ebx*8] */
  eax = (uint32_t)(eax + ebx*8);
/* 993224: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 993227: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 993229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993230: /* 993230: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993232: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993235: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 993236: fmul qword ptr [esi + edi] */
  ST0 = ST0 * (F64((uint32_t)(esi + edi)));
/* 993239: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 99323c: fmul qword ptr [0xa21b40] */
  ST0 = ST0 * (F64((uint32_t)(0xa21b40u)));
/* 993242: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 993244: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 993246: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 993248: fadd qword ptr [ecx] */
  ST0 = ST0 + (F64((uint32_t)(ecx)));
/* 99324a: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 99324c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99324e: jne 0x993230 */
  if (!zf) goto L_993230;
L_993250: /* 993250: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 993254: fstp st(0) */
  STI(0) = ST0; FPOP();
L_993256: /* 993256: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 99325a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 99325e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 993260: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993263: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993266: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 993268: cmp ecx, 0xcf5060 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcf5060u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99326e: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 993272: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 993276: jl 0x9930d8 */
  if ((sf != of)) goto L_9930d8;
L_99327c: /* 99327c: fld qword ptr [0xcf5050] */
  { double v = F64((uint32_t)(0xcf5050u)); FPUSH(v); }
/* 993282: fcomp qword ptr [0xcf5058] */
  fpu_com(ST0, F64((uint32_t)(0xcf5058u)));
  FPOP();
/* 993288: fld qword ptr [0xcf5050] */
  { double v = F64((uint32_t)(0xcf5050u)); FPUSH(v); }
/* 99328e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993290: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993293: jp 0x9932a3 */
  if (pf) goto L_9932a3;
L_993295: /* 993295: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 993299: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 99329b: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 99329d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9932a1: jmp 0x9932d9 */
  goto L_9932d9;
L_9932a3: /* 9932a3: fcomp qword ptr [0xcf5058] */
  fpu_com(ST0, F64((uint32_t)(0xcf5058u)));
  FPOP();
/* 9932a9: fld qword ptr [0xcf5058] */
  { double v = F64((uint32_t)(0xcf5058u)); FPUSH(v); }
/* 9932af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9932b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9932b4: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 9932b8: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 9932ba: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 9932bc: jne 0x9932ca */
  if (!zf) goto L_9932ca;
L_9932be: /* 9932be: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 9932c2: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 9932c6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 9932c8: jmp 0x9932df */
  goto L_9932df;
L_9932ca: /* 9932ca: test byte ptr [esp + 0x1c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x1cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9932cf: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 9932d3: jne 0x9932d9 */
  if (!zf) goto L_9932d9;
L_9932d5: /* 9932d5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
L_9932d9: /* 9932d9: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9932dd: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_9932df: /* 9932df: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 9932e3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 9932e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 9932e8: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 9932eb: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9932ee: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9932f1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 9932f5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 9932f9: jl 0x993056 */
  if ((sf != of)) goto L_993056;
L_9932ff: /* 9932ff: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 993303: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 993307: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 99330b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 99330e: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993311: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 993315: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 993317: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993318: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 99331b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 99331c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99331e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 993322: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 993326: jl 0x99303c */
  if ((sf != of)) goto L_99303c;
L_99332c: /* 99332c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 99332f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 993331: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993334: jne 0x993392 */
  if (!zf) goto L_993392;
L_993336: /* 993336: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 993339: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 99333f: mov cl, byte ptr [eax + 0x1a4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1a4u))) & 0xffu);
/* 993345: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 993347: je 0x993360 */
  if (zf) goto L_993360;
L_993349: /* 993349: fcomp qword ptr [0xcf5070] */
  fpu_com(ST0, F64((uint32_t)(0xcf5070u)));
  FPOP();
/* 99334f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993351: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993354: jp 0x993388 */
  if (pf) goto L_993388;
L_993356: /* 993356: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 99335e: jmp 0x9933ba */
  goto L_9933ba;
L_993360: /* 993360: fcomp qword ptr [0xcf5068] */
  fpu_com(ST0, F64((uint32_t)(0xcf5068u)));
  FPOP();
/* 993366: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993368: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99336b: jp 0x993375 */
  if (pf) goto L_993375;
L_99336d: /* 99336d: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 993373: jmp 0x993349 */
  goto L_993349;
L_993375: /* 993375: fld qword ptr [0xcf5068] */
  { double v = F64((uint32_t)(0xcf5068u)); FPUSH(v); }
/* 99337b: fcomp qword ptr [0xcf5070] */
  fpu_com(ST0, F64((uint32_t)(0xcf5070u)));
  FPOP();
/* 993381: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993383: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993386: jnp 0x9933b2 */
  if (!pf) goto L_9933b2;
L_993388: /* 993388: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 993390: jmp 0x9933ba */
  goto L_9933ba;
L_993392: /* 993392: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 993395: jne 0x9933ba */
  if (!zf) goto L_9933ba;
L_993397: /* 993397: fld qword ptr [0xcf5060] */
  { double v = F64((uint32_t)(0xcf5060u)); FPUSH(v); }
/* 99339d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9933a5: fcomp qword ptr [0xcf5068] */
  fpu_com(ST0, F64((uint32_t)(0xcf5068u)));
  FPOP();
/* 9933ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9933ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9933b0: jnp 0x9933ba */
  if (!pf) goto L_9933ba;
L_9933b2: /* 9933b2: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
L_9933ba: /* 9933ba: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 9933be: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 9933c1: xor eax, eax */
  eax = 0;
/* 9933c3: lea edi, [esp + edi*4 + 0x3c] */
  edi = (uint32_t)(esp + edi*4 + 0x3cu);
/* 9933c7: sub esi, 0xb04360 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xb04360u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 9933cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_9933d0: /* 9933d0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 9933d2: lea edx, [eax + ecx*2] */
  edx = (uint32_t)(eax + ecx*2);
/* 9933d5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9933d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 9933db: lea edx, [edx + ecx*2] */
  edx = (uint32_t)(edx + ecx*2);
/* 9933de: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9933e0: mov edx, ecx */
  edx = ecx;
/* 9933e2: movzx ebx, byte ptr [edx + edx*2 + 0xcf5079] */
  ebx = (uint32_t)(R8((uint32_t)(edx + edx*2 + 0xcf5079u)));
/* 9933ea: xor ecx, ecx */
  ecx = 0;
/* 9933ec: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 9933ee: sub cl, byte ptr [eax*4 + 0xb04360] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax*4 + 0xb04360u)));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 9933f5: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 9933f8: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 9933fa: xor ecx, ecx */
  ecx = 0;
/* 9933fc: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* 9933fe: mov dword ptr [esi + eax*4 + 0xb04360], ebx */
  W32((uint32_t)(esi + eax*4 + 0xb04360u), ebx);
/* 993405: mov bl, byte ptr [eax*4 + 0xb04360] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax*4 + 0xb04360u))) & 0xffu);
/* 99340c: movzx edx, byte ptr [edx + edx*2 + 0xcf507a] */
  edx = (uint32_t)(R8((uint32_t)(edx + edx*2 + 0xcf507au)));
/* 993414: sub cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 993416: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 993418: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 993419: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99341c: mov dword ptr [esi + eax*4 + 0xb04368], edx */
  W32((uint32_t)(esi + eax*4 + 0xb04368u), edx);
/* 993423: jl 0x9933d0 */
  if ((sf != of)) goto L_9933d0;
L_993425: /* 993425: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 993428: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99342a: je 0x99343f */
  if (zf) goto L_99343f;
L_99342c: /* 99342c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 99342f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 993432: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 993435: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 993437: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 993439: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 99343c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_99343f: /* 99343f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 993442: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993444: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 993448: jle 0x993452 */
  if ((zf || sf != of)) goto L_993452;
L_99344a: /* 99344a: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 99344d: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 993450: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_993452: /* 993452: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 993454: je 0x99345e */
  if (zf) goto L_99345e;
L_993456: /* 993456: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 993459: lea eax, [edx + 2] */
  eax = (uint32_t)(edx + 0x2u);
/* 99345c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_99345e: /* 99345e: fld qword ptr [edx*8 + 0xcf5060] */
  { double v = F64((uint32_t)(edx*8 + 0xcf5060u)); FPUSH(v); }
/* 993465: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 993466: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 993467: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 993468: mov esp, ebp */
  esp = ebp;
/* 99346a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99346b: ret  */
  esp += 4; SPILL(); return;
}

void f_993470(void) {
  LOAD_REGS();
L_993470: /* 993470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 993471: mov ebp, esp */
  ebp = esp;
/* 993473: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 993476: sub esp, 0xd0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 99347c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99347d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99347e: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 993480: mov esi, eax */
  esi = eax;
/* 993482: xor eax, eax */
  eax = 0;
/* 993484: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 993488: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 993489: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 99348c: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99348f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 993492: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 993496: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 993497: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 99349a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 99349b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 99349e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 99349f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 9934a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9934a3: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 9934a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9934a8: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9934ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9934ac: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 9934af: mov edx, esi */
  edx = esi;
/* 9934b1: call 0x991690 */
  esp -= 4; W32(esp, 0x9934b6u); SPILL(); f_991690(); if (g_unwind) return; RELOAD();
/* 9934b6: fstp qword ptr [0xcf6bb0] */
  WF64((uint32_t)(0xcf6bb0u), ST0); FPOP();
/* 9934bc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9934be: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 9934c1: add ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9934c4: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9934c7: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 9934c9: xor ecx, ecx */
  ecx = 0;
/* 9934cb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9934ce: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9934d0: mov edi, 1 */
  edi = 0x1u;
/* 9934d5: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 9934d9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 9934dc: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 9934e0: jle 0x993669 */
  if ((zf || sf != of)) goto L_993669;
L_9934e6: /* 9934e6: xor eax, eax */
  eax = 0;
/* 9934e8: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9934ec: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_9934f0: /* 9934f0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9934f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9934f4: mov edx, dword ptr [ecx*4 + 0xb046b0] */
  edx = R32((uint32_t)(ecx*4 + 0xb046b0u));
/* 9934fb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9934fd: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 993505: jle 0x993643 */
  if ((zf || sf != of)) goto L_993643;
L_99350b: /* 99350b: jmp 0x993510 */
  goto L_993510;
L_993510: /* 993510: xor edx, edx */
  edx = 0;
/* 993512: mov eax, 0xcf6b88 */
  eax = 0xcf6b88u;
/* 993517: jmp 0x993520 */
  goto L_993520;
L_993520: /* 993520: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993522: add ecx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993526: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99352a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99352d: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993530: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 993534: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993537: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99353a: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 993540: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993543: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 993545: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 99354b: fmul qword ptr [esi + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x18u)));
/* 99354e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 993550: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 993553: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993555: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993557: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99355b: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99355e: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993561: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 993565: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993568: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99356b: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 993571: fmul qword ptr [esi + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x20u)));
/* 993574: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 99357a: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 99357d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99357f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 993582: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993584: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993586: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99358a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99358d: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993590: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993593: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 993596: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 99359c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99359d: cmp eax, 0xcf6bb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6bb8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9935a2: fmul qword ptr [esi + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x28u)));
/* 9935a5: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 9935ab: fmul qword ptr [esi + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x10u)));
/* 9935ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9935b0: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9935b3: jl 0x993520 */
  if ((sf != of)) goto L_993520;
L_9935b9: /* 9935b9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9935bd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9935c1: mov edx, edi */
  edx = edi;
/* 9935c3: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9935c6: lea ecx, [esp + edx + 0x58] */
  ecx = (uint32_t)(esp + edx + 0x58u);
/* 9935ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935cb: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 9935ce: lea ecx, [esp + edx*8 + 0x2c] */
  ecx = (uint32_t)(esp + edx*8 + 0x2cu);
/* 9935d2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 9935d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935d6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9935d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9935da: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 9935dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9935e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9935e2: mov dword ptr [esp + edi*4 + 0x34], eax */
  W32((uint32_t)(esp + edi*4 + 0x34u), eax);
/* 9935e6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9935e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9935eb: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 9935ee: mov edx, 0xcf6b80 */
  edx = 0xcf6b80u;
/* 9935f3: call 0x991690 */
  esp -= 4; W32(esp, 0x9935f8u); SPILL(); f_991690(); if (g_unwind) return; RELOAD();
/* 9935f8: lea eax, [edi*8] */
  eax = (uint32_t)(edi*8);
/* 9935ff: mov edx, 0xcf6bb8 */
  edx = 0xcf6bb8u;
/* 993604: fst qword ptr [eax + 0xcf6bb0] */
  WF64((uint32_t)(eax + 0xcf6bb0u), ST0);
/* 99360a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99360c: fcomp qword ptr [edx] */
  fpu_com(ST0, F64((uint32_t)(edx)));
  FPOP();
/* 99360e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993611: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993613: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993616: jp 0x993625 */
  if (pf) goto L_993625;
L_993618: /* 993618: mov eax, 1 */
  eax = 0x1u;
/* 99361d: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99361f: mov edi, eax */
  edi = eax;
/* 993621: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_993625: /* 993625: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 993629: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 99362b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99362f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 993630: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993632: cmp ecx, dword ptr [edx*4 + 0xb046b0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0xb046b0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993639: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 99363d: jl 0x993510 */
  if ((sf != of)) goto L_993510;
L_993643: /* 993643: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 993647: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99364b: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99364e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99364f: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 993653: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 993656: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993659: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99365b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99365f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 993663: jl 0x9934f0 */
  if ((sf != of)) goto L_9934f0;
L_993669: /* 993669: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99366c: mov edx, 1 */
  edx = 0x1u;
/* 993671: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 993673: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993675: jle 0x993685 */
  if ((zf || sf != of)) goto L_993685;
L_993677: /* 993677: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 99367a: mov eax, edx */
  eax = edx;
/* 99367c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99367f: lea esi, [esp + eax + 0x58] */
  esi = (uint32_t)(esp + eax + 0x58u);
/* 993683: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_993685: /* 993685: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 993688: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 99368b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99368e: lea eax, [esp + eax*8 + 0x2c] */
  eax = (uint32_t)(esp + eax*8 + 0x2cu);
/* 993692: mov esi, 2 */
  esi = 0x2u;
L_993697: /* 993697: mov edi, dword ptr [eax - 4] */
  edi = R32((uint32_t)(eax + 0xfffffffcu));
/* 99369a: mov dword ptr [ecx - 8], edi */
  W32((uint32_t)(ecx + 0xfffffff8u), edi);
/* 99369d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 99369f: mov dword ptr [ecx - 4], edi */
  W32((uint32_t)(ecx + 0xfffffffcu), edi);
/* 9936a2: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9936a5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 9936a7: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9936aa: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9936ad: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9936ae: jne 0x993697 */
  if (!zf) goto L_993697;
L_9936b0: /* 9936b0: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 9936b3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9936b5: je 0x9936cf */
  if (zf) goto L_9936cf;
L_9936b7: /* 9936b7: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 9936ba: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 9936bd: mov esi, dword ptr [esp + eax*8 + 0x2c] */
  esi = R32((uint32_t)(esp + eax*8 + 0x2cu));
/* 9936c1: mov eax, dword ptr [esp + eax*8 + 0x38] */
  eax = R32((uint32_t)(esp + eax*8 + 0x38u));
/* 9936c5: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9936c7: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9936c9: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 9936cc: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_9936cf: /* 9936cf: mov ecx, dword ptr [esp + edx*4 + 0x20] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x20u));
/* 9936d3: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9936d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9936d7: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 9936d9: fld qword ptr [edx*8 + 0xcf6bb0] */
  { double v = F64((uint32_t)(edx*8 + 0xcf6bb0u)); FPUSH(v); }
/* 9936e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9936e1: mov esp, ebp */
  esp = ebp;
/* 9936e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9936e4: ret  */
  esp += 4; SPILL(); return;
}

void f_99350d(void) {
  LOAD_REGS();
  goto L_99350d;
L_9934f0: /* 9934f0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9934f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9934f4: mov edx, dword ptr [ecx*4 + 0xb046b0] */
  edx = R32((uint32_t)(ecx*4 + 0xb046b0u));
/* 9934fb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9934fd: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 993505: jle 0x993643 */
  if ((zf || sf != of)) goto L_993643;
L_99350b: /* 99350b: jmp 0x993510 */
  goto L_993510;
L_99350d: /* 99350d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_993510: /* 993510: xor edx, edx */
  edx = 0;
/* 993512: mov eax, 0xcf6b88 */
  eax = 0xcf6b88u;
/* 993517: jmp 0x993520 */
  goto L_993520;
L_993520: /* 993520: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993522: add ecx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993526: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99352a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99352d: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993530: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 993534: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993537: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99353a: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 993540: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993543: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 993545: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 99354b: fmul qword ptr [esi + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x18u)));
/* 99354e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 993550: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 993553: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993555: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993557: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99355b: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99355e: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993561: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 993565: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993568: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99356b: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 993571: fmul qword ptr [esi + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x20u)));
/* 993574: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 99357a: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 99357d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99357f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 993582: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993584: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993586: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99358a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99358d: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993590: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993593: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 993596: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 99359c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99359d: cmp eax, 0xcf6bb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6bb8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9935a2: fmul qword ptr [esi + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x28u)));
/* 9935a5: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 9935ab: fmul qword ptr [esi + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x10u)));
/* 9935ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9935b0: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9935b3: jl 0x993520 */
  if ((sf != of)) goto L_993520;
L_9935b9: /* 9935b9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9935bd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9935c1: mov edx, edi */
  edx = edi;
/* 9935c3: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9935c6: lea ecx, [esp + edx + 0x58] */
  ecx = (uint32_t)(esp + edx + 0x58u);
/* 9935ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935cb: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 9935ce: lea ecx, [esp + edx*8 + 0x2c] */
  ecx = (uint32_t)(esp + edx*8 + 0x2cu);
/* 9935d2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 9935d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935d6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9935d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9935da: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 9935dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9935e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9935e2: mov dword ptr [esp + edi*4 + 0x34], eax */
  W32((uint32_t)(esp + edi*4 + 0x34u), eax);
/* 9935e6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9935e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9935eb: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 9935ee: mov edx, 0xcf6b80 */
  edx = 0xcf6b80u;
/* 9935f3: call 0x991690 */
  esp -= 4; W32(esp, 0x9935f8u); SPILL(); f_991690(); if (g_unwind) return; RELOAD();
/* 9935f8: lea eax, [edi*8] */
  eax = (uint32_t)(edi*8);
/* 9935ff: mov edx, 0xcf6bb8 */
  edx = 0xcf6bb8u;
/* 993604: fst qword ptr [eax + 0xcf6bb0] */
  WF64((uint32_t)(eax + 0xcf6bb0u), ST0);
/* 99360a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99360c: fcomp qword ptr [edx] */
  fpu_com(ST0, F64((uint32_t)(edx)));
  FPOP();
/* 99360e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993611: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993613: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993616: jp 0x993625 */
  if (pf) goto L_993625;
L_993618: /* 993618: mov eax, 1 */
  eax = 0x1u;
/* 99361d: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99361f: mov edi, eax */
  edi = eax;
/* 993621: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_993625: /* 993625: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 993629: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 99362b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99362f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 993630: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993632: cmp ecx, dword ptr [edx*4 + 0xb046b0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0xb046b0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993639: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 99363d: jl 0x993510 */
  if ((sf != of)) goto L_993510;
L_993643: /* 993643: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 993647: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99364b: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99364e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99364f: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 993653: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 993656: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993659: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99365b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99365f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 993663: jl 0x9934f0 */
  if ((sf != of)) goto L_9934f0;
L_993669: /* 993669: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99366c: mov edx, 1 */
  edx = 0x1u;
/* 993671: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 993673: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993675: jle 0x993685 */
  if ((zf || sf != of)) goto L_993685;
L_993677: /* 993677: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 99367a: mov eax, edx */
  eax = edx;
/* 99367c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99367f: lea esi, [esp + eax + 0x58] */
  esi = (uint32_t)(esp + eax + 0x58u);
/* 993683: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_993685: /* 993685: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 993688: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 99368b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99368e: lea eax, [esp + eax*8 + 0x2c] */
  eax = (uint32_t)(esp + eax*8 + 0x2cu);
/* 993692: mov esi, 2 */
  esi = 0x2u;
L_993697: /* 993697: mov edi, dword ptr [eax - 4] */
  edi = R32((uint32_t)(eax + 0xfffffffcu));
/* 99369a: mov dword ptr [ecx - 8], edi */
  W32((uint32_t)(ecx + 0xfffffff8u), edi);
/* 99369d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 99369f: mov dword ptr [ecx - 4], edi */
  W32((uint32_t)(ecx + 0xfffffffcu), edi);
/* 9936a2: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9936a5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 9936a7: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9936aa: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9936ad: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9936ae: jne 0x993697 */
  if (!zf) goto L_993697;
L_9936b0: /* 9936b0: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 9936b3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9936b5: je 0x9936cf */
  if (zf) goto L_9936cf;
L_9936b7: /* 9936b7: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 9936ba: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 9936bd: mov esi, dword ptr [esp + eax*8 + 0x2c] */
  esi = R32((uint32_t)(esp + eax*8 + 0x2cu));
/* 9936c1: mov eax, dword ptr [esp + eax*8 + 0x38] */
  eax = R32((uint32_t)(esp + eax*8 + 0x38u));
/* 9936c5: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9936c7: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9936c9: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 9936cc: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_9936cf: /* 9936cf: mov ecx, dword ptr [esp + edx*4 + 0x20] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x20u));
/* 9936d3: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9936d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9936d7: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 9936d9: fld qword ptr [edx*8 + 0xcf6bb0] */
  { double v = F64((uint32_t)(edx*8 + 0xcf6bb0u)); FPUSH(v); }
/* 9936e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9936e1: mov esp, ebp */
  esp = ebp;
/* 9936e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9936e4: ret  */
  esp += 4; SPILL(); return;
}

void f_993519(void) {
  LOAD_REGS();
  goto L_993519;
L_9934f0: /* 9934f0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 9934f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9934f4: mov edx, dword ptr [ecx*4 + 0xb046b0] */
  edx = R32((uint32_t)(ecx*4 + 0xb046b0u));
/* 9934fb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9934fd: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 993505: jle 0x993643 */
  if ((zf || sf != of)) goto L_993643;
L_99350b: /* 99350b: jmp 0x993510 */
  goto L_993510;
L_993510: /* 993510: xor edx, edx */
  edx = 0;
/* 993512: mov eax, 0xcf6b88 */
  eax = 0xcf6b88u;
/* 993517: jmp 0x993520 */
  goto L_993520;
L_993519: /* 993519: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_993520: /* 993520: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993522: add ecx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993526: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99352a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99352d: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993530: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 993534: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993537: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99353a: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 993540: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993543: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 993545: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 99354b: fmul qword ptr [esi + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x18u)));
/* 99354e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 993550: fstp qword ptr [eax - 0x20] */
  WF64((uint32_t)(eax + 0xffffffe0u), ST0); FPOP();
/* 993553: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993555: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993557: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99355b: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99355e: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993561: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 993565: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993568: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 99356b: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 993571: fmul qword ptr [esi + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x20u)));
/* 993574: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 99357a: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 99357d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99357f: fstp qword ptr [eax - 0x18] */
  WF64((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 993582: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 993584: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 993586: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 99358a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 99358d: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 993590: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* 993593: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 993596: fld qword ptr [ecx + 0xb043b8] */
  { double v = F64((uint32_t)(ecx + 0xb043b8u)); FPUSH(v); }
/* 99359c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 99359d: cmp eax, 0xcf6bb8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf6bb8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9935a2: fmul qword ptr [esi + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x28u)));
/* 9935a5: fld qword ptr [ecx + 0xb043b0] */
  { double v = F64((uint32_t)(ecx + 0xb043b0u)); FPUSH(v); }
/* 9935ab: fmul qword ptr [esi + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x10u)));
/* 9935ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 9935b0: fstp qword ptr [eax - 0x10] */
  WF64((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* 9935b3: jl 0x993520 */
  if ((sf != of)) goto L_993520;
L_9935b9: /* 9935b9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 9935bd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 9935c1: mov edx, edi */
  edx = edi;
/* 9935c3: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 9935c6: lea ecx, [esp + edx + 0x58] */
  ecx = (uint32_t)(esp + edx + 0x58u);
/* 9935ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935cb: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 9935ce: lea ecx, [esp + edx*8 + 0x2c] */
  ecx = (uint32_t)(esp + edx*8 + 0x2cu);
/* 9935d2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 9935d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935d6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 9935d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9935da: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 9935dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 9935e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 9935e2: mov dword ptr [esp + edi*4 + 0x34], eax */
  W32((uint32_t)(esp + edi*4 + 0x34u), eax);
/* 9935e6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9935e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 9935ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 9935eb: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 9935ee: mov edx, 0xcf6b80 */
  edx = 0xcf6b80u;
/* 9935f3: call 0x991690 */
  esp -= 4; W32(esp, 0x9935f8u); SPILL(); f_991690(); if (g_unwind) return; RELOAD();
/* 9935f8: lea eax, [edi*8] */
  eax = (uint32_t)(edi*8);
/* 9935ff: mov edx, 0xcf6bb8 */
  edx = 0xcf6bb8u;
/* 993604: fst qword ptr [eax + 0xcf6bb0] */
  WF64((uint32_t)(eax + 0xcf6bb0u), ST0);
/* 99360a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 99360c: fcomp qword ptr [edx] */
  fpu_com(ST0, F64((uint32_t)(edx)));
  FPOP();
/* 99360e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 993611: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993613: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993616: jp 0x993625 */
  if (pf) goto L_993625;
L_993618: /* 993618: mov eax, 1 */
  eax = 0x1u;
/* 99361d: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99361f: mov edi, eax */
  edi = eax;
/* 993621: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_993625: /* 993625: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 993629: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 99362b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99362f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 993630: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 993632: cmp ecx, dword ptr [edx*4 + 0xb046b0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0xb046b0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 993639: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 99363d: jl 0x993510 */
  if ((sf != of)) goto L_993510;
L_993643: /* 993643: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 993647: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 99364b: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99364e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99364f: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 993653: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 993656: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 993659: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99365b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 99365f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 993663: jl 0x9934f0 */
  if ((sf != of)) goto L_9934f0;
L_993669: /* 993669: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 99366c: mov edx, 1 */
  edx = 0x1u;
/* 993671: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 993673: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 993675: jle 0x993685 */
  if ((zf || sf != of)) goto L_993685;
L_993677: /* 993677: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 99367a: mov eax, edx */
  eax = edx;
/* 99367c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 99367f: lea esi, [esp + eax + 0x58] */
  esi = (uint32_t)(esp + eax + 0x58u);
/* 993683: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_993685: /* 993685: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 993688: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 99368b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99368e: lea eax, [esp + eax*8 + 0x2c] */
  eax = (uint32_t)(esp + eax*8 + 0x2cu);
/* 993692: mov esi, 2 */
  esi = 0x2u;
L_993697: /* 993697: mov edi, dword ptr [eax - 4] */
  edi = R32((uint32_t)(eax + 0xfffffffcu));
/* 99369a: mov dword ptr [ecx - 8], edi */
  W32((uint32_t)(ecx + 0xfffffff8u), edi);
/* 99369d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 99369f: mov dword ptr [ecx - 4], edi */
  W32((uint32_t)(ecx + 0xfffffffcu), edi);
/* 9936a2: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 9936a5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 9936a7: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9936aa: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9936ad: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 9936ae: jne 0x993697 */
  if (!zf) goto L_993697;
L_9936b0: /* 9936b0: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 9936b3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9936b5: je 0x9936cf */
  if (zf) goto L_9936cf;
L_9936b7: /* 9936b7: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 9936ba: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 9936bd: mov esi, dword ptr [esp + eax*8 + 0x2c] */
  esi = R32((uint32_t)(esp + eax*8 + 0x2cu));
/* 9936c1: mov eax, dword ptr [esp + eax*8 + 0x38] */
  eax = R32((uint32_t)(esp + eax*8 + 0x38u));
/* 9936c5: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 9936c7: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 9936c9: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 9936cc: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_9936cf: /* 9936cf: mov ecx, dword ptr [esp + edx*4 + 0x20] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x20u));
/* 9936d3: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9936d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9936d7: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 9936d9: fld qword ptr [edx*8 + 0xcf6bb0] */
  { double v = F64((uint32_t)(edx*8 + 0xcf6bb0u)); FPUSH(v); }
/* 9936e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9936e1: mov esp, ebp */
  esp = ebp;
/* 9936e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9936e4: ret  */
  esp += 4; SPILL(); return;
}

void f_9936f0(void) {
  LOAD_REGS();
L_9936f0: /* 9936f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9936f1: mov ebp, esp */
  ebp = esp;
/* 9936f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9936f6: sub esp, 0x504 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x504u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9936fc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 9936ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 993701: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 993702: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 993703: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 993704: mov ebx, 1 */
  ebx = 0x1u;
/* 993709: je 0x994497 */
  if (zf) goto L_994497;
L_99370f: /* 99370f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 993711: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 993713: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 993717: je 0x994497 */
  if (zf) goto L_994497;
L_99371d: /* 99371d: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 993721: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 993727: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 99372b: fld qword ptr [ecx + 0x188] */
  { double v = F64((uint32_t)(ecx + 0x188u)); FPUSH(v); }
/* 993731: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 993737: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 99373b: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 99373f: mov dword ptr [0xcf7328], eax */
  W32((uint32_t)(0xcf7328u), eax);
/* 993744: mov dword ptr [0xcf732c], edx */
  W32((uint32_t)(0xcf732cu), edx);
/* 99374a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99374c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99374f: jp 0x993759 */
  if (pf) goto L_993759;
L_993751: /* 993751: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 993757: jmp 0x99375f */
  goto L_99375f;
L_993759: /* 993759: fld qword ptr [ecx + 0x188] */
  { double v = F64((uint32_t)(ecx + 0x188u)); FPUSH(v); }
L_99375f: /* 99375f: fstp qword ptr [0xcf7310] */
  WF64((uint32_t)(0xcf7310u), ST0); FPOP();
/* 993765: fld qword ptr [ecx + 0x190] */
  { double v = F64((uint32_t)(ecx + 0x190u)); FPUSH(v); }
/* 99376b: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 993771: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 993773: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 993776: jp 0x993780 */
  if (pf) goto L_993780;
L_993778: /* 993778: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 99377e: jmp 0x993786 */
  goto L_993786;
L_993780: /* 993780: fld qword ptr [ecx + 0x190] */
  { double v = F64((uint32_t)(ecx + 0x190u)); FPUSH(v); }
L_993786: /* 993786: fstp qword ptr [0xcf7318] */
  WF64((uint32_t)(0xcf7318u), ST0); FPOP();
/* 99378c: fld qword ptr [ecx + 0x198] */
  { double v = F64((uint32_t)(ecx + 0x198u)); FPUSH(v); }
/* 993792: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 993798: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99379a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99379d: jp 0x9937a7 */
  if (pf) goto L_9937a7;
L_99379f: /* 99379f: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 9937a5: jmp 0x9937ad */
  goto L_9937ad;
L_9937a7: /* 9937a7: fld qword ptr [ecx + 0x198] */
  { double v = F64((uint32_t)(ecx + 0x198u)); FPUSH(v); }
L_9937ad: /* 9937ad: fstp qword ptr [0xcf7320] */
  WF64((uint32_t)(0xcf7320u), ST0); FPOP();
/* 9937b3: mov al, byte ptr [ecx + 0x1a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1a4u))) & 0xffu);
/* 9937b9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 9937bb: je 0x9937ce */
  if (zf) goto L_9937ce;
L_9937bd: /* 9937bd: mov eax, 4 */
  eax = 0x4u;
/* 9937c2: mov dword ptr [ecx + 0x1a8], eax */
  W32((uint32_t)(ecx + 0x1a8u), eax);
/* 9937c8: mov dword ptr [ecx + 0x1a0], eax */
  W32((uint32_t)(ecx + 0x1a0u), eax);
L_9937ce: /* 9937ce: mov eax, 0xcf71a0 */
  eax = 0xcf71a0u;
/* 9937d3: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9937d5: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 9937dd: lea edi, [ecx + 8] */
  edi = (uint32_t)(ecx + 0x8u);
/* 9937e0: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9937e4: jmp 0x9937f0 */
  goto L_9937f0;
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
