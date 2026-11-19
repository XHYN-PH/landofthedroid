#include "recomp.h"
#include "rec_mod.h"

void f_98b557(void) {
  LOAD_REGS();
  goto L_98b557;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b557: /* 98b557: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 98b55e: mov edi, edi */
  edi = edi;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}

void f_98b759(void) {
  LOAD_REGS();
  goto L_98b759;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b759: /* 98b759: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}

void f_98b924(void) {
  LOAD_REGS();
  goto L_98b924;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b924: /* 98b924: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 98b92b: jmp 0x98b930 */
  goto L_98b930;
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}

void f_98b92d(void) {
  LOAD_REGS();
  goto L_98b92d;
L_98aca6: /* 98aca6: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 98aca9: sub eax, dword ptr [esp + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98acad: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98acb0: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98acb4: jb 0x98acbe */
  if (cf) goto L_98acbe;
L_98acb6: /* 98acb6: mov dword ptr [esp + 0x30], 4 */
  W32((uint32_t)(esp + 0x30u), 0x4u);
L_98acbe: /* 98acbe: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98acc3: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 98acc7: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 98accb: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 98acd3: jle 0x98ba3c */
  if ((zf || sf != of)) goto L_98ba3c;
L_98acd9: /* 98acd9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98acdc: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ace0: mov eax, ecx */
  eax = ecx;
/* 98ace2: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98ace7: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 98aceb: mov eax, ecx */
  eax = ecx;
/* 98aced: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98acf0: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98acf5: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 98acf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98ad00: /* 98ad00: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 98ad03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 98ad05: mov esi, dword ptr [esp + 0x58] */
  esi = R32((uint32_t)(esp + 0x58u));
/* 98ad09: fstp qword ptr [esp + 0x2d0] */
  WF64((uint32_t)(esp + 0x2d0u), ST0); FPOP();
/* 98ad10: xor edi, edi */
  edi = 0;
/* 98ad12: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 98ad15: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 98ad19: fstp qword ptr [esp + 0x2d8] */
  WF64((uint32_t)(esp + 0x2d8u), ST0); FPOP();
/* 98ad20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98ad23: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 98ad26: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ad28: fstp qword ptr [esp + 0x2e0] */
  WF64((uint32_t)(esp + 0x2e0u), ST0); FPOP();
/* 98ad2f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ad32: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98ad36: jb 0x98ad40 */
  if (cf) goto L_98ad40;
L_98ad38: /* 98ad38: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
L_98ad40: /* 98ad40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ad43: xor eax, eax */
  eax = 0;
/* 98ad45: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ad47: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ad4e: je 0x98af23 */
  if (zf) goto L_98af23;
L_98ad54: /* 98ad54: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98ad58: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad5a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ad5e: je 0x98ae5d */
  if (zf) goto L_98ae5d;
L_98ad64: /* 98ad64: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98ad65: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98ad6b: /* 98ad6b: xor edi, edi */
  edi = 0;
/* 98ad6d: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98ad71: jmp 0x98ad80 */
  goto L_98ad80;
L_98ad80: /* 98ad80: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98ad88: jmp 0x98ad90 */
  goto L_98ad90;
L_98ad90: /* 98ad90: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98ad94: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ad98: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ad9e: /* 98ad9e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98ada2: cmp dword ptr [esp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ada6: jge 0x98ae23 */
  if ((sf == of)) goto L_98ae23;
L_98ada8: /* 98ada8: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98adab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98adae: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 98adb1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98adb3: and edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98adb9: cmp edx, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98adbc: jb 0x98adc3 */
  if (cf) goto L_98adc3;
L_98adbe: /* 98adbe: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98adc1: jbe 0x98ae23 */
  if ((cf | zf)) goto L_98ae23;
L_98adc3: /* 98adc3: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98adc7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98adca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98adcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98adcc: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98add3: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98add6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adda: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98ade1: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ade4: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ade8: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98adee: fstp qword ptr [edx - 8] */
  WF64((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 98adf1: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98adf5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98adf9: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98adfd: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae03: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98ae05: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 98ae09: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98ae0d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98ae11: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98ae17: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98ae1a: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98ae21: jmp 0x98ae2c */
  goto L_98ae2c;
L_98ae23: /* 98ae23: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98ae2b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98ae2c: /* 98ae2c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98ae30: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98ae32: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae35: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae39: jl 0x98ad90 */
  if ((sf != of)) goto L_98ad90;
L_98ae3f: /* 98ae3f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98ae43: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ae46: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ae47: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae4a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98ae4e: lea esi, [esi + edx - 4] */
  esi = (uint32_t)(esi + edx + 0xfffffffcu);
/* 98ae52: jl 0x98ad80 */
  if ((sf != of)) goto L_98ad80;
L_98ae58: /* 98ae58: jmp 0x98b353 */
  goto L_98b353;
L_98ae5d: /* 98ae5d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_98ae65: /* 98ae65: xor ecx, ecx */
  ecx = 0;
/* 98ae67: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98ae6b: jmp 0x98ae70 */
  goto L_98ae70;
L_98ae70: /* 98ae70: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae74: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae76: /* 98ae76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98ae7a: cmp edx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ae7e: jge 0x98aee9 */
  if ((sf == of)) goto L_98aee9;
L_98ae80: /* 98ae80: movzx ecx, byte ptr [esi] */
  ecx = (uint32_t)(R8((uint32_t)(esi)));
/* 98ae83: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ae86: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 98ae89: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98ae8d: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 98ae90: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98ae91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ae92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98ae99: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* 98ae9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aea0: lea ecx, [esp + ecx*8 + 0x150] */
  ecx = (uint32_t)(esp + ecx*8 + 0x150u);
/* 98aea7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98aeaa: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aeae: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aeb4: fstp qword ptr [ecx - 8] */
  WF64((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* 98aeb7: movzx eax, byte ptr [edx + 1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x1u)));
/* 98aebb: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98aebf: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aec3: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aec9: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 98aecb: movzx edx, byte ptr [edx + 2] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x2u)));
/* 98aecf: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98aed3: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98aed7: fmul qword ptr [0xa0b268] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b268u)));
/* 98aedd: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 98aee0: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98aee7: jmp 0x98aef2 */
  goto L_98aef2;
L_98aee9: /* 98aee9: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98aef1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98aef2: /* 98aef2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98aef6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98aef7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98aef8: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98aefb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98aeff: jl 0x98ae70 */
  if ((sf != of)) goto L_98ae70;
L_98af05: /* 98af05: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98af09: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98af0c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98af0d: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af10: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af14: lea esi, [esi + ecx - 4] */
  esi = (uint32_t)(esi + ecx + 0xfffffffcu);
/* 98af18: jl 0x98ae65 */
  if ((sf != of)) goto L_98ae65;
L_98af1e: /* 98af1e: jmp 0x98b353 */
  goto L_98b353;
L_98af23: /* 98af23: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98af27: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98af2b: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 98af2f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af31: je 0x98b1fc */
  if (zf) goto L_98b1fc;
L_98af37: /* 98af37: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af38: je 0x98b0aa */
  if (zf) goto L_98b0aa;
L_98af3e: /* 98af3e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98af3f: jne 0x98b353 */
  if (!zf) goto L_98b353;
L_98af45: /* 98af45: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98af48: xor ecx, ecx */
  ecx = 0;
/* 98af4a: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98af4c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98af50: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
L_98af54: /* 98af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98af58: xor edx, edx */
  edx = 0;
/* 98af5a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98af5e: mov edi, edi */
  edi = edi;
L_98af60: /* 98af60: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af64: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af6a: /* 98af6a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98af6e: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98af72: jge 0x98b064 */
  if ((sf == of)) goto L_98b064;
L_98af78: /* 98af78: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98af7a: mov edi, dword ptr [ebx + 0x64] */
  edi = R32((uint32_t)(ebx + 0x64u));
/* 98af7d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98af7f: cmp edi, dword ptr [esp + 0x6c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98af83: jbe 0x98b064 */
  if ((cf | zf)) goto L_98b064;
L_98af89: /* 98af89: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98af8d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98af8e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98af91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98af92: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98af99: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98af9c: mov edi, eax */
  edi = eax;
/* 98af9e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98afa2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afa6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afa8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afaa: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98afb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afb3: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98afb7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afbb: jge 0x98afc3 */
  if ((sf == of)) goto L_98afc3;
L_98afbd: /* 98afbd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afc3: /* 98afc3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98afc7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98afc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98afcb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98afcf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98afd3: jge 0x98afdb */
  if ((sf == of)) goto L_98afdb;
L_98afd5: /* 98afd5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98afdb: /* 98afdb: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98afde: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98afe0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98afe4: mov edi, eax */
  edi = eax;
/* 98afe6: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98afe8: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98afea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98afec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98aff0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98aff2: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98aff6: jge 0x98affe */
  if ((sf == of)) goto L_98affe;
L_98aff8: /* 98aff8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98affe: /* 98affe: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b002: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b006: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b00a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b00e: jge 0x98b016 */
  if ((sf == of)) goto L_98b016;
L_98b010: /* 98b010: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b016: /* 98b016: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b019: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b01b: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b01f: mov edi, eax */
  edi = eax;
/* 98b021: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b023: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b025: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b027: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b02b: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b02e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b032: jge 0x98b03a */
  if ((sf == of)) goto L_98b03a;
L_98b034: /* 98b034: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b03a: /* 98b03a: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b03c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b03e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b042: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b046: jge 0x98b04e */
  if ((sf == of)) goto L_98b04e;
L_98b048: /* 98b048: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b04e: /* 98b04e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b050: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b054: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b057: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b05e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b062: jmp 0x98b06d */
  goto L_98b06d;
L_98b064: /* 98b064: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b06c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b06d: /* 98b06d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b071: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 98b075: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b076: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b078: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b07b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b07f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b083: jl 0x98af60 */
  if ((sf != of)) goto L_98af60;
L_98b089: /* 98b089: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98b08d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b091: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b092: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b094: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b097: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98b09b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b09f: jl 0x98af54 */
  if ((sf != of)) goto L_98af54;
L_98b0a5: /* 98b0a5: jmp 0x98b353 */
  goto L_98b353;
L_98b0aa: /* 98b0aa: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b0ad: xor edi, edi */
  edi = 0;
/* 98b0af: xor ecx, ecx */
  ecx = 0;
/* 98b0b1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b0b3: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b0b7: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b0bb: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b0bf: nop  */
L_98b0c0: /* 98b0c0: xor edx, edx */
  edx = 0;
/* 98b0c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_98b0c6: /* 98b0c6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0ca: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0cc: /* 98b0cc: cmp edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0d0: jge 0x98b0e2 */
  if ((sf == of)) goto L_98b0e2;
L_98b0d2: /* 98b0d2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98b0d4: cmp esi, dword ptr [ebx + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98b0d7: jb 0x98b116 */
  if (cf) goto L_98b116;
L_98b0d9: /* 98b0d9: cmp esi, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b0dc: ja 0x98b116 */
  if ((!cf && !zf)) goto L_98b116;
L_98b0de: /* 98b0de: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_98b0e2: /* 98b0e2: mov dword ptr [esp + ecx*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + ecx*4 + 0x70u), 0xffffffffu);
/* 98b0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_98b0eb: /* 98b0eb: add esi, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b0ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b0f0: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b0f3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98b0f7: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b0fb: jl 0x98b0c6 */
  if ((sf != of)) goto L_98b0c6;
L_98b0fd: /* 98b0fd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b101: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b102: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b104: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b107: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98b10b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98b10f: jl 0x98b0c0 */
  if ((sf != of)) goto L_98b0c0;
L_98b111: /* 98b111: jmp 0x98b353 */
  goto L_98b353;
L_98b116: /* 98b116: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
/* 98b11a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b11b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98b11e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b11f: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b126: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 98b129: mov edi, eax */
  edi = eax;
/* 98b12b: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98b12f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b133: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b135: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b137: lea edx, [esp + edx*8 + 0x150] */
  edx = (uint32_t)(esp + edx*8 + 0x150u);
/* 98b13e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b140: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b144: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b148: jge 0x98b150 */
  if ((sf == of)) goto L_98b150;
L_98b14a: /* 98b14a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b150: /* 98b150: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b154: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b156: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b158: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b15c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b160: jge 0x98b168 */
  if ((sf == of)) goto L_98b168;
L_98b162: /* 98b162: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b168: /* 98b168: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 98b16b: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b16d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b171: mov edi, eax */
  edi = eax;
/* 98b173: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b175: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b177: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b179: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b17d: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 98b17f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b183: jge 0x98b18b */
  if ((sf == of)) goto L_98b18b;
L_98b185: /* 98b185: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b18b: /* 98b18b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b18f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b193: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b197: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b19b: jge 0x98b1a3 */
  if ((sf == of)) goto L_98b1a3;
L_98b19d: /* 98b19d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1a3: /* 98b1a3: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b1a6: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1a8: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b1ac: mov edi, eax */
  edi = eax;
/* 98b1ae: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 98b1b0: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 98b1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b1b4: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98b1b8: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 98b1bb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1bf: jge 0x98b1c7 */
  if ((sf == of)) goto L_98b1c7;
L_98b1c1: /* 98b1c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1c7: /* 98b1c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b1c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b1cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b1cf: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b1d3: jge 0x98b1db */
  if ((sf == of)) goto L_98b1db;
L_98b1d5: /* 98b1d5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b1db: /* 98b1db: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b1dd: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98b1e1: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98b1e5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98b1e9: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 98b1ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b1f3: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98b1f7: jmp 0x98b0eb */
  goto L_98b0eb;
L_98b1fc: /* 98b1fc: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98b1ff: xor esi, esi */
  esi = 0;
/* 98b201: xor edi, edi */
  edi = 0;
/* 98b203: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b205: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b209: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98b20d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b210: /* 98b210: xor ecx, ecx */
  ecx = 0;
/* 98b212: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_98b216: /* 98b216: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b21a: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b220: /* 98b220: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b224: jge 0x98b318 */
  if ((sf == of)) goto L_98b318;
L_98b22a: /* 98b22a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b22e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 98b230: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b234: mov dword ptr [esp + edi*4 + 0x70], eax */
  W32((uint32_t)(esp + edi*4 + 0x70u), eax);
/* 98b238: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 98b23b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b23c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98b23d: mov dword ptr [esp + 0x148], eax */
  W32((uint32_t)(esp + 0x148u), eax);
/* 98b244: lea eax, [ebx + 0x58] */
  eax = (uint32_t)(ebx + 0x58u);
/* 98b247: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 98b249: mov ebx, eax */
  ebx = eax;
/* 98b24b: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b24d: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b24f: lea esi, [esp + esi*8 + 0x150] */
  esi = (uint32_t)(esp + esi*8 + 0x150u);
/* 98b256: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b258: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b25c: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b260: jge 0x98b268 */
  if ((sf == of)) goto L_98b268;
L_98b262: /* 98b262: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b268: /* 98b268: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 98b26c: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b26e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b270: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b274: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b278: jge 0x98b280 */
  if ((sf == of)) goto L_98b280;
L_98b27a: /* 98b27a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b280: /* 98b280: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98b283: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b285: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b289: add eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b28c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 98b28f: mov ebx, eax */
  ebx = eax;
/* 98b291: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ebx = r;
  }
/* 98b293: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 98b295: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b297: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98b29b: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 98b29d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2a1: jge 0x98b2a9 */
  if ((sf == of)) goto L_98b2a9;
L_98b2a3: /* 98b2a3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2a9: /* 98b2a9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98b2ad: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2b1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2b5: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2b9: jge 0x98b2c1 */
  if ((sf == of)) goto L_98b2c1;
L_98b2bb: /* 98b2bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2c1: /* 98b2c1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98b2c4: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 98b2c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b2c9: mov ecx, eax */
  ecx = eax;
/* 98b2cb: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 98b2cd: mov edx, ecx */
  edx = ecx;
/* 98b2cf: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2d3: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b2d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b2d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b2db: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 98b2de: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2e2: jge 0x98b2ea */
  if ((sf == of)) goto L_98b2ea;
L_98b2e4: /* 98b2e4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b2ea: /* 98b2ea: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 98b2ee: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b2f2: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b2f6: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b2fa: jge 0x98b302 */
  if ((sf == of)) goto L_98b302;
L_98b2fc: /* 98b2fc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_98b302: /* 98b302: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b304: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b308: fstp qword ptr [esi + 0x10] */
  WF64((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 98b30b: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b312: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 98b316: jmp 0x98b321 */
  goto L_98b321;
L_98b318: /* 98b318: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b320: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_98b321: /* 98b321: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b325: add edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b32a: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b32d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b331: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b335: jl 0x98b216 */
  if ((sf != of)) goto L_98b216;
L_98b33b: /* 98b33b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b33f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b340: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b342: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b345: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 98b349: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b34d: jl 0x98b210 */
  if ((sf != of)) goto L_98b210;
L_98b353: /* 98b353: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 98b357: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b35d: je 0x98b747 */
  if (zf) goto L_98b747;
L_98b363: /* 98b363: cmp ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b369: jne 0x98b84d */
  if (!zf) goto L_98b84d;
L_98b36f: /* 98b36f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b373: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 98b376: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98b37a: xor edi, edi */
  edi = 0;
/* 98b37c: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98b37f: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98b381: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98b385: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b389: mov dword ptr [esp + 0xb0], edi */
  W32((uint32_t)(esp + 0xb0u), edi);
/* 98b390: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b394: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b398: mov esi, edi */
  esi = edi;
/* 98b39a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98b3a0: /* 98b3a0: xor edx, edx */
  edx = 0;
/* 98b3a2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_98b3a6: /* 98b3a6: cmp edx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3aa: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b0: /* 98b3b0: cmp esi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b3b4: jge 0x98b42f */
  if ((sf == of)) goto L_98b42f;
L_98b3b6: /* 98b3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98b3b8: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 98b3bb: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b3bf: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98b3c3: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b3c5: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 98b3c7: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 98b3c9: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b3d0: mov dword ptr [esp + edi*4 + 0x70], ecx */
  W32((uint32_t)(esp + edi*4 + 0x70u), ecx);
/* 98b3d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b3d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b3d7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98b3db: jne 0x98b3e5 */
  if (!zf) goto L_98b3e5;
L_98b3dd: /* 98b3dd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 98b3e3: jmp 0x98b40b */
  goto L_98b40b;
L_98b3e5: /* 98b3e5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3e7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b3eb: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b3ef: jge 0x98b3f7 */
  if ((sf == of)) goto L_98b3f7;
L_98b3f1: /* 98b3f1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b3f7: /* 98b3f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b3f9: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98b3fd: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b401: jge 0x98b409 */
  if ((sf == of)) goto L_98b409;
L_98b403: /* 98b403: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b409: /* 98b409: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
L_98b40b: /* 98b40b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98b40f: fstp dword ptr [esp + ecx*4 + 0xb4] */
  WF32((uint32_t)(esp + ecx*4 + 0xb4u), ST0); FPOP();
/* 98b416: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b41d: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98b421: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b422: mov dword ptr [esp + 0xb0], ecx */
  W32((uint32_t)(esp + 0xb0u), ecx);
/* 98b429: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98b42d: jmp 0x98b43c */
  goto L_98b43c;
L_98b42f: /* 98b42f: mov dword ptr [esp + edi*4 + 0x70], 0xffffffff */
  W32((uint32_t)(esp + edi*4 + 0x70u), 0xffffffffu);
/* 98b437: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b438: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
L_98b43c: /* 98b43c: add ecx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b440: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b441: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b444: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98b448: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b44c: jl 0x98b3a6 */
  if ((sf != of)) goto L_98b3a6;
L_98b452: /* 98b452: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98b456: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b457: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b459: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b45c: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98b460: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98b464: jl 0x98b3a0 */
  if ((sf != of)) goto L_98b3a0;
L_98b46a: /* 98b46a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 98b46d: mov edx, ecx */
  edx = ecx;
/* 98b46f: and ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98b475: mov dword ptr [esp + 0xf8], ecx */
  W32((uint32_t)(esp + 0xf8u), ecx);
/* 98b47c: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 98b483: and edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98b489: xor edi, edi */
  edi = 0;
/* 98b48b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b48d: mov dword ptr [esp + 0xf4], edx */
  W32((uint32_t)(esp + 0xf4u), edx);
/* 98b494: jne 0x98b4a1 */
  if (!zf) goto L_98b4a1;
L_98b496: /* 98b496: xor esi, esi */
  esi = 0;
/* 98b498: mov dword ptr [esp + 0x100], edi */
  W32((uint32_t)(esp + 0x100u), edi);
/* 98b49f: jmp 0x98b4ca */
  goto L_98b4ca;
L_98b4a1: /* 98b4a1: lea eax, [esp + 0xb0] */
  eax = (uint32_t)(esp + 0xb0u);
/* 98b4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b4a9: call 0x995270 */
  esp -= 4; W32(esp, 0x98b4aeu); SPILL(); f_995270(); if (g_unwind) return; RELOAD();
/* 98b4ae: mov eax, dword ptr [esp + 0x104] */
  eax = R32((uint32_t)(esp + 0x104u));
/* 98b4b5: mov esi, dword ptr [esp + 0x108] */
  esi = R32((uint32_t)(esp + 0x108u));
/* 98b4bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b4bf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b4c1: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b4c8: jne 0x98b505 */
  if (!zf) goto L_98b505;
L_98b4ca: /* 98b4ca: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4d1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b4d2: xor ecx, ecx */
  ecx = 0;
/* 98b4d4: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4d6: mov dword ptr [esp + 0x104], esi */
  W32((uint32_t)(esp + 0x104u), esi);
/* 98b4dd: jle 0x98b4fa */
  if ((zf || sf != of)) goto L_98b4fa;
L_98b4df: /* 98b4df: nop  */
L_98b4e0: /* 98b4e0: mov dword ptr [esp + ecx*4 + 0x108], edi */
  W32((uint32_t)(esp + ecx*4 + 0x108u), edi);
/* 98b4e7: mov edx, dword ptr [esp + 0xb0] */
  edx = R32((uint32_t)(esp + 0xb0u));
/* 98b4ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b4ef: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b4f1: jl 0x98b4e0 */
  if ((sf != of)) goto L_98b4e0;
L_98b4f3: /* 98b4f3: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
L_98b4fa: /* 98b4fa: mov dword ptr [esp + 0xfc], 6 */
  W32((uint32_t)(esp + 0xfcu), 0x6u);
L_98b505: /* 98b505: mov edx, dword ptr [esp + 0x100] */
  edx = R32((uint32_t)(esp + 0x100u));
/* 98b50c: mov edi, dword ptr [esp + 0xfc] */
  edi = R32((uint32_t)(esp + 0xfcu));
/* 98b513: xor ecx, ecx */
  ecx = 0;
/* 98b515: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b517: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 98b51a: xor edx, edx */
  edx = 0;
/* 98b51c: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b51f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b522: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b524: jne 0x98b545 */
  if (!zf) goto L_98b545;
L_98b526: /* 98b526: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 98b52d: mov dword ptr [esp + 0x100], esi */
  W32((uint32_t)(esp + 0x100u), esi);
/* 98b534: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 98b53b: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98b543: jmp 0x98b54d */
  goto L_98b54d;
L_98b545: /* 98b545: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_98b54d: /* 98b54d: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98b551: xor edx, edx */
  edx = 0;
/* 98b553: xor esi, esi */
  esi = 0;
/* 98b555: jmp 0x98b560 */
  goto L_98b560;
L_98b560: /* 98b560: mov ecx, 0xff */
  ecx = 0xffu;
/* 98b565: cmp dword ptr [esp + esi*4 + 0x100], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b56c: jle 0x98b575 */
  if ((zf || sf != of)) goto L_98b575;
L_98b56e: /* 98b56e: mov dword ptr [esp + esi*4 + 0x100], ecx */
  W32((uint32_t)(esp + esi*4 + 0x100u), ecx);
L_98b575: /* 98b575: cmp dword ptr [esp + esi*4 + 0x100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + esi*4 + 0x100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b57c: jge 0x98b585 */
  if ((sf == of)) goto L_98b585;
L_98b57e: /* 98b57e: mov dword ptr [esp + esi*4 + 0x100], edx */
  W32((uint32_t)(esp + esi*4 + 0x100u), edx);
L_98b585: /* 98b585: mov cl, byte ptr [esp + esi*4 + 0x100] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + esi*4 + 0x100u))) & 0xffu);
/* 98b58c: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* 98b58e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b58f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98b590: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b593: jl 0x98b560 */
  if ((sf != of)) goto L_98b560;
L_98b595: /* 98b595: xor edx, edx */
  edx = 0;
/* 98b597: mov ecx, edi */
  ecx = edi;
/* 98b599: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 98b59d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98b59f: xor edi, edi */
  edi = 0;
/* 98b5a1: mov word ptr [ecx + 4], dx */
  W16((uint32_t)(ecx + 0x4u), (edx & 0xffffu));
/* 98b5a5: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98b5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b5b0: /* 98b5b0: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b5b4: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b5b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b5b9: jl 0x98b60a */
  if ((sf != of)) goto L_98b60a;
L_98b5bb: /* 98b5bb: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b5c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b5c8: je 0x98b605 */
  if (zf) goto L_98b605;
L_98b5ca: /* 98b5ca: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b5d1: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5d4: jne 0x98b5e4 */
  if (!zf) goto L_98b5e4;
L_98b5d6: /* 98b5d6: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5d9: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5db: /* 98b5db: mov ecx, 9 */
  ecx = 0x9u;
/* 98b5e0: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5e2: jmp 0x98b603 */
  goto L_98b603;
L_98b5e4: /* 98b5e4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b5e7: jne 0x98b605 */
  if (!zf) goto L_98b605;
L_98b5e9: /* 98b5e9: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5ec: jg 0x98b605 */
  if ((!zf && sf == of)) goto L_98b605;
L_98b5ee: /* 98b5ee: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b5f1: jle 0x98b5fc */
  if ((zf || sf != of)) goto L_98b5fc;
L_98b5f3: /* 98b5f3: mov ecx, 7 */
  ecx = 0x7u;
/* 98b5f8: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b5fa: jmp 0x98b603 */
  goto L_98b603;
L_98b5fc: /* 98b5fc: xor ecx, ecx */
  ecx = 0;
/* 98b5fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b600: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b603: /* 98b603: mov esi, ecx */
  esi = ecx;
L_98b605: /* 98b605: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b608: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b60a: /* 98b60a: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b60e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b60f: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b612: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b614: jl 0x98b665 */
  if ((sf != of)) goto L_98b665;
L_98b616: /* 98b616: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b61d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b621: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b623: je 0x98b660 */
  if (zf) goto L_98b660;
L_98b625: /* 98b625: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b62c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b62f: jne 0x98b63f */
  if (!zf) goto L_98b63f;
L_98b631: /* 98b631: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b634: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b636: /* 98b636: mov ecx, 9 */
  ecx = 0x9u;
/* 98b63b: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b63d: jmp 0x98b65e */
  goto L_98b65e;
L_98b63f: /* 98b63f: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b642: jne 0x98b660 */
  if (!zf) goto L_98b660;
L_98b644: /* 98b644: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b647: jg 0x98b660 */
  if ((!zf && sf == of)) goto L_98b660;
L_98b649: /* 98b649: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b64c: jle 0x98b657 */
  if ((zf || sf != of)) goto L_98b657;
L_98b64e: /* 98b64e: mov ecx, 7 */
  ecx = 0x7u;
/* 98b653: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b655: jmp 0x98b65e */
  goto L_98b65e;
L_98b657: /* 98b657: xor ecx, ecx */
  ecx = 0;
/* 98b659: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b65b: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b65e: /* 98b65e: mov esi, ecx */
  esi = ecx;
L_98b660: /* 98b660: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b663: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b665: /* 98b665: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b669: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b66a: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b66d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b66f: jl 0x98b6c0 */
  if ((sf != of)) goto L_98b6c0;
L_98b671: /* 98b671: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b678: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b67c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b67e: je 0x98b6bb */
  if (zf) goto L_98b6bb;
L_98b680: /* 98b680: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b687: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b68a: jne 0x98b69a */
  if (!zf) goto L_98b69a;
L_98b68c: /* 98b68c: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b68f: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b691: /* 98b691: mov ecx, 9 */
  ecx = 0x9u;
/* 98b696: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b698: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b69a: /* 98b69a: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b69d: jne 0x98b6bb */
  if (!zf) goto L_98b6bb;
L_98b69f: /* 98b69f: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a2: jg 0x98b6bb */
  if ((!zf && sf == of)) goto L_98b6bb;
L_98b6a4: /* 98b6a4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6a7: jle 0x98b6b2 */
  if ((zf || sf != of)) goto L_98b6b2;
L_98b6a9: /* 98b6a9: mov ecx, 7 */
  ecx = 0x7u;
/* 98b6ae: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6b0: jmp 0x98b6b9 */
  goto L_98b6b9;
L_98b6b2: /* 98b6b2: xor ecx, ecx */
  ecx = 0;
/* 98b6b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b6b9: /* 98b6b9: mov esi, ecx */
  esi = ecx;
L_98b6bb: /* 98b6bb: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b6be: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b6c0: /* 98b6c0: mov ecx, dword ptr [esp + edx*4 + 0x74] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x74u));
/* 98b6c4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b6c5: shr edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 98b6c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b6ca: jl 0x98b71b */
  if ((sf != of)) goto L_98b71b;
L_98b6cc: /* 98b6cc: mov esi, dword ptr [esp + ecx*4 + 0x108] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x108u));
/* 98b6d3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b6d9: je 0x98b716 */
  if (zf) goto L_98b716;
L_98b6db: /* 98b6db: mov ecx, dword ptr [esp + 0xfc] */
  ecx = R32((uint32_t)(esp + 0xfcu));
/* 98b6e2: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6e5: jne 0x98b6f5 */
  if (!zf) goto L_98b6f5;
L_98b6e7: /* 98b6e7: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6ea: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b6ec: /* 98b6ec: mov ecx, 9 */
  ecx = 0x9u;
/* 98b6f1: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b6f3: jmp 0x98b714 */
  goto L_98b714;
L_98b6f5: /* 98b6f5: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b6f8: jne 0x98b716 */
  if (!zf) goto L_98b716;
L_98b6fa: /* 98b6fa: cmp esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b6fd: jg 0x98b716 */
  if ((!zf && sf == of)) goto L_98b716;
L_98b6ff: /* 98b6ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b702: jle 0x98b70d */
  if ((zf || sf != of)) goto L_98b70d;
L_98b704: /* 98b704: mov ecx, 7 */
  ecx = 0x7u;
/* 98b709: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98b70b: jmp 0x98b714 */
  goto L_98b714;
L_98b70d: /* 98b70d: xor ecx, ecx */
  ecx = 0;
/* 98b70f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b711: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_98b714: /* 98b714: mov esi, ecx */
  esi = ecx;
L_98b716: /* 98b716: shl esi, 0x15 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b719: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_98b71b: /* 98b71b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98b71f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b720: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98b723: je 0x98b734 */
  if (zf) goto L_98b734;
L_98b725: /* 98b725: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98b729: or dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 98b72b: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b72e: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 98b732: xor edi, edi */
  edi = 0;
L_98b734: /* 98b734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b735: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b738: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98b73c: jl 0x98b5b0 */
  if ((sf != of)) goto L_98b5b0;
L_98b742: /* 98b742: jmp 0x98b84d */
  goto L_98b84d;
L_98b747: /* 98b747: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98b74b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b74f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98b757: jmp 0x98b760 */
  goto L_98b760;
L_98b760: /* 98b760: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98b764: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b768: jge 0x98b815 */
  if ((sf == of)) goto L_98b815;
L_98b76e: /* 98b76e: xor edi, edi */
  edi = 0;
L_98b770: /* 98b770: cmp edi, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b774: jge 0x98b7f5 */
  if ((sf == of)) goto L_98b7f5;
L_98b77a: /* 98b77a: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 98b77d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98b77f: mov edx, eax */
  edx = eax;
/* 98b781: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 98b783: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b787: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 98b789: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 98b78b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 98b78f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b793: jge 0x98b79b */
  if ((sf == of)) goto L_98b79b;
L_98b795: /* 98b795: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b79b: /* 98b79b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 98b79f: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 98b7a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b7a3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98b7a7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98b7ab: jge 0x98b7b3 */
  if ((sf == of)) goto L_98b7b3;
L_98b7ad: /* 98b7ad: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_98b7b3: /* 98b7b3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 98b7b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98b7b8: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 98b7be: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98b7c4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98b7c7: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98b7ccu); SPILL(); hle_floor(); RELOAD();
/* 98b7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b7cf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98b7d4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98b7d4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98b7d8: xor ecx, ecx */
  ecx = 0;
/* 98b7da: mov cx, word ptr [esp + 0x4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b7df: shr cx, 4 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b7e3: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b7e6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b7e8: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 98b7ec: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 98b7f3: jmp 0x98b7fb */
  goto L_98b7fb;
L_98b7f5: /* 98b7f5: shr word ptr [esp + 0x4c], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x4cu))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x4cu), r);
  }
L_98b7fb: /* 98b7fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b7fc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b7fe: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b801: jl 0x98b770 */
  if ((sf != of)) goto L_98b770;
L_98b807: /* 98b807: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b80b: mov di, word ptr [esp + 0x4c] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4cu))) & 0xffffu);
/* 98b810: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 98b813: jmp 0x98b81e */
  goto L_98b81e;
L_98b815: /* 98b815: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b819: mov word ptr [ecx], 0 */
  W16((uint32_t)(ecx), 0x0u);
L_98b81e: /* 98b81e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b822: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98b826: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b829: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98b82a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98b82e: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* 98b831: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b835: lea ecx, [edx*4] */
  ecx = (uint32_t)(edx*4);
/* 98b83c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98b83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98b842: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98b844: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b847: jl 0x98b760 */
  if ((sf != of)) goto L_98b760;
L_98b84d: /* 98b84d: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 98b851: xor ecx, ecx */
  ecx = 0;
/* 98b853: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b855: je 0x98b861 */
  if (zf) goto L_98b861;
L_98b857: /* 98b857: mov byte ptr [esp + 0x2ec], 1 */
  W8((uint32_t)(esp + 0x2ecu), 0x1u);
/* 98b85f: jmp 0x98b86b */
  goto L_98b86b;
L_98b861: /* 98b861: mov dl, byte ptr [ebp + 0x28] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x28u))) & 0xffu);
/* 98b864: mov byte ptr [esp + 0x2ec], dl */
  W8((uint32_t)(esp + 0x2ecu), (edx & 0xffu));
L_98b86b: /* 98b86b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98b86f: imul esi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  esi = (uint32_t)r;
  }
/* 98b874: xor edx, edx */
  edx = 0;
/* 98b876: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b878: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 98b87b: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98b87e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b880: mov dword ptr [esp + 0x2e8], edx */
  W32((uint32_t)(esp + 0x2e8u), edx);
/* 98b887: jne 0x98b8a5 */
  if (!zf) goto L_98b8a5;
L_98b889: /* 98b889: lea eax, [esp + 0x2f8] */
  eax = (uint32_t)(esp + 0x2f8u);
/* 98b890: mov edx, 2 */
  edx = 0x2u;
L_98b895: /* 98b895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98b898: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98b89a: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 98b89d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98b8a0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98b8a1: jne 0x98b895 */
  if (!zf) goto L_98b895;
L_98b8a3: /* 98b8a3: jmp 0x98b8b7 */
  goto L_98b8b7;
L_98b8a5: /* 98b8a5: lea eax, [esp + 0x148] */
  eax = (uint32_t)(esp + 0x148u);
/* 98b8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98b8ad: call 0x9936f0 */
  esp -= 4; W32(esp, 0x98b8b2u); SPILL(); f_9936f0(); if (g_unwind) return; RELOAD();
/* 98b8b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98b8b5: xor ecx, ecx */
  ecx = 0;
L_98b8b7: /* 98b8b7: mov eax, dword ptr [esp + 0x2f4] */
  eax = R32((uint32_t)(esp + 0x2f4u));
/* 98b8be: mov edx, dword ptr [esp + 0x2f8] */
  edx = R32((uint32_t)(esp + 0x2f8u));
/* 98b8c5: mov esi, dword ptr [esp + 0x2fc] */
  esi = R32((uint32_t)(esp + 0x2fcu));
/* 98b8cc: mov edi, dword ptr [esp + 0x304] */
  edi = R32((uint32_t)(esp + 0x304u));
/* 98b8d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8d6: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8d8: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b8db: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b8dd: mov esi, dword ptr [esp + 0x300] */
  esi = R32((uint32_t)(esp + 0x300u));
/* 98b8e4: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8e7: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8e9: mov edi, dword ptr [esp + 0x308] */
  edi = R32((uint32_t)(esp + 0x308u));
/* 98b8f0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98b8f3: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98b8f5: mov di, si */
  edi = (edi & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 98b8f8: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98b8fb: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b900: mov word ptr [esp + 0x3a], si */
  W16((uint32_t)(esp + 0x3au), (esi & 0xffffu));
/* 98b905: jne 0x98b984 */
  if (!zf) goto L_98b984;
L_98b907: /* 98b907: cmp dword ptr [esp + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b90c: jne 0x98b955 */
  if (!zf) goto L_98b955;
L_98b90e: /* 98b90e: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b915: inc di */
  { uint16_t a = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b917: xor edx, edx */
  edx = 0;
/* 98b919: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b91b: mov word ptr [esp + 0x3a], di */
  W16((uint32_t)(esp + 0x3au), (edi & 0xffffu));
/* 98b920: jle 0x98b943 */
  if ((zf || sf != of)) goto L_98b943;
L_98b922: /* 98b922: jmp 0x98b930 */
  goto L_98b930;
L_98b92d: /* 98b92d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98b930: /* 98b930: mov dword ptr [esp + edx*4 + 0x30c], ecx */
  W32((uint32_t)(esp + edx*4 + 0x30cu), ecx);
/* 98b937: mov esi, dword ptr [esp + 0x148] */
  esi = R32((uint32_t)(esp + 0x148u));
/* 98b93e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98b93f: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b941: jl 0x98b930 */
  if ((sf != of)) goto L_98b930;
L_98b943: /* 98b943: mov si, word ptr [esp + 0x3a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x3au))) & 0xffffu);
/* 98b948: mov dword ptr [esp + 0x2f0], 3 */
  W32((uint32_t)(esp + 0x2f0u), 0x3u);
/* 98b953: jmp 0x98b981 */
  goto L_98b981;
L_98b955: /* 98b955: mov edx, dword ptr [esp + 0x148] */
  edx = R32((uint32_t)(esp + 0x148u));
/* 98b95c: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 98b95e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b960: mov word ptr [esp + 0x38], ax */
  W16((uint32_t)(esp + 0x38u), (eax & 0xffffu));
/* 98b965: jle 0x98b981 */
  if ((zf || sf != of)) goto L_98b981;
L_98b967: /* 98b967: mov edx, 1 */
  edx = 0x1u;
/* 98b96c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98b970: /* 98b970: mov dword ptr [esp + ecx*4 + 0x30c], edx */
  W32((uint32_t)(esp + ecx*4 + 0x30cu), edx);
/* 98b977: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98b978: cmp ecx, dword ptr [esp + 0x148] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x148u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98b97f: jl 0x98b970 */
  if ((sf != of)) goto L_98b970;
L_98b981: /* 98b981: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_98b984: /* 98b984: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 98b986: xor edx, edx */
  edx = 0;
/* 98b988: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 98b98a: cmp dword ptr [esp + 0x2f0], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2f0u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b992: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98b995: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b997: jne 0x98b9af */
  if (!zf) goto L_98b9af;
L_98b999: /* 98b999: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98b99d: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 98b9a0: mov word ptr [esp + 0x3a], cx */
  W16((uint32_t)(esp + 0x3au), (ecx & 0xffffu));
/* 98b9a5: mov edi, 1 */
  edi = 0x1u;
/* 98b9aa: mov si, cx */
  esi = (esi & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 98b9ad: jmp 0x98b9b1 */
  goto L_98b9b1;
L_98b9af: /* 98b9af: xor edi, edi */
  edi = 0;
L_98b9b1: /* 98b9b1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98b9b5: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 98b9b8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 98b9bc: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9bf: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 98b9c2: mov esi, dword ptr [esp + 0x2f0] */
  esi = R32((uint32_t)(esp + 0x2f0u));
/* 98b9c9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98b9cc: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98b9d0: mov edx, 0xf */
  edx = 0xfu;
L_98b9d5: /* 98b9d5: mov ecx, dword ptr [esp + edx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + edx*4 + 0x70u));
/* 98b9d9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98b9dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98b9de: jge 0x98b9e5 */
  if ((sf == of)) goto L_98b9e5;
L_98b9e0: /* 98b9e0: or eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9e3: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9e5: /* 98b9e5: or eax, dword ptr [esp + ecx*4 + 0x30c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x30cu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98b9ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98b9ee: je 0x98ba05 */
  if (zf) goto L_98ba05;
L_98b9f0: /* 98b9f0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98b9f3: jne 0x98b9fa */
  if (!zf) goto L_98b9fa;
L_98b9f5: /* 98b9f5: xor eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98b9f8: jmp 0x98ba05 */
  goto L_98ba05;
L_98b9fa: /* 98b9fa: mov ecx, eax */
  ecx = eax;
/* 98b9fc: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98b9fe: not ecx */
  ecx = ~ecx;
/* 98ba00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98ba03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
L_98ba05: /* 98ba05: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 98ba06: jns 0x98b9d5 */
  if (!sf) goto L_98b9d5;
L_98ba08: /* 98ba08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ba0c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98ba10: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 98ba14: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ba16: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 98ba1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ba1d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ba20: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ba24: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 98ba27: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba2a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98ba2c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba2e: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 98ba32: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 98ba36: jl 0x98ad00 */
  if ((sf != of)) goto L_98ad00;
L_98ba3c: /* 98ba3c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 98ba40: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 98ba44: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 98ba47: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 98ba4a: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 98ba4d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ba50: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98ba52: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 98ba56: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 98ba5a: jl 0x98aca6 */
  if ((sf != of)) goto L_98aca6;
L_98ba60: /* 98ba60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ba61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ba62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ba63: mov esp, ebp */
  esp = ebp;
/* 98ba65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ba66: ret  */
  esp += 4; SPILL(); return;
}

void f_98ba70(void) {
  LOAD_REGS();
L_98ba70: /* 98ba70: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98ba74: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 98ba77: imul eax, dword ptr [ecx + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x8u)));
  eax = (uint32_t)r;
  }
/* 98ba7b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98ba7e: ret  */
  esp += 4; SPILL(); return;
}

void f_98ba80(void) {
  LOAD_REGS();
L_98ba80: /* 98ba80: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98ba83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98ba84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98ba85: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 98ba89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ba8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ba8b: xor edi, edi */
  edi = 0;
/* 98ba8d: lea ebx, [esp + 0x14] */
  ebx = (uint32_t)(esp + 0x14u);
L_98ba91: /* 98ba91: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98ba95: movzx ecx, word ptr [eax + edi*2] */
  ecx = (uint32_t)(R16((uint32_t)(eax + edi*2)));
/* 98ba99: mov eax, ecx */
  eax = ecx;
/* 98ba9b: and eax, 0xfffff8ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffff8ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98baa0: mov edx, ecx */
  edx = ecx;
/* 98baa2: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98baa5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98baa7: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98baaa: mov edx, ecx */
  edx = ecx;
/* 98baac: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98baaf: mov esi, ecx */
  esi = ecx;
/* 98bab1: and esi, 0x7e0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 98bab7: mov dword ptr [ebx - 4], eax */
  W32((uint32_t)(ebx + 0xfffffffcu), eax);
/* 98baba: and edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98babd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98babf: or eax, 0xffffff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98bac4: mov esi, ecx */
  esi = ecx;
/* 98bac6: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98bac9: shr edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bacc: and esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 98bacf: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98bad2: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98bad4: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98bad7: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98bada: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 98badc: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98badf: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98bae1: mov dword ptr [ebp + edi*4], eax */
  W32((uint32_t)(ebp + edi*4), eax);
/* 98bae5: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 98bae7: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 98baea: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98baeb: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98baee: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98baf1: jl 0x98ba91 */
  if ((sf != of)) goto L_98ba91;
L_98baf3: /* 98baf3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98baf7: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 98bafa: cmp cx, word ptr [eax + 2] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0x2u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98bafe: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98bb02: mov eax, 0xff000000 */
  eax = 0xff000000u;
/* 98bb07: jbe 0x98bbac */
  if ((cf | zf)) goto L_98bbac;
L_98bb0d: /* 98bb0d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 98bb11: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 98bb14: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 98bb17: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 98bb1b: lea edx, [ecx + esi*2 + 1] */
  edx = (uint32_t)(ecx + esi*2 + 0x1u);
/* 98bb1f: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 98bb24: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 98bb26: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 98bb2a: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bb2c: mov ebx, edx */
  ebx = edx;
/* 98bb2e: lea edx, [edi + eax*2 + 1] */
  edx = (uint32_t)(edi + eax*2 + 0x1u);
/* 98bb32: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 98bb37: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 98bb39: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98bb3d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bb3f: shl ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 98bb42: or ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 98bb44: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98bb48: lea edx, [eax + edx*2 + 1] */
  edx = (uint32_t)(eax + edx*2 + 0x1u);
/* 98bb4c: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 98bb51: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 98bb53: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bb55: shl ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 98bb58: or ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 98bb5a: or dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 98bb5d: lea ecx, [esi + ecx*2 + 1] */
  ecx = (uint32_t)(esi + ecx*2 + 0x1u);
/* 98bb61: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 98bb66: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 98bb68: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bb6a: mov ecx, edx */
  ecx = edx;
/* 98bb6c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98bb70: lea edx, [edx + edi*2 + 1] */
  edx = (uint32_t)(edx + edi*2 + 0x1u);
/* 98bb74: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 98bb79: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 98bb7b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98bb7f: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bb81: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98bb84: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 98bb86: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 98bb8a: lea edx, [eax + edx*2 + 1] */
  edx = (uint32_t)(eax + edx*2 + 0x1u);
/* 98bb8e: mov eax, 0xaaaaaaab */
  eax = 0xaaaaaaabu;
/* 98bb93: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 98bb95: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98bb98: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98bb9b: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bb9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98bb9e: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 98bba0: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98bba2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98bba3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 98bba6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98bba7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98bba8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98bbab: ret  */
  esp += 4; SPILL(); return;
L_98bbac: /* 98bbac: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98bbb0: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 98bbb4: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bbb6: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 98bbba: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98bbbc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98bbc0: shl edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bbc3: shl esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98bbc6: and edx, 0xffff00ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffff00ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98bbcc: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bbce: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 98bbd2: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98bbd4: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 98bbd6: and edx, 0xffffff00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98bbdc: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bbde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98bbdf: mov byte ptr [0xcf307d], 1 */
  W8((uint32_t)(0xcf307du), 0x1u);
/* 98bbe6: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 98bbe9: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bbeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98bbec: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 98bbf3: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 98bbf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98bbf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98bbf8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98bbfb: ret  */
  esp += 4; SPILL(); return;
}

void f_98bc00(void) {
  LOAD_REGS();
L_98bc00: /* 98bc00: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98bc02: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98bc04: je 0x98bc13 */
  if (zf) goto L_98bc13;
L_98bc06: /* 98bc06: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 98bc09: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98bc0c: or eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98bc11: jmp 0x98bc15 */
  goto L_98bc15;
L_98bc13: /* 98bc13: xor eax, eax */
  eax = 0;
L_98bc15: /* 98bc15: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 98bc17: mov al, byte ptr [ecx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98bc1a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98bc1c: je 0x98bc2b */
  if (zf) goto L_98bc2b;
L_98bc1e: /* 98bc1e: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 98bc21: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98bc24: or eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98bc29: jmp 0x98bc2d */
  goto L_98bc2d;
L_98bc2b: /* 98bc2b: xor eax, eax */
  eax = 0;
L_98bc2d: /* 98bc2d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 98bc30: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98bc33: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98bc35: cmp al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98bc37: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 98bc3a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 98bc3d: jbe 0x98bd7b */
  if ((cf | zf)) goto L_98bd7b;
L_98bc43: /* 98bc43: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 98bc46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98bc47: lea edi, [edx + eax*2 + 3] */
  edi = (uint32_t)(edx + eax*2 + 0x3u);
/* 98bc4b: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 98bc50: imul edi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bc52: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bc54: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bc57: mov eax, edx */
  eax = edx;
/* 98bc59: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bc5c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bc5e: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bc61: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bc63: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 98bc66: je 0x98bc71 */
  if (zf) goto L_98bc71;
L_98bc68: /* 98bc68: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bc6e: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_98bc71: /* 98bc71: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98bc74: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 98bc77: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98bc7b: lea edi, [edx + eax*2 + 3] */
  edi = (uint32_t)(edx + eax*2 + 0x3u);
/* 98bc7f: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 98bc84: imul edi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bc86: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bc88: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bc8b: mov eax, edx */
  eax = edx;
/* 98bc8d: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bc90: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bc92: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bc95: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bc97: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 98bc9a: je 0x98bca5 */
  if (zf) goto L_98bca5;
L_98bc9c: /* 98bc9c: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bca2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_98bca5: /* 98bca5: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98bca9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98bcaa: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98bcad: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98bcb0: lea edi, [edx + eax*4] */
  edi = (uint32_t)(edx + eax*4);
/* 98bcb3: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 98bcb8: imul edi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bcba: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bcbc: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bcbf: mov eax, edx */
  eax = edx;
/* 98bcc1: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bcc4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bcc6: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bcc9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bccb: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 98bcce: je 0x98bcd9 */
  if (zf) goto L_98bcd9;
L_98bcd0: /* 98bcd0: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bcd6: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
L_98bcd9: /* 98bcd9: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98bcdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98bcdd: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98bce0: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98bce4: lea edi, [edx + eax*4] */
  edi = (uint32_t)(edx + eax*4);
/* 98bce7: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 98bcec: imul edi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bcee: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bcf0: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bcf3: mov eax, edx */
  eax = edx;
/* 98bcf5: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bcf8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bcfa: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bcfd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bcff: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 98bd02: je 0x98bd0d */
  if (zf) goto L_98bd0d;
L_98bd04: /* 98bd04: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bd0a: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
L_98bd0d: /* 98bd0d: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98bd11: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 98bd14: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 98bd17: lea edi, [eax + edx*2 + 3] */
  edi = (uint32_t)(eax + edx*2 + 0x3u);
/* 98bd1b: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 98bd20: imul edi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bd22: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bd24: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bd27: mov eax, edx */
  eax = edx;
/* 98bd29: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bd2c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bd2e: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bd31: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bd33: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 98bd36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98bd37: je 0x98bd42 */
  if (zf) goto L_98bd42;
L_98bd39: /* 98bd39: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bd3f: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
L_98bd42: /* 98bd42: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98bd46: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 98bd49: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98bd4c: lea ecx, [eax + edx*2 + 3] */
  ecx = (uint32_t)(eax + edx*2 + 0x3u);
/* 98bd50: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 98bd55: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bd57: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bd59: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bd5c: mov ecx, edx */
  ecx = edx;
/* 98bd5e: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98bd61: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bd63: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bd66: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bd68: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 98bd6b: je 0x98be40 */
  if (zf) goto L_98be40;
L_98bd71: /* 98bd71: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bd77: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 98bd7a: ret  */
  esp += 4; SPILL(); return;
L_98bd7b: /* 98bd7b: lea edx, [edx + eax*4 + 2] */
  edx = (uint32_t)(edx + eax*4 + 0x2u);
/* 98bd7f: mov eax, 0x66666667 */
  eax = 0x66666667u;
/* 98bd84: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bd86: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bd88: mov eax, edx */
  eax = edx;
/* 98bd8a: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bd8d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bd8f: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bd92: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bd94: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 98bd97: je 0x98bda2 */
  if (zf) goto L_98bda2;
L_98bd99: /* 98bd99: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bd9f: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_98bda2: /* 98bda2: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98bda5: movzx edx, byte ptr [ecx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98bda9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 98bdac: lea edx, [eax + edx*2 + 2] */
  edx = (uint32_t)(eax + edx*2 + 0x2u);
/* 98bdb0: mov eax, 0x66666667 */
  eax = 0x66666667u;
/* 98bdb5: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bdb7: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bdb9: mov eax, edx */
  eax = edx;
/* 98bdbb: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bdbe: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bdc0: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bdc3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bdc5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 98bdc8: je 0x98bdd3 */
  if (zf) goto L_98bdd3;
L_98bdca: /* 98bdca: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98bdd0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_98bdd3: /* 98bdd3: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98bdd7: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 98bdda: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 98bddd: lea edx, [eax + edx*2 + 2] */
  edx = (uint32_t)(eax + edx*2 + 0x2u);
/* 98bde1: mov eax, 0x66666667 */
  eax = 0x66666667u;
/* 98bde6: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98bde8: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98bdea: mov eax, edx */
  eax = edx;
/* 98bdec: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bdef: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bdf1: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98bdf4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98bdf6: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 98bdf9: je 0x98be04 */
  if (zf) goto L_98be04;
L_98bdfb: /* 98bdfb: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98be01: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
L_98be04: /* 98be04: movzx edx, byte ptr [ecx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 98be08: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 98be0b: lea ecx, [eax + edx*4 + 2] */
  ecx = (uint32_t)(eax + edx*4 + 0x2u);
/* 98be0f: mov eax, 0x66666667 */
  eax = 0x66666667u;
/* 98be14: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 98be16: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98be18: mov ecx, edx */
  ecx = edx;
/* 98be1a: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98be1d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98be1f: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98be22: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98be24: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 98be27: je 0x98be32 */
  if (zf) goto L_98be32;
L_98be29: /* 98be29: or edx, 0xffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 98be2f: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
L_98be32: /* 98be32: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 98be39: mov dword ptr [esi + 0x1c], 0xffffffff */
  W32((uint32_t)(esi + 0x1cu), 0xffffffffu);
L_98be40: /* 98be40: ret  */
  esp += 4; SPILL(); return;
}

void f_98be50(void) {
  LOAD_REGS();
L_98be50: /* 98be50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98be51: mov ebp, esp */
  ebp = esp;
/* 98be53: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 98be56: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98be59: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 98be5c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98be5d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 98be60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98be61: mov dword ptr [ebx + 4], 0x180e */
  W32((uint32_t)(ebx + 0x4u), 0x180eu);
/* 98be68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98be69: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98be6c: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98be6f: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 98be72: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98be75: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 98be78: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 98be7b: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98be7e: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98be81: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 98be84: mov eax, 0x20 */
  eax = 0x20u;
/* 98be89: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 98be8c: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* 98be8f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 98be92: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98be95: mov dword ptr [ebx + 0x4c], 0x41 */
  W32((uint32_t)(ebx + 0x4cu), 0x41u);
/* 98be9c: mov dword ptr [ebx + 0x58], 0xff0000 */
  W32((uint32_t)(ebx + 0x58u), 0xff0000u);
/* 98bea3: mov dword ptr [ebx + 0x5c], 0xff00 */
  W32((uint32_t)(ebx + 0x5cu), 0xff00u);
/* 98beaa: mov dword ptr [ebx + 0x60], 0xff */
  W32((uint32_t)(ebx + 0x60u), 0xffu);
/* 98beb1: mov dword ptr [ebx + 0x64], 0xff000000 */
  W32((uint32_t)(ebx + 0x64u), 0xff000000u);
/* 98beb8: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 98bebb: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 98bebf: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98bec3: je 0x98c579 */
  if (zf) goto L_98c579;
L_98bec9: /* 98bec9: cmp eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98becc: je 0x98c579 */
  if (zf) goto L_98c579;
L_98bed2: /* 98bed2: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98bed5: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 98bedd: jne 0x98bf44 */
  if (!zf) goto L_98bf44;
L_98bedf: /* 98bedf: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98bee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98bee4: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98beea: /* 98beea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98bef0: /* 98bef0: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* 98bef3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98bef5: mov eax, edx */
  eax = edx;
/* 98bef7: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 98beff: jbe 0x98bf28 */
  if ((cf | zf)) goto L_98bf28;
L_98bf01: /* 98bf01: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
L_98bf05: /* 98bf05: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98bf07: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98bf09: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98bf0c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98bf0d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98bf0e: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98bf10: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98bf13: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98bf14: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98bf15: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98bf17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98bf18: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98bf19: mov byte ptr [eax], 0xff */
  W8((uint32_t)(eax), 0xffu);
/* 98bf1c: mov ebx, dword ptr [edi + 0xc] */
  ebx = R32((uint32_t)(edi + 0xcu));
/* 98bf1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98bf20: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bf21: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98bf23: jb 0x98bf05 */
  if (cf) goto L_98bf05;
L_98bf25: /* 98bf25: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_98bf28: /* 98bf28: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 98bf2b: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98bf2e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bf30: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98bf34: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98bf35: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98bf37: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 98bf3b: jl 0x98bef0 */
  if ((sf != of)) goto L_98bef0;
L_98bf3d: /* 98bf3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98bf3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98bf3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98bf40: mov esp, ebp */
  esp = ebp;
/* 98bf42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98bf43: ret  */
  esp += 4; SPILL(); return;
L_98bf44: /* 98bf44: cmp eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98bf47: jne 0x98bff8 */
  if (!zf) goto L_98bff8;
L_98bf4d: /* 98bf4d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98bf50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98bf52: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98bf56: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98bf5c: /* 98bf5c: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98bf5f: nop  */
L_98bf60: /* 98bf60: xor ecx, ecx */
  ecx = 0;
/* 98bf62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98bf64: mov esi, edx */
  esi = edx;
/* 98bf66: jbe 0x98bfd4 */
  if ((cf | zf)) goto L_98bfd4;
L_98bf68: /* 98bf68: jmp 0x98bf70 */
  goto L_98bf70;
L_98bf70: /* 98bf70: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98bf74: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 98bf77: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bf7a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 98bf7e: mov edx, eax */
  edx = eax;
/* 98bf80: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bf83: and dl, 7 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf86: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 98bf88: shl bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf8b: or dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf8d: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 98bf8f: mov edx, eax */
  edx = eax;
/* 98bf91: shr edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bf94: mov ebx, eax */
  ebx = eax;
/* 98bf96: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98bf99: xor dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf9b: and dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf9e: mov ebx, eax */
  ebx = eax;
/* 98bfa0: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98bfa3: xor dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfa5: mov byte ptr [esi + 1], dl */
  W8((uint32_t)(esi + 0x1u), (edx & 0xffu));
/* 98bfa8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfa9: mov edx, eax */
  edx = eax;
/* 98bfab: shr edx, 0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bfae: mov ebx, eax */
  ebx = eax;
/* 98bfb0: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98bfb3: xor dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfb5: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bfb8: and dl, 7 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfbb: xor dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfbd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfbe: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 98bfc0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfc1: mov byte ptr [esi], 0xff */
  W8((uint32_t)(esi), 0xffu);
/* 98bfc4: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98bfc7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfc8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98bfc9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98bfcb: jb 0x98bf70 */
  if (cf) goto L_98bf70;
L_98bfcd: /* 98bfcd: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 98bfd0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_98bfd4: /* 98bfd4: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98bfd7: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98bfda: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bfdc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98bfe0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98bfe1: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98bfe3: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98bfe7: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98bfeb: jl 0x98bf60 */
  if ((sf != of)) goto L_98bf60;
L_98bff1: /* 98bff1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98bff2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98bff3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98bff4: mov esp, ebp */
  esp = ebp;
/* 98bff6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98bff7: ret  */
  esp += 4; SPILL(); return;
L_98bff8: /* 98bff8: cmp eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98bffb: jne 0x98c0c4 */
  if (!zf) goto L_98c0c4;
L_98c001: /* 98c001: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98c004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c006: mov esi, ecx */
  esi = ecx;
/* 98c008: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98c00e: /* 98c00e: jmp 0x98c017 */
  goto L_98c017;
L_98c010: /* 98c010: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c014: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_98c017: /* 98c017: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 98c01a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98c01c: mov eax, edx */
  eax = edx;
/* 98c01e: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 98c026: jbe 0x98c096 */
  if ((cf | zf)) goto L_98c096;
L_98c028: /* 98c028: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98c02b: jmp 0x98c030 */
  goto L_98c030;
L_98c030: /* 98c030: movzx ecx, word ptr [esi] */
  ecx = (uint32_t)(R16((uint32_t)(esi)));
/* 98c033: mov edx, ecx */
  edx = ecx;
/* 98c035: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98c038: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98c03c: and dl, 7 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c03f: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c041: shl bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c044: or dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c046: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98c048: mov edx, ecx */
  edx = ecx;
/* 98c04a: shr edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98c04d: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c04f: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98c053: mov dl, byte ptr [esp + 0x24] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 98c057: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c059: and bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c05c: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c05e: mov dl, byte ptr [esp + 0x20] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 98c062: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* 98c065: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98c068: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c069: mov ebx, ecx */
  ebx = ecx;
/* 98c06b: shr ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98c06e: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c070: and bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c073: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c074: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c076: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98c078: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c079: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 98c07b: jns 0x98c082 */
  if (!sf) goto L_98c082;
L_98c07d: /* 98c07d: mov byte ptr [eax], 0xff */
  W8((uint32_t)(eax), 0xffu);
/* 98c080: jmp 0x98c085 */
  goto L_98c085;
L_98c082: /* 98c082: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_98c085: /* 98c085: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98c089: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 98c08c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c08d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c08e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c090: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c094: jb 0x98c030 */
  if (cf) goto L_98c030;
L_98c096: /* 98c096: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98c099: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 98c09c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98c0a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98c0a4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98c0a7: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c0a9: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 98c0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c0ad: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c0af: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98c0b3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 98c0b7: jl 0x98c010 */
  if ((sf != of)) goto L_98c010;
L_98c0bd: /* 98c0bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c0be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c0bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c0c0: mov esp, ebp */
  esp = ebp;
/* 98c0c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c0c3: ret  */
  esp += 4; SPILL(); return;
L_98c0c4: /* 98c0c4: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c0c7: jne 0x98c168 */
  if (!zf) goto L_98c168;
L_98c0cd: /* 98c0cd: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98c0d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c0d2: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c0d6: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98c0dc: /* 98c0dc: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98c0df: jmp 0x98c0e5 */
  goto L_98c0e5;
L_98c0e1: /* 98c0e1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_98c0e5: /* 98c0e5: xor edi, edi */
  edi = 0;
/* 98c0e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98c0e9: mov esi, edx */
  esi = edx;
/* 98c0eb: jbe 0x98c13e */
  if ((cf | zf)) goto L_98c13e;
L_98c0ed: /* 98c0ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98c0f0: /* 98c0f0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98c0f4: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 98c0f7: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98c0fa: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c0fe: mov ecx, eax */
  ecx = eax;
/* 98c100: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c103: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 98c105: shl bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c108: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c10a: and dl, 7 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c10d: or dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c10f: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 98c111: mov edx, eax */
  edx = eax;
/* 98c113: shr edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98c116: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98c119: xor al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c11b: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c11d: xor bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c11f: and bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c122: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c123: xor bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c125: and al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c127: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 98c129: xor al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c12b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c12c: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 98c12e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98c131: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c132: mov byte ptr [esi], 0 */
  W8((uint32_t)(esi), 0x0u);
/* 98c135: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 98c138: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c139: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98c13a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c13c: jb 0x98c0f0 */
  if (cf) goto L_98c0f0;
L_98c13e: /* 98c13e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98c141: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 98c144: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 98c148: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98c14c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98c14e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98c151: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 98c154: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c155: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c157: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98c15b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98c15f: jl 0x98c0e1 */
  if ((sf != of)) goto L_98c0e1;
L_98c161: /* 98c161: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c163: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c164: mov esp, ebp */
  esp = ebp;
/* 98c166: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c167: ret  */
  esp += 4; SPILL(); return;
L_98c168: /* 98c168: cmp eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c16b: jne 0x98c224 */
  if (!zf) goto L_98c224;
L_98c171: /* 98c171: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98c174: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c176: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c17a: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98c180: /* 98c180: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98c183: jmp 0x98c190 */
  goto L_98c190;
L_98c185: /* 98c185: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c189: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98c190: /* 98c190: xor edi, edi */
  edi = 0;
/* 98c192: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98c194: mov esi, edx */
  esi = edx;
/* 98c196: jbe 0x98c1f6 */
  if ((cf | zf)) goto L_98c1f6;
L_98c198: /* 98c198: jmp 0x98c1a0 */
  goto L_98c1a0;
L_98c1a0: /* 98c1a0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98c1a4: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 98c1a7: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98c1aa: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 98c1ac: shl dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1af: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c1b3: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 98c1b5: and cl, 0xf */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1b8: or cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1ba: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 98c1bc: mov ecx, eax */
  ecx = eax;
/* 98c1be: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c1c1: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c1c3: xor dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1c5: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1c8: xor dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1cb: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 98c1cd: mov edx, eax */
  edx = eax;
/* 98c1cf: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98c1d2: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98c1d5: xor al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1d7: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c1d9: xor bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1db: and bl, 0xf */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1de: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1df: xor bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1e1: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1e3: xor al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1e5: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 98c1e7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1e8: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 98c1ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98c1ed: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 98c1f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98c1f2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c1f4: jb 0x98c1a0 */
  if (cf) goto L_98c1a0;
L_98c1f6: /* 98c1f6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98c1f9: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 98c1fc: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 98c200: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98c204: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98c206: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98c209: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 98c20c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c20d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c20f: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98c213: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98c217: jl 0x98c185 */
  if ((sf != of)) goto L_98c185;
L_98c21d: /* 98c21d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c21e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c21f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c220: mov esp, ebp */
  esp = ebp;
/* 98c222: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c223: ret  */
  esp += 4; SPILL(); return;
L_98c224: /* 98c224: cmp eax, 0x29 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c227: jne 0x98c2a3 */
  if (!zf) goto L_98c2a3;
L_98c229: /* 98c229: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98c22c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c22e: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c232: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98c238: /* 98c238: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 98c23b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 98c23e: mov edi, edi */
  edi = edi;
L_98c240: /* 98c240: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98c242: mov eax, edx */
  eax = edx;
/* 98c244: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 98c24c: jbe 0x98c28b */
  if ((cf | zf)) goto L_98c28b;
L_98c24e: /* 98c24e: mov edi, edi */
  edi = edi;
L_98c250: /* 98c250: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 98c254: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 98c257: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98c258: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 98c25c: mov bl, byte ptr [esi + ecx*4 + 2] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx*4 + 0x2u))) & 0xffu);
/* 98c260: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98c262: mov bl, byte ptr [esi + ecx*4 + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx*4 + 0x1u))) & 0xffu);
/* 98c266: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* 98c269: mov bl, byte ptr [esi + ecx*4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx*4))) & 0xffu);
/* 98c26c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c26d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c26e: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98c270: mov cl, byte ptr [esi + ecx*4 + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx*4 + 0x3u))) & 0xffu);
/* 98c274: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 98c278: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c279: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 98c27b: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 98c27e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c27f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98c280: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c282: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98c286: jb 0x98c250 */
  if (cf) goto L_98c250;
L_98c288: /* 98c288: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_98c28b: /* 98c28b: add edx, dword ptr [ebx + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98c28e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98c292: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c293: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c296: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 98c29a: jl 0x98c240 */
  if ((sf != of)) goto L_98c240;
L_98c29c: /* 98c29c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c29d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c29e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c29f: mov esp, ebp */
  esp = ebp;
/* 98c2a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c2a2: ret  */
  esp += 4; SPILL(); return;
L_98c2a3: /* 98c2a3: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98c2a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c2a8: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98c2ae: /* 98c2ae: jmp 0x98c2c0 */
  goto L_98c2c0;
L_98c2b0: /* 98c2b0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c2b4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98c2b7: jmp 0x98c2c0 */
  goto L_98c2c0;
L_98c2c0: /* 98c2c0: sub eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98c2c4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c2c7: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 98c2cb: jb 0x98c2d5 */
  if (cf) goto L_98c2d5;
L_98c2cd: /* 98c2cd: mov dword ptr [esp + 0x20], 4 */
  W32((uint32_t)(esp + 0x20u), 0x4u);
L_98c2d5: /* 98c2d5: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 98c2d8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c2da: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98c2de: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 98c2e6: jle 0x98c548 */
  if ((zf || sf != of)) goto L_98c548;
L_98c2ec: /* 98c2ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98c2f0: /* 98c2f0: sub edi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98c2f4: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c2f7: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98c2fb: jb 0x98c305 */
  if (cf) goto L_98c305;
L_98c2fd: /* 98c2fd: mov dword ptr [esp + 0x14], 4 */
  W32((uint32_t)(esp + 0x14u), 0x4u);
L_98c305: /* 98c305: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 98c308: cmp eax, 0x34545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c30d: jg 0x98c3b4 */
  if ((!zf && sf == of)) goto L_98c3b4;
L_98c313: /* 98c313: je 0x98c3bf */
  if (zf) goto L_98c3bf;
L_98c319: /* 98c319: cmp eax, 0x32545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c31e: je 0x98c32b */
  if (zf) goto L_98c32b;
L_98c320: /* 98c320: cmp eax, 0x33545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c325: jne 0x98c46d */
  if (!zf) goto L_98c46d;
L_98c32b: /* 98c32b: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98c32f: xor edi, edi */
  edi = 0;
L_98c331: /* 98c331: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98c335: xor edx, edx */
  edx = 0;
/* 98c337: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 98c33a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c33d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98c341: cmp edi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c345: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98c349: jge 0x98c39f */
  if ((sf == of)) goto L_98c39f;
L_98c34b: /* 98c34b: xor ebx, ebx */
  ebx = 0;
/* 98c34d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98c350: /* 98c350: cmp ebx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c354: jge 0x98c390 */
  if ((sf == of)) goto L_98c390;
L_98c356: /* 98c356: xor eax, eax */
  eax = 0;
/* 98c358: mov al, byte ptr [esp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 98c35c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98c35f: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98c362: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98c366: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 98c36a: fmul dword ptr [0xa21a6c] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a6cu)));
/* 98c370: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98c376: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98c379: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98c37eu); SPILL(); hle_floor(); RELOAD();
/* 98c37e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98c381: call 0x99c958 */
  esp -= 4; W32(esp, 0x98c386u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98c386: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98c389: or eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98c38e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_98c390: /* 98c390: shr word ptr [esp + 0x24], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x24u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x24u), r);
  }
/* 98c396: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98c397: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98c39a: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c39d: jl 0x98c350 */
  if ((sf != of)) goto L_98c350;
L_98c39f: /* 98c39f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98c3a2: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 98c3a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98c3a6: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c3a9: lea esi, [esi + edx*4 - 0x10] */
  esi = (uint32_t)(esi + edx*4 + 0xfffffff0u);
/* 98c3ad: jl 0x98c331 */
  if ((sf != of)) goto L_98c331;
L_98c3af: /* 98c3af: jmp 0x98c46d */
  goto L_98c46d;
L_98c3b4: /* 98c3b4: cmp eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c3b9: jne 0x98c46d */
  if (!zf) goto L_98c46d;
L_98c3bf: /* 98c3bf: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 98c3c3: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 98c3c7: mov ecx, edi */
  ecx = edi;
/* 98c3c9: call 0x98bc00 */
  esp -= 4; W32(esp, 0x98c3ceu); SPILL(); f_98bc00(); if (g_unwind) return; RELOAD();
/* 98c3ce: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98c3d2: mov ecx, dword ptr [edi + 2] */
  ecx = R32((uint32_t)(edi + 0x2u));
/* 98c3d5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 98c3d8: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c3db: xor edx, edx */
  edx = 0;
/* 98c3dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98c3e0: /* 98c3e0: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c3e3: jne 0x98c3e8 */
  if (!zf) goto L_98c3e8;
L_98c3e5: /* 98c3e5: mov ecx, dword ptr [edi + 3] */
  ecx = R32((uint32_t)(edi + 0x3u));
L_98c3e8: /* 98c3e8: cmp edx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c3ec: jge 0x98c455 */
  if ((sf == of)) goto L_98c455;
L_98c3ee: /* 98c3ee: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c3f2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c3f4: jle 0x98c401 */
  if ((zf || sf != of)) goto L_98c401;
L_98c3f6: /* 98c3f6: mov ebx, ecx */
  ebx = ecx;
/* 98c3f8: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c3fb: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c3ff: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c401: /* 98c401: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c405: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c408: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c40b: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c40e: jle 0x98c41b */
  if ((zf || sf != of)) goto L_98c41b;
L_98c410: /* 98c410: mov ebx, ecx */
  ebx = ecx;
/* 98c412: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c415: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c419: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c41b: /* 98c41b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c41f: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c422: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c425: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c428: jle 0x98c435 */
  if ((zf || sf != of)) goto L_98c435;
L_98c42a: /* 98c42a: mov ebx, ecx */
  ebx = ecx;
/* 98c42c: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c42f: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c433: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c435: /* 98c435: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c439: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c43c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c43f: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c442: jle 0x98c44f */
  if ((zf || sf != of)) goto L_98c44f;
L_98c444: /* 98c444: mov ebx, ecx */
  ebx = ecx;
/* 98c446: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c449: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c44d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c44f: /* 98c44f: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c452: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_98c455: /* 98c455: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 98c458: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98c459: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c45c: lea eax, [eax + ebx*4 - 0x10] */
  eax = (uint32_t)(eax + ebx*4 + 0xfffffff0u);
/* 98c460: jl 0x98c3e0 */
  if ((sf != of)) goto L_98c3e0;
L_98c466: /* 98c466: add edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c469: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_98c46d: /* 98c46d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 98c471: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 98c475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98c476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98c477: mov byte ptr [0xcf307d], 0 */
  W8((uint32_t)(0xcf307du), 0x0u);
/* 98c47e: call 0x98ba80 */
  esp -= 4; W32(esp, 0x98c483u); SPILL(); f_98ba80(); if (g_unwind) return; RELOAD();
/* 98c483: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98c487: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98c48a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c48d: xor ecx, ecx */
  ecx = 0;
/* 98c48f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
L_98c493: /* 98c493: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 98c495: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98c499: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98c49a: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c49c: jge 0x98c508 */
  if ((sf == of)) goto L_98c508;
L_98c49e: /* 98c49e: xor esi, esi */
  esi = 0;
L_98c4a0: /* 98c4a0: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c4a4: jge 0x98c4f8 */
  if ((sf == of)) goto L_98c4f8;
L_98c4a6: /* 98c4a6: cmp dword ptr [ebp + 0x14], 0x31545844 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x31545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c4ad: jne 0x98c4d9 */
  if (!zf) goto L_98c4d9;
L_98c4af: /* 98c4af: xor ecx, ecx */
  ecx = 0;
/* 98c4b1: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c4b3: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c4b6: mov ecx, dword ptr [esp + ecx*4 + 0x30] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x30u));
/* 98c4ba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98c4bc: mov cl, byte ptr [0xcf307d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf307du))) & 0xffu);
/* 98c4c2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98c4c4: je 0x98c4f8 */
  if (zf) goto L_98c4f8;
L_98c4c6: /* 98c4c6: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c4c8: and cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c4cb: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c4ce: jne 0x98c4f8 */
  if (!zf) goto L_98c4f8;
L_98c4d0: /* 98c4d0: mov byte ptr [0xcf307c], 1 */
  W8((uint32_t)(0xcf307cu), 0x1u);
/* 98c4d7: jmp 0x98c4f8 */
  goto L_98c4f8;
L_98c4d9: /* 98c4d9: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 98c4db: xor ecx, ecx */
  ecx = 0;
/* 98c4dd: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c4df: and ebx, 0xff000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c4e5: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c4e8: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98c4eb: mov byte ptr [esp + ecx + 0x33], 0 */
  W8((uint32_t)(esp + ecx + 0x33u), 0x0u);
/* 98c4f0: mov ecx, dword ptr [esp + ecx + 0x30] */
  ecx = R32((uint32_t)(esp + ecx + 0x30u));
/* 98c4f4: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 98c4f6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_98c4f8: /* 98c4f8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c4f9: shr dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c4fc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c4ff: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c502: jl 0x98c4a0 */
  if ((sf != of)) goto L_98c4a0;
L_98c504: /* 98c504: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98c508: /* 98c508: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98c50b: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 98c50e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c50f: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c512: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98c516: lea eax, [eax + edx*4 - 0x10] */
  eax = (uint32_t)(eax + edx*4 + 0xfffffff0u);
/* 98c51a: jl 0x98c493 */
  if ((sf != of)) goto L_98c493;
L_98c520: /* 98c520: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98c524: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98c528: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98c52b: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98c52f: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 98c532: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c535: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98c538: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c53a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98c53e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98c542: jl 0x98c2f0 */
  if ((sf != of)) goto L_98c2f0;
L_98c548: /* 98c548: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98c54b: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 98c54e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c552: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98c556: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 98c559: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98c55c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98c55f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98c563: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 98c566: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c568: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98c56c: jl 0x98c2b0 */
  if ((sf != of)) goto L_98c2b0;
L_98c572: /* 98c572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c574: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c575: mov esp, ebp */
  esp = ebp;
/* 98c577: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c578: ret  */
  esp += 4; SPILL(); return;
L_98c579: /* 98c579: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98c57c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c57e: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98c582: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 98c58a: jle 0x98c5d7 */
  if ((zf || sf != of)) goto L_98c5d7;
L_98c58c: /* 98c58c: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 98c58f: nop  */
L_98c590: /* 98c590: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98c592: mov eax, edx */
  eax = edx;
/* 98c594: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 98c59c: jbe 0x98c5c2 */
  if ((cf | zf)) goto L_98c5c2;
L_98c59e: /* 98c59e: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
L_98c5a2: /* 98c5a2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 98c5a4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98c5a6: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98c5aa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c5ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98c5b0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c5b1: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c5b5: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 98c5b8: cmp dword ptr [esp + 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c5bc: jb 0x98c5a2 */
  if (cf) goto L_98c5a2;
L_98c5be: /* 98c5be: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
L_98c5c2: /* 98c5c2: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 98c5c5: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98c5c8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98c5ca: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98c5ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c5cf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c5d1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 98c5d5: jl 0x98c590 */
  if ((sf != of)) goto L_98c590;
L_98c5d7: /* 98c5d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c5d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c5d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c5da: mov esp, ebp */
  esp = ebp;
/* 98c5dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c5dd: ret  */
  esp += 4; SPILL(); return;
}

void f_98bf6a(void) {
  LOAD_REGS();
  goto L_98bf6a;
L_98bf60: /* 98bf60: xor ecx, ecx */
  ecx = 0;
/* 98bf62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98bf64: mov esi, edx */
  esi = edx;
/* 98bf66: jbe 0x98bfd4 */
  if ((cf | zf)) goto L_98bfd4;
L_98bf68: /* 98bf68: jmp 0x98bf70 */
  goto L_98bf70;
L_98bf6a: /* 98bf6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98bf70: /* 98bf70: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98bf74: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 98bf77: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bf7a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 98bf7e: mov edx, eax */
  edx = eax;
/* 98bf80: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bf83: and dl, 7 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf86: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 98bf88: shl bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf8b: or dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf8d: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 98bf8f: mov edx, eax */
  edx = eax;
/* 98bf91: shr edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bf94: mov ebx, eax */
  ebx = eax;
/* 98bf96: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98bf99: xor dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf9b: and dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bf9e: mov ebx, eax */
  ebx = eax;
/* 98bfa0: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98bfa3: xor dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfa5: mov byte ptr [esi + 1], dl */
  W8((uint32_t)(esi + 0x1u), (edx & 0xffu));
/* 98bfa8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfa9: mov edx, eax */
  edx = eax;
/* 98bfab: shr edx, 0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98bfae: mov ebx, eax */
  ebx = eax;
/* 98bfb0: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98bfb3: xor dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfb5: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98bfb8: and dl, 7 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfbb: xor dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98bfbd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfbe: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 98bfc0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfc1: mov byte ptr [esi], 0xff */
  W8((uint32_t)(esi), 0xffu);
/* 98bfc4: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98bfc7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98bfc8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98bfc9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98bfcb: jb 0x98bf70 */
  if (cf) goto L_98bf70;
L_98bfcd: /* 98bfcd: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 98bfd0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_98bfd4: /* 98bfd4: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 98bfd7: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 98bfda: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98bfdc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98bfe0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98bfe1: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98bfe3: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98bfe7: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98bfeb: jl 0x98bf60 */
  if ((sf != of)) goto L_98bf60;
L_98bff1: /* 98bff1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98bff2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98bff3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98bff4: mov esp, ebp */
  esp = ebp;
/* 98bff6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98bff7: ret  */
  esp += 4; SPILL(); return;
}

void f_98c02d(void) {
  LOAD_REGS();
  goto L_98c02d;
L_98c010: /* 98c010: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c014: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98c017: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 98c01a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98c01c: mov eax, edx */
  eax = edx;
/* 98c01e: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 98c026: jbe 0x98c096 */
  if ((cf | zf)) goto L_98c096;
L_98c028: /* 98c028: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98c02b: jmp 0x98c030 */
  goto L_98c030;
L_98c02d: /* 98c02d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98c030: /* 98c030: movzx ecx, word ptr [esi] */
  ecx = (uint32_t)(R16((uint32_t)(esi)));
/* 98c033: mov edx, ecx */
  edx = ecx;
/* 98c035: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98c038: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98c03c: and dl, 7 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c03f: mov bl, cl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c041: shl bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c044: or dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c046: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98c048: mov edx, ecx */
  edx = ecx;
/* 98c04a: shr edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98c04d: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c04f: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98c053: mov dl, byte ptr [esp + 0x24] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 98c057: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c059: and bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c05c: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c05e: mov dl, byte ptr [esp + 0x20] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x20u))) & 0xffu);
/* 98c062: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* 98c065: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98c068: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c069: mov ebx, ecx */
  ebx = ecx;
/* 98c06b: shr ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 98c06e: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c070: and bl, 7 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c073: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c074: xor bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c076: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98c078: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c079: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 98c07b: jns 0x98c082 */
  if (!sf) goto L_98c082;
L_98c07d: /* 98c07d: mov byte ptr [eax], 0xff */
  W8((uint32_t)(eax), 0xffu);
/* 98c080: jmp 0x98c085 */
  goto L_98c085;
L_98c082: /* 98c082: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_98c085: /* 98c085: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98c089: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 98c08c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c08d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c08e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c090: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c094: jb 0x98c030 */
  if (cf) goto L_98c030;
L_98c096: /* 98c096: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98c099: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 98c09c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98c0a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98c0a4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98c0a7: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c0a9: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 98c0ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98c0ad: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c0af: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98c0b3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 98c0b7: jl 0x98c010 */
  if ((sf != of)) goto L_98c010;
L_98c0bd: /* 98c0bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c0be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c0bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c0c0: mov esp, ebp */
  esp = ebp;
/* 98c0c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c0c3: ret  */
  esp += 4; SPILL(); return;
}

void f_98c19a(void) {
  LOAD_REGS();
  goto L_98c19a;
L_98c185: /* 98c185: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c189: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 98c190: xor edi, edi */
  edi = 0;
/* 98c192: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98c194: mov esi, edx */
  esi = edx;
/* 98c196: jbe 0x98c1f6 */
  if ((cf | zf)) goto L_98c1f6;
L_98c198: /* 98c198: jmp 0x98c1a0 */
  goto L_98c1a0;
L_98c19a: /* 98c19a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98c1a0: /* 98c1a0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98c1a4: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 98c1a7: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98c1aa: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 98c1ac: shl dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1af: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c1b3: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 98c1b5: and cl, 0xf */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1b8: or cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1ba: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 98c1bc: mov ecx, eax */
  ecx = eax;
/* 98c1be: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c1c1: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c1c3: xor dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1c5: and dl, 0xf */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1c8: xor dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1ca: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1cb: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 98c1cd: mov edx, eax */
  edx = eax;
/* 98c1cf: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 98c1d2: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98c1d5: xor al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1d7: mov bl, dl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c1d9: xor bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1db: and bl, 0xf */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1de: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1df: xor bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1e1: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1e3: xor al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c1e5: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 98c1e7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1e8: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 98c1ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 98c1ed: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 98c1f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c1f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98c1f2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c1f4: jb 0x98c1a0 */
  if (cf) goto L_98c1a0;
L_98c1f6: /* 98c1f6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98c1f9: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 98c1fc: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 98c200: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98c204: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98c206: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98c209: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 98c20c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c20d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c20f: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98c213: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98c217: jl 0x98c185 */
  if ((sf != of)) goto L_98c185;
L_98c21d: /* 98c21d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c21e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c21f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c220: mov esp, ebp */
  esp = ebp;
/* 98c222: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c223: ret  */
  esp += 4; SPILL(); return;
}

void f_98c2b9(void) {
  LOAD_REGS();
  goto L_98c2b9;
L_98c2b0: /* 98c2b0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c2b4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98c2b7: jmp 0x98c2c0 */
  goto L_98c2c0;
L_98c2b9: /* 98c2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98c2c0: /* 98c2c0: sub eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98c2c4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c2c7: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 98c2cb: jb 0x98c2d5 */
  if (cf) goto L_98c2d5;
L_98c2cd: /* 98c2cd: mov dword ptr [esp + 0x20], 4 */
  W32((uint32_t)(esp + 0x20u), 0x4u);
L_98c2d5: /* 98c2d5: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 98c2d8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c2da: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98c2de: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 98c2e6: jle 0x98c548 */
  if ((zf || sf != of)) goto L_98c548;
L_98c2ec: /* 98c2ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98c2f0: /* 98c2f0: sub edi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98c2f4: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c2f7: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98c2fb: jb 0x98c305 */
  if (cf) goto L_98c305;
L_98c2fd: /* 98c2fd: mov dword ptr [esp + 0x14], 4 */
  W32((uint32_t)(esp + 0x14u), 0x4u);
L_98c305: /* 98c305: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 98c308: cmp eax, 0x34545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c30d: jg 0x98c3b4 */
  if ((!zf && sf == of)) goto L_98c3b4;
L_98c313: /* 98c313: je 0x98c3bf */
  if (zf) goto L_98c3bf;
L_98c319: /* 98c319: cmp eax, 0x32545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c31e: je 0x98c32b */
  if (zf) goto L_98c32b;
L_98c320: /* 98c320: cmp eax, 0x33545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c325: jne 0x98c46d */
  if (!zf) goto L_98c46d;
L_98c32b: /* 98c32b: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 98c32f: xor edi, edi */
  edi = 0;
L_98c331: /* 98c331: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98c335: xor edx, edx */
  edx = 0;
/* 98c337: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 98c33a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c33d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98c341: cmp edi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c345: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98c349: jge 0x98c39f */
  if ((sf == of)) goto L_98c39f;
L_98c34b: /* 98c34b: xor ebx, ebx */
  ebx = 0;
/* 98c34d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98c350: /* 98c350: cmp ebx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c354: jge 0x98c390 */
  if ((sf == of)) goto L_98c390;
L_98c356: /* 98c356: xor eax, eax */
  eax = 0;
/* 98c358: mov al, byte ptr [esp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 98c35c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98c35f: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98c362: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 98c366: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 98c36a: fmul dword ptr [0xa21a6c] */
  ST0 = ST0 * (F32((uint32_t)(0xa21a6cu)));
/* 98c370: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98c376: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98c379: call 0x99cf1e */
  esp -= 4; W32(esp, 0x98c37eu); SPILL(); hle_floor(); RELOAD();
/* 98c37e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98c381: call 0x99c958 */
  esp -= 4; W32(esp, 0x98c386u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98c386: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98c389: or eax, 0xffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98c38e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_98c390: /* 98c390: shr word ptr [esp + 0x24], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esp + 0x24u))); uint32_t c = 4;
  uint16_t r = (uint16_t)((uint32_t)a >> c);
  W16((uint32_t)(esp + 0x24u), r);
  }
/* 98c396: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98c397: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98c39a: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c39d: jl 0x98c350 */
  if ((sf != of)) goto L_98c350;
L_98c39f: /* 98c39f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98c3a2: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 98c3a5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98c3a6: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c3a9: lea esi, [esi + edx*4 - 0x10] */
  esi = (uint32_t)(esi + edx*4 + 0xfffffff0u);
/* 98c3ad: jl 0x98c331 */
  if ((sf != of)) goto L_98c331;
L_98c3af: /* 98c3af: jmp 0x98c46d */
  goto L_98c46d;
L_98c3b4: /* 98c3b4: cmp eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c3b9: jne 0x98c46d */
  if (!zf) goto L_98c46d;
L_98c3bf: /* 98c3bf: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 98c3c3: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 98c3c7: mov ecx, edi */
  ecx = edi;
/* 98c3c9: call 0x98bc00 */
  esp -= 4; W32(esp, 0x98c3ceu); SPILL(); f_98bc00(); if (g_unwind) return; RELOAD();
/* 98c3ce: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98c3d2: mov ecx, dword ptr [edi + 2] */
  ecx = R32((uint32_t)(edi + 0x2u));
/* 98c3d5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 98c3d8: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c3db: xor edx, edx */
  edx = 0;
/* 98c3dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98c3e0: /* 98c3e0: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c3e3: jne 0x98c3e8 */
  if (!zf) goto L_98c3e8;
L_98c3e5: /* 98c3e5: mov ecx, dword ptr [edi + 3] */
  ecx = R32((uint32_t)(edi + 0x3u));
L_98c3e8: /* 98c3e8: cmp edx, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c3ec: jge 0x98c455 */
  if ((sf == of)) goto L_98c455;
L_98c3ee: /* 98c3ee: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c3f2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98c3f4: jle 0x98c401 */
  if ((zf || sf != of)) goto L_98c401;
L_98c3f6: /* 98c3f6: mov ebx, ecx */
  ebx = ecx;
/* 98c3f8: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c3fb: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c3ff: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c401: /* 98c401: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c405: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c408: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c40b: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c40e: jle 0x98c41b */
  if ((zf || sf != of)) goto L_98c41b;
L_98c410: /* 98c410: mov ebx, ecx */
  ebx = ecx;
/* 98c412: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c415: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c419: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c41b: /* 98c41b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c41f: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c422: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c425: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c428: jle 0x98c435 */
  if ((zf || sf != of)) goto L_98c435;
L_98c42a: /* 98c42a: mov ebx, ecx */
  ebx = ecx;
/* 98c42c: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c42f: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c433: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c435: /* 98c435: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98c439: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c43c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c43f: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c442: jle 0x98c44f */
  if ((zf || sf != of)) goto L_98c44f;
L_98c444: /* 98c444: mov ebx, ecx */
  ebx = ecx;
/* 98c446: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c449: mov ebx, dword ptr [esp + ebx*4 + 0x30] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 98c44d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_98c44f: /* 98c44f: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98c452: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_98c455: /* 98c455: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 98c458: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98c459: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c45c: lea eax, [eax + ebx*4 - 0x10] */
  eax = (uint32_t)(eax + ebx*4 + 0xfffffff0u);
/* 98c460: jl 0x98c3e0 */
  if ((sf != of)) goto L_98c3e0;
L_98c466: /* 98c466: add edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c469: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_98c46d: /* 98c46d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 98c471: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 98c475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98c476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98c477: mov byte ptr [0xcf307d], 0 */
  W8((uint32_t)(0xcf307du), 0x0u);
/* 98c47e: call 0x98ba80 */
  esp -= 4; W32(esp, 0x98c483u); SPILL(); f_98ba80(); if (g_unwind) return; RELOAD();
/* 98c483: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98c487: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98c48a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c48d: xor ecx, ecx */
  ecx = 0;
/* 98c48f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
L_98c493: /* 98c493: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 98c495: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98c499: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98c49a: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c49c: jge 0x98c508 */
  if ((sf == of)) goto L_98c508;
L_98c49e: /* 98c49e: xor esi, esi */
  esi = 0;
L_98c4a0: /* 98c4a0: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c4a4: jge 0x98c4f8 */
  if ((sf == of)) goto L_98c4f8;
L_98c4a6: /* 98c4a6: cmp dword ptr [ebp + 0x14], 0x31545844 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x31545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c4ad: jne 0x98c4d9 */
  if (!zf) goto L_98c4d9;
L_98c4af: /* 98c4af: xor ecx, ecx */
  ecx = 0;
/* 98c4b1: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c4b3: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c4b6: mov ecx, dword ptr [esp + ecx*4 + 0x30] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x30u));
/* 98c4ba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98c4bc: mov cl, byte ptr [0xcf307d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcf307du))) & 0xffu);
/* 98c4c2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98c4c4: je 0x98c4f8 */
  if (zf) goto L_98c4f8;
L_98c4c6: /* 98c4c6: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c4c8: and cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c4cb: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c4ce: jne 0x98c4f8 */
  if (!zf) goto L_98c4f8;
L_98c4d0: /* 98c4d0: mov byte ptr [0xcf307c], 1 */
  W8((uint32_t)(0xcf307cu), 0x1u);
/* 98c4d7: jmp 0x98c4f8 */
  goto L_98c4f8;
L_98c4d9: /* 98c4d9: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 98c4db: xor ecx, ecx */
  ecx = 0;
/* 98c4dd: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c4df: and ebx, 0xff000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c4e5: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c4e8: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98c4eb: mov byte ptr [esp + ecx + 0x33], 0 */
  W8((uint32_t)(esp + ecx + 0x33u), 0x0u);
/* 98c4f0: mov ecx, dword ptr [esp + ecx + 0x30] */
  ecx = R32((uint32_t)(esp + ecx + 0x30u));
/* 98c4f4: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 98c4f6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_98c4f8: /* 98c4f8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98c4f9: shr dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c4fc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c4ff: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c502: jl 0x98c4a0 */
  if ((sf != of)) goto L_98c4a0;
L_98c504: /* 98c504: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
L_98c508: /* 98c508: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98c50b: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 98c50e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98c50f: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c512: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98c516: lea eax, [eax + edx*4 - 0x10] */
  eax = (uint32_t)(eax + edx*4 + 0xfffffff0u);
/* 98c51a: jl 0x98c493 */
  if ((sf != of)) goto L_98c493;
L_98c520: /* 98c520: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98c524: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98c528: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98c52b: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98c52f: mov edi, dword ptr [ecx + 0xc] */
  edi = R32((uint32_t)(ecx + 0xcu));
/* 98c532: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c535: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98c538: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c53a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98c53e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98c542: jl 0x98c2f0 */
  if ((sf != of)) goto L_98c2f0;
L_98c548: /* 98c548: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98c54b: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 98c54e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98c552: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98c556: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 98c559: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98c55c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98c55f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98c563: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 98c566: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98c568: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98c56c: jl 0x98c2b0 */
  if ((sf != of)) goto L_98c2b0;
L_98c572: /* 98c572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c574: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c575: mov esp, ebp */
  esp = ebp;
/* 98c577: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c578: ret  */
  esp += 4; SPILL(); return;
}

void f_98c5e0(void) {
  LOAD_REGS();
L_98c5e0: /* 98c5e0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98c5e3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 98c5e7: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 98c5eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98c5ec: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98c5ef: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 98c5f2: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98c5f5: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c5f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98c5f9: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 98c5fd: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 98c600: mov ebx, dword ptr [edx*4 + 0xb04308] */
  ebx = R32((uint32_t)(edx*4 + 0xb04308u));
/* 98c607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98c608: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 98c60c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98c60d: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98c611: xor eax, eax */
  eax = 0;
L_98c613: /* 98c613: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c616: jne 0x98c66b */
  if (!zf) goto L_98c66b;
L_98c618: /* 98c618: mov dl, byte ptr [ebp + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x1u))) & 0xffu);
/* 98c61b: xor ecx, ecx */
  ecx = 0;
/* 98c61d: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c61f: and dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c622: mov byte ptr [esi + 1], dl */
  W8((uint32_t)(esi + 0x1u), (edx & 0xffu));
/* 98c625: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c628: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98c62a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c62c: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98c630: je 0x98c6b7 */
  if (zf) goto L_98c6b7;
L_98c636: /* 98c636: cmp dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c639: je 0x98c6b7 */
  if (zf) goto L_98c6b7;
L_98c63b: /* 98c63b: mov edi, ebx */
  edi = ebx;
/* 98c63d: imul edi, edi, 7 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x7u);
  edi = (uint32_t)r;
  }
/* 98c640: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98c642: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 98c646: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c649: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 98c64c: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 98c650: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c653: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 98c656: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98c65d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 98c661: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c664: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c666: mov byte ptr [esi + 1], cl */
  W8((uint32_t)(esi + 0x1u), (ecx & 0xffu));
/* 98c669: jmp 0x98c6b7 */
  goto L_98c6b7;
L_98c66b: /* 98c66b: mov cl, byte ptr [eax + ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp))) & 0xffu);
/* 98c66e: xor edx, edx */
  edx = 0;
/* 98c670: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c672: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c675: mov byte ptr [eax + esi], cl */
  W8((uint32_t)(eax + esi), (ecx & 0xffu));
/* 98c678: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c67b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c67d: mov dword ptr [esp + eax*4 + 0x24], edx */
  W32((uint32_t)(esp + eax*4 + 0x24u), edx);
/* 98c681: je 0x98c6b7 */
  if (zf) goto L_98c6b7;
L_98c683: /* 98c683: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c686: je 0x98c6b7 */
  if (zf) goto L_98c6b7;
L_98c688: /* 98c688: mov edi, ebx */
  edi = ebx;
/* 98c68a: imul edi, edi, 7 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x7u);
  edi = (uint32_t)r;
  }
/* 98c68d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98c68f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 98c693: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c696: lea edx, [edx + edi*4] */
  edx = (uint32_t)(edx + edi*4);
/* 98c699: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 98c69d: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c6a0: lea edx, [edi + edx*4 - 0x10] */
  edx = (uint32_t)(edi + edx*4 + 0xfffffff0u);
/* 98c6a4: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98c6ab: mov dword ptr [esp + eax*4 + 0x14], edx */
  W32((uint32_t)(esp + eax*4 + 0x14u), edx);
/* 98c6af: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c6b2: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c6b4: mov byte ptr [eax + esi], dl */
  W8((uint32_t)(eax + esi), (edx & 0xffu));
L_98c6b7: /* 98c6b7: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 98c6ba: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c6bd: lea edi, [esp + eax*4 + 0x28] */
  edi = (uint32_t)(esp + eax*4 + 0x28u);
/* 98c6c1: jne 0x98c71b */
  if (!zf) goto L_98c71b;
L_98c6c3: /* 98c6c3: mov dl, byte ptr [eax + ebp + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0x1u))) & 0xffu);
/* 98c6c7: xor ecx, ecx */
  ecx = 0;
/* 98c6c9: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c6cb: and dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c6ce: mov byte ptr [esi + eax + 1], dl */
  W8((uint32_t)(esi + eax + 0x1u), (edx & 0xffu));
/* 98c6d2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c6d5: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98c6d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c6d9: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 98c6db: je 0x98c76a */
  if (zf) goto L_98c76a;
L_98c6e1: /* 98c6e1: cmp dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c6e4: je 0x98c76a */
  if (zf) goto L_98c76a;
L_98c6ea: /* 98c6ea: mov edi, ebx */
  edi = ebx;
/* 98c6ec: imul edi, edi, 7 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x7u);
  edi = (uint32_t)r;
  }
/* 98c6ef: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98c6f1: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 98c6f5: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c6f8: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 98c6fb: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 98c6ff: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c702: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 98c705: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98c70c: mov dword ptr [esp + eax*4 + 0x18], ecx */
  W32((uint32_t)(esp + eax*4 + 0x18u), ecx);
/* 98c710: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c713: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c715: mov byte ptr [esi + eax + 1], cl */
  W8((uint32_t)(esi + eax + 0x1u), (ecx & 0xffu));
/* 98c719: jmp 0x98c76a */
  goto L_98c76a;
L_98c71b: /* 98c71b: mov cl, byte ptr [eax + ebp + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0x1u))) & 0xffu);
/* 98c71f: xor edx, edx */
  edx = 0;
/* 98c721: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c723: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c726: mov byte ptr [esi + eax + 1], cl */
  W8((uint32_t)(esi + eax + 0x1u), (ecx & 0xffu));
/* 98c72a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c72d: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 98c72f: mov edi, edx */
  edi = edx;
/* 98c731: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c733: je 0x98c76a */
  if (zf) goto L_98c76a;
L_98c735: /* 98c735: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c738: je 0x98c76a */
  if (zf) goto L_98c76a;
L_98c73a: /* 98c73a: mov edx, ebx */
  edx = ebx;
/* 98c73c: imul edx, edx, 7 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x7u);
  edx = (uint32_t)r;
  }
/* 98c73f: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98c741: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 98c745: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c748: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 98c74b: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 98c74f: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c752: lea edx, [edi + edx*4 - 0x10] */
  edx = (uint32_t)(edi + edx*4 + 0xfffffff0u);
/* 98c756: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98c75d: mov dword ptr [esp + eax*4 + 0x18], edx */
  W32((uint32_t)(esp + eax*4 + 0x18u), edx);
/* 98c761: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c764: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c766: mov byte ptr [esi + eax + 1], dl */
  W8((uint32_t)(esi + eax + 0x1u), (edx & 0xffu));
L_98c76a: /* 98c76a: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 98c76d: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c770: lea edi, [esp + eax*4 + 0x2c] */
  edi = (uint32_t)(esp + eax*4 + 0x2cu);
/* 98c774: jne 0x98c7ce */
  if (!zf) goto L_98c7ce;
L_98c776: /* 98c776: mov dl, byte ptr [eax + ebp + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0x2u))) & 0xffu);
/* 98c77a: xor ecx, ecx */
  ecx = 0;
/* 98c77c: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c77e: and dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c781: mov byte ptr [esi + eax + 2], dl */
  W8((uint32_t)(esi + eax + 0x2u), (edx & 0xffu));
/* 98c785: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c788: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98c78a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c78c: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 98c78e: je 0x98c81d */
  if (zf) goto L_98c81d;
L_98c794: /* 98c794: cmp dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c797: je 0x98c81d */
  if (zf) goto L_98c81d;
L_98c79d: /* 98c79d: mov edi, ebx */
  edi = ebx;
/* 98c79f: imul edi, edi, 7 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x7u);
  edi = (uint32_t)r;
  }
/* 98c7a2: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98c7a4: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 98c7a8: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c7ab: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 98c7ae: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 98c7b2: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c7b5: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* 98c7b8: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98c7bf: mov dword ptr [esp + eax*4 + 0x1c], ecx */
  W32((uint32_t)(esp + eax*4 + 0x1cu), ecx);
/* 98c7c3: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c7c6: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c7c8: mov byte ptr [esi + eax + 2], cl */
  W8((uint32_t)(esi + eax + 0x2u), (ecx & 0xffu));
/* 98c7cc: jmp 0x98c81d */
  goto L_98c81d;
L_98c7ce: /* 98c7ce: mov cl, byte ptr [eax + ebp + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0x2u))) & 0xffu);
/* 98c7d2: xor edx, edx */
  edx = 0;
/* 98c7d4: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c7d6: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c7d9: mov byte ptr [esi + eax + 2], cl */
  W8((uint32_t)(esi + eax + 0x2u), (ecx & 0xffu));
/* 98c7dd: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c7e0: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 98c7e2: mov edi, edx */
  edi = edx;
/* 98c7e4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c7e6: je 0x98c81d */
  if (zf) goto L_98c81d;
L_98c7e8: /* 98c7e8: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c7eb: je 0x98c81d */
  if (zf) goto L_98c81d;
L_98c7ed: /* 98c7ed: mov edx, ebx */
  edx = ebx;
/* 98c7ef: imul edx, edx, 7 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x7u);
  edx = (uint32_t)r;
  }
/* 98c7f2: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98c7f4: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 98c7f8: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c7fb: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 98c7fe: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 98c802: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c805: lea edx, [edi + edx*4 - 0x10] */
  edx = (uint32_t)(edi + edx*4 + 0xfffffff0u);
/* 98c809: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98c810: mov dword ptr [esp + eax*4 + 0x1c], edx */
  W32((uint32_t)(esp + eax*4 + 0x1cu), edx);
/* 98c814: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c817: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c819: mov byte ptr [esi + eax + 2], dl */
  W8((uint32_t)(esi + eax + 0x2u), (edx & 0xffu));
L_98c81d: /* 98c81d: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 98c820: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c823: lea edi, [esp + eax*4 + 0x30] */
  edi = (uint32_t)(esp + eax*4 + 0x30u);
/* 98c827: jne 0x98c881 */
  if (!zf) goto L_98c881;
L_98c829: /* 98c829: mov dl, byte ptr [eax + ebp + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0x3u))) & 0xffu);
/* 98c82d: xor ecx, ecx */
  ecx = 0;
/* 98c82f: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98c831: and dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c834: mov byte ptr [esi + eax + 3], dl */
  W8((uint32_t)(esi + eax + 0x3u), (edx & 0xffu));
/* 98c838: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c83b: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98c83d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c83f: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 98c841: je 0x98c8d6 */
  if (zf) goto L_98c8d6;
L_98c847: /* 98c847: cmp dl, 0xfc */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xfcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c84a: je 0x98c8d6 */
  if (zf) goto L_98c8d6;
L_98c850: /* 98c850: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98c853: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98c855: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* 98c859: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c85c: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98c85f: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98c863: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c866: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98c869: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98c870: lea edi, [esp + eax*4 + 0x20] */
  edi = (uint32_t)(esp + eax*4 + 0x20u);
/* 98c874: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 98c876: shl cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c879: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c87b: mov byte ptr [esi + eax + 3], cl */
  W8((uint32_t)(esi + eax + 0x3u), (ecx & 0xffu));
/* 98c87f: jmp 0x98c8d2 */
  goto L_98c8d2;
L_98c881: /* 98c881: mov cl, byte ptr [eax + ebp + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp + 0x3u))) & 0xffu);
/* 98c885: xor edx, edx */
  edx = 0;
/* 98c887: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c889: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c88c: mov byte ptr [esi + eax + 3], cl */
  W8((uint32_t)(esi + eax + 0x3u), (ecx & 0xffu));
/* 98c890: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c893: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 98c895: mov edi, edx */
  edi = edx;
/* 98c897: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c899: je 0x98c8d6 */
  if (zf) goto L_98c8d6;
L_98c89b: /* 98c89b: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c89e: je 0x98c8d6 */
  if (zf) goto L_98c8d6;
L_98c8a0: /* 98c8a0: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98c8a3: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98c8a5: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* 98c8a9: and edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 98c8ac: lea edi, [edi + ebx*4] */
  edi = (uint32_t)(edi + ebx*4);
/* 98c8af: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98c8b3: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c8b6: lea edx, [esp + eax*4 + 0x20] */
  edx = (uint32_t)(esp + eax*4 + 0x20u);
/* 98c8ba: lea edi, [ebx + edi*4 - 0x10] */
  edi = (uint32_t)(ebx + edi*4 + 0xfffffff0u);
/* 98c8be: mov edi, dword ptr [edi*4 + 0xb03f88] */
  edi = R32((uint32_t)(edi*4 + 0xb03f88u));
/* 98c8c5: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 98c8c7: mov dl, byte ptr [edx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 98c8c9: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c8cc: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c8ce: mov byte ptr [esi + eax + 3], dl */
  W8((uint32_t)(esi + eax + 0x3u), (edx & 0xffu));
L_98c8d2: /* 98c8d2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_98c8d6: /* 98c8d6: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98c8d9: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98c8dc: jb 0x98c613 */
  if (cf) goto L_98c613;
L_98c8e2: /* 98c8e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98c8e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98c8e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98c8e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98c8e6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98c8e9: ret  */
  esp += 4; SPILL(); return;
}

void f_98c8f0(void) {
  LOAD_REGS();
L_98c8f0: /* 98c8f0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98c8f3: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98c8f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98c8f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98c8f9: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 98c8fd: mov eax, ebp */
  eax = ebp;
/* 98c8ff: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98c902: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 98c905: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98c908: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98c90b: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 98c90e: mov eax, dword ptr [edx*4 + 0xb04308] */
  eax = R32((uint32_t)(edx*4 + 0xb04308u));
/* 98c915: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98c916: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98c91a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98c91b: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 98c91f: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 98c923: xor eax, eax */
  eax = 0;
L_98c925: /* 98c925: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c928: jne 0x98c935 */
  if (!zf) goto L_98c935;
L_98c92a: /* 98c92a: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* 98c92d: and cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c930: mov byte ptr [esi + 3], cl */
  W8((uint32_t)(esi + 0x3u), (ecx & 0xffu));
/* 98c933: jmp 0x98c981 */
  goto L_98c981;
L_98c935: /* 98c935: mov cl, byte ptr [eax + edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi))) & 0xffu);
/* 98c938: xor edx, edx */
  edx = 0;
/* 98c93a: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c93c: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c93f: mov byte ptr [eax + esi], cl */
  W8((uint32_t)(eax + esi), (ecx & 0xffu));
/* 98c942: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c945: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c947: mov dword ptr [esp + eax*4 + 0x10], edx */
  W32((uint32_t)(esp + eax*4 + 0x10u), edx);
/* 98c94b: je 0x98c981 */
  if (zf) goto L_98c981;
L_98c94d: /* 98c94d: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c950: je 0x98c981 */
  if (zf) goto L_98c981;
L_98c952: /* 98c952: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98c956: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98c959: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98c95b: mov edx, ebp */
  edx = ebp;
/* 98c95d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c960: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98c963: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98c967: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c96a: lea edx, [ebx + edx*4 - 0x10] */
  edx = (uint32_t)(ebx + edx*4 + 0xfffffff0u);
/* 98c96e: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98c975: mov dword ptr [esp + eax*4 + 0x20], edx */
  W32((uint32_t)(esp + eax*4 + 0x20u), edx);
/* 98c979: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c97c: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c97e: mov byte ptr [eax + esi], dl */
  W8((uint32_t)(eax + esi), (edx & 0xffu));
L_98c981: /* 98c981: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 98c984: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c987: jne 0x98c996 */
  if (!zf) goto L_98c996;
L_98c989: /* 98c989: mov dl, byte ptr [edi + eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x1u))) & 0xffu);
/* 98c98d: and dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c990: mov byte ptr [esi + eax + 1], dl */
  W8((uint32_t)(esi + eax + 0x1u), (edx & 0xffu));
/* 98c994: jmp 0x98c9e5 */
  goto L_98c9e5;
L_98c996: /* 98c996: mov cl, byte ptr [edi + eax + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x1u))) & 0xffu);
/* 98c99a: xor edx, edx */
  edx = 0;
/* 98c99c: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98c99e: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c9a1: mov byte ptr [esi + eax + 1], cl */
  W8((uint32_t)(esi + eax + 0x1u), (ecx & 0xffu));
/* 98c9a5: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c9a8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98c9aa: mov dword ptr [esp + eax*4 + 0x14], edx */
  W32((uint32_t)(esp + eax*4 + 0x14u), edx);
/* 98c9ae: je 0x98c9e5 */
  if (zf) goto L_98c9e5;
L_98c9b0: /* 98c9b0: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98c9b3: je 0x98c9e5 */
  if (zf) goto L_98c9e5;
L_98c9b5: /* 98c9b5: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98c9b9: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98c9bc: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98c9be: mov edx, ebp */
  edx = ebp;
/* 98c9c0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98c9c3: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98c9c6: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98c9ca: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98c9cd: lea edx, [ebx + edx*4 - 0x10] */
  edx = (uint32_t)(ebx + edx*4 + 0xfffffff0u);
/* 98c9d1: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98c9d8: mov dword ptr [esp + eax*4 + 0x24], edx */
  W32((uint32_t)(esp + eax*4 + 0x24u), edx);
/* 98c9dc: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c9df: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c9e1: mov byte ptr [esi + eax + 1], dl */
  W8((uint32_t)(esi + eax + 0x1u), (edx & 0xffu));
L_98c9e5: /* 98c9e5: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 98c9e8: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98c9eb: jne 0x98c9fa */
  if (!zf) goto L_98c9fa;
L_98c9ed: /* 98c9ed: mov dl, byte ptr [edi + eax + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x2u))) & 0xffu);
/* 98c9f1: and dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98c9f4: mov byte ptr [esi + eax + 2], dl */
  W8((uint32_t)(esi + eax + 0x2u), (edx & 0xffu));
/* 98c9f8: jmp 0x98ca49 */
  goto L_98ca49;
L_98c9fa: /* 98c9fa: mov cl, byte ptr [edi + eax + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x2u))) & 0xffu);
/* 98c9fe: xor edx, edx */
  edx = 0;
/* 98ca00: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98ca02: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ca05: mov byte ptr [esi + eax + 2], cl */
  W8((uint32_t)(esi + eax + 0x2u), (ecx & 0xffu));
/* 98ca09: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98ca0c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ca0e: mov dword ptr [esp + eax*4 + 0x18], edx */
  W32((uint32_t)(esp + eax*4 + 0x18u), edx);
/* 98ca12: je 0x98ca49 */
  if (zf) goto L_98ca49;
L_98ca14: /* 98ca14: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98ca17: je 0x98ca49 */
  if (zf) goto L_98ca49;
L_98ca19: /* 98ca19: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98ca1d: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98ca20: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98ca22: mov edx, ebp */
  edx = ebp;
/* 98ca24: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98ca27: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98ca2a: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98ca2e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98ca31: lea edx, [ebx + edx*4 - 0x10] */
  edx = (uint32_t)(ebx + edx*4 + 0xfffffff0u);
/* 98ca35: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98ca3c: mov dword ptr [esp + eax*4 + 0x28], edx */
  W32((uint32_t)(esp + eax*4 + 0x28u), edx);
/* 98ca40: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ca43: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ca45: mov byte ptr [esi + eax + 2], dl */
  W8((uint32_t)(esi + eax + 0x2u), (edx & 0xffu));
L_98ca49: /* 98ca49: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 98ca4c: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ca4f: jne 0x98ca5e */
  if (!zf) goto L_98ca5e;
L_98ca51: /* 98ca51: mov dl, byte ptr [edi + eax + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x3u))) & 0xffu);
/* 98ca55: and dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ca58: mov byte ptr [esi + eax + 3], dl */
  W8((uint32_t)(esi + eax + 0x3u), (edx & 0xffu));
/* 98ca5c: jmp 0x98caad */
  goto L_98caad;
L_98ca5e: /* 98ca5e: mov cl, byte ptr [edi + eax + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x3u))) & 0xffu);
/* 98ca62: xor edx, edx */
  edx = 0;
/* 98ca64: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98ca66: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ca69: mov byte ptr [esi + eax + 3], cl */
  W8((uint32_t)(esi + eax + 0x3u), (ecx & 0xffu));
/* 98ca6d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98ca70: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ca72: mov dword ptr [esp + eax*4 + 0x1c], edx */
  W32((uint32_t)(esp + eax*4 + 0x1cu), edx);
/* 98ca76: je 0x98caad */
  if (zf) goto L_98caad;
L_98ca78: /* 98ca78: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98ca7b: je 0x98caad */
  if (zf) goto L_98caad;
L_98ca7d: /* 98ca7d: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98ca81: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98ca84: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98ca86: mov edx, ebp */
  edx = ebp;
/* 98ca88: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98ca8b: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98ca8e: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98ca92: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98ca95: lea edx, [ebx + edx*4 - 0x10] */
  edx = (uint32_t)(ebx + edx*4 + 0xfffffff0u);
/* 98ca99: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98caa0: mov dword ptr [esp + eax*4 + 0x2c], edx */
  W32((uint32_t)(esp + eax*4 + 0x2cu), edx);
/* 98caa4: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98caa7: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98caa9: mov byte ptr [esi + eax + 3], dl */
  W8((uint32_t)(esi + eax + 0x3u), (edx & 0xffu));
L_98caad: /* 98caad: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98cab0: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98cab3: jb 0x98c925 */
  if (cf) goto L_98c925;
L_98cab9: /* 98cab9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98caba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98cabb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98cabc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98cabd: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98cac0: ret  */
  esp += 4; SPILL(); return;
}

void f_98cad0(void) {
  LOAD_REGS();
L_98cad0: /* 98cad0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98cad3: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98cad7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98cad8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98cad9: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 98cadd: mov eax, ebp */
  eax = ebp;
/* 98cadf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98cae2: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 98cae5: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98cae8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98caeb: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 98caee: mov ebx, dword ptr [edx*4 + 0xb04308] */
  ebx = R32((uint32_t)(edx*4 + 0xb04308u));
/* 98caf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98caf6: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98cafa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98cafb: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 98caff: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98cb03: xor eax, eax */
  eax = 0;
/* 98cb05: jmp 0x98cb10 */
  goto L_98cb10;
L_98cb07: /* 98cb07: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98cb0b: jmp 0x98cb10 */
  goto L_98cb10;
L_98cb10: /* 98cb10: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98cb13: jne 0x98cb66 */
  if (!zf) goto L_98cb66;
L_98cb15: /* 98cb15: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 98cb18: xor ecx, ecx */
  ecx = 0;
/* 98cb1a: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98cb1c: and dl, 0xf8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cb1f: mov byte ptr [esi + 1], dl */
  W8((uint32_t)(esi + 0x1u), (edx & 0xffu));
/* 98cb22: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98cb25: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cb27: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98cb2b: je 0x98cbbe */
  if (zf) goto L_98cbbe;
L_98cb31: /* 98cb31: cmp dl, 0xf8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98cb34: je 0x98cbbe */
  if (zf) goto L_98cbbe;
L_98cb3a: /* 98cb3a: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98cb3d: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98cb3f: mov ebx, ebp */
  ebx = ebp;
/* 98cb41: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cb44: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cb47: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98cb4b: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cb4e: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cb51: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98cb58: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 98cb5c: shl cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cb5f: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cb61: mov byte ptr [esi + 1], cl */
  W8((uint32_t)(esi + 0x1u), (ecx & 0xffu));
/* 98cb64: jmp 0x98cbbe */
  goto L_98cbbe;
L_98cb66: /* 98cb66: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98cb69: jne 0x98cb76 */
  if (!zf) goto L_98cb76;
L_98cb6b: /* 98cb6b: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* 98cb6e: and dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cb71: mov byte ptr [esi + 3], dl */
  W8((uint32_t)(esi + 0x3u), (edx & 0xffu));
/* 98cb74: jmp 0x98cbbe */
  goto L_98cbbe;
L_98cb76: /* 98cb76: mov cl, byte ptr [eax + edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi))) & 0xffu);
/* 98cb79: xor edx, edx */
  edx = 0;
/* 98cb7b: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98cb7d: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cb80: mov byte ptr [eax + esi], cl */
  W8((uint32_t)(eax + esi), (ecx & 0xffu));
/* 98cb83: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98cb86: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cb88: mov dword ptr [esp + eax*4 + 0x10], edx */
  W32((uint32_t)(esp + eax*4 + 0x10u), edx);
/* 98cb8c: je 0x98cbbe */
  if (zf) goto L_98cbbe;
L_98cb8e: /* 98cb8e: cmp cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98cb91: je 0x98cbbe */
  if (zf) goto L_98cbbe;
L_98cb93: /* 98cb93: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98cb96: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98cb98: mov edx, ebp */
  edx = ebp;
/* 98cb9a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98cb9d: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 98cba0: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98cba4: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cba7: lea edx, [ebx + edx*4 - 0x10] */
  edx = (uint32_t)(ebx + edx*4 + 0xfffffff0u);
/* 98cbab: mov edx, dword ptr [edx*4 + 0xb03f88] */
  edx = R32((uint32_t)(edx*4 + 0xb03f88u));
/* 98cbb2: mov dword ptr [esp + eax*4 + 0x20], edx */
  W32((uint32_t)(esp + eax*4 + 0x20u), edx);
/* 98cbb6: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cbb9: add dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cbbb: mov byte ptr [eax + esi], dl */
  W8((uint32_t)(eax + esi), (edx & 0xffu));
L_98cbbe: /* 98cbbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98cbbf: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98cbc2: jb 0x98cb07 */
  if (cf) goto L_98cb07;
L_98cbc8: /* 98cbc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98cbc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98cbca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98cbcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98cbcc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98cbcf: ret  */
  esp += 4; SPILL(); return;
}

void f_98cbd0(void) {
  LOAD_REGS();
L_98cbd0: /* 98cbd0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98cbd3: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98cbd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98cbd8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98cbd9: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 98cbdd: mov eax, ebp */
  eax = ebp;
/* 98cbdf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98cbe2: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 98cbe5: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 98cbe8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98cbeb: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 98cbee: mov eax, dword ptr [edx*4 + 0xb04308] */
  eax = R32((uint32_t)(edx*4 + 0xb04308u));
/* 98cbf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98cbf6: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 98cbfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98cbfb: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 98cbff: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 98cc03: xor eax, eax */
  eax = 0;
L_98cc05: /* 98cc05: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98cc08: jne 0x98cc12 */
  if (!zf) goto L_98cc12;
L_98cc0a: /* 98cc0a: mov cl, byte ptr [edi + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* 98cc0d: mov byte ptr [esi + 3], cl */
  W8((uint32_t)(esi + 0x3u), (ecx & 0xffu));
/* 98cc10: jmp 0x98cc5f */
  goto L_98cc5f;
L_98cc12: /* 98cc12: mov dl, byte ptr [eax + edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi))) & 0xffu);
/* 98cc15: xor ecx, ecx */
  ecx = 0;
/* 98cc17: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98cc19: and dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cc1c: mov byte ptr [eax + esi], dl */
  W8((uint32_t)(eax + esi), (edx & 0xffu));
/* 98cc1f: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98cc21: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98cc24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cc26: mov dword ptr [esp + eax*4 + 0x10], ecx */
  W32((uint32_t)(esp + eax*4 + 0x10u), ecx);
/* 98cc2a: je 0x98cc5f */
  if (zf) goto L_98cc5f;
L_98cc2c: /* 98cc2c: cmp dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98cc2f: je 0x98cc5f */
  if (zf) goto L_98cc5f;
L_98cc31: /* 98cc31: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98cc35: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98cc38: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98cc3a: mov ebx, ebp */
  ebx = ebp;
/* 98cc3c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cc3f: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cc42: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98cc46: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cc49: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cc4c: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98cc53: mov dword ptr [esp + eax*4 + 0x20], ecx */
  W32((uint32_t)(esp + eax*4 + 0x20u), ecx);
/* 98cc57: shl cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cc5a: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cc5c: mov byte ptr [eax + esi], cl */
  W8((uint32_t)(eax + esi), (ecx & 0xffu));
L_98cc5f: /* 98cc5f: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 98cc62: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98cc65: jne 0x98cc71 */
  if (!zf) goto L_98cc71;
L_98cc67: /* 98cc67: mov cl, byte ptr [edi + eax + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x1u))) & 0xffu);
/* 98cc6b: mov byte ptr [esi + eax + 1], cl */
  W8((uint32_t)(esi + eax + 0x1u), (ecx & 0xffu));
/* 98cc6f: jmp 0x98ccc1 */
  goto L_98ccc1;
L_98cc71: /* 98cc71: mov dl, byte ptr [edi + eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x1u))) & 0xffu);
/* 98cc75: xor ecx, ecx */
  ecx = 0;
/* 98cc77: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98cc79: and dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cc7c: mov byte ptr [esi + eax + 1], dl */
  W8((uint32_t)(esi + eax + 0x1u), (edx & 0xffu));
/* 98cc80: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98cc82: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98cc85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cc87: mov dword ptr [esp + eax*4 + 0x14], ecx */
  W32((uint32_t)(esp + eax*4 + 0x14u), ecx);
/* 98cc8b: je 0x98ccc1 */
  if (zf) goto L_98ccc1;
L_98cc8d: /* 98cc8d: cmp dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98cc90: je 0x98ccc1 */
  if (zf) goto L_98ccc1;
L_98cc92: /* 98cc92: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98cc96: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98cc99: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98cc9b: mov ebx, ebp */
  ebx = ebp;
/* 98cc9d: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cca0: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cca3: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98cca7: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98ccaa: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98ccad: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98ccb4: mov dword ptr [esp + eax*4 + 0x24], ecx */
  W32((uint32_t)(esp + eax*4 + 0x24u), ecx);
/* 98ccb8: shl cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ccbb: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ccbd: mov byte ptr [esi + eax + 1], cl */
  W8((uint32_t)(esi + eax + 0x1u), (ecx & 0xffu));
L_98ccc1: /* 98ccc1: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 98ccc4: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ccc7: jne 0x98ccd3 */
  if (!zf) goto L_98ccd3;
L_98ccc9: /* 98ccc9: mov cl, byte ptr [edi + eax + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x2u))) & 0xffu);
/* 98cccd: mov byte ptr [esi + eax + 2], cl */
  W8((uint32_t)(esi + eax + 0x2u), (ecx & 0xffu));
/* 98ccd1: jmp 0x98cd23 */
  goto L_98cd23;
L_98ccd3: /* 98ccd3: mov dl, byte ptr [edi + eax + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x2u))) & 0xffu);
/* 98ccd7: xor ecx, ecx */
  ecx = 0;
/* 98ccd9: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98ccdb: and dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98ccde: mov byte ptr [esi + eax + 2], dl */
  W8((uint32_t)(esi + eax + 0x2u), (edx & 0xffu));
/* 98cce2: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98cce4: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98cce7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cce9: mov dword ptr [esp + eax*4 + 0x18], ecx */
  W32((uint32_t)(esp + eax*4 + 0x18u), ecx);
/* 98cced: je 0x98cd23 */
  if (zf) goto L_98cd23;
L_98ccef: /* 98ccef: cmp dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98ccf2: je 0x98cd23 */
  if (zf) goto L_98cd23;
L_98ccf4: /* 98ccf4: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98ccf8: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98ccfb: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98ccfd: mov ebx, ebp */
  ebx = ebp;
/* 98ccff: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cd02: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cd05: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98cd09: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cd0c: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cd0f: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98cd16: mov dword ptr [esp + eax*4 + 0x28], ecx */
  W32((uint32_t)(esp + eax*4 + 0x28u), ecx);
/* 98cd1a: shl cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cd1d: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cd1f: mov byte ptr [esi + eax + 2], cl */
  W8((uint32_t)(esi + eax + 0x2u), (ecx & 0xffu));
L_98cd23: /* 98cd23: lea edx, [eax + 3] */
  edx = (uint32_t)(eax + 0x3u);
/* 98cd26: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98cd29: jne 0x98cd35 */
  if (!zf) goto L_98cd35;
L_98cd2b: /* 98cd2b: mov cl, byte ptr [edi + eax + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x3u))) & 0xffu);
/* 98cd2f: mov byte ptr [esi + eax + 3], cl */
  W8((uint32_t)(esi + eax + 0x3u), (ecx & 0xffu));
/* 98cd33: jmp 0x98cd85 */
  goto L_98cd85;
L_98cd35: /* 98cd35: mov dl, byte ptr [edi + eax + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x3u))) & 0xffu);
/* 98cd39: xor ecx, ecx */
  ecx = 0;
/* 98cd3b: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 98cd3d: and dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cd40: mov byte ptr [esi + eax + 3], dl */
  W8((uint32_t)(esi + eax + 0x3u), (edx & 0xffu));
/* 98cd44: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98cd46: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98cd49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cd4b: mov dword ptr [esp + eax*4 + 0x1c], ecx */
  W32((uint32_t)(esp + eax*4 + 0x1cu), ecx);
/* 98cd4f: je 0x98cd85 */
  if (zf) goto L_98cd85;
L_98cd51: /* 98cd51: cmp dl, 0xf0 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xf0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98cd54: je 0x98cd85 */
  if (zf) goto L_98cd85;
L_98cd56: /* 98cd56: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 98cd5a: imul ebx, ebx, 7 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x7u);
  ebx = (uint32_t)r;
  }
/* 98cd5d: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98cd5f: mov ebx, ebp */
  ebx = ebp;
/* 98cd61: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cd64: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cd67: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
/* 98cd6b: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 98cd6e: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 98cd71: mov ecx, dword ptr [ecx*4 + 0xb04108] */
  ecx = R32((uint32_t)(ecx*4 + 0xb04108u));
/* 98cd78: mov dword ptr [esp + eax*4 + 0x2c], ecx */
  W32((uint32_t)(esp + eax*4 + 0x2cu), ecx);
/* 98cd7c: shl cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cd7f: add cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98cd81: mov byte ptr [esi + eax + 3], cl */
  W8((uint32_t)(esi + eax + 0x3u), (ecx & 0xffu));
L_98cd85: /* 98cd85: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98cd88: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98cd8b: jb 0x98cc05 */
  if (cf) goto L_98cc05;
L_98cd91: /* 98cd91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98cd92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98cd93: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98cd94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98cd95: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98cd98: ret  */
  esp += 4; SPILL(); return;
}
