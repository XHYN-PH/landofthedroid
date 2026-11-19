#include "recomp.h"
#include "rec_mod.h"

void f_e8ac00(void) {
  LOAD_REGS();
L_e8ac00: /* e8ac00: xor eax, eax */
  eax = 0;
/* e8ac02: xor edx, edx */
  edx = 0;
/* e8ac04: ret  */
  esp += 4; SPILL(); return;
}

void f_e8ac10(void) {
  LOAD_REGS();
L_e8ac10: /* e8ac10: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* e8ac13: ret  */
  esp += 4; SPILL(); return;
}

void f_e8ac20(void) {
  LOAD_REGS();
L_e8ac20: /* e8ac20: mov eax, 2 */
  eax = 0x2u;
/* e8ac25: ret  */
  esp += 4; SPILL(); return;
}

void f_e8ac30(void) {
  LOAD_REGS();
L_e8ac30: /* e8ac30: mov eax, 5 */
  eax = 0x5u;
/* e8ac35: ret  */
  esp += 4; SPILL(); return;
}

void f_e8ac40(void) {
  LOAD_REGS();
L_e8ac40: /* e8ac40: xor eax, eax */
  eax = 0;
/* e8ac42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8ac50(void) {
  LOAD_REGS();
L_e8ac50: /* e8ac50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8ac60(void) {
  LOAD_REGS();
L_e8ac60: /* e8ac60: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* e8ac63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8ac64: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8ac65: mov ebp, ecx */
  ebp = ecx;
/* e8ac67: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* e8ac6b: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* e8ac6e: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* e8ac70: xor ebx, ebx */
  ebx = 0;
/* e8ac72: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* e8ac76: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8ac78: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* e8ac7b: mov dword ptr [esp + 0x74], ecx */
  W32((uint32_t)(esp + 0x74u), ecx);
/* e8ac7f: fild dword ptr [esp + 0x74] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* e8ac83: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e8ac87: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e8ac8d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e8ac8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e8ac91: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e8ac94: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e8ac98: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e8ac9a: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* e8ac9d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e8aca1: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e8aca4: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e8aca8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e8acaa: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e8acad: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* e8acb1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e8acb3: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* e8acb6: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* e8acba: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* e8acbd: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* e8acc1: jle 0xe8aeb8 */
  if ((zf || sf != of)) goto L_e8aeb8;
L_e8acc7: /* e8acc7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* e8accb: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* e8accf: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e8acd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8acd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8acd7: mov edi, dword ptr [0xeae0c4] */
  edi = R32((uint32_t)(0xeae0c4u));
/* e8acdd: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* e8ace1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* e8ace5: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* e8ace9: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e8acef: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* e8acf3: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* e8acf7: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e8acfd: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* e8ad01: jmp 0xe8ad10 */
  goto L_e8ad10;
L_e8ad03: /* e8ad03: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8ad07: xor ebx, ebx */
  ebx = 0;
/* e8ad09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e8ad10: /* e8ad10: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e8ad14: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e8ad18: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e8ad1c: fadd dword ptr [0xeaed40] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed40u)));
/* e8ad22: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* e8ad26: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e8ad28: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* e8ad2c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e8ad2e: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* e8ad32: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* e8ad36: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e8ad38: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* e8ad3c: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* e8ad3f: fstp st(1) */
  STI(1) = ST0; FPOP();
/* e8ad41: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* e8ad45: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* e8ad48: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* e8ad4c: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* e8ad4f: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* e8ad53: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* e8ad55: fadd dword ptr [esp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x48u)));
/* e8ad59: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e8ad5d: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* e8ad61: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e8ad65: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* e8ad69: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* e8ad6d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e8ad71: jmp 0xe8ad75 */
  goto L_e8ad75;
L_e8ad73: /* e8ad73: xor ebx, ebx */
  ebx = 0;
L_e8ad75: /* e8ad75: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* e8ad79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ad7a: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* e8ad7e: call dword ptr [0xeae0c0] */
  esp -= 4; W32(esp, 0xe8ad84u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* e8ad84: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* e8ad88: fmul dword ptr [0xeaed3c] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed3cu)));
/* e8ad8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ad8f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e8ad92: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8ad94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ad94: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ad97: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8ad99: jge 0xe8ada1 */
  if ((sf == of)) goto L_e8ada1;
L_e8ad9b: /* e8ad9b: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e8ad9f: jmp 0xe8adb4 */
  goto L_e8adb4;
L_e8ada1: /* e8ada1: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8ada6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e8adaa: jl 0xe8adb4 */
  if ((sf != of)) goto L_e8adb4;
L_e8adac: /* e8adac: mov dword ptr [esp + 0x10], 0xff */
  W32((uint32_t)(esp + 0x10u), 0xffu);
L_e8adb4: /* e8adb4: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* e8adb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8adb9: fmul dword ptr [0xeaed3c] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed3cu)));
/* e8adbf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e8adc2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8adc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8adc4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8adc7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8adc9: jge 0xe8add4 */
  if ((sf == of)) goto L_e8add4;
L_e8adcb: /* e8adcb: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* e8add2: jmp 0xe8aded */
  goto L_e8aded;
L_e8add4: /* e8add4: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8add9: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* e8ade0: jl 0xe8aded */
  if ((sf != of)) goto L_e8aded;
L_e8ade2: /* e8ade2: mov dword ptr [esp + 0x80], 0xff */
  W32((uint32_t)(esp + 0x80u), 0xffu);
L_e8aded: /* e8aded: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* e8adf1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8adf2: fmul dword ptr [0xeaed3c] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed3cu)));
/* e8adf8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e8adfb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8adfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8adfd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ae00: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8ae02: jl 0xe8ae12 */
  if ((sf != of)) goto L_e8ae12;
L_e8ae04: /* e8ae04: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8ae09: mov ebx, eax */
  ebx = eax;
/* e8ae0b: jl 0xe8ae12 */
  if ((sf != of)) goto L_e8ae12;
L_e8ae0d: /* e8ae0d: mov ebx, 0xff */
  ebx = 0xffu;
L_e8ae12: /* e8ae12: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* e8ae16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ae17: fmul dword ptr [0xeaed3c] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed3cu)));
/* e8ae1d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e8ae20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8ae22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ae22: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ae25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8ae27: jge 0xe8ae2d */
  if ((sf == of)) goto L_e8ae2d;
L_e8ae29: /* e8ae29: xor eax, eax */
  eax = 0;
/* e8ae2b: jmp 0xe8ae39 */
  goto L_e8ae39;
L_e8ae2d: /* e8ae2d: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8ae32: jl 0xe8ae39 */
  if ((sf != of)) goto L_e8ae39;
L_e8ae34: /* e8ae34: mov eax, 0xff */
  eax = 0xffu;
L_e8ae39: /* e8ae39: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* e8ae3d: mov cl, byte ptr [esp + 0x80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x80u))) & 0xffu);
/* e8ae44: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* e8ae48: mov dl, byte ptr [esp + 0x10] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* e8ae4c: mov byte ptr [esp + 0x7e], al */
  W8((uint32_t)(esp + 0x7eu), (eax & 0xffu));
/* e8ae50: mov byte ptr [esp + 0x7c], cl */
  W8((uint32_t)(esp + 0x7cu), (ecx & 0xffu));
/* e8ae54: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e8ae58: mov byte ptr [esp + 0x7d], bl */
  W8((uint32_t)(esp + 0x7du), (ebx & 0xffu));
/* e8ae5c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* e8ae60: mov byte ptr [esp + 0x7f], dl */
  W8((uint32_t)(esp + 0x7fu), (edx & 0xffu));
/* e8ae64: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* e8ae68: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* e8ae6c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* e8ae6e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e8ae72: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e8ae76: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8ae79: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* e8ae7d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8ae7e: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* e8ae82: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e8ae86: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e8ae8a: jne 0xe8ad73 */
  if (!zf) goto L_e8ad73;
L_e8ae90: /* e8ae90: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* e8ae97: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8ae9b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8ae9f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8aea1: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e8aea5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8aea6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8aea8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e8aeac: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* e8aeb0: jl 0xe8ad03 */
  if ((sf != of)) goto L_e8ad03;
L_e8aeb6: /* e8aeb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8aeb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_e8aeb8: /* e8aeb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8aeb9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8aeba: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8aebd: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_e8aec0(void) {
  LOAD_REGS();
L_e8aec0: /* e8aec0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8aec3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8aec4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8aec5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8aec6: mov esi, ecx */
  esi = ecx;
/* e8aec8: mov dword ptr [esi], 0xeaed48 */
  W32((uint32_t)(esi), 0xeaed48u);
/* e8aece: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* e8aed6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8aeda: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* e8aedd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e8aedf: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* e8aee7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8aeeb: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* e8aeee: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* e8aef6: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e8aefa: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e8aefd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e8af05: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8af09: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* e8af0c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e8af0e: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e8af16: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e8af1a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* e8af1d: mov dword ptr [esp + 0x20], 0xc0000000 */
  W32((uint32_t)(esp + 0x20u), 0xc0000000u);
/* e8af25: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e8af29: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e8af2c: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* e8af34: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e8af38: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* e8af3b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e8af3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8af3e: mov dword ptr [esp + 0x2c], 0xc0000000 */
  W32((uint32_t)(esp + 0x2cu), 0xc0000000u);
/* e8af46: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e8af4a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* e8af4d: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* e8af55: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e8af59: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e8af5c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e8af60: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e8af63: mov ecx, 0xeaecf0 */
  ecx = 0xeaecf0u;
/* e8af68: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* e8af6b: mov dword ptr [esp + 0x28], 0xbf800000 */
  W32((uint32_t)(esp + 0x28u), 0xbf800000u);
/* e8af73: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* e8af77: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* e8af7a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8af7c: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* e8af84: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* e8af88: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8af8b: mov dword ptr [esp + 0x30], 0xbf800000 */
  W32((uint32_t)(esp + 0x30u), 0xbf800000u);
/* e8af93: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* e8af97: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8af9a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e8afa2: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* e8afa6: lea edx, [esi + 0x40] */
  edx = (uint32_t)(esi + 0x40u);
/* e8afa9: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8afab: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e8afb3: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e8afb7: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8afba: mov dword ptr [esp + 0x24], 0x40000000 */
  W32((uint32_t)(esp + 0x24u), 0x40000000u);
/* e8afc2: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* e8afc6: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8afc9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8afd1: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8afd5: lea edx, [esi + 0x4c] */
  edx = (uint32_t)(esi + 0x4cu);
/* e8afd8: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8afda: mov dword ptr [esp + 0x14], 0xc0000000 */
  W32((uint32_t)(esp + 0x14u), 0xc0000000u);
/* e8afe2: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e8afe6: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e8afee: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8aff1: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e8aff5: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* e8aff8: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8affb: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* e8affe: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8b006: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e8b00e: mov dword ptr [esp + 0x18], 0x40000000 */
  W32((uint32_t)(esp + 0x18u), 0x40000000u);
/* e8b016: mov dword ptr [esp + 0x1c], 0x40000000 */
  W32((uint32_t)(esp + 0x1cu), 0x40000000u);
/* e8b01e: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e8b026: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* e8b02e: mov dword ptr [esp + 0x28], 0xbf800000 */
  W32((uint32_t)(esp + 0x28u), 0xbf800000u);
/* e8b036: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* e8b03e: mov dword ptr [esp + 0x30], 0xbf800000 */
  W32((uint32_t)(esp + 0x30u), 0xbf800000u);
/* e8b046: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* e8b04a: lea edx, [esi + 0x60] */
  edx = (uint32_t)(esi + 0x60u);
/* e8b04d: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b04f: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* e8b053: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b056: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* e8b05a: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b05d: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* e8b061: lea edx, [esi + 0x6c] */
  edx = (uint32_t)(esi + 0x6cu);
/* e8b064: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b066: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e8b06a: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b06d: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* e8b071: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b074: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8b078: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* e8b07b: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* e8b081: lea edx, [esi + 0x78] */
  edx = (uint32_t)(esi + 0x78u);
/* e8b084: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b086: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e8b08a: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b08d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e8b091: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b094: mov dword ptr [esp + 0x28], 0xbf800000 */
  W32((uint32_t)(esp + 0x28u), 0xbf800000u);
/* e8b09c: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* e8b0a0: lea edx, [esi + 0x8c] */
  edx = (uint32_t)(esi + 0x8cu);
/* e8b0a6: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b0a8: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* e8b0b0: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* e8b0b4: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b0b7: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* e8b0bf: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* e8b0c3: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b0c6: mov dword ptr [esp + 0x1c], 0x40000000 */
  W32((uint32_t)(esp + 0x1cu), 0x40000000u);
/* e8b0ce: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* e8b0d2: lea edx, [esi + 0x98] */
  edx = (uint32_t)(esi + 0x98u);
/* e8b0d8: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b0da: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e8b0e2: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e8b0e6: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b0e9: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* e8b0f1: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* e8b0f5: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b0f8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8b100: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8b104: lea edx, [esi + 0xa4] */
  edx = (uint32_t)(esi + 0xa4u);
/* e8b10a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b10c: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e8b114: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e8b118: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b11b: mov dword ptr [esp + 0x18], 0xc0000000 */
  W32((uint32_t)(esp + 0x18u), 0xc0000000u);
/* e8b123: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e8b127: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b12a: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* e8b130: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* e8b136: mov dword ptr [esp + 0x28], 0xbf800000 */
  W32((uint32_t)(esp + 0x28u), 0xbf800000u);
/* e8b13e: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* e8b142: lea edx, [esi + 0xb8] */
  edx = (uint32_t)(esi + 0xb8u);
/* e8b148: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b14a: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* e8b152: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* e8b156: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b159: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* e8b161: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* e8b165: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b168: mov dword ptr [esp + 0x1c], 0x40000000 */
  W32((uint32_t)(esp + 0x1cu), 0x40000000u);
/* e8b170: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* e8b174: lea edx, [esi + 0xc4] */
  edx = (uint32_t)(esi + 0xc4u);
/* e8b17a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b17c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e8b184: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e8b188: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b18b: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* e8b193: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* e8b197: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b19a: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8b1a2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8b1a6: mov dword ptr [esp + 0x14], 0xc0000000 */
  W32((uint32_t)(esp + 0x14u), 0xc0000000u);
/* e8b1ae: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e8b1b6: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* e8b1bc: lea edx, [esi + 0xd0] */
  edx = (uint32_t)(esi + 0xd0u);
/* e8b1c2: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* e8b1c4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e8b1c8: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* e8b1cb: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* e8b1cf: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* e8b1d2: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* e8b1d8: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* e8b1de: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* e8b1e6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e8b1ea: lea ecx, [esi + 0xe4] */
  ecx = (uint32_t)(esi + 0xe4u);
/* e8b1f0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e8b1f2: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* e8b1fa: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e8b1fe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* e8b201: mov dword ptr [esp + 0x30], 0xbf800000 */
  W32((uint32_t)(esp + 0x30u), 0xbf800000u);
/* e8b209: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e8b20d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e8b210: mov dword ptr [esp + 0x1c], 0xc0000000 */
  W32((uint32_t)(esp + 0x1cu), 0xc0000000u);
/* e8b218: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e8b21c: lea ecx, [esi + 0xf0] */
  ecx = (uint32_t)(esi + 0xf0u);
/* e8b222: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e8b224: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e8b22c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e8b230: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* e8b233: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* e8b23b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e8b23f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e8b242: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8b24a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8b24e: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* e8b254: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e8b256: mov dword ptr [esp + 0x14], 0xc0000000 */
  W32((uint32_t)(esp + 0x14u), 0xc0000000u);
/* e8b25e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e8b262: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* e8b265: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* e8b26b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e8b273: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8b277: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e8b27a: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* e8b280: mov ebp, dword ptr [0xeae0a4] */
  ebp = R32((uint32_t)(0xeae0a4u));
/* e8b286: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* e8b289: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* e8b28c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b28e: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e8b293: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8b294: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8b295: call 0xeac560 */
  esp -= 4; W32(esp, 0xe8b29au); SPILL(); f_eac560(); if (g_unwind) return; RELOAD();
/* e8b29a: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* e8b29f: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* e8b2a2: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* e8b2a5: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* e8b2a8: mov ecx, dword ptr [0xeae0a4] */
  ecx = R32((uint32_t)(0xeae0a4u));
/* e8b2ae: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* e8b2b1: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* e8b2b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8b2b5: mov dword ptr [esi + 0x110], eax */
  W32((uint32_t)(esi + 0x110u), eax);
/* e8b2bb: mov dword ptr [esi + 0x114], edx */
  W32((uint32_t)(esi + 0x114u), edx);
/* e8b2c1: mov dword ptr [esi + 0x118], 1 */
  W32((uint32_t)(esi + 0x118u), 0x1u);
/* e8b2cb: mov eax, esi */
  eax = esi;
/* e8b2cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8b2ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8b2cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8b2d0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b2d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8b2e0(void) {
  LOAD_REGS();
L_e8b2e0: /* e8b2e0: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* e8b2e6: mov edx, dword ptr [ecx + 0x114] */
  edx = R32((uint32_t)(ecx + 0x114u));
/* e8b2ec: ret  */
  esp += 4; SPILL(); return;
}

void f_e8b2f0(void) {
  LOAD_REGS();
L_e8b2f0: /* e8b2f0: mov eax, dword ptr [ecx + 0x118] */
  eax = R32((uint32_t)(ecx + 0x118u));
/* e8b2f6: ret  */
  esp += 4; SPILL(); return;
}

void f_e8b300(void) {
  LOAD_REGS();
L_e8b300: /* e8b300: mov eax, dword ptr [ecx + 0x10c] */
  eax = R32((uint32_t)(ecx + 0x10cu));
/* e8b306: ret  */
  esp += 4; SPILL(); return;
}

void f_e8b310(void) {
  LOAD_REGS();
L_e8b310: /* e8b310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e8b314: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8b317: ja 0xe8b34d */
  if ((!cf && !zf)) goto L_e8b34d;
L_e8b319: /* e8b319: jmp dword ptr [eax*4 + 0xe8b354] */
  switch (R32((uint32_t)(eax*4 + 0xe8b354u))) {
    case 0xe8b320u: goto L_e8b320;
    case 0xe8b326u: goto L_e8b326;
    case 0xe8b32cu: goto L_e8b32c;
    case 0xe8b332u: goto L_e8b332;
    case 0xe8b33bu: goto L_e8b33b;
    case 0xe8b344u: goto L_e8b344;
    default: guest_badjump(0xe8b319, R32((uint32_t)(eax*4 + 0xe8b354u))); return;
  }
L_e8b320: /* e8b320: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* e8b323: ret 4 */
  esp += 8; SPILL(); return;
L_e8b326: /* e8b326: lea eax, [ecx + 0x30] */
  eax = (uint32_t)(ecx + 0x30u);
/* e8b329: ret 4 */
  esp += 8; SPILL(); return;
L_e8b32c: /* e8b32c: lea eax, [ecx + 0x5c] */
  eax = (uint32_t)(ecx + 0x5cu);
/* e8b32f: ret 4 */
  esp += 8; SPILL(); return;
L_e8b332: /* e8b332: lea eax, [ecx + 0x88] */
  eax = (uint32_t)(ecx + 0x88u);
/* e8b338: ret 4 */
  esp += 8; SPILL(); return;
L_e8b33b: /* e8b33b: lea eax, [ecx + 0xb4] */
  eax = (uint32_t)(ecx + 0xb4u);
/* e8b341: ret 4 */
  esp += 8; SPILL(); return;
L_e8b344: /* e8b344: lea eax, [ecx + 0xe0] */
  eax = (uint32_t)(ecx + 0xe0u);
/* e8b34a: ret 4 */
  esp += 8; SPILL(); return;
L_e8b34d: /* e8b34d: xor eax, eax */
  eax = 0;
/* e8b34f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8b370(void) {
  LOAD_REGS();
L_e8b370: /* e8b370: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e8b373: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b375: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8b376: je 0xe8b38c */
  if (zf) goto L_e8b38c;
L_e8b378: /* e8b378: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8b37a: mov esi, dword ptr [edx + eax*4 - 4] */
  esi = R32((uint32_t)(edx + eax*4 + 0xfffffffcu));
/* e8b37e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b380: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e8b381: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b384: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe8b38au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e8b38a: jmp 0xe8b3b2 */
  goto L_e8b3b2;
L_e8b38c: /* e8b38c: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e8b391: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8b393: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8b395: push 0xeaefec */
  { uint32_t v = 0xeaefecu; esp -= 4; W32(esp, v); }
/* e8b39a: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e8b39f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe8b3a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b3a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b3a3: je 0xe8b3b0 */
  if (zf) goto L_e8b3b0;
L_e8b3a5: /* e8b3a5: mov ecx, eax */
  ecx = eax;
/* e8b3a7: call 0xe82900 */
  esp -= 4; W32(esp, 0xe8b3acu); SPILL(); f_e82900(); if (g_unwind) return; RELOAD();
/* e8b3ac: mov esi, eax */
  esi = eax;
/* e8b3ae: jmp 0xe8b3b2 */
  goto L_e8b3b2;
L_e8b3b0: /* e8b3b0: xor esi, esi */
  esi = 0;
L_e8b3b2: /* e8b3b2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e8b3b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b3b8: je 0xe8b3c9 */
  if (zf) goto L_e8b3c9;
L_e8b3ba: /* e8b3ba: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* e8b3bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b3c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8b3c1: call 0xe81020 */
  esp -= 4; W32(esp, 0xe8b3c6u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e8b3c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8b3c9: /* e8b3c9: mov dword ptr [esi + 0x458], 1 */
  W32((uint32_t)(esi + 0x458u), 0x1u);
/* e8b3d3: mov eax, esi */
  eax = esi;
/* e8b3d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8b3d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8b3e0(void) {
  LOAD_REGS();
L_e8b3e0: /* e8b3e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8b3e1: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* e8b3e5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e8b3e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8b3e8: mov esi, ecx */
  esi = ecx;
/* e8b3ea: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e8b3ed: mov edx, dword ptr [ecx + 0x41e4] */
  edx = R32((uint32_t)(ecx + 0x41e4u));
/* e8b3f3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e8b3f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8b3f8: add edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8b3fa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8b3fc: jl 0xe8b599 */
  if ((sf != of)) goto L_e8b599;
L_e8b402: /* e8b402: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e8b406: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b408: je 0xe8b416 */
  if (zf) goto L_e8b416;
L_e8b40a: /* e8b40a: mov cl, byte ptr [esp + 0x78] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x78u))) & 0xffu);
/* e8b40e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8b410: jne 0xe8b5fc */
  if (!zf) goto L_e8b5fc;
L_e8b416: /* e8b416: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* e8b41d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b41f: jne 0xe8b5fc */
  if (!zf) goto L_e8b5fc;
L_e8b425: /* e8b425: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b42b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e8b42f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e8b431: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8b438: mov dword ptr [edx + 0x34], eax */
  W32((uint32_t)(edx + 0x34u), eax);
/* e8b43b: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* e8b43d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b43e: lea eax, [esi + 0x2b010] */
  eax = (uint32_t)(esi + 0x2b010u);
/* e8b444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b445: lea ecx, [esi + 0x2b470] */
  ecx = (uint32_t)(esi + 0x2b470u);
/* e8b44b: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* e8b451: call 0xe8b370 */
  esp -= 4; W32(esp, 0xe8b456u); SPILL(); f_e8b370(); if (g_unwind) return; RELOAD();
/* e8b456: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e8b458: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b45e: mov dword ptr [edx + ecx*4 + 0x52c], eax */
  W32((uint32_t)(edx + ecx*4 + 0x52cu), eax);
/* e8b465: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8b467: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b46d: mov edx, dword ptr [ecx + eax*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8b474: mov dword ptr [edx + 0x14], 0 */
  W32((uint32_t)(edx + 0x14u), 0x0u);
/* e8b47b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e8b47d: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b483: imul edx, edx, 0x84 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x84u);
  edx = (uint32_t)r;
  }
/* e8b489: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8b48b: mov eax, dword ptr [ecx + eax*4 + 0x52c] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8b492: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e8b496: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b497: lea ebp, [eax + edx + 0x38] */
  ebp = (uint32_t)(eax + edx + 0x38u);
/* e8b49b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b49c: mov ecx, esi */
  ecx = esi;
/* e8b49e: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8b4a3u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8b4a3: mov ecx, 2 */
  ecx = 0x2u;
/* e8b4a8: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* e8b4ab: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* e8b4ae: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* e8b4b1: mov dword ptr [ebp + 0x2c], 0 */
  W32((uint32_t)(ebp + 0x2cu), 0x0u);
/* e8b4b8: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* e8b4bb: mov eax, dword ptr [edx + 0x413c] */
  eax = R32((uint32_t)(edx + 0x413cu));
/* e8b4c1: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e8b4c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b4c6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b4c7: mov ecx, esi */
  ecx = esi;
/* e8b4c9: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* e8b4cc: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8b4d1u); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8b4d1: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
/* e8b4d3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e8b4d5: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e8b4db: mov ecx, dword ptr [eax + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8b4e2: mov dword ptr [ecx + 0x24], 9 */
  W32((uint32_t)(ecx + 0x24u), 0x9u);
/* e8b4e9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e8b4eb: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e8b4f1: mov ecx, dword ptr [eax + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8b4f8: mov dword ptr [ecx + 0x28], 3 */
  W32((uint32_t)(ecx + 0x28u), 0x3u);
/* e8b4ff: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e8b501: mov eax, dword ptr [esi + 0x2b00c] */
  eax = R32((uint32_t)(esi + 0x2b00cu));
/* e8b507: mov ecx, dword ptr [eax + edx*4 + 0x52c] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x52cu));
/* e8b50e: mov eax, 1 */
  eax = 0x1u;
/* e8b513: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* e8b516: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b51c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e8b51e: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8b525: mov dword ptr [edx + 0x14], 0 */
  W32((uint32_t)(edx + 0x14u), 0x0u);
/* e8b52c: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b532: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e8b534: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8b53b: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* e8b53e: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b544: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e8b546: mov edx, dword ptr [ecx + edx*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x52cu));
/* e8b54d: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* e8b550: mov ecx, dword ptr [esi + 0x2b00c] */
  ecx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b556: mov al, 0x7f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* e8b558: mov byte ptr [esp + 0x18], al */
  W8((uint32_t)(esp + 0x18u), (eax & 0xffu));
/* e8b55c: mov byte ptr [esp + 0x19], al */
  W8((uint32_t)(esp + 0x19u), (eax & 0xffu));
/* e8b560: mov byte ptr [esp + 0x1a], al */
  W8((uint32_t)(esp + 0x1au), (eax & 0xffu));
/* e8b564: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8b566: mov edx, dword ptr [ecx + eax*4 + 0x52c] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x52cu));
/* e8b56d: mov byte ptr [esp + 0x1b], 0 */
  W8((uint32_t)(esp + 0x1bu), 0x0u);
/* e8b572: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e8b576: mov dword ptr [edx + 0x30], eax */
  W32((uint32_t)(edx + 0x30u), eax);
/* e8b579: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e8b57b: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b581: mov eax, dword ptr [edx + ecx*4 + 0x52c] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8b588: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e8b58f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8b590: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8b591: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8b592: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* e8b595: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8b596: ret 0x98 */
  esp += 156; SPILL(); return;
L_e8b599: /* e8b599: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e8b59d: imul eax, eax, 0x84 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x84u);
  eax = (uint32_t)r;
  }
/* e8b5a3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e8b5a5: mov edx, dword ptr [esi + 0x2b00c] */
  edx = R32((uint32_t)(esi + 0x2b00cu));
/* e8b5ab: mov ecx, dword ptr [edx + ecx*4 + 0x52c] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0x52cu));
/* e8b5b2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8b5b6: lea edi, [ecx + eax + 0x38] */
  edi = (uint32_t)(ecx + eax + 0x38u);
/* e8b5ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b5bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8b5bc: mov ecx, esi */
  ecx = esi;
/* e8b5be: call 0xe87c50 */
  esp -= 4; W32(esp, 0xe8b5c3u); SPILL(); f_e87c50(); if (g_unwind) return; RELOAD();
/* e8b5c3: mov ecx, 2 */
  ecx = 0x2u;
/* e8b5c8: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* e8b5cb: mov eax, 1 */
  eax = 0x1u;
/* e8b5d0: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* e8b5d3: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
/* e8b5d6: mov eax, dword ptr [0xeba050] */
  eax = R32((uint32_t)(0xeba050u));
/* e8b5db: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* e8b5de: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* e8b5e1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e8b5e4: mov edx, dword ptr [ecx + 0x413c] */
  edx = R32((uint32_t)(ecx + 0x413cu));
/* e8b5ea: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* e8b5ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b5ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8b5f0: mov ecx, esi */
  ecx = esi;
/* e8b5f2: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* e8b5f5: call 0xe88140 */
  esp -= 4; W32(esp, 0xe8b5fau); SPILL(); f_e88140(); if (g_unwind) return; RELOAD();
/* e8b5fa: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
L_e8b5fc: /* e8b5fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8b5fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8b5fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8b5ff: ret 0x98 */
  esp += 156; SPILL(); return;
}

void f_e8b610(void) {
  LOAD_REGS();
L_e8b610: /* e8b610: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b611: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8b612: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8b614: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8b615: mov edi, dword ptr [0xeae19c] */
  edi = R32((uint32_t)(0xeae19cu));
/* e8b61b: mov esi, ecx */
  esi = ecx;
/* e8b61d: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* e8b620: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b622: push 0xeafac0 */
  { uint32_t v = 0xeafac0u; esp -= 4; W32(esp, v); }
/* e8b627: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b62b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b62du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b62d: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8b632: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8b634: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8b638: mov eax, dword ptr [0xeae198] */
  eax = R32((uint32_t)(0xeae198u));
/* e8b63d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b63f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b641: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b642: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b644: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b646: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b647: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8b648: mov ebx, dword ptr [0xeae01c] */
  ebx = R32((uint32_t)(0xeae01cu));
/* e8b64e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b64f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b651u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b651: mov ebp, eax */
  ebp = eax;
/* e8b653: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b656: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b658: je 0xe8b67a */
  if (zf) goto L_e8b67a;
L_e8b65a: /* e8b65a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b65f: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b664: push 0x40d8 */
  { uint32_t v = 0x40d8u; esp -= 4; W32(esp, v); }
/* e8b669: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b66b: mov ecx, ebp */
  ecx = ebp;
/* e8b66d: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b673u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b673: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b67a: /* e8b67a: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b67d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b67f: push 0xeaf9d8 */
  { uint32_t v = 0xeaf9d8u; esp -= 4; W32(esp, v); }
/* e8b684: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b688: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b68au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b68a: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8b690: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8b692: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8b696: mov ecx, dword ptr [0xeae198] */
  ecx = R32((uint32_t)(0xeae198u));
/* e8b69c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b69e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b6a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b6a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b6a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b6a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b6a6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b6a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b6a8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b6aa: mov ebp, eax */
  ebp = eax;
/* e8b6ac: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b6af: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b6b1: je 0xe8b6d3 */
  if (zf) goto L_e8b6d3;
L_e8b6b3: /* e8b6b3: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b6b8: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b6bd: push 0x40dc */
  { uint32_t v = 0x40dcu; esp -= 4; W32(esp, v); }
/* e8b6c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b6c4: mov ecx, ebp */
  ecx = ebp;
/* e8b6c6: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b6ccu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b6cc: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b6d3: /* e8b6d3: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b6d6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b6d8: push 0xeaf9bc */
  { uint32_t v = 0xeaf9bcu; esp -= 4; W32(esp, v); }
/* e8b6dd: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b6e1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b6e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b6e3: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8b6e9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8b6eb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8b6ef: mov edx, dword ptr [0xeae198] */
  edx = R32((uint32_t)(0xeae198u));
/* e8b6f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b6f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b6f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b6fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b6fc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b6fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b6ff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b700: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b701: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b703: mov ebp, eax */
  ebp = eax;
/* e8b705: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b708: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b70a: je 0xe8b72c */
  if (zf) goto L_e8b72c;
L_e8b70c: /* e8b70c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b711: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b716: push 0x40c8 */
  { uint32_t v = 0x40c8u; esp -= 4; W32(esp, v); }
/* e8b71b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b71d: mov ecx, ebp */
  ecx = ebp;
/* e8b71f: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b725u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b725: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b72c: /* e8b72c: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b72f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b731: push 0xeaf9a0 */
  { uint32_t v = 0xeaf9a0u; esp -= 4; W32(esp, v); }
/* e8b736: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b73a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b73cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b73c: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8b741: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8b743: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8b747: mov eax, dword ptr [0xeae198] */
  eax = R32((uint32_t)(0xeae198u));
/* e8b74c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b74e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b750: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b751: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b753: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b755: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b756: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b758: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b75au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b75a: mov ebp, eax */
  ebp = eax;
/* e8b75c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b75f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b761: je 0xe8b783 */
  if (zf) goto L_e8b783;
L_e8b763: /* e8b763: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b768: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b76d: push 0x40cc */
  { uint32_t v = 0x40ccu; esp -= 4; W32(esp, v); }
/* e8b772: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b774: mov ecx, ebp */
  ecx = ebp;
/* e8b776: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b77cu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b77c: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b783: /* e8b783: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b786: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b788: push 0xeaf98c */
  { uint32_t v = 0xeaf98cu; esp -= 4; W32(esp, v); }
/* e8b78d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b791: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b793u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b793: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8b799: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8b79b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8b79f: mov ecx, dword ptr [0xeae198] */
  ecx = R32((uint32_t)(0xeae198u));
/* e8b7a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b7a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b7a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b7aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b7ac: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b7ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b7af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b7b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b7b1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b7b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b7b3: mov ebp, eax */
  ebp = eax;
/* e8b7b5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b7b8: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b7ba: je 0xe8b7dc */
  if (zf) goto L_e8b7dc;
L_e8b7bc: /* e8b7bc: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b7c1: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b7c6: push 0x40d4 */
  { uint32_t v = 0x40d4u; esp -= 4; W32(esp, v); }
/* e8b7cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b7cd: mov ecx, ebp */
  ecx = ebp;
/* e8b7cf: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b7d5u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b7d5: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b7dc: /* e8b7dc: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b7df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b7e1: push 0xeaf964 */
  { uint32_t v = 0xeaf964u; esp -= 4; W32(esp, v); }
/* e8b7e6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b7ea: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b7ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b7ec: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8b7f2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8b7f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8b7f8: mov edx, dword ptr [0xeae198] */
  edx = R32((uint32_t)(0xeae198u));
/* e8b7fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b800: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b803: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b805: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b808: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b809: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b80a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b80cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b80c: mov ebp, eax */
  ebp = eax;
/* e8b80e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b811: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b813: je 0xe8b835 */
  if (zf) goto L_e8b835;
L_e8b815: /* e8b815: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b81a: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b81f: push 0x40f4 */
  { uint32_t v = 0x40f4u; esp -= 4; W32(esp, v); }
/* e8b824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b826: mov ecx, ebp */
  ecx = ebp;
/* e8b828: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b82eu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b82e: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b835: /* e8b835: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b838: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b83a: push 0xeaf94c */
  { uint32_t v = 0xeaf94cu; esp -= 4; W32(esp, v); }
/* e8b83f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b843: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b845u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b845: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8b84a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8b84c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8b850: mov eax, dword ptr [0xeae198] */
  eax = R32((uint32_t)(0xeae198u));
/* e8b855: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b857: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b85a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b85c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b85e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b85f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b861: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b863: mov ebp, eax */
  ebp = eax;
/* e8b865: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b868: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b86a: je 0xe8b88c */
  if (zf) goto L_e8b88c;
L_e8b86c: /* e8b86c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b871: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b876: push 0x40e0 */
  { uint32_t v = 0x40e0u; esp -= 4; W32(esp, v); }
/* e8b87b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b87d: mov ecx, ebp */
  ecx = ebp;
/* e8b87f: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b885u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b885: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b88c: /* e8b88c: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b88f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b891: push 0xeaf92c */
  { uint32_t v = 0xeaf92cu; esp -= 4; W32(esp, v); }
/* e8b896: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b89a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b89cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b89c: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8b8a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8b8a4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8b8a8: mov ecx, dword ptr [0xeae198] */
  ecx = R32((uint32_t)(0xeae198u));
/* e8b8ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b8b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b8b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b8b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b8b5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b8b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b8b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b8b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b8ba: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b8bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b8bc: mov ebp, eax */
  ebp = eax;
/* e8b8be: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b8c1: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b8c3: je 0xe8b8e5 */
  if (zf) goto L_e8b8e5;
L_e8b8c5: /* e8b8c5: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b8ca: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b8cf: push 0x40f8 */
  { uint32_t v = 0x40f8u; esp -= 4; W32(esp, v); }
/* e8b8d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b8d6: mov ecx, ebp */
  ecx = ebp;
/* e8b8d8: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b8deu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b8de: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b8e5: /* e8b8e5: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b8e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b8ea: push 0xeaf914 */
  { uint32_t v = 0xeaf914u; esp -= 4; W32(esp, v); }
/* e8b8ef: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b8f3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b8f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b8f5: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8b8fb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8b8fd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8b901: mov edx, dword ptr [0xeae198] */
  edx = R32((uint32_t)(0xeae198u));
/* e8b907: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b909: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b90b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b90c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b90e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b911: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b912: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b913: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b915: mov ebp, eax */
  ebp = eax;
/* e8b917: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b91a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b91c: je 0xe8b93e */
  if (zf) goto L_e8b93e;
L_e8b91e: /* e8b91e: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b923: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b928: push 0x40fc */
  { uint32_t v = 0x40fcu; esp -= 4; W32(esp, v); }
/* e8b92d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b92f: mov ecx, ebp */
  ecx = ebp;
/* e8b931: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b937u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b937: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b93e: /* e8b93e: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b941: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b943: push 0xeaf8fc */
  { uint32_t v = 0xeaf8fcu; esp -= 4; W32(esp, v); }
/* e8b948: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b94c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b94eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b94e: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8b953: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8b955: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8b959: mov eax, dword ptr [0xeae198] */
  eax = R32((uint32_t)(0xeae198u));
/* e8b95e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b962: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b963: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b965: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b968: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b96a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b96cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b96c: mov ebp, eax */
  ebp = eax;
/* e8b96e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b971: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b973: je 0xe8b995 */
  if (zf) goto L_e8b995;
L_e8b975: /* e8b975: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b97a: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b97f: push 0x4114 */
  { uint32_t v = 0x4114u; esp -= 4; W32(esp, v); }
/* e8b984: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b986: mov ecx, ebp */
  ecx = ebp;
/* e8b988: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b98eu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b98e: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b995: /* e8b995: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b998: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b99a: push 0xeaf8d8 */
  { uint32_t v = 0xeaf8d8u; esp -= 4; W32(esp, v); }
/* e8b99f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b9a3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b9a5: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8b9ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8b9ad: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8b9b1: mov ecx, dword ptr [0xeae198] */
  ecx = R32((uint32_t)(0xeae198u));
/* e8b9b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b9b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b9bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8b9bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b9be: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8b9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8b9c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8b9c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8b9c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8b9c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b9c5: mov ebp, eax */
  ebp = eax;
/* e8b9c7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8b9ca: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8b9cc: je 0xe8b9ee */
  if (zf) goto L_e8b9ee;
L_e8b9ce: /* e8b9ce: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8b9d3: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8b9d8: push 0x4110 */
  { uint32_t v = 0x4110u; esp -= 4; W32(esp, v); }
/* e8b9dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8b9df: mov ecx, ebp */
  ecx = ebp;
/* e8b9e1: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8b9e7u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8b9e7: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8b9ee: /* e8b9ee: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8b9f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8b9f3: push 0xeaf8b0 */
  { uint32_t v = 0xeaf8b0u; esp -= 4; W32(esp, v); }
/* e8b9f8: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8b9fc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8b9feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8b9fe: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8ba04: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8ba06: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8ba0a: mov edx, dword ptr [0xeae198] */
  edx = R32((uint32_t)(0xeae198u));
/* e8ba10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ba15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba17: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8ba19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ba1a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8ba1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ba1c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8ba1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ba1e: mov ebp, eax */
  ebp = eax;
/* e8ba20: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ba23: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ba25: je 0xe8ba47 */
  if (zf) goto L_e8ba47;
L_e8ba27: /* e8ba27: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8ba2c: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8ba31: push 0x4118 */
  { uint32_t v = 0x4118u; esp -= 4; W32(esp, v); }
/* e8ba36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba38: mov ecx, ebp */
  ecx = ebp;
/* e8ba3a: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8ba40u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8ba40: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8ba47: /* e8ba47: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8ba4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ba4c: push 0xeaf894 */
  { uint32_t v = 0xeaf894u; esp -= 4; W32(esp, v); }
/* e8ba51: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8ba55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8ba57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ba57: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8ba5c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ba5e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ba62: mov eax, dword ptr [0xeae198] */
  eax = R32((uint32_t)(0xeae198u));
/* e8ba67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ba6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba6e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8ba70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ba71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8ba72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ba73: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8ba75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ba75: mov ebp, eax */
  ebp = eax;
/* e8ba77: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ba7a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ba7c: je 0xe8ba9e */
  if (zf) goto L_e8ba9e;
L_e8ba7e: /* e8ba7e: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8ba83: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8ba88: push 0x411c */
  { uint32_t v = 0x411cu; esp -= 4; W32(esp, v); }
/* e8ba8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ba8f: mov ecx, ebp */
  ecx = ebp;
/* e8ba91: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8ba97u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8ba97: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8ba9e: /* e8ba9e: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8baa1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8baa3: push 0xeaf85c */
  { uint32_t v = 0xeaf85cu; esp -= 4; W32(esp, v); }
/* e8baa8: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8baac: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8baaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8baae: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8bab4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8bab6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8baba: mov ecx, dword ptr [0xeae198] */
  ecx = R32((uint32_t)(0xeae198u));
/* e8bac0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bac2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bac4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bac5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bac7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8baca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bacb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bacc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8baceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bace: mov ebp, eax */
  ebp = eax;
/* e8bad0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bad3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bad5: je 0xe8baf7 */
  if (zf) goto L_e8baf7;
L_e8bad7: /* e8bad7: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8badc: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bae1: push 0x4120 */
  { uint32_t v = 0x4120u; esp -= 4; W32(esp, v); }
/* e8bae6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bae8: mov ecx, ebp */
  ecx = ebp;
/* e8baea: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8baf0u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8baf0: mov dword ptr [ebp], 0xeaf9f8 */
  W32((uint32_t)(ebp), 0xeaf9f8u);
L_e8baf7: /* e8baf7: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bafa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bafc: push 0xeaf840 */
  { uint32_t v = 0xeaf840u; esp -= 4; W32(esp, v); }
/* e8bb01: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bb05: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bb07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bb07: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8bb0d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8bb0f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8bb13: mov edx, dword ptr [0xeae190] */
  edx = R32((uint32_t)(0xeae190u));
/* e8bb19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bb1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb20: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bb22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bb23: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bb24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bb25: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bb27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bb27: mov ebp, eax */
  ebp = eax;
/* e8bb29: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bb2c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bb2e: je 0xe8bb50 */
  if (zf) goto L_e8bb50;
L_e8bb30: /* e8bb30: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bb35: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bb3a: push 0x412c */
  { uint32_t v = 0x412cu; esp -= 4; W32(esp, v); }
/* e8bb3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb41: mov ecx, ebp */
  ecx = ebp;
/* e8bb43: call dword ptr [0xeae18c] */
  esp -= 4; W32(esp, 0xe8bb49u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bb49: mov dword ptr [ebp], 0xeaf788 */
  W32((uint32_t)(ebp), 0xeaf788u);
L_e8bb50: /* e8bb50: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bb53: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bb55: push 0xeaf758 */
  { uint32_t v = 0xeaf758u; esp -= 4; W32(esp, v); }
/* e8bb5a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bb5e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bb60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bb60: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8bb65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8bb67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8bb6b: mov eax, dword ptr [0xeae190] */
  eax = R32((uint32_t)(0xeae190u));
/* e8bb70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bb75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb77: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bb79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bb7a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bb7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bb7c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bb7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bb7e: mov ebp, eax */
  ebp = eax;
/* e8bb80: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bb83: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bb85: je 0xe8bba7 */
  if (zf) goto L_e8bba7;
L_e8bb87: /* e8bb87: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bb8c: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bb91: push 0x4134 */
  { uint32_t v = 0x4134u; esp -= 4; W32(esp, v); }
/* e8bb96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bb98: mov ecx, ebp */
  ecx = ebp;
/* e8bb9a: call dword ptr [0xeae18c] */
  esp -= 4; W32(esp, 0xe8bba0u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bba0: mov dword ptr [ebp], 0xeaf788 */
  W32((uint32_t)(ebp), 0xeaf788u);
L_e8bba7: /* e8bba7: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bbaa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bbac: push 0xeaf730 */
  { uint32_t v = 0xeaf730u; esp -= 4; W32(esp, v); }
/* e8bbb1: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bbb5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bbb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bbb7: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8bbbd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8bbbf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8bbc3: mov ecx, dword ptr [0xeae190] */
  ecx = R32((uint32_t)(0xeae190u));
/* e8bbc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bbcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bbcd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bbce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bbd0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bbd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bbd3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bbd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bbd5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bbd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bbd7: mov ebp, eax */
  ebp = eax;
/* e8bbd9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bbdc: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bbde: je 0xe8bc00 */
  if (zf) goto L_e8bc00;
L_e8bbe0: /* e8bbe0: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bbe5: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bbea: push 0x4148 */
  { uint32_t v = 0x4148u; esp -= 4; W32(esp, v); }
/* e8bbef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bbf1: mov ecx, ebp */
  ecx = ebp;
/* e8bbf3: call dword ptr [0xeae18c] */
  esp -= 4; W32(esp, 0xe8bbf9u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bbf9: mov dword ptr [ebp], 0xeaf788 */
  W32((uint32_t)(ebp), 0xeaf788u);
L_e8bc00: /* e8bc00: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bc03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bc05: push 0xeaf70c */
  { uint32_t v = 0xeaf70cu; esp -= 4; W32(esp, v); }
/* e8bc0a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bc0e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bc10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bc10: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8bc16: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8bc18: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8bc1c: mov edx, dword ptr [0xeae190] */
  edx = R32((uint32_t)(0xeae190u));
/* e8bc22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bc24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bc26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bc27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bc29: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bc2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bc2c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bc2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bc2e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bc30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bc30: mov ebp, eax */
  ebp = eax;
/* e8bc32: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bc35: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bc37: je 0xe8bc59 */
  if (zf) goto L_e8bc59;
L_e8bc39: /* e8bc39: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bc3e: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bc43: push 0x4138 */
  { uint32_t v = 0x4138u; esp -= 4; W32(esp, v); }
/* e8bc48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bc4a: mov ecx, ebp */
  ecx = ebp;
/* e8bc4c: call dword ptr [0xeae18c] */
  esp -= 4; W32(esp, 0xe8bc52u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bc52: mov dword ptr [ebp], 0xeaf788 */
  W32((uint32_t)(ebp), 0xeaf788u);
L_e8bc59: /* e8bc59: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bc5c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bc5e: push 0xeaf6e8 */
  { uint32_t v = 0xeaf6e8u; esp -= 4; W32(esp, v); }
/* e8bc63: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bc67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bc69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bc69: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8bc6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8bc70: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8bc74: mov eax, dword ptr [0xeae188] */
  eax = R32((uint32_t)(0xeae188u));
/* e8bc79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bc7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bc7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bc7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bc80: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bc82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bc83: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bc85: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bc87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bc87: mov ebp, eax */
  ebp = eax;
/* e8bc89: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bc8c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bc8e: je 0xe8bcb0 */
  if (zf) goto L_e8bcb0;
L_e8bc90: /* e8bc90: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bc95: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bc9a: push 0x413c */
  { uint32_t v = 0x413cu; esp -= 4; W32(esp, v); }
/* e8bc9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bca1: mov ecx, ebp */
  ecx = ebp;
/* e8bca3: call dword ptr [0xeae184] */
  esp -= 4; W32(esp, 0xe8bca9u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bca9: mov dword ptr [ebp], 0xeaf630 */
  W32((uint32_t)(ebp), 0xeaf630u);
L_e8bcb0: /* e8bcb0: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bcb3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bcb5: push 0xeaf60c */
  { uint32_t v = 0xeaf60cu; esp -= 4; W32(esp, v); }
/* e8bcba: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bcbe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bcc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bcc0: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8bcc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8bcc8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8bccc: mov ecx, dword ptr [0xeae188] */
  ecx = R32((uint32_t)(0xeae188u));
/* e8bcd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bcd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bcd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bcd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bcd9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bcdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bcdc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bcdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bcde: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bce0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bce0: mov ebp, eax */
  ebp = eax;
/* e8bce2: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bce5: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bce7: je 0xe8bd09 */
  if (zf) goto L_e8bd09;
L_e8bce9: /* e8bce9: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bcee: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bcf3: push 0x4140 */
  { uint32_t v = 0x4140u; esp -= 4; W32(esp, v); }
/* e8bcf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bcfa: mov ecx, ebp */
  ecx = ebp;
/* e8bcfc: call dword ptr [0xeae184] */
  esp -= 4; W32(esp, 0xe8bd02u); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bd02: mov dword ptr [ebp], 0xeaf630 */
  W32((uint32_t)(ebp), 0xeaf630u);
L_e8bd09: /* e8bd09: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bd0c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bd0e: push 0xeaf5e8 */
  { uint32_t v = 0xeaf5e8u; esp -= 4; W32(esp, v); }
/* e8bd13: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bd17: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bd19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bd19: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8bd1f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8bd21: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8bd25: mov edx, dword ptr [0xeae188] */
  edx = R32((uint32_t)(0xeae188u));
/* e8bd2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bd2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bd2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bd30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bd32: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bd34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bd35: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bd36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bd37: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bd39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bd39: mov ebp, eax */
  ebp = eax;
/* e8bd3b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bd3e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bd40: je 0xe8bd62 */
  if (zf) goto L_e8bd62;
L_e8bd42: /* e8bd42: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bd47: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bd4c: push 0x4144 */
  { uint32_t v = 0x4144u; esp -= 4; W32(esp, v); }
/* e8bd51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bd53: mov ecx, ebp */
  ecx = ebp;
/* e8bd55: call dword ptr [0xeae184] */
  esp -= 4; W32(esp, 0xe8bd5bu); SPILL(); f_4e24be(); if (g_unwind) return; /* Core!??0UFloatProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bd5b: mov dword ptr [ebp], 0xeaf630 */
  W32((uint32_t)(ebp), 0xeaf630u);
L_e8bd62: /* e8bd62: mov ebp, dword ptr [esi + 0x24] */
  ebp = R32((uint32_t)(esi + 0x24u));
/* e8bd65: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bd67: push 0xeaf5cc */
  { uint32_t v = 0xeaf5ccu; esp -= 4; W32(esp, v); }
/* e8bd6c: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8bd70: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8bd72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bd72: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8bd77: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8bd79: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8bd7d: mov eax, dword ptr [0xeae198] */
  eax = R32((uint32_t)(0xeae198u));
/* e8bd82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bd84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bd86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8bd87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bd89: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8bd8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bd8c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8bd8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bd8e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8bd90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bd90: mov edi, eax */
  edi = eax;
/* e8bd92: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bd95: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bd97: je 0xe8bdb8 */
  if (zf) goto L_e8bdb8;
L_e8bd99: /* e8bd99: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e8bd9e: push 0xeafab0 */
  { uint32_t v = 0xeafab0u; esp -= 4; W32(esp, v); }
/* e8bda3: push 0x4124 */
  { uint32_t v = 0x4124u; esp -= 4; W32(esp, v); }
/* e8bda8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8bdaa: mov ecx, edi */
  ecx = edi;
/* e8bdac: call dword ptr [0xeae194] */
  esp -= 4; W32(esp, 0xe8bdb2u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* e8bdb2: mov dword ptr [edi], 0xeaf9f8 */
  W32((uint32_t)(edi), 0xeaf9f8u);
L_e8bdb8: /* e8bdb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8bdb9: mov dword ptr [esi + 0x4c], 1 */
  W32((uint32_t)(esi + 0x4cu), 0x1u);
/* e8bdc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8bdc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8bdc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8bdc3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8bdc4: ret  */
  esp += 4; SPILL(); return;
}

void f_e8bdd0(void) {
  LOAD_REGS();
L_e8bdd0: /* e8bdd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8bdd1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* e8bdd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8bdd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8bdd7: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e8bddb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8bddc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8bddd: mov esi, ecx */
  esi = ecx;
/* e8bddf: call 0xe98450 */
  esp -= 4; W32(esp, 0xe8bde4u); SPILL(); f_e98450(); if (g_unwind) return; RELOAD();
/* e8bde4: mov eax, dword ptr [esi + eax*4 + 0xb4] */
  eax = R32((uint32_t)(esi + eax*4 + 0xb4u));
/* e8bdeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bdee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bdf0: je 0xe8be07 */
  if (zf) goto L_e8be07;
L_e8bdf2: /* e8bdf2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* e8bdf5: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8bdf7: jne 0xe8be00 */
  if (!zf) goto L_e8be00;
L_e8bdf9: /* e8bdf9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* e8bdfc: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8bdfe: je 0xe8be09 */
  if (zf) goto L_e8be09;
L_e8be00: /* e8be00: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* e8be03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8be05: jne 0xe8bdf2 */
  if (!zf) goto L_e8bdf2;
L_e8be07: /* e8be07: xor eax, eax */
  eax = 0;
L_e8be09: /* e8be09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8be0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8be0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8be0c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e8be10(void) {
  LOAD_REGS();
L_e8be10: /* e8be10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e8be14: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e8be18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8be19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8be1a: call 0xe8bdd0 */
  esp -= 4; W32(esp, 0xe8be1fu); SPILL(); f_e8bdd0(); if (g_unwind) return; RELOAD();
/* e8be1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8be21: je 0xe8be2b */
  if (zf) goto L_e8be2b;
L_e8be23: /* e8be23: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8be25: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8be27: mov ecx, eax */
  ecx = eax;
/* e8be29: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe8be2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8be2b: /* e8be2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e8be30(void) {
  LOAD_REGS();
L_e8be30: /* e8be30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8be31: mov esi, ecx */
  esi = ecx;
/* e8be33: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e8be37: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8be39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8be3a: mov ecx, esi */
  ecx = esi;
/* e8be3c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xe8be3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8be3f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8be41: mov ecx, esi */
  ecx = esi;
/* e8be43: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0xe8be49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8be49: mov eax, dword ptr [esi + 0x46b0] */
  eax = R32((uint32_t)(esi + 0x46b0u));
/* e8be4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8be51: je 0xe8be63 */
  if (zf) goto L_e8be63;
L_e8be53: /* e8be53: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8be55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8be56: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe8be59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8be59: mov dword ptr [esi + 0x46b0], 0 */
  W32((uint32_t)(esi + 0x46b0u), 0x0u);
L_e8be63: /* e8be63: mov eax, dword ptr [esi + 0x46b4] */
  eax = R32((uint32_t)(esi + 0x46b4u));
/* e8be69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8be6b: je 0xe8be7d */
  if (zf) goto L_e8be7d;
L_e8be6d: /* e8be6d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8be6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8be70: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe8be73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8be73: mov dword ptr [esi + 0x46b4], 0 */
  W32((uint32_t)(esi + 0x46b4u), 0x0u);
L_e8be7d: /* e8be7d: mov eax, dword ptr [esi + 0x46ec] */
  eax = R32((uint32_t)(esi + 0x46ecu));
/* e8be83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8be85: je 0xe8be95 */
  if (zf) goto L_e8be95;
L_e8be87: /* e8be87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8be88: mov eax, dword ptr [esi + 0x46f0] */
  eax = R32((uint32_t)(esi + 0x46f0u));
/* e8be8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8be8f: call dword ptr [0xeae368] */
  esp -= 4; W32(esp, 0xe8be95u); SPILL(); call_ind(R32(0xeae368u)); if (g_unwind) return; /* USER32!ReleaseDC */ RELOAD();
L_e8be95: /* e8be95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8be96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8bea0(void) {
  LOAD_REGS();
L_e8bea0: /* e8bea0: sub esp, 0x600 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8bea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8bea7: push 0xeafadc */
  { uint32_t v = 0xeafadcu; esp -= 4; W32(esp, v); }
/* e8beac: mov esi, ecx */
  esi = ecx;
/* e8beae: call dword ptr [0xeae1a8] */
  esp -= 4; W32(esp, 0xe8beb4u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* e8beb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8beb5: call dword ptr [0xeae1a4] */
  esp -= 4; W32(esp, 0xe8bebbu); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* e8bebb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bebe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bec0: jne 0xe8c003 */
  if (!zf) goto L_e8c003;
L_e8bec6: /* e8bec6: jmp 0xe8bed0 */
  goto L_e8bed0;
L_e8bed0: /* e8bed0: mov ecx, eax */
  ecx = eax;
/* e8bed2: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bed5: mov word ptr [esp + eax*2 + 0x404], cx */
  W16((uint32_t)(esp + eax*2 + 0x404u), (ecx & 0xffffu));
/* e8bedd: mov word ptr [esp + eax*2 + 0x204], cx */
  W16((uint32_t)(esp + eax*2 + 0x204u), (ecx & 0xffffu));
/* e8bee5: mov word ptr [esp + eax*2 + 4], cx */
  W16((uint32_t)(esp + eax*2 + 0x4u), (ecx & 0xffffu));
/* e8beea: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* e8beed: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bef0: mov word ptr [esp + eax*2 + 0x406], cx */
  W16((uint32_t)(esp + eax*2 + 0x406u), (ecx & 0xffffu));
/* e8bef8: mov word ptr [esp + eax*2 + 0x206], cx */
  W16((uint32_t)(esp + eax*2 + 0x206u), (ecx & 0xffffu));
/* e8bf00: mov word ptr [esp + eax*2 + 6], cx */
  W16((uint32_t)(esp + eax*2 + 0x6u), (ecx & 0xffffu));
/* e8bf05: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* e8bf08: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf0b: mov word ptr [esp + eax*2 + 0x408], cx */
  W16((uint32_t)(esp + eax*2 + 0x408u), (ecx & 0xffffu));
/* e8bf13: mov word ptr [esp + eax*2 + 0x208], cx */
  W16((uint32_t)(esp + eax*2 + 0x208u), (ecx & 0xffffu));
/* e8bf1b: mov word ptr [esp + eax*2 + 8], cx */
  W16((uint32_t)(esp + eax*2 + 0x8u), (ecx & 0xffffu));
/* e8bf20: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* e8bf23: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf26: mov word ptr [esp + eax*2 + 0x40a], cx */
  W16((uint32_t)(esp + eax*2 + 0x40au), (ecx & 0xffffu));
/* e8bf2e: mov word ptr [esp + eax*2 + 0x20a], cx */
  W16((uint32_t)(esp + eax*2 + 0x20au), (ecx & 0xffffu));
/* e8bf36: mov word ptr [esp + eax*2 + 0xa], cx */
  W16((uint32_t)(esp + eax*2 + 0xau), (ecx & 0xffffu));
/* e8bf3b: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* e8bf3e: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf41: mov word ptr [esp + eax*2 + 0x40c], cx */
  W16((uint32_t)(esp + eax*2 + 0x40cu), (ecx & 0xffffu));
/* e8bf49: mov word ptr [esp + eax*2 + 0x20c], cx */
  W16((uint32_t)(esp + eax*2 + 0x20cu), (ecx & 0xffffu));
/* e8bf51: mov word ptr [esp + eax*2 + 0xc], cx */
  W16((uint32_t)(esp + eax*2 + 0xcu), (ecx & 0xffffu));
/* e8bf56: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* e8bf59: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf5c: mov word ptr [esp + eax*2 + 0x40e], cx */
  W16((uint32_t)(esp + eax*2 + 0x40eu), (ecx & 0xffffu));
/* e8bf64: mov word ptr [esp + eax*2 + 0x20e], cx */
  W16((uint32_t)(esp + eax*2 + 0x20eu), (ecx & 0xffffu));
/* e8bf6c: mov word ptr [esp + eax*2 + 0xe], cx */
  W16((uint32_t)(esp + eax*2 + 0xeu), (ecx & 0xffffu));
/* e8bf71: lea ecx, [eax + 6] */
  ecx = (uint32_t)(eax + 0x6u);
/* e8bf74: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf77: mov word ptr [esp + eax*2 + 0x410], cx */
  W16((uint32_t)(esp + eax*2 + 0x410u), (ecx & 0xffffu));
/* e8bf7f: mov word ptr [esp + eax*2 + 0x210], cx */
  W16((uint32_t)(esp + eax*2 + 0x210u), (ecx & 0xffffu));
/* e8bf87: mov word ptr [esp + eax*2 + 0x10], cx */
  W16((uint32_t)(esp + eax*2 + 0x10u), (ecx & 0xffffu));
/* e8bf8c: lea ecx, [eax + 7] */
  ecx = (uint32_t)(eax + 0x7u);
/* e8bf8f: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf92: mov word ptr [esp + eax*2 + 0x412], cx */
  W16((uint32_t)(esp + eax*2 + 0x412u), (ecx & 0xffffu));
/* e8bf9a: mov word ptr [esp + eax*2 + 0x212], cx */
  W16((uint32_t)(esp + eax*2 + 0x212u), (ecx & 0xffffu));
/* e8bfa2: mov word ptr [esp + eax*2 + 0x12], cx */
  W16((uint32_t)(esp + eax*2 + 0x12u), (ecx & 0xffffu));
/* e8bfa7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8bfaa: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8bfaf: jl 0xe8bed0 */
  if ((sf != of)) goto L_e8bed0;
L_e8bfb5: /* e8bfb5: mov eax, dword ptr [0xeae1a0] */
  eax = R32((uint32_t)(0xeae1a0u));
/* e8bfba: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8bfbd: jne 0xe8bfea */
  if (!zf) goto L_e8bfea;
L_e8bfbf: /* e8bfbf: mov eax, dword ptr [esi + 0x46b4] */
  eax = R32((uint32_t)(esi + 0x46b4u));
/* e8bfc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bfc7: je 0xe8bfea */
  if (zf) goto L_e8bfea;
L_e8bfc9: /* e8bfc9: test dword ptr [esi + 0x4158], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4158u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bfd3: je 0xe8bfea */
  if (zf) goto L_e8bfea;
L_e8bfd5: /* e8bfd5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8bfd7: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* e8bfdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bfdc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bfde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bfdf: call dword ptr [ecx + 0x48] */
  { uint32_t t = R32((uint32_t)(ecx + 0x48u)); esp -= 4; W32(esp, 0xe8bfe2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bfe2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8bfe3: add esp, 0x600 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bfe9: ret  */
  esp += 4; SPILL(); return;
L_e8bfea: /* e8bfea: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* e8bfee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bfef: call dword ptr [0xeae364] */
  esp -= 4; W32(esp, 0xe8bff5u); SPILL(); call_ind(R32(0xeae364u)); if (g_unwind) return; /* USER32!GetDesktopWindow */ RELOAD();
/* e8bff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bff6: call dword ptr [0xeae36c] */
  esp -= 4; W32(esp, 0xe8bffcu); SPILL(); call_ind(R32(0xeae36cu)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* e8bffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bffd: call dword ptr [0xeae2e4] */
  esp -= 4; W32(esp, 0xe8c003u); SPILL(); call_ind(R32(0xeae2e4u)); if (g_unwind) return; /* GDI32!SetDeviceGammaRamp */ RELOAD();
L_e8c003: /* e8c003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c004: add esp, 0x600 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c00a: ret  */
  esp += 4; SPILL(); return;
}

void f_e8bec8(void) {
  LOAD_REGS();
L_e8bec8: /* e8bec8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e8becf: nop  */
L_e8bed0: /* e8bed0: mov ecx, eax */
  ecx = eax;
/* e8bed2: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bed5: mov word ptr [esp + eax*2 + 0x404], cx */
  W16((uint32_t)(esp + eax*2 + 0x404u), (ecx & 0xffffu));
/* e8bedd: mov word ptr [esp + eax*2 + 0x204], cx */
  W16((uint32_t)(esp + eax*2 + 0x204u), (ecx & 0xffffu));
/* e8bee5: mov word ptr [esp + eax*2 + 4], cx */
  W16((uint32_t)(esp + eax*2 + 0x4u), (ecx & 0xffffu));
/* e8beea: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* e8beed: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bef0: mov word ptr [esp + eax*2 + 0x406], cx */
  W16((uint32_t)(esp + eax*2 + 0x406u), (ecx & 0xffffu));
/* e8bef8: mov word ptr [esp + eax*2 + 0x206], cx */
  W16((uint32_t)(esp + eax*2 + 0x206u), (ecx & 0xffffu));
/* e8bf00: mov word ptr [esp + eax*2 + 6], cx */
  W16((uint32_t)(esp + eax*2 + 0x6u), (ecx & 0xffffu));
/* e8bf05: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* e8bf08: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf0b: mov word ptr [esp + eax*2 + 0x408], cx */
  W16((uint32_t)(esp + eax*2 + 0x408u), (ecx & 0xffffu));
/* e8bf13: mov word ptr [esp + eax*2 + 0x208], cx */
  W16((uint32_t)(esp + eax*2 + 0x208u), (ecx & 0xffffu));
/* e8bf1b: mov word ptr [esp + eax*2 + 8], cx */
  W16((uint32_t)(esp + eax*2 + 0x8u), (ecx & 0xffffu));
/* e8bf20: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* e8bf23: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf26: mov word ptr [esp + eax*2 + 0x40a], cx */
  W16((uint32_t)(esp + eax*2 + 0x40au), (ecx & 0xffffu));
/* e8bf2e: mov word ptr [esp + eax*2 + 0x20a], cx */
  W16((uint32_t)(esp + eax*2 + 0x20au), (ecx & 0xffffu));
/* e8bf36: mov word ptr [esp + eax*2 + 0xa], cx */
  W16((uint32_t)(esp + eax*2 + 0xau), (ecx & 0xffffu));
/* e8bf3b: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* e8bf3e: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf41: mov word ptr [esp + eax*2 + 0x40c], cx */
  W16((uint32_t)(esp + eax*2 + 0x40cu), (ecx & 0xffffu));
/* e8bf49: mov word ptr [esp + eax*2 + 0x20c], cx */
  W16((uint32_t)(esp + eax*2 + 0x20cu), (ecx & 0xffffu));
/* e8bf51: mov word ptr [esp + eax*2 + 0xc], cx */
  W16((uint32_t)(esp + eax*2 + 0xcu), (ecx & 0xffffu));
/* e8bf56: lea ecx, [eax + 5] */
  ecx = (uint32_t)(eax + 0x5u);
/* e8bf59: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf5c: mov word ptr [esp + eax*2 + 0x40e], cx */
  W16((uint32_t)(esp + eax*2 + 0x40eu), (ecx & 0xffffu));
/* e8bf64: mov word ptr [esp + eax*2 + 0x20e], cx */
  W16((uint32_t)(esp + eax*2 + 0x20eu), (ecx & 0xffffu));
/* e8bf6c: mov word ptr [esp + eax*2 + 0xe], cx */
  W16((uint32_t)(esp + eax*2 + 0xeu), (ecx & 0xffffu));
/* e8bf71: lea ecx, [eax + 6] */
  ecx = (uint32_t)(eax + 0x6u);
/* e8bf74: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf77: mov word ptr [esp + eax*2 + 0x410], cx */
  W16((uint32_t)(esp + eax*2 + 0x410u), (ecx & 0xffffu));
/* e8bf7f: mov word ptr [esp + eax*2 + 0x210], cx */
  W16((uint32_t)(esp + eax*2 + 0x210u), (ecx & 0xffffu));
/* e8bf87: mov word ptr [esp + eax*2 + 0x10], cx */
  W16((uint32_t)(esp + eax*2 + 0x10u), (ecx & 0xffffu));
/* e8bf8c: lea ecx, [eax + 7] */
  ecx = (uint32_t)(eax + 0x7u);
/* e8bf8f: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e8bf92: mov word ptr [esp + eax*2 + 0x412], cx */
  W16((uint32_t)(esp + eax*2 + 0x412u), (ecx & 0xffffu));
/* e8bf9a: mov word ptr [esp + eax*2 + 0x212], cx */
  W16((uint32_t)(esp + eax*2 + 0x212u), (ecx & 0xffffu));
/* e8bfa2: mov word ptr [esp + eax*2 + 0x12], cx */
  W16((uint32_t)(esp + eax*2 + 0x12u), (ecx & 0xffffu));
/* e8bfa7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8bfaa: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8bfaf: jl 0xe8bed0 */
  if ((sf != of)) goto L_e8bed0;
L_e8bfb5: /* e8bfb5: mov eax, dword ptr [0xeae1a0] */
  eax = R32((uint32_t)(0xeae1a0u));
/* e8bfba: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8bfbd: jne 0xe8bfea */
  if (!zf) goto L_e8bfea;
L_e8bfbf: /* e8bfbf: mov eax, dword ptr [esi + 0x46b4] */
  eax = R32((uint32_t)(esi + 0x46b4u));
/* e8bfc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bfc7: je 0xe8bfea */
  if (zf) goto L_e8bfea;
L_e8bfc9: /* e8bfc9: test dword ptr [esi + 0x4158], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4158u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8bfd3: je 0xe8bfea */
  if (zf) goto L_e8bfea;
L_e8bfd5: /* e8bfd5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8bfd7: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* e8bfdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8bfdc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8bfde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bfdf: call dword ptr [ecx + 0x48] */
  { uint32_t t = R32((uint32_t)(ecx + 0x48u)); esp -= 4; W32(esp, 0xe8bfe2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8bfe2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8bfe3: add esp, 0x600 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8bfe9: ret  */
  esp += 4; SPILL(); return;
L_e8bfea: /* e8bfea: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* e8bfee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bfef: call dword ptr [0xeae364] */
  esp -= 4; W32(esp, 0xe8bff5u); SPILL(); call_ind(R32(0xeae364u)); if (g_unwind) return; /* USER32!GetDesktopWindow */ RELOAD();
/* e8bff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bff6: call dword ptr [0xeae36c] */
  esp -= 4; W32(esp, 0xe8bffcu); SPILL(); call_ind(R32(0xeae36cu)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* e8bffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8bffd: call dword ptr [0xeae2e4] */
  esp -= 4; W32(esp, 0xe8c003u); SPILL(); call_ind(R32(0xeae2e4u)); if (g_unwind) return; /* GDI32!SetDeviceGammaRamp */ RELOAD();
/* e8c003: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c004: add esp, 0x600 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c00a: ret  */
  esp += 4; SPILL(); return;
}

void f_e8c010(void) {
  LOAD_REGS();
L_e8c010: /* e8c010: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e8c014: add eax, -3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c017: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8c01a: ja 0xe8c04b */
  if ((!cf && !zf)) goto L_e8c04b;
L_e8c01c: /* e8c01c: jmp dword ptr [eax*4 + 0xe8c054] */
  switch (R32((uint32_t)(eax*4 + 0xe8c054u))) {
    case 0xe8c023u: goto L_e8c023;
    case 0xe8c02cu: goto L_e8c02c;
    case 0xe8c035u: goto L_e8c035;
    case 0xe8c03eu: goto L_e8c03e;
    case 0xe8c04bu: goto L_e8c04b;
    default: guest_badjump(0xe8c01c, R32((uint32_t)(eax*4 + 0xe8c054u))); return;
  }
L_e8c023: /* e8c023: mov eax, dword ptr [ecx + 0x40e8] */
  eax = R32((uint32_t)(ecx + 0x40e8u));
/* e8c029: ret 4 */
  esp += 8; SPILL(); return;
L_e8c02c: /* e8c02c: mov eax, dword ptr [ecx + 0x40ec] */
  eax = R32((uint32_t)(ecx + 0x40ecu));
/* e8c032: ret 4 */
  esp += 8; SPILL(); return;
L_e8c035: /* e8c035: mov eax, dword ptr [ecx + 0x40f0] */
  eax = R32((uint32_t)(ecx + 0x40f0u));
/* e8c03b: ret 4 */
  esp += 8; SPILL(); return;
L_e8c03e: /* e8c03e: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* e8c041: xor eax, eax */
  eax = 0;
/* e8c043: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c045: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8c048: ret 4 */
  esp += 8; SPILL(); return;
L_e8c04b: /* e8c04b: mov eax, 1 */
  eax = 0x1u;
/* e8c050: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8c070(void) {
  LOAD_REGS();
L_e8c070: /* e8c070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c071: push 0xe8 */
  { uint32_t v = 0xe8u; esp -= 4; W32(esp, v); }
/* e8c076: mov esi, ecx */
  esi = ecx;
/* e8c078: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* e8c07d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c07e: call dword ptr [0xeae1ac] */
  esp -= 4; W32(esp, 0xe8c084u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* e8c084: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c087: mov eax, esi */
  eax = esi;
/* e8c089: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c08a: ret  */
  esp += 4; SPILL(); return;
}

void f_e8c090(void) {
  LOAD_REGS();
L_e8c090: /* e8c090: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8c096: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8c098: push 0xeacb51 */
  { uint32_t v = 0xeacb51u; esp -= 4; W32(esp, v); }
/* e8c09d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c09e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8c0a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c0a6: mov esi, ecx */
  esi = ecx;
/* e8c0a8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e8c0ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c0ae: je 0xe8c18d */
  if (zf) goto L_e8c18d;
L_e8c0b4: /* e8c0b4: mov eax, dword ptr [esi + 0x40b8] */
  eax = R32((uint32_t)(esi + 0x40b8u));
/* e8c0ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c0bc: je 0xe8c0d0 */
  if (zf) goto L_e8c0d0;
L_e8c0be: /* e8c0be: mov edi, edi */
  edi = edi;
L_e8c0c0: /* e8c0c0: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c0c3: je 0xe8c18f */
  if (zf) goto L_e8c18f;
L_e8c0c9: /* e8c0c9: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* e8c0cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c0ce: jne 0xe8c0c0 */
  if (!zf) goto L_e8c0c0;
L_e8c0d0: /* e8c0d0: mov eax, ecx */
  eax = ecx;
/* e8c0d2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8c0d3: je 0xe8c11c */
  if (zf) goto L_e8c11c;
L_e8c0d5: /* e8c0d5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8c0d6: jne 0xe8c18d */
  if (!zf) goto L_e8c18d;
L_e8c0dc: /* e8c0dc: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e8c0e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c0e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c0e5: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e8c0ea: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e8c0ec: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe8c0eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c0ee: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e8c0f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c0f4: mov dword ptr [esp + 0xc], 2 */
  W32((uint32_t)(esp + 0xcu), 0x2u);
/* e8c0fc: je 0xe8c18d */
  if (zf) goto L_e8c18d;
L_e8c102: /* e8c102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c103: mov ecx, eax */
  ecx = eax;
/* e8c105: call 0xe90420 */
  esp -= 4; W32(esp, 0xe8c10au); SPILL(); f_e90420(); if (g_unwind) return; RELOAD();
/* e8c10a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e8c10e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8c115: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c116: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c119: ret 4 */
  esp += 8; SPILL(); return;
L_e8c11c: /* e8c11c: cmp dword ptr [esi + 0x4674], 0xe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4674u))); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c123: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e8c128: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c12a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c12c: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e8c131: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e8c133: jl 0xe8c161 */
  if ((sf != of)) goto L_e8c161;
L_e8c135: /* e8c135: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe8c137u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c137: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e8c13b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c13d: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* e8c145: je 0xe8c18d */
  if (zf) goto L_e8c18d;
L_e8c147: /* e8c147: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c148: mov ecx, eax */
  ecx = eax;
/* e8c14a: call 0xe90400 */
  esp -= 4; W32(esp, 0xe8c14fu); SPILL(); f_e90400(); if (g_unwind) return; RELOAD();
/* e8c14f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e8c153: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8c15a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c15b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c15e: ret 4 */
  esp += 8; SPILL(); return;
L_e8c161: /* e8c161: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe8c163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c163: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e8c167: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c169: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* e8c171: je 0xe8c18d */
  if (zf) goto L_e8c18d;
L_e8c173: /* e8c173: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c174: mov ecx, eax */
  ecx = eax;
/* e8c176: call 0xe903e0 */
  esp -= 4; W32(esp, 0xe8c17bu); SPILL(); f_e903e0(); if (g_unwind) return; RELOAD();
/* e8c17b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e8c17f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8c186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c187: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c18a: ret 4 */
  esp += 8; SPILL(); return;
L_e8c18d: /* e8c18d: xor eax, eax */
  eax = 0;
L_e8c18f: /* e8c18f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e8c193: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8c19a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c19b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c19e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8c1b0(void) {
  LOAD_REGS();
L_e8c1b0: /* e8c1b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e8c1b4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e8c1b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c1b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8c1ba: call 0xe8bdd0 */
  esp -= 4; W32(esp, 0xe8c1bfu); SPILL(); f_e8bdd0(); if (g_unwind) return; RELOAD();
/* e8c1bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c1c1: je 0xe8c1dc */
  if (zf) goto L_e8c1dc;
L_e8c1c3: /* e8c1c3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8c1c5: mov ecx, eax */
  ecx = eax;
/* e8c1c7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe8c1cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c1ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c1cc: je 0xe8c1e1 */
  if (zf) goto L_e8c1e1;
L_e8c1ce: /* e8c1ce: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* e8c1d1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c1d3: jne 0xe8c1e1 */
  if (!zf) goto L_e8c1e1;
L_e8c1d5: /* e8c1d5: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* e8c1d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c1da: jne 0xe8c1e1 */
  if (!zf) goto L_e8c1e1;
L_e8c1dc: /* e8c1dc: xor eax, eax */
  eax = 0;
/* e8c1de: ret 8 */
  esp += 12; SPILL(); return;
L_e8c1e1: /* e8c1e1: mov eax, 1 */
  eax = 0x1u;
/* e8c1e6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e8c1f0(void) {
  LOAD_REGS();
L_e8c1f0: /* e8c1f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8c1f1: cmp eax, 0x88760826 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760826u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c1f6: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* e8c1fe: jg 0xe8c32a */
  if ((!zf && sf == of)) goto L_e8c32a;
L_e8c204: /* e8c204: je 0xe8c319 */
  if (zf) goto L_e8c319;
L_e8c20a: /* e8c20a: cmp eax, 0x8876081c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c20f: jg 0xe8c2ae */
  if ((!zf && sf == of)) goto L_e8c2ae;
L_e8c215: /* e8c215: je 0xe8c29d */
  if (zf) goto L_e8c29d;
L_e8c21b: /* e8c21b: cmp eax, 0x88760819 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760819u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c220: jg 0xe8c269 */
  if ((!zf && sf == of)) goto L_e8c269;
L_e8c222: /* e8c222: je 0xe8c258 */
  if (zf) goto L_e8c258;
L_e8c224: /* e8c224: cmp eax, 0x8876017c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876017cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c229: je 0xe8c247 */
  if (zf) goto L_e8c247;
L_e8c22b: /* e8c22b: cmp eax, 0x88760818 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760818u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c230: jne 0xe8c408 */
  if (!zf) goto L_e8c408;
L_e8c236: /* e8c236: push 0xeb043c */
  { uint32_t v = 0xeb043cu; esp -= 4; W32(esp, v); }
/* e8c23b: mov ecx, esi */
  ecx = esi;
/* e8c23d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c243u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c243: mov eax, esi */
  eax = esi;
/* e8c245: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c246: ret  */
  esp += 4; SPILL(); return;
L_e8c247: /* e8c247: push 0xeb040c */
  { uint32_t v = 0xeb040cu; esp -= 4; W32(esp, v); }
/* e8c24c: mov ecx, esi */
  ecx = esi;
/* e8c24e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c254u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c254: mov eax, esi */
  eax = esi;
/* e8c256: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c257: ret  */
  esp += 4; SPILL(); return;
L_e8c258: /* e8c258: push 0xeb03c8 */
  { uint32_t v = 0xeb03c8u; esp -= 4; W32(esp, v); }
/* e8c25d: mov ecx, esi */
  ecx = esi;
/* e8c25f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c265u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c265: mov eax, esi */
  eax = esi;
/* e8c267: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c268: ret  */
  esp += 4; SPILL(); return;
L_e8c269: /* e8c269: cmp eax, 0x8876081a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c26e: je 0xe8c28c */
  if (zf) goto L_e8c28c;
L_e8c270: /* e8c270: cmp eax, 0x8876081b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c275: jne 0xe8c408 */
  if (!zf) goto L_e8c408;
L_e8c27b: /* e8c27b: push 0xeb0380 */
  { uint32_t v = 0xeb0380u; esp -= 4; W32(esp, v); }
/* e8c280: mov ecx, esi */
  ecx = esi;
/* e8c282: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c288u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c288: mov eax, esi */
  eax = esi;
/* e8c28a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c28b: ret  */
  esp += 4; SPILL(); return;
L_e8c28c: /* e8c28c: push 0xeb0344 */
  { uint32_t v = 0xeb0344u; esp -= 4; W32(esp, v); }
/* e8c291: mov ecx, esi */
  ecx = esi;
/* e8c293: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c299u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c299: mov eax, esi */
  eax = esi;
/* e8c29b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c29c: ret  */
  esp += 4; SPILL(); return;
L_e8c29d: /* e8c29d: push 0xeb030c */
  { uint32_t v = 0xeb030cu; esp -= 4; W32(esp, v); }
/* e8c2a2: mov ecx, esi */
  ecx = esi;
/* e8c2a4: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c2aau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c2aa: mov eax, esi */
  eax = esi;
/* e8c2ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c2ad: ret  */
  esp += 4; SPILL(); return;
L_e8c2ae: /* e8c2ae: lea ecx, [eax + 0x7789f7e3] */
  ecx = (uint32_t)(eax + 0x7789f7e3u);
/* e8c2b4: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8c2b7: ja 0xe8c408 */
  if ((!cf && !zf)) goto L_e8c408;
L_e8c2bd: /* e8c2bd: jmp dword ptr [ecx*4 + 0xe8c430] */
  switch (R32((uint32_t)(ecx*4 + 0xe8c430u))) {
    case 0xe8c2c4u: goto L_e8c2c4;
    case 0xe8c2d5u: goto L_e8c2d5;
    case 0xe8c2e6u: goto L_e8c2e6;
    case 0xe8c2f7u: goto L_e8c2f7;
    case 0xe8c308u: goto L_e8c308;
    case 0xe8c354u: goto L_e8c354;
    case 0xe8c365u: goto L_e8c365;
    case 0xe8c376u: goto L_e8c376;
    case 0xe8c387u: goto L_e8c387;
    case 0xe8c398u: goto L_e8c398;
    case 0xe8c408u: goto L_e8c408;
    default: guest_badjump(0xe8c2bd, R32((uint32_t)(ecx*4 + 0xe8c430u))); return;
  }
L_e8c2c4: /* e8c2c4: push 0xeb02d8 */
  { uint32_t v = 0xeb02d8u; esp -= 4; W32(esp, v); }
/* e8c2c9: mov ecx, esi */
  ecx = esi;
/* e8c2cb: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c2d1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c2d1: mov eax, esi */
  eax = esi;
/* e8c2d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c2d4: ret  */
  esp += 4; SPILL(); return;
L_e8c2d5: /* e8c2d5: push 0xeb0298 */
  { uint32_t v = 0xeb0298u; esp -= 4; W32(esp, v); }
/* e8c2da: mov ecx, esi */
  ecx = esi;
/* e8c2dc: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c2e2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c2e2: mov eax, esi */
  eax = esi;
/* e8c2e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c2e5: ret  */
  esp += 4; SPILL(); return;
L_e8c2e6: /* e8c2e6: push 0xeb025c */
  { uint32_t v = 0xeb025cu; esp -= 4; W32(esp, v); }
/* e8c2eb: mov ecx, esi */
  ecx = esi;
/* e8c2ed: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c2f3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c2f3: mov eax, esi */
  eax = esi;
/* e8c2f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c2f6: ret  */
  esp += 4; SPILL(); return;
L_e8c2f7: /* e8c2f7: push 0xeb0220 */
  { uint32_t v = 0xeb0220u; esp -= 4; W32(esp, v); }
/* e8c2fc: mov ecx, esi */
  ecx = esi;
/* e8c2fe: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c304u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c304: mov eax, esi */
  eax = esi;
/* e8c306: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c307: ret  */
  esp += 4; SPILL(); return;
L_e8c308: /* e8c308: push 0xeb01e0 */
  { uint32_t v = 0xeb01e0u; esp -= 4; W32(esp, v); }
/* e8c30d: mov ecx, esi */
  ecx = esi;
/* e8c30f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c315u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c315: mov eax, esi */
  eax = esi;
/* e8c317: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c318: ret  */
  esp += 4; SPILL(); return;
L_e8c319: /* e8c319: push 0xeb0198 */
  { uint32_t v = 0xeb0198u; esp -= 4; W32(esp, v); }
/* e8c31e: mov ecx, esi */
  ecx = esi;
/* e8c320: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c326u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c326: mov eax, esi */
  eax = esi;
/* e8c328: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c329: ret  */
  esp += 4; SPILL(); return;
L_e8c32a: /* e8c32a: cmp eax, 0x8876086a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c32f: jg 0xe8c3ba */
  if ((!zf && sf == of)) goto L_e8c3ba;
L_e8c335: /* e8c335: je 0xe8c3a9 */
  if (zf) goto L_e8c3a9;
L_e8c337: /* e8c337: lea ecx, [eax + 0x7789f7d9] */
  ecx = (uint32_t)(eax + 0x7789f7d9u);
/* e8c33d: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8c340: ja 0xe8c408 */
  if ((!cf && !zf)) goto L_e8c408;
L_e8c346: /* e8c346: movzx ecx, byte ptr [ecx + 0xe8c460] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xe8c460u)));
/* e8c34d: jmp dword ptr [ecx*4 + 0xe8c448] */
  switch (R32((uint32_t)(ecx*4 + 0xe8c448u))) {
    case 0xe8c354u: goto L_e8c354;
    case 0xe8c365u: goto L_e8c365;
    case 0xe8c376u: goto L_e8c376;
    case 0xe8c387u: goto L_e8c387;
    case 0xe8c398u: goto L_e8c398;
    case 0xe8c408u: goto L_e8c408;
    default: guest_badjump(0xe8c34d, R32((uint32_t)(ecx*4 + 0xe8c448u))); return;
  }
L_e8c354: /* e8c354: push 0xeb0160 */
  { uint32_t v = 0xeb0160u; esp -= 4; W32(esp, v); }
/* e8c359: mov ecx, esi */
  ecx = esi;
/* e8c35b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c361u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c361: mov eax, esi */
  eax = esi;
/* e8c363: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c364: ret  */
  esp += 4; SPILL(); return;
L_e8c365: /* e8c365: push 0xeb0140 */
  { uint32_t v = 0xeb0140u; esp -= 4; W32(esp, v); }
/* e8c36a: mov ecx, esi */
  ecx = esi;
/* e8c36c: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c372u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c372: mov eax, esi */
  eax = esi;
/* e8c374: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c375: ret  */
  esp += 4; SPILL(); return;
L_e8c376: /* e8c376: push 0xeb0120 */
  { uint32_t v = 0xeb0120u; esp -= 4; W32(esp, v); }
/* e8c37b: mov ecx, esi */
  ecx = esi;
/* e8c37d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c383u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c383: mov eax, esi */
  eax = esi;
/* e8c385: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c386: ret  */
  esp += 4; SPILL(); return;
L_e8c387: /* e8c387: push 0xeb00fc */
  { uint32_t v = 0xeb00fcu; esp -= 4; W32(esp, v); }
/* e8c38c: mov ecx, esi */
  ecx = esi;
/* e8c38e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c394u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c394: mov eax, esi */
  eax = esi;
/* e8c396: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c397: ret  */
  esp += 4; SPILL(); return;
L_e8c398: /* e8c398: push 0xeb00d0 */
  { uint32_t v = 0xeb00d0u; esp -= 4; W32(esp, v); }
/* e8c39d: mov ecx, esi */
  ecx = esi;
/* e8c39f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c3a5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c3a5: mov eax, esi */
  eax = esi;
/* e8c3a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c3a8: ret  */
  esp += 4; SPILL(); return;
L_e8c3a9: /* e8c3a9: push 0xeb00a8 */
  { uint32_t v = 0xeb00a8u; esp -= 4; W32(esp, v); }
/* e8c3ae: mov ecx, esi */
  ecx = esi;
/* e8c3b0: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c3b6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c3b6: mov eax, esi */
  eax = esi;
/* e8c3b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c3b9: ret  */
  esp += 4; SPILL(); return;
L_e8c3ba: /* e8c3ba: cmp eax, 0x8876086d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c3bf: jg 0xe8c404 */
  if ((!zf && sf == of)) goto L_e8c404;
L_e8c3c1: /* e8c3c1: je 0xe8c3f3 */
  if (zf) goto L_e8c3f3;
L_e8c3c3: /* e8c3c3: cmp eax, 0x8876086b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c3c8: je 0xe8c3e2 */
  if (zf) goto L_e8c3e2;
L_e8c3ca: /* e8c3ca: cmp eax, 0x8876086c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c3cf: jne 0xe8c408 */
  if (!zf) goto L_e8c408;
L_e8c3d1: /* e8c3d1: push 0xeb0080 */
  { uint32_t v = 0xeb0080u; esp -= 4; W32(esp, v); }
/* e8c3d6: mov ecx, esi */
  ecx = esi;
/* e8c3d8: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c3deu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c3de: mov eax, esi */
  eax = esi;
/* e8c3e0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c3e1: ret  */
  esp += 4; SPILL(); return;
L_e8c3e2: /* e8c3e2: push 0xeb0054 */
  { uint32_t v = 0xeb0054u; esp -= 4; W32(esp, v); }
/* e8c3e7: mov ecx, esi */
  ecx = esi;
/* e8c3e9: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c3efu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c3ef: mov eax, esi */
  eax = esi;
/* e8c3f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c3f2: ret  */
  esp += 4; SPILL(); return;
L_e8c3f3: /* e8c3f3: push 0xeb0020 */
  { uint32_t v = 0xeb0020u; esp -= 4; W32(esp, v); }
/* e8c3f8: mov ecx, esi */
  ecx = esi;
/* e8c3fa: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c400u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c400: mov eax, esi */
  eax = esi;
/* e8c402: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c403: ret  */
  esp += 4; SPILL(); return;
L_e8c404: /* e8c404: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c406: je 0xe8c41c */
  if (zf) goto L_e8c41c;
L_e8c408: /* e8c408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c409: push 0xeb0014 */
  { uint32_t v = 0xeb0014u; esp -= 4; W32(esp, v); }
/* e8c40e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c40f: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe8c415u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e8c415: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c418: mov eax, esi */
  eax = esi;
/* e8c41a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c41b: ret  */
  esp += 4; SPILL(); return;
L_e8c41c: /* e8c41c: push 0xeb0004 */
  { uint32_t v = 0xeb0004u; esp -= 4; W32(esp, v); }
/* e8c421: mov ecx, esi */
  ecx = esi;
/* e8c423: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8c429u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8c429: mov eax, esi */
  eax = esi;
/* e8c42b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e8c42c: ret  */
  esp += 4; SPILL(); return;
}

void f_e8c470(void) {
  LOAD_REGS();
L_e8c470: /* e8c470: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c475: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c47a: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c47f: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c484: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c489: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c48e: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c493: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c498: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c49d: add eax, 0x3020105 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3020105u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c4a2: add al, 0x90 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x90u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e8c4a4: nop  */
/* e8c4a5: nop  */
/* e8c4a6: nop  */
/* e8c4a7: nop  */
/* e8c4a8: nop  */
/* e8c4a9: nop  */
/* e8c4aa: nop  */
/* e8c4ab: nop  */
/* e8c4ac: nop  */
/* e8c4ad: nop  */
/* e8c4ae: nop  */
/* e8c4af: nop  */
  SPILL(); f_e8c4b0(); return;
}

void f_e8c4b0(void) {
  LOAD_REGS();
L_e8c4b0: /* e8c4b0: cmp eax, 0x32 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c4b3: jg 0xe8c4d3 */
  if ((!zf && sf == of)) goto L_e8c4d3;
L_e8c4b5: /* e8c4b5: je 0xe8c532 */
  if (zf) goto L_e8c532;
L_e8c4b7: /* e8c4b7: add eax, -0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c4ba: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8c4bd: ja 0xe8c52f */
  if ((!cf && !zf)) goto L_e8c52f;
L_e8c4bf: /* e8c4bf: movzx eax, byte ptr [eax + 0xe8c54c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe8c54cu)));
/* e8c4c6: jmp dword ptr [eax*4 + 0xe8c538] */
  switch (R32((uint32_t)(eax*4 + 0xe8c538u))) {
    case 0xe8c4cdu: goto L_e8c4cd;
    case 0xe8c50eu: goto L_e8c50e;
    case 0xe8c514u: goto L_e8c514;
    case 0xe8c52fu: goto L_e8c52f;
    case 0xe8c532u: goto L_e8c532;
    default: guest_badjump(0xe8c4c6, R32((uint32_t)(eax*4 + 0xe8c538u))); return;
  }
L_e8c4cd: /* e8c4cd: mov eax, 0x18 */
  eax = 0x18u;
/* e8c4d2: ret  */
  esp += 4; SPILL(); return;
L_e8c4d3: /* e8c4d3: cmp eax, 0x4d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c4d6: jg 0xe8c4f0 */
  if ((!zf && sf == of)) goto L_e8c4f0;
L_e8c4d8: /* e8c4d8: je 0xe8c514 */
  if (zf) goto L_e8c514;
L_e8c4da: /* e8c4da: add eax, -0x33 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffcdu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8c4dd: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8c4e0: ja 0xe8c52f */
  if ((!cf && !zf)) goto L_e8c52f;
L_e8c4e2: /* e8c4e2: movzx ecx, byte ptr [eax + 0xe8c574] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xe8c574u)));
/* e8c4e9: jmp dword ptr [ecx*4 + 0xe8c564] */
  switch (R32((uint32_t)(ecx*4 + 0xe8c564u))) {
    case 0xe8c50eu: goto L_e8c50e;
    case 0xe8c514u: goto L_e8c514;
    case 0xe8c52fu: goto L_e8c52f;
    case 0xe8c532u: goto L_e8c532;
    default: guest_badjump(0xe8c4e9, R32((uint32_t)(ecx*4 + 0xe8c564u))); return;
  }
L_e8c4f0: /* e8c4f0: cmp eax, 0x32545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c4f5: jg 0xe8c51a */
  if ((!zf && sf == of)) goto L_e8c51a;
L_e8c4f7: /* e8c4f7: je 0xe8c532 */
  if (zf) goto L_e8c532;
L_e8c4f9: /* e8c4f9: sub eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e8c4fc: je 0xe8c514 */
  if (zf) goto L_e8c514;
L_e8c4fe: /* e8c4fe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8c4ff: je 0xe8c50e */
  if (zf) goto L_e8c50e;
L_e8c501: /* e8c501: sub eax, 0x315457f4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x315457f4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e8c506: jne 0xe8c52f */
  if (!zf) goto L_e8c52f;
L_e8c508: /* e8c508: mov eax, 4 */
  eax = 0x4u;
/* e8c50d: ret  */
  esp += 4; SPILL(); return;
L_e8c50e: /* e8c50e: mov eax, 0x10 */
  eax = 0x10u;
/* e8c513: ret  */
  esp += 4; SPILL(); return;
L_e8c514: /* e8c514: mov eax, 0x20 */
  eax = 0x20u;
/* e8c519: ret  */
  esp += 4; SPILL(); return;
L_e8c51a: /* e8c51a: cmp eax, 0x33545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c51f: je 0xe8c532 */
  if (zf) goto L_e8c532;
L_e8c521: /* e8c521: cmp eax, 0x34545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c526: je 0xe8c532 */
  if (zf) goto L_e8c532;
L_e8c528: /* e8c528: cmp eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c52d: je 0xe8c532 */
  if (zf) goto L_e8c532;
L_e8c52f: /* e8c52f: xor eax, eax */
  eax = 0;
/* e8c531: ret  */
  esp += 4; SPILL(); return;
L_e8c532: /* e8c532: mov eax, 8 */
  eax = 0x8u;
/* e8c537: ret  */
  esp += 4; SPILL(); return;
}

void f_e8c590(void) {
  LOAD_REGS();
L_e8c590: /* e8c590: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8c596: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8c598: push 0xeacb66 */
  { uint32_t v = 0xeacb66u; esp -= 4; W32(esp, v); }
/* e8c59d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c59e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8c5a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8c5a6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* e8c5aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8c5ab: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* e8c5af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c5b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c5b1: mov edi, ecx */
  edi = ecx;
/* e8c5b3: mov esi, dword ptr [edi + 0x40b4] */
  esi = R32((uint32_t)(edi + 0x40b4u));
/* e8c5b9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c5bb: je 0xe8c5db */
  if (zf) goto L_e8c5db;
L_e8c5bd: /* e8c5bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e8c5c0: /* e8c5c0: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c5c2: jne 0xe8c5d1 */
  if (!zf) goto L_e8c5d1;
L_e8c5c4: /* e8c5c4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8c5c5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* e8c5c8: call 0xe90520 */
  esp -= 4; W32(esp, 0xe8c5cdu); SPILL(); f_e90520(); if (g_unwind) return; RELOAD();
/* e8c5cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c5cf: jne 0xe8c60b */
  if (!zf) goto L_e8c60b;
L_e8c5d1: /* e8c5d1: mov esi, dword ptr [esi + 0x45c] */
  esi = R32((uint32_t)(esi + 0x45cu));
/* e8c5d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c5d9: jne 0xe8c5c0 */
  if (!zf) goto L_e8c5c0;
L_e8c5db: /* e8c5db: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c5dd: jne 0xe8c60f */
  if (!zf) goto L_e8c60f;
L_e8c5df: /* e8c5df: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e8c5e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c5e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c5e8: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e8c5ed: push 0x460 */
  { uint32_t v = 0x460u; esp -= 4; W32(esp, v); }
/* e8c5f2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe8c5f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c5f4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* e8c5f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c5fa: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* e8c5fe: je 0xe8c60f */
  if (zf) goto L_e8c60f;
L_e8c600: /* e8c600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8c601: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c602: mov ecx, eax */
  ecx = eax;
/* e8c604: call 0xe9af20 */
  esp -= 4; W32(esp, 0xe8c609u); SPILL(); f_e9af20(); if (g_unwind) return; RELOAD();
/* e8c609: jmp 0xe8c611 */
  goto L_e8c611;
L_e8c60b: /* e8c60b: mov eax, esi */
  eax = esi;
/* e8c60d: jmp 0xe8c611 */
  goto L_e8c611;
L_e8c60f: /* e8c60f: xor eax, eax */
  eax = 0;
L_e8c611: /* e8c611: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8c615: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c616: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c617: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8c618: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8c61f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8c620: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c623: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e8c630(void) {
  LOAD_REGS();
L_e8c630: /* e8c630: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8c636: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8c638: push 0xeacb82 */
  { uint32_t v = 0xeacb82u; esp -= 4; W32(esp, v); }
/* e8c63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c63e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8c645: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8c648: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8c649: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* e8c64d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c64e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c64f: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* e8c653: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c655: je 0xe8c6a1 */
  if (zf) goto L_e8c6a1;
L_e8c657: /* e8c657: mov eax, ebx */
  eax = ebx;
/* e8c659: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* e8c65d: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8c662u); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8c662: mov ecx, eax */
  ecx = eax;
/* e8c664: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* e8c66c: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8c672u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8c672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c673: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8c678: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c67a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c67b: push 0xeb05e8 */
  { uint32_t v = 0xeb05e8u; esp -= 4; W32(esp, v); }
/* e8c680: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8c685: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8c686: call dword ptr [0xeae1c0] */
  esp -= 4; W32(esp, 0xe8c68cu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e8c68c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c68f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* e8c693: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* e8c69b: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8c6a1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e8c6a1: /* e8c6a1: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* e8c6a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c6a7: je 0xe8c70c */
  if (zf) goto L_e8c70c;
L_e8c6a9: /* e8c6a9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c6ab: je 0xe8c6f5 */
  if (zf) goto L_e8c6f5;
L_e8c6ad: /* e8c6ad: mov eax, ebx */
  eax = ebx;
/* e8c6af: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* e8c6b3: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8c6b8u); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8c6b8: mov ecx, eax */
  ecx = eax;
/* e8c6ba: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* e8c6c2: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8c6c8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8c6c8: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8c6ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c6cf: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8c6d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c6d2: push 0xeb04f0 */
  { uint32_t v = 0xeb04f0u; esp -= 4; W32(esp, v); }
/* e8c6d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c6d8: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8c6deu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8c6de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c6e1: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8c6e5: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* e8c6ed: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8c6f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e8c6f3: jmp 0xe8c70c */
  goto L_e8c70c;
L_e8c6f5: /* e8c6f5: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8c6fb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c6fd: push 0xeb0470 */
  { uint32_t v = 0xeb0470u; esp -= 4; W32(esp, v); }
/* e8c702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8c703: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8c709u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8c709: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8c70c: /* e8c70c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e8c710: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c711: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c712: xor eax, eax */
  eax = 0;
/* e8c714: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8c715: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8c71c: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c71f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e8c730(void) {
  LOAD_REGS();
L_e8c730: /* e8c730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c731: mov esi, ecx */
  esi = ecx;
/* e8c733: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* e8c739: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c73b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c73c: mov dword ptr [esi + 0x40bc], 0 */
  W32((uint32_t)(esi + 0x40bcu), 0x0u);
/* e8c746: mov dword ptr [esi + 0x40c0], 0 */
  W32((uint32_t)(esi + 0x40c0u), 0x0u);
/* e8c750: mov dword ptr [esi + 0x40c4], 0 */
  W32((uint32_t)(esi + 0x40c4u), 0x0u);
/* e8c75a: je 0xe8c77a */
  if (zf) goto L_e8c77a;
L_e8c75c: /* e8c75c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e8c760: /* e8c760: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* e8c766: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c768: je 0xe8c770 */
  if (zf) goto L_e8c770;
L_e8c76a: /* e8c76a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8c76c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8c76e: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xe8c770u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8c770: /* e8c770: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* e8c776: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c778: jne 0xe8c760 */
  if (!zf) goto L_e8c760;
L_e8c77a: /* e8c77a: mov eax, dword ptr [esi + 0x40b4] */
  eax = R32((uint32_t)(esi + 0x40b4u));
/* e8c780: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c782: je 0xe8c7ad */
  if (zf) goto L_e8c7ad;
L_e8c784: /* e8c784: mov edi, dword ptr [esi + 0x40b4] */
  edi = R32((uint32_t)(esi + 0x40b4u));
/* e8c78a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c78c: je 0xe8c7a3 */
  if (zf) goto L_e8c7a3;
L_e8c78e: /* e8c78e: mov ecx, edi */
  ecx = edi;
/* e8c790: call 0xe9ae70 */
  esp -= 4; W32(esp, 0xe8c795u); SPILL(); f_e9ae70(); if (g_unwind) return; RELOAD();
/* e8c795: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e8c79b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e8c79d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c79f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c7a0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe8c7a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8c7a3: /* e8c7a3: mov eax, dword ptr [esi + 0x40b4] */
  eax = R32((uint32_t)(esi + 0x40b4u));
/* e8c7a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c7ab: jne 0xe8c784 */
  if (!zf) goto L_e8c784;
L_e8c7ad: /* e8c7ad: mov eax, dword ptr [esi + 0x40b8] */
  eax = R32((uint32_t)(esi + 0x40b8u));
/* e8c7b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c7b5: je 0xe8c7e8 */
  if (zf) goto L_e8c7e8;
L_e8c7b7: /* e8c7b7: jmp 0xe8c7c0 */
  goto L_e8c7c0;
L_e8c7c0: /* e8c7c0: mov edi, dword ptr [esi + 0x40b8] */
  edi = R32((uint32_t)(esi + 0x40b8u));
/* e8c7c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c7c8: je 0xe8c7de */
  if (zf) goto L_e8c7de;
L_e8c7ca: /* e8c7ca: mov ecx, edi */
  ecx = edi;
/* e8c7cc: call 0xe986d0 */
  esp -= 4; W32(esp, 0xe8c7d1u); SPILL(); f_e986d0(); if (g_unwind) return; RELOAD();
/* e8c7d1: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e8c7d6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c7d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c7da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c7db: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe8c7deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8c7de: /* e8c7de: mov eax, dword ptr [esi + 0x40b8] */
  eax = R32((uint32_t)(esi + 0x40b8u));
/* e8c7e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c7e6: jne 0xe8c7c0 */
  if (!zf) goto L_e8c7c0;
L_e8c7e8: /* e8c7e8: mov eax, dword ptr [esi + 0x40c8] */
  eax = R32((uint32_t)(esi + 0x40c8u));
/* e8c7ee: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* e8c7f1: call dword ptr [0xeae29c] */
  esp -= 4; W32(esp, 0xe8c7f7u); SPILL(); f_6c97c3(); if (g_unwind) return; /* Engine!?ClearFallbacks@UMaterial@@SAXXZ */ RELOAD();
/* e8c7f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c7f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c7f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8c7b9(void) {
  LOAD_REGS();
L_e8c7b9: /* e8c7b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e8c7c0: /* e8c7c0: mov edi, dword ptr [esi + 0x40b8] */
  edi = R32((uint32_t)(esi + 0x40b8u));
/* e8c7c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c7c8: je 0xe8c7de */
  if (zf) goto L_e8c7de;
L_e8c7ca: /* e8c7ca: mov ecx, edi */
  ecx = edi;
/* e8c7cc: call 0xe986d0 */
  esp -= 4; W32(esp, 0xe8c7d1u); SPILL(); f_e986d0(); if (g_unwind) return; RELOAD();
/* e8c7d1: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e8c7d6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c7d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c7da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c7db: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe8c7deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8c7de: /* e8c7de: mov eax, dword ptr [esi + 0x40b8] */
  eax = R32((uint32_t)(esi + 0x40b8u));
/* e8c7e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c7e6: jne 0xe8c7c0 */
  if (!zf) goto L_e8c7c0;
L_e8c7e8: /* e8c7e8: mov eax, dword ptr [esi + 0x40c8] */
  eax = R32((uint32_t)(esi + 0x40c8u));
/* e8c7ee: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* e8c7f1: call dword ptr [0xeae29c] */
  esp -= 4; W32(esp, 0xe8c7f7u); SPILL(); f_6c97c3(); if (g_unwind) return; /* Engine!?ClearFallbacks@UMaterial@@SAXXZ */ RELOAD();
/* e8c7f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c7f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c7f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8c800(void) {
  LOAD_REGS();
L_e8c800: /* e8c800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8c801: mov ebp, esp */
  ebp = esp;
/* e8c803: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e8c806: sub esp, 0x614 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x614u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8c80c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8c80d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c80e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c80f: push 0xeafadc */
  { uint32_t v = 0xeafadcu; esp -= 4; W32(esp, v); }
/* e8c814: mov ebx, ecx */
  ebx = ecx;
/* e8c816: call dword ptr [0xeae1a8] */
  esp -= 4; W32(esp, 0xe8c81cu); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* e8c81c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c81d: call dword ptr [0xeae1a4] */
  esp -= 4; W32(esp, 0xe8c823u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* e8c823: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c826: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c828: jne 0xe8c950 */
  if (!zf) goto L_e8c950;
L_e8c82e: /* e8c82e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e8c831: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* e8c834: fld dword ptr [eax + 0x78] */
  { double v = F32((uint32_t)(eax + 0x78u)); FPUSH(v); }
/* e8c837: mov ecx, dword ptr [eax + 0x74] */
  ecx = R32((uint32_t)(eax + 0x74u));
/* e8c83a: fld dword ptr [eax + 0x70] */
  { double v = F32((uint32_t)(eax + 0x70u)); FPUSH(v); }
/* e8c83d: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* e8c841: fld dword ptr [0xeaed44] */
  { double v = F32((uint32_t)(0xeaed44u)); FPUSH(v); }
/* e8c847: mov edi, dword ptr [0xeae1d0] */
  edi = R32((uint32_t)(0xeae1d0u));
/* e8c84d: fdiv st(2) */
  ST0 = ST0 / STI(2);
/* e8c84f: xor esi, esi */
  esi = 0;
/* e8c851: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e8c855: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* e8c859: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* e8c85d: fadd dword ptr [0xeaed40] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed40u)));
/* e8c863: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* e8c867: fsub dword ptr [0xeaed40] */
  ST0 = ST0 - (F32((uint32_t)(0xeaed40u)));
/* e8c86d: fmul dword ptr [0xeb060c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb060cu)));
/* e8c873: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* e8c877: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e8c879: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* e8c87d: fmul dword ptr [0xeb060c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb060cu)));
/* e8c883: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* e8c887: jmp 0xe8c890 */
  goto L_e8c890;
L_e8c890: /* e8c890: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e8c894: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8c897: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e8c89b: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* e8c89f: fmul dword ptr [0xeb0608] */
  ST0 = ST0 * (F32((uint32_t)(0xeb0608u)));
/* e8c8a5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* e8c8a8: call dword ptr [0xeae1cc] */
  esp -= 4; W32(esp, 0xe8c8aeu); SPILL(); f_4e2abd(); if (g_unwind) return; /* Core!?appPow@@YANNN@Z */ RELOAD();
/* e8c8ae: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* e8c8b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c8b5: fmul qword ptr [0xeb0600] */
  ST0 = ST0 * (F64((uint32_t)(0xeb0600u)));
/* e8c8bb: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* e8c8bf: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* e8c8c3: fadd qword ptr [0xeb05f8] */
  ST0 = ST0 + (F64((uint32_t)(0xeb05f8u)));
/* e8c8c9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e8c8cc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8c8ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c8ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c8d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8c8d3: jge 0xe8c8d9 */
  if ((sf == of)) goto L_e8c8d9;
L_e8c8d5: /* e8c8d5: xor eax, eax */
  eax = 0;
/* e8c8d7: jmp 0xe8c8e5 */
  goto L_e8c8e5;
L_e8c8d9: /* e8c8d9: cmp eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c8de: jl 0xe8c8e5 */
  if ((sf != of)) goto L_e8c8e5;
L_e8c8e0: /* e8c8e0: mov eax, 0xffff */
  eax = 0xffffu;
L_e8c8e5: /* e8c8e5: mov word ptr [esp + esi*2 + 0x420], ax */
  W16((uint32_t)(esp + esi*2 + 0x420u), (eax & 0xffffu));
/* e8c8ed: mov word ptr [esp + esi*2 + 0x220], ax */
  W16((uint32_t)(esp + esi*2 + 0x220u), (eax & 0xffffu));
/* e8c8f5: mov word ptr [esp + esi*2 + 0x20], ax */
  W16((uint32_t)(esp + esi*2 + 0x20u), (eax & 0xffffu));
/* e8c8fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8c8fb: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c901: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e8c905: jl 0xe8c890 */
  if ((sf != of)) goto L_e8c890;
L_e8c907: /* e8c907: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8c90d: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c910: jne 0xe8c93e */
  if (!zf) goto L_e8c93e;
L_e8c912: /* e8c912: mov eax, dword ptr [ebx + 0x46b4] */
  eax = R32((uint32_t)(ebx + 0x46b4u));
/* e8c918: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c91a: je 0xe8c93e */
  if (zf) goto L_e8c93e;
L_e8c91c: /* e8c91c: test dword ptr [ebx + 0x4158], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4158u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c926: je 0xe8c93e */
  if (zf) goto L_e8c93e;
L_e8c928: /* e8c928: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c92a: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* e8c92e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8c92f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8c931: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c932: call dword ptr [ecx + 0x48] */
  { uint32_t t = R32((uint32_t)(ecx + 0x48u)); esp -= 4; W32(esp, 0xe8c935u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8c938: mov esp, ebp */
  esp = ebp;
/* e8c93a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8c93b: ret 4 */
  esp += 8; SPILL(); return;
L_e8c93e: /* e8c93e: mov ecx, dword ptr [ebx + 0x46ec] */
  ecx = R32((uint32_t)(ebx + 0x46ecu));
/* e8c944: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* e8c948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8c94a: call dword ptr [0xeae2e4] */
  esp -= 4; W32(esp, 0xe8c950u); SPILL(); call_ind(R32(0xeae2e4u)); if (g_unwind) return; /* GDI32!SetDeviceGammaRamp */ RELOAD();
L_e8c950: /* e8c950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c952: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8c953: mov esp, ebp */
  esp = ebp;
/* e8c955: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8c956: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8c889(void) {
  LOAD_REGS();
L_e8c889: /* e8c889: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e8c890: /* e8c890: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e8c894: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8c897: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e8c89b: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* e8c89f: fmul dword ptr [0xeb0608] */
  ST0 = ST0 * (F32((uint32_t)(0xeb0608u)));
/* e8c8a5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* e8c8a8: call dword ptr [0xeae1cc] */
  esp -= 4; W32(esp, 0xe8c8aeu); SPILL(); f_4e2abd(); if (g_unwind) return; /* Core!?appPow@@YANNN@Z */ RELOAD();
/* e8c8ae: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* e8c8b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c8b5: fmul qword ptr [0xeb0600] */
  ST0 = ST0 * (F64((uint32_t)(0xeb0600u)));
/* e8c8bb: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* e8c8bf: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* e8c8c3: fadd qword ptr [0xeb05f8] */
  ST0 = ST0 + (F64((uint32_t)(0xeb05f8u)));
/* e8c8c9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e8c8cc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8c8ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c8ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c8d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8c8d3: jge 0xe8c8d9 */
  if ((sf == of)) goto L_e8c8d9;
L_e8c8d5: /* e8c8d5: xor eax, eax */
  eax = 0;
/* e8c8d7: jmp 0xe8c8e5 */
  goto L_e8c8e5;
L_e8c8d9: /* e8c8d9: cmp eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c8de: jl 0xe8c8e5 */
  if ((sf != of)) goto L_e8c8e5;
L_e8c8e0: /* e8c8e0: mov eax, 0xffff */
  eax = 0xffffu;
L_e8c8e5: /* e8c8e5: mov word ptr [esp + esi*2 + 0x420], ax */
  W16((uint32_t)(esp + esi*2 + 0x420u), (eax & 0xffffu));
/* e8c8ed: mov word ptr [esp + esi*2 + 0x220], ax */
  W16((uint32_t)(esp + esi*2 + 0x220u), (eax & 0xffffu));
/* e8c8f5: mov word ptr [esp + esi*2 + 0x20], ax */
  W16((uint32_t)(esp + esi*2 + 0x20u), (eax & 0xffffu));
/* e8c8fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8c8fb: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c901: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e8c905: jl 0xe8c890 */
  if ((sf != of)) goto L_e8c890;
L_e8c907: /* e8c907: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8c90d: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8c910: jne 0xe8c93e */
  if (!zf) goto L_e8c93e;
L_e8c912: /* e8c912: mov eax, dword ptr [ebx + 0x46b4] */
  eax = R32((uint32_t)(ebx + 0x46b4u));
/* e8c918: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c91a: je 0xe8c93e */
  if (zf) goto L_e8c93e;
L_e8c91c: /* e8c91c: test dword ptr [ebx + 0x4158], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4158u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c926: je 0xe8c93e */
  if (zf) goto L_e8c93e;
L_e8c928: /* e8c928: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8c92a: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* e8c92e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8c92f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8c931: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c932: call dword ptr [ecx + 0x48] */
  { uint32_t t = R32((uint32_t)(ecx + 0x48u)); esp -= 4; W32(esp, 0xe8c935u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8c938: mov esp, ebp */
  esp = ebp;
/* e8c93a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8c93b: ret 4 */
  esp += 8; SPILL(); return;
L_e8c93e: /* e8c93e: mov ecx, dword ptr [ebx + 0x46ec] */
  ecx = R32((uint32_t)(ebx + 0x46ecu));
/* e8c944: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* e8c948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8c94a: call dword ptr [0xeae2e4] */
  esp -= 4; W32(esp, 0xe8c950u); SPILL(); call_ind(R32(0xeae2e4u)); if (g_unwind) return; /* GDI32!SetDeviceGammaRamp */ RELOAD();
/* e8c950: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c952: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8c953: mov esp, ebp */
  esp = ebp;
/* e8c955: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8c956: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8c960(void) {
  LOAD_REGS();
L_e8c960: /* e8c960: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8c963: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8c964: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c965: mov esi, dword ptr [0xeae1e8] */
  esi = R32((uint32_t)(0xeae1e8u));
/* e8c96b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8c96c: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* e8c970: push 0xeb0968 */
  { uint32_t v = 0xeb0968u; esp -= 4; W32(esp, v); }
/* e8c975: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c976: mov edi, ecx */
  edi = ecx;
/* e8c978: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8c97au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c97a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c97d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c97f: je 0xe8c9cf */
  if (zf) goto L_e8c9cf;
L_e8c981: /* e8c981: mov ebx, dword ptr [0xeae0b4] */
  ebx = R32((uint32_t)(0xeae0b4u));
/* e8c987: xor esi, esi */
  esi = 0;
/* e8c989: add edi, 0x8c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8c98f: nop  */
L_e8c990: /* e8c990: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8c992: xor ecx, ecx */
  ecx = 0;
/* e8c994: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c996: je 0xe8c9a0 */
  if (zf) goto L_e8c9a0;
L_e8c998: /* e8c998: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* e8c99b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8c99c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c99e: jne 0xe8c998 */
  if (!zf) goto L_e8c998;
L_e8c9a0: /* e8c9a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8c9a1: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8c9a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8c9a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8c9aa: push 0xeb0920 */
  { uint32_t v = 0xeb0920u; esp -= 4; W32(esp, v); }
/* e8c9af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8c9b0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xe8c9b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c9b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c9b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8c9b6: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8c9b9: cmp esi, 0x1000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8c9bf: jl 0xe8c990 */
  if ((sf != of)) goto L_e8c990;
L_e8c9c1: /* e8c9c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8c9c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8c9c3: mov eax, 1 */
  eax = 0x1u;
/* e8c9c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8c9c9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c9cc: ret 8 */
  esp += 12; SPILL(); return;
L_e8c9cf: /* e8c9cf: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* e8c9d3: push 0xeb08fc */
  { uint32_t v = 0xeb08fcu; esp -= 4; W32(esp, v); }
/* e8c9d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8c9d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8c9dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8c9db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c9de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c9e0: je 0xe8ca48 */
  if (zf) goto L_e8ca48;
L_e8c9e2: /* e8c9e2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e8c9e6: push 0xeb08f8 */
  { uint32_t v = 0xeb08f8u; esp -= 4; W32(esp, v); }
/* e8c9eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8c9ec: call dword ptr [0xeae1e4] */
  esp -= 4; W32(esp, 0xe8c9f2u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* e8c9f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8c9f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8c9f7: je 0xe8ca25 */
  if (zf) goto L_e8ca25;
L_e8c9f9: /* e8c9f9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e8c9fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8c9fe: call dword ptr [0xeae1e0] */
  esp -= 4; W32(esp, 0xe8ca04u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* e8ca04: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ca07: lea ecx, [edi - 0x28] */
  ecx = (uint32_t)(edi + 0xffffffd8u);
/* e8ca0a: mov dword ptr [edi + 0x4108], eax */
  W32((uint32_t)(edi + 0x4108u), eax);
/* e8ca10: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8ca12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ca14: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xe8ca17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ca17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8ca18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8ca19: mov eax, 1 */
  eax = 0x1u;
/* e8ca1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8ca1f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ca22: ret 8 */
  esp += 12; SPILL(); return;
L_e8ca25: /* e8ca25: mov eax, dword ptr [edi - 0x28] */
  eax = R32((uint32_t)(edi + 0xffffffd8u));
/* e8ca28: lea ecx, [edi - 0x28] */
  ecx = (uint32_t)(edi + 0xffffffd8u);
/* e8ca2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ca2d: mov dword ptr [edi + 0x4108], 0xff */
  W32((uint32_t)(edi + 0x4108u), 0xffu);
/* e8ca37: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xe8ca3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ca3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8ca3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8ca3c: mov eax, 1 */
  eax = 0x1u;
/* e8ca41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8ca42: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ca45: ret 8 */
  esp += 12; SPILL(); return;
L_e8ca48: /* e8ca48: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* e8ca4c: push 0xeb08e4 */
  { uint32_t v = 0xeb08e4u; esp -= 4; W32(esp, v); }
/* e8ca51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ca52: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8ca54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ca54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ca57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ca59: je 0xe8ca96 */
  if (zf) goto L_e8ca96;
L_e8ca5b: /* e8ca5b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e8ca5f: push 0xeb08f8 */
  { uint32_t v = 0xeb08f8u; esp -= 4; W32(esp, v); }
/* e8ca64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ca65: call dword ptr [0xeae1e4] */
  esp -= 4; W32(esp, 0xe8ca6bu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* e8ca6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ca6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ca70: je 0xe8ca88 */
  if (zf) goto L_e8ca88;
L_e8ca72: /* e8ca72: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e8ca76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ca77: call dword ptr [0xeae1dc] */
  esp -= 4; W32(esp, 0xe8ca7du); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* e8ca7d: mov ecx, dword ptr [0xeae1d8] */
  ecx = R32((uint32_t)(0xeae1d8u));
/* e8ca83: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e8ca85: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ca88: /* e8ca88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8ca89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8ca8a: mov eax, 1 */
  eax = 0x1u;
/* e8ca8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8ca90: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ca93: ret 8 */
  esp += 12; SPILL(); return;
L_e8ca96: /* e8ca96: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8ca97: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* e8ca9b: push 0xeb08c8 */
  { uint32_t v = 0xeb08c8u; esp -= 4; W32(esp, v); }
/* e8caa0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8caa1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8caa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8caa3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8caa6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8caa8: je 0xe8cc17 */
  if (zf) goto L_e8cc17;
L_e8caae: /* e8caae: mov esi, dword ptr [edi + 0x88] */
  esi = R32((uint32_t)(edi + 0x88u));
/* e8cab4: xor ebx, ebx */
  ebx = 0;
/* e8cab6: xor ebp, ebp */
  ebp = 0;
/* e8cab8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8caba: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e8cabe: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* e8cac2: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* e8cac6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e8caca: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* e8cace: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* e8cad2: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* e8cad6: je 0xe8cb64 */
  if (zf) goto L_e8cb64;
L_e8cadc: /* e8cadc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e8cae0: /* e8cae0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8cae2: mov ecx, esi */
  ecx = esi;
/* e8cae4: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xe8cae7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cae7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cae9: mov ecx, esi */
  ecx = esi;
/* e8caeb: je 0xe8cb07 */
  if (zf) goto L_e8cb07;
L_e8caed: /* e8caed: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8caef: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe8caf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8caf2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8caf6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8caf8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8cafc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8cafd: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* e8cb01: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e8cb05: jmp 0xe8cb59 */
  goto L_e8cb59;
L_e8cb07: /* e8cb07: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8cb09: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe8cb0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cb0e: mov ecx, esi */
  ecx = esi;
/* e8cb10: je 0xe8cb2c */
  if (zf) goto L_e8cb2c;
L_e8cb12: /* e8cb12: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8cb14: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe8cb17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb17: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e8cb1b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8cb1d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e8cb21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8cb22: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* e8cb26: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e8cb2a: jmp 0xe8cb59 */
  goto L_e8cb59;
L_e8cb2c: /* e8cb2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8cb2e: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe8cb31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cb33: mov ecx, esi */
  ecx = esi;
/* e8cb35: je 0xe8cb51 */
  if (zf) goto L_e8cb51;
L_e8cb37: /* e8cb37: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8cb39: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe8cb3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb3c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e8cb40: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8cb42: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e8cb46: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8cb47: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* e8cb4b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* e8cb4f: jmp 0xe8cb59 */
  goto L_e8cb59;
L_e8cb51: /* e8cb51: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8cb53: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0xe8cb56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb56: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e8cb58: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_e8cb59: /* e8cb59: mov esi, dword ptr [esi + 0x18] */
  esi = R32((uint32_t)(esi + 0x18u));
/* e8cb5c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cb5e: jne 0xe8cae0 */
  if (!zf) goto L_e8cae0;
L_e8cb60: /* e8cb60: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
L_e8cb64: /* e8cb64: mov eax, dword ptr [edi + 0x468c] */
  eax = R32((uint32_t)(edi + 0x468cu));
/* e8cb6a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8cb6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cb6d: call dword ptr [ecx + 0x10] */
  { uint32_t t = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, 0xe8cb70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb70: mov ebx, dword ptr [edi + 0x4650] */
  ebx = R32((uint32_t)(edi + 0x4650u));
/* e8cb76: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* e8cb7a: mov edi, dword ptr [0xeae0b4] */
  edi = R32((uint32_t)(0xeae0b4u));
/* e8cb80: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* e8cb82: push 0xeb0898 */
  { uint32_t v = 0xeb0898u; esp -= 4; W32(esp, v); }
/* e8cb87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cb88: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* e8cb8b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cb8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb8d: push 0xeb08f8 */
  { uint32_t v = 0xeb08f8u; esp -= 4; W32(esp, v); }
/* e8cb92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cb93: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cb95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb95: push 0xeb0848 */
  { uint32_t v = 0xeb0848u; esp -= 4; W32(esp, v); }
/* e8cb9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cb9b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cb9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cb9d: push 0xeb07f8 */
  { uint32_t v = 0xeb07f8u; esp -= 4; W32(esp, v); }
/* e8cba2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cba3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cba5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cba5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e8cba9: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* e8cbad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cbae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cbaf: push 0xeb07b0 */
  { uint32_t v = 0xeb07b0u; esp -= 4; W32(esp, v); }
/* e8cbb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cbb5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cbb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cbb7: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* e8cbbb: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* e8cbbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8cbc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cbc1: push 0xeb0768 */
  { uint32_t v = 0xeb0768u; esp -= 4; W32(esp, v); }
/* e8cbc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cbc7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cbc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cbc9: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* e8cbcd: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* e8cbd1: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cbd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cbd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8cbd6: push 0xeb0720 */
  { uint32_t v = 0xeb0720u; esp -= 4; W32(esp, v); }
/* e8cbdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cbdc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cbdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cbde: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* e8cbe2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8cbe3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cbe4: push 0xeb06d8 */
  { uint32_t v = 0xeb06d8u; esp -= 4; W32(esp, v); }
/* e8cbe9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cbea: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cbecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cbec: push 0xeb08f8 */
  { uint32_t v = 0xeb08f8u; esp -= 4; W32(esp, v); }
/* e8cbf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cbf2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cbf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cbf4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8cbf5: push 0xeb0678 */
  { uint32_t v = 0xeb0678u; esp -= 4; W32(esp, v); }
/* e8cbfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cbfb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cbfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cbfd: push 0xeb08f8 */
  { uint32_t v = 0xeb08f8u; esp -= 4; W32(esp, v); }
/* e8cc02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cc03: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8cc05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cc05: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cc08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8cc09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8cc0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8cc0b: mov eax, 1 */
  eax = 0x1u;
/* e8cc10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8cc11: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cc14: ret 8 */
  esp += 12; SPILL(); return;
L_e8cc17: /* e8cc17: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* e8cc1b: push 0xeb064c */
  { uint32_t v = 0xeb064cu; esp -= 4; W32(esp, v); }
/* e8cc20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cc21: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8cc23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cc23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cc26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cc28: je 0xe8ccfe */
  if (zf) goto L_e8ccfe;
L_e8cc2e: /* e8cc2e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e8cc32: mov esi, dword ptr [0xeae1d4] */
  esi = R32((uint32_t)(0xeae1d4u));
/* e8cc38: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* e8cc3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8cc3d: xor ebx, ebx */
  ebx = 0;
/* e8cc3f: push 0xeb063c */
  { uint32_t v = 0xeb063cu; esp -= 4; W32(esp, v); }
/* e8cc44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cc45: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* e8cc49: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* e8cc4d: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* e8cc51: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* e8cc55: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8cc57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cc57: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cc5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cc5c: je 0xe8ccd7 */
  if (zf) goto L_e8ccd7;
L_e8cc5e: /* e8cc5e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e8cc62: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* e8cc66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cc67: push 0xeb062c */
  { uint32_t v = 0xeb062cu; esp -= 4; W32(esp, v); }
/* e8cc6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8cc6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8cc6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cc6f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cc72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cc74: je 0xe8ccd7 */
  if (zf) goto L_e8ccd7;
L_e8cc76: /* e8cc76: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* e8cc7a: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* e8cc7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cc7f: push 0xeb0618 */
  { uint32_t v = 0xeb0618u; esp -= 4; W32(esp, v); }
/* e8cc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cc85: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8cc87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cc87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cc8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cc8c: je 0xe8ccd7 */
  if (zf) goto L_e8ccd7;
L_e8cc8e: /* e8cc8e: mov eax, dword ptr [edi + 0x4630] */
  eax = R32((uint32_t)(edi + 0x4630u));
/* e8cc94: xor esi, esi */
  esi = 0;
/* e8cc96: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8cc98: jle 0xe8ccd7 */
  if ((zf || sf != of)) goto L_e8ccd7;
L_e8cc9a: /* e8cc9a: mov edx, dword ptr [edi + 0x462c] */
  edx = R32((uint32_t)(edi + 0x462cu));
/* e8cca0: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* e8cca4: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_e8cca8: /* e8cca8: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ccaa: jne 0xe8ccbf */
  if (!zf) goto L_e8ccbf;
L_e8ccac: /* e8ccac: cmp dword ptr [edx + 4], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ccaf: jne 0xe8ccbf */
  if (!zf) goto L_e8ccbf;
L_e8ccb1: /* e8ccb1: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* e8ccb4: call 0xe8c4b0 */
  esp -= 4; W32(esp, 0xe8ccb9u); SPILL(); f_e8c4b0(); if (g_unwind) return; RELOAD();
/* e8ccb9: cmp eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ccbd: je 0xe8cccf */
  if (zf) goto L_e8cccf;
L_e8ccbf: /* e8ccbf: mov eax, dword ptr [edi + 0x4630] */
  eax = R32((uint32_t)(edi + 0x4630u));
/* e8ccc5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8ccc6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8ccc9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8cccb: jl 0xe8cca8 */
  if ((sf != of)) goto L_e8cca8;
L_e8cccd: /* e8cccd: jmp 0xe8ccd7 */
  goto L_e8ccd7;
L_e8cccf: /* e8cccf: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
L_e8ccd7: /* e8ccd7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8ccdb: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* e8ccdf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8cce0: push 0xeb0610 */
  { uint32_t v = 0xeb0610u; esp -= 4; W32(esp, v); }
/* e8cce5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cce6: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8ccecu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8ccec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ccef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8ccf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8ccf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8ccf2: mov eax, 1 */
  eax = 0x1u;
/* e8ccf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8ccf8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ccfb: ret 8 */
  esp += 12; SPILL(); return;
L_e8ccfe: /* e8ccfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8ccff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8cd00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8cd01: xor eax, eax */
  eax = 0;
/* e8cd03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8cd04: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cd07: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e8cd10(void) {
  LOAD_REGS();
L_e8cd10: /* e8cd10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8cd12: push 0xeacb95 */
  { uint32_t v = 0xeacb95u; esp -= 4; W32(esp, v); }
/* e8cd17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8cd1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cd1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8cd25: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8cd28: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8cd29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cd2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8cd2b: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* e8cd2f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e8cd31: mov ebp, dword ptr [0xeae0b4] */
  ebp = R32((uint32_t)(0xeae0b4u));
/* e8cd37: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e8cd3b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8cd3f: inc dword ptr [eax + 0x46a8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x46a8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x46a8u), r);
  }
/* e8cd45: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8cd49: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e8cd4f: xor edi, edi */
  edi = 0;
/* e8cd51: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8cd53: jne 0xe8cd9c */
  if (!zf) goto L_e8cd9c;
L_e8cd55: /* e8cd55: mov dword ptr [eax + 0x468c], 1 */
  W32((uint32_t)(eax + 0x468cu), 0x1u);
/* e8cd5f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8cd63: mov eax, dword ptr [ecx + 0x4690] */
  eax = R32((uint32_t)(ecx + 0x4690u));
/* e8cd69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8cd6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8cd6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8cd6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cd6f: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* e8cd73: mov esi, dword ptr [eax + 0x8c] */
  esi = R32((uint32_t)(eax + 0x8cu));
/* e8cd79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cd7a: mov esi, dword ptr [eax + 0x88] */
  esi = R32((uint32_t)(eax + 0x88u));
/* e8cd80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cd81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cd82: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xe8cd85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cd85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cd87: jne 0xe8cd9c */
  if (!zf) goto L_e8cd9c;
L_e8cd89: /* e8cd89: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8cd8f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8cd91: push 0xeb09bc */
  { uint32_t v = 0xeb09bcu; esp -= 4; W32(esp, v); }
/* e8cd96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cd97: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8cd99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cd99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8cd9c: /* e8cd9c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8cda0: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8cda6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8cda8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cda9: call dword ptr [ecx + 0xc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, 0xe8cdacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cdac: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8cdae: jge 0xe8ce0d */
  if ((sf == of)) goto L_e8ce0d;
L_e8cdb0: /* e8cdb0: cmp eax, 0x88760868 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760868u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8cdb5: je 0xe8cebd */
  if (zf) goto L_e8cebd;
L_e8cdbb: /* e8cdbb: cmp eax, 0x88760869 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760869u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8cdc0: jne 0xe8ce0d */
  if (!zf) goto L_e8ce0d;
L_e8cdc2: /* e8cdc2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8cdc6: mov dword ptr [edx + 0x468c], 1 */
  W32((uint32_t)(edx + 0x468cu), 0x1u);
/* e8cdd0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8cdd4: mov eax, dword ptr [ecx + 0x4690] */
  eax = R32((uint32_t)(ecx + 0x4690u));
/* e8cdda: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8cddc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8cdde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8cddf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cde0: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* e8cde4: mov esi, dword ptr [eax + 0x8c] */
  esi = R32((uint32_t)(eax + 0x8cu));
/* e8cdea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cdeb: mov esi, dword ptr [eax + 0x88] */
  esi = R32((uint32_t)(eax + 0x88u));
/* e8cdf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cdf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cdf3: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0xe8cdf6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cdf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8cdf8: jne 0xe8ce0d */
  if (!zf) goto L_e8ce0d;
L_e8cdfa: /* e8cdfa: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8ce00: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8ce02: push 0xeb09bc */
  { uint32_t v = 0xeb09bcu; esp -= 4; W32(esp, v); }
/* e8ce07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ce08: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ce0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ce0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ce0d: /* e8ce0d: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e8ce11: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8ce15: mov dword ptr [ecx + 0x4694], eax */
  W32((uint32_t)(ecx + 0x4694u), eax);
/* e8ce1b: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* e8ce1f: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* e8ce25: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8ce29: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* e8ce2d: mov esi, dword ptr [ecx + 0x8c] */
  esi = R32((uint32_t)(ecx + 0x8cu));
/* e8ce33: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* e8ce37: cmp dword ptr [edx + 0x4690], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4690u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ce3d: jne 0xe8ce67 */
  if (!zf) goto L_e8ce67;
L_e8ce3f: /* e8ce3f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8ce41: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* e8ce45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ce46: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8ce4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ce4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ce4d: call dword ptr [0xeae370] */
  esp -= 4; W32(esp, 0xe8ce53u); SPILL(); call_ind(R32(0xeae370u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* e8ce53: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e8ce57: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* e8ce5b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8ce5f: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* e8ce63: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
L_e8ce67: /* e8ce67: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* e8ce6b: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* e8ce6f: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* e8ce77: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* e8ce7f: mov ecx, dword ptr [edx + 0x46b8] */
  ecx = R32((uint32_t)(edx + 0x46b8u));
/* e8ce85: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8ce87: jbe 0xe8ce8d */
  if ((cf | zf)) goto L_e8ce8d;
L_e8ce89: /* e8ce89: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
L_e8ce8d: /* e8ce8d: mov eax, dword ptr [edx + 0x46bc] */
  eax = R32((uint32_t)(edx + 0x46bcu));
/* e8ce93: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8ce95: jbe 0xe8ce9b */
  if ((cf | zf)) goto L_e8ce9b;
L_e8ce97: /* e8ce97: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_e8ce9b: /* e8ce9b: mov edx, dword ptr [edx + 0x46b4] */
  edx = R32((uint32_t)(edx + 0x46b4u));
/* e8cea1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e8cea3: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* e8cea7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cea8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cea9: call dword ptr [ecx + 0xa0] */
  { uint32_t t = R32((uint32_t)(ecx + 0xa0u)); esp -= 4; W32(esp, 0xe8ceafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ceaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8ceb1: jge 0xe8ced3 */
  if ((sf == of)) goto L_e8ced3;
L_e8ceb3: /* e8ceb3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8ceb7: mov dword ptr [ecx + 0x4694], edi */
  W32((uint32_t)(ecx + 0x4694u), edi);
L_e8cebd: /* e8cebd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8cebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8cebf: xor eax, eax */
  eax = 0;
/* e8cec1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8cec2: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* e8cec6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8cecd: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ced0: ret 0xc */
  esp += 16; SPILL(); return;
L_e8ced3: /* e8ced3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8ced7: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8cedd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8cedf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cee0: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0xe8cee6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cee6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8cee8: mov byte ptr [0xebdd58], 1 */
  W8((uint32_t)(0xebdd58u), 0x1u);
/* e8ceef: jge 0xe8cf2c */
  if ((sf == of)) goto L_e8cf2c;
L_e8cef1: /* e8cef1: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* e8cef5: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8cefau); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8cefa: mov ecx, eax */
  ecx = eax;
/* e8cefc: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* e8cf00: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8cf06u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8cf06: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8cf0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cf0d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8cf0f: push 0xeb098c */
  { uint32_t v = 0xeb098cu; esp -= 4; W32(esp, v); }
/* e8cf14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cf15: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8cf17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8cf17: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cf1a: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* e8cf1e: mov dword ptr [esp + 0x50], 0xffffffff */
  W32((uint32_t)(esp + 0x50u), 0xffffffffu);
/* e8cf26: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8cf2cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e8cf2c: /* e8cf2c: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* e8cf30: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* e8cf34: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* e8cf38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8cf39: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8cf3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8cf3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8cf3f: add ecx, 0x46f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8cf45: call 0xe90580 */
  esp -= 4; W32(esp, 0xe8cf4au); SPILL(); f_e90580(); if (g_unwind) return; RELOAD();
/* e8cf4a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e8cf4e: mov edx, dword ptr [ecx + 0x30f44] */
  edx = R32((uint32_t)(ecx + 0x30f44u));
/* e8cf54: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8cf59: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e8cf5c: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* e8cf5f: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e8cf62: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e8cf63: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* e8cf65: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8cf69: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8cf6f: mov eax, dword ptr [edx + 0x30f48] */
  eax = R32((uint32_t)(edx + 0x30f48u));
/* e8cf75: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e8cf78: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e8cf7b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e8cf7d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e8cf81: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8cf83: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e8cf85: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8cf87: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e8cf89: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e8cf8d: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* e8cf91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8cf92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8cf93: add eax, 0x46f4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46f4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8cf98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8cf99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8cfa0: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8cfa3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e8cfb0(void) {
  LOAD_REGS();
L_e8cfb0: /* e8cfb0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8cfb3: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* e8cfb7: mov eax, dword ptr [ecx + 0x30f50] */
  eax = R32((uint32_t)(ecx + 0x30f50u));
/* e8cfbd: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8cfc3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e8cfc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8cfc7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8cfc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8cfc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8cfca: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e8cfcd: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e8cfcf: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e8cfd1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8cfd5: mov esi, dword ptr [eax + 0xb0] */
  esi = R32((uint32_t)(eax + 0xb0u));
/* e8cfdb: xor edi, edi */
  edi = 0;
/* e8cfdd: xor ebx, ebx */
  ebx = 0;
/* e8cfdf: xor ebp, ebp */
  ebp = 0;
/* e8cfe1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8cfe3: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* e8cfe7: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* e8cfeb: je 0xe8d049 */
  if (zf) goto L_e8d049;
L_e8cfed: /* e8cfed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e8cff0: /* e8cff0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8cff4: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* e8cff7: cmp ecx, dword ptr [edx + 0x46a8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x46a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8cffd: jne 0xe8d042 */
  if (!zf) goto L_e8d042;
L_e8cfff: /* e8cfff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8d001: mov ecx, esi */
  ecx = esi;
/* e8d003: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xe8d006u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d006: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d008: mov ecx, esi */
  ecx = esi;
/* e8d00a: je 0xe8d019 */
  if (zf) goto L_e8d019;
L_e8d00c: /* e8d00c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8d00e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe8d011u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d011: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e8d013: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e8d017: jmp 0xe8d042 */
  goto L_e8d042;
L_e8d019: /* e8d019: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8d01b: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe8d01eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d01e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d020: mov ecx, esi */
  ecx = esi;
/* e8d022: je 0xe8d02f */
  if (zf) goto L_e8d02f;
L_e8d024: /* e8d024: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8d026: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe8d029u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d029: add dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* e8d02d: jmp 0xe8d042 */
  goto L_e8d042;
L_e8d02f: /* e8d02f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8d031: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe8d034u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d034: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d036: je 0xe8d042 */
  if (zf) goto L_e8d042;
L_e8d038: /* e8d038: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e8d03a: mov ecx, esi */
  ecx = esi;
/* e8d03c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe8d03fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d03f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8d041: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_e8d042: /* e8d042: mov esi, dword ptr [esi + 0x18] */
  esi = R32((uint32_t)(esi + 0x18u));
/* e8d045: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d047: jne 0xe8cff0 */
  if (!zf) goto L_e8cff0;
L_e8d049: /* e8d049: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d04d: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8d053: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d056: call dword ptr [ecx + 0x10] */
  { uint32_t t = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, 0xe8d059u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d059: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8d05d: mov ecx, dword ptr [edx + 0x4678] */
  ecx = R32((uint32_t)(edx + 0x4678u));
/* e8d063: mov edx, dword ptr [edx + 0x30f64] */
  edx = R32((uint32_t)(edx + 0x30f64u));
/* e8d069: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e8d06d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e8d06f: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8d074: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* e8d077: mov dword ptr [eax + edx*4], esi */
  W32((uint32_t)(eax + edx*4), esi);
/* e8d07a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8d07e: mov eax, dword ptr [edx + 0x30f68] */
  eax = R32((uint32_t)(edx + 0x30f68u));
/* e8d084: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e8d08a: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* e8d08d: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* e8d090: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d094: mov edx, dword ptr [eax + 0x30f74] */
  edx = R32((uint32_t)(eax + 0x30f74u));
/* e8d09a: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8d09f: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* e8d0a2: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e8d0a6: mov dword ptr [eax + edx*4], ebp */
  W32((uint32_t)(eax + edx*4), ebp);
/* e8d0a9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8d0ad: mov eax, dword ptr [edx + 0x30f78] */
  eax = R32((uint32_t)(edx + 0x30f78u));
/* e8d0b3: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e8d0b9: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* e8d0bc: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* e8d0bf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d0c3: mov edx, dword ptr [eax + 0x30f70] */
  edx = R32((uint32_t)(eax + 0x30f70u));
/* e8d0c9: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8d0ce: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* e8d0d1: mov dword ptr [eax + edx*4], esi */
  W32((uint32_t)(eax + edx*4), esi);
/* e8d0d4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8d0d8: mov eax, dword ptr [edx + 0x30fbc] */
  eax = R32((uint32_t)(edx + 0x30fbcu));
/* e8d0de: mov edx, dword ptr [0xeae2a0] */
  edx = R32((uint32_t)(0xeae2a0u));
/* e8d0e4: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* e8d0e7: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* e8d0ea: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8d0ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d0f0: je 0xe8d104 */
  if (zf) goto L_e8d104;
L_e8d0f2: /* e8d0f2: mov ecx, dword ptr [eax + 0x2b490] */
  ecx = R32((uint32_t)(eax + 0x2b490u));
/* e8d0f8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d0fa: je 0xe8d104 */
  if (zf) goto L_e8d104;
L_e8d0fc: /* e8d0fc: mov eax, dword ptr [eax + 0x2b494] */
  eax = R32((uint32_t)(eax + 0x2b494u));
/* e8d102: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_e8d104: /* e8d104: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8d108: add ecx, 0x46f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8d10e: call 0xe90640 */
  esp -= 4; W32(esp, 0xe8d113u); SPILL(); f_e90640(); if (g_unwind) return; RELOAD();
/* e8d113: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8d117: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e8d11d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d11f: je 0xe8d131 */
  if (zf) goto L_e8d131;
L_e8d121: /* e8d121: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8d123: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d124: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xe8d12au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d12a: mov byte ptr [0xebdd58], 0 */
  W8((uint32_t)(0xebdd58u), 0x0u);
L_e8d131: /* e8d131: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d135: mov dword ptr [eax + 0x4694], 0 */
  W32((uint32_t)(eax + 0x4694u), 0x0u);
/* e8d13f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8d143: mov edx, dword ptr [ecx + 0x30f4c] */
  edx = R32((uint32_t)(ecx + 0x30f4cu));
/* e8d149: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8d14e: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e8d151: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* e8d154: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e8d157: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8d158: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* e8d15a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8d15e: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d164: mov eax, dword ptr [edx + 0x30f50] */
  eax = R32((uint32_t)(edx + 0x30f50u));
/* e8d16a: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e8d16d: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e8d170: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e8d172: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8d174: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8d175: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8d176: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8d179: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8d17b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8d17c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e8d17e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8d17f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d182: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8d190(void) {
  LOAD_REGS();
L_e8d190: /* e8d190: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d193: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8d194: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* e8d198: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e8d19a: mov edi, eax */
  edi = eax;
/* e8d19c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e8d1a0: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e8d1a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d1a8: je 0xe8d258 */
  if (zf) goto L_e8d258;
L_e8d1ae: /* e8d1ae: mov ecx, dword ptr [eax + 0x40f8] */
  ecx = R32((uint32_t)(eax + 0x40f8u));
/* e8d1b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d1b6: je 0xe8d1df */
  if (zf) goto L_e8d1df;
L_e8d1b8: /* e8d1b8: mov ecx, dword ptr [0xeae1ec] */
  ecx = R32((uint32_t)(0xeae1ecu));
/* e8d1be: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d1c1: jne 0xe8d1df */
  if (!zf) goto L_e8d1df;
L_e8d1c3: /* e8d1c3: mov ecx, dword ptr [eax + 0x4100] */
  ecx = R32((uint32_t)(eax + 0x4100u));
/* e8d1c9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d1cb: jne 0xe8d1df */
  if (!zf) goto L_e8d1df;
L_e8d1cd: /* e8d1cd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8d1cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d1d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d1d3: mov ecx, eax */
  ecx = eax;
/* e8d1d5: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe8d1dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d1db: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_e8d1df: /* e8d1df: mov ecx, dword ptr [eax + 0x4690] */
  ecx = R32((uint32_t)(eax + 0x4690u));
/* e8d1e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d1e7: jne 0xe8d240 */
  if (!zf) goto L_e8d240;
L_e8d1e9: /* e8d1e9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8d1ed: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d1ef: je 0xe8d240 */
  if (zf) goto L_e8d240;
L_e8d1f1: /* e8d1f1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8d1f3: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8d1f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d1f9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8d1fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d1ff: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e8d207: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* e8d20f: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* e8d215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d216: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* e8d21a: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* e8d220: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e8d224: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e8d228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d229: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* e8d22d: mov ecx, dword ptr [edx + 0x46b4] */
  ecx = R32((uint32_t)(edx + 0x46b4u));
/* e8d233: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8d235: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* e8d239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d23a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8d23b: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xe8d23eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d23e: jmp 0xe8d254 */
  goto L_e8d254;
L_e8d240: /* e8d240: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8d246: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d248: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d24a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d24c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d24e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d251: call dword ptr [ecx + 0x3c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x3cu)); esp -= 4; W32(esp, 0xe8d254u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8d254: /* e8d254: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_e8d258: /* e8d258: mov edx, dword ptr [eax + 0x30f54] */
  edx = R32((uint32_t)(eax + 0x30f54u));
/* e8d25e: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8d263: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e8d266: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e8d269: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* e8d26b: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e8d26f: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d275: mov eax, dword ptr [edx + 0x30f58] */
  eax = R32((uint32_t)(edx + 0x30f58u));
/* e8d27b: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e8d27e: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e8d281: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e8d283: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8d285: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e8d287: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8d289: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e8d28b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8d28c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d28f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8d2a0(void) {
  LOAD_REGS();
L_e8d2a0: /* e8d2a0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8d2a6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8d2a8: push 0xeacbba */
  { uint32_t v = 0xeacbbau; esp -= 4; W32(esp, v); }
/* e8d2ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d2ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8d2b5: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e8d2bb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d2bd: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d2c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8d2c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8d2c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8d2c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8d2c4: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* e8d2c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8d2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d2cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d2cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d2ce: call dword ptr [ecx + 0x40] */
  { uint32_t t = R32((uint32_t)(ecx + 0x40u)); esp -= 4; W32(esp, 0xe8d2d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d2d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d2d3: mov ebp, dword ptr [0xeae0b4] */
  ebp = R32((uint32_t)(0xeae0b4u));
/* e8d2d9: jge 0xe8d319 */
  if ((sf == of)) goto L_e8d319;
L_e8d2db: /* e8d2db: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* e8d2df: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8d2e4u); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8d2e4: mov ecx, eax */
  ecx = eax;
/* e8d2e6: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* e8d2ee: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8d2f4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8d2f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d2f5: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8d2fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d2fc: push 0xeb0a88 */
  { uint32_t v = 0xeb0a88u; esp -= 4; W32(esp, v); }
/* e8d301: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8d302: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8d304u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d304: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d307: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e8d30b: mov dword ptr [esp + 0x54], 0xffffffff */
  W32((uint32_t)(esp + 0x54u), 0xffffffffu);
/* e8d313: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8d319u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e8d319: /* e8d319: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d31d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8d31f: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* e8d323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8d324: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d325: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xe8d328u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d328: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d32a: mov ebx, 1 */
  ebx = 0x1u;
/* e8d32f: jge 0xe8d36c */
  if ((sf == of)) goto L_e8d36c;
L_e8d331: /* e8d331: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* e8d335: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8d33au); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8d33a: mov ecx, eax */
  ecx = eax;
/* e8d33c: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* e8d340: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8d346u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8d346: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8d34c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d34d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8d34f: push 0xeb0a60 */
  { uint32_t v = 0xeb0a60u; esp -= 4; W32(esp, v); }
/* e8d354: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d355: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8d357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d357: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d35a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e8d35e: mov dword ptr [esp + 0x54], 0xffffffff */
  W32((uint32_t)(esp + 0x54u), 0xffffffffu);
/* e8d366: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8d36cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e8d36c: /* e8d36c: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* e8d370: xor esi, esi */
  esi = 0;
/* e8d372: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d374: je 0xe8d381 */
  if (zf) goto L_e8d381;
L_e8d376: /* e8d376: cmp dword ptr [esp + 0x60], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d37a: je 0xe8d381 */
  if (zf) goto L_e8d381;
L_e8d37c: /* e8d37c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e8d37e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8d37f: jmp 0xe8d398 */
  goto L_e8d398;
L_e8d381: /* e8d381: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e8d383: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* e8d387: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* e8d38b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* e8d38f: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* e8d393: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* e8d397: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e8d398: /* e8d398: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e8d39c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d39e: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* e8d3a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8d3a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d3a4: call dword ptr [ecx + 0x24] */
  { uint32_t t = R32((uint32_t)(ecx + 0x24u)); esp -= 4; W32(esp, 0xe8d3a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d3a7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d3a9: jge 0xe8d3e9 */
  if ((sf == of)) goto L_e8d3e9;
L_e8d3ab: /* e8d3ab: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* e8d3af: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8d3b4u); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8d3b4: mov ecx, eax */
  ecx = eax;
/* e8d3b6: mov dword ptr [esp + 0x54], 2 */
  W32((uint32_t)(esp + 0x54u), 0x2u);
/* e8d3be: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8d3c4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8d3c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d3c5: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8d3ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d3cc: push 0xeb0a38 */
  { uint32_t v = 0xeb0a38u; esp -= 4; W32(esp, v); }
/* e8d3d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8d3d2: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8d3d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d3d4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d3d7: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e8d3db: mov dword ptr [esp + 0x54], 0xffffffff */
  W32((uint32_t)(esp + 0x54u), 0xffffffffu);
/* e8d3e3: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8d3e9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e8d3e9: /* e8d3e9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d3eb: je 0xe8d4c2 */
  if (zf) goto L_e8d4c2;
L_e8d3f1: /* e8d3f1: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* e8d3f5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d3f7: je 0xe8d4c2 */
  if (zf) goto L_e8d4c2;
L_e8d3fd: /* e8d3fd: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* e8d401: cmp ebx, 0x16 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d404: je 0xe8d428 */
  if (zf) goto L_e8d428;
L_e8d406: /* e8d406: cmp ebx, 0x15 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d409: je 0xe8d428 */
  if (zf) goto L_e8d428;
L_e8d40b: /* e8d40b: cmp ebx, 0x17 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d40e: je 0xe8d428 */
  if (zf) goto L_e8d428;
L_e8d410: /* e8d410: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8d416: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8d418: push 0xeb09e8 */
  { uint32_t v = 0xeb09e8u; esp -= 4; W32(esp, v); }
/* e8d41d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d41e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8d420u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d420: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d423: jmp 0xe8d4c2 */
  goto L_e8d4c2;
L_e8d428: /* e8d428: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* e8d42e: xor ebp, ebp */
  ebp = 0;
/* e8d430: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d432: jle 0xe8d4c2 */
  if ((zf || sf != of)) goto L_e8d4c2;
L_e8d438: /* e8d438: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* e8d43e: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_e8d442: /* e8d442: xor eax, eax */
  eax = 0;
/* e8d444: cmp ebx, 0x17 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d447: jne 0xe8d492 */
  if (!zf) goto L_e8d492;
L_e8d449: /* e8d449: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d44b: jle 0xe8d4b3 */
  if ((zf || sf != of)) goto L_e8d4b3;
L_e8d44d: /* e8d44d: mov byte ptr [esp + 0x63], 0xff */
  W8((uint32_t)(esp + 0x63u), 0xffu);
L_e8d452: /* e8d452: mov cl, byte ptr [esi + eax*2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax*2))) & 0xffu);
/* e8d455: shl cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e8d458: mov byte ptr [esp + 0x60], cl */
  W8((uint32_t)(esp + 0x60u), (ecx & 0xffu));
/* e8d45c: xor ecx, ecx */
  ecx = 0;
/* e8d45e: mov cx, word ptr [esi + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + eax*2))) & 0xffffu);
/* e8d462: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8d465: mov ebx, ecx */
  ebx = ecx;
/* e8d467: shr ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* e8d46a: mov cl, ch */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((ecx >> 8) & 0xffu)) & 0xffu);
/* e8d46c: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e8d46f: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e8d472: mov byte ptr [esp + 0x62], cl */
  W8((uint32_t)(esp + 0x62u), (ecx & 0xffu));
/* e8d476: mov byte ptr [esp + 0x61], bl */
  W8((uint32_t)(esp + 0x61u), (ebx & 0xffu));
/* e8d47a: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* e8d47e: mov dword ptr [edx - 4], ecx */
  W32((uint32_t)(edx + 0xfffffffcu), ecx);
/* e8d481: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* e8d487: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8d488: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d48a: jl 0xe8d452 */
  if ((sf != of)) goto L_e8d452;
L_e8d48c: /* e8d48c: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* e8d490: jmp 0xe8d4b3 */
  goto L_e8d4b3;
L_e8d492: /* e8d492: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d494: jle 0xe8d4b3 */
  if ((zf || sf != of)) goto L_e8d4b3;
L_e8d496: /* e8d496: jmp 0xe8d4a0 */
  goto L_e8d4a0;
L_e8d4a0: /* e8d4a0: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* e8d4a3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* e8d4a5: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* e8d4ab: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8d4ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8d4af: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d4b1: jl 0xe8d4a0 */
  if ((sf != of)) goto L_e8d4a0;
L_e8d4b3: /* e8d4b3: add esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8d4b7: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* e8d4bd: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e8d4be: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d4c0: jl 0xe8d442 */
  if ((sf != of)) goto L_e8d442;
L_e8d4c2: /* e8d4c2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d4c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8d4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d4c9: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe8d4ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d4cc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d4d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d4d3: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe8d4d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d4d6: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* e8d4da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8d4db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8d4dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8d4dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8d4de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8d4e5: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d4e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e8d498(void) {
  LOAD_REGS();
  goto L_e8d498;
L_e8d442: /* e8d442: xor eax, eax */
  eax = 0;
/* e8d444: cmp ebx, 0x17 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d447: jne 0xe8d492 */
  if (!zf) goto L_e8d492;
L_e8d449: /* e8d449: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d44b: jle 0xe8d4b3 */
  if ((zf || sf != of)) goto L_e8d4b3;
L_e8d44d: /* e8d44d: mov byte ptr [esp + 0x63], 0xff */
  W8((uint32_t)(esp + 0x63u), 0xffu);
L_e8d452: /* e8d452: mov cl, byte ptr [esi + eax*2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax*2))) & 0xffu);
/* e8d455: shl cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e8d458: mov byte ptr [esp + 0x60], cl */
  W8((uint32_t)(esp + 0x60u), (ecx & 0xffu));
/* e8d45c: xor ecx, ecx */
  ecx = 0;
/* e8d45e: mov cx, word ptr [esi + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + eax*2))) & 0xffffu);
/* e8d462: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8d465: mov ebx, ecx */
  ebx = ecx;
/* e8d467: shr ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* e8d46a: mov cl, ch */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((ecx >> 8) & 0xffu)) & 0xffu);
/* e8d46c: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e8d46f: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e8d472: mov byte ptr [esp + 0x62], cl */
  W8((uint32_t)(esp + 0x62u), (ecx & 0xffu));
/* e8d476: mov byte ptr [esp + 0x61], bl */
  W8((uint32_t)(esp + 0x61u), (ebx & 0xffu));
/* e8d47a: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* e8d47e: mov dword ptr [edx - 4], ecx */
  W32((uint32_t)(edx + 0xfffffffcu), ecx);
/* e8d481: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* e8d487: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8d488: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d48a: jl 0xe8d452 */
  if ((sf != of)) goto L_e8d452;
L_e8d48c: /* e8d48c: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* e8d490: jmp 0xe8d4b3 */
  goto L_e8d4b3;
L_e8d492: /* e8d492: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d494: jle 0xe8d4b3 */
  if ((zf || sf != of)) goto L_e8d4b3;
L_e8d496: /* e8d496: jmp 0xe8d4a0 */
  goto L_e8d4a0;
L_e8d498: /* e8d498: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e8d49f: nop  */
L_e8d4a0: /* e8d4a0: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* e8d4a3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* e8d4a5: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* e8d4ab: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8d4ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8d4af: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d4b1: jl 0xe8d4a0 */
  if ((sf != of)) goto L_e8d4a0;
L_e8d4b3: /* e8d4b3: add esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8d4b7: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* e8d4bd: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e8d4be: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d4c0: jl 0xe8d442 */
  if ((sf != of)) goto L_e8d442;
L_e8d4c2: /* e8d4c2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d4c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8d4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d4c9: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe8d4ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d4cc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8d4d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d4d3: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe8d4d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d4d6: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* e8d4da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8d4db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8d4dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8d4dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8d4de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8d4e5: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d4e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e8d4f0(void) {
  LOAD_REGS();
L_e8d4f0: /* e8d4f0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8d4f6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8d4f8: push 0xeacbd0 */
  { uint32_t v = 0xeacbd0u; esp -= 4; W32(esp, v); }
/* e8d4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d4fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8d505: sub esp, 0xe0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d50b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8d50c: mov edi, ecx */
  edi = ecx;
/* e8d50e: mov eax, dword ptr [edi + 0x46b0] */
  eax = R32((uint32_t)(edi + 0x46b0u));
/* e8d514: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8d516: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* e8d51a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8d51b: mov edx, dword ptr [edi + 0x4688] */
  edx = R32((uint32_t)(edi + 0x4688u));
/* e8d521: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8d523: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8d524: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d525: call dword ptr [ecx + 0x34] */
  { uint32_t t = R32((uint32_t)(ecx + 0x34u)); esp -= 4; W32(esp, 0xe8d528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d52a: jge 0xe8d57e */
  if ((sf == of)) goto L_e8d57e;
L_e8d52c: /* e8d52c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8d52d: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* e8d531: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8d536u); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8d536: mov ecx, dword ptr [edi + 0x4688] */
  ecx = R32((uint32_t)(edi + 0x4688u));
/* e8d53c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8d53d: mov ecx, eax */
  ecx = eax;
/* e8d53f: mov dword ptr [esp + 0xf4], 0 */
  W32((uint32_t)(esp + 0xf4u), 0x0u);
/* e8d54a: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8d550u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8d550: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8d556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d557: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8d559: push 0xeb0ac0 */
  { uint32_t v = 0xeb0ac0u; esp -= 4; W32(esp, v); }
/* e8d55e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d55f: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8d565u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8d565: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d568: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* e8d56c: mov dword ptr [esp + 0xf0], 0xffffffff */
  W32((uint32_t)(esp + 0xf0u), 0xffffffffu);
/* e8d577: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8d57du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e8d57d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_e8d57e: /* e8d57e: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* e8d585: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* e8d58c: mov dword ptr [edi + 0x41e4], ecx */
  W32((uint32_t)(edi + 0x41e4u), ecx);
/* e8d592: mov ecx, dword ptr [esp + 0xdc] */
  ecx = R32((uint32_t)(esp + 0xdcu));
/* e8d599: mov eax, ecx */
  eax = ecx;
/* e8d59b: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e8d59e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* e8d5a1: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* e8d5a4: mov eax, dword ptr [esp + 0xf4] */
  eax = R32((uint32_t)(esp + 0xf4u));
/* e8d5ab: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8d5b1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8d5b2: mov dword ptr [edi + 0x41e0], edx */
  W32((uint32_t)(edi + 0x41e0u), edx);
/* e8d5b8: mov dword ptr [edi + 0x4674], ecx */
  W32((uint32_t)(edi + 0x4674u), ecx);
/* e8d5be: je 0xe8d5d6 */
  if (zf) goto L_e8d5d6;
L_e8d5c0: /* e8d5c0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e8d5c1: jne 0xe8d5f4 */
  if (!zf) goto L_e8d5f4;
L_e8d5c3: /* e8d5c3: mov eax, 4 */
  eax = 0x4u;
/* e8d5c8: mov dword ptr [edi + 0x41e4], eax */
  W32((uint32_t)(edi + 0x41e4u), eax);
/* e8d5ce: mov dword ptr [edi + 0x41e0], eax */
  W32((uint32_t)(edi + 0x41e0u), eax);
/* e8d5d4: jmp 0xe8d5f4 */
  goto L_e8d5f4;
L_e8d5d6: /* e8d5d6: mov dword ptr [edi + 0x41e4], 2 */
  W32((uint32_t)(edi + 0x41e4u), 0x2u);
/* e8d5e0: mov dword ptr [edi + 0x41e0], 3 */
  W32((uint32_t)(edi + 0x41e0u), 0x3u);
/* e8d5ea: mov dword ptr [edi + 0x4674], 0 */
  W32((uint32_t)(edi + 0x4674u), 0x0u);
L_e8d5f4: /* e8d5f4: call dword ptr [0xeae29c] */
  esp -= 4; W32(esp, 0xe8d5fau); SPILL(); f_6c97c3(); if (g_unwind) return; /* Engine!?ClearFallbacks@UMaterial@@SAXXZ */ RELOAD();
/* e8d5fa: call dword ptr [0xeae2a4] */
  esp -= 4; W32(esp, 0xe8d600u); SPILL(); f_6c767b(); if (g_unwind) return; /* Engine!?RefreshAll@UViewport@@SAXXZ */ RELOAD();
/* e8d600: mov ecx, dword ptr [esp + 0xe4] */
  ecx = R32((uint32_t)(esp + 0xe4u));
/* e8d607: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8d608: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8d60f: add esp, 0xec */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d615: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e8d620(void) {
  LOAD_REGS();
L_e8d620: /* e8d620: mov al, byte ptr [0xebe29c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xebe29cu))) & 0xffu);
/* e8d625: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8d626: mov ebx, 1 */
  ebx = 0x1u;
/* e8d62b: xor edx, edx */
  edx = 0;
/* e8d62d: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8d62f: jne 0xe8d649 */
  if (!zf) goto L_e8d649;
L_e8d631: /* e8d631: or dword ptr [0xebe29c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebe29cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xebe29cu), r);
  }
/* e8d637: mov dword ptr [0xebe290], ebx */
  W32((uint32_t)(0xebe290u), ebx);
/* e8d63d: mov dword ptr [0xebe294], edx */
  W32((uint32_t)(0xebe294u), edx);
/* e8d643: mov dword ptr [0xebe298], edx */
  W32((uint32_t)(0xebe298u), edx);
L_e8d649: /* e8d649: mov eax, dword ptr [ecx + 0x4674] */
  eax = R32((uint32_t)(ecx + 0x4674u));
/* e8d64f: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d652: jl 0xe8d660 */
  if ((sf != of)) goto L_e8d660;
L_e8d654: /* e8d654: mov dword ptr [0xebe290], 3 */
  W32((uint32_t)(0xebe290u), 0x3u);
/* e8d65e: jmp 0xe8d6a8 */
  goto L_e8d6a8;
L_e8d660: /* e8d660: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d663: jge 0xe8d654 */
  if ((sf == of)) goto L_e8d654;
L_e8d665: /* e8d665: mov eax, dword ptr [ecx + 0x41e4] */
  eax = R32((uint32_t)(ecx + 0x41e4u));
/* e8d66b: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8d66e: jb 0xe8d684 */
  if (cf) goto L_e8d684;
L_e8d670: /* e8d670: cmp dword ptr [ecx + 0x4100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d676: je 0xe8d684 */
  if (zf) goto L_e8d684;
L_e8d678: /* e8d678: mov dword ptr [0xebe290], 3 */
  W32((uint32_t)(0xebe290u), 0x3u);
/* e8d682: jmp 0xe8d6a8 */
  goto L_e8d6a8;
L_e8d684: /* e8d684: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8d687: jb 0xe8d69d */
  if (cf) goto L_e8d69d;
L_e8d689: /* e8d689: cmp dword ptr [ecx + 0x4100], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4100u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8d68f: jne 0xe8d69d */
  if (!zf) goto L_e8d69d;
L_e8d691: /* e8d691: mov dword ptr [0xebe290], 2 */
  W32((uint32_t)(0xebe290u), 0x2u);
/* e8d69b: jmp 0xe8d6a8 */
  goto L_e8d6a8;
L_e8d69d: /* e8d69d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8d6a0: jb 0xe8d6a8 */
  if (cf) goto L_e8d6a8;
L_e8d6a2: /* e8d6a2: mov dword ptr [0xebe290], ebx */
  W32((uint32_t)(0xebe290u), ebx);
L_e8d6a8: /* e8d6a8: mov eax, dword ptr [ecx + 0x4674] */
  eax = R32((uint32_t)(ecx + 0x4674u));
/* e8d6ae: mov dword ptr [0xebe294], eax */
  W32((uint32_t)(0xebe294u), eax);
/* e8d6b3: mov ecx, dword ptr [ecx + 0x40d8] */
  ecx = R32((uint32_t)(ecx + 0x40d8u));
/* e8d6b9: mov dword ptr [0xebe298], ecx */
  W32((uint32_t)(0xebe298u), ecx);
/* e8d6bf: mov eax, 0xebe290 */
  eax = 0xebe290u;
/* e8d6c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8d6c5: ret  */
  esp += 4; SPILL(); return;
}

void f_e8d6d0(void) {
  LOAD_REGS();
L_e8d6d0: /* e8d6d0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8d6d6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8d6d8: push 0xeacddb */
  { uint32_t v = 0xeacddbu; esp -= 4; W32(esp, v); }
/* e8d6dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8d6de: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8d6e3: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8d6ea: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d6ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8d6ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8d6ef: mov esi, ecx */
  esi = ecx;
/* e8d6f1: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* e8d6f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8d6f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8d6f7: je 0xe8d743 */
  if (zf) goto L_e8d743;
L_e8d6f9: /* e8d6f9: mov edx, dword ptr [eax + 0xcc] */
  edx = R32((uint32_t)(eax + 0xccu));
/* e8d6ff: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8d702: xor ecx, ecx */
  ecx = 0;
/* e8d704: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8d706: jle 0xe8e704 */
  if ((zf || sf != of)) goto L_e8e704;
L_e8d70c: /* e8d70c: xor edx, edx */
  edx = 0;
/* e8d70e: mov edi, edi */
  edi = edi;
L_e8d710: /* e8d710: mov eax, dword ptr [eax + 0xc8] */
  eax = R32((uint32_t)(eax + 0xc8u));
/* e8d716: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* e8d719: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* e8d71b: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e8d720: mov edi, dword ptr [eax + 0xcc] */
  edi = R32((uint32_t)(eax + 0xccu));
/* e8d726: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8d729: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e8d72a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8d72d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8d72f: jl 0xe8d710 */
  if ((sf != of)) goto L_e8d710;
L_e8d731: /* e8d731: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e8d735: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8d73c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8d73d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8d73e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8d73f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8d742: ret  */
  esp += 4; SPILL(); return;
L_e8d743: /* e8d743: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d745: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d748: mov ecx, esp */
  ecx = esp;
/* e8d74a: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* e8d74e: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d753: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d759u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d759: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d75c: mov ecx, esp */
  ecx = esp;
/* e8d75e: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* e8d762: push 0xeb0ed8 */
  { uint32_t v = 0xeb0ed8u; esp -= 4; W32(esp, v); }
/* e8d767: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* e8d76f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d775u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d775: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d77b: mov edi, dword ptr [0xeae2a8] */
  edi = R32((uint32_t)(0xeae2a8u));
/* e8d781: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d783: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* e8d786: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d788: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d78c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d78eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d78e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d790: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d793: mov ecx, esp */
  ecx = esp;
/* e8d795: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d799: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d79e: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* e8d7a1: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d7a7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d7a7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d7aa: mov ecx, esp */
  ecx = esp;
/* e8d7ac: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d7b0: push 0xeb0eb8 */
  { uint32_t v = 0xeb0eb8u; esp -= 4; W32(esp, v); }
/* e8d7b5: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* e8d7bd: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d7c3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d7c3: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d7c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d7cb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d7cd: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d7d1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d7d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d7d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d7d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d7d8: mov ecx, esp */
  ecx = esp;
/* e8d7da: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d7de: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d7e3: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* e8d7e6: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d7ecu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d7ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d7ef: mov ecx, esp */
  ecx = esp;
/* e8d7f1: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d7f5: push 0xeb0ea0 */
  { uint32_t v = 0xeb0ea0u; esp -= 4; W32(esp, v); }
/* e8d7fa: mov dword ptr [esp + 0x3c], 2 */
  W32((uint32_t)(esp + 0x3cu), 0x2u);
/* e8d802: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d808u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d808: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d80e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d810: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d812: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d816: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d818u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d818: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8d81a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d81d: mov ecx, esp */
  ecx = esp;
/* e8d81f: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d823: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d828: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* e8d82b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d831u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d831: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d834: mov ecx, esp */
  ecx = esp;
/* e8d836: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d83a: push 0xeb0e84 */
  { uint32_t v = 0xeb0e84u; esp -= 4; W32(esp, v); }
/* e8d83f: mov dword ptr [esp + 0x3c], 3 */
  W32((uint32_t)(esp + 0x3cu), 0x3u);
/* e8d847: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d84du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d84d: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d853: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d855: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d857: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d85b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d85du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d85d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8d85f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d862: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* e8d868: mov ecx, esp */
  ecx = esp;
/* e8d86a: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d86e: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d873: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d879u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d879: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d87c: mov ecx, esp */
  ecx = esp;
/* e8d87e: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d882: push 0xeb0e64 */
  { uint32_t v = 0xeb0e64u; esp -= 4; W32(esp, v); }
/* e8d887: mov dword ptr [esp + 0x3c], 4 */
  W32((uint32_t)(esp + 0x3cu), 0x4u);
/* e8d88f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d895u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d895: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d89b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d89d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d89f: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d8a3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d8a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d8a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8d8a7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d8aa: mov ecx, esp */
  ecx = esp;
/* e8d8ac: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d8b0: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d8b5: mov dword ptr [esi + 0xd4], eax */
  W32((uint32_t)(esi + 0xd4u), eax);
/* e8d8bb: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d8c1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d8c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d8c4: mov ecx, esp */
  ecx = esp;
/* e8d8c6: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d8ca: push 0xeb0e50 */
  { uint32_t v = 0xeb0e50u; esp -= 4; W32(esp, v); }
/* e8d8cf: mov dword ptr [esp + 0x3c], 5 */
  W32((uint32_t)(esp + 0x3cu), 0x5u);
/* e8d8d7: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d8ddu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d8dd: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d8e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d8e5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d8e7: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d8eb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d8edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d8ed: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8d8ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d8f2: mov ecx, esp */
  ecx = esp;
/* e8d8f4: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d8f8: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d8fd: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e8d900: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d906u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d906: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d909: mov ecx, esp */
  ecx = esp;
/* e8d90b: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d90f: push 0xeb0e50 */
  { uint32_t v = 0xeb0e50u; esp -= 4; W32(esp, v); }
/* e8d914: mov dword ptr [esp + 0x3c], 6 */
  W32((uint32_t)(esp + 0x3cu), 0x6u);
/* e8d91c: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d922u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d922: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d92a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d92c: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d930: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d932u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d932: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8d934: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d937: mov ecx, esp */
  ecx = esp;
/* e8d939: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d93d: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d942: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e8d945: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d94bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d94b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d94e: mov ecx, esp */
  ecx = esp;
/* e8d950: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d954: push 0xeb0e3c */
  { uint32_t v = 0xeb0e3cu; esp -= 4; W32(esp, v); }
/* e8d959: mov dword ptr [esp + 0x3c], 7 */
  W32((uint32_t)(esp + 0x3cu), 0x7u);
/* e8d961: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d967u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d967: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d96d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d96f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d971: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d975: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d977u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d977: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8d979: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d97c: mov ecx, esp */
  ecx = esp;
/* e8d97e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d982: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d987: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* e8d98a: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d990u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d990: mov dword ptr [esp + 0x2c], 8 */
  W32((uint32_t)(esp + 0x2cu), 0x8u);
/* e8d998: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d99b: mov ecx, esp */
  ecx = esp;
/* e8d99d: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d9a1: push 0xeb0e3c */
  { uint32_t v = 0xeb0e3cu; esp -= 4; W32(esp, v); }
/* e8d9a6: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d9acu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d9ac: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d9b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d9b4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d9b6: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d9ba: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8d9bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8d9bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8d9be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d9c1: mov ecx, esp */
  ecx = esp;
/* e8d9c3: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8d9c7: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8d9cc: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* e8d9cf: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d9d5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d9d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8d9d8: mov ecx, esp */
  ecx = esp;
/* e8d9da: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8d9de: push 0xeb0e1c */
  { uint32_t v = 0xeb0e1cu; esp -= 4; W32(esp, v); }
/* e8d9e3: mov dword ptr [esp + 0x3c], 9 */
  W32((uint32_t)(esp + 0x3cu), 0x9u);
/* e8d9eb: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8d9f1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8d9f1: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8d9f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8d9f9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8d9fb: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8d9ff: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8da01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8da01: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8da03: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8da06: mov ecx, esp */
  ecx = esp;
/* e8da08: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8da0c: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8da11: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* e8da14: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8da1au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8da1a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8da1d: mov ecx, esp */
  ecx = esp;
/* e8da1f: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8da23: push 0xeb0e1c */
  { uint32_t v = 0xeb0e1cu; esp -= 4; W32(esp, v); }
/* e8da28: mov dword ptr [esp + 0x3c], 0xa */
  W32((uint32_t)(esp + 0x3cu), 0xau);
/* e8da30: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8da36u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8da36: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8da3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8da3e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8da40: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8da44: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8da46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8da46: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8da48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8da4b: mov ecx, esp */
  ecx = esp;
/* e8da4d: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8da51: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8da56: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* e8da59: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8da5fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8da5f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8da62: mov ecx, esp */
  ecx = esp;
/* e8da64: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8da68: push 0xeb0e04 */
  { uint32_t v = 0xeb0e04u; esp -= 4; W32(esp, v); }
/* e8da6d: mov dword ptr [esp + 0x3c], 0xb */
  W32((uint32_t)(esp + 0x3cu), 0xbu);
/* e8da75: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8da7bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8da7b: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8da81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8da83: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8da85: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8da89: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8da8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8da8b: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8da8d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8da90: mov ecx, esp */
  ecx = esp;
/* e8da92: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8da96: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8da9b: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* e8da9e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8daa4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8daa4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8daa7: mov ecx, esp */
  ecx = esp;
/* e8daa9: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8daad: push 0xeb0e04 */
  { uint32_t v = 0xeb0e04u; esp -= 4; W32(esp, v); }
/* e8dab2: mov dword ptr [esp + 0x3c], 0xc */
  W32((uint32_t)(esp + 0x3cu), 0xcu);
/* e8daba: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dac0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dac0: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dac6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dac8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8daca: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dace: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dad0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dad0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8dad2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dad5: mov ecx, esp */
  ecx = esp;
/* e8dad7: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dadb: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dae0: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* e8dae3: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dae9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dae9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8daec: mov ecx, esp */
  ecx = esp;
/* e8daee: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8daf2: push 0xeb0ddc */
  { uint32_t v = 0xeb0ddcu; esp -= 4; W32(esp, v); }
/* e8daf7: mov dword ptr [esp + 0x3c], 0xd */
  W32((uint32_t)(esp + 0x3cu), 0xdu);
/* e8daff: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8db05u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8db05: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8db0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8db0d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8db0f: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8db13: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8db15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8db15: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8db17: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8db1a: mov ecx, esp */
  ecx = esp;
/* e8db1c: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8db20: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8db25: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e8db28: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8db2eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8db2e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8db31: mov ecx, esp */
  ecx = esp;
/* e8db33: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8db37: push 0xeb0ddc */
  { uint32_t v = 0xeb0ddcu; esp -= 4; W32(esp, v); }
/* e8db3c: mov dword ptr [esp + 0x3c], 0xe */
  W32((uint32_t)(esp + 0x3cu), 0xeu);
/* e8db44: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8db4au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8db4a: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8db50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8db52: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8db54: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8db58: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8db5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8db5a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8db5c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8db5f: mov ecx, esp */
  ecx = esp;
/* e8db61: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8db65: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8db6a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* e8db6d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8db73u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8db73: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8db76: mov ecx, esp */
  ecx = esp;
/* e8db78: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8db7c: push 0xeb0dbc */
  { uint32_t v = 0xeb0dbcu; esp -= 4; W32(esp, v); }
/* e8db81: mov dword ptr [esp + 0x3c], 0xf */
  W32((uint32_t)(esp + 0x3cu), 0xfu);
/* e8db89: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8db8fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8db8f: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8db95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8db97: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8db99: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8db9d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8db9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8db9f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8dba1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dba4: mov ecx, esp */
  ecx = esp;
/* e8dba6: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dbaa: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dbaf: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e8dbb2: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dbb8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dbb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dbbb: mov ecx, esp */
  ecx = esp;
/* e8dbbd: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dbc1: push 0xeb0dbc */
  { uint32_t v = 0xeb0dbcu; esp -= 4; W32(esp, v); }
/* e8dbc6: mov dword ptr [esp + 0x3c], 0x10 */
  W32((uint32_t)(esp + 0x3cu), 0x10u);
/* e8dbce: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dbd4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dbd4: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dbda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dbdc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dbde: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dbe2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dbe4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dbe4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8dbe6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dbe9: mov ecx, esp */
  ecx = esp;
/* e8dbeb: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dbef: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dbf4: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* e8dbf7: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dbfdu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dbfd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dc00: mov ecx, esp */
  ecx = esp;
/* e8dc02: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dc06: push 0xeb0da0 */
  { uint32_t v = 0xeb0da0u; esp -= 4; W32(esp, v); }
/* e8dc0b: mov dword ptr [esp + 0x3c], 0x11 */
  W32((uint32_t)(esp + 0x3cu), 0x11u);
/* e8dc13: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dc19u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dc19: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dc1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dc21: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dc23: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dc27: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dc29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dc29: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8dc2b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dc2e: mov ecx, esp */
  ecx = esp;
/* e8dc30: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dc34: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dc39: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* e8dc3c: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dc42u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dc42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dc45: mov ecx, esp */
  ecx = esp;
/* e8dc47: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dc4b: push 0xeb0da0 */
  { uint32_t v = 0xeb0da0u; esp -= 4; W32(esp, v); }
/* e8dc50: mov dword ptr [esp + 0x3c], 0x12 */
  W32((uint32_t)(esp + 0x3cu), 0x12u);
/* e8dc58: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dc5eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dc5e: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dc64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dc66: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dc68: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dc6c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dc6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dc6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8dc70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dc73: mov ecx, esp */
  ecx = esp;
/* e8dc75: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dc79: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dc7e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* e8dc81: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dc87u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dc87: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dc8a: mov ecx, esp */
  ecx = esp;
/* e8dc8c: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dc90: push 0xeb0d94 */
  { uint32_t v = 0xeb0d94u; esp -= 4; W32(esp, v); }
/* e8dc95: mov dword ptr [esp + 0x3c], 0x13 */
  W32((uint32_t)(esp + 0x3cu), 0x13u);
/* e8dc9d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dca3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dca3: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dca9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dcab: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dcad: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dcb1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dcb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dcb3: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8dcb5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dcb8: mov ecx, esp */
  ecx = esp;
/* e8dcba: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dcbe: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dcc3: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* e8dcc6: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dcccu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dccc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dccf: mov ecx, esp */
  ecx = esp;
/* e8dcd1: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dcd5: push 0xeb0d94 */
  { uint32_t v = 0xeb0d94u; esp -= 4; W32(esp, v); }
/* e8dcda: mov dword ptr [esp + 0x3c], 0x14 */
  W32((uint32_t)(esp + 0x3cu), 0x14u);
/* e8dce2: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dce8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dce8: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dcee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dcf0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dcf2: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dcf6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dcf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dcf8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8dcfa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dcfd: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* e8dd00: mov ecx, esp */
  ecx = esp;
/* e8dd02: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dd06: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dd0b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dd11u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dd11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dd14: mov ecx, esp */
  ecx = esp;
/* e8dd16: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dd1a: push 0xeb0d80 */
  { uint32_t v = 0xeb0d80u; esp -= 4; W32(esp, v); }
/* e8dd1f: mov dword ptr [esp + 0x3c], 0x15 */
  W32((uint32_t)(esp + 0x3cu), 0x15u);
/* e8dd27: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dd2du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dd2d: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dd33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dd35: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dd37: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dd3b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dd3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dd3d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8dd3f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dd42: mov ecx, esp */
  ecx = esp;
/* e8dd44: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dd48: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dd4d: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* e8dd50: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dd56u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dd56: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dd59: mov ecx, esp */
  ecx = esp;
/* e8dd5b: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dd5f: push 0xeb0d80 */
  { uint32_t v = 0xeb0d80u; esp -= 4; W32(esp, v); }
/* e8dd64: mov dword ptr [esp + 0x3c], 0x16 */
  W32((uint32_t)(esp + 0x3cu), 0x16u);
/* e8dd6c: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dd72u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dd72: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dd78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dd7a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dd7c: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dd80: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dd82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dd82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8dd84: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dd87: mov ecx, esp */
  ecx = esp;
/* e8dd89: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dd8d: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dd92: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* e8dd95: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dd9bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dd9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dd9e: mov ecx, esp */
  ecx = esp;
/* e8dda0: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dda4: push 0xeb0d64 */
  { uint32_t v = 0xeb0d64u; esp -= 4; W32(esp, v); }
/* e8dda9: mov dword ptr [esp + 0x3c], 0x17 */
  W32((uint32_t)(esp + 0x3cu), 0x17u);
/* e8ddb1: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8ddb7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8ddb7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8ddbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ddbf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8ddc1: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8ddc5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8ddc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ddc7: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8ddc9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8ddcc: mov ecx, esp */
  ecx = esp;
/* e8ddce: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8ddd2: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8ddd7: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* e8ddda: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dde0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dde0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dde3: mov ecx, esp */
  ecx = esp;
/* e8dde5: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dde9: push 0xeb0d64 */
  { uint32_t v = 0xeb0d64u; esp -= 4; W32(esp, v); }
/* e8ddee: mov dword ptr [esp + 0x3c], 0x18 */
  W32((uint32_t)(esp + 0x3cu), 0x18u);
/* e8ddf6: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8ddfcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8ddfc: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8de02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8de04: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8de06: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8de0a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8de0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8de0c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8de0e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8de11: mov ecx, esp */
  ecx = esp;
/* e8de13: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8de17: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8de1c: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* e8de1f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8de25u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8de25: mov dword ptr [esp + 0x2c], 0x19 */
  W32((uint32_t)(esp + 0x2cu), 0x19u);
/* e8de2d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8de30: mov ecx, esp */
  ecx = esp;
/* e8de32: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8de36: push 0xeb0d58 */
  { uint32_t v = 0xeb0d58u; esp -= 4; W32(esp, v); }
/* e8de3b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8de41u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8de41: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8de47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8de49: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8de4b: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8de4f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8de51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8de51: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8de53: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8de56: mov ecx, esp */
  ecx = esp;
/* e8de58: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8de5c: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8de61: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* e8de64: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8de6au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8de6a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8de6d: mov ecx, esp */
  ecx = esp;
/* e8de6f: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8de73: push 0xeb0d58 */
  { uint32_t v = 0xeb0d58u; esp -= 4; W32(esp, v); }
/* e8de78: mov dword ptr [esp + 0x3c], 0x1a */
  W32((uint32_t)(esp + 0x3cu), 0x1au);
/* e8de80: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8de86u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8de86: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8de8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8de8e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8de90: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8de94: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8de96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8de96: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8de98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8de9b: mov ecx, esp */
  ecx = esp;
/* e8de9d: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dea1: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dea6: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* e8dea9: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8deafu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8deaf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8deb2: mov ecx, esp */
  ecx = esp;
/* e8deb4: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8deb8: push 0xeb0d48 */
  { uint32_t v = 0xeb0d48u; esp -= 4; W32(esp, v); }
/* e8debd: mov dword ptr [esp + 0x3c], 0x1b */
  W32((uint32_t)(esp + 0x3cu), 0x1bu);
/* e8dec5: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8decbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8decb: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8ded1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ded3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8ded5: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8ded9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dedbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dedb: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8dedd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dee0: mov ecx, esp */
  ecx = esp;
/* e8dee2: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dee6: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8deeb: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* e8deee: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8def4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8def4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8def7: mov ecx, esp */
  ecx = esp;
/* e8def9: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8defd: push 0xeb0d48 */
  { uint32_t v = 0xeb0d48u; esp -= 4; W32(esp, v); }
/* e8df02: mov dword ptr [esp + 0x3c], 0x1c */
  W32((uint32_t)(esp + 0x3cu), 0x1cu);
/* e8df0a: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8df10u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8df10: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8df16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8df18: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8df1a: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8df1e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8df20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8df20: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8df22: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8df25: mov ecx, esp */
  ecx = esp;
/* e8df27: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8df2b: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8df30: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* e8df33: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8df39u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8df39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8df3c: mov ecx, esp */
  ecx = esp;
/* e8df3e: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8df42: push 0xeb0d38 */
  { uint32_t v = 0xeb0d38u; esp -= 4; W32(esp, v); }
/* e8df47: mov dword ptr [esp + 0x3c], 0x1d */
  W32((uint32_t)(esp + 0x3cu), 0x1du);
/* e8df4f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8df55u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8df55: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* e8df59: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8df5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8df61: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8df63: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8df65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8df65: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8df67: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8df6a: mov ecx, esp */
  ecx = esp;
/* e8df6c: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8df70: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8df75: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* e8df78: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8df7eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8df7e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8df81: mov ecx, esp */
  ecx = esp;
/* e8df83: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8df87: push 0xeb0d38 */
  { uint32_t v = 0xeb0d38u; esp -= 4; W32(esp, v); }
/* e8df8c: mov dword ptr [esp + 0x3c], 0x1e */
  W32((uint32_t)(esp + 0x3cu), 0x1eu);
/* e8df94: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8df9au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8df9a: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dfa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dfa2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dfa4: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dfa8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dfaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dfaa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8dfac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dfaf: mov ecx, esp */
  ecx = esp;
/* e8dfb1: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dfb5: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dfba: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* e8dfbd: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dfc3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dfc3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dfc6: mov ecx, esp */
  ecx = esp;
/* e8dfc8: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8dfcc: push 0xeb0d1c */
  { uint32_t v = 0xeb0d1cu; esp -= 4; W32(esp, v); }
/* e8dfd1: mov dword ptr [esp + 0x3c], 0x1f */
  W32((uint32_t)(esp + 0x3cu), 0x1fu);
/* e8dfd9: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8dfdfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8dfdf: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8dfe5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8dfe7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8dfe9: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8dfed: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8dfefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8dfef: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8dff1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8dff4: mov ecx, esp */
  ecx = esp;
/* e8dff6: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8dffa: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8dfff: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* e8e005: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e00bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e00b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e00e: mov ecx, esp */
  ecx = esp;
/* e8e010: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e014: push 0xeb0d1c */
  { uint32_t v = 0xeb0d1cu; esp -= 4; W32(esp, v); }
/* e8e019: mov dword ptr [esp + 0x3c], 0x20 */
  W32((uint32_t)(esp + 0x3cu), 0x20u);
/* e8e021: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e027u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e027: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e02d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e02f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e031: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e035: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e037u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e037: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e039: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e03c: mov ecx, esp */
  ecx = esp;
/* e8e03e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e042: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e047: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* e8e04d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e053u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e053: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e056: mov ecx, esp */
  ecx = esp;
/* e8e058: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e05c: push 0xeb0cfc */
  { uint32_t v = 0xeb0cfcu; esp -= 4; W32(esp, v); }
/* e8e061: mov dword ptr [esp + 0x3c], 0x21 */
  W32((uint32_t)(esp + 0x3cu), 0x21u);
/* e8e069: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e06fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e06f: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e075: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e077: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e079: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e07d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e07fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e07f: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* e8e085: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e087: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e08a: mov ecx, esp */
  ecx = esp;
/* e8e08c: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e090: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e095: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e09bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e09b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e09e: mov ecx, esp */
  ecx = esp;
/* e8e0a0: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e0a4: push 0xeb0cfc */
  { uint32_t v = 0xeb0cfcu; esp -= 4; W32(esp, v); }
/* e8e0a9: mov dword ptr [esp + 0x3c], 0x22 */
  W32((uint32_t)(esp + 0x3cu), 0x22u);
/* e8e0b1: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e0b7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e0b7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e0bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e0bf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e0c1: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e0c5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e0c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e0c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e0c9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e0cc: mov ecx, esp */
  ecx = esp;
/* e8e0ce: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e0d2: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e0d7: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* e8e0dd: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e0e3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e0e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e0e6: mov ecx, esp */
  ecx = esp;
/* e8e0e8: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e0ec: push 0xeb0cd8 */
  { uint32_t v = 0xeb0cd8u; esp -= 4; W32(esp, v); }
/* e8e0f1: mov dword ptr [esp + 0x3c], 0x23 */
  W32((uint32_t)(esp + 0x3cu), 0x23u);
/* e8e0f9: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e0ffu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e0ff: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e105: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e107: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e109: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e10d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e10fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e10f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e111: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e114: mov ecx, esp */
  ecx = esp;
/* e8e116: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e11a: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e11f: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* e8e125: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e12bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e12b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e12e: mov ecx, esp */
  ecx = esp;
/* e8e130: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e134: push 0xeb0cd8 */
  { uint32_t v = 0xeb0cd8u; esp -= 4; W32(esp, v); }
/* e8e139: mov dword ptr [esp + 0x3c], 0x24 */
  W32((uint32_t)(esp + 0x3cu), 0x24u);
/* e8e141: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e147u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e147: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e14d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e14f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e151: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e155: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e157: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e159: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e15c: mov ecx, esp */
  ecx = esp;
/* e8e15e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e162: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e167: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* e8e16d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e173u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e173: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e176: mov ecx, esp */
  ecx = esp;
/* e8e178: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e17c: push 0xeb0cbc */
  { uint32_t v = 0xeb0cbcu; esp -= 4; W32(esp, v); }
/* e8e181: mov dword ptr [esp + 0x3c], 0x25 */
  W32((uint32_t)(esp + 0x3cu), 0x25u);
/* e8e189: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e18fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e18f: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e195: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e197: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e199: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e19d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e19fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e19f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e1a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e1a4: mov ecx, esp */
  ecx = esp;
/* e8e1a6: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e1aa: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* e8e1b0: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e1b5: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e1bbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e1bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e1be: mov ecx, esp */
  ecx = esp;
/* e8e1c0: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e1c4: push 0xeb0cbc */
  { uint32_t v = 0xeb0cbcu; esp -= 4; W32(esp, v); }
/* e8e1c9: mov dword ptr [esp + 0x3c], 0x26 */
  W32((uint32_t)(esp + 0x3cu), 0x26u);
/* e8e1d1: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e1d7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e1d7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e1dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e1df: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e1e1: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e1e5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e1e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e1e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e1e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e1ec: mov ecx, esp */
  ecx = esp;
/* e8e1ee: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e1f2: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e1f7: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* e8e1fd: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e203u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e203: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e206: mov ecx, esp */
  ecx = esp;
/* e8e208: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e20c: push 0xeb0ca8 */
  { uint32_t v = 0xeb0ca8u; esp -= 4; W32(esp, v); }
/* e8e211: mov dword ptr [esp + 0x3c], 0x27 */
  W32((uint32_t)(esp + 0x3cu), 0x27u);
/* e8e219: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e21fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e21f: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e227: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e229: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e22d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e22fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e22f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e231: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e234: mov ecx, esp */
  ecx = esp;
/* e8e236: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e23a: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e23f: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* e8e245: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e24bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e24b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e24e: mov ecx, esp */
  ecx = esp;
/* e8e250: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e254: push 0xeb0ca8 */
  { uint32_t v = 0xeb0ca8u; esp -= 4; W32(esp, v); }
/* e8e259: mov dword ptr [esp + 0x3c], 0x28 */
  W32((uint32_t)(esp + 0x3cu), 0x28u);
/* e8e261: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e267u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e267: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e26d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e26f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e271: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e275: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e277u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e277: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e279: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e27c: mov ecx, esp */
  ecx = esp;
/* e8e27e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e282: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e287: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* e8e28d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e293u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e293: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e296: mov ecx, esp */
  ecx = esp;
/* e8e298: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e29c: push 0xeb0c9c */
  { uint32_t v = 0xeb0c9cu; esp -= 4; W32(esp, v); }
/* e8e2a1: mov dword ptr [esp + 0x3c], 0x29 */
  W32((uint32_t)(esp + 0x3cu), 0x29u);
/* e8e2a9: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e2afu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e2af: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e2b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e2b7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e2b9: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e2bd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e2bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e2bf: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e2c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e2c4: mov ecx, esp */
  ecx = esp;
/* e8e2c6: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e2ca: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e2cf: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* e8e2d5: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e2dbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e2db: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e2de: mov dword ptr [esp + 0x38], 0x2a */
  W32((uint32_t)(esp + 0x38u), 0x2au);
/* e8e2e6: mov ecx, esp */
  ecx = esp;
/* e8e2e8: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e2ec: push 0xeb0c9c */
  { uint32_t v = 0xeb0c9cu; esp -= 4; W32(esp, v); }
/* e8e2f1: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e2f7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e2f7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e2fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e2ff: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e301: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e305: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e307u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e307: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e309: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e30c: mov ecx, esp */
  ecx = esp;
/* e8e30e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e312: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e317: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* e8e31d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e323u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e323: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e326: mov ecx, esp */
  ecx = esp;
/* e8e328: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e32c: push 0xeb0c88 */
  { uint32_t v = 0xeb0c88u; esp -= 4; W32(esp, v); }
/* e8e331: mov dword ptr [esp + 0x3c], 0x2b */
  W32((uint32_t)(esp + 0x3cu), 0x2bu);
/* e8e339: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e33fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e33f: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e345: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e347: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e349: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e34d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e34fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e34f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e351: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e354: mov ecx, esp */
  ecx = esp;
/* e8e356: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e35a: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e35f: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* e8e365: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e36bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e36b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e36e: mov ecx, esp */
  ecx = esp;
/* e8e370: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e374: push 0xeb0c88 */
  { uint32_t v = 0xeb0c88u; esp -= 4; W32(esp, v); }
/* e8e379: mov dword ptr [esp + 0x3c], 0x2c */
  W32((uint32_t)(esp + 0x3cu), 0x2cu);
/* e8e381: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e387u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e387: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e38d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e38f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e391: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e395: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e397u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e397: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e399: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e39c: mov ecx, esp */
  ecx = esp;
/* e8e39e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e3a2: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e3a7: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* e8e3ad: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e3b3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e3b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e3b6: mov ecx, esp */
  ecx = esp;
/* e8e3b8: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e3bc: push 0xeb0c6c */
  { uint32_t v = 0xeb0c6cu; esp -= 4; W32(esp, v); }
/* e8e3c1: mov dword ptr [esp + 0x3c], 0x2d */
  W32((uint32_t)(esp + 0x3cu), 0x2du);
/* e8e3c9: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e3cfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e3cf: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e3d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e3d7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e3d9: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e3dd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e3dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e3df: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8e3e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e3e4: mov ecx, esp */
  ecx = esp;
/* e8e3e6: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e3ea: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e3ef: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* e8e3f5: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e3fbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e3fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e3fe: mov ecx, esp */
  ecx = esp;
/* e8e400: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e404: push 0xeb0c54 */
  { uint32_t v = 0xeb0c54u; esp -= 4; W32(esp, v); }
/* e8e409: mov dword ptr [esp + 0x3c], 0x2e */
  W32((uint32_t)(esp + 0x3cu), 0x2eu);
/* e8e411: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e417u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e417: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* e8e41b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e41d: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e423: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e425: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e427: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8e429: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e42c: mov ecx, esp */
  ecx = esp;
/* e8e42e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e432: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e437: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* e8e43a: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e440u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e440: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e443: mov ecx, esp */
  ecx = esp;
/* e8e445: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e449: push 0xeb0c3c */
  { uint32_t v = 0xeb0c3cu; esp -= 4; W32(esp, v); }
/* e8e44e: mov dword ptr [esp + 0x3c], 0x2f */
  W32((uint32_t)(esp + 0x3cu), 0x2fu);
/* e8e456: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e45cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e45c: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e462: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e464: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e466: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e46a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e46cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e46c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e46e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e471: mov ecx, esp */
  ecx = esp;
/* e8e473: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e477: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e47c: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* e8e47f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e485u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e485: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e488: mov ecx, esp */
  ecx = esp;
/* e8e48a: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e48e: push 0xeb0c18 */
  { uint32_t v = 0xeb0c18u; esp -= 4; W32(esp, v); }
/* e8e493: mov dword ptr [esp + 0x3c], 0x30 */
  W32((uint32_t)(esp + 0x3cu), 0x30u);
/* e8e49b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e4a1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e4a1: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e4a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e4a9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e4ab: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e4af: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e4b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e4b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e4b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e4b6: mov ecx, esp */
  ecx = esp;
/* e8e4b8: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e4bc: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e4c1: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* e8e4c7: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e4cdu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e4cd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e4d0: mov ecx, esp */
  ecx = esp;
/* e8e4d2: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e4d6: push 0xeb0bf8 */
  { uint32_t v = 0xeb0bf8u; esp -= 4; W32(esp, v); }
/* e8e4db: mov dword ptr [esp + 0x3c], 0x31 */
  W32((uint32_t)(esp + 0x3cu), 0x31u);
/* e8e4e3: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e4e9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e4e9: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e4ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e4f1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e4f3: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e4f7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e4f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e4f9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8e4fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e4fe: mov ecx, esp */
  ecx = esp;
/* e8e500: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e504: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e509: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* e8e50f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e515u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e515: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e518: mov ecx, esp */
  ecx = esp;
/* e8e51a: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e51e: push 0xeb0bd4 */
  { uint32_t v = 0xeb0bd4u; esp -= 4; W32(esp, v); }
/* e8e523: mov dword ptr [esp + 0x3c], 0x32 */
  W32((uint32_t)(esp + 0x3cu), 0x32u);
/* e8e52b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e531u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e531: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e537: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e539: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e53b: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e53f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e541u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e541: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* e8e547: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e8e549: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e54c: mov ecx, esp */
  ecx = esp;
/* e8e54e: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e552: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e557: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e55du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e55d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e560: mov ecx, esp */
  ecx = esp;
/* e8e562: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e566: push 0xeb0bb0 */
  { uint32_t v = 0xeb0bb0u; esp -= 4; W32(esp, v); }
/* e8e56b: mov dword ptr [esp + 0x3c], 0x33 */
  W32((uint32_t)(esp + 0x3cu), 0x33u);
/* e8e573: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e579u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e579: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e57f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e581: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e583: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e587: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e589u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e589: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e58b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e58e: mov ecx, esp */
  ecx = esp;
/* e8e590: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e594: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e599: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* e8e59f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e5a5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e5a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e5a8: mov ecx, esp */
  ecx = esp;
/* e8e5aa: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e5ae: push 0xeb0b88 */
  { uint32_t v = 0xeb0b88u; esp -= 4; W32(esp, v); }
/* e8e5b3: mov dword ptr [esp + 0x3c], 0x34 */
  W32((uint32_t)(esp + 0x3cu), 0x34u);
/* e8e5bb: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e5c1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e5c1: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e5c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e5c9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e5cb: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e5cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e5d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e5d1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e5d3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e5d6: mov ecx, esp */
  ecx = esp;
/* e8e5d8: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e5dc: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e5e1: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* e8e5e7: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e5edu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e5ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e5f0: mov ecx, esp */
  ecx = esp;
/* e8e5f2: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e5f6: push 0xeb0b64 */
  { uint32_t v = 0xeb0b64u; esp -= 4; W32(esp, v); }
/* e8e5fb: mov dword ptr [esp + 0x3c], 0x35 */
  W32((uint32_t)(esp + 0x3cu), 0x35u);
/* e8e603: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e609u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e609: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e60f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e611: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e613: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e617: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e619u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e619: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e8e61b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e61e: mov ecx, esp */
  ecx = esp;
/* e8e620: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e624: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e629: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* e8e62f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e635u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e635: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e638: mov ecx, esp */
  ecx = esp;
/* e8e63a: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e63e: push 0xeb0b48 */
  { uint32_t v = 0xeb0b48u; esp -= 4; W32(esp, v); }
/* e8e643: mov dword ptr [esp + 0x3c], 0x36 */
  W32((uint32_t)(esp + 0x3cu), 0x36u);
/* e8e64b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e651u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e651: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e657: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e659: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e65b: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e65f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e661u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e661: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e663: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e666: mov ecx, esp */
  ecx = esp;
/* e8e668: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e66c: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e671: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* e8e677: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e67du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e67d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e680: mov ecx, esp */
  ecx = esp;
/* e8e682: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e686: push 0xeb0b30 */
  { uint32_t v = 0xeb0b30u; esp -= 4; W32(esp, v); }
/* e8e68b: mov dword ptr [esp + 0x3c], 0x37 */
  W32((uint32_t)(esp + 0x3cu), 0x37u);
/* e8e693: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e699u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e699: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e69f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e6a1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e6a3: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e6a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e6a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e6a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e6ab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e6ae: mov ecx, esp */
  ecx = esp;
/* e8e6b0: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* e8e6b4: push 0xeb0ef4 */
  { uint32_t v = 0xeb0ef4u; esp -= 4; W32(esp, v); }
/* e8e6b9: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* e8e6bf: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e6c5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e6c5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e6c8: mov ecx, esp */
  ecx = esp;
/* e8e6ca: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* e8e6ce: push 0xeb0b10 */
  { uint32_t v = 0xeb0b10u; esp -= 4; W32(esp, v); }
/* e8e6d3: mov dword ptr [esp + 0x3c], 0x38 */
  W32((uint32_t)(esp + 0x3cu), 0x38u);
/* e8e6db: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe8e6e1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e8e6e1: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e6e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e6e9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e6eb: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* e8e6ef: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8e6f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e6f1: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* e8e6f7: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e8e6fd: mov dword ptr [ecx + 0xc], 1 */
  W32((uint32_t)(ecx + 0xcu), 0x1u);
L_e8e704: /* e8e704: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e8e708: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8e709: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8e70a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8e711: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8e712: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8e715: ret  */
  esp += 4; SPILL(); return;
}

void f_e8e720(void) {
  LOAD_REGS();
L_e8e720: /* e8e720: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e8e726: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e8e728: push 0xeacdf1 */
  { uint32_t v = 0xeacdf1u; esp -= 4; W32(esp, v); }
/* e8e72d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e72e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e8e735: sub esp, 0x440 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x440u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8e73b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8e73c: mov ebx, ecx */
  ebx = ecx;
/* e8e73e: mov eax, dword ptr [ebx + 0x4110] */
  eax = R32((uint32_t)(ebx + 0x4110u));
/* e8e744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8e746: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8e747: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8e748: je 0xe8e769 */
  if (zf) goto L_e8e769;
L_e8e74a: /* e8e74a: lea esi, [ebx + 0x2fc90] */
  esi = (uint32_t)(ebx + 0x2fc90u);
/* e8e750: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e752: mov ecx, esi */
  ecx = esi;
/* e8e754: call dword ptr [0xeae2ac] */
  esp -= 4; W32(esp, 0xe8e75au); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* e8e75a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e75c: push 0x80000 */
  { uint32_t v = 0x80000u; esp -= 4; W32(esp, v); }
/* e8e761: mov ecx, esi */
  ecx = esi;
/* e8e763: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8e769u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_e8e769: /* e8e769: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8e76a: call dword ptr [0xeae364] */
  esp -= 4; W32(esp, 0xe8e770u); SPILL(); call_ind(R32(0xeae364u)); if (g_unwind) return; /* USER32!GetDesktopWindow */ RELOAD();
/* e8e770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e771: call dword ptr [0xeae36c] */
  esp -= 4; W32(esp, 0xe8e777u); SPILL(); call_ind(R32(0xeae36cu)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* e8e777: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* e8e779: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e77a: call dword ptr [0xeae2e0] */
  esp -= 4; W32(esp, 0xe8e780u); SPILL(); call_ind(R32(0xeae2e0u)); if (g_unwind) return; /* GDI32!GetDeviceCaps */ RELOAD();
/* e8e780: mov ebp, dword ptr [0xeae1c0] */
  ebp = R32((uint32_t)(0xeae1c0u));
/* e8e786: mov dword ptr [ebx + 0x46ac], eax */
  W32((uint32_t)(ebx + 0x46acu), eax);
/* e8e78c: mov eax, dword ptr [ebx + 0x46b0] */
  eax = R32((uint32_t)(ebx + 0x46b0u));
/* e8e792: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8e794: je 0xe8e7a4 */
  if (zf) goto L_e8e7a4;
L_e8e796: /* e8e796: mov eax, dword ptr [ebx + 0x46b4] */
  eax = R32((uint32_t)(ebx + 0x46b4u));
/* e8e79c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8e79e: jne 0xe8e920 */
  if (!zf) goto L_e8e920;
L_e8e7a4: /* e8e7a4: push 0xdc */
  { uint32_t v = 0xdcu; esp -= 4; W32(esp, v); }
/* e8e7a9: call 0xe9b3b0 */
  esp -= 4; W32(esp, 0xe8e7aeu); SPILL(); f_e9b3b0(); if (g_unwind) return; RELOAD();
/* e8e7ae: xor edi, edi */
  edi = 0;
/* e8e7b0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8e7b2: mov dword ptr [ebx + 0x46b0], eax */
  W32((uint32_t)(ebx + 0x46b0u), eax);
/* e8e7b8: jne 0xe8e7d1 */
  if (!zf) goto L_e8e7d1;
L_e8e7ba: /* e8e7ba: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8e7bf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e7c1: push 0xeb21d8 */
  { uint32_t v = 0xeb21d8u; esp -= 4; W32(esp, v); }
/* e8e7c6: push 0x318 */
  { uint32_t v = 0x318u; esp -= 4; W32(esp, v); }
/* e8e7cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e7cc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8e7ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e7ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8e7d1: /* e8e7d1: mov eax, dword ptr [ebx + 0x46b0] */
  eax = R32((uint32_t)(ebx + 0x46b0u));
/* e8e7d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8e7d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e7da: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe8e7ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e7dd: mov esi, eax */
  esi = eax;
/* e8e7df: lea ecx, [ebx + 0x467c] */
  ecx = (uint32_t)(ebx + 0x467cu);
/* e8e7e5: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* e8e7ea: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* e8e7ee: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* e8e7f1: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* e8e7f4: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe8e7fau); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e8e7fa: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8e7ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e801: push 0xeb219c */
  { uint32_t v = 0xeb219cu; esp -= 4; W32(esp, v); }
/* e8e806: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8e80b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e80c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8e80eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e80e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8e811: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8e813: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* e8e817: jle 0xe8e8ff */
  if ((zf || sf != of)) goto L_e8e8ff;
L_e8e81d: /* e8e81d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e8e820: /* e8e820: mov eax, dword ptr [ebx + 0x46b0] */
  eax = R32((uint32_t)(ebx + 0x46b0u));
/* e8e826: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8e828: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e8e82c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e82d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e8e831: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8e833: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e835: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xe8e838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e838: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8e83a: jge 0xe8e885 */
  if ((sf == of)) goto L_e8e885;
L_e8e83c: /* e8e83c: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* e8e840: call 0xe8c1f0 */
  esp -= 4; W32(esp, 0xe8e845u); SPILL(); f_e8c1f0(); if (g_unwind) return; RELOAD();
/* e8e845: mov ecx, eax */
  ecx = eax;
/* e8e847: mov dword ptr [esp + 0x458], 0 */
  W32((uint32_t)(esp + 0x458u), 0x0u);
/* e8e852: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe8e858u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e8e858: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8e85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e85f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8e861: push 0xeb2158 */
  { uint32_t v = 0xeb2158u; esp -= 4; W32(esp, v); }
/* e8e866: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e867: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8e86du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8e86d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8e870: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e8e874: mov dword ptr [esp + 0x458], 0xffffffff */
  W32((uint32_t)(esp + 0x458u), 0xffffffffu);
/* e8e87f: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe8e885u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e8e885: /* e8e885: mov esi, dword ptr [0xeae1f8] */
  esi = R32((uint32_t)(0xeae1f8u));
/* e8e88b: lea ecx, [esp + 0x224] */
  ecx = (uint32_t)(esp + 0x224u);
/* e8e892: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e894: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e895: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8e897u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e897: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8e89a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e89b: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* e8e89f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8e8a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8e8a2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8e8a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e8a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8e8a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e8a8: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8e8ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e8af: push 0xeb2144 */
  { uint32_t v = 0xeb2144u; esp -= 4; W32(esp, v); }
/* e8e8b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e8b5: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8e8bbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8e8bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8e8be: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* e8e8c3: lea esi, [ebx + 0x467c] */
  esi = (uint32_t)(ebx + 0x467cu);
/* e8e8c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e8cb: mov ecx, esi */
  ecx = esi;
/* e8e8cd: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8e8d3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8e8d3: mov edi, eax */
  edi = eax;
/* e8e8d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e8e8d7: imul edi, edi, 0x42c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x42cu);
  edi = (uint32_t)r;
  }
/* e8e8dd: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8e8df: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8e8e3: mov ecx, 0x10b */
  ecx = 0x10bu;
/* e8e8e8: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* e8e8ec: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8e8ee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e8e8f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8e8f3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8e8f5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e8e8f9: jl 0xe8e820 */
  if ((sf != of)) goto L_e8e820;
L_e8e8ff: /* e8e8ff: mov eax, dword ptr [ebx + 0x4680] */
  eax = R32((uint32_t)(ebx + 0x4680u));
/* e8e905: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8e907: jne 0xe8e920 */
  if (!zf) goto L_e8e920;
L_e8e909: /* e8e909: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e8e90f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8e911: push 0xeb210c */
  { uint32_t v = 0xeb210cu; esp -= 4; W32(esp, v); }
/* e8e916: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e917: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8e91du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8e91d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8e920: /* e8e920: mov eax, dword ptr [ebx + 0x412c] */
  eax = R32((uint32_t)(ebx + 0x412cu));
/* e8e926: xor edi, edi */
  edi = 0;
/* e8e928: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8e92a: mov dword ptr [ebx + 0x4688], edi */
  W32((uint32_t)(ebx + 0x4688u), edi);
/* e8e930: jl 0xe8e940 */
  if ((sf != of)) goto L_e8e940;
L_e8e932: /* e8e932: cmp eax, dword ptr [ebx + 0x4680] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4680u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8e938: jge 0xe8e940 */
  if ((sf == of)) goto L_e8e940;
L_e8e93a: /* e8e93a: mov dword ptr [ebx + 0x4688], eax */
  W32((uint32_t)(ebx + 0x4688u), eax);
L_e8e940: /* e8e940: mov eax, dword ptr [ebx + 0x46b0] */
  eax = R32((uint32_t)(ebx + 0x46b0u));
/* e8e946: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e948: lea edx, [ebx + 0x414c] */
  edx = (uint32_t)(ebx + 0x414cu);
/* e8e94e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8e94f: mov edx, dword ptr [ebx + 0x4688] */
  edx = R32((uint32_t)(ebx + 0x4688u));
/* e8e955: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8e957: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8e958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8e959: call dword ptr [ecx + 0x34] */
  { uint32_t t = R32((uint32_t)(ecx + 0x34u)); esp -= 4; W32(esp, 0xe8e95cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e95c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8e95e: jge 0xe8e977 */
  if ((sf == of)) goto L_e8e977;
L_e8e960: /* e8e960: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e8e965: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e967: push 0xeb1f58 */
  { uint32_t v = 0xeb1f58u; esp -= 4; W32(esp, v); }
/* e8e96c: push 0x318 */
  { uint32_t v = 0x318u; esp -= 4; W32(esp, v); }
/* e8e971: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e972: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8e974u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e974: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8e977: /* e8e977: mov edx, dword ptr [ebx + 0x41e0] */
  edx = R32((uint32_t)(ebx + 0x41e0u));
/* e8e97d: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8e982: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e984: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8e985: push 0xeb1f08 */
  { uint32_t v = 0xeb1f08u; esp -= 4; W32(esp, v); }
/* e8e98a: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8e98f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e990: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8e992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e992: mov edx, dword ptr [ebx + 0x41e4] */
  edx = R32((uint32_t)(ebx + 0x41e4u));
/* e8e998: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8e99d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e99f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8e9a0: push 0xeb1eb8 */
  { uint32_t v = 0xeb1eb8u; esp -= 4; W32(esp, v); }
/* e8e9a5: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8e9aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8e9ab: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8e9adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8e9ad: mov ecx, dword ptr [ebx + 0x4208] */
  ecx = R32((uint32_t)(ebx + 0x4208u));
/* e8e9b3: mov eax, 8 */
  eax = 0x8u;
/* e8e9b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8e9bb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8e9bd: jae 0xe8e9c5 */
  if (!cf) goto L_e8e9c5;
L_e8e9bf: /* e8e9bf: mov dword ptr [ebx + 0x40d8], edi */
  W32((uint32_t)(ebx + 0x40d8u), edi);
L_e8e9c5: /* e8e9c5: test dword ptr [ebx + 0x4168], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4168u))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8e9cf: je 0xe8e9d9 */
  if (zf) goto L_e8e9d9;
L_e8e9d1: /* e8e9d1: cmp dword ptr [ebx + 0x40d8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x40d8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8e9d7: jne 0xe8e9e9 */
  if (!zf) goto L_e8e9e9;
L_e8e9d9: /* e8e9d9: mov dword ptr [ebx + 0x4208], 0x10 */
  W32((uint32_t)(ebx + 0x4208u), 0x10u);
/* e8e9e3: mov dword ptr [ebx + 0x41ec], eax */
  W32((uint32_t)(ebx + 0x41ecu), eax);
L_e8e9e9: /* e8e9e9: mov edx, dword ptr [ebx + 0x41ec] */
  edx = R32((uint32_t)(ebx + 0x41ecu));
/* e8e9ef: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8e9f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8e9f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8e9f7: push 0xeb1e74 */
  { uint32_t v = 0xeb1e74u; esp -= 4; W32(esp, v); }
/* e8e9fc: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ea01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ea02: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ea04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ea04: mov edx, dword ptr [ebx + 0x4200] */
  edx = R32((uint32_t)(ebx + 0x4200u));
/* e8ea0a: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ea0f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ea11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ea12: push 0xeb1e30 */
  { uint32_t v = 0xeb1e30u; esp -= 4; W32(esp, v); }
/* e8ea17: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ea1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ea1d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ea1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ea1f: mov edx, dword ptr [ebx + 0x4204] */
  edx = R32((uint32_t)(ebx + 0x4204u));
/* e8ea25: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ea2a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ea2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ea2d: push 0xeb1df4 */
  { uint32_t v = 0xeb1df4u; esp -= 4; W32(esp, v); }
/* e8ea32: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ea37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ea38: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ea3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ea3a: mov edx, dword ptr [ebx + 0x4208] */
  edx = R32((uint32_t)(ebx + 0x4208u));
/* e8ea40: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ea45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ea47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ea48: push 0xeb1dc0 */
  { uint32_t v = 0xeb1dc0u; esp -= 4; W32(esp, v); }
/* e8ea4d: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ea52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ea53: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ea55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ea55: mov edx, dword ptr [ebx + 0x420c] */
  edx = R32((uint32_t)(ebx + 0x420cu));
/* e8ea5b: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ea60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ea62: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ea65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ea66: push 0xeb1d80 */
  { uint32_t v = 0xeb1d80u; esp -= 4; W32(esp, v); }
/* e8ea6b: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ea70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ea71: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ea73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ea73: mov edx, dword ptr [ebx + 0x4214] */
  edx = R32((uint32_t)(ebx + 0x4214u));
/* e8ea79: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ea7e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ea80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ea81: push 0xeb1d38 */
  { uint32_t v = 0xeb1d38u; esp -= 4; W32(esp, v); }
/* e8ea86: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ea8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ea8c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ea8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ea8e: mov edx, dword ptr [ebx + 0x4210] */
  edx = R32((uint32_t)(ebx + 0x4210u));
/* e8ea94: movzx eax, byte ptr [ebx + 0x4211] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x4211u)));
/* e8ea9b: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8eaa1: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e8eaa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8eaa8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8eaaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8eaab: push 0xeb1ce8 */
  { uint32_t v = 0xeb1ce8u; esp -= 4; W32(esp, v); }
/* e8eab0: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eab5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8eab6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8eab8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8eab8: mov eax, dword ptr [ebx + 0x4218] */
  eax = R32((uint32_t)(ebx + 0x4218u));
/* e8eabe: movzx ecx, byte ptr [ebx + 0x4219] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x4219u)));
/* e8eac5: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8eacb: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8ead0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ead1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8ead3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ead4: push 0xeb1c98 */
  { uint32_t v = 0xeb1c98u; esp -= 4; W32(esp, v); }
/* e8ead9: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8eadf: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8eae1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8eae1: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* e8eae4: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8eae7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8eae9: je 0xe8eaf9 */
  if (zf) goto L_e8eaf9;
L_e8eaeb: /* e8eaeb: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e8eaf1: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8eaf3: jne 0xe8eaf9 */
  if (!zf) goto L_e8eaf9;
L_e8eaf5: /* e8eaf5: xor eax, eax */
  eax = 0;
/* e8eaf7: jmp 0xe8eafe */
  goto L_e8eafe;
L_e8eaf9: /* e8eaf9: mov eax, 1 */
  eax = 0x1u;
L_e8eafe: /* e8eafe: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* e8eb01: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8eb03: mov eax, dword ptr [ebx + 0x4168] */
  eax = R32((uint32_t)(ebx + 0x4168u));
/* e8eb09: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8eb0c: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* e8eb0f: je 0xe8eb26 */
  if (zf) goto L_e8eb26;
L_e8eb11: /* e8eb11: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8eb17: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8eb19: push 0xeb1c50 */
  { uint32_t v = 0xeb1c50u; esp -= 4; W32(esp, v); }
/* e8eb1e: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eb23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8eb24: jmp 0xe8eb39 */
  goto L_e8eb39;
L_e8eb26: /* e8eb26: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8eb2c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8eb2e: push 0xeb1bf0 */
  { uint32_t v = 0xeb1bf0u; esp -= 4; W32(esp, v); }
/* e8eb33: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eb38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e8eb39: /* e8eb39: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8eb3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8eb3b: mov ecx, dword ptr [ebx + 0x4218] */
  ecx = R32((uint32_t)(ebx + 0x4218u));
/* e8eb41: mov eax, ecx */
  eax = ecx;
/* e8eb43: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e8eb46: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* e8eb49: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* e8eb4c: mov ecx, dword ptr [ebx + 0x4134] */
  ecx = R32((uint32_t)(ebx + 0x4134u));
/* e8eb52: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8eb57: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8eb5a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8eb5c: mov dword ptr [ebx + 0x4674], eax */
  W32((uint32_t)(ebx + 0x4674u), eax);
/* e8eb62: jle 0xe8eb66 */
  if ((zf || sf != of)) goto L_e8eb66;
L_e8eb64: /* e8eb64: mov eax, ecx */
  eax = ecx;
L_e8eb66: /* e8eb66: mov ecx, dword ptr [ebx + 0x4170] */
  ecx = R32((uint32_t)(ebx + 0x4170u));
/* e8eb6c: mov dword ptr [ebx + 0x4674], eax */
  W32((uint32_t)(ebx + 0x4674u), eax);
/* e8eb72: mov eax, dword ptr [ebx + 0x4188] */
  eax = R32((uint32_t)(ebx + 0x4188u));
/* e8eb78: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e8eb7e: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8eb81: mov dword ptr [ebx + 0x4c], ecx */
  W32((uint32_t)(ebx + 0x4cu), ecx);
/* e8eb84: je 0xe8eb91 */
  if (zf) goto L_e8eb91;
L_e8eb86: /* e8eb86: mov edx, dword ptr [ebx + 0x40e0] */
  edx = R32((uint32_t)(ebx + 0x40e0u));
/* e8eb8c: mov dword ptr [ebx + 0x48], edx */
  W32((uint32_t)(ebx + 0x48u), edx);
/* e8eb8f: jmp 0xe8eb94 */
  goto L_e8eb94;
L_e8eb91: /* e8eb91: mov dword ptr [ebx + 0x48], edi */
  W32((uint32_t)(ebx + 0x48u), edi);
L_e8eb94: /* e8eb94: test eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8eb99: je 0xe8eba7 */
  if (zf) goto L_e8eba7;
L_e8eb9b: /* e8eb9b: mov dword ptr [ebx + 0x40e4], 1 */
  W32((uint32_t)(ebx + 0x40e4u), 0x1u);
/* e8eba5: jmp 0xe8ebad */
  goto L_e8ebad;
L_e8eba7: /* e8eba7: mov dword ptr [ebx + 0x40e4], edi */
  W32((uint32_t)(ebx + 0x40e4u), edi);
L_e8ebad: /* e8ebad: mov edx, dword ptr [ebx + 0x4688] */
  edx = R32((uint32_t)(ebx + 0x4688u));
/* e8ebb3: mov eax, dword ptr [ebx + 0x46b0] */
  eax = R32((uint32_t)(ebx + 0x46b0u));
/* e8ebb9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ebbb: push 0x31545844 */
  { uint32_t v = 0x31545844u; esp -= 4; W32(esp, v); }
/* e8ebc0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e8ebc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8ebc3: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e8ebc5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ebc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ebc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ebc9: call dword ptr [ecx + 0x28] */
  { uint32_t t = R32((uint32_t)(ecx + 0x28u)); esp -= 4; W32(esp, 0xe8ebccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ebcc: xor ecx, ecx */
  ecx = 0;
/* e8ebce: push 0x33545844 */
  { uint32_t v = 0x33545844u; esp -= 4; W32(esp, v); }
/* e8ebd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8ebd5: mov eax, dword ptr [ebx + 0x46b0] */
  eax = R32((uint32_t)(ebx + 0x46b0u));
/* e8ebdb: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* e8ebde: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e8ebe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8ebe1: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e8ebe3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ebe5: mov dword ptr [ebx + 0x40e8], ecx */
  W32((uint32_t)(ebx + 0x40e8u), ecx);
/* e8ebeb: mov ecx, dword ptr [ebx + 0x4688] */
  ecx = R32((uint32_t)(ebx + 0x4688u));
/* e8ebf1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ebf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ebf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ebf5: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe8ebf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ebf8: xor edx, edx */
  edx = 0;
/* e8ebfa: push 0x35545844 */
  { uint32_t v = 0x35545844u; esp -= 4; W32(esp, v); }
/* e8ebff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8ec01: mov eax, dword ptr [ebx + 0x46b0] */
  eax = R32((uint32_t)(ebx + 0x46b0u));
/* e8ec07: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* e8ec0a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e8ec0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8ec0d: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e8ec0f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ec11: mov dword ptr [ebx + 0x40ec], edx */
  W32((uint32_t)(ebx + 0x40ecu), edx);
/* e8ec17: mov edx, dword ptr [ebx + 0x4688] */
  edx = R32((uint32_t)(ebx + 0x4688u));
/* e8ec1d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ec1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ec20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ec21: call dword ptr [ecx + 0x28] */
  { uint32_t t = R32((uint32_t)(ecx + 0x28u)); esp -= 4; W32(esp, 0xe8ec24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ec24: xor ecx, ecx */
  ecx = 0;
/* e8ec26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8ec28: mov eax, dword ptr [ebx + 0x4118] */
  eax = R32((uint32_t)(ebx + 0x4118u));
/* e8ec2e: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* e8ec31: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ec33: mov dword ptr [ebx + 0x40f0], ecx */
  W32((uint32_t)(ebx + 0x40f0u), ecx);
/* e8ec39: je 0xe8ec4d */
  if (zf) goto L_e8ec4d;
L_e8ec3b: /* e8ec3b: mov dword ptr [ebx + 0x40f0], edi */
  W32((uint32_t)(ebx + 0x40f0u), edi);
/* e8ec41: mov dword ptr [ebx + 0x40ec], edi */
  W32((uint32_t)(ebx + 0x40ecu), edi);
/* e8ec47: mov dword ptr [ebx + 0x40e8], edi */
  W32((uint32_t)(ebx + 0x40e8u), edi);
L_e8ec4d: /* e8ec4d: cmp dword ptr [ebx + 0x40e8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x40e8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ec53: jne 0xe8ec6d */
  if (!zf) goto L_e8ec6d;
L_e8ec55: /* e8ec55: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8ec5b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8ec5d: push 0xeb1b98 */
  { uint32_t v = 0xeb1b98u; esp -= 4; W32(esp, v); }
/* e8ec62: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ec67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ec68: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ec6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ec6a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ec6d: /* e8ec6d: cmp dword ptr [ebx + 0x40ec], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x40ecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ec73: jne 0xe8ec8d */
  if (!zf) goto L_e8ec8d;
L_e8ec75: /* e8ec75: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8ec7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8ec7d: push 0xeb1b40 */
  { uint32_t v = 0xeb1b40u; esp -= 4; W32(esp, v); }
/* e8ec82: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ec87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ec88: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ec8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ec8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ec8d: /* e8ec8d: cmp dword ptr [ebx + 0x40f0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x40f0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ec93: jne 0xe8ecac */
  if (!zf) goto L_e8ecac;
L_e8ec95: /* e8ec95: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ec9a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ec9c: push 0xeb1ae8 */
  { uint32_t v = 0xeb1ae8u; esp -= 4; W32(esp, v); }
/* e8eca1: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eca6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8eca7: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8eca9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8eca9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ecac: /* e8ecac: mov eax, dword ptr [ebx + 0x40e8] */
  eax = R32((uint32_t)(ebx + 0x40e8u));
/* e8ecb2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ecb4: je 0xe8ecc6 */
  if (zf) goto L_e8ecc6;
L_e8ecb6: /* e8ecb6: cmp dword ptr [ebx + 0x40ec], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x40ecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ecbc: je 0xe8ecc6 */
  if (zf) goto L_e8ecc6;
L_e8ecbe: /* e8ecbe: cmp dword ptr [ebx + 0x40f0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x40f0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ecc4: jne 0xe8ecc9 */
  if (!zf) goto L_e8ecc9;
L_e8ecc6: /* e8ecc6: mov dword ptr [ebx + 0x50], edi */
  W32((uint32_t)(ebx + 0x50u), edi);
L_e8ecc9: /* e8ecc9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8eccb: je 0xe8ecd0 */
  if (zf) goto L_e8ecd0;
L_e8eccd: /* e8eccd: mov dword ptr [ebx + 0x5c], edi */
  W32((uint32_t)(ebx + 0x5cu), edi);
L_e8ecd0: /* e8ecd0: mov eax, dword ptr [ebx + 0x4170] */
  eax = R32((uint32_t)(ebx + 0x4170u));
/* e8ecd6: mov esi, 0x100 */
  esi = 0x100u;
/* e8ecdb: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ecdd: mov dword ptr [ebx + 0x4108], edi */
  W32((uint32_t)(ebx + 0x4108u), edi);
/* e8ece3: mov dword ptr [ebx + 0x410c], edi */
  W32((uint32_t)(ebx + 0x410cu), edi);
/* e8ece9: jne 0xe8ed03 */
  if (!zf) goto L_e8ed03;
L_e8eceb: /* e8eceb: test eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ecf0: mov ecx, 1 */
  ecx = 0x1u;
/* e8ecf5: mov dword ptr [ebx + 0x4108], ecx */
  W32((uint32_t)(ebx + 0x4108u), ecx);
/* e8ecfb: je 0xe8ed03 */
  if (zf) goto L_e8ed03;
L_e8ecfd: /* e8ecfd: mov dword ptr [ebx + 0x410c], ecx */
  W32((uint32_t)(ebx + 0x410cu), ecx);
L_e8ed03: /* e8ed03: cmp dword ptr [ebx + 0x4108], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4108u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ed09: je 0xe8ed2f */
  if (zf) goto L_e8ed2f;
L_e8ed0b: /* e8ed0b: cmp dword ptr [ebx + 0x410c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x410cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8ed11: je 0xe8ed1a */
  if (zf) goto L_e8ed1a;
L_e8ed13: /* e8ed13: push 0xeb1ab0 */
  { uint32_t v = 0xeb1ab0u; esp -= 4; W32(esp, v); }
/* e8ed18: jmp 0xe8ed4f */
  goto L_e8ed4f;
L_e8ed1a: /* e8ed1a: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8ed20: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8ed22: push 0xeb1a74 */
  { uint32_t v = 0xeb1a74u; esp -= 4; W32(esp, v); }
/* e8ed27: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ed2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ed2d: jmp 0xe8ed5d */
  goto L_e8ed5d;
L_e8ed2f: /* e8ed2f: test eax, 0x100000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ed34: je 0xe8ed4a */
  if (zf) goto L_e8ed4a;
L_e8ed36: /* e8ed36: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ed3b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ed3d: push 0xeb1a34 */
  { uint32_t v = 0xeb1a34u; esp -= 4; W32(esp, v); }
/* e8ed42: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ed47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ed48: jmp 0xe8ed5d */
  goto L_e8ed5d;
L_e8ed4a: /* e8ed4a: push 0xeb19f4 */
  { uint32_t v = 0xeb19f4u; esp -= 4; W32(esp, v); }
L_e8ed4f: /* e8ed4f: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8ed55: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8ed57: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ed5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e8ed5d: /* e8ed5d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ed5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ed5f: mov eax, dword ptr [ebx + 0x418c] */
  eax = R32((uint32_t)(ebx + 0x418cu));
/* e8ed65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ed68: test eax, 0x30000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ed6d: mov dword ptr [ebx + 0x4130], 0xffff */
  W32((uint32_t)(ebx + 0x4130u), 0xffffu);
/* e8ed77: jne 0xe8ed99 */
  if (!zf) goto L_e8ed99;
L_e8ed79: /* e8ed79: mov dword ptr [ebx + 0x40d0], edi */
  W32((uint32_t)(ebx + 0x40d0u), edi);
/* e8ed7f: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8ed85: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8ed87: push 0xeb1988 */
  { uint32_t v = 0xeb1988u; esp -= 4; W32(esp, v); }
/* e8ed8c: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ed91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ed92: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ed94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ed94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8ed97: jmp 0xe8edc9 */
  goto L_e8edc9;
L_e8ed99: /* e8ed99: test eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ed9e: mov dword ptr [ebx + 0x40d0], 1 */
  W32((uint32_t)(ebx + 0x40d0u), 0x1u);
/* e8eda8: je 0xe8edc3 */
  if (zf) goto L_e8edc3;
L_e8edaa: /* e8edaa: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8edaf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8edb1: push 0xeb1948 */
  { uint32_t v = 0xeb1948u; esp -= 4; W32(esp, v); }
/* e8edb6: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8edbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8edbc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8edbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8edbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8edc1: jmp 0xe8edc9 */
  goto L_e8edc9;
L_e8edc3: /* e8edc3: mov dword ptr [ebx + 0x40cc], edi */
  W32((uint32_t)(ebx + 0x40ccu), edi);
L_e8edc9: /* e8edc9: cmp dword ptr [ebx + 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8edcc: je 0xe8edda */
  if (zf) goto L_e8edda;
L_e8edce: /* e8edce: mov dword ptr [ebx + 0x41a8], esi */
  W32((uint32_t)(ebx + 0x41a8u), esi);
/* e8edd4: mov dword ptr [ebx + 0x41a4], esi */
  W32((uint32_t)(ebx + 0x41a4u), esi);
L_e8edda: /* e8edda: mov eax, dword ptr [ebx + 0x41dc] */
  eax = R32((uint32_t)(ebx + 0x41dcu));
/* e8ede0: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8ede3: je 0xe8edff */
  if (zf) goto L_e8edff;
L_e8ede5: /* e8ede5: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8edeb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8eded: push 0xeb18f8 */
  { uint32_t v = 0xeb18f8u; esp -= 4; W32(esp, v); }
/* e8edf2: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8edf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8edf8: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8edfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8edfa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8edfd: jmp 0xe8ee02 */
  goto L_e8ee02;
L_e8edff: /* e8edff: mov dword ptr [ebx + 0x40], edi */
  W32((uint32_t)(ebx + 0x40u), edi);
L_e8ee02: /* e8ee02: mov eax, dword ptr [ebx + 0x4170] */
  eax = R32((uint32_t)(ebx + 0x4170u));
/* e8ee08: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8ee0b: je 0xe8ee25 */
  if (zf) goto L_e8ee25;
L_e8ee0d: /* e8ee0d: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8ee13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8ee15: push 0xeb18b0 */
  { uint32_t v = 0xeb18b0u; esp -= 4; W32(esp, v); }
/* e8ee1a: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ee1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ee20: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ee22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ee22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ee25: /* e8ee25: mov eax, dword ptr [ebx + 0x4170] */
  eax = R32((uint32_t)(ebx + 0x4170u));
/* e8ee2b: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e8ee2e: je 0xe8ee47 */
  if (zf) goto L_e8ee47;
L_e8ee30: /* e8ee30: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ee35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ee37: push 0xeb1870 */
  { uint32_t v = 0xeb1870u; esp -= 4; W32(esp, v); }
/* e8ee3c: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ee41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ee42: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ee44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ee44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ee47: /* e8ee47: test dword ptr [ebx + 0x41dc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x41dcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ee4d: je 0xe8ee67 */
  if (zf) goto L_e8ee67;
L_e8ee4f: /* e8ee4f: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8ee55: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8ee57: push 0xeb1820 */
  { uint32_t v = 0xeb1820u; esp -= 4; W32(esp, v); }
/* e8ee5c: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ee61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ee62: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ee64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ee64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ee67: /* e8ee67: test dword ptr [ebx + 0x41dc], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x41dcu))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ee71: je 0xe8ee8b */
  if (zf) goto L_e8ee8b;
L_e8ee73: /* e8ee73: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8ee79: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8ee7b: push 0xeb17d0 */
  { uint32_t v = 0xeb17d0u; esp -= 4; W32(esp, v); }
/* e8ee80: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ee85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ee86: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ee88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ee88: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ee8b: /* e8ee8b: test dword ptr [ebx + 0x41dc], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x41dcu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ee95: je 0xe8eeae */
  if (zf) goto L_e8eeae;
L_e8ee97: /* e8ee97: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ee9c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ee9e: push 0xeb1770 */
  { uint32_t v = 0xeb1770u; esp -= 4; W32(esp, v); }
/* e8eea3: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eea8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8eea9: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8eeabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8eeab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8eeae: /* e8eeae: test dword ptr [ebx + 0x41dc], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x41dcu))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8eeb8: je 0xe8eed2 */
  if (zf) goto L_e8eed2;
L_e8eeba: /* e8eeba: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8eec0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8eec2: push 0xeb1720 */
  { uint32_t v = 0xeb1720u; esp -= 4; W32(esp, v); }
/* e8eec7: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eecc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8eecd: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8eecfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8eecf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8eed2: /* e8eed2: test dword ptr [ebx + 0x41dc], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x41dcu))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8eedc: je 0xe8eef6 */
  if (zf) goto L_e8eef6;
L_e8eede: /* e8eede: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8eee4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8eee6: push 0xeb16b8 */
  { uint32_t v = 0xeb16b8u; esp -= 4; W32(esp, v); }
/* e8eeeb: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8eef0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8eef1: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8eef3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8eef3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8eef6: /* e8eef6: test dword ptr [ebx + 0x41dc], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x41dcu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ef00: je 0xe8ef19 */
  if (zf) goto L_e8ef19;
L_e8ef02: /* e8ef02: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ef07: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ef09: push 0xeb1650 */
  { uint32_t v = 0xeb1650u; esp -= 4; W32(esp, v); }
/* e8ef0e: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ef13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ef14: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ef16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ef16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8ef19: /* e8ef19: mov edx, dword ptr [ebx + 0x4688] */
  edx = R32((uint32_t)(ebx + 0x4688u));
/* e8ef1f: mov esi, dword ptr [ebx + 0x467c] */
  esi = R32((uint32_t)(ebx + 0x467cu));
/* e8ef25: imul edx, edx, 0x42c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x42cu);
  edx = (uint32_t)r;
  }
/* e8ef2b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e8ef2d: lea edi, [ebx + 0x4220] */
  edi = (uint32_t)(ebx + 0x4220u);
/* e8ef33: mov ecx, 0x10b */
  ecx = 0x10bu;
/* e8ef38: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e8ef3a: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8ef3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ef41: push 0xeb15e0 */
  { uint32_t v = 0xeb15e0u; esp -= 4; W32(esp, v); }
/* e8ef46: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ef4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8ef4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ef4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ef4e: mov edi, dword ptr [0xeae1f8] */
  edi = R32((uint32_t)(0xeae1f8u));
/* e8ef54: lea eax, [ebx + 0x4220] */
  eax = (uint32_t)(ebx + 0x4220u);
/* e8ef5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ef5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ef5d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8ef5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ef5f: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8ef65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ef66: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8ef68: push 0xeb15ac */
  { uint32_t v = 0xeb15acu; esp -= 4; W32(esp, v); }
/* e8ef6d: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ef72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ef73: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ef75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ef75: lea esi, [ebx + 0x4420] */
  esi = (uint32_t)(ebx + 0x4420u);
/* e8ef7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ef7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8ef7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8ef80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ef80: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8ef86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8ef88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ef89: push 0xeb1570 */
  { uint32_t v = 0xeb1570u; esp -= 4; W32(esp, v); }
/* e8ef8e: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8ef93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8ef94: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8ef96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ef96: movzx eax, word ptr [ebx + 0x4626] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x4626u)));
/* e8ef9d: mov word ptr [ebx + 0x464c], ax */
  W16((uint32_t)(ebx + 0x464cu), (eax & 0xffffu));
/* e8efa4: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8efaa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8efac: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* e8efaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8efb0: push 0xeb1540 */
  { uint32_t v = 0xeb1540u; esp -= 4; W32(esp, v); }
/* e8efb5: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8efba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8efbb: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8efbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8efbd: mov ax, word ptr [ebx + 0x4624] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4624u))) & 0xffffu);
/* e8efc4: mov word ptr [ebx + 0x464e], ax */
  W16((uint32_t)(ebx + 0x464eu), (eax & 0xffffu));
/* e8efcb: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8efd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8efd3: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8efd6: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* e8efd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8efda: push 0xeb1510 */
  { uint32_t v = 0xeb1510u; esp -= 4; W32(esp, v); }
/* e8efdf: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8efe4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8efe5: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8efe7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8efe7: movzx eax, word ptr [ebx + 0x4622] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x4622u)));
/* e8efee: mov word ptr [ebx + 0x4650], ax */
  W16((uint32_t)(ebx + 0x4650u), (eax & 0xffffu));
/* e8eff5: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8effb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8effd: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* e8f000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f001: push 0xeb14d8 */
  { uint32_t v = 0xeb14d8u; esp -= 4; W32(esp, v); }
/* e8f006: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f00b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f00c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f00eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f00e: mov ax, word ptr [ebx + 0x4620] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x4620u))) & 0xffffu);
/* e8f015: mov word ptr [ebx + 0x4652], ax */
  W16((uint32_t)(ebx + 0x4652u), (eax & 0xffffu));
/* e8f01c: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f022: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f024: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* e8f027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f028: push 0xeb14ac */
  { uint32_t v = 0xeb14acu; esp -= 4; W32(esp, v); }
/* e8f02d: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f033: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f035u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f035: mov eax, dword ptr [ebx + 0x4628] */
  eax = R32((uint32_t)(ebx + 0x4628u));
/* e8f03b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f03c: push 0xeb1478 */
  { uint32_t v = 0xeb1478u; esp -= 4; W32(esp, v); }
/* e8f041: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f046: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f04c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f04e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f04f: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f051u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f051: mov eax, dword ptr [ebx + 0x462c] */
  eax = R32((uint32_t)(ebx + 0x462cu));
/* e8f057: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f05d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f05f: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f063: push 0xeb1444 */
  { uint32_t v = 0xeb1444u; esp -= 4; W32(esp, v); }
/* e8f068: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f06d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f06e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f070u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f070: mov eax, dword ptr [ebx + 0x4630] */
  eax = R32((uint32_t)(ebx + 0x4630u));
/* e8f076: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f07c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f07e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f07f: push 0xeb1410 */
  { uint32_t v = 0xeb1410u; esp -= 4; W32(esp, v); }
/* e8f084: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f089: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f08a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f08cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f08c: mov eax, dword ptr [ebx + 0x4634] */
  eax = R32((uint32_t)(ebx + 0x4634u));
/* e8f092: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f098: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f09a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f09b: push 0xeb13dc */
  { uint32_t v = 0xeb13dcu; esp -= 4; W32(esp, v); }
/* e8f0a0: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f0a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f0a6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f0a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f0a8: movzx eax, word ptr [ebx + 0x4620] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x4620u)));
/* e8f0af: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f0b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f0b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8f0b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8f0b6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8f0b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f0b8: mov ecx, dword ptr [0xeae1f4] */
  ecx = R32((uint32_t)(0xeae1f4u));
/* e8f0be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f0c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f0c2: push 0xeb13cc */
  { uint32_t v = 0xeb13ccu; esp -= 4; W32(esp, v); }
/* e8f0c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f0c8: call dword ptr [0xeae1f0] */
  esp -= 4; W32(esp, 0xe8f0ceu); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* e8f0ce: xor eax, eax */
  eax = 0;
/* e8f0d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f0d3: push 0xeb13b4 */
  { uint32_t v = 0xeb13b4u; esp -= 4; W32(esp, v); }
/* e8f0d8: mov dword ptr [ebx + 0x4668], 3 */
  W32((uint32_t)(ebx + 0x4668u), 0x3u);
/* e8f0e2: mov dword ptr [ebx + 0x4100], eax */
  W32((uint32_t)(ebx + 0x4100u), eax);
/* e8f0e8: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* e8f0eb: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* e8f0ee: mov dword ptr [ebx + 0x4104], eax */
  W32((uint32_t)(ebx + 0x4104u), eax);
/* e8f0f4: mov dword ptr [ebx + 0x4128], eax */
  W32((uint32_t)(ebx + 0x4128u), eax);
/* e8f0fa: call dword ptr [0xeae1a8] */
  esp -= 4; W32(esp, 0xe8f100u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* e8f100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f101: call dword ptr [0xeae1a4] */
  esp -= 4; W32(esp, 0xe8f107u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* e8f107: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f10a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8f10c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8f10d: je 0xe8f127 */
  if (zf) goto L_e8f127;
L_e8f10f: /* e8f10f: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f115: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f117: push 0xeb1328 */
  { uint32_t v = 0xeb1328u; esp -= 4; W32(esp, v); }
/* e8f11c: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f122: jmp 0xe8f4f8 */
  goto L_e8f4f8;
L_e8f127: /* e8f127: mov eax, dword ptr [ebx + 0x4628] */
  eax = R32((uint32_t)(ebx + 0x4628u));
/* e8f12d: cmp eax, 0x1002 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1002u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f132: jne 0xe8f16a */
  if (!zf) goto L_e8f16a;
L_e8f134: /* e8f134: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f13a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f13c: push 0xeb12e8 */
  { uint32_t v = 0xeb12e8u; esp -= 4; W32(esp, v); }
/* e8f141: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f146: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f147: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f149u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f149: mov eax, dword ptr [ebx + 0x41e4] */
  eax = R32((uint32_t)(ebx + 0x41e4u));
/* e8f14f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f152: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f155: jne 0xe8f4fd */
  if (!zf) goto L_e8f4fd;
L_e8f15b: /* e8f15b: mov dword ptr [ebx + 0x41e4], 2 */
  W32((uint32_t)(ebx + 0x41e4u), 0x2u);
/* e8f165: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f16a: /* e8f16a: cmp eax, 0x121a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x121au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f16f: jne 0xe8f1b4 */
  if (!zf) goto L_e8f1b4;
L_e8f171: /* e8f171: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8f176: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8f178: push 0xeb12ac */
  { uint32_t v = 0xeb12acu; esp -= 4; W32(esp, v); }
/* e8f17d: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f183: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f185: mov ecx, dword ptr [ebx + 0x462c] */
  ecx = R32((uint32_t)(ebx + 0x462cu));
/* e8f18b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f18e: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8f191: mov eax, 1 */
  eax = 0x1u;
/* e8f196: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* e8f199: jae 0xe8f4fd */
  if (!cf) goto L_e8f4fd;
L_e8f19f: /* e8f19f: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* e8f1a2: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* e8f1a5: mov dword ptr [0xeba050], 4 */
  W32((uint32_t)(0xeba050u), 0x4u);
/* e8f1af: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f1b4: /* e8f1b4: cmp eax, 0x8086 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8086u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f1b9: jne 0xe8f1d3 */
  if (!zf) goto L_e8f1d3;
L_e8f1bb: /* e8f1bb: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f1c1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f1c3: push 0xeb126c */
  { uint32_t v = 0xeb126cu; esp -= 4; W32(esp, v); }
/* e8f1c8: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f1ce: jmp 0xe8f4f8 */
  goto L_e8f4f8;
L_e8f1d3: /* e8f1d3: cmp dword ptr [ebx + 0x462c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x462cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f1da: jne 0xe8f200 */
  if (!zf) goto L_e8f200;
L_e8f1dc: /* e8f1dc: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f1e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f1e4: push 0xeb1230 */
  { uint32_t v = 0xeb1230u; esp -= 4; W32(esp, v); }
/* e8f1e9: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f1ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f1ef: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f1f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f1f1: mov dword ptr [ebx + 0x4100], 1 */
  W32((uint32_t)(ebx + 0x4100u), 0x1u);
/* e8f1fb: jmp 0xe8f4fa */
  goto L_e8f4fa;
L_e8f200: /* e8f200: cmp eax, 0x10de */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10deu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f205: jne 0xe8f313 */
  if (!zf) goto L_e8f313;
L_e8f20b: /* e8f20b: cmp dword ptr [ebx + 0x41e4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x41e4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f212: jne 0xe8f228 */
  if (!zf) goto L_e8f228;
L_e8f214: /* e8f214: mov dword ptr [ebx + 0x41e0], 3 */
  W32((uint32_t)(ebx + 0x41e0u), 0x3u);
/* e8f21e: mov dword ptr [ebx + 0x4104], 1 */
  W32((uint32_t)(ebx + 0x4104u), 0x1u);
L_e8f228: /* e8f228: mov dword ptr [ebx + 0x4668], 1 */
  W32((uint32_t)(ebx + 0x4668u), 0x1u);
/* e8f232: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8f237: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8f239: push 0xeb11f0 */
  { uint32_t v = 0xeb11f0u; esp -= 4; W32(esp, v); }
/* e8f23e: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f243: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f244: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f246u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f246: mov eax, dword ptr [ebx + 0x462c] */
  eax = R32((uint32_t)(ebx + 0x462cu));
/* e8f24c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f24f: cmp eax, 0x150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f254: jne 0xe8f278 */
  if (!zf) goto L_e8f278;
L_e8f256: /* e8f256: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f25c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f25e: push 0xeb11b8 */
  { uint32_t v = 0xeb11b8u; esp -= 4; W32(esp, v); }
/* e8f263: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f269: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f26bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f26b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f26e: mov dword ptr [ebx + 0x40e4], 0 */
  W32((uint32_t)(ebx + 0x40e4u), 0x0u);
L_e8f278: /* e8f278: cmp dword ptr [ebx + 0x462c], 0x151 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x462cu))); uint32_t b = (uint32_t)(0x151u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f282: jne 0xe8f2a6 */
  if (!zf) goto L_e8f2a6;
L_e8f284: /* e8f284: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f28a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f28c: push 0xeb11b8 */
  { uint32_t v = 0xeb11b8u; esp -= 4; W32(esp, v); }
/* e8f291: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f296: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f297: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f299u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f299: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f29c: xor esi, esi */
  esi = 0;
/* e8f29e: mov dword ptr [ebx + 0x40e4], esi */
  W32((uint32_t)(ebx + 0x40e4u), esi);
/* e8f2a4: jmp 0xe8f2a8 */
  goto L_e8f2a8;
L_e8f2a6: /* e8f2a6: xor esi, esi */
  esi = 0;
L_e8f2a8: /* e8f2a8: cmp dword ptr [ebx + 0x462c], 0x152 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x462cu))); uint32_t b = (uint32_t)(0x152u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f2b2: jne 0xe8f2d1 */
  if (!zf) goto L_e8f2d1;
L_e8f2b4: /* e8f2b4: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8f2b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8f2bb: push 0xeb117c */
  { uint32_t v = 0xeb117cu; esp -= 4; W32(esp, v); }
/* e8f2c0: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f2c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f2c6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f2c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f2c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f2cb: mov dword ptr [ebx + 0x40e4], esi */
  W32((uint32_t)(ebx + 0x40e4u), esi);
L_e8f2d1: /* e8f2d1: cmp dword ptr [ebx + 0x462c], 0x153 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x462cu))); uint32_t b = (uint32_t)(0x153u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f2db: jne 0xe8f2fb */
  if (!zf) goto L_e8f2fb;
L_e8f2dd: /* e8f2dd: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f2e3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f2e5: push 0xeb1148 */
  { uint32_t v = 0xeb1148u; esp -= 4; W32(esp, v); }
/* e8f2ea: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f2ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f2f0: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f2f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f2f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f2f5: mov dword ptr [ebx + 0x40e4], esi */
  W32((uint32_t)(ebx + 0x40e4u), esi);
L_e8f2fb: /* e8f2fb: mov eax, dword ptr [ebx + 0x40e4] */
  eax = R32((uint32_t)(ebx + 0x40e4u));
/* e8f301: xor ecx, ecx */
  ecx = 0;
/* e8f303: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f305: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8f308: mov dword ptr [ebx + 0x4128], ecx */
  W32((uint32_t)(ebx + 0x4128u), ecx);
/* e8f30e: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f313: /* e8f313: cmp eax, 0x102b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x102bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f318: jne 0xe8f36e */
  if (!zf) goto L_e8f36e;
L_e8f31a: /* e8f31a: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f320: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f322: push 0xeb1108 */
  { uint32_t v = 0xeb1108u; esp -= 4; W32(esp, v); }
/* e8f327: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f32c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f32d: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f32fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f32f: mov eax, dword ptr [ebx + 0x462c] */
  eax = R32((uint32_t)(ebx + 0x462cu));
/* e8f335: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f338: cmp eax, 0x521 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x521u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f33d: jne 0xe8f346 */
  if (!zf) goto L_e8f346;
L_e8f33f: /* e8f33f: mov dword ptr [ebx + 0x64], 1 */
  W32((uint32_t)(ebx + 0x64u), 0x1u);
L_e8f346: /* e8f346: cmp eax, 0x525 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x525u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f34b: je 0xe8f358 */
  if (zf) goto L_e8f358;
L_e8f34d: /* e8f34d: cmp eax, 0x2527 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2527u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f352: jne 0xe8f4fd */
  if (!zf) goto L_e8f4fd;
L_e8f358: /* e8f358: mov dword ptr [ebx + 0x41e4], 2 */
  W32((uint32_t)(ebx + 0x41e4u), 0x2u);
/* e8f362: mov dword ptr [ebx + 0x64], 1 */
  W32((uint32_t)(ebx + 0x64u), 0x1u);
/* e8f369: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f36e: /* e8f36e: cmp eax, 0x1023 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1023u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f373: jne 0xe8f37f */
  if (!zf) goto L_e8f37f;
L_e8f375: /* e8f375: push 0xeb10c0 */
  { uint32_t v = 0xeb10c0u; esp -= 4; W32(esp, v); }
/* e8f37a: jmp 0xe8f4ea */
  goto L_e8f4ea;
L_e8f37f: /* e8f37f: cmp eax, 0x1039 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1039u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f384: jne 0xe8f39d */
  if (!zf) goto L_e8f39d;
L_e8f386: /* e8f386: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8f38b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8f38d: push 0xeb1084 */
  { uint32_t v = 0xeb1084u; esp -= 4; W32(esp, v); }
/* e8f392: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f397: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f398: jmp 0xe8f4f8 */
  goto L_e8f4f8;
L_e8f39d: /* e8f39d: cmp eax, 0x5333 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5333u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f3a2: jne 0xe8f4e5 */
  if (!zf) goto L_e8f4e5;
L_e8f3a8: /* e8f3a8: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f3ae: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f3b0: push 0xeb104c */
  { uint32_t v = 0xeb104cu; esp -= 4; W32(esp, v); }
/* e8f3b5: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f3ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f3bb: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f3bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f3bd: mov eax, dword ptr [ebx + 0x462c] */
  eax = R32((uint32_t)(ebx + 0x462cu));
/* e8f3c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f3c6: cmp eax, 0x8a10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8a10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f3cb: ja 0xe8f470 */
  if ((!cf && !zf)) goto L_e8f470;
L_e8f3d1: /* e8f3d1: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f3d7: /* e8f3d7: cmp eax, 0x88d1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88d1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f3dc: ja 0xe8f442 */
  if ((!cf && !zf)) goto L_e8f442;
L_e8f3de: /* e8f3de: cmp eax, 0x88d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88d0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8f3e3: jae 0xe8f4dc */
  if (!cf) goto L_e8f4dc;
L_e8f3e9: /* e8f3e9: cmp eax, 0x883d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x883du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f3ee: ja 0xe8f41c */
  if ((!cf && !zf)) goto L_e8f41c;
L_e8f3f0: /* e8f3f0: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f3f6: /* e8f3f6: cmp eax, 0x5631 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5631u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f3fb: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f401: /* e8f401: cmp eax, 0x8810 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8810u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f406: jbe 0xe8f4fd */
  if ((cf | zf)) goto L_e8f4fd;
L_e8f40c: /* e8f40c: cmp eax, 0x8812 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8812u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f411: jbe 0xe8f4dc */
  if ((cf | zf)) goto L_e8f4dc;
L_e8f417: /* e8f417: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f41c: /* e8f41c: cmp eax, 0x8880 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8880u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f421: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f427: /* e8f427: cmp eax, 0x88bf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88bfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f42c: jbe 0xe8f4fd */
  if ((cf | zf)) goto L_e8f4fd;
L_e8f432: /* e8f432: cmp eax, 0x88c1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88c1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f437: jbe 0xe8f4dc */
  if ((cf | zf)) goto L_e8f4dc;
L_e8f43d: /* e8f43d: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f442: /* e8f442: cmp eax, 0x8904 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8904u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f447: ja 0xe8f464 */
  if ((!cf && !zf)) goto L_e8f464;
L_e8f449: /* e8f449: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f44f: /* e8f44f: sub eax, 0x88f0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88f0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e8f454: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f45a: /* e8f45a: sub eax, 0x11 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e8f45d: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f45f: /* e8f45f: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f464: /* e8f464: cmp eax, 0x8a01 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8a01u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f469: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f46b: /* e8f46b: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f470: /* e8f470: cmp eax, 0x8c12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8c12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f475: ja 0xe8f4b5 */
  if ((!cf && !zf)) goto L_e8f4b5;
L_e8f477: /* e8f477: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f479: /* e8f479: cmp eax, 0x8a26 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8a26u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f47e: ja 0xe8f49e */
  if ((!cf && !zf)) goto L_e8f49e;
L_e8f480: /* e8f480: cmp eax, 0x8a25 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8a25u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8f485: jae 0xe8f4dc */
  if (!cf) goto L_e8f4dc;
L_e8f487: /* e8f487: cmp eax, 0x8a13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8a13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f48c: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f48e: /* e8f48e: cmp eax, 0x8a1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8a1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f493: jbe 0xe8f4fd */
  if ((cf | zf)) goto L_e8f4fd;
L_e8f495: /* e8f495: cmp eax, 0x8a23 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8a23u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f49a: jbe 0xe8f4dc */
  if ((cf | zf)) goto L_e8f4dc;
L_e8f49c: /* e8f49c: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f49e: /* e8f49e: cmp eax, 0x8c00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8c00u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8f4a3: jb 0xe8f4fd */
  if (cf) goto L_e8f4fd;
L_e8f4a5: /* e8f4a5: cmp eax, 0x8c03 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8c03u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f4aa: jbe 0xe8f4dc */
  if ((cf | zf)) goto L_e8f4dc;
L_e8f4ac: /* e8f4ac: cmp eax, 0x8c10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8c10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f4b1: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f4b3: /* e8f4b3: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f4b5: /* e8f4b5: cmp eax, 0x8d04 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8d04u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f4ba: ja 0xe8f4d5 */
  if ((!cf && !zf)) goto L_e8f4d5;
L_e8f4bc: /* e8f4bc: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f4be: /* e8f4be: cmp eax, 0x8c22 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8c22u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f4c3: je 0xe8f4dc */
  if (zf) goto L_e8f4dc;
L_e8f4c5: /* e8f4c5: cmp eax, 0x8c29 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8c29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f4ca: jbe 0xe8f4fd */
  if ((cf | zf)) goto L_e8f4fd;
L_e8f4cc: /* e8f4cc: cmp eax, 0x8c2f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8c2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f4d1: jbe 0xe8f4dc */
  if ((cf | zf)) goto L_e8f4dc;
L_e8f4d3: /* e8f4d3: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f4d5: /* e8f4d5: cmp eax, 0x9102 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9102u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f4da: jne 0xe8f4fd */
  if (!zf) goto L_e8f4fd;
L_e8f4dc: /* e8f4dc: mov dword ptr [ebx + 0x64], 1 */
  W32((uint32_t)(ebx + 0x64u), 0x1u);
/* e8f4e3: jmp 0xe8f4fd */
  goto L_e8f4fd;
L_e8f4e5: /* e8f4e5: push 0xeb1000 */
  { uint32_t v = 0xeb1000u; esp -= 4; W32(esp, v); }
L_e8f4ea: /* e8f4ea: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f4f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f4f2: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f4f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e8f4f8: /* e8f4f8: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f4fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8f4fa: /* e8f4fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8f4fd: /* e8f4fd: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* e8f500: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8f502: je 0xe8f537 */
  if (zf) goto L_e8f537;
L_e8f504: /* e8f504: mov eax, dword ptr [ebx + 0x40e4] */
  eax = R32((uint32_t)(ebx + 0x40e4u));
/* e8f50a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8f50c: je 0xe8f522 */
  if (zf) goto L_e8f522;
L_e8f50e: /* e8f50e: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8f513: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8f515: push 0xeb0fa8 */
  { uint32_t v = 0xeb0fa8u; esp -= 4; W32(esp, v); }
/* e8f51a: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f51f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f520: jmp 0xe8f54a */
  goto L_e8f54a;
L_e8f522: /* e8f522: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f528: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f52a: push 0xeb0f48 */
  { uint32_t v = 0xeb0f48u; esp -= 4; W32(esp, v); }
/* e8f52f: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f535: jmp 0xe8f54a */
  goto L_e8f54a;
L_e8f537: /* e8f537: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8f53d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f53f: push 0xeb0f08 */
  { uint32_t v = 0xeb0f08u; esp -= 4; W32(esp, v); }
/* e8f544: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f549: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_e8f54a: /* e8f54a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe8f54cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f54c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f54f: lea ecx, [ebx + 0x30ee8] */
  ecx = (uint32_t)(ebx + 0x30ee8u);
/* e8f555: call 0xe8d6d0 */
  esp -= 4; W32(esp, 0xe8f55au); SPILL(); f_e8d6d0(); if (g_unwind) return; RELOAD();
/* e8f55a: mov ecx, dword ptr [esp + 0x44c] */
  ecx = R32((uint32_t)(esp + 0x44cu));
/* e8f561: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8f562: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8f563: mov eax, 1 */
  eax = 0x1u;
/* e8f568: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8f569: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8f570: add esp, 0x44c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f576: ret  */
  esp += 4; SPILL(); return;
}

void f_e8f580(void) {
  LOAD_REGS();
L_e8f580: /* e8f580: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e8f583: mov eax, dword ptr [0xeae1a0] */
  eax = R32((uint32_t)(0xeae1a0u));
/* e8f588: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8f589: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8f58a: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* e8f58e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8f590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8f591: mov esi, dword ptr [0xeae0b4] */
  esi = R32((uint32_t)(0xeae0b4u));
/* e8f597: xor ebx, ebx */
  ebx = 0;
/* e8f599: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f59b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8f59c: jne 0xe8f5b9 */
  if (!zf) goto L_e8f5b9;
L_e8f59e: /* e8f59e: cmp dword ptr [ecx + 0x4694], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4694u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f5a4: je 0xe8f5b9 */
  if (zf) goto L_e8f5b9;
L_e8f5a6: /* e8f5a6: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e8f5ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f5ae: push 0xeb26f8 */
  { uint32_t v = 0xeb26f8u; esp -= 4; W32(esp, v); }
/* e8f5b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f5b4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8f5b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f5b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e8f5b9: /* e8f5b9: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e8f5c0: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* e8f5c7: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* e8f5ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f5cf: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8f5d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f5d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8f5d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8f5d8: push 0xeb26b0 */
  { uint32_t v = 0xeb26b0u; esp -= 4; W32(esp, v); }
/* e8f5dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f5de: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8f5e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f5e0: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* e8f5e7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f5ea: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f5ec: je 0xe8f5f8 */
  if (zf) goto L_e8f5f8;
L_e8f5ee: /* e8f5ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f5f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8f5f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f5f5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0xe8f5f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8f5f8: /* e8f5f8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8f5fc: cmp dword ptr [eax + 0x64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f5ff: je 0xe8f60c */
  if (zf) goto L_e8f60c;
L_e8f601: /* e8f601: mov dword ptr [esp + 0x9c], 2 */
  W32((uint32_t)(esp + 0x9cu), 0x2u);
L_e8f60c: /* e8f60c: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e8f613: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e8f616: je 0xe8f622 */
  if (zf) goto L_e8f622;
L_e8f618: /* e8f618: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e8f61b: jne 0xe8f62d */
  if (!zf) goto L_e8f62d;
L_e8f61d: /* e8f61d: mov dword ptr [eax + 0x58], ebx */
  W32((uint32_t)(eax + 0x58u), ebx);
/* e8f620: jmp 0xe8f629 */
  goto L_e8f629;
L_e8f622: /* e8f622: mov dword ptr [eax + 0x58], 1 */
  W32((uint32_t)(eax + 0x58u), 0x1u);
L_e8f629: /* e8f629: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_e8f62d: /* e8f62d: cmp dword ptr [eax + 0x58], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x58u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f630: je 0xe8f641 */
  if (zf) goto L_e8f641;
L_e8f632: /* e8f632: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e8f638: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f63a: mov edx, 0x10 */
  edx = 0x10u;
/* e8f63f: je 0xe8f646 */
  if (zf) goto L_e8f646;
L_e8f641: /* e8f641: mov edx, 0x20 */
  edx = 0x20u;
L_e8f646: /* e8f646: cmp dword ptr [esp + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f64d: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* e8f651: jne 0xe8f67d */
  if (!zf) goto L_e8f67d;
L_e8f653: /* e8f653: mov ecx, dword ptr [eax + 0x46ac] */
  ecx = R32((uint32_t)(eax + 0x46acu));
/* e8f659: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f65b: je 0xe8f67d */
  if (zf) goto L_e8f67d;
L_e8f65d: /* e8f65d: xor edx, edx */
  edx = 0;
/* e8f65f: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f662: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8f665: mov dword ptr [eax + 0x58], edx */
  W32((uint32_t)(eax + 0x58u), edx);
/* e8f668: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8f66c: mov ecx, dword ptr [eax + 0x46ac] */
  ecx = R32((uint32_t)(eax + 0x46acu));
/* e8f672: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e8f676: mov dword ptr [esp + 0xa0], ebx */
  W32((uint32_t)(esp + 0xa0u), ebx);
L_e8f67d: /* e8f67d: mov dword ptr [eax + 0x468c], ebx */
  W32((uint32_t)(eax + 0x468cu), ebx);
/* e8f683: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f687: mov eax, dword ptr [ecx + 0x46b0] */
  eax = R32((uint32_t)(ecx + 0x46b0u));
/* e8f68d: mov ecx, dword ptr [ecx + 0x4688] */
  ecx = R32((uint32_t)(ecx + 0x4688u));
/* e8f693: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8f695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f697: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xe8f69au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f69a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f69e: add ecx, 0x4654 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4654u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8f6a4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e8f6a6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* e8f6a9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* e8f6ac: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe8f6b2u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e8f6b2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f6b6: mov eax, dword ptr [ecx + 0x46b0] */
  eax = R32((uint32_t)(ecx + 0x46b0u));
/* e8f6bc: mov ecx, dword ptr [ecx + 0x4688] */
  ecx = R32((uint32_t)(ecx + 0x4688u));
/* e8f6c2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8f6c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f6c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f6c6: xor esi, esi */
  esi = 0;
/* e8f6c8: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xe8f6cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f6cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* e8f6cd: jbe 0xe8f741 */
  if ((cf | zf)) goto L_e8f741;
L_e8f6cf: /* e8f6cf: nop  */
L_e8f6d0: /* e8f6d0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f6d4: mov eax, dword ptr [ecx + 0x46b0] */
  eax = R32((uint32_t)(ecx + 0x46b0u));
/* e8f6da: mov ecx, dword ptr [ecx + 0x4688] */
  ecx = R32((uint32_t)(ecx + 0x4688u));
/* e8f6e0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8f6e2: lea edi, [esp + 0x34] */
  edi = (uint32_t)(esp + 0x34u);
/* e8f6e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8f6e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8f6e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f6e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f6ea: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe8f6edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f6ed: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e8f6f1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e8f6f3: add edi, 0x4654 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4654u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8f6f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8f6fb: mov ecx, edi */
  ecx = edi;
/* e8f6fd: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe8f703u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e8f703: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e8f705: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* e8f709: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e8f70c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8f70e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e8f710: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e8f714: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e8f717: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* e8f71b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e8f71e: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* e8f722: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* e8f725: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f729: mov eax, dword ptr [ecx + 0x46b0] */
  eax = R32((uint32_t)(ecx + 0x46b0u));
/* e8f72f: mov ecx, dword ptr [ecx + 0x4688] */
  ecx = R32((uint32_t)(ecx + 0x4688u));
/* e8f735: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8f737: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f739: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8f73a: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xe8f73du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f73d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8f73f: jb 0xe8f6d0 */
  if (cf) goto L_e8f6d0;
L_e8f741: /* e8f741: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* e8f748: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f74b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e8f74f: jge 0xe8f759 */
  if ((sf == of)) goto L_e8f759;
L_e8f751: /* e8f751: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
L_e8f759: /* e8f759: mov esi, dword ptr [esp + 0x94] */
  esi = R32((uint32_t)(esp + 0x94u));
/* e8f760: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f763: jge 0xe8f76a */
  if ((sf == of)) goto L_e8f76a;
L_e8f765: /* e8f765: mov esi, 1 */
  esi = 0x1u;
L_e8f76a: /* e8f76a: cmp dword ptr [esp + 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x98u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f771: je 0xe8f94f */
  if (zf) goto L_e8f94f;
L_e8f777: /* e8f777: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* e8f77b: mov ecx, dword ptr [ebp + 0x4658] */
  ecx = R32((uint32_t)(ebp + 0x4658u));
/* e8f781: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f783: jne 0xe8f79e */
  if (!zf) goto L_e8f79e;
L_e8f785: /* e8f785: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8f787: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8f788: push 0xeb2668 */
  { uint32_t v = 0xeb2668u; esp -= 4; W32(esp, v); }
/* e8f78d: mov ecx, ebp */
  ecx = ebp;
/* e8f78f: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe8f794u); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e8f794: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8f795: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8f796: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8f797: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8f798: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f79b: ret 0x18 */
  esp += 28; SPILL(); return;
L_e8f79e: /* e8f79e: mov eax, dword ptr [ebp + 0x4148] */
  eax = R32((uint32_t)(ebp + 0x4148u));
/* e8f7a4: xor edx, edx */
  edx = 0;
/* e8f7a6: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e8f7a9: mov dword ptr [esp + 0x18], 0x7fffffff */
  W32((uint32_t)(esp + 0x18u), 0x7fffffffu);
/* e8f7b1: ja 0xe8f7bf */
  if ((!cf && !zf)) goto L_e8f7bf;
L_e8f7b3: /* e8f7b3: cmp dword ptr [ebp + 0x4120], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4120u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f7b9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* e8f7bd: je 0xe8f7c3 */
  if (zf) goto L_e8f7c3;
L_e8f7bf: /* e8f7bf: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_e8f7c3: /* e8f7c3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f7c5: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* e8f7c9: jle 0xe8f855 */
  if ((zf || sf != of)) goto L_e8f855;
L_e8f7cf: /* e8f7cf: mov edi, dword ptr [ebp + 0x4654] */
  edi = R32((uint32_t)(ebp + 0x4654u));
L_e8f7d5: /* e8f7d5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e8f7d7: sub eax, dword ptr [esp + 0x90] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* e8f7de: jns 0xe8f7e2 */
  if (!sf) goto L_e8f7e2;
L_e8f7e0: /* e8f7e0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e8f7e2: /* e8f7e2: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* e8f7e9: mov ebx, eax */
  ebx = eax;
/* e8f7eb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e8f7ee: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* e8f7f0: jns 0xe8f7f4 */
  if (!sf) goto L_e8f7f4;
L_e8f7f2: /* e8f7f2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e8f7f4: /* e8f7f4: mov esi, eax */
  esi = eax;
/* e8f7f6: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* e8f7f9: call 0xe8c4b0 */
  esp -= 4; W32(esp, 0xe8f7feu); SPILL(); f_e8c4b0(); if (g_unwind) return; RELOAD();
/* e8f7fe: mov ecx, eax */
  ecx = eax;
/* e8f800: sub ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* e8f804: jns 0xe8f808 */
  if (!sf) goto L_e8f808;
L_e8f806: /* e8f806: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_e8f808: /* e8f808: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8f80a: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* e8f80e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8f810: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f812: jl 0xe8f825 */
  if ((sf != of)) goto L_e8f825;
L_e8f814: /* e8f814: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f816: jne 0xe8f833 */
  if (!zf) goto L_e8f833;
L_e8f818: /* e8f818: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* e8f81c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8f81e: je 0xe8f825 */
  if (zf) goto L_e8f825;
L_e8f820: /* e8f820: cmp dword ptr [edi + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f823: jne 0xe8f833 */
  if (!zf) goto L_e8f833;
L_e8f825: /* e8f825: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f829: jne 0xe8f833 */
  if (!zf) goto L_e8f833;
L_e8f82b: /* e8f82b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e8f82f: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_e8f833: /* e8f833: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8f837: mov ecx, dword ptr [ebp + 0x4658] */
  ecx = R32((uint32_t)(ebp + 0x4658u));
/* e8f83d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e8f83e: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e8f841: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f843: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e8f847: jl 0xe8f7d5 */
  if ((sf != of)) goto L_e8f7d5;
L_e8f849: /* e8f849: cmp dword ptr [esp + 0x18], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f851: jne 0xe8f86e */
  if (!zf) goto L_e8f86e;
L_e8f853: /* e8f853: xor ebx, ebx */
  ebx = 0;
L_e8f855: /* e8f855: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8f857: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8f858: push 0xeb2620 */
  { uint32_t v = 0xeb2620u; esp -= 4; W32(esp, v); }
/* e8f85d: mov ecx, ebp */
  ecx = ebp;
/* e8f85f: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe8f864u); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e8f864: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8f865: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8f866: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8f867: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8f868: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f86b: ret 0x18 */
  esp += 28; SPILL(); return;
L_e8f86e: /* e8f86e: mov eax, dword ptr [ebp + 0x4654] */
  eax = R32((uint32_t)(ebp + 0x4654u));
/* e8f874: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* e8f877: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8f879: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8f87b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* e8f87f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e8f882: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* e8f886: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* e8f889: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* e8f88d: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* e8f890: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e8f894: mov ecx, dword ptr [ebp + 0x4654] */
  ecx = R32((uint32_t)(ebp + 0x4654u));
/* e8f89a: mov eax, dword ptr [edx + ecx + 0xc] */
  eax = R32((uint32_t)(edx + ecx + 0xcu));
/* e8f89e: lea esi, [edx + ecx] */
  esi = (uint32_t)(edx + ecx);
/* e8f8a1: call 0xe8c4b0 */
  esp -= 4; W32(esp, 0xe8f8a6u); SPILL(); f_e8c4b0(); if (g_unwind) return; RELOAD();
/* e8f8a6: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* e8f8a8: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f8ab: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e8f8af: mov dword ptr [esp + 0x90], esi */
  W32((uint32_t)(esp + 0x90u), esi);
/* e8f8b6: mov eax, dword ptr [ebp + 0x4654] */
  eax = R32((uint32_t)(ebp + 0x4654u));
/* e8f8bc: mov eax, dword ptr [edx + eax + 4] */
  eax = R32((uint32_t)(edx + eax + 0x4u));
/* e8f8c0: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* e8f8c7: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* e8f8cb: jge 0xe8f8d5 */
  if ((sf == of)) goto L_e8f8d5;
L_e8f8cd: /* e8f8cd: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
L_e8f8d5: /* e8f8d5: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f8d8: mov esi, eax */
  esi = eax;
/* e8f8da: jge 0xe8f8e1 */
  if ((sf == of)) goto L_e8f8e1;
L_e8f8dc: /* e8f8dc: mov esi, 1 */
  esi = 0x1u;
L_e8f8e1: /* e8f8e1: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* e8f8e5: mov dword ptr [ebp + 0x4690], 1 */
  W32((uint32_t)(ebp + 0x4690u), 0x1u);
/* e8f8ef: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f8f3: mov eax, dword ptr [ecx + 0x4654] */
  eax = R32((uint32_t)(ecx + 0x4654u));
/* e8f8f9: mov ebp, dword ptr [eax + edx + 0xc] */
  ebp = R32((uint32_t)(eax + edx + 0xcu));
/* e8f8fd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8f8ff: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8f901: je 0xe8f908 */
  if (zf) goto L_e8f908;
L_e8f903: /* e8f903: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* e8f906: jmp 0xe8f90a */
  goto L_e8f90a;
L_e8f908: /* e8f908: xor eax, eax */
  eax = 0;
L_e8f90a: /* e8f90a: mov dword ptr [ecx + 0x46a4], eax */
  W32((uint32_t)(ecx + 0x46a4u), eax);
/* e8f910: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f914: mov eax, dword ptr [ecx + 0x4654] */
  eax = R32((uint32_t)(ecx + 0x4654u));
/* e8f91a: mov ecx, dword ptr [edx + eax + 8] */
  ecx = R32((uint32_t)(edx + eax + 0x8u));
/* e8f91e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8f920: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* e8f923: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f924: call 0xe8c4b0 */
  esp -= 4; W32(esp, 0xe8f929u); SPILL(); f_e8c4b0(); if (g_unwind) return; RELOAD();
/* e8f929: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e8f92b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f92c: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e8f92f: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e8f935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f936: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8f938: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f939: push 0xeb25d0 */
  { uint32_t v = 0xeb25d0u; esp -= 4; W32(esp, v); }
/* e8f93e: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8f943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f944: call dword ptr [0xeae1c0] */
  esp -= 4; W32(esp, 0xe8f94au); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e8f94a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f94d: jmp 0xe8f9b3 */
  goto L_e8f9b3;
L_e8f94f: /* e8f94f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f953: mov eax, dword ptr [ecx + 0x46b0] */
  eax = R32((uint32_t)(ecx + 0x46b0u));
/* e8f959: mov ecx, dword ptr [ecx + 0x4688] */
  ecx = R32((uint32_t)(ecx + 0x4688u));
/* e8f95f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8f961: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* e8f965: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8f966: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8f967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f968: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xe8f96bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8f96b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e8f96d: jge 0xe8f98a */
  if ((sf == of)) goto L_e8f98a;
L_e8f96f: /* e8f96f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f973: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8f975: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8f976: push 0xeb2594 */
  { uint32_t v = 0xeb2594u; esp -= 4; W32(esp, v); }
/* e8f97b: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe8f980u); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e8f980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8f981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8f982: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8f983: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8f984: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8f987: ret 0x18 */
  esp += 28; SPILL(); return;
L_e8f98a: /* e8f98a: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8f990: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8f993: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* e8f997: je 0xe8f9a5 */
  if (zf) goto L_e8f9a5;
L_e8f999: /* e8f999: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e8f99d: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* e8f9a1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_e8f9a5: /* e8f9a5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8f9a9: mov dword ptr [ecx + 0x4690], 0 */
  W32((uint32_t)(ecx + 0x4690u), 0x0u);
L_e8f9b3: /* e8f9b3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8f9b7: add edx, 0x46b8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8f9bd: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e8f9c1: mov ecx, 0x34 */
  ecx = 0x34u;
/* e8f9c6: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e8f9ca: xor eax, eax */
  eax = 0;
/* e8f9cc: mov ebx, ecx */
  ebx = ecx;
/* e8f9ce: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e8f9d1: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e8f9d4: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e8f9d6: mov ecx, ebx */
  ecx = ebx;
/* e8f9d8: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e8f9da: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8f9de: mov dword ptr [eax + 0x46e0], 1 */
  W32((uint32_t)(eax + 0x46e0u), 0x1u);
/* e8f9e8: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* e8f9ef: xor ecx, ecx */
  ecx = 0;
/* e8f9f1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8f9f3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8f9f7: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e8f9fa: mov dword ptr [edx + 0x46d4], ecx */
  W32((uint32_t)(edx + 0x46d4u), ecx);
/* e8fa00: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e8fa07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8fa09: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8fa0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fa0f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fa13: mov dword ptr [ecx + 0x46d0], eax */
  W32((uint32_t)(ecx + 0x46d0u), eax);
/* e8fa19: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fa1d: mov eax, 1 */
  eax = 0x1u;
/* e8fa22: mov dword ptr [edx + 0x46cc], eax */
  W32((uint32_t)(edx + 0x46ccu), eax);
/* e8fa28: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fa2c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8fa30: mov dword ptr [ecx + 0x46b8], edx */
  W32((uint32_t)(ecx + 0x46b8u), edx);
/* e8fa36: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fa3a: mov dword ptr [ecx + 0x46bc], esi */
  W32((uint32_t)(ecx + 0x46bcu), esi);
/* e8fa40: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fa44: mov dword ptr [edx + 0x46d8], eax */
  W32((uint32_t)(edx + 0x46d8u), eax);
/* e8fa4a: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e8fa51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fa53: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fa57: je 0xe8fa68 */
  if (zf) goto L_e8fa68;
L_e8fa59: /* e8fa59: mov eax, dword ptr [ecx + 0x40f4] */
  eax = R32((uint32_t)(ecx + 0x40f4u));
/* e8fa5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fa61: mov eax, 2 */
  eax = 0x2u;
/* e8fa66: jne 0xe8fa6d */
  if (!zf) goto L_e8fa6d;
L_e8fa68: /* e8fa68: mov eax, 1 */
  eax = 0x1u;
L_e8fa6d: /* e8fa6d: mov dword ptr [ecx + 0x46c4], eax */
  W32((uint32_t)(ecx + 0x46c4u), eax);
/* e8fa73: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e8fa7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fa7c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fa80: je 0xe8fa8a */
  if (zf) goto L_e8fa8a;
L_e8fa82: /* e8fa82: mov eax, dword ptr [ecx + 0x46a4] */
  eax = R32((uint32_t)(ecx + 0x46a4u));
/* e8fa88: jmp 0xe8fa8c */
  goto L_e8fa8c;
L_e8fa8a: /* e8fa8a: xor eax, eax */
  eax = 0;
L_e8fa8c: /* e8fa8c: mov dword ptr [ecx + 0x46e4], eax */
  W32((uint32_t)(ecx + 0x46e4u), eax);
/* e8fa92: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e8fa99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fa9b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fa9f: je 0xe8fab7 */
  if (zf) goto L_e8fab7;
L_e8faa1: /* e8faa1: mov eax, dword ptr [ecx + 0x40d4] */
  eax = R32((uint32_t)(ecx + 0x40d4u));
/* e8faa7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e8faa9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e8faab: and eax, 0x80000001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8fab0: add eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8fab5: jmp 0xe8fab9 */
  goto L_e8fab9;
L_e8fab7: /* e8fab7: xor eax, eax */
  eax = 0;
L_e8fab9: /* e8fab9: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e8fabd: mov dword ptr [ecx + 0x46e8], eax */
  W32((uint32_t)(ecx + 0x46e8u), eax);
/* e8fac3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fac7: xor eax, eax */
  eax = 0;
/* e8fac9: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8facc: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8facf: add eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8fad2: mov dword ptr [ecx + 0x4660], eax */
  W32((uint32_t)(ecx + 0x4660u), eax);
/* e8fad8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fadc: mov edi, dword ptr [eax + 0x4660] */
  edi = R32((uint32_t)(eax + 0x4660u));
/* e8fae2: mov ecx, dword ptr [eax + 0x46b0] */
  ecx = R32((uint32_t)(eax + 0x46b0u));
/* e8fae8: mov eax, dword ptr [eax + 0x4688] */
  eax = R32((uint32_t)(eax + 0x4688u));
/* e8faee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8faf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8faf1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8faf3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8faf5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8faf6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8faf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8faf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fafa: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe8fafdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fafd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8faff: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fb03: jge 0xe8fb1c */
  if ((sf == of)) goto L_e8fb1c;
L_e8fb05: /* e8fb05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fb07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fb08: push 0xeb2560 */
  { uint32_t v = 0xeb2560u; esp -= 4; W32(esp, v); }
/* e8fb0d: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe8fb12u); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e8fb12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8fb13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8fb14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8fb15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8fb16: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fb19: ret 0x18 */
  esp += 28; SPILL(); return;
L_e8fb1c: /* e8fb1c: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e8fb23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fb25: je 0xe8fb2d */
  if (zf) goto L_e8fb2d;
L_e8fb27: /* e8fb27: mov ebp, dword ptr [ecx + 0x4660] */
  ebp = R32((uint32_t)(ecx + 0x4660u));
L_e8fb2d: /* e8fb2d: mov eax, esi */
  eax = esi;
/* e8fb2f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e8fb30: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e8fb33: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8fb35: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e8fb38: mov dword ptr [ecx + 0x4698], eax */
  W32((uint32_t)(ecx + 0x4698u), eax);
/* e8fb3e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fb42: mov ecx, dword ptr [eax + 0x4660] */
  ecx = R32((uint32_t)(eax + 0x4660u));
/* e8fb48: mov dword ptr [eax + 0x46c0], ecx */
  W32((uint32_t)(eax + 0x46c0u), ecx);
/* e8fb4e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fb52: mov edx, dword ptr [edx + 0x4660] */
  edx = R32((uint32_t)(edx + 0x4660u));
/* e8fb58: mov eax, edx */
  eax = edx;
/* e8fb5a: call 0xe8c4b0 */
  esp -= 4; W32(esp, 0xe8fb5fu); SPILL(); f_e8c4b0(); if (g_unwind) return; RELOAD();
/* e8fb5f: mov edi, dword ptr [0xeae0b4] */
  edi = R32((uint32_t)(0xeae0b4u));
/* e8fb65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fb66: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8fb6b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fb6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fb6e: push 0xeb2518 */
  { uint32_t v = 0xeb2518u; esp -= 4; W32(esp, v); }
/* e8fb73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fb74: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8fb76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fb76: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fb7a: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* e8fb7d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fb80: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fb82: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e8fb88: je 0xe8fb96 */
  if (zf) goto L_e8fb96;
L_e8fb8a: /* e8fb8a: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fb8d: jne 0xe8fb96 */
  if (!zf) goto L_e8fb96;
L_e8fb8f: /* e8fb8f: mov ecx, 0x50 */
  ecx = 0x50u;
/* e8fb94: jmp 0xe8fbac */
  goto L_e8fbac;
L_e8fb96: /* e8fb96: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* e8fb99: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fb9b: jne 0xe8fba7 */
  if (!zf) goto L_e8fba7;
L_e8fb9d: /* e8fb9d: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fba0: mov ecx, 0x4d */
  ecx = 0x4du;
/* e8fba5: je 0xe8fbac */
  if (zf) goto L_e8fbac;
L_e8fba7: /* e8fba7: mov ecx, 0x4b */
  ecx = 0x4bu;
L_e8fbac: /* e8fbac: xor esi, esi */
  esi = 0;
L_e8fbae: /* e8fbae: mov dword ptr [eax + 0x4664], ecx */
  W32((uint32_t)(eax + 0x4664u), ecx);
/* e8fbb4: jmp 0xe8fbc0 */
  goto L_e8fbc0;
L_e8fbc0: /* e8fbc0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fbc4: mov ebx, dword ptr [eax + 0x4664] */
  ebx = R32((uint32_t)(eax + 0x4664u));
/* e8fbca: mov ecx, dword ptr [eax + 0x46b0] */
  ecx = R32((uint32_t)(eax + 0x46b0u));
/* e8fbd0: mov eax, dword ptr [eax + 0x4688] */
  eax = R32((uint32_t)(eax + 0x4688u));
/* e8fbd6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fbd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fbd9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fbdb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8fbdd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8fbde: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fbe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fbe1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fbe2: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe8fbe5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fbe5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8fbe7: jl 0xe8fc15 */
  if ((sf != of)) goto L_e8fc15;
L_e8fbe9: /* e8fbe9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fbed: mov ebx, dword ptr [eax + 0x4664] */
  ebx = R32((uint32_t)(eax + 0x4664u));
/* e8fbf3: mov ecx, dword ptr [eax + 0x46b0] */
  ecx = R32((uint32_t)(eax + 0x46b0u));
/* e8fbf9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fbfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fbfc: mov ebx, dword ptr [eax + 0x4660] */
  ebx = R32((uint32_t)(eax + 0x4660u));
/* e8fc02: mov eax, dword ptr [eax + 0x4688] */
  eax = R32((uint32_t)(eax + 0x4688u));
/* e8fc08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fc09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e8fc0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fc0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fc0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fc0e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xe8fc11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fc11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8fc13: jge 0xe8fc4a */
  if ((sf == of)) goto L_e8fc4a;
L_e8fc15: /* e8fc15: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e8fc16: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fc19: je 0xe902fd */
  if (zf) goto L_e902fd;
L_e8fc1f: /* e8fc1f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fc23: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* e8fc26: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fc28: je 0xe8fc36 */
  if (zf) goto L_e8fc36;
L_e8fc2a: /* e8fc2a: mov dword ptr [eax + 0x4664], 0x4f */
  W32((uint32_t)(eax + 0x4664u), 0x4fu);
/* e8fc34: jmp 0xe8fbc0 */
  goto L_e8fbc0;
L_e8fc36: /* e8fc36: xor ecx, ecx */
  ecx = 0;
/* e8fc38: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fc3b: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8fc3e: lea ecx, [ecx*4 + 0x47] */
  ecx = (uint32_t)(ecx*4 + 0x47u);
/* e8fc45: jmp 0xe8fbae */
  goto L_e8fbae;
L_e8fc4a: /* e8fc4a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fc4e: mov edx, dword ptr [edx + 0x4664] */
  edx = R32((uint32_t)(edx + 0x4664u));
/* e8fc54: mov eax, edx */
  eax = edx;
/* e8fc56: call 0xe8c4b0 */
  esp -= 4; W32(esp, 0xe8fc5bu); SPILL(); f_e8c4b0(); if (g_unwind) return; RELOAD();
/* e8fc5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fc5c: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8fc61: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fc63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fc64: push 0xeb24c8 */
  { uint32_t v = 0xeb24c8u; esp -= 4; W32(esp, v); }
/* e8fc69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fc6a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe8fc6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fc6c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fc70: mov edx, dword ptr [eax + 0x4664] */
  edx = R32((uint32_t)(eax + 0x4664u));
/* e8fc76: mov dword ptr [eax + 0x46dc], edx */
  W32((uint32_t)(eax + 0x46dcu), edx);
/* e8fc7c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e8fc80: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e8fc86: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fc89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fc8b: je 0xe8fcc7 */
  if (zf) goto L_e8fcc7;
L_e8fc8d: /* e8fc8d: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8fc93: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fc96: je 0xe8fca9 */
  if (zf) goto L_e8fca9;
L_e8fc98: /* e8fc98: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8fc9a: add ecx, 0x46b8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e8fca0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fca1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fca2: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0xe8fca5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e8fca7: jge 0xe8fcc7 */
  if ((sf == of)) goto L_e8fcc7;
L_e8fca9: /* e8fca9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fcad: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8fcb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fcb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fcb6: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe8fcb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fcb9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fcbd: mov dword ptr [edx + 0x46b4], 0 */
  W32((uint32_t)(edx + 0x46b4u), 0x0u);
L_e8fcc7: /* e8fcc7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fccb: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e8fcd1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fcd3: jne 0xe8fef6 */
  if (!zf) goto L_e8fef6;
L_e8fcd9: /* e8fcd9: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8fcdf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fce1: push 0xeb24a4 */
  { uint32_t v = 0xeb24a4u; esp -= 4; W32(esp, v); }
/* e8fce6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fce7: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe8fcedu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e8fced: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e8fcf1: mov eax, dword ptr [edx + 0x4168] */
  eax = R32((uint32_t)(edx + 0x4168u));
/* e8fcf7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fcfa: test eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fcff: jne 0xe8fd0f */
  if (!zf) goto L_e8fd0f;
L_e8fd01: /* e8fd01: mov dword ptr [edx + 0x40d8], 0 */
  W32((uint32_t)(edx + 0x40d8u), 0x0u);
/* e8fd0b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_e8fd0f: /* e8fd0f: mov eax, dword ptr [edx + 0x4210] */
  eax = R32((uint32_t)(edx + 0x4210u));
/* e8fd15: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8fd1a: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e8fd1f: jb 0xe8fd2b */
  if (cf) goto L_e8fd2b;
L_e8fd21: /* e8fd21: mov eax, dword ptr [edx + 0x40d8] */
  eax = R32((uint32_t)(edx + 0x40d8u));
/* e8fd27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fd29: jne 0xe8fd39 */
  if (!zf) goto L_e8fd39;
L_e8fd2b: /* e8fd2b: mov dword ptr [edx + 0x40dc], 0 */
  W32((uint32_t)(edx + 0x40dcu), 0x0u);
/* e8fd35: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_e8fd39: /* e8fd39: mov eax, dword ptr [edx + 0x40dc] */
  eax = R32((uint32_t)(edx + 0x40dcu));
/* e8fd3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fd41: je 0xe8fd4a */
  if (zf) goto L_e8fd4a;
L_e8fd43: /* e8fd43: mov eax, 0x40 */
  eax = 0x40u;
/* e8fd48: jmp 0xe8fd5a */
  goto L_e8fd5a;
L_e8fd4a: /* e8fd4a: mov eax, dword ptr [edx + 0x40d8] */
  eax = R32((uint32_t)(edx + 0x40d8u));
/* e8fd50: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e8fd52: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e8fd54: and eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e8fd57: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_e8fd5a: /* e8fd5a: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e8fd61: mov ebp, dword ptr [ecx + 0xcc] */
  ebp = R32((uint32_t)(ecx + 0xccu));
/* e8fd67: mov esi, dword ptr [edx + 0x46b0] */
  esi = R32((uint32_t)(edx + 0x46b0u));
/* e8fd6d: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e8fd70: xor ebx, ebx */
  ebx = 0;
/* e8fd72: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fd74: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* e8fd76: mov edi, eax */
  edi = eax;
/* e8fd78: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8fd7b: lea eax, [edx + 0x46b4] */
  eax = (uint32_t)(edx + 0x46b4u);
/* e8fd81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fd82: add edx, 0x46b8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e8fd88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fd89: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fd8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8fd8c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e8fd8d: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe8fd93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fd93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fd94: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fd98: mov ecx, dword ptr [eax + 0x4688] */
  ecx = R32((uint32_t)(eax + 0x4688u));
/* e8fd9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fd9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8fda1: call dword ptr [ebp + 0x3c] */
  { uint32_t t = R32((uint32_t)(ebp + 0x3cu)); esp -= 4; W32(esp, 0xe8fda4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fda4: cmp eax, 0x88760868 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760868u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fda9: jne 0xe8fdff */
  if (!zf) goto L_e8fdff;
L_e8fdab: /* e8fdab: jmp 0xe8fdb0 */
  goto L_e8fdb0;
L_e8fdb0: /* e8fdb0: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* e8fdb5: call dword ptr [0xeae1fc] */
  esp -= 4; W32(esp, 0xe8fdbbu); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* e8fdbb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e8fdbf: mov esi, dword ptr [eax + 0x46b0] */
  esi = R32((uint32_t)(eax + 0x46b0u));
/* e8fdc5: mov ecx, dword ptr [esp + 0x90] */
  ecx = R32((uint32_t)(esp + 0x90u));
/* e8fdcc: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* e8fdce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fdd1: lea edx, [eax + 0x46b4] */
  edx = (uint32_t)(eax + 0x46b4u);
/* e8fdd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fdd8: add eax, 0x46b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e8fddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fdde: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e8fde0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e8fde1: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xe8fde7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fde7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e8fdeb: mov edx, dword ptr [ecx + 0x4688] */
  edx = R32((uint32_t)(ecx + 0x4688u));
/* e8fdf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fdf2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8fdf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fdf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e8fdf5: call dword ptr [ebp + 0x3c] */
  { uint32_t t = R32((uint32_t)(ebp + 0x3cu)); esp -= 4; W32(esp, 0xe8fdf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fdf8: cmp eax, 0x88760868 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760868u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e8fdfd: je 0xe8fdb0 */
  if (zf) goto L_e8fdb0;
L_e8fdff: /* e8fdff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe01: je 0xe8fe1e */
  if (zf) goto L_e8fe1e;
L_e8fe03: /* e8fe03: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8fe07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fe09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe0a: push 0xeb247c */
  { uint32_t v = 0xeb247cu; esp -= 4; W32(esp, v); }
/* e8fe0f: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe8fe14u); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e8fe14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e8fe15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e8fe16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e8fe17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e8fe18: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe1b: ret 0x18 */
  esp += 28; SPILL(); return;
L_e8fe1e: /* e8fe1e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fe22: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e8fe28: mov edx, dword ptr [eax + 0x46b0] */
  edx = R32((uint32_t)(eax + 0x46b0u));
/* e8fe2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8fe2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fe30: call dword ptr [0xeae2d8] */
  esp -= 4; W32(esp, 0xe8fe36u); SPILL(); f_d5189d(); if (g_unwind) return; /* EngineEx!?Bink_Manager_Set_D3D_Context@@YAXPAUIDirect3D8@@PAUIDirect3DDevice8@@@Z */ RELOAD();
/* e8fe36: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e8fe3a: mov ecx, dword ptr [eax + 0x40d8] */
  ecx = R32((uint32_t)(eax + 0x40d8u));
/* e8fe40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe45: mov eax, 0xeb2468 */
  eax = 0xeb2468u;
/* e8fe4a: jne 0xe8fe51 */
  if (!zf) goto L_e8fe51;
L_e8fe4c: /* e8fe4c: mov eax, 0xeb2454 */
  eax = 0xeb2454u;
L_e8fe51: /* e8fe51: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e8fe57: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e8fe59: mov esi, dword ptr [0xeae1c0] */
  esi = R32((uint32_t)(0xeae1c0u));
/* e8fe5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe60: push 0xeb23d8 */
  { uint32_t v = 0xeb23d8u; esp -= 4; W32(esp, v); }
/* e8fe65: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8fe6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e8fe6b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8fe6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fe6d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e8fe71: mov ecx, dword ptr [eax + 0x40d8] */
  ecx = R32((uint32_t)(eax + 0x40d8u));
/* e8fe77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8fe7a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe7c: je 0xe8fe96 */
  if (zf) goto L_e8fe96;
L_e8fe7e: /* e8fe7e: mov ecx, dword ptr [eax + 0x40dc] */
  ecx = R32((uint32_t)(eax + 0x40dcu));
/* e8fe84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8fe86: je 0xe8fe8f */
  if (zf) goto L_e8fe8f;
L_e8fe88: /* e8fe88: mov eax, 0xeb2468 */
  eax = 0xeb2468u;
/* e8fe8d: jmp 0xe8fe9b */
  goto L_e8fe9b;
L_e8fe8f: /* e8fe8f: mov eax, 0xeb23c8 */
  eax = 0xeb23c8u;
/* e8fe94: jmp 0xe8fe9b */
  goto L_e8fe9b;
L_e8fe96: /* e8fe96: mov eax, 0xeb2454 */
  eax = 0xeb2454u;
L_e8fe9b: /* e8fe9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fe9c: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e8fea1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fea3: push 0xeb2358 */
  { uint32_t v = 0xeb2358u; esp -= 4; W32(esp, v); }
/* e8fea8: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e8fead: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e8feae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xe8feb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8feb0: mov edx, dword ptr [0xeae1a0] */
  edx = R32((uint32_t)(0xeae1a0u));
/* e8feb6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e8feb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e8febb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8febd: jne 0xe8fef6 */
  if (!zf) goto L_e8fef6;
L_e8febf: /* e8febf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8fec3: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8fec9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8fecb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fecd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8fed3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fed8: call dword ptr [ecx + 0x90] */
  { uint32_t t = R32((uint32_t)(ecx + 0x90u)); esp -= 4; W32(esp, 0xe8fedeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fede: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fee2: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8fee8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8feea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8feec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8feee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8fef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8fef3: call dword ptr [ecx + 0x3c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x3cu)); esp -= 4; W32(esp, 0xe8fef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8fef6: /* e8fef6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8fefa: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff00: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff03: call dword ptr [ecx + 0x10] */
  { uint32_t t = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, 0xe8ff06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff06: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff0a: mov dword ptr [edx + 0x4678], eax */
  W32((uint32_t)(edx + 0x4678u), eax);
/* e8ff10: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ff14: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ff1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff1e: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e8ff20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff21: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff2b: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff31: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff33: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e8ff35: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e8ff37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff38: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff3e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff42: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff48: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e8ff4c: push 0x1d */
  { uint32_t v = 0x1du; esp -= 4; W32(esp, v); }
/* e8ff4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff4f: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff55: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff59: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff5f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff63: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* e8ff65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff66: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff6c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e8ff70: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e8ff76: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ff78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ff7a: push 0x8f */
  { uint32_t v = 0x8fu; esp -= 4; W32(esp, v); }
/* e8ff7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ff80: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ff86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ff86: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e8ff8a: mov esi, dword ptr [ecx + 0x410c] */
  esi = R32((uint32_t)(ecx + 0x410cu));
/* e8ff90: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e8ff96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ff98: xor ebx, ebx */
  ebx = 0;
/* e8ff9a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ff9c: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e8ff9f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e8ffa0: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* e8ffa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffa3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ffa9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ffad: mov ecx, dword ptr [eax + 0x4108] */
  ecx = R32((uint32_t)(eax + 0x4108u));
/* e8ffb3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e8ffb5: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ffbb: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e8ffbd: je 0xe8ffcf */
  if (zf) goto L_e8ffcf;
L_e8ffbf: /* e8ffbf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ffc1: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* e8ffc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffc7: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8ffcd: jmp 0xe8ffda */
  goto L_e8ffda;
L_e8ffcf: /* e8ffcf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e8ffd1: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* e8ffd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffd4: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe8ffdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e8ffda: /* e8ffda: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e8ffde: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e8ffe4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e8ffe6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e8ffe8: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* e8ffed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e8ffee: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe8fff4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e8fff4: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* e8fff8: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e8fffc: mov ecx, 0x44 */
  ecx = 0x44u;
/* e90001: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e90005: xor eax, eax */
  eax = 0;
/* e90007: mov ebx, ecx */
  ebx = ecx;
/* e90009: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9000c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e9000f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e90011: mov ecx, ebx */
  ecx = ebx;
/* e90013: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* e90015: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90019: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* e90021: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* e90029: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* e90031: mov dword ptr [esp + 0x60], 0x3f800000 */
  W32((uint32_t)(esp + 0x60u), 0x3f800000u);
/* e90039: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* e90041: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* e90049: mov dword ptr [esp + 0x4c], 0x3f800000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f800000u);
/* e90051: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* e90059: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* e90061: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* e90069: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* e90071: mov dword ptr [esp + 0x70], 0x3f800000 */
  W32((uint32_t)(esp + 0x70u), 0x3f800000u);
/* e90079: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* e90084: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9008a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9008c: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* e90090: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e90091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90092: call dword ptr [ecx + 0xa8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xa8u)); esp -= 4; W32(esp, 0xe90098u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90098: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9009c: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e900a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e900a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e900a6: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* e900ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900ac: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe900b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e900b2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e900b6: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e900bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e900be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e900c0: push 0x92 */
  { uint32_t v = 0x92u; esp -= 4; W32(esp, v); }
/* e900c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900c6: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe900ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e900cc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e900d0: test byte ptr [eax + 0x41e8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x41e8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e900d7: jne 0xe90113 */
  if (!zf) goto L_e90113;
L_e900d9: /* e900d9: mov edx, dword ptr [0xeae1c4] */
  edx = R32((uint32_t)(0xeae1c4u));
/* e900df: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e900e1: push 0xeb22d8 */
  { uint32_t v = 0xeb22d8u; esp -= 4; W32(esp, v); }
/* e900e6: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* e900eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e900ec: call dword ptr [0xeae1c0] */
  esp -= 4; W32(esp, 0xe900f2u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* e900f2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e900f6: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e900fc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e900fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90101: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90103: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* e90108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90109: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe9010fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9010f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90111: jmp 0xe9012b */
  goto L_e9012b;
L_e90113: /* e90113: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90119: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9011b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9011d: push 0x91 */
  { uint32_t v = 0x91u; esp -= 4; W32(esp, v); }
/* e90122: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90123: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0xe90129u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90129: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_e9012b: /* e9012b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9012f: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90135: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e90137: push 0x93 */
  { uint32_t v = 0x93u; esp -= 4; W32(esp, v); }
/* e9013c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9013d: call dword ptr [ecx + 0xc8] */
  { uint32_t t = R32((uint32_t)(ecx + 0xc8u)); esp -= 4; W32(esp, 0xe90143u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90143: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90147: mov ecx, dword ptr [eax + 0x4138] */
  ecx = R32((uint32_t)(eax + 0x4138u));
/* e9014d: mov edx, dword ptr [eax + 0x41b8] */
  edx = R32((uint32_t)(eax + 0x41b8u));
/* e90153: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e90155: ja 0xe90159 */
  if ((!cf && !zf)) goto L_e90159;
L_e90157: /* e90157: mov ecx, edx */
  ecx = edx;
L_e90159: /* e90159: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9015c: mov ebp, 1 */
  ebp = 0x1u;
/* e90161: jbe 0xe90165 */
  if ((cf | zf)) goto L_e90165;
L_e90163: /* e90163: mov ebp, ecx */
  ebp = ecx;
L_e90165: /* e90165: mov ecx, dword ptr [eax + 0x41e0] */
  ecx = R32((uint32_t)(eax + 0x41e0u));
/* e9016b: mov edx, dword ptr [eax + 0x4140] */
  edx = R32((uint32_t)(eax + 0x4140u));
/* e90171: xor esi, esi */
  esi = 0;
/* e90173: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e90175: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* e90179: jle 0xe9022e */
  if ((zf || sf != of)) goto L_e9022e;
L_e9017f: /* e9017f: mov ecx, 1 */
  ecx = 0x1u;
/* e90184: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e90186: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* e90188: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* e9018a: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9018d: mov ebx, edx */
  ebx = edx;
/* e9018f: nop  */
L_e90190: /* e90190: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e90196: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e90198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e90199: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e9019b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9019c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9019d: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe901a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e901a7: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e901ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e901af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e901b0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e901b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901b4: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe901bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901ba: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e901be: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e901c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e901c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e901c7: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e901c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901cb: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe901d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e901d1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e901d5: mov ecx, dword ptr [eax + 0x40d0] */
  ecx = R32((uint32_t)(eax + 0x40d0u));
/* e901db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e901dd: je 0xe901ef */
  if (zf) goto L_e901ef;
L_e901df: /* e901df: mov edx, dword ptr [eax + 0x40cc] */
  edx = R32((uint32_t)(eax + 0x40ccu));
/* e901e5: xor ecx, ecx */
  ecx = 0;
/* e901e7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e901e9: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e901ec: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e901ed: jmp 0xe901f1 */
  goto L_e901f1;
L_e901ef: /* e901ef: xor ecx, ecx */
  ecx = 0;
L_e901f1: /* e901f1: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e901f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e901f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e901fa: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e901fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e901fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e901fe: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xe90204u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90204: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e90208: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9020e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e90210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e90211: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e90213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e90214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90215: call dword ptr [ecx + 0xfc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xfcu)); esp -= 4; W32(esp, 0xe9021bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9021b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9021f: mov ecx, dword ptr [eax + 0x41e0] */
  ecx = R32((uint32_t)(eax + 0x41e0u));
/* e90225: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e90226: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e90228: jl 0xe90190 */
  if ((sf != of)) goto L_e90190;
L_e9022e: /* e9022e: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* e90235: mov ebp, dword ptr [esp + 0x98] */
  ebp = R32((uint32_t)(esp + 0x98u));
/* e9023c: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e90243: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e90245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90246: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e9024d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9024e: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* e90255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90256: xor eax, eax */
  eax = 0;
/* e90258: xor esi, esi */
  esi = 0;
/* e9025a: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9025c: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9025f: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e90262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e90263: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xe90269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90269: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9026d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9026e: lea ecx, [eax + 0x2fc9c] */
  ecx = (uint32_t)(eax + 0x2fc9cu);
/* e90274: call 0xe961d0 */
  esp -= 4; W32(esp, 0xe90279u); SPILL(); f_e961d0(); if (g_unwind) return; RELOAD();
/* e90279: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e9027f: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e90281: je 0xe902b9 */
  if (zf) goto L_e902b9;
L_e90283: /* e90283: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e9028a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9028c: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xe90292u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e90292: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90296: mov dword ptr [ecx + 0x46f0], eax */
  W32((uint32_t)(ecx + 0x46f0u), eax);
/* e9029c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e902a0: mov eax, dword ptr [edx + 0x46f0] */
  eax = R32((uint32_t)(edx + 0x46f0u));
/* e902a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e902a7: call dword ptr [0xeae36c] */
  esp -= 4; W32(esp, 0xe902adu); SPILL(); call_ind(R32(0xeae36cu)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* e902ad: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e902b1: mov dword ptr [ecx + 0x46ec], eax */
  W32((uint32_t)(ecx + 0x46ecu), eax);
/* e902b7: jmp 0xe902cd */
  goto L_e902cd;
L_e902b9: /* e902b9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e902bd: mov dword ptr [edx + 0x46f0], esi */
  W32((uint32_t)(edx + 0x46f0u), esi);
/* e902c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e902c7: mov dword ptr [eax + 0x46ec], esi */
  W32((uint32_t)(eax + 0x46ecu), esi);
L_e902cd: /* e902cd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e902d1: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* e902d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e902da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e902db: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xe902e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e902e1: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* e902e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e902e9: mov dword ptr [ecx + 0x158], esi */
  W32((uint32_t)(ecx + 0x158u), esi);
/* e902ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e902f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e902f1: mov eax, 1 */
  eax = 0x1u;
/* e902f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e902f7: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e902fa: ret 0x18 */
  esp += 28; SPILL(); return;
L_e902fd: /* e902fd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e90301: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e90303: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e90305: push 0xeb2294 */
  { uint32_t v = 0xeb2294u; esp -= 4; W32(esp, v); }
/* e9030a: call 0xe8c630 */
  esp -= 4; W32(esp, 0xe9030fu); SPILL(); f_e8c630(); if (g_unwind) return; RELOAD();
/* e9030f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e90310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e90311: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e90312: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e90313: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e90316: ret 0x18 */
  esp += 28; SPILL(); return;
}
