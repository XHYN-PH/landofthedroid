#include "recomp.h"
#include "rec_mod.h"

void f_ff7f5a(void) {
  LOAD_REGS();
L_ff7f5a: /* ff7f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff7f60: /* ff7f60: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7f64: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* ff7f66: mov ecx, dword ptr [ebp + esi*4 + 0xc0] */
  ecx = R32((uint32_t)(ebp + esi*4 + 0xc0u));
/* ff7f6d: mov edx, dword ptr [ebp + esi*4 + 0x80] */
  edx = R32((uint32_t)(ebp + esi*4 + 0x80u));
/* ff7f74: mov ebx, 1 */
  ebx = 0x1u;
/* ff7f79: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* ff7f7b: xor edi, edi */
  edi = 0;
/* ff7f7d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7f7f: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7f83: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* ff7f87: je 0xff7fba */
  if (zf) goto L_ff7fba;
L_ff7f89: /* ff7f89: mov edx, dword ptr [ebp + esi*4 + 0x100] */
  edx = R32((uint32_t)(ebp + esi*4 + 0x100u));
/* ff7f90: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff7f94: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* ff7f97: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7f9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7f9c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7f9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7f9f: call 0xff41d0 */
  esp -= 4; W32(esp, 0xff7fa4u); SPILL(); f_ff41d0(); if (g_unwind) return; RELOAD();
/* ff7fa4: mov edi, eax */
  edi = eax;
/* ff7fa6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7fa9: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7fac: je 0xff81a5 */
  if (zf) goto L_ff81a5;
L_ff7fb2: /* ff7fb2: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff7fb6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_ff7fba: /* ff7fba: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7fbc: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* ff7fc4: jle 0xff8034 */
  if ((zf || sf != of)) goto L_ff8034;
L_ff7fc6: /* ff7fc6: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff7fca: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* ff7fcb: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* ff7fcf: lea ebx, [esi*8 + 0x50] */
  ebx = (uint32_t)(esi*8 + 0x50u);
/* ff7fd6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff7fda: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* ff7fdd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff7fe0: /* ff7fe0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff7fe4: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff7fe6: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* ff7fe8: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* ff7fec: sar edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
  }
/* ff7fee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7ff0: jl 0xff801e */
  if ((sf != of)) goto L_ff801e;
L_ff7ff2: /* ff7ff2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff7ff6: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* ff7ff9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff7ffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7ffe: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff8000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8001: call 0xff41d0 */
  esp -= 4; W32(esp, 0xff8006u); SPILL(); f_ff41d0(); if (g_unwind) return; RELOAD();
/* ff8006: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8009: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff800c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff800e: je 0xff81a5 */
  if (zf) goto L_ff81a5;
L_ff8014: /* ff8014: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff8018: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff801c: jmp 0xff8024 */
  goto L_ff8024;
L_ff801e: /* ff801e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_ff8024: /* ff8024: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff8028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8029: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff802c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff802e: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ff8032: jl 0xff7fe0 */
  if ((sf != of)) goto L_ff7fe0;
L_ff8034: /* ff8034: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff8038: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff803c: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff803f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff8041: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff8045: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8046: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff8049: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff804b: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff804f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff8053: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff8057: jl 0xff7f60 */
  if ((sf != of)) goto L_ff7f60;
L_ff805d: /* ff805d: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* ff8061: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* ff8065: mov eax, 2 */
  eax = 0x2u;
/* ff806a: cmp dword ptr [edi + 0x504], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x504u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8070: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff8074: jle 0xff819b */
  if ((zf || sf != of)) goto L_ff819b;
L_ff807a: /* ff807a: lea ecx, [edi + 0x30c] */
  ecx = (uint32_t)(edi + 0x30cu);
/* ff8080: lea edx, [ebp + 0x34c] */
  edx = (uint32_t)(ebp + 0x34cu);
/* ff8086: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ff808a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff808e: jmp 0xff80a0 */
  goto L_ff80a0;
L_ff8090: /* ff8090: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff8094: jmp 0xff80a0 */
  goto L_ff80a0;
L_ff80a0: /* ff80a0: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* ff80a6: mov edi, dword ptr [ebp + eax*4 + 0x344] */
  edi = R32((uint32_t)(ebp + eax*4 + 0x344u));
/* ff80ad: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* ff80b0: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* ff80b2: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff80b6: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ff80b9: mov ebx, dword ptr [ebp + ebx*4 + 0x344] */
  ebx = R32((uint32_t)(ebp + ebx*4 + 0x344u));
/* ff80c0: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* ff80c6: and ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff80cc: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff80ce: mov eax, ecx */
  eax = ecx;
/* ff80d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff80d1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff80d3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff80d5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff80d9: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff80db: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff80dd: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* ff80e0: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff80e2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff80e3: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xff80e3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff80e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff80e7: jge 0xff80ed */
  if ((sf == of)) goto L_ff80ed;
L_ff80e9: /* ff80e9: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff80eb: jmp 0xff80ef */
  goto L_ff80ef;
L_ff80ed: /* ff80ed: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_ff80ef: /* ff80ef: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff80f3: mov edi, dword ptr [eax + 0x50c] */
  edi = R32((uint32_t)(eax + 0x50cu));
/* ff80f9: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff80fb: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff80fd: mov ebx, edi */
  ebx = edi;
/* ff80ff: jl 0xff8103 */
  if ((sf != of)) goto L_ff8103;
L_ff8101: /* ff8101: mov ebx, esi */
  ebx = esi;
L_ff8103: /* ff8103: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* ff8107: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff810b: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* ff810e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8110: je 0xff815e */
  if (zf) goto L_ff815e;
L_ff8112: /* ff8112: add ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff8114: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8116: jl 0xff8127 */
  if ((sf != of)) goto L_ff8127;
L_ff8118: /* ff8118: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff811a: jle 0xff8120 */
  if ((zf || sf != of)) goto L_ff8120;
L_ff811c: /* ff811c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff811e: jmp 0xff8134 */
  goto L_ff8134;
L_ff8120: /* ff8120: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff8122: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff8123: mov eax, edi */
  eax = edi;
/* ff8125: jmp 0xff8134 */
  goto L_ff8134;
L_ff8127: /* ff8127: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff8129: je 0xff8132 */
  if (zf) goto L_ff8132;
L_ff812b: /* ff812b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff812c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff812e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* ff8130: jmp 0xff8134 */
  goto L_ff8134;
L_ff8132: /* ff8132: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff8134: /* ff8134: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff8136: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff813a: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* ff813d: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* ff8143: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* ff8146: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ff8149: and edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ff814f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ff8151: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff8153: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ff8156: and dword ptr [eax], 0x7fff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* ff815c: jmp 0xff8167 */
  goto L_ff8167;
L_ff815e: /* ff815e: or esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* ff8164: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
L_ff8167: /* ff8167: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff816b: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* ff816f: mov eax, 4 */
  eax = 0x4u;
/* ff8174: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff8176: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff8178: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ff817c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* ff8180: mov eax, dword ptr [ecx + 0x504] */
  eax = R32((uint32_t)(ecx + 0x504u));
/* ff8186: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff8187: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8189: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* ff818d: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* ff8191: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff8195: jl 0xff8090 */
  if ((sf != of)) goto L_ff8090;
L_ff819b: /* ff819b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff819c: mov eax, esi */
  eax = esi;
/* ff819e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff819f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff81a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff81a1: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff81a4: ret  */
  esp += 4; SPILL(); return;
L_ff81a5: /* ff81a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff81a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff81a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff81a8: xor eax, eax */
  eax = 0;
/* ff81aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff81ab: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff81ae: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8096(void) {
  LOAD_REGS();
  goto L_ff8096;
L_ff8090: /* ff8090: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff8094: jmp 0xff80a0 */
  goto L_ff80a0;
L_ff8096: /* ff8096: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ff809d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff80a0: /* ff80a0: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* ff80a6: mov edi, dword ptr [ebp + eax*4 + 0x344] */
  edi = R32((uint32_t)(ebp + eax*4 + 0x344u));
/* ff80ad: mov esi, dword ptr [esi + eax*4] */
  esi = R32((uint32_t)(esi + eax*4));
/* ff80b0: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* ff80b2: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff80b6: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ff80b9: mov ebx, dword ptr [ebp + ebx*4 + 0x344] */
  ebx = R32((uint32_t)(ebp + ebx*4 + 0x344u));
/* ff80c0: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* ff80c6: and ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff80cc: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff80ce: mov eax, ecx */
  eax = ecx;
/* ff80d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff80d1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff80d3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff80d5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff80d9: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff80db: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff80dd: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* ff80e0: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff80e2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff80e3: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xff80e3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff80e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff80e7: jge 0xff80ed */
  if ((sf == of)) goto L_ff80ed;
L_ff80e9: /* ff80e9: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff80eb: jmp 0xff80ef */
  goto L_ff80ef;
L_ff80ed: /* ff80ed: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_ff80ef: /* ff80ef: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff80f3: mov edi, dword ptr [eax + 0x50c] */
  edi = R32((uint32_t)(eax + 0x50cu));
/* ff80f9: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff80fb: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff80fd: mov ebx, edi */
  ebx = edi;
/* ff80ff: jl 0xff8103 */
  if ((sf != of)) goto L_ff8103;
L_ff8101: /* ff8101: mov ebx, esi */
  ebx = esi;
L_ff8103: /* ff8103: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* ff8107: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff810b: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* ff810e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8110: je 0xff815e */
  if (zf) goto L_ff815e;
L_ff8112: /* ff8112: add ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff8114: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8116: jl 0xff8127 */
  if ((sf != of)) goto L_ff8127;
L_ff8118: /* ff8118: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff811a: jle 0xff8120 */
  if ((zf || sf != of)) goto L_ff8120;
L_ff811c: /* ff811c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff811e: jmp 0xff8134 */
  goto L_ff8134;
L_ff8120: /* ff8120: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff8122: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff8123: mov eax, edi */
  eax = edi;
/* ff8125: jmp 0xff8134 */
  goto L_ff8134;
L_ff8127: /* ff8127: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff8129: je 0xff8132 */
  if (zf) goto L_ff8132;
L_ff812b: /* ff812b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff812c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff812e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* ff8130: jmp 0xff8134 */
  goto L_ff8134;
L_ff8132: /* ff8132: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff8134: /* ff8134: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff8136: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff813a: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* ff813d: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* ff8143: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* ff8146: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ff8149: and edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ff814f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ff8151: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff8153: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ff8156: and dword ptr [eax], 0x7fff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* ff815c: jmp 0xff8167 */
  goto L_ff8167;
L_ff815e: /* ff815e: or esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* ff8164: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
L_ff8167: /* ff8167: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff816b: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* ff816f: mov eax, 4 */
  eax = 0x4u;
/* ff8174: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff8176: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff8178: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ff817c: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* ff8180: mov eax, dword ptr [ecx + 0x504] */
  eax = R32((uint32_t)(ecx + 0x504u));
/* ff8186: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff8187: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8189: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* ff818d: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* ff8191: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff8195: jl 0xff8090 */
  if ((sf != of)) goto L_ff8090;
L_ff819b: /* ff819b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff819c: mov eax, esi */
  eax = esi;
/* ff819e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff819f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff81a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff81a1: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff81a4: ret  */
  esp += 4; SPILL(); return;
}

void f_ff81b0(void) {
  LOAD_REGS();
L_ff81b0: /* ff81b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff81b3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff81b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff81b8: mov ebx, dword ptr [eax + 0x510] */
  ebx = R32((uint32_t)(eax + 0x510u));
/* ff81be: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff81c2: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* ff81c5: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ff81c8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* ff81cb: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* ff81ce: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* ff81d1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff81d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff81d3: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ff81d7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff81d9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff81db: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff81dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff81de: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff81e2: je 0xff82b1 */
  if (zf) goto L_ff82b1;
L_ff81e8: /* ff81e8: mov ecx, dword ptr [ebx + 0x340] */
  ecx = R32((uint32_t)(ebx + 0x340u));
/* ff81ee: imul ecx, dword ptr [esi] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi)));
  ecx = (uint32_t)r;
  }
/* ff81f1: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff81f5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff81f6: xor edi, edi */
  edi = 0;
/* ff81f8: xor ebp, ebp */
  ebp = 0;
/* ff81fa: cmp dword ptr [edx + 0x504], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x504u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8201: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff8205: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* ff820d: jle 0xff8284 */
  if ((zf || sf != of)) goto L_ff8284;
L_ff820f: /* ff820f: add edx, 0x108 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff8215: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ff8219: jmp 0xff8220 */
  goto L_ff8220;
L_ff821b: /* ff821b: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* ff821f: nop  */
L_ff8220: /* ff8220: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff8224: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff8226: mov esi, dword ptr [esi + edx*4] */
  esi = R32((uint32_t)(esi + edx*4));
/* ff8229: mov eax, esi */
  eax = esi;
/* ff822b: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff8230: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff8232: jne 0xff825a */
  if (!zf) goto L_ff825a;
L_ff8234: /* ff8234: mov esi, dword ptr [ebx + 0x340] */
  esi = R32((uint32_t)(ebx + 0x340u));
/* ff823a: mov edi, dword ptr [ebx + edx*4 + 0x344] */
  edi = R32((uint32_t)(ebx + edx*4 + 0x344u));
/* ff8241: imul esi, eax */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(eax);
  esi = (uint32_t)r;
  }
/* ff8244: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff8248: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8249: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff824a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff824b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff824c: mov ecx, esi */
  ecx = esi;
/* ff824e: call 0xff6490 */
  esp -= 4; W32(esp, 0xff8253u); SPILL(); f_ff6490(); if (g_unwind) return; RELOAD();
/* ff8253: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8256: mov ebp, edi */
  ebp = edi;
/* ff8258: mov ecx, esi */
  ecx = esi;
L_ff825a: /* ff825a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff825e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff8262: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff8265: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ff8269: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff826d: mov esi, dword ptr [edx + 0x504] */
  esi = R32((uint32_t)(edx + 0x504u));
/* ff8273: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8274: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8276: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff827a: jl 0xff821b */
  if ((sf != of)) goto L_ff821b;
L_ff827c: /* ff827c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff8280: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_ff8284: /* ff8284: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8286: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8287: jge 0xff82a5 */
  if ((sf == of)) goto L_ff82a5;
L_ff8289: /* ff8289: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff828d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
L_ff8291: /* ff8291: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff8295: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff8299: fmul dword ptr [ecx + edi*4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + edi*4)));
/* ff829c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff829d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff829f: fstp dword ptr [ecx + edi*4 - 4] */
  WF32((uint32_t)(ecx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* ff82a3: jl 0xff8291 */
  if ((sf != of)) goto L_ff8291;
L_ff82a5: /* ff82a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff82a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff82a7: mov eax, 1 */
  eax = 0x1u;
/* ff82ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff82ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff82b0: ret  */
  esp += 4; SPILL(); return;
L_ff82b1: /* ff82b1: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff82b5: mov ecx, eax */
  ecx = eax;
/* ff82b7: xor eax, eax */
  eax = 0;
/* ff82b9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff82bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff82bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff82bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff82be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff82c1: ret  */
  esp += 4; SPILL(); return;
}

void f_ff82d0(void) {
  LOAD_REGS();
L_ff82d0: /* ff82d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ff82d4: xor eax, eax */
  eax = 0;
/* ff82d6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ff82d8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* ff82db: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* ff82de: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* ff82e1: ret  */
  esp += 4; SPILL(); return;
}

void f_ff82f0(void) {
  LOAD_REGS();
L_ff82f0: /* ff82f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff82f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff82f2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ff82f6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff82f9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff82fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff82fc: mov edi, dword ptr [0x100a048] */
  edi = R32((uint32_t)(0x100a048u));
/* ff8302: lea ecx, [eax*4 + 8] */
  ecx = (uint32_t)(eax*4 + 0x8u);
/* ff8309: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff830a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff830b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff830du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff830d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff8310: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff8312: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff8315: lea ecx, [eax*4 + 8] */
  ecx = (uint32_t)(eax*4 + 0x8u);
/* ff831c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff831d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff831e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff8320u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8320: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff8324: mov ecx, edi */
  ecx = edi;
/* ff8326: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8329: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff832c: lea ebx, [ecx + 1] */
  ebx = (uint32_t)(ecx + 0x1u);
/* ff832f: nop  */
L_ff8330: /* ff8330: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* ff8332: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff8333: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff8335: jne 0xff8330 */
  if (!zf) goto L_ff8330;
L_ff8337: /* ff8337: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff833a: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff833c: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* ff833f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff8342: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff8345: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* ff8348: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff8349: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff834a: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff8350u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff8350: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff8353: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff8355: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* ff8358: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff835b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff835d: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ff8360: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8363: mov ecx, edi */
  ecx = edi;
L_ff8365: /* ff8365: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* ff8367: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff8368: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* ff836a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff836b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff836d: jne 0xff8365 */
  if (!zf) goto L_ff8365;
L_ff836f: /* ff836f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff8372: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff8374: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8375: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8376: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ff8379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff837a: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* ff8381: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8382: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8390(void) {
  LOAD_REGS();
L_ff8390: /* ff8390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8391: mov ebp, esp */
  ebp = esp;
/* ff8393: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8394: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8395: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ff8398: mov eax, esi */
  eax = esi;
/* ff839a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff839b: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* ff839e: mov edi, edi */
  edi = edi;
L_ff83a0: /* ff83a0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff83a2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff83a3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff83a5: jne 0xff83a0 */
  if (!zf) goto L_ff83a0;
L_ff83a7: /* ff83a7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff83a9: mov edx, eax */
  edx = eax;
/* ff83ab: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff83ae: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
L_ff83b1: /* ff83b1: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff83b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff83b4: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff83b6: jne 0xff83b1 */
  if (!zf) goto L_ff83b1;
L_ff83b8: /* ff83b8: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff83ba: lea eax, [eax + edx + 2] */
  eax = (uint32_t)(eax + edx + 0x2u);
/* ff83be: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff83c1: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff83c4: call 0x1009200 */
  esp -= 4; W32(esp, 0xff83c9u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff83c9: mov ebx, esp */
  ebx = esp;
/* ff83cb: mov ecx, ebx */
  ecx = ebx;
/* ff83cd: mov eax, esi */
  eax = esi;
/* ff83cf: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_ff83d1: /* ff83d1: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff83d3: mov byte ptr [ecx + eax], dl */
  W8((uint32_t)(ecx + eax), (edx & 0xffu));
/* ff83d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff83d7: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff83d9: jne 0xff83d1 */
  if (!zf) goto L_ff83d1;
L_ff83db: /* ff83db: mov edi, ebx */
  edi = ebx;
/* ff83dd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff83de: mov edi, edi */
  edi = edi;
L_ff83e0: /* ff83e0: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* ff83e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff83e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff83e6: jne 0xff83e0 */
  if (!zf) goto L_ff83e0;
L_ff83e8: /* ff83e8: mov ax, word ptr [0x100a1bc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x100a1bcu))) & 0xffffu);
/* ff83ee: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* ff83f1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff83f4: mov esi, eax */
  esi = eax;
L_ff83f6: /* ff83f6: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff83f8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff83f9: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff83fb: jne 0xff83f6 */
  if (!zf) goto L_ff83f6;
L_ff83fd: /* ff83fd: mov edi, ebx */
  edi = ebx;
/* ff83ff: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff8401: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_ff8402: /* ff8402: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* ff8405: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff8406: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff8408: jne 0xff8402 */
  if (!zf) goto L_ff8402;
L_ff840a: /* ff840a: mov ecx, eax */
  ecx = eax;
/* ff840c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff840f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff8411: mov ecx, eax */
  ecx = eax;
/* ff8413: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff8416: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ff8418: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff841b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff841c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff841d: call 0xff82f0 */
  esp -= 4; W32(esp, 0xff8422u); SPILL(); f_ff82f0(); if (g_unwind) return; RELOAD();
/* ff8422: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8425: lea esp, [ebp - 0xc] */
  esp = (uint32_t)(ebp + 0xfffffff4u);
/* ff8428: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8429: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff842a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff842b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff842c: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8430(void) {
  LOAD_REGS();
L_ff8430: /* ff8430: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8431: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8432: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8433: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8434: mov esi, eax */
  esi = eax;
/* ff8436: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff843a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff843b: xor edi, edi */
  edi = 0;
/* ff843d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff843f: jle 0xff8471 */
  if ((zf || sf != of)) goto L_ff8471;
L_ff8441: /* ff8441: mov ebx, ecx */
  ebx = ecx;
/* ff8443: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
L_ff8445: /* ff8445: movsx eax, byte ptr [ebx + esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx + esi)));
/* ff8449: mov ebp, dword ptr [0x100a060] */
  ebp = R32((uint32_t)(0x100a060u));
/* ff844f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8450: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff8452u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8452: movsx ecx, byte ptr [esi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* ff8455: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8456: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff845a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff845cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff845c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff8460: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8463: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff8465: jne 0xff8479 */
  if (!zf) goto L_ff8479;
L_ff8467: /* ff8467: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff846b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff846c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff846d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff846f: jl 0xff8445 */
  if ((sf != of)) goto L_ff8445;
L_ff8471: /* ff8471: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8472: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8473: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8474: xor eax, eax */
  eax = 0;
/* ff8476: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8477: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff8478: ret  */
  esp += 4; SPILL(); return;
L_ff8479: /* ff8479: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff847a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff847b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff847c: mov eax, 1 */
  eax = 0x1u;
/* ff8481: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8482: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff8483: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8490(void) {
  LOAD_REGS();
L_ff8490: /* ff8490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8491: mov ebp, esp */
  ebp = esp;
/* ff8493: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8494: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8496: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ff8499: mov eax, esi */
  eax = esi;
/* ff849b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff849c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ff84a3: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_ff84a6: /* ff84a6: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff84a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff84a9: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff84ab: jne 0xff84a6 */
  if (!zf) goto L_ff84a6;
L_ff84ad: /* ff84ad: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff84af: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* ff84b2: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* ff84b5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff84b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff84bb: call 0x1009200 */
  esp -= 4; W32(esp, 0xff84c0u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff84c0: mov edi, esp */
  edi = esp;
/* ff84c2: mov edx, edi */
  edx = edi;
/* ff84c4: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* ff84c7: mov eax, esi */
  eax = esi;
/* ff84c9: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff84cb: jmp 0xff84d0 */
  goto L_ff84d0;
L_ff84d0: /* ff84d0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff84d2: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* ff84d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff84d6: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff84d8: jne 0xff84d0 */
  if (!zf) goto L_ff84d0;
L_ff84da: /* ff84da: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff84db: jmp 0xff84e0 */
  goto L_ff84e0;
L_ff84e0: /* ff84e0: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* ff84e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff84e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff84e6: jne 0xff84e0 */
  if (!zf) goto L_ff84e0;
L_ff84e8: /* ff84e8: mov ax, word ptr [0x100a1bc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x100a1bcu))) & 0xffffu);
/* ff84ee: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* ff84f1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ff84f4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff84f7: xor esi, esi */
  esi = 0;
/* ff84f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff84fb: jle 0xff852b */
  if ((zf || sf != of)) goto L_ff852b;
L_ff84fd: /* ff84fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff8500: /* ff8500: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff8502: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff8505: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* ff8508: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8509: call 0xff8430 */
  esp -= 4; W32(esp, 0xff850eu); SPILL(); f_ff8430(); if (g_unwind) return; RELOAD();
/* ff850e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8511: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8513: jne 0xff8523 */
  if (!zf) goto L_ff8523;
L_ff8515: /* ff8515: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ff8518: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff851b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff851d: je 0xff8537 */
  if (zf) goto L_ff8537;
L_ff851f: /* ff851f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8520: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff8523: /* ff8523: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff8526: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff8527: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8529: jl 0xff8500 */
  if ((sf != of)) goto L_ff8500;
L_ff852b: /* ff852b: xor eax, eax */
  eax = 0;
/* ff852d: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff8530: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8531: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8532: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8533: mov esp, ebp */
  esp = ebp;
/* ff8535: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8536: ret  */
  esp += 4; SPILL(); return;
L_ff8537: /* ff8537: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff8539: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* ff853c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff853e: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff8541: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8542: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8543: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8544: mov esp, ebp */
  esp = ebp;
/* ff8546: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8547: ret  */
  esp += 4; SPILL(); return;
}

void f_ff84cd(void) {
  LOAD_REGS();
L_ff84cd: /* ff84cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff84d0: /* ff84d0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff84d2: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* ff84d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff84d6: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff84d8: jne 0xff84d0 */
  if (!zf) goto L_ff84d0;
L_ff84da: /* ff84da: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff84db: jmp 0xff84e0 */
  goto L_ff84e0;
L_ff84e0: /* ff84e0: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* ff84e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff84e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff84e6: jne 0xff84e0 */
  if (!zf) goto L_ff84e0;
L_ff84e8: /* ff84e8: mov ax, word ptr [0x100a1bc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x100a1bcu))) & 0xffffu);
/* ff84ee: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* ff84f1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ff84f4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff84f7: xor esi, esi */
  esi = 0;
/* ff84f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff84fb: jle 0xff852b */
  if ((zf || sf != of)) goto L_ff852b;
L_ff84fd: /* ff84fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff8500: /* ff8500: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff8502: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff8505: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* ff8508: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8509: call 0xff8430 */
  esp -= 4; W32(esp, 0xff850eu); SPILL(); f_ff8430(); if (g_unwind) return; RELOAD();
/* ff850e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8511: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8513: jne 0xff8523 */
  if (!zf) goto L_ff8523;
L_ff8515: /* ff8515: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ff8518: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff851b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff851d: je 0xff8537 */
  if (zf) goto L_ff8537;
L_ff851f: /* ff851f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8520: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff8523: /* ff8523: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff8526: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff8527: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8529: jl 0xff8500 */
  if ((sf != of)) goto L_ff8500;
L_ff852b: /* ff852b: xor eax, eax */
  eax = 0;
/* ff852d: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff8530: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8531: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8532: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8533: mov esp, ebp */
  esp = ebp;
/* ff8535: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8536: ret  */
  esp += 4; SPILL(); return;
L_ff8537: /* ff8537: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff8539: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* ff853c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff853e: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff8541: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8542: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8543: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8544: mov esp, ebp */
  esp = ebp;
/* ff8546: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8547: ret  */
  esp += 4; SPILL(); return;
}

void f_ff84dd(void) {
  LOAD_REGS();
L_ff84dd: /* ff84dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff84e0: /* ff84e0: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* ff84e3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff84e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff84e6: jne 0xff84e0 */
  if (!zf) goto L_ff84e0;
L_ff84e8: /* ff84e8: mov ax, word ptr [0x100a1bc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x100a1bcu))) & 0xffffu);
/* ff84ee: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* ff84f1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ff84f4: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff84f7: xor esi, esi */
  esi = 0;
/* ff84f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff84fb: jle 0xff852b */
  if ((zf || sf != of)) goto L_ff852b;
L_ff84fd: /* ff84fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff8500: /* ff8500: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff8502: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff8505: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* ff8508: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8509: call 0xff8430 */
  esp -= 4; W32(esp, 0xff850eu); SPILL(); f_ff8430(); if (g_unwind) return; RELOAD();
/* ff850e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8511: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8513: jne 0xff8523 */
  if (!zf) goto L_ff8523;
L_ff8515: /* ff8515: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ff8518: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff851b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff851d: je 0xff8537 */
  if (zf) goto L_ff8537;
L_ff851f: /* ff851f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8520: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff8523: /* ff8523: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff8526: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff8527: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8529: jl 0xff8500 */
  if ((sf != of)) goto L_ff8500;
L_ff852b: /* ff852b: xor eax, eax */
  eax = 0;
/* ff852d: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff8530: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8531: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8532: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8533: mov esp, ebp */
  esp = ebp;
/* ff8535: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8536: ret  */
  esp += 4; SPILL(); return;
L_ff8537: /* ff8537: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff8539: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* ff853c: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff853e: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff8541: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8542: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8543: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8544: mov esp, ebp */
  esp = ebp;
/* ff8546: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8547: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8550(void) {
  LOAD_REGS();
L_ff8550: /* ff8550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8551: mov ebp, esp */
  ebp = esp;
/* ff8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8554: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8555: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8556: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ff8559: mov eax, esi */
  eax = esi;
/* ff855b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff855c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ff8563: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_ff8566: /* ff8566: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff8568: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8569: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff856b: jne 0xff8566 */
  if (!zf) goto L_ff8566;
L_ff856d: /* ff856d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff856f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8570: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* ff8573: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff8576: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff8579: call 0x1009200 */
  esp -= 4; W32(esp, 0xff857eu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff857e: mov ebx, esp */
  ebx = esp;
/* ff8580: mov edx, ebx */
  edx = ebx;
/* ff8582: mov eax, esi */
  eax = esi;
/* ff8584: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_ff8586: /* ff8586: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff8588: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* ff858b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff858c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff858e: jne 0xff8586 */
  if (!zf) goto L_ff8586;
L_ff8590: /* ff8590: mov edi, ebx */
  edi = ebx;
/* ff8592: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_ff8593: /* ff8593: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* ff8596: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff8597: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff8599: jne 0xff8593 */
  if (!zf) goto L_ff8593;
L_ff859b: /* ff859b: mov ax, word ptr [0x100a1bc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x100a1bcu))) & 0xffffu);
/* ff85a1: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* ff85a4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ff85a7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff85aa: xor esi, esi */
  esi = 0;
/* ff85ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff85ae: jle 0xff85d2 */
  if ((zf || sf != of)) goto L_ff85d2;
L_ff85b0: /* ff85b0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ff85b3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ff85b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff85b6: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* ff85b9: mov eax, ebx */
  eax = ebx;
/* ff85bb: call 0xff8430 */
  esp -= 4; W32(esp, 0xff85c0u); SPILL(); f_ff8430(); if (g_unwind) return; RELOAD();
/* ff85c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff85c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff85c5: jne 0xff85ca */
  if (!zf) goto L_ff85ca;
L_ff85c7: /* ff85c7: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_ff85ca: /* ff85ca: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff85cd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff85ce: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff85d0: jl 0xff85b0 */
  if ((sf != of)) goto L_ff85b0;
L_ff85d2: /* ff85d2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff85d5: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff85d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff85d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff85da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff85db: mov esp, ebp */
  esp = ebp;
/* ff85dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff85de: ret  */
  esp += 4; SPILL(); return;
}

void f_ff85e0(void) {
  LOAD_REGS();
L_ff85e0: /* ff85e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff85e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ff85e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff85e7: je 0xff863f */
  if (zf) goto L_ff863f;
L_ff85e9: /* ff85e9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff85ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff85ed: mov ebx, dword ptr [0x100a040] */
  ebx = R32((uint32_t)(0x100a040u));
/* ff85f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff85f4: xor edi, edi */
  edi = 0;
/* ff85f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff85f8: jle 0xff8617 */
  if ((zf || sf != of)) goto L_ff8617;
L_ff85fa: /* ff85fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff8600: /* ff8600: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff8602: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ff8605: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8607: je 0xff860f */
  if (zf) goto L_ff860f;
L_ff8609: /* ff8609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff860a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff860cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff860c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff860f: /* ff860f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff8612: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff8613: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8615: jl 0xff8600 */
  if ((sf != of)) goto L_ff8600;
L_ff8617: /* ff8617: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff8619: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff861b: je 0xff8623 */
  if (zf) goto L_ff8623;
L_ff861d: /* ff861d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff861e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff8620u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8620: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff8623: /* ff8623: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff8626: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8628: je 0xff8630 */
  if (zf) goto L_ff8630;
L_ff862a: /* ff862a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff862b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff862du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff862d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff8630: /* ff8630: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff8633: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8635: je 0xff863d */
  if (zf) goto L_ff863d;
L_ff8637: /* ff8637: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8638: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff863au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff863a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff863d: /* ff863d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff863e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ff863f: /* ff863f: xor ecx, ecx */
  ecx = 0;
/* ff8641: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* ff8643: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* ff8646: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* ff8649: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* ff864c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff864d: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8650(void) {
  LOAD_REGS();
L_ff8650: /* ff8650: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff8654: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* ff8657: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8659: je 0xff8663 */
  if (zf) goto L_ff8663;
L_ff865b: /* ff865b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ff865f: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* ff8662: ret  */
  esp += 4; SPILL(); return;
L_ff8663: /* ff8663: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff8666: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8670(void) {
  LOAD_REGS();
L_ff8670: /* ff8670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8671: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ff8675: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8676: xor eax, eax */
  eax = 0;
/* ff8678: push 0x1090 */
  { uint32_t v = 0x1090u; esp -= 4; W32(esp, v); }
/* ff867d: mov ecx, 8 */
  ecx = 0x8u;
/* ff8682: mov edi, esi */
  edi = esi;
/* ff8684: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8686: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff8688: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff868eu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff868e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8691: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8692: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* ff8695: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8696: ret  */
  esp += 4; SPILL(); return;
}

void f_ff86a0(void) {
  LOAD_REGS();
L_ff86a0: /* ff86a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff86a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff86a5: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* ff86a8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff86aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff86ab: je 0xff8833 */
  if (zf) goto L_ff8833;
L_ff86b1: /* ff86b1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff86b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff86b5: xor ebx, ebx */
  ebx = 0;
/* ff86b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff86b9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff86ba: jle 0xff86dc */
  if ((zf || sf != of)) goto L_ff86dc;
L_ff86bc: /* ff86bc: lea ebp, [esi + 0x24] */
  ebp = (uint32_t)(esi + 0x24u);
/* ff86bf: nop  */
L_ff86c0: /* ff86c0: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff86c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff86c5: je 0xff86d1 */
  if (zf) goto L_ff86d1;
L_ff86c7: /* ff86c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff86c8: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff86ceu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff86ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff86d1: /* ff86d1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff86d4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff86d5: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff86d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff86da: jl 0xff86c0 */
  if ((sf != of)) goto L_ff86c0;
L_ff86dc: /* ff86dc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff86df: xor ebp, ebp */
  ebp = 0;
/* ff86e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff86e3: jle 0xff8711 */
  if ((zf || sf != of)) goto L_ff8711;
L_ff86e5: /* ff86e5: lea ebx, [esi + 0x224] */
  ebx = (uint32_t)(esi + 0x224u);
/* ff86eb: jmp 0xff86f0 */
  goto L_ff86f0;
L_ff86f0: /* ff86f0: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff86f6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff86f8: mov edx, dword ptr [ecx*4 + 0x100d108] */
  edx = R32((uint32_t)(ecx*4 + 0x100d108u));
/* ff86ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8700: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8703: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff8706: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8709: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff870a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff870d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff870f: jl 0xff86f0 */
  if ((sf != of)) goto L_ff86f0;
L_ff8711: /* ff8711: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ff8714: xor ebp, ebp */
  ebp = 0;
/* ff8716: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8718: jle 0xff8741 */
  if ((zf || sf != of)) goto L_ff8741;
L_ff871a: /* ff871a: lea ebx, [esi + 0x424] */
  ebx = (uint32_t)(esi + 0x424u);
L_ff8720: /* ff8720: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff8726: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff8728: mov edx, dword ptr [ecx*4 + 0x100d0f0] */
  edx = R32((uint32_t)(ecx*4 + 0x100d0f0u));
/* ff872f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8730: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8733: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ff8736: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8739: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff873a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff873d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff873f: jl 0xff8720 */
  if ((sf != of)) goto L_ff8720;
L_ff8741: /* ff8741: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff8744: xor ebp, ebp */
  ebp = 0;
/* ff8746: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8748: jle 0xff8771 */
  if ((zf || sf != of)) goto L_ff8771;
L_ff874a: /* ff874a: lea ebx, [esi + 0x624] */
  ebx = (uint32_t)(esi + 0x624u);
L_ff8750: /* ff8750: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff8756: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff8758: mov edx, dword ptr [ecx*4 + 0x100d0f4] */
  edx = R32((uint32_t)(ecx*4 + 0x100d0f4u));
/* ff875f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8760: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8763: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff8766: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8769: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff876a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff876d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff876f: jl 0xff8750 */
  if ((sf != of)) goto L_ff8750;
L_ff8771: /* ff8771: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff8774: xor ebp, ebp */
  ebp = 0;
/* ff8776: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8778: jle 0xff87a1 */
  if ((zf || sf != of)) goto L_ff87a1;
L_ff877a: /* ff877a: lea ebx, [esi + 0x824] */
  ebx = (uint32_t)(esi + 0x824u);
L_ff8780: /* ff8780: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff8786: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff8788: mov edx, dword ptr [ecx*4 + 0x100d0fc] */
  edx = R32((uint32_t)(ecx*4 + 0x100d0fcu));
/* ff878f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8790: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8793u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8793: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff8796: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8799: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff879a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff879d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff879f: jl 0xff8780 */
  if ((sf != of)) goto L_ff8780;
L_ff87a1: /* ff87a1: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff87a4: xor ebx, ebx */
  ebx = 0;
/* ff87a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff87a8: jle 0xff87e6 */
  if ((zf || sf != of)) goto L_ff87e6;
L_ff87aa: /* ff87aa: xor edi, edi */
  edi = 0;
/* ff87ac: lea ebp, [esi + 0x924] */
  ebp = (uint32_t)(esi + 0x924u);
L_ff87b2: /* ff87b2: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff87b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff87b7: je 0xff87c2 */
  if (zf) goto L_ff87c2;
L_ff87b9: /* ff87b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff87ba: call 0x10029b0 */
  esp -= 4; W32(esp, 0xff87bfu); SPILL(); f_10029b0(); if (g_unwind) return; RELOAD();
/* ff87bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff87c2: /* ff87c2: mov eax, dword ptr [esi + 0xd24] */
  eax = R32((uint32_t)(esi + 0xd24u));
/* ff87c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff87ca: je 0xff87d8 */
  if (zf) goto L_ff87d8;
L_ff87cc: /* ff87cc: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* ff87cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff87d0: call 0x10029d0 */
  esp -= 4; W32(esp, 0xff87d5u); SPILL(); f_10029d0(); if (g_unwind) return; RELOAD();
/* ff87d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff87d8: /* ff87d8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff87db: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff87dc: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff87df: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff87e2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff87e4: jl 0xff87b2 */
  if ((sf != of)) goto L_ff87b2;
L_ff87e6: /* ff87e6: mov eax, dword ptr [esi + 0xd24] */
  eax = R32((uint32_t)(esi + 0xd24u));
/* ff87ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff87ee: je 0xff87fa */
  if (zf) goto L_ff87fa;
L_ff87f0: /* ff87f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff87f1: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff87f7u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff87f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff87fa: /* ff87fa: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff87fd: xor ebx, ebx */
  ebx = 0;
/* ff87ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8801: jle 0xff8827 */
  if ((zf || sf != of)) goto L_ff8827;
L_ff8803: /* ff8803: lea ebp, [esi + 0xd28] */
  ebp = (uint32_t)(esi + 0xd28u);
/* ff8809: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff8810: /* ff8810: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff8813: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8814: call 0xffc9e0 */
  esp -= 4; W32(esp, 0xff8819u); SPILL(); f_ffc9e0(); if (g_unwind) return; RELOAD();
/* ff8819: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff881c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff881f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff8820: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff8823: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8825: jl 0xff8810 */
  if ((sf != of)) goto L_ff8810;
L_ff8827: /* ff8827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8828: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff882eu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff882e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8831: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8832: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ff8833: /* ff8833: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ff8837: mov ecx, 8 */
  ecx = 0x8u;
/* ff883c: xor eax, eax */
  eax = 0;
/* ff883e: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff8840: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8841: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8842: ret  */
  esp += 4; SPILL(); return;
}

void f_ff86ed(void) {
  LOAD_REGS();
L_ff86ed: /* ff86ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff86f0: /* ff86f0: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff86f6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff86f8: mov edx, dword ptr [ecx*4 + 0x100d108] */
  edx = R32((uint32_t)(ecx*4 + 0x100d108u));
/* ff86ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8700: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8703: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff8706: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8709: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff870a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff870d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff870f: jl 0xff86f0 */
  if ((sf != of)) goto L_ff86f0;
L_ff8711: /* ff8711: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ff8714: xor ebp, ebp */
  ebp = 0;
/* ff8716: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8718: jle 0xff8741 */
  if ((zf || sf != of)) goto L_ff8741;
L_ff871a: /* ff871a: lea ebx, [esi + 0x424] */
  ebx = (uint32_t)(esi + 0x424u);
L_ff8720: /* ff8720: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff8726: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff8728: mov edx, dword ptr [ecx*4 + 0x100d0f0] */
  edx = R32((uint32_t)(ecx*4 + 0x100d0f0u));
/* ff872f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8730: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8733: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ff8736: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8739: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff873a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff873d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff873f: jl 0xff8720 */
  if ((sf != of)) goto L_ff8720;
L_ff8741: /* ff8741: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff8744: xor ebp, ebp */
  ebp = 0;
/* ff8746: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8748: jle 0xff8771 */
  if ((zf || sf != of)) goto L_ff8771;
L_ff874a: /* ff874a: lea ebx, [esi + 0x624] */
  ebx = (uint32_t)(esi + 0x624u);
L_ff8750: /* ff8750: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff8756: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff8758: mov edx, dword ptr [ecx*4 + 0x100d0f4] */
  edx = R32((uint32_t)(ecx*4 + 0x100d0f4u));
/* ff875f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8760: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8763: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff8766: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8769: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff876a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff876d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff876f: jl 0xff8750 */
  if ((sf != of)) goto L_ff8750;
L_ff8771: /* ff8771: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff8774: xor ebp, ebp */
  ebp = 0;
/* ff8776: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8778: jle 0xff87a1 */
  if ((zf || sf != of)) goto L_ff87a1;
L_ff877a: /* ff877a: lea ebx, [esi + 0x824] */
  ebx = (uint32_t)(esi + 0x824u);
L_ff8780: /* ff8780: mov ecx, dword ptr [ebx - 0x100] */
  ecx = R32((uint32_t)(ebx + 0xffffff00u));
/* ff8786: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff8788: mov edx, dword ptr [ecx*4 + 0x100d0fc] */
  edx = R32((uint32_t)(ecx*4 + 0x100d0fcu));
/* ff878f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8790: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xff8793u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8793: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff8796: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8799: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff879a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff879d: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff879f: jl 0xff8780 */
  if ((sf != of)) goto L_ff8780;
L_ff87a1: /* ff87a1: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff87a4: xor ebx, ebx */
  ebx = 0;
/* ff87a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff87a8: jle 0xff87e6 */
  if ((zf || sf != of)) goto L_ff87e6;
L_ff87aa: /* ff87aa: xor edi, edi */
  edi = 0;
/* ff87ac: lea ebp, [esi + 0x924] */
  ebp = (uint32_t)(esi + 0x924u);
L_ff87b2: /* ff87b2: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff87b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff87b7: je 0xff87c2 */
  if (zf) goto L_ff87c2;
L_ff87b9: /* ff87b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff87ba: call 0x10029b0 */
  esp -= 4; W32(esp, 0xff87bfu); SPILL(); f_10029b0(); if (g_unwind) return; RELOAD();
/* ff87bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff87c2: /* ff87c2: mov eax, dword ptr [esi + 0xd24] */
  eax = R32((uint32_t)(esi + 0xd24u));
/* ff87c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff87ca: je 0xff87d8 */
  if (zf) goto L_ff87d8;
L_ff87cc: /* ff87cc: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* ff87cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff87d0: call 0x10029d0 */
  esp -= 4; W32(esp, 0xff87d5u); SPILL(); f_10029d0(); if (g_unwind) return; RELOAD();
/* ff87d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff87d8: /* ff87d8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff87db: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff87dc: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff87df: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff87e2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff87e4: jl 0xff87b2 */
  if ((sf != of)) goto L_ff87b2;
L_ff87e6: /* ff87e6: mov eax, dword ptr [esi + 0xd24] */
  eax = R32((uint32_t)(esi + 0xd24u));
/* ff87ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff87ee: je 0xff87fa */
  if (zf) goto L_ff87fa;
L_ff87f0: /* ff87f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff87f1: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff87f7u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff87f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff87fa: /* ff87fa: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff87fd: xor ebx, ebx */
  ebx = 0;
/* ff87ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8801: jle 0xff8827 */
  if ((zf || sf != of)) goto L_ff8827;
L_ff8803: /* ff8803: lea ebp, [esi + 0xd28] */
  ebp = (uint32_t)(esi + 0xd28u);
/* ff8809: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff8810: /* ff8810: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff8813: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8814: call 0xffc9e0 */
  esp -= 4; W32(esp, 0xff8819u); SPILL(); f_ffc9e0(); if (g_unwind) return; RELOAD();
/* ff8819: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff881c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff881f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff8820: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff8823: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8825: jl 0xff8810 */
  if ((sf != of)) goto L_ff8810;
L_ff8827: /* ff8827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8828: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff882eu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff882e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8831: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8832: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8833: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ff8837: mov ecx, 8 */
  ecx = 0x8u;
/* ff883c: xor eax, eax */
  eax = 0;
/* ff883e: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff8840: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8841: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8842: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8850(void) {
  LOAD_REGS();
L_ff8850: /* ff8850: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8851: mov ebx, dword ptr [edi + 0x1c] */
  ebx = R32((uint32_t)(edi + 0x1cu));
/* ff8854: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8856: jne 0xff885f */
  if (!zf) goto L_ff885f;
L_ff8858: /* ff8858: mov eax, 0xffffff7f */
  eax = 0xffffff7fu;
/* ff885d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff885e: ret  */
  esp += 4; SPILL(); return;
L_ff885f: /* ff885f: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8861: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8862: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8867u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8867: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff886a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff886c: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff886e: je 0xff8877 */
  if (zf) goto L_ff8877;
L_ff8870: /* ff8870: mov eax, 0xffffff7a */
  eax = 0xffffff7au;
/* ff8875: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8876: ret  */
  esp += 4; SPILL(); return;
L_ff8877: /* ff8877: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8879: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff887a: call 0x1009154 */
  esp -= 4; W32(esp, 0xff887fu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff887f: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8882: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* ff8885: call 0x1009154 */
  esp -= 4; W32(esp, 0xff888au); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff888a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff888c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff888d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* ff8890: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8895u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8895: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8897: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8898: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* ff889b: call 0x1009154 */
  esp -= 4; W32(esp, 0xff88a0u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff88a0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff88a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff88a3: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* ff88a6: call 0x1009154 */
  esp -= 4; W32(esp, 0xff88abu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff88ab: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff88ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff88ae: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* ff88b1: call 0x1009154 */
  esp -= 4; W32(esp, 0xff88b6u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff88b6: mov ecx, eax */
  ecx = eax;
/* ff88b8: mov edx, 1 */
  edx = 0x1u;
/* ff88bd: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff88bf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff88c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff88c2: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* ff88c4: call 0x1009154 */
  esp -= 4; W32(esp, 0xff88c9u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff88c9: mov ecx, eax */
  ecx = eax;
/* ff88cb: mov edx, 1 */
  edx = 0x1u;
/* ff88d0: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff88d2: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff88d5: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* ff88d8: cmp dword ptr [edi + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff88dc: jl 0xff88ff */
  if ((sf != of)) goto L_ff88ff;
L_ff88de: /* ff88de: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff88e2: jl 0xff88ff */
  if ((sf != of)) goto L_ff88ff;
L_ff88e4: /* ff88e4: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* ff88e6: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff88e9: jl 0xff88ff */
  if ((sf != of)) goto L_ff88ff;
L_ff88eb: /* ff88eb: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff88ed: jl 0xff88ff */
  if ((sf != of)) goto L_ff88ff;
L_ff88ef: /* ff88ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff88f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff88f2: call 0x1009154 */
  esp -= 4; W32(esp, 0xff88f7u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff88f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff88fa: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff88fd: je 0xff890f */
  if (zf) goto L_ff890f;
L_ff88ff: /* ff88ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8900: call 0xff86a0 */
  esp -= 4; W32(esp, 0xff8905u); SPILL(); f_ff86a0(); if (g_unwind) return; RELOAD();
/* ff8905: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8908: mov eax, 0xffffff7b */
  eax = 0xffffff7bu;
/* ff890d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff890e: ret  */
  esp += 4; SPILL(); return;
L_ff890f: /* ff890f: xor eax, eax */
  eax = 0;
/* ff8911: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8912: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8920(void) {
  LOAD_REGS();
L_ff8920: /* ff8920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff8924: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8925: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8927: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff892a: call 0x1009154 */
  esp -= 4; W32(esp, 0xff892fu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff892f: mov edi, eax */
  edi = eax;
/* ff8931: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8934: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8936: jl 0xff8a15 */
  if ((sf != of)) goto L_ff8a15;
L_ff893c: /* ff893c: mov ebx, dword ptr [0x100a038] */
  ebx = R32((uint32_t)(0x100a038u));
/* ff8942: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* ff8945: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8948: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff894au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff894a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff894d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff894f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ff8952: mov ebp, eax */
  ebp = eax;
/* ff8954: je 0xff896c */
  if (zf) goto L_ff896c;
L_ff8956: /* ff8956: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff895a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff895c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff895d: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8962u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8962: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8965: mov byte ptr [ebp], al */
  W8((uint32_t)(ebp), (eax & 0xffu));
/* ff8968: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff8969: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ff896a: jne 0xff8956 */
  if (!zf) goto L_ff8956;
L_ff896c: /* ff896c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff8970: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8973: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8978u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8978: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff897b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff897d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ff8980: jl 0xff8a15 */
  if ((sf != of)) goto L_ff8a15;
L_ff8986: /* ff8986: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8987: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff8989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff898a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff898cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff898c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff898f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff8990: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff8992: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8993: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff8995: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff8997u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8997: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff899a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff899d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff89a0: xor ebp, ebp */
  ebp = 0;
/* ff89a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff89a4: jle 0xff8a01 */
  if ((zf || sf != of)) goto L_ff8a01;
L_ff89a6: /* ff89a6: jmp 0xff89b0 */
  goto L_ff89b0;
L_ff89a8: /* ff89a8: mov ebx, dword ptr [0x100a038] */
  ebx = R32((uint32_t)(0x100a038u));
/* ff89ae: mov edi, edi */
  edi = edi;
L_ff89b0: /* ff89b0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff89b4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff89b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff89b7: call 0x1009154 */
  esp -= 4; W32(esp, 0xff89bcu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff89bc: mov edi, eax */
  edi = eax;
/* ff89be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff89c1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff89c3: jl 0xff8a15 */
  if ((sf != of)) goto L_ff8a15;
L_ff89c5: /* ff89c5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff89c8: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* ff89cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff89cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff89ce: mov dword ptr [eax + ebp*4], edi */
  W32((uint32_t)(eax + ebp*4), edi);
/* ff89d1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff89d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff89d3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff89d5: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* ff89d8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff89da: mov ebx, dword ptr [eax + ebp*4] */
  ebx = R32((uint32_t)(eax + ebp*4));
/* ff89dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff89e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff89e2: je 0xff89f9 */
  if (zf) goto L_ff89f9;
L_ff89e4: /* ff89e4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff89e8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff89ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff89eb: call 0x1009154 */
  esp -= 4; W32(esp, 0xff89f0u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff89f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff89f3: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* ff89f5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff89f6: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ff89f7: jne 0xff89e4 */
  if (!zf) goto L_ff89e4;
L_ff89f9: /* ff89f9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff89fc: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff89fd: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff89ff: jl 0xff89a8 */
  if ((sf != of)) goto L_ff89a8;
L_ff8a01: /* ff8a01: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff8a05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8a07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8a08: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8a0du); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8a0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8a10: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff8a13: je 0xff8a27 */
  if (zf) goto L_ff8a27;
L_ff8a15: /* ff8a15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8a16: call 0xff85e0 */
  esp -= 4; W32(esp, 0xff8a1bu); SPILL(); f_ff85e0(); if (g_unwind) return; RELOAD();
/* ff8a1b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8a1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8a1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8a20: mov eax, 0xffffff7b */
  eax = 0xffffff7bu;
/* ff8a25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8a26: ret  */
  esp += 4; SPILL(); return;
L_ff8a27: /* ff8a27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8a28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8a29: xor eax, eax */
  eax = 0;
/* ff8a2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8a2c: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8a30(void) {
  LOAD_REGS();
L_ff8a30: /* ff8a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff8a34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8a35: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* ff8a38: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8a3a: jne 0xff8a43 */
  if (!zf) goto L_ff8a43;
L_ff8a3c: /* ff8a3c: mov eax, 0xffffff7f */
  eax = 0xffffff7fu;
/* ff8a41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8a42: ret  */
  esp += 4; SPILL(); return;
L_ff8a43: /* ff8a43: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8a44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8a45: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8a47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8a48: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8a4du); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8a4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8a50: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8a51: xor ebp, ebp */
  ebp = 0;
/* ff8a53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8a55: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* ff8a58: jle 0xff8a89 */
  if ((zf || sf != of)) goto L_ff8a89;
L_ff8a5a: /* ff8a5a: lea edi, [ebx + 0x924] */
  edi = (uint32_t)(ebx + 0x924u);
L_ff8a60: /* ff8a60: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* ff8a62: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8a64: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff8a6au); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff8a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8a6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8a6c: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff8a6e: call 0xff3db0 */
  esp -= 4; W32(esp, 0xff8a73u); SPILL(); f_ff3db0(); if (g_unwind) return; RELOAD();
/* ff8a73: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8a76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8a78: jne 0xff8cc0 */
  if (!zf) goto L_ff8cc0;
L_ff8a7e: /* ff8a7e: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* ff8a81: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff8a82: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff8a85: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8a87: jl 0xff8a60 */
  if ((sf != of)) goto L_ff8a60;
L_ff8a89: /* ff8a89: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff8a8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8a8c: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8a91u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8a91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8a94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8a95: xor ebp, ebp */
  ebp = 0;
/* ff8a97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8a99: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* ff8a9c: jle 0xff8aee */
  if ((zf || sf != of)) goto L_ff8aee;
L_ff8a9e: /* ff8a9e: lea edi, [ebx + 0x424] */
  edi = (uint32_t)(ebx + 0x424u);
L_ff8aa4: /* ff8aa4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff8aa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8aa7: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8aacu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8aac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8aaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8ab1: mov dword ptr [edi - 0x100], eax */
  W32((uint32_t)(edi + 0xffffff00u), eax);
/* ff8ab7: jl 0xff8cc0 */
  if ((sf != of)) goto L_ff8cc0;
L_ff8abd: /* ff8abd: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8ac0: jge 0xff8cc0 */
  if ((sf == of)) goto L_ff8cc0;
L_ff8ac6: /* ff8ac6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff8aca: mov ecx, dword ptr [eax*4 + 0x100d0f0] */
  ecx = R32((uint32_t)(eax*4 + 0x100d0f0u));
/* ff8ad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8ad2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8ad3: call dword ptr [ecx + 4] */
  { uint32_t t = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, 0xff8ad6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8ad6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8ad9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8adb: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff8add: je 0xff8cc0 */
  if (zf) goto L_ff8cc0;
L_ff8ae3: /* ff8ae3: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ff8ae6: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff8ae7: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff8aea: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8aec: jl 0xff8aa4 */
  if ((sf != of)) goto L_ff8aa4;
L_ff8aee: /* ff8aee: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff8af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8af1: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8af6u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8af6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8af9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8afa: xor ebp, ebp */
  ebp = 0;
/* ff8afc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8afe: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* ff8b01: jle 0xff8b5a */
  if ((zf || sf != of)) goto L_ff8b5a;
L_ff8b03: /* ff8b03: lea edi, [ebx + 0x624] */
  edi = (uint32_t)(ebx + 0x624u);
/* ff8b09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff8b10: /* ff8b10: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff8b12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8b13: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8b18u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8b18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8b1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8b1d: mov dword ptr [edi - 0x100], eax */
  W32((uint32_t)(edi + 0xffffff00u), eax);
/* ff8b23: jl 0xff8cc0 */
  if ((sf != of)) goto L_ff8cc0;
L_ff8b29: /* ff8b29: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8b2c: jge 0xff8cc0 */
  if ((sf == of)) goto L_ff8cc0;
L_ff8b32: /* ff8b32: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff8b36: mov eax, dword ptr [eax*4 + 0x100d0f4] */
  eax = R32((uint32_t)(eax*4 + 0x100d0f4u));
/* ff8b3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8b3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8b3f: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xff8b42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8b42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8b45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8b47: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff8b49: je 0xff8cc0 */
  if (zf) goto L_ff8cc0;
L_ff8b4f: /* ff8b4f: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* ff8b52: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff8b53: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff8b56: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8b58: jl 0xff8b10 */
  if ((sf != of)) goto L_ff8b10;
L_ff8b5a: /* ff8b5a: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff8b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8b5d: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8b62u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8b62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8b65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8b66: xor ebp, ebp */
  ebp = 0;
/* ff8b68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8b6a: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* ff8b6d: jle 0xff8bbf */
  if ((zf || sf != of)) goto L_ff8bbf;
L_ff8b6f: /* ff8b6f: lea edi, [ebx + 0x824] */
  edi = (uint32_t)(ebx + 0x824u);
L_ff8b75: /* ff8b75: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff8b77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8b78: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8b7du); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8b7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8b80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8b82: mov dword ptr [edi - 0x100], eax */
  W32((uint32_t)(edi + 0xffffff00u), eax);
/* ff8b88: jl 0xff8cc0 */
  if ((sf != of)) goto L_ff8cc0;
L_ff8b8e: /* ff8b8e: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8b91: jge 0xff8cc0 */
  if ((sf == of)) goto L_ff8cc0;
L_ff8b97: /* ff8b97: mov edx, dword ptr [eax*4 + 0x100d0fc] */
  edx = R32((uint32_t)(eax*4 + 0x100d0fcu));
/* ff8b9e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff8ba2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8ba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8ba4: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xff8ba7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8ba7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8baa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8bac: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff8bae: je 0xff8cc0 */
  if (zf) goto L_ff8cc0;
L_ff8bb4: /* ff8bb4: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* ff8bb7: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff8bb8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff8bbb: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8bbd: jl 0xff8b75 */
  if ((sf != of)) goto L_ff8b75;
L_ff8bbf: /* ff8bbf: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff8bc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8bc2: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8bc7u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8bc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8bca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8bcb: xor ebp, ebp */
  ebp = 0;
/* ff8bcd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8bcf: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* ff8bd2: jle 0xff8c2a */
  if ((zf || sf != of)) goto L_ff8c2a;
L_ff8bd4: /* ff8bd4: lea edi, [ebx + 0x224] */
  edi = (uint32_t)(ebx + 0x224u);
/* ff8bda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff8be0: /* ff8be0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff8be2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8be3: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8be8u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8be8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8beb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8bed: mov dword ptr [edi - 0x100], eax */
  W32((uint32_t)(edi + 0xffffff00u), eax);
/* ff8bf3: jl 0xff8cc0 */
  if ((sf != of)) goto L_ff8cc0;
L_ff8bf9: /* ff8bf9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8bfc: jge 0xff8cc0 */
  if ((sf == of)) goto L_ff8cc0;
L_ff8c02: /* ff8c02: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff8c06: mov ecx, dword ptr [eax*4 + 0x100d108] */
  ecx = R32((uint32_t)(eax*4 + 0x100d108u));
/* ff8c0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8c0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8c0f: call dword ptr [ecx + 4] */
  { uint32_t t = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, 0xff8c12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff8c12: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8c15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8c17: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff8c19: je 0xff8cc0 */
  if (zf) goto L_ff8cc0;
L_ff8c1f: /* ff8c1f: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ff8c22: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff8c23: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff8c26: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8c28: jl 0xff8be0 */
  if ((sf != of)) goto L_ff8be0;
L_ff8c2a: /* ff8c2a: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff8c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8c2d: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8c32u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8c32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8c35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8c36: xor ebp, ebp */
  ebp = 0;
/* ff8c38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8c3a: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* ff8c3d: jle 0xff8cac */
  if ((zf || sf != of)) goto L_ff8cac;
L_ff8c3f: /* ff8c3f: lea edi, [ebx + 0x24] */
  edi = (uint32_t)(ebx + 0x24u);
L_ff8c42: /* ff8c42: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff8c44: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8c46: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff8c4cu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff8c4c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8c4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8c4f: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff8c51: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8c56u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8c56: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff8c58: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff8c5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8c5b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ff8c5d: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8c62u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8c62: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ff8c64: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff8c66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8c67: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* ff8c6a: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8c6fu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8c6f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff8c71: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8c73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8c74: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* ff8c77: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8c7cu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8c7c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ff8c7e: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* ff8c81: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff8c83: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* ff8c86: mov ecx, 1 */
  ecx = 0x1u;
/* ff8c8b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8c8e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8c90: jge 0xff8cc0 */
  if ((sf == of)) goto L_ff8cc0;
L_ff8c92: /* ff8c92: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8c95: jge 0xff8cc0 */
  if ((sf == of)) goto L_ff8cc0;
L_ff8c97: /* ff8c97: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* ff8c9a: cmp eax, dword ptr [ebx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8c9d: jge 0xff8cc0 */
  if ((sf == of)) goto L_ff8cc0;
L_ff8c9f: /* ff8c9f: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ff8ca2: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff8ca3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff8ca6: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8ca8: jl 0xff8c42 */
  if ((sf != of)) goto L_ff8c42;
L_ff8caa: /* ff8caa: jmp 0xff8cb1 */
  goto L_ff8cb1;
L_ff8cac: /* ff8cac: mov ecx, 1 */
  ecx = 0x1u;
L_ff8cb1: /* ff8cb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8cb2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8cb3: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8cb8u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8cb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8cbb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff8cbe: je 0xff8cd6 */
  if (zf) goto L_ff8cd6;
L_ff8cc0: /* ff8cc0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff8cc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8cc5: call 0xff86a0 */
  esp -= 4; W32(esp, 0xff8ccau); SPILL(); f_ff86a0(); if (g_unwind) return; RELOAD();
/* ff8cca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8ccd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8cce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8ccf: mov eax, 0xffffff7b */
  eax = 0xffffff7bu;
/* ff8cd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8cd5: ret  */
  esp += 4; SPILL(); return;
L_ff8cd6: /* ff8cd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8cd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8cd8: xor eax, eax */
  eax = 0;
/* ff8cda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8cdb: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8ce0(void) {
  LOAD_REGS();
L_ff8ce0: /* ff8ce0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff8ce3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8ce4: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* ff8ce8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8cea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8ceb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8cec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8ced: je 0xff8de8 */
  if (zf) goto L_ff8de8;
L_ff8cf3: /* ff8cf3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff8cf6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff8cf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8cf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8cfa: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ff8cfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8cff: call 0x1009166 */
  esp -= 4; W32(esp, 0xff8d04u); SPILL(); f_1009166(); if (g_unwind) return; RELOAD();
/* ff8d04: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* ff8d08: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8d0b: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8d10u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8d10: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8d13: xor ecx, ecx */
  ecx = 0;
/* ff8d15: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff8d19: mov ebp, eax */
  ebp = eax;
/* ff8d1b: mov word ptr [esp + 0x14], cx */
  W16((uint32_t)(esp + 0x14u), (ecx & 0xffffu));
/* ff8d20: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* ff8d24: mov edi, 6 */
  edi = 0x6u;
/* ff8d29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff8d30: /* ff8d30: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* ff8d34: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8d36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8d37: call 0x1009154 */
  esp -= 4; W32(esp, 0xff8d3cu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff8d3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8d3f: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* ff8d41: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff8d42: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ff8d43: jne 0xff8d30 */
  if (!zf) goto L_ff8d30;
L_ff8d45: /* ff8d45: mov ecx, 3 */
  ecx = 0x3u;
/* ff8d4a: mov edi, 0x100a1c0 */
  edi = 0x100a1c0u;
/* ff8d4f: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* ff8d53: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ff8d55: repe cmpsw word ptr [esi], word ptr es:[edi] */
  { uint16_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R16(esi); b = R16(edi); esi += (DF ? -2 : 2); edi += (DF ? -2 : 2); ecx--; any = 1; r = (uint16_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ff8d58: je 0xff8d67 */
  if (zf) goto L_ff8d67;
L_ff8d5a: /* ff8d5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8d5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8d5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8d5d: mov eax, 0xffffff7c */
  eax = 0xffffff7cu;
/* ff8d62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8d63: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8d66: ret  */
  esp += 4; SPILL(); return;
L_ff8d67: /* ff8d67: mov eax, ebp */
  eax = ebp;
/* ff8d69: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff8d6a: je 0xff8dc5 */
  if (zf) goto L_ff8dc5;
L_ff8d6c: /* ff8d6c: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ff8d6f: je 0xff8da1 */
  if (zf) goto L_ff8da1;
L_ff8d71: /* ff8d71: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ff8d74: jne 0xff8de8 */
  if (!zf) goto L_ff8de8;
L_ff8d76: /* ff8d76: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff8d7a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff8d7d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8d7f: je 0xff8de8 */
  if (zf) goto L_ff8de8;
L_ff8d81: /* ff8d81: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ff8d85: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ff8d88: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8d8a: je 0xff8de8 */
  if (zf) goto L_ff8de8;
L_ff8d8c: /* ff8d8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8d8d: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* ff8d91: call 0xff8a30 */
  esp -= 4; W32(esp, 0xff8d96u); SPILL(); f_ff8a30(); if (g_unwind) return; RELOAD();
/* ff8d96: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8d99: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8d9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8d9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8d9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8d9d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8da0: ret  */
  esp += 4; SPILL(); return;
L_ff8da1: /* ff8da1: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff8da5: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ff8da8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8daa: je 0xff8de8 */
  if (zf) goto L_ff8de8;
L_ff8dac: /* ff8dac: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* ff8db0: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* ff8db4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8db5: call 0xff8920 */
  esp -= 4; W32(esp, 0xff8dbau); SPILL(); f_ff8920(); if (g_unwind) return; RELOAD();
/* ff8dba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8dbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8dbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8dbf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8dc0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8dc1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8dc4: ret  */
  esp += 4; SPILL(); return;
L_ff8dc5: /* ff8dc5: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ff8dc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8dca: je 0xff8de8 */
  if (zf) goto L_ff8de8;
L_ff8dcc: /* ff8dcc: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* ff8dd0: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff8dd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8dd5: jne 0xff8de8 */
  if (!zf) goto L_ff8de8;
L_ff8dd7: /* ff8dd7: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* ff8ddb: call 0xff8850 */
  esp -= 4; W32(esp, 0xff8de0u); SPILL(); f_ff8850(); if (g_unwind) return; RELOAD();
/* ff8de0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8de1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8de2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8de3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8de4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8de7: ret  */
  esp += 4; SPILL(); return;
L_ff8de8: /* ff8de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8dea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8deb: mov eax, 0xffffff7b */
  eax = 0xffffff7bu;
/* ff8df0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8df1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8df4: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8e00(void) {
  LOAD_REGS();
L_ff8e00: /* ff8e00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8e01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8e02: mov edi, eax */
  edi = eax;
/* ff8e04: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* ff8e07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8e09: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* ff8e0d: jne 0xff8e17 */
  if (!zf) goto L_ff8e17;
L_ff8e0f: /* ff8e0f: mov eax, 0xffffff7f */
  eax = 0xffffff7fu;
/* ff8e14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8e15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff8e16: ret  */
  esp += 4; SPILL(); return;
L_ff8e17: /* ff8e17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8e18: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8e19: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8e1b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8e1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e1e: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e23u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e23: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8e26: mov ebx, 0x100a1c0 */
  ebx = 0x100a1c0u;
/* ff8e2b: mov ebp, 6 */
  ebp = 0x6u;
L_ff8e30: /* ff8e30: movsx eax, byte ptr [ebx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* ff8e33: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e37: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e3cu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e3c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8e3f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff8e40: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* ff8e41: jne 0xff8e30 */
  if (!zf) goto L_ff8e30;
L_ff8e43: /* ff8e43: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8e45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff8e47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e48: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e4du); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e4d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ff8e50: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8e53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e54: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e59u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e59: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* ff8e5c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8e5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e60: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e65u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e65: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* ff8e68: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8e6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff8e6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e6c: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e71u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e71: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* ff8e74: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8e76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8e77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e78: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e7du); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e7d: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* ff8e80: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8e82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8e83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8e84: call 0x100913c */
  esp -= 4; W32(esp, 0xff8e89u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8e89: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* ff8e8d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff8e8f: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8e92: xor ecx, ecx */
  ecx = 0;
/* ff8e94: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff8e97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff8e98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff8e99: jbe 0xff8ea8 */
  if ((cf | zf)) goto L_ff8ea8;
L_ff8e9b: /* ff8e9b: jmp 0xff8ea0 */
  goto L_ff8ea0;
L_ff8ea0: /* ff8ea0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff8ea2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff8ea3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff8ea6: ja 0xff8ea0 */
  if ((!cf && !zf)) goto L_ff8ea0;
L_ff8ea8: /* ff8ea8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff8eaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8eac: call 0x100913c */
  esp -= 4; W32(esp, 0xff8eb1u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8eb1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ff8eb4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8eb7: xor ecx, ecx */
  ecx = 0;
/* ff8eb9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff8ebc: jbe 0xff8ec8 */
  if ((cf | zf)) goto L_ff8ec8;
L_ff8ebe: /* ff8ebe: mov edi, edi */
  edi = edi;
L_ff8ec0: /* ff8ec0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff8ec2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff8ec3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff8ec6: ja 0xff8ec0 */
  if ((!cf && !zf)) goto L_ff8ec0;
L_ff8ec8: /* ff8ec8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff8eca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8ecb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8ecc: call 0x100913c */
  esp -= 4; W32(esp, 0xff8ed1u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8ed1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8ed3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8ed5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8ed6: call 0x100913c */
  esp -= 4; W32(esp, 0xff8edbu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8edb: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8ede: xor eax, eax */
  eax = 0;
/* ff8ee0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8ee1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff8ee2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8e9d(void) {
  LOAD_REGS();
L_ff8e9d: /* ff8e9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff8ea0: /* ff8ea0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff8ea2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff8ea3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff8ea6: ja 0xff8ea0 */
  if ((!cf && !zf)) goto L_ff8ea0;
L_ff8ea8: /* ff8ea8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff8eaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8eac: call 0x100913c */
  esp -= 4; W32(esp, 0xff8eb1u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8eb1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ff8eb4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8eb7: xor ecx, ecx */
  ecx = 0;
/* ff8eb9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff8ebc: jbe 0xff8ec8 */
  if ((cf | zf)) goto L_ff8ec8;
L_ff8ebe: /* ff8ebe: mov edi, edi */
  edi = edi;
L_ff8ec0: /* ff8ec0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff8ec2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff8ec3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff8ec6: ja 0xff8ec0 */
  if ((!cf && !zf)) goto L_ff8ec0;
L_ff8ec8: /* ff8ec8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff8eca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff8ecb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8ecc: call 0x100913c */
  esp -= 4; W32(esp, 0xff8ed1u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8ed1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8ed3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8ed5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8ed6: call 0x100913c */
  esp -= 4; W32(esp, 0xff8edbu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8edb: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8ede: xor eax, eax */
  eax = 0;
/* ff8ee0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8ee1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff8ee2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff8ef0(void) {
  LOAD_REGS();
L_ff8ef0: /* ff8ef0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff8ef3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff8ef4: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff8ef8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff8ef9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8efa: mov ecx, 8 */
  ecx = 0x8u;
/* ff8eff: mov esi, 0x100a1c8 */
  esi = 0x100a1c8u;
/* ff8f04: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* ff8f08: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff8f0a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* ff8f0e: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* ff8f0f: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_ff8f12: /* ff8f12: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ff8f14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff8f15: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff8f17: jne 0xff8f12 */
  if (!zf) goto L_ff8f12;
L_ff8f19: /* ff8f19: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8f1b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff8f1d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ff8f1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8f20: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ff8f24: call 0x100913c */
  esp -= 4; W32(esp, 0xff8f29u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8f29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8f2c: mov esi, 0x100a1c0 */
  esi = 0x100a1c0u;
/* ff8f31: mov edi, 6 */
  edi = 0x6u;
L_ff8f36: /* ff8f36: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* ff8f39: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8f3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8f3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8f3d: call 0x100913c */
  esp -= 4; W32(esp, 0xff8f42u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8f42: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8f45: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff8f46: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ff8f47: jne 0xff8f36 */
  if (!zf) goto L_ff8f36;
L_ff8f49: /* ff8f49: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* ff8f4d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8f4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff8f50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8f51: call 0x100913c */
  esp -= 4; W32(esp, 0xff8f56u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8f56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8f59: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8f5b: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* ff8f5f: je 0xff8f74 */
  if (zf) goto L_ff8f74;
L_ff8f61: /* ff8f61: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* ff8f64: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8f66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8f67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8f68: call 0x100913c */
  esp -= 4; W32(esp, 0xff8f6du); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8f6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8f70: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff8f71: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ff8f72: jne 0xff8f61 */
  if (!zf) goto L_ff8f61;
L_ff8f74: /* ff8f74: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff8f77: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8f7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8f7b: call 0x100913c */
  esp -= 4; W32(esp, 0xff8f80u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8f80: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff8f83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8f86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8f88: je 0xff8ff0 */
  if (zf) goto L_ff8ff0;
L_ff8f8a: /* ff8f8a: xor edi, edi */
  edi = 0;
/* ff8f8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff8f8e: jle 0xff8ff0 */
  if ((zf || sf != of)) goto L_ff8ff0;
L_ff8f90: /* ff8f90: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff8f93: cmp dword ptr [ecx + edi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff8f97: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff8f99: je 0xff8fdd */
  if (zf) goto L_ff8fdd;
L_ff8f9b: /* ff8f9b: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* ff8f9e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ff8fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8fa2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8fa3: call 0x100913c */
  esp -= 4; W32(esp, 0xff8fa8u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8fa8: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* ff8fab: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* ff8fae: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff8fb1: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* ff8fb4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8fb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff8fb9: je 0xff8fe8 */
  if (zf) goto L_ff8fe8;
L_ff8fbb: /* ff8fbb: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff8fbf: nop  */
L_ff8fc0: /* ff8fc0: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* ff8fc3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff8fc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff8fc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8fc7: call 0x100913c */
  esp -= 4; W32(esp, 0xff8fccu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8fcc: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* ff8fd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8fd3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff8fd4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff8fd5: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff8fd9: jne 0xff8fc0 */
  if (!zf) goto L_ff8fc0;
L_ff8fdb: /* ff8fdb: jmp 0xff8fe8 */
  goto L_ff8fe8;
L_ff8fdd: /* ff8fdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff8fdf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8fe0: call 0x100913c */
  esp -= 4; W32(esp, 0xff8fe5u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8fe5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff8fe8: /* ff8fe8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff8feb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff8fec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff8fee: jl 0xff8f90 */
  if ((sf != of)) goto L_ff8f90;
L_ff8ff0: /* ff8ff0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8ff2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff8ff4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff8ff5: call 0x100913c */
  esp -= 4; W32(esp, 0xff8ffau); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff8ffa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff8ffd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff8ffe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff8fff: xor eax, eax */
  eax = 0;
/* ff9001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9002: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9005: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9010(void) {
  LOAD_REGS();
L_ff9010: /* ff9010: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff9014: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff9015: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* ff9018: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff901a: jne 0xff9023 */
  if (!zf) goto L_ff9023;
L_ff901c: /* ff901c: mov eax, 0xffffff7f */
  eax = 0xffffff7fu;
/* ff9021: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9022: ret  */
  esp += 4; SPILL(); return;
L_ff9023: /* ff9023: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9024: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff9025: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff9027: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff9029: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff902a: call 0x100913c */
  esp -= 4; W32(esp, 0xff902fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff902f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9032: mov ebx, 0x100a1c0 */
  ebx = 0x100a1c0u;
/* ff9037: mov ebp, 6 */
  ebp = 0x6u;
/* ff903c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff9040: /* ff9040: movsx eax, byte ptr [ebx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* ff9043: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff9045: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9046: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9047: call 0x100913c */
  esp -= 4; W32(esp, 0xff904cu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff904c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff904f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff9050: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* ff9051: jne 0xff9040 */
  if (!zf) goto L_ff9040;
L_ff9053: /* ff9053: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* ff9056: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff9058: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff9059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff905a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff905b: call 0x100913c */
  esp -= 4; W32(esp, 0xff9060u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9060: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* ff9063: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9066: xor ebx, ebx */
  ebx = 0;
/* ff9068: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff906a: jle 0xff9092 */
  if ((zf || sf != of)) goto L_ff9092;
L_ff906c: /* ff906c: lea ebp, [edi + 0x924] */
  ebp = (uint32_t)(edi + 0x924u);
L_ff9072: /* ff9072: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff9075: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9076: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9077: call 0xff3b40 */
  esp -= 4; W32(esp, 0xff907cu); SPILL(); f_ff3b40(); if (g_unwind) return; RELOAD();
/* ff907c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff907f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff9081: jne 0xff9248 */
  if (!zf) goto L_ff9248;
L_ff9087: /* ff9087: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* ff908a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff908b: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff908e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9090: jl 0xff9072 */
  if ((sf != of)) goto L_ff9072;
L_ff9092: /* ff9092: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* ff9095: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff9097: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff9098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9099: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff909a: call 0x100913c */
  esp -= 4; W32(esp, 0xff909fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff909f: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* ff90a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff90a5: xor ebp, ebp */
  ebp = 0;
/* ff90a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff90a9: jle 0xff90dd */
  if ((zf || sf != of)) goto L_ff90dd;
L_ff90ab: /* ff90ab: lea ebx, [edi + 0x324] */
  ebx = (uint32_t)(edi + 0x324u);
L_ff90b1: /* ff90b1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff90b3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff90b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff90b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff90b7: call 0x100913c */
  esp -= 4; W32(esp, 0xff90bcu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff90bc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff90be: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* ff90c4: mov eax, dword ptr [edx*4 + 0x100d0f0] */
  eax = R32((uint32_t)(edx*4 + 0x100d0f0u));
/* ff90cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff90cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff90cd: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xff90cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff90cf: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* ff90d2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff90d5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff90d6: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff90d9: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff90db: jl 0xff90b1 */
  if ((sf != of)) goto L_ff90b1;
L_ff90dd: /* ff90dd: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* ff90e0: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff90e2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff90e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff90e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff90e5: call 0x100913c */
  esp -= 4; W32(esp, 0xff90eau); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff90ea: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* ff90ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff90f0: xor ebp, ebp */
  ebp = 0;
/* ff90f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff90f4: jle 0xff912c */
  if ((zf || sf != of)) goto L_ff912c;
L_ff90f6: /* ff90f6: lea ebx, [edi + 0x524] */
  ebx = (uint32_t)(edi + 0x524u);
/* ff90fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff9100: /* ff9100: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff9102: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9104: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9105: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9106: call 0x100913c */
  esp -= 4; W32(esp, 0xff910bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff910b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff910d: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* ff9113: mov edx, dword ptr [ecx*4 + 0x100d0f4] */
  edx = R32((uint32_t)(ecx*4 + 0x100d0f4u));
/* ff911a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff911b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff911c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xff911eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff911e: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* ff9121: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9124: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff9125: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9128: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff912a: jl 0xff9100 */
  if ((sf != of)) goto L_ff9100;
L_ff912c: /* ff912c: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* ff912f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff9131: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff9132: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9133: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9134: call 0x100913c */
  esp -= 4; W32(esp, 0xff9139u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9139: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* ff913c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff913f: xor ebp, ebp */
  ebp = 0;
/* ff9141: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9143: jle 0xff917c */
  if ((zf || sf != of)) goto L_ff917c;
L_ff9145: /* ff9145: lea ebx, [edi + 0x724] */
  ebx = (uint32_t)(edi + 0x724u);
/* ff914b: jmp 0xff9150 */
  goto L_ff9150;
L_ff9150: /* ff9150: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff9152: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9154: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9156: call 0x100913c */
  esp -= 4; W32(esp, 0xff915bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff915b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff915d: mov edx, dword ptr [ebx + 0x100] */
  edx = R32((uint32_t)(ebx + 0x100u));
/* ff9163: mov ecx, dword ptr [eax*4 + 0x100d0fc] */
  ecx = R32((uint32_t)(eax*4 + 0x100d0fcu));
/* ff916a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff916b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff916c: call dword ptr [ecx] */
  { uint32_t t = R32((uint32_t)(ecx)); esp -= 4; W32(esp, 0xff916eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff916e: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* ff9171: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9174: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff9175: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9178: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff917a: jl 0xff9150 */
  if ((sf != of)) goto L_ff9150;
L_ff917c: /* ff917c: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff917f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff9181: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff9182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9184: call 0x100913c */
  esp -= 4; W32(esp, 0xff9189u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9189: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff918c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff918f: xor ebp, ebp */
  ebp = 0;
/* ff9191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9193: jle 0xff91d1 */
  if ((zf || sf != of)) goto L_ff91d1;
L_ff9195: /* ff9195: lea ebx, [edi + 0x124] */
  ebx = (uint32_t)(edi + 0x124u);
/* ff919b: jmp 0xff91a0 */
  goto L_ff91a0;
L_ff91a0: /* ff91a0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff91a2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff91a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff91a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91a6: call 0x100913c */
  esp -= 4; W32(esp, 0xff91abu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91ab: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff91ad: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* ff91b3: mov eax, dword ptr [edx*4 + 0x100d108] */
  eax = R32((uint32_t)(edx*4 + 0x100d108u));
/* ff91ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff91be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff91c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff91c1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xff91c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff91c3: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff91c6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff91c9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff91ca: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff91cd: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff91cf: jl 0xff91a0 */
  if ((sf != of)) goto L_ff91a0;
L_ff91d1: /* ff91d1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff91d4: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff91d6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff91d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff91d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91d9: call 0x100913c */
  esp -= 4; W32(esp, 0xff91deu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91de: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff91e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff91e4: xor ebp, ebp */
  ebp = 0;
/* ff91e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff91e8: jle 0xff9235 */
  if ((zf || sf != of)) goto L_ff9235;
L_ff91ea: /* ff91ea: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* ff91ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff91f0: /* ff91f0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff91f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff91f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff91f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff91f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91f8: call 0x100913c */
  esp -= 4; W32(esp, 0xff91fdu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91fd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff91ff: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff9202: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9205: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9206: call 0x100913c */
  esp -= 4; W32(esp, 0xff920bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff920b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff920d: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ff9210: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9214: call 0x100913c */
  esp -= 4; W32(esp, 0xff9219u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9219: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff921b: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ff921e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff9220: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9222: call 0x100913c */
  esp -= 4; W32(esp, 0xff9227u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9227: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff922a: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff922d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff922e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9231: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9233: jl 0xff91f0 */
  if ((sf != of)) goto L_ff91f0;
L_ff9235: /* ff9235: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff9237: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff9239: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff923a: call 0x100913c */
  esp -= 4; W32(esp, 0xff923fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff923f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9243: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9244: xor eax, eax */
  eax = 0;
/* ff9246: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9247: ret  */
  esp += 4; SPILL(); return;
L_ff9248: /* ff9248: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9249: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff924a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff924d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff924e: ret  */
  esp += 4; SPILL(); return;
}

void f_ff914d(void) {
  LOAD_REGS();
L_ff914d: /* ff914d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff9150: /* ff9150: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff9152: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9154: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9156: call 0x100913c */
  esp -= 4; W32(esp, 0xff915bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff915b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff915d: mov edx, dword ptr [ebx + 0x100] */
  edx = R32((uint32_t)(ebx + 0x100u));
/* ff9163: mov ecx, dword ptr [eax*4 + 0x100d0fc] */
  ecx = R32((uint32_t)(eax*4 + 0x100d0fcu));
/* ff916a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff916b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff916c: call dword ptr [ecx] */
  { uint32_t t = R32((uint32_t)(ecx)); esp -= 4; W32(esp, 0xff916eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff916e: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* ff9171: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9174: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff9175: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9178: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff917a: jl 0xff9150 */
  if ((sf != of)) goto L_ff9150;
L_ff917c: /* ff917c: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff917f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff9181: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff9182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9184: call 0x100913c */
  esp -= 4; W32(esp, 0xff9189u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9189: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff918c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff918f: xor ebp, ebp */
  ebp = 0;
/* ff9191: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9193: jle 0xff91d1 */
  if ((zf || sf != of)) goto L_ff91d1;
L_ff9195: /* ff9195: lea ebx, [edi + 0x124] */
  ebx = (uint32_t)(edi + 0x124u);
/* ff919b: jmp 0xff91a0 */
  goto L_ff91a0;
L_ff91a0: /* ff91a0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff91a2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff91a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff91a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91a6: call 0x100913c */
  esp -= 4; W32(esp, 0xff91abu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91ab: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff91ad: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* ff91b3: mov eax, dword ptr [edx*4 + 0x100d108] */
  eax = R32((uint32_t)(edx*4 + 0x100d108u));
/* ff91ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff91be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff91c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff91c1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xff91c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff91c3: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff91c6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff91c9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff91ca: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff91cd: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff91cf: jl 0xff91a0 */
  if ((sf != of)) goto L_ff91a0;
L_ff91d1: /* ff91d1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff91d4: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff91d6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff91d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff91d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91d9: call 0x100913c */
  esp -= 4; W32(esp, 0xff91deu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91de: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff91e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff91e4: xor ebp, ebp */
  ebp = 0;
/* ff91e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff91e8: jle 0xff9235 */
  if ((zf || sf != of)) goto L_ff9235;
L_ff91ea: /* ff91ea: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* ff91ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff91f0: /* ff91f0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff91f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff91f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff91f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff91f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91f8: call 0x100913c */
  esp -= 4; W32(esp, 0xff91fdu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91fd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff91ff: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff9202: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9205: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9206: call 0x100913c */
  esp -= 4; W32(esp, 0xff920bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff920b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff920d: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ff9210: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9214: call 0x100913c */
  esp -= 4; W32(esp, 0xff9219u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9219: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff921b: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ff921e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff9220: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9222: call 0x100913c */
  esp -= 4; W32(esp, 0xff9227u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9227: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff922a: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff922d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff922e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9231: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9233: jl 0xff91f0 */
  if ((sf != of)) goto L_ff91f0;
L_ff9235: /* ff9235: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff9237: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff9239: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff923a: call 0x100913c */
  esp -= 4; W32(esp, 0xff923fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff923f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9243: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9244: xor eax, eax */
  eax = 0;
/* ff9246: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9247: ret  */
  esp += 4; SPILL(); return;
}

void f_ff919d(void) {
  LOAD_REGS();
L_ff919d: /* ff919d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff91a0: /* ff91a0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff91a2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff91a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff91a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91a6: call 0x100913c */
  esp -= 4; W32(esp, 0xff91abu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91ab: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff91ad: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* ff91b3: mov eax, dword ptr [edx*4 + 0x100d108] */
  eax = R32((uint32_t)(edx*4 + 0x100d108u));
/* ff91ba: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff91be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff91c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff91c1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xff91c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff91c3: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff91c6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff91c9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff91ca: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff91cd: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff91cf: jl 0xff91a0 */
  if ((sf != of)) goto L_ff91a0;
L_ff91d1: /* ff91d1: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff91d4: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff91d6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff91d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff91d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91d9: call 0x100913c */
  esp -= 4; W32(esp, 0xff91deu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91de: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff91e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff91e4: xor ebp, ebp */
  ebp = 0;
/* ff91e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff91e8: jle 0xff9235 */
  if ((zf || sf != of)) goto L_ff9235;
L_ff91ea: /* ff91ea: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* ff91ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff91f0: /* ff91f0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff91f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff91f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff91f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff91f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff91f8: call 0x100913c */
  esp -= 4; W32(esp, 0xff91fdu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff91fd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff91ff: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff9202: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9205: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9206: call 0x100913c */
  esp -= 4; W32(esp, 0xff920bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff920b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff920d: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ff9210: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff9212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9214: call 0x100913c */
  esp -= 4; W32(esp, 0xff9219u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9219: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff921b: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ff921e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff9220: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9222: call 0x100913c */
  esp -= 4; W32(esp, 0xff9227u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff9227: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff922a: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff922d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff922e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9231: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9233: jl 0xff91f0 */
  if ((sf != of)) goto L_ff91f0;
L_ff9235: /* ff9235: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff9237: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff9239: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff923a: call 0x100913c */
  esp -= 4; W32(esp, 0xff923fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff923f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9243: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9244: xor eax, eax */
  eax = 0;
/* ff9246: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9247: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9250(void) {
  LOAD_REGS();
L_ff9250: /* ff9250: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9253: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* ff9257: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9258: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9259: call 0x1009148 */
  esp -= 4; W32(esp, 0xff925eu); SPILL(); f_1009148(); if (g_unwind) return; RELOAD();
/* ff925e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ff9262: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9263: lea ebx, [esp + 0xc] */
  ebx = (uint32_t)(esp + 0xcu);
/* ff9267: call 0xff8ef0 */
  esp -= 4; W32(esp, 0xff926cu); SPILL(); f_ff8ef0(); if (g_unwind) return; RELOAD();
/* ff926c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff926f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff9271: je 0xff927d */
  if (zf) goto L_ff927d;
L_ff9273: /* ff9273: mov eax, 0xffffff7e */
  eax = 0xffffff7eu;
/* ff9278: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9279: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff927c: ret  */
  esp += 4; SPILL(); return;
L_ff927d: /* ff927d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff927e: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* ff9282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff9283: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9284: call 0x1009130 */
  esp -= 4; W32(esp, 0xff9289u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff9289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff928a: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff9290u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff9290: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* ff9294: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* ff9296: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* ff929a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff929b: call 0x1009130 */
  esp -= 4; W32(esp, 0xff92a0u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff92a0: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* ff92a4: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* ff92a6: mov ecx, eax */
  ecx = eax;
/* ff92a8: mov edx, ecx */
  edx = ecx;
/* ff92aa: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff92ad: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff92af: mov ecx, edx */
  ecx = edx;
/* ff92b1: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* ff92b5: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff92b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff92b9: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ff92bb: call 0x1009130 */
  esp -= 4; W32(esp, 0xff92c0u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff92c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff92c3: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* ff92c6: xor eax, eax */
  eax = 0;
/* ff92c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff92c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff92ca: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* ff92cd: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* ff92d0: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* ff92d3: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* ff92d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff92d7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff92da: ret  */
  esp += 4; SPILL(); return;
}

void f_ff92e0(void) {
  LOAD_REGS();
L_ff92e0: /* ff92e0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff92e3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff92e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff92e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff92e9: mov ebp, dword ptr [eax + 0x68] */
  ebp = R32((uint32_t)(eax + 0x68u));
/* ff92ec: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff92ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff92ef: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* ff92f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff92f3: mov dword ptr [esp + 0x10], 0xffffff7e */
  W32((uint32_t)(esp + 0x10u), 0xffffff7eu);
/* ff92fb: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* ff92ff: jne 0xff937f */
  if (!zf) goto L_ff937f;
L_ff9301: /* ff9301: mov dword ptr [esp + 0x10], 0xffffff7f */
  W32((uint32_t)(esp + 0x10u), 0xffffff7fu);
L_ff9309: /* ff9309: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
L_ff930d: /* ff930d: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
L_ff9311: /* ff9311: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* ff9315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9316: call 0x100914e */
  esp -= 4; W32(esp, 0xff931bu); SPILL(); f_100914e(); if (g_unwind) return; RELOAD();
/* ff931b: mov esi, dword ptr [0x100a040] */
  esi = R32((uint32_t)(0x100a040u));
/* ff9321: xor eax, eax */
  eax = 0;
/* ff9323: mov ecx, 8 */
  ecx = 0x8u;
/* ff9328: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff932a: mov ecx, 8 */
  ecx = 0x8u;
/* ff932f: mov edi, ebx */
  edi = ebx;
/* ff9331: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff9333: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* ff9337: mov ecx, 8 */
  ecx = 0x8u;
/* ff933c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff933e: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* ff9341: xor edi, edi */
  edi = 0;
/* ff9343: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9346: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9348: je 0xff9350 */
  if (zf) goto L_ff9350;
L_ff934a: /* ff934a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff934b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff934du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff934d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff9350: /* ff9350: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* ff9353: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9355: je 0xff935d */
  if (zf) goto L_ff935d;
L_ff9357: /* ff9357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9358: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff935au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff935a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff935d: /* ff935d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* ff9360: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9362: je 0xff936a */
  if (zf) goto L_ff936a;
L_ff9364: /* ff9364: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9365: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff9367u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff9367: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff936a: /* ff936a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff936e: mov dword ptr [ebp + 0x20], edi */
  W32((uint32_t)(ebp + 0x20u), edi);
/* ff9371: mov dword ptr [ebp + 0x24], edi */
  W32((uint32_t)(ebp + 0x24u), edi);
/* ff9374: mov dword ptr [ebp + 0x28], edi */
  W32((uint32_t)(ebp + 0x28u), edi);
/* ff9377: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9378: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff9379: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff937a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff937b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff937e: ret  */
  esp += 4; SPILL(); return;
L_ff937f: /* ff937f: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* ff9383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9384: call 0x1009148 */
  esp -= 4; W32(esp, 0xff9389u); SPILL(); f_1009148(); if (g_unwind) return; RELOAD();
/* ff9389: mov eax, esi */
  eax = esi;
/* ff938b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff938e: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* ff9392: call 0xff8e00 */
  esp -= 4; W32(esp, 0xff9397u); SPILL(); f_ff8e00(); if (g_unwind) return; RELOAD();
/* ff9397: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff9399: jne 0xff9309 */
  if (!zf) goto L_ff9309;
L_ff939f: /* ff939f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* ff93a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff93a4: je 0xff93b0 */
  if (zf) goto L_ff93b0;
L_ff93a6: /* ff93a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff93a7: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff93adu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff93ad: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff93b0: /* ff93b0: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* ff93b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff93b5: call 0x1009130 */
  esp -= 4; W32(esp, 0xff93bau); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff93ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff93bb: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff93c1u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff93c1: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* ff93c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff93c6: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* ff93c9: call 0x1009130 */
  esp -= 4; W32(esp, 0xff93ceu); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff93ce: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* ff93d1: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* ff93d5: mov ecx, eax */
  ecx = eax;
/* ff93d7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff93da: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff93dc: mov ecx, eax */
  ecx = eax;
/* ff93de: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff93e1: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ff93e3: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* ff93e6: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* ff93ea: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ff93ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff93ef: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* ff93f1: call 0x1009130 */
  esp -= 4; W32(esp, 0xff93f6u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff93f6: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* ff93f9: xor eax, eax */
  eax = 0;
/* ff93fb: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* ff93fe: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* ff9401: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* ff9404: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* ff9408: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9409: mov dword ptr [edi + 8], 1 */
  W32((uint32_t)(edi + 0x8u), 0x1u);
/* ff9410: call 0x1009142 */
  esp -= 4; W32(esp, 0xff9415u); SPILL(); f_1009142(); if (g_unwind) return; RELOAD();
/* ff9415: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* ff9419: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff941a: lea ebx, [esp + 0x2c] */
  ebx = (uint32_t)(esp + 0x2cu);
/* ff941e: call 0xff8ef0 */
  esp -= 4; W32(esp, 0xff9423u); SPILL(); f_ff8ef0(); if (g_unwind) return; RELOAD();
/* ff9423: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9426: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff9428: jne 0xff953c */
  if (!zf) goto L_ff953c;
L_ff942e: /* ff942e: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* ff9431: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff9433: je 0xff943f */
  if (zf) goto L_ff943f;
L_ff9435: /* ff9435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9436: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff943cu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff943c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff943f: /* ff943f: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* ff9443: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9444: call 0x1009130 */
  esp -= 4; W32(esp, 0xff9449u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff9449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff944a: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff9450u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff9450: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* ff9453: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* ff9457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9458: call 0x1009130 */
  esp -= 4; W32(esp, 0xff945du); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff945d: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* ff9460: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* ff9464: mov ebx, dword ptr [esp + 0x44] */
  ebx = R32((uint32_t)(esp + 0x44u));
/* ff9468: mov ecx, eax */
  ecx = eax;
/* ff946a: mov edx, ecx */
  edx = ecx;
/* ff946c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff946f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff9471: mov ecx, edx */
  ecx = edx;
/* ff9473: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff9476: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ff9478: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* ff947b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* ff947f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9480: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* ff9482: call 0x1009130 */
  esp -= 4; W32(esp, 0xff9487u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff9487: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* ff948a: xor eax, eax */
  eax = 0;
/* ff948c: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* ff9490: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9491: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* ff9494: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* ff9497: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* ff949a: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* ff949d: call 0x1009142 */
  esp -= 4; W32(esp, 0xff94a2u); SPILL(); f_1009142(); if (g_unwind) return; RELOAD();
/* ff94a2: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* ff94a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff94a7: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* ff94ab: call 0xff9010 */
  esp -= 4; W32(esp, 0xff94b0u); SPILL(); f_ff9010(); if (g_unwind) return; RELOAD();
/* ff94b0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff94b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff94b5: jne 0xff930d */
  if (!zf) goto L_ff930d;
L_ff94bb: /* ff94bb: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* ff94be: xor ebx, ebx */
  ebx = 0;
/* ff94c0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff94c2: je 0xff94ce */
  if (zf) goto L_ff94ce;
L_ff94c4: /* ff94c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff94c5: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff94cbu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff94cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff94ce: /* ff94ce: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* ff94d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff94d3: call 0x1009130 */
  esp -= 4; W32(esp, 0xff94d8u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff94d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff94d9: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff94dfu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff94df: mov dword ptr [ebp + 0x28], eax */
  W32((uint32_t)(ebp + 0x28u), eax);
/* ff94e2: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* ff94e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff94e7: call 0x1009130 */
  esp -= 4; W32(esp, 0xff94ecu); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff94ec: mov edi, dword ptr [ebp + 0x28] */
  edi = R32((uint32_t)(ebp + 0x28u));
/* ff94ef: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* ff94f3: mov ecx, eax */
  ecx = eax;
/* ff94f5: mov edx, ecx */
  edx = ecx;
/* ff94f7: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff94fa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff94fc: mov ecx, edx */
  ecx = edx;
/* ff94fe: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff9501: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ff9503: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* ff9506: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* ff950a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* ff950e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff950f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff9511: call 0x1009130 */
  esp -= 4; W32(esp, 0xff9516u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff9516: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* ff951a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff951b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff951e: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* ff9521: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* ff9524: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* ff9527: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* ff952a: call 0x100914e */
  esp -= 4; W32(esp, 0xff952fu); SPILL(); f_100914e(); if (g_unwind) return; RELOAD();
/* ff952f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9532: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9533: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff9534: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9535: xor eax, eax */
  eax = 0;
/* ff9537: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9538: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff953b: ret  */
  esp += 4; SPILL(); return;
L_ff953c: /* ff953c: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* ff9540: jmp 0xff9311 */
  goto L_ff9311;
}

void f_ff9550(void) {
  LOAD_REGS();
L_ff9550: /* ff9550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff9551: mov ebp, esp */
  ebp = esp;
/* ff9553: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9556: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9557: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9558: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff9559: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ff955c: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* ff9563: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ff9566: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9569: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff956c: call 0x1009200 */
  esp -= 4; W32(esp, 0xff9571u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff9571: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff9572: xor edx, edx */
  edx = 0;
/* ff9574: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9576: mov eax, esp */
  eax = esp;
/* ff9578: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* ff957b: je 0xff962a */
  if (zf) goto L_ff962a;
L_ff9581: /* ff9581: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* ff9584: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ff9587: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff9589: lea ecx, [ebx + edi*4 + 8] */
  ecx = (uint32_t)(ebx + edi*4 + 0x8u);
/* ff958d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff9590: /* ff9590: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff9591: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff9592: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff9595: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9598: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ff959b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* ff959e: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* ff95a1: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* ff95a4: mov edx, edi */
  edx = edi;
/* ff95a6: jl 0xff95f7 */
  if ((sf != of)) goto L_ff95f7;
L_ff95a8: /* ff95a8: mov eax, ecx */
  eax = ecx;
/* ff95aa: lea esi, [edi + 3] */
  esi = (uint32_t)(edi + 0x3u);
/* ff95ad: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
L_ff95b0: /* ff95b0: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* ff95b3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff95b6: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ff95b9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff95bc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff95bf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff95c2: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff95c5: fadd qword ptr [ebp - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe8u)));
/* ff95c8: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ff95cb: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* ff95ce: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ff95d1: fadd qword ptr [ebp - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe8u)));
/* ff95d4: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ff95d7: fld dword ptr [ecx - 0x10] */
  { double v = F32((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* ff95da: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* ff95dd: fadd qword ptr [ebp - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe8u)));
/* ff95e0: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ff95e3: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ff95e6: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff95e9: fadd qword ptr [ebp - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe8u)));
/* ff95ec: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ff95ef: jl 0xff95b0 */
  if ((sf != of)) goto L_ff95b0;
L_ff95f1: /* ff95f1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff95f4: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
L_ff95f7: /* ff95f7: cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff95fa: jge 0xff9617 */
  if ((sf == of)) goto L_ff9617;
L_ff95fc: /* ff95fc: mov eax, edx */
  eax = edx;
/* ff95fe: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff9600: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
L_ff9603: /* ff9603: fld dword ptr [ebx + edx*4] */
  { double v = F32((uint32_t)(ebx + edx*4)); FPUSH(v); }
/* ff9606: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff9607: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ff9609: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff960c: cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff960f: fadd qword ptr [ebp - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe8u)));
/* ff9612: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ff9615: jl 0xff9603 */
  if ((sf != of)) goto L_ff9603;
L_ff9617: /* ff9617: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ff961a: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff961d: xor edx, edx */
  edx = 0;
/* ff961f: fstp dword ptr [eax + edi*4] */
  WF32((uint32_t)(eax + edi*4), ST0); FPOP();
/* ff9622: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9624: jne 0xff9590 */
  if (!zf) goto L_ff9590;
L_ff962a: /* ff962a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ff962c: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* ff962f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ff9632: xor esi, esi */
  esi = 0;
/* ff9634: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9636: jle 0xff9770 */
  if ((zf || sf != of)) goto L_ff9770;
L_ff963c: /* ff963c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ff963f: lea ecx, [eax - 8] */
  ecx = (uint32_t)(eax + 0xfffffff8u);
/* ff9642: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* ff9645: jmp 0xff9650 */
  goto L_ff9650;
L_ff9647: /* ff9647: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff964a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff9650: /* ff9650: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* ff9653: fchs  */
  ST0 = -ST0;
/* ff9655: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff9658: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff965b: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ff9661: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9663: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff9666: jnp 0xff977d */
  if (!pf) goto L_ff977d;
L_ff966c: /* ff966c: xor edx, edx */
  edx = 0;
/* ff966e: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9671: jl 0xff96bb */
  if ((sf != of)) goto L_ff96bb;
L_ff9673: /* ff9673: mov ebx, 3 */
  ebx = 0x3u;
/* ff9678: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
L_ff967b: /* ff967b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ff967e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9681: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ff9684: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff9687: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff968a: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff968d: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff968f: fsubr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) - ST0;
/* ff9692: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff9695: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* ff9698: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* ff969b: fsubr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) - ST0;
/* ff969e: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff96a1: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ff96a4: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* ff96a7: fsubr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) - ST0;
/* ff96aa: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff96ad: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* ff96b0: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff96b3: fsubr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) - ST0;
/* ff96b6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff96b9: jl 0xff967b */
  if ((sf != of)) goto L_ff967b;
L_ff96bb: /* ff96bb: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff96bd: jge 0xff96e3 */
  if ((sf == of)) goto L_ff96e3;
L_ff96bf: /* ff96bf: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff96c2: mov eax, esi */
  eax = esi;
/* ff96c4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff96c6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ff96c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff96d0: /* ff96d0: fld dword ptr [edi + edx*4] */
  { double v = F32((uint32_t)(edi + edx*4)); FPUSH(v); }
/* ff96d3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff96d4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ff96d6: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff96d9: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff96db: fsubr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) - ST0;
/* ff96de: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff96e1: jl 0xff96d0 */
  if ((sf != of)) goto L_ff96d0;
L_ff96e3: /* ff96e3: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff96e6: mov eax, esi */
  eax = esi;
/* ff96e8: fdiv dword ptr [ebp - 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff96eb: xor ecx, ecx */
  ecx = 0;
/* ff96ed: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff96f0: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff96f3: mov dword ptr [edi + esi*4], edx */
  W32((uint32_t)(edi + esi*4), edx);
/* ff96f6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff96f7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff96f9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff96fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff96fd: jle 0xff972a */
  if ((zf || sf != of)) goto L_ff972a;
L_ff96ff: /* ff96ff: lea edx, [edi + esi*4 - 4] */
  edx = (uint32_t)(edi + esi*4 + 0xfffffffcu);
L_ff9703: /* ff9703: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff9706: mov ebx, dword ptr [edi + ecx*4] */
  ebx = R32((uint32_t)(edi + ecx*4));
/* ff9709: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* ff970b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ff970e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff970f: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff9712: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9714: fadd dword ptr [edi + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + ecx*4 + 0xfffffffcu)));
/* ff9718: fstp dword ptr [edi + ecx*4 - 4] */
  WF32((uint32_t)(edi + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* ff971c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ff971f: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff9722: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* ff9725: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* ff9728: jl 0xff9703 */
  if ((sf != of)) goto L_ff9703;
L_ff972a: /* ff972a: mov eax, esi */
  eax = esi;
/* ff972c: and eax, 0x80000001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ff9731: jns 0xff9738 */
  if (!sf) goto L_ff9738;
L_ff9733: /* ff9733: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff9734: or eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff9737: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_ff9738: /* ff9738: je 0xff9749 */
  if (zf) goto L_ff9749;
L_ff973a: /* ff973a: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff973d: fadd dword ptr [0x100a0c8] */
  ST0 = ST0 + (F32((uint32_t)(0x100a0c8u)));
/* ff9743: fmul dword ptr [edi + ecx*4] */
  ST0 = ST0 * (F32((uint32_t)(edi + ecx*4)));
/* ff9746: fstp dword ptr [edi + ecx*4] */
  WF32((uint32_t)(edi + ecx*4), ST0); FPOP();
L_ff9749: /* ff9749: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff974c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff974f: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff9752: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ff9755: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff9756: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff9759: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff975b: fsubr dword ptr [0x100a0c8] */
  ST0 = (F32((uint32_t)(0x100a0c8u))) - ST0;
/* ff9761: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* ff9764: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff9767: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ff976a: jl 0xff9647 */
  if ((sf != of)) goto L_ff9647;
L_ff9770: /* ff9770: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff9773: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff9776: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff9778: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9779: mov esp, ebp */
  esp = ebp;
/* ff977b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff977c: ret  */
  esp += 4; SPILL(); return;
L_ff977d: /* ff977d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff9780: fld dword ptr [0x100a0c4] */
  { double v = F32((uint32_t)(0x100a0c4u)); FPUSH(v); }
/* ff9786: mov edx, ecx */
  edx = ecx;
/* ff9788: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff978b: xor eax, eax */
  eax = 0;
/* ff978d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff978f: mov ecx, edx */
  ecx = edx;
/* ff9791: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff9794: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff9796: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff9799: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff979a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff979b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff979c: mov esp, ebp */
  esp = ebp;
/* ff979e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff979f: ret  */
  esp += 4; SPILL(); return;
}

void f_ff97a0(void) {
  LOAD_REGS();
L_ff97a0: /* ff97a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff97a1: mov ebp, esp */
  ebp = esp;
/* ff97a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff97a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff97a5: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* ff97a8: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ff97ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff97ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff97ad: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* ff97b0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ff97b3: lea eax, [edi*8] */
  eax = (uint32_t)(edi*8);
/* ff97ba: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff97bd: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff97c0: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* ff97c3: call 0x1009200 */
  esp -= 4; W32(esp, 0xff97c8u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff97c8: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* ff97cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff97ce: xor edx, edx */
  edx = 0;
/* ff97d0: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ff97d3: xor eax, eax */
  eax = 0;
/* ff97d5: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff97d7: fld dword ptr [0x100a1ac] */
  { double v = F32((uint32_t)(0x100a1acu)); FPUSH(v); }
/* ff97dd: fdiv dword ptr [ebp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x10u)));
/* ff97e0: mov esi, esp */
  esi = esp;
/* ff97e2: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ff97e5: jle 0xff97fb */
  if ((zf || sf != of)) goto L_ff97fb;
L_ff97e7: /* ff97e7: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* ff97ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff97eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff97ed: fmul dword ptr [ecx + eax*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4 + 0xfffffffcu)));
/* ff97f1: mov dword ptr [esi + eax*8 - 4], edx */
  W32((uint32_t)(esi + eax*8 + 0xfffffffcu), edx);
/* ff97f5: fstp dword ptr [esi + eax*8 - 8] */
  WF32((uint32_t)(esi + eax*8 + 0xfffffff8u), ST0); FPOP();
/* ff97f9: jl 0xff97e7 */
  if ((sf != of)) goto L_ff97e7;
L_ff97fb: /* ff97fb: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* ff97fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff97ff: fmul dword ptr [ecx + edi*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + edi*4 + 0xfffffffcu)));
/* ff9803: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9804: fstp dword ptr [esi + edi*8 - 4] */
  WF32((uint32_t)(esi + edi*8 + 0xfffffffcu), ST0); FPOP();
/* ff9808: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff980a: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* ff980d: call 0x1008b00 */
  esp -= 4; W32(esp, 0xff9812u); SPILL(); f_1008b00(); if (g_unwind) return; RELOAD();
/* ff9812: mov eax, edi */
  eax = edi;
/* ff9814: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff9815: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff9817: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff9819: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff981c: xor ecx, ecx */
  ecx = 0;
/* ff981e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9820: jle 0xff983a */
  if ((zf || sf != of)) goto L_ff983a;
L_ff9822: /* ff9822: lea edx, [esi + eax*4] */
  edx = (uint32_t)(esi + eax*4);
L_ff9825: /* ff9825: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* ff9827: mov edi, dword ptr [esi + ecx*4] */
  edi = R32((uint32_t)(esi + ecx*4));
/* ff982a: mov dword ptr [esi + ecx*4], ebx */
  W32((uint32_t)(esi + ecx*4), ebx);
/* ff982d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff982e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* ff9830: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff9833: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9835: jl 0xff9825 */
  if ((sf != of)) goto L_ff9825;
L_ff9837: /* ff9837: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_ff983a: /* ff983a: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff983d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ff9840: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9841: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff9842: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9843: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9844: call 0xff9550 */
  esp -= 4; W32(esp, 0xff9849u); SPILL(); f_ff9550(); if (g_unwind) return; RELOAD();
/* ff9849: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff984c: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff984f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff9851: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9852: mov esp, ebp */
  esp = ebp;
/* ff9854: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9855: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9860(void) {
  LOAD_REGS();
L_ff9860: /* ff9860: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff9864: xor ecx, ecx */
  ecx = 0;
/* ff9866: mov edx, eax */
  edx = eax;
/* ff9868: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* ff986a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* ff986d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* ff9870: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* ff9873: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* ff9876: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ff987a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ff987e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* ff9881: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff9883: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9884: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9885: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* ff9888: call 0x1008b30 */
  esp -= 4; W32(esp, 0xff988du); SPILL(); f_1008b30(); if (g_unwind) return; RELOAD();
/* ff988d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9890: ret  */
  esp += 4; SPILL(); return;
}

void f_ff98a0(void) {
  LOAD_REGS();
L_ff98a0: /* ff98a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff98a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff98a6: je 0xff98b1 */
  if (zf) goto L_ff98b1;
L_ff98a8: /* ff98a8: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* ff98ac: jmp 0x1008b80 */
  SPILL(); f_1008b80(); return;
L_ff98b1: /* ff98b1: ret  */
  esp += 4; SPILL(); return;
}

void f_ff98c0(void) {
  LOAD_REGS();
L_ff98c0: /* ff98c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff98c1: mov ebp, esp */
  ebp = esp;
/* ff98c3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff98c6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ff98c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff98ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff98cb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* ff98ce: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff98d0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff98d3: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff98d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff98d7: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff98da: call 0x1009200 */
  esp -= 4; W32(esp, 0xff98dfu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff98df: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ff98e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff98e4: mov ebx, esp */
  ebx = esp;
/* ff98e6: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* ff98e9: jne 0xff98f9 */
  if (!zf) goto L_ff98f9;
L_ff98eb: /* ff98eb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff98ed: jle 0xff990e */
  if ((zf || sf != of)) goto L_ff990e;
L_ff98ef: /* ff98ef: mov ecx, esi */
  ecx = esi;
/* ff98f1: xor eax, eax */
  eax = 0;
/* ff98f3: mov edi, ebx */
  edi = ebx;
/* ff98f5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff98f7: jmp 0xff990e */
  goto L_ff990e;
L_ff98f9: /* ff98f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff98fb: jle 0xff990e */
  if ((zf || sf != of)) goto L_ff990e;
L_ff98fd: /* ff98fd: mov eax, ebx */
  eax = ebx;
/* ff98ff: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff9901: mov edx, esi */
  edx = esi;
L_ff9903: /* ff9903: mov edi, dword ptr [ecx + eax] */
  edi = R32((uint32_t)(ecx + eax));
/* ff9906: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ff9908: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff990b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* ff990c: jne 0xff9903 */
  if (!zf) goto L_ff9903;
L_ff990e: /* ff990e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ff9911: xor ecx, ecx */
  ecx = 0;
/* ff9913: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9915: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* ff9918: jle 0xff99e9 */
  if ((zf || sf != of)) goto L_ff99e9;
L_ff991e: /* ff991e: lea eax, [ebx + 8] */
  eax = (uint32_t)(ebx + 0x8u);
/* ff9921: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_ff9924: /* ff9924: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9927: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* ff992e: mov edx, ecx */
  edx = ecx;
/* ff9930: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* ff9933: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* ff993a: jl 0xff99a0 */
  if ((sf != of)) goto L_ff99a0;
L_ff993c: /* ff993c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff993f: mov edi, 3 */
  edi = 0x3u;
/* ff9944: lea ecx, [ecx + esi*4 - 8] */
  ecx = (uint32_t)(ecx + esi*4 + 0xfffffff8u);
L_ff9948: /* ff9948: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* ff994b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* ff994e: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ff9951: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff9954: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* ff9957: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff995a: fsubr dword ptr [ebp + 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0x10u))) - ST0;
/* ff995d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff9960: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff9963: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff9966: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ff9969: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff996c: fld dword ptr [eax - 0x14] */
  { double v = F32((uint32_t)(eax + 0xffffffecu)); FPUSH(v); }
/* ff996f: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff9972: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9974: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* ff9977: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ff997a: fsubr dword ptr [ebp + 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0x10u))) - ST0;
/* ff997d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ff9980: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* ff9983: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* ff9986: fsubr dword ptr [ebp + 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0x10u))) - ST0;
/* ff9989: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ff998c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ff998f: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff9992: fsubr dword ptr [ebp + 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0x10u))) - ST0;
/* ff9995: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ff9998: jl 0xff9948 */
  if ((sf != of)) goto L_ff9948;
L_ff999a: /* ff999a: mov ebx, dword ptr [ebp - 0x10] */
  ebx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff999d: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_ff99a0: /* ff99a0: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff99a3: jge 0xff99c5 */
  if ((sf == of)) goto L_ff99c5;
L_ff99a5: /* ff99a5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff99a8: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff99ab: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* ff99ae: mov eax, esi */
  eax = esi;
/* ff99b0: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_ff99b3: /* ff99b3: fld dword ptr [ebx + edx*4] */
  { double v = F32((uint32_t)(ebx + edx*4)); FPUSH(v); }
/* ff99b6: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff99b9: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* ff99bb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff99bc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff99bd: fsubr dword ptr [ebp + 0x10] */
  ST0 = (F32((uint32_t)(ebp + 0x10u))) - ST0;
/* ff99c0: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ff99c3: jne 0xff99b3 */
  if (!zf) goto L_ff99b3;
L_ff99c5: /* ff99c5: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff99c8: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
/* ff99cb: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ff99ce: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* ff99d1: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff99d4: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* ff99d7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff99d8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff99db: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff99dd: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* ff99e0: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* ff99e3: jl 0xff9924 */
  if ((sf != of)) goto L_ff9924;
L_ff99e9: /* ff99e9: lea esp, [ebp - 0x1c] */
  esp = (uint32_t)(ebp + 0xffffffe4u);
/* ff99ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff99ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff99ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff99ef: mov esp, ebp */
  esp = ebp;
/* ff99f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff99f2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9a00(void) {
  LOAD_REGS();
L_ff9a00: /* ff9a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff9a01: mov ebp, esp */
  ebp = esp;
/* ff9a03: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ff9a06: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9a09: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* ff9a0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9a0d: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* ff9a10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9a11: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ff9a15: xor esi, esi */
  esi = 0;
/* ff9a17: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9a19: fld dword ptr [0x100a168] */
  { double v = F32((uint32_t)(0x100a168u)); FPUSH(v); }
/* ff9a1f: fdiv dword ptr [esp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x14u)));
/* ff9a23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff9a24: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff9a28: jle 0xff9a4f */
  if ((zf || sf != of)) goto L_ff9a4f;
L_ff9a2a: /* ff9a2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff9a30: /* ff9a30: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* ff9a33: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* ff9a36: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9a39: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff9a3c: call 0x1009244 */
  esp -= 4; W32(esp, 0xff9a41u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* ff9a41: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ff9a43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9a46: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff9a47: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9a49: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ff9a4d: jl 0xff9a30 */
  if ((sf != of)) goto L_ff9a30;
L_ff9a4f: /* ff9a4f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff9a52: xor esi, esi */
  esi = 0;
/* ff9a54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9a56: jle 0xff9bae */
  if ((zf || sf != of)) goto L_ff9bae;
L_ff9a5c: /* ff9a5c: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* ff9a5f: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff9a63: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* ff9a66: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff9a6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff9a70: /* ff9a70: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff9a73: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* ff9a76: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* ff9a7a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9a7e: mov eax, 0x3f000000 */
  eax = 0x3f000000u;
/* ff9a83: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9a86: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff9a8a: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff9a8e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff9a92: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff9a96: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* ff9a9a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff9a9d: call 0x1009244 */
  esp -= 4; W32(esp, 0xff9aa2u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* ff9aa2: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ff9aa4: mov eax, 1 */
  eax = 0x1u;
/* ff9aa9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9aac: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9aae: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff9ab2: jle 0xff9ade */
  if ((zf || sf != of)) goto L_ff9ade;
L_ff9ab4: /* ff9ab4: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* ff9ab7: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9abb: fsub dword ptr [ecx + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + eax*4 + 0xfffffffcu)));
/* ff9abf: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9ac2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9ac4: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* ff9ac8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff9acc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9ad0: fsub dword ptr [ecx + eax*4 - 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + eax*4 + 0xfffffff8u)));
/* ff9ad4: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* ff9ad8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ff9adc: jl 0xff9ab4 */
  if ((sf != of)) goto L_ff9ab4;
L_ff9ade: /* ff9ade: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9ae0: jne 0xff9b15 */
  if (!zf) goto L_ff9b15;
L_ff9ae2: /* ff9ae2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9ae6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* ff9ae9: fsub dword ptr [ecx + eax*4 - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + eax*4 + 0xfffffffcu)));
/* ff9aed: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* ff9af1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff9af5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9af9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* ff9afd: fsubr dword ptr [0x100a1f8] */
  ST0 = (F32((uint32_t)(0x100a1f8u))) - ST0;
/* ff9b03: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* ff9b07: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* ff9b0b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ff9b0f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff9b13: jmp 0xff9b39 */
  goto L_ff9b39;
L_ff9b15: /* ff9b15: fld dword ptr [0x100a16c] */
  { double v = F32((uint32_t)(0x100a16cu)); FPUSH(v); }
/* ff9b1b: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* ff9b1f: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* ff9b23: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* ff9b27: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ff9b2b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9b2f: fadd dword ptr [0x100a16c] */
  ST0 = ST0 + (F32((uint32_t)(0x100a16cu)));
/* ff9b35: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
L_ff9b39: /* ff9b39: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* ff9b3d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9b40: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff9b44: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9b48: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* ff9b4c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff9b4f: call 0x100924a */
  esp -= 4; W32(esp, 0xff9b54u); SPILL(); f_100924a(); if (g_unwind) return; RELOAD();
/* ff9b54: fdivr qword ptr [esp + 0x28] */
  ST0 = (F64((uint32_t)(esp + 0x28u))) / ST0;
/* ff9b58: fsub qword ptr [esp + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x30u)));
/* ff9b5c: fmul qword ptr [0x100a1f0] */
  ST0 = ST0 * (F64((uint32_t)(0x100a1f0u)));
/* ff9b62: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff9b65: call 0x1009250 */
  esp -= 4; W32(esp, 0xff9b6au); SPILL(); f_1009250(); if (g_unwind) return; RELOAD();
/* ff9b6a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ff9b6d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff9b71: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff9b75: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ff9b78: fmul dword ptr [edx + esi*4] */
  ST0 = ST0 * (F32((uint32_t)(edx + esi*4)));
/* ff9b7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9b7e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff9b7f: fstp dword ptr [edx + esi*4 - 4] */
  WF32((uint32_t)(edx + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ff9b83: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* ff9b86: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9b88: jne 0xff9ba5 */
  if (!zf) goto L_ff9ba5;
L_ff9b8a: /* ff9b8a: lea eax, [edx + esi*4] */
  eax = (uint32_t)(edx + esi*4);
/* ff9b8d: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff9b8f: nop  */
L_ff9b90: /* ff9b90: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff9b94: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9b97: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* ff9b9a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff9b9b: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff9b9e: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* ff9ba1: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff9ba3: je 0xff9b90 */
  if (zf) goto L_ff9b90;
L_ff9ba5: /* ff9ba5: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9ba8: jl 0xff9a70 */
  if ((sf != of)) goto L_ff9a70;
L_ff9bae: /* ff9bae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9baf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff9bb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9bb1: mov esp, ebp */
  esp = ebp;
/* ff9bb3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9bb4: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9bc0(void) {
  LOAD_REGS();
L_ff9bc0: /* ff9bc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff9bc4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ff9bc6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ff9bca: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ff9bcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9bce: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff9bd1: jp 0xff9bd9 */
  if (pf) goto L_ff9bd9;
L_ff9bd3: /* ff9bd3: mov eax, 1 */
  eax = 0x1u;
/* ff9bd8: ret  */
  esp += 4; SPILL(); return;
L_ff9bd9: /* ff9bd9: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff9bdc: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9be0(void) {
  LOAD_REGS();
L_ff9be0: /* ff9be0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff9be1: mov ebp, esp */
  ebp = esp;
/* ff9be3: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9be6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9be7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9be8: mov esi, eax */
  esi = eax;
/* ff9bea: lea eax, [esi*8 + 8] */
  eax = (uint32_t)(esi*8 + 0x8u);
/* ff9bf1: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9bf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff9bf5: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff9bf8: mov ebx, ecx */
  ebx = ecx;
/* ff9bfa: call 0x1009200 */
  esp -= 4; W32(esp, 0xff9bffu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff9bff: xor ecx, ecx */
  ecx = 0;
/* ff9c01: xor eax, eax */
  eax = 0;
/* ff9c03: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9c05: mov edi, esp */
  edi = esp;
/* ff9c07: jl 0xff9c1c */
  if ((sf != of)) goto L_ff9c1c;
L_ff9c09: /* ff9c09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff9c10: /* ff9c10: fld dword ptr [ebx + eax*4] */
  { double v = F32((uint32_t)(ebx + eax*4)); FPUSH(v); }
/* ff9c13: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff9c14: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9c16: fstp qword ptr [edi + eax*8 - 8] */
  WF64((uint32_t)(edi + eax*8 + 0xfffffff8u), ST0); FPOP();
/* ff9c1a: jle 0xff9c10 */
  if ((zf || sf != of)) goto L_ff9c10;
L_ff9c1c: /* ff9c1c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9c1e: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* ff9c21: jle 0xff9dc6 */
  if ((zf || sf != of)) goto L_ff9dc6;
L_ff9c27: /* ff9c27: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff9c2a: lea ebx, [eax + esi*4 - 4] */
  ebx = (uint32_t)(eax + esi*4 + 0xfffffffcu);
/* ff9c2e: jmp 0xff9c32 */
  goto L_ff9c32;
L_ff9c30: /* ff9c30: xor ecx, ecx */
  ecx = 0;
L_ff9c32: /* ff9c32: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* ff9c35: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* ff9c38: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff9c3b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ff9c3e: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* ff9c41: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* ff9c44: fild dword ptr [ebp - 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff9c47: fstp qword ptr [ebp - 0x3c] */
  WF64((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* ff9c4a: jmp 0xff9c4e */
  goto L_ff9c4e;
L_ff9c4c: /* ff9c4c: xor ecx, ecx */
  ecx = 0;
L_ff9c4e: /* ff9c4e: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9c50: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ff9c53: mov eax, dword ptr [edi + esi*8] */
  eax = R32((uint32_t)(edi + esi*8));
/* ff9c56: mov edx, dword ptr [edi + esi*8 + 4] */
  edx = R32((uint32_t)(edi + esi*8 + 0x4u));
/* ff9c5a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* ff9c5d: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* ff9c60: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ff9c63: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ff9c66: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* ff9c69: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* ff9c6c: jle 0xff9c9b */
  if ((zf || sf != of)) goto L_ff9c9b;
L_ff9c6e: /* ff9c6e: lea eax, [edi + esi*8 - 8] */
  eax = (uint32_t)(edi + esi*8 + 0xfffffff8u);
/* ff9c72: mov ecx, esi */
  ecx = esi;
L_ff9c74: /* ff9c74: fld qword ptr [ebp - 0x2c] */
  { double v = F64((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* ff9c77: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff9c7a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ff9c7b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ff9c7d: fadd qword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe4u)));
/* ff9c80: fstp qword ptr [ebp - 0x2c] */
  WF64((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* ff9c83: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff9c86: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ff9c88: fadd qword ptr [ebp - 0x24] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffdcu)));
/* ff9c8b: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* ff9c8e: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* ff9c91: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ff9c93: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* ff9c96: fstp qword ptr [ebp - 0x24] */
  WF64((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* ff9c99: jne 0xff9c74 */
  if (!zf) goto L_ff9c74;
L_ff9c9b: /* ff9c9b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ff9c9d: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff9ca0: fld qword ptr [ebp - 0x34] */
  { double v = F64((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* ff9ca3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ff9ca5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ff9ca7: fld qword ptr [ebp - 0x3c] */
  { double v = F64((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* ff9caa: fmul qword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffd4u)));
/* ff9cad: fmul qword ptr [ebp - 0x24] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffdcu)));
/* ff9cb0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ff9cb2: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* ff9cb5: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff9cb8: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9cbb: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff9cc1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9cc3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff9cc6: jnp 0xff9dd2 */
  if (!pf) goto L_ff9dd2;
L_ff9ccc: /* ff9ccc: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff9cd2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9cd4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff9cd7: jne 0xff9d08 */
  if (!zf) goto L_ff9d08;
L_ff9cd9: /* ff9cd9: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff9cdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff9cdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9ce0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff9ce1: call 0x100924a */
  esp -= 4; W32(esp, 0xff9ce6u); SPILL(); f_100924a(); if (g_unwind) return; RELOAD();
/* ff9ce6: fadd qword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe4u)));
/* ff9ce9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9cec: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff9cef: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9cf2: fcomp qword ptr [0x100a218] */
  fpu_com(ST0, F64((uint32_t)(0x100a218u)));
  FPOP();
/* ff9cf8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9cfa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff9cfd: jp 0xff9d3c */
  if (pf) goto L_ff9d3c;
L_ff9cff: /* ff9cff: mov dword ptr [ebp - 8], 0x3eb0c6f7 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x3eb0c6f7u);
/* ff9d06: jmp 0xff9d35 */
  goto L_ff9d35;
L_ff9d08: /* ff9d08: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff9d0b: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff9d0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff9d0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff9d10: call 0x100924a */
  esp -= 4; W32(esp, 0xff9d15u); SPILL(); f_100924a(); if (g_unwind) return; RELOAD();
/* ff9d15: fsubr qword ptr [ebp - 0x1c] */
  ST0 = (F64((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* ff9d18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9d1b: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff9d1e: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9d21: fcomp qword ptr [0x100a210] */
  fpu_com(ST0, F64((uint32_t)(0x100a210u)));
  FPOP();
/* ff9d27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9d29: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff9d2c: jne 0xff9d3c */
  if (!zf) goto L_ff9d3c;
L_ff9d2e: /* ff9d2e: mov dword ptr [ebp - 8], 0xbeb0c6f7 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0xbeb0c6f7u);
L_ff9d35: /* ff9d35: mov dword ptr [ebp - 0xc], 0xa0b5ed8d */
  W32((uint32_t)(ebp + 0xfffffff4u), 0xa0b5ed8du);
L_ff9d3c: /* ff9d3c: fld qword ptr [ebp - 0x3c] */
  { double v = F64((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* ff9d3f: fmul qword ptr [ebp - 0x24] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffdcu)));
/* ff9d42: fdiv qword ptr [ebp - 0xc] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff4u)));
/* ff9d45: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff9d48: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ff9d4b: fsub qword ptr [ebp - 0xc] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xfffffff4u)));
/* ff9d4e: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* ff9d51: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9d54: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff9d5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9d5c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff9d5f: jp 0xff9d6d */
  if (pf) goto L_ff9d6d;
L_ff9d61: /* ff9d61: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9d64: fmul qword ptr [0x100a208] */
  ST0 = ST0 * (F64((uint32_t)(0x100a208u)));
/* ff9d6a: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
L_ff9d6d: /* ff9d6d: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9d70: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9d73: fdiv qword ptr [ebp - 0x14] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffecu)));
/* ff9d76: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff9d79: call 0x1009256 */
  esp -= 4; W32(esp, 0xff9d7eu); SPILL(); f_1009256(); if (g_unwind) return; RELOAD();
/* ff9d7e: fcomp qword ptr [0x100a200] */
  fpu_com(ST0, F64((uint32_t)(0x100a200u)));
  FPOP();
/* ff9d84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff9d87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9d89: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff9d8c: jp 0xff9c4c */
  if (pf) goto L_ff9c4c;
L_ff9d92: /* ff9d92: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9d94: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ff9d97: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* ff9d99: jle 0xff9db2 */
  if ((zf || sf != of)) goto L_ff9db2;
L_ff9d9b: /* ff9d9b: lea eax, [edi + esi*8 - 8] */
  eax = (uint32_t)(edi + esi*8 + 0xfffffff8u);
/* ff9d9f: nop  */
L_ff9da0: /* ff9da0: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ff9da3: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff9da6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ff9da7: fmul qword ptr [eax + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0x10u)));
/* ff9daa: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* ff9dad: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ff9db0: jne 0xff9da0 */
  if (!zf) goto L_ff9da0;
L_ff9db2: /* ff9db2: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff9db5: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff9db8: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff9dbb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9dbd: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* ff9dc0: jg 0xff9c30 */
  if ((!zf && sf == of)) goto L_ff9c30;
L_ff9dc6: /* ff9dc6: xor eax, eax */
  eax = 0;
/* ff9dc8: lea esp, [ebp - 0x48] */
  esp = (uint32_t)(ebp + 0xffffffb8u);
/* ff9dcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9dcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff9dcd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9dce: mov esp, ebp */
  esp = ebp;
/* ff9dd0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9dd1: ret  */
  esp += 4; SPILL(); return;
L_ff9dd2: /* ff9dd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ff9dd4: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff9dd7: lea esp, [ebp - 0x48] */
  esp = (uint32_t)(ebp + 0xffffffb8u);
/* ff9dda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff9ddb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff9ddc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9ddd: mov esp, ebp */
  esp = ebp;
/* ff9ddf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9de0: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9df0(void) {
  LOAD_REGS();
L_ff9df0: /* ff9df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff9df1: mov ebp, esp */
  ebp = esp;
/* ff9df3: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9df6: lea eax, [esi*8] */
  eax = (uint32_t)(esi*8);
/* ff9dfd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9dfe: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9e01: xor ebx, ebx */
  ebx = 0;
/* ff9e03: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff9e06: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ff9e09: call 0x1009200 */
  esp -= 4; W32(esp, 0xff9e0eu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff9e0e: xor eax, eax */
  eax = 0;
/* ff9e10: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9e12: mov edx, esp */
  edx = esp;
/* ff9e14: jle 0xff9e25 */
  if ((zf || sf != of)) goto L_ff9e25;
L_ff9e16: /* ff9e16: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff9e19: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff9e1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff9e1d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9e1f: fstp qword ptr [edx + eax*8 - 8] */
  WF64((uint32_t)(edx + eax*8 + 0xfffffff8u), ST0); FPOP();
/* ff9e23: jl 0xff9e16 */
  if ((sf != of)) goto L_ff9e16;
L_ff9e25: /* ff9e25: xor eax, eax */
  eax = 0;
/* ff9e27: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9e29: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* ff9e2c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* ff9e2f: jle 0xff9e9d */
  if ((zf || sf != of)) goto L_ff9e9d;
L_ff9e31: /* ff9e31: lea ebx, [esi - 1] */
  ebx = (uint32_t)(esi + 0xffffffffu);
L_ff9e34: /* ff9e34: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* ff9e37: xor ecx, ecx */
  ecx = 0;
/* ff9e39: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ff9e3c: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff9e3f: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* ff9e42: mov ecx, dword ptr [edx + eax*8] */
  ecx = R32((uint32_t)(edx + eax*8));
/* ff9e45: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* ff9e48: mov ecx, dword ptr [edx + eax*8 + 4] */
  ecx = R32((uint32_t)(edx + eax*8 + 0x4u));
/* ff9e4c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* ff9e4f: mov ecx, ebx */
  ecx = ebx;
/* ff9e51: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff9e53: jl 0xff9e76 */
  if ((sf != of)) goto L_ff9e76;
L_ff9e55: /* ff9e55: fld qword ptr [ebp - 0x24] */
  { double v = F64((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
L_ff9e58: /* ff9e58: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* ff9e59: fld qword ptr [ebp - 0x14] */
  { double v = F64((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ff9e5c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* ff9e5e: fadd qword ptr [ebp - 0xc] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff4u)));
/* ff9e61: fstp qword ptr [ebp - 0x14] */
  WF64((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* ff9e64: fld dword ptr [edi + ecx*4 + 4] */
  { double v = F32((uint32_t)(edi + ecx*4 + 0x4u)); FPUSH(v); }
/* ff9e68: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9e6b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* ff9e6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff9e6f: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff9e72: jns 0xff9e58 */
  if (!sf) goto L_ff9e58;
L_ff9e74: /* ff9e74: fstp st(0) */
  STI(0) = ST0; FPOP();
L_ff9e76: /* ff9e76: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9e79: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff9e7a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9e7c: fdiv qword ptr [ebp - 0x14] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffecu)));
/* ff9e7f: fstp qword ptr [ebp - 0xc] */
  WF64((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff9e82: fld qword ptr [edx + eax*8 - 8] */
  { double v = F64((uint32_t)(edx + eax*8 + 0xfffffff8u)); FPUSH(v); }
/* ff9e86: fsub qword ptr [ebp - 0xc] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xfffffff4u)));
/* ff9e89: fstp qword ptr [edx + eax*8 - 8] */
  WF64((uint32_t)(edx + eax*8 + 0xfffffff8u), ST0); FPOP();
/* ff9e8d: fld qword ptr [ebp - 0xc] */
  { double v = F64((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff9e90: fmul qword ptr [ebp - 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff4u)));
/* ff9e93: fadd qword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe4u)));
/* ff9e96: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* ff9e99: jl 0xff9e34 */
  if ((sf != of)) goto L_ff9e34;
L_ff9e9b: /* ff9e9b: xor ebx, ebx */
  ebx = 0;
L_ff9e9d: /* ff9e9d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff9ea0: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9ea3: jg 0xff9edb */
  if ((!zf && sf == of)) goto L_ff9edb;
L_ff9ea5: /* ff9ea5: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff9ea8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff9ea9: fcomp qword ptr [0x100a220] */
  fpu_com(ST0, F64((uint32_t)(0x100a220u)));
  FPOP();
/* ff9eaf: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ff9eb2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff9eb4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff9eb7: je 0xff9e25 */
  if (zf) goto L_ff9e25;
L_ff9ebd: /* ff9ebd: xor eax, eax */
  eax = 0;
/* ff9ebf: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9ec1: jle 0xff9ed1 */
  if ((zf || sf != of)) goto L_ff9ed1;
L_ff9ec3: /* ff9ec3: fld qword ptr [edx + eax*8] */
  { double v = F64((uint32_t)(edx + eax*8)); FPUSH(v); }
/* ff9ec6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff9ec9: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* ff9ecc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff9ecd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9ecf: jl 0xff9ec3 */
  if ((sf != of)) goto L_ff9ec3;
L_ff9ed1: /* ff9ed1: xor eax, eax */
  eax = 0;
/* ff9ed3: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff9ed6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9ed7: mov esp, ebp */
  esp = ebp;
/* ff9ed9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9eda: ret  */
  esp += 4; SPILL(); return;
L_ff9edb: /* ff9edb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff9ede: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff9ee1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff9ee2: mov esp, ebp */
  esp = ebp;
/* ff9ee4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff9ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_ff9ef0(void) {
  LOAD_REGS();
L_ff9ef0: /* ff9ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff9ef1: mov ebp, esp */
  ebp = esp;
/* ff9ef3: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff9ef6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff9ef7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff9ef8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff9ef9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ff9efc: lea esi, [edi + 1] */
  esi = (uint32_t)(edi + 0x1u);
/* ff9eff: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* ff9f01: lea ebx, [esi*4 + 4] */
  ebx = (uint32_t)(esi*4 + 0x4u);
/* ff9f08: mov eax, ebx */
  eax = ebx;
/* ff9f0a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9f0d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff9f10: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* ff9f13: call 0x1009200 */
  esp -= 4; W32(esp, 0xff9f18u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff9f18: mov eax, ebx */
  eax = ebx;
/* ff9f1a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9f1d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff9f20: mov dword ptr [ebp - 8], esp */
  W32((uint32_t)(ebp + 0xfffffff8u), esp);
/* ff9f23: call 0x1009200 */
  esp -= 4; W32(esp, 0xff9f28u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff9f28: mov eax, ebx */
  eax = ebx;
/* ff9f2a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9f2d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff9f30: mov dword ptr [ebp - 0xc], esp */
  W32((uint32_t)(ebp + 0xfffffff4u), esp);
/* ff9f33: call 0x1009200 */
  esp -= 4; W32(esp, 0xff9f38u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff9f38: mov eax, ebx */
  eax = ebx;
/* ff9f3a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9f3d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff9f40: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* ff9f43: call 0x1009200 */
  esp -= 4; W32(esp, 0xff9f48u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff9f48: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff9f4b: mov ebx, edi */
  ebx = edi;
/* ff9f4d: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ff9f4f: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9f52: mov eax, 1 */
  eax = 0x1u;
/* ff9f57: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ff9f5a: mov dword ptr [ecx + esi*4], 0x3f800000 */
  W32((uint32_t)(ecx + esi*4), 0x3f800000u);
/* ff9f61: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ff9f64: jl 0xff9fc7 */
  if ((sf != of)) goto L_ff9fc7;
L_ff9f66: /* ff9f66: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ff9f69: lea eax, [edx + 8] */
  eax = (uint32_t)(edx + 0x8u);
/* ff9f6c: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* ff9f73: lea ecx, [ecx + esi*4 - 0xc] */
  ecx = (uint32_t)(ecx + esi*4 + 0xfffffff4u);
/* ff9f77: lea edx, [edx + edi*4 - 0xc] */
  edx = (uint32_t)(edx + edi*4 + 0xfffffff4u);
L_ff9f7b: /* ff9f7b: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ff9f7e: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff9f81: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* ff9f84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff9f87: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ff9f8a: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* ff9f8d: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* ff9f90: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff9f93: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* ff9f96: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff9f99: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* ff9f9c: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff9f9f: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff9fa2: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9fa4: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* ff9fa7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* ff9faa: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ff9fad: fadd dword ptr [edx + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x10u)));
/* ff9fb0: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* ff9fb3: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* ff9fb6: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff9fb9: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* ff9fbc: jl 0xff9f7b */
  if ((sf != of)) goto L_ff9f7b;
L_ff9fbe: /* ff9fbe: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff9fc1: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ff9fc4: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_ff9fc7: /* ff9fc7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff9fc9: jg 0xffa012 */
  if ((!zf && sf == of)) goto L_ffa012;
L_ff9fcb: /* ff9fcb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ff9fce: lea edx, [edx + eax*4 - 4] */
  edx = (uint32_t)(edx + eax*4 + 0xfffffffcu);
/* ff9fd2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ff9fd5: mov edx, esi */
  edx = esi;
/* ff9fd7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff9fd9: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* ff9fdc: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* ff9fdf: mov ecx, edi */
  ecx = edi;
/* ff9fe1: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff9fe3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff9fe6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff9fe7: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* ff9fea: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff9fed: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
L_ff9ff0: /* ff9ff0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ff9ff2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ff9ff5: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* ff9ff7: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff9ffa: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ff9ffd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffa000: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* ffa003: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffa006: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa009: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* ffa00a: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* ffa00d: jne 0xff9ff0 */
  if (!zf) goto L_ff9ff0;
L_ffa00f: /* ffa00f: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_ffa012: /* ffa012: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa015: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffa018: mov eax, 1 */
  eax = 0x1u;
/* ffa01d: mov dword ptr [edx + ebx*4], 0x3f800000 */
  W32((uint32_t)(edx + ebx*4), 0x3f800000u);
/* ffa024: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffa027: jl 0xffa08d */
  if ((sf != of)) goto L_ffa08d;
L_ffa029: /* ffa029: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffa02c: lea eax, [ecx + 8] */
  eax = (uint32_t)(ecx + 0x8u);
/* ffa02f: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* ffa036: lea edx, [edx + ebx*4 - 0xc] */
  edx = (uint32_t)(edx + ebx*4 + 0xfffffff4u);
/* ffa03a: lea ecx, [ecx + edi*4 - 0xc] */
  ecx = (uint32_t)(ecx + edi*4 + 0xfffffff4u);
L_ffa03e: /* ffa03e: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ffa041: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffa044: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* ffa047: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa04a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ffa04d: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffa050: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* ffa053: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa056: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* ffa059: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffa05c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* ffa05f: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffa062: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffa065: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa067: fstp dword ptr [edx + 0x14] */
  WF32((uint32_t)(edx + 0x14u), ST0); FPOP();
/* ffa06a: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* ffa06d: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* ffa070: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* ffa073: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* ffa076: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffa079: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* ffa07c: fstp dword ptr [edx + 0xc] */
  WF32((uint32_t)(edx + 0xcu), ST0); FPOP();
/* ffa07f: jl 0xffa03e */
  if ((sf != of)) goto L_ffa03e;
L_ffa081: /* ffa081: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa084: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffa087: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffa08a: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_ffa08d: /* ffa08d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa08f: jg 0xffa0da */
  if ((!zf && sf == of)) goto L_ffa0da;
L_ffa091: /* ffa091: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffa094: lea eax, [ecx + eax*4 - 4] */
  eax = (uint32_t)(ecx + eax*4 + 0xfffffffcu);
/* ffa098: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffa09b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* ffa09e: mov eax, ebx */
  eax = ebx;
/* ffa0a0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa0a2: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* ffa0a5: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* ffa0a8: sub edi, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffa0ab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffa0ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffa0af: lea edi, [ecx + edi*4] */
  edi = (uint32_t)(ecx + edi*4);
/* ffa0b2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffa0b5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_ffa0b8: /* ffa0b8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffa0ba: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ffa0bd: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* ffa0bf: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa0c2: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* ffa0c5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffa0c8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffa0cb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffa0ce: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffa0d1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffa0d2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ffa0d5: jne 0xffa0b8 */
  if (!zf) goto L_ffa0b8;
L_ffa0d7: /* ffa0d7: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_ffa0da: /* ffa0da: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa0dc: jle 0xffa174 */
  if ((zf || sf != of)) goto L_ffa174;
L_ffa0e2: /* ffa0e2: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* ffa0e5: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa0e8: mov eax, 2 */
  eax = 0x2u;
/* ffa0ed: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffa0f0: jl 0xffa149 */
  if ((sf != of)) goto L_ffa149;
L_ffa0f2: /* ffa0f2: mov dword ptr [ebp - 0x1c], 5 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x5u);
/* ffa0f9: lea eax, [edx + ebx*4 - 0xc] */
  eax = (uint32_t)(edx + ebx*4 + 0xfffffff4u);
L_ffa0fd: /* ffa0fd: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffa100: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa103: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* ffa106: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ffa109: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* ffa10c: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa10f: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* ffa112: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* ffa115: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ffa118: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* ffa11b: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffa11e: fadd dword ptr [eax + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xcu)));
/* ffa121: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* ffa124: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffa127: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa12a: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* ffa12d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ffa130: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ffa133: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffa136: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* ffa139: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa13c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa13e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ffa141: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffa144: jl 0xffa0fd */
  if ((sf != of)) goto L_ffa0fd;
L_ffa146: /* ffa146: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_ffa149: /* ffa149: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa14b: jg 0xffa283 */
  if ((!zf && sf == of)) goto L_ffa283;
L_ffa151: /* ffa151: mov edi, ebx */
  edi = ebx;
/* ffa153: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffa155: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* ffa158: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffa159: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffa160: /* ffa160: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffa163: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa166: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ffa167: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* ffa16a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffa16d: jne 0xffa160 */
  if (!zf) goto L_ffa160;
L_ffa16f: /* ffa16f: jmp 0xffa283 */
  goto L_ffa283;
L_ffa174: /* ffa174: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa177: mov eax, 1 */
  eax = 0x1u;
/* ffa17c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffa17f: jl 0xffa1de */
  if ((sf != of)) goto L_ffa1de;
L_ffa181: /* ffa181: mov dword ptr [ebp - 0x1c], 4 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x4u);
/* ffa188: lea eax, [ecx + esi*4 - 8] */
  eax = (uint32_t)(ecx + esi*4 + 0xfffffff8u);
L_ffa18c: /* ffa18c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffa18f: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa192: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* ffa195: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ffa198: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* ffa19b: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa19e: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* ffa1a1: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* ffa1a4: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ffa1a7: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* ffa1aa: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa1ad: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* ffa1b0: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* ffa1b3: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ffa1b6: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa1b9: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffa1bc: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* ffa1bf: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* ffa1c2: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffa1c5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa1c8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ffa1cb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffa1ce: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffa1d1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa1d4: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa1d6: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ffa1d9: jl 0xffa18c */
  if ((sf != of)) goto L_ffa18c;
L_ffa1db: /* ffa1db: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_ffa1de: /* ffa1de: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa1e0: jg 0xffa1fe */
  if ((!zf && sf == of)) goto L_ffa1fe;
L_ffa1e2: /* ffa1e2: mov edi, esi */
  edi = esi;
/* ffa1e4: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffa1e6: lea eax, [ecx + edi*4] */
  eax = (uint32_t)(ecx + edi*4);
/* ffa1e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffa1ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffa1f0: /* ffa1f0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffa1f2: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa1f5: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ffa1f6: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* ffa1f9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffa1fc: jne 0xffa1f0 */
  if (!zf) goto L_ffa1f0;
L_ffa1fe: /* ffa1fe: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa201: mov eax, 1 */
  eax = 0x1u;
/* ffa206: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffa209: jl 0xffa268 */
  if ((sf != of)) goto L_ffa268;
L_ffa20b: /* ffa20b: mov dword ptr [ebp - 0x1c], 4 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x4u);
/* ffa212: lea eax, [edx + ebx*4 - 8] */
  eax = (uint32_t)(edx + ebx*4 + 0xfffffff8u);
L_ffa216: /* ffa216: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ffa219: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa21c: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* ffa21f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ffa222: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* ffa225: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa228: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* ffa22b: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
/* ffa22e: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ffa231: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* ffa234: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa237: fadd dword ptr [eax + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xcu)));
/* ffa23a: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* ffa23d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* ffa240: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ffa243: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* ffa246: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* ffa249: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* ffa24c: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffa24f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa252: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ffa255: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* ffa258: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffa25b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa25e: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa260: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ffa263: jl 0xffa216 */
  if ((sf != of)) goto L_ffa216;
L_ffa265: /* ffa265: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_ffa268: /* ffa268: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa26a: jg 0xffa283 */
  if ((!zf && sf == of)) goto L_ffa283;
L_ffa26c: /* ffa26c: mov edi, ebx */
  edi = ebx;
/* ffa26e: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffa270: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* ffa273: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_ffa274: /* ffa274: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ffa277: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa27a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ffa27b: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* ffa27e: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* ffa281: jne 0xffa274 */
  if (!zf) goto L_ffa274;
L_ffa283: /* ffa283: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffa285: mov edi, 2 */
  edi = 0x2u;
/* ffa28a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa28c: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffa292: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* ffa294: jl 0xffa2c0 */
  if ((sf != of)) goto L_ffa2c0;
L_ffa296: /* ffa296: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa298: mov eax, esi */
  eax = esi;
/* ffa29a: jl 0xffa2bb */
  if ((sf != of)) goto L_ffa2bb;
L_ffa29c: /* ffa29c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffa2a0: /* ffa2a0: fld dword ptr [ecx + eax*4 - 8] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0xfffffff8u)); FPUSH(v); }
/* ffa2a4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ffa2a5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa2a7: fsub dword ptr [ecx + eax*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + eax*4 + 0x4u)));
/* ffa2ab: fstp dword ptr [ecx + eax*4 - 4] */
  WF32((uint32_t)(ecx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ffa2af: fld dword ptr [ecx + eax*4 + 4] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* ffa2b3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffa2b5: fstp dword ptr [ecx + eax*4 + 4] */
  WF32((uint32_t)(ecx + eax*4 + 0x4u), ST0); FPOP();
/* ffa2b9: jge 0xffa2a0 */
  if ((sf == of)) goto L_ffa2a0;
L_ffa2bb: /* ffa2bb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffa2bc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa2be: jle 0xffa296 */
  if ((zf || sf != of)) goto L_ffa296;
L_ffa2c0: /* ffa2c0: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ffa2c2: mov edi, 2 */
  edi = 0x2u;
/* ffa2c7: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa2c9: fmul dword ptr [0x100a1ac] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1acu)));
/* ffa2cf: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* ffa2d1: jl 0xffa300 */
  if ((sf != of)) goto L_ffa300;
L_ffa2d3: /* ffa2d3: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa2d5: mov eax, ebx */
  eax = ebx;
/* ffa2d7: jl 0xffa2fb */
  if ((sf != of)) goto L_ffa2fb;
L_ffa2d9: /* ffa2d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffa2e0: /* ffa2e0: fld dword ptr [edx + eax*4 - 8] */
  { double v = F32((uint32_t)(edx + eax*4 + 0xfffffff8u)); FPUSH(v); }
/* ffa2e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ffa2e5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa2e7: fsub dword ptr [edx + eax*4 + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax*4 + 0x4u)));
/* ffa2eb: fstp dword ptr [edx + eax*4 - 4] */
  WF32((uint32_t)(edx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ffa2ef: fld dword ptr [edx + eax*4 + 4] */
  { double v = F32((uint32_t)(edx + eax*4 + 0x4u)); FPUSH(v); }
/* ffa2f3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffa2f5: fstp dword ptr [edx + eax*4 + 4] */
  WF32((uint32_t)(edx + eax*4 + 0x4u), ST0); FPOP();
/* ffa2f9: jge 0xffa2e0 */
  if ((sf == of)) goto L_ffa2e0;
L_ffa2fb: /* ffa2fb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffa2fc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa2fe: jle 0xffa2d3 */
  if ((zf || sf != of)) goto L_ffa2d3;
L_ffa300: /* ffa300: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* ffa303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa304: mov eax, esi */
  eax = esi;
/* ffa306: call 0xff9be0 */
  esp -= 4; W32(esp, 0xffa30bu); SPILL(); f_ff9be0(); if (g_unwind) return; RELOAD();
/* ffa30b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa30e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa310: jne 0xffa3ca */
  if (!zf) goto L_ffa3ca;
L_ffa316: /* ffa316: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffa319: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffa31c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa31d: mov eax, ebx */
  eax = ebx;
/* ffa31f: call 0xff9be0 */
  esp -= 4; W32(esp, 0xffa324u); SPILL(); f_ff9be0(); if (g_unwind) return; RELOAD();
/* ffa324: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa327: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa329: jne 0xffa3ca */
  if (!zf) goto L_ffa3ca;
L_ffa32f: /* ffa32f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa330: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffa333: call 0xff9df0 */
  esp -= 4; W32(esp, 0xffa338u); SPILL(); f_ff9df0(); if (g_unwind) return; RELOAD();
/* ffa338: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffa33b: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffa33e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa33f: mov esi, ebx */
  esi = ebx;
/* ffa341: call 0xff9df0 */
  esp -= 4; W32(esp, 0xffa346u); SPILL(); f_ff9df0(); if (g_unwind) return; RELOAD();
/* ffa346: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffa349: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffa34c: mov esi, dword ptr [0x100a05c] */
  esi = R32((uint32_t)(0x100a05cu));
/* ffa352: push 0xff9bc0 */
  { uint32_t v = 0xff9bc0u; esp -= 4; W32(esp, v); }
/* ffa357: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa359: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa35a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa35b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xffa35du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa35d: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffa360: push 0xff9bc0 */
  { uint32_t v = 0xff9bc0u; esp -= 4; W32(esp, v); }
/* ffa365: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa367: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffa368: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa369: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xffa36bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa36b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa36e: xor esi, esi */
  esi = 0;
/* ffa370: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa372: jle 0xffa393 */
  if ((zf || sf != of)) goto L_ffa393;
L_ffa374: /* ffa374: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ffa377: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* ffa37a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffa37d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffa380: call 0x100925c */
  esp -= 4; W32(esp, 0xffa385u); SPILL(); f_100925c(); if (g_unwind) return; RELOAD();
/* ffa385: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffa388: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa38b: fstp dword ptr [ecx + esi*8] */
  WF32((uint32_t)(ecx + esi*8), ST0); FPOP();
/* ffa38e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffa38f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa391: jl 0xffa374 */
  if ((sf != of)) goto L_ffa374;
L_ffa393: /* ffa393: xor esi, esi */
  esi = 0;
/* ffa395: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa397: jle 0xffa3be */
  if ((zf || sf != of)) goto L_ffa3be;
L_ffa399: /* ffa399: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ffa39c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa39f: nop  */
L_ffa3a0: /* ffa3a0: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffa3a3: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* ffa3a6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffa3a9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffa3ac: call 0x100925c */
  esp -= 4; W32(esp, 0xffa3b1u); SPILL(); f_100925c(); if (g_unwind) return; RELOAD();
/* ffa3b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa3b4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ffa3b6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffa3b7: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa3ba: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa3bc: jl 0xffa3a0 */
  if ((sf != of)) goto L_ffa3a0;
L_ffa3be: /* ffa3be: xor eax, eax */
  eax = 0;
/* ffa3c0: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* ffa3c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffa3c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffa3c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffa3c6: mov esp, ebp */
  esp = ebp;
/* ffa3c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffa3c9: ret  */
  esp += 4; SPILL(); return;
L_ffa3ca: /* ffa3ca: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ffa3cd: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* ffa3d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffa3d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffa3d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffa3d3: mov esp, ebp */
  esp = ebp;
/* ffa3d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffa3d6: ret  */
  esp += 4; SPILL(); return;
}

void f_ffa3e0(void) {
  LOAD_REGS();
L_ffa3e0: /* ffa3e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa3e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa3e2: push 0xcd0 */
  { uint32_t v = 0xcd0u; esp -= 4; W32(esp, v); }
/* ffa3e7: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xffa3edu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ffa3ed: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ffa3f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa3f4: mov ecx, 0x334 */
  ecx = 0x334u;
/* ffa3f9: mov edi, eax */
  edi = eax;
/* ffa3fb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffa3fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffa3fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffa3ff: ret  */
  esp += 4; SPILL(); return;
}

void f_ffa400(void) {
  LOAD_REGS();
L_ffa400: /* ffa400: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ffa404: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa406: je 0xffa41f */
  if (zf) goto L_ffa41f;
L_ffa408: /* ffa408: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa409: mov ecx, 0x334 */
  ecx = 0x334u;
/* ffa40e: xor eax, eax */
  eax = 0;
/* ffa410: mov edi, edx */
  edi = edx;
/* ffa412: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffa414: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffa415: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ffa419: jmp dword ptr [0x100a040] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_ffa41f: /* ffa41f: ret  */
  esp += 4; SPILL(); return;
}

void f_ffa420(void) {
  LOAD_REGS();
L_ffa420: /* ffa420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa421: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ffa425: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa427: je 0xffa4ee */
  if (zf) goto L_ffa4ee;
L_ffa42d: /* ffa42d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffa42e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa42f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa430: call 0x1008b80 */
  esp -= 4; W32(esp, 0xffa435u); SPILL(); f_1008b80(); if (g_unwind) return; RELOAD();
/* ffa435: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ffa438: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffa43a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa43d: xor edi, edi */
  edi = 0;
/* ffa43f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa441: jle 0xffa480 */
  if ((zf || sf != of)) goto L_ffa480;
L_ffa443: /* ffa443: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* ffa446: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ffa449: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffa44c: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* ffa44f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa450: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xffa453u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa453: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ffa456: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* ffa459: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffa45c: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffa45f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa460: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xffa463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa463: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ffa466: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* ffa469: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* ffa46c: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffa46f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa470: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xffa473u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa473: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* ffa476: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ffa478: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa47b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffa47c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa47e: jl 0xffa443 */
  if ((sf != of)) goto L_ffa443;
L_ffa480: /* ffa480: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* ffa483: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa485: mov ebx, dword ptr [0x100a040] */
  ebx = R32((uint32_t)(0x100a040u));
/* ffa48b: je 0xffa4a1 */
  if (zf) goto L_ffa4a1;
L_ffa48d: /* ffa48d: cmp eax, dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffa490: je 0xffa4a1 */
  if (zf) goto L_ffa4a1;
L_ffa492: /* ffa492: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa493: call 0xffee90 */
  esp -= 4; W32(esp, 0xffa498u); SPILL(); f_ffee90(); if (g_unwind) return; RELOAD();
/* ffa498: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* ffa49b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa49c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa49eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa49e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffa4a1: /* ffa4a1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ffa4a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa4a6: je 0xffa4b7 */
  if (zf) goto L_ffa4b7;
L_ffa4a8: /* ffa4a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa4a9: call 0xffee90 */
  esp -= 4; W32(esp, 0xffa4aeu); SPILL(); f_ffee90(); if (g_unwind) return; RELOAD();
/* ffa4ae: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ffa4b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa4b2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffa4b7: /* ffa4b7: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* ffa4ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa4bb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4bd: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ffa4c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa4c1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4c3: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ffa4c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa4c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4c9: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ffa4cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa4cd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4cf: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* ffa4d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa4d3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4d5: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ffa4d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa4d9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4db: xor eax, eax */
  eax = 0;
/* ffa4dd: mov ecx, 0xf */
  ecx = 0xfu;
/* ffa4e2: mov edi, esi */
  edi = esi;
/* ffa4e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa4e5: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffa4e7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffa4e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa4e9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa4ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffa4ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ffa4ee: /* ffa4ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffa4ef: ret  */
  esp += 4; SPILL(); return;
}

void f_ffa4f0(void) {
  LOAD_REGS();
L_ffa4f0: /* ffa4f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffa4f3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ffa4f7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* ffa4fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffa4fb: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* ffa4fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffa4ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa500: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa501: mov edi, dword ptr [0x100a038] */
  edi = R32((uint32_t)(0x100a038u));
/* ffa507: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* ffa509: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa50b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffa50f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffa511u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa511: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* ffa515: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ffa519: mov esi, eax */
  esi = eax;
/* ffa51b: mov dword ptr [esi + 0x10], ebp */
  W32((uint32_t)(esi + 0x10u), ebp);
/* ffa51e: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* ffa521: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ffa524: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa526: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa527: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffa529u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa529: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* ffa52c: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ffa52f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa532: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffa534u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa534: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* ffa537: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ffa53a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa53c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa53d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffa53fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa53f: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* ffa542: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ffa545: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa547: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa548: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffa54au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa54a: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* ffa54d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ffa550: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa553: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffa555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa555: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* ffa558: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ffa55b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa55d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa55e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xffa560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa560: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* ffa563: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ffa566: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa569: xor edi, edi */
  edi = 0;
/* ffa56b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa56d: jle 0xffa654 */
  if ((zf || sf != of)) goto L_ffa654;
L_ffa573: /* ffa573: lea ecx, [ebp + 0x444] */
  ecx = (uint32_t)(ebp + 0x444u);
/* ffa579: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffa57d: jmp 0xffa583 */
  goto L_ffa583;
L_ffa57f: /* ffa57f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
L_ffa583: /* ffa583: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffa585: mov eax, dword ptr [ecx - 0x40] */
  eax = R32((uint32_t)(ecx + 0xffffffc0u));
/* ffa588: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* ffa58b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* ffa58f: mov edx, dword ptr [ebx + eax*4 + 0x324] */
  edx = R32((uint32_t)(ebx + eax*4 + 0x324u));
/* ffa596: mov edx, dword ptr [edx*4 + 0x100d0f0] */
  edx = R32((uint32_t)(edx*4 + 0x100d0f0u));
/* ffa59d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ffa5a1: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* ffa5a4: mov dword ptr [ecx + edi*4], edx */
  W32((uint32_t)(ecx + edi*4), edx);
/* ffa5a7: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* ffa5aa: mov eax, dword ptr [ebx + eax*4 + 0x424] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x424u));
/* ffa5b1: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffa5b4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ffa5b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa5b9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ffa5bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa5be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa5bf: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xffa5c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa5c2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ffa5c5: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* ffa5c8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ffa5cc: mov edx, dword ptr [ebx + eax*4 + 0x524] */
  edx = R32((uint32_t)(ebx + eax*4 + 0x524u));
/* ffa5d3: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* ffa5d6: mov edx, dword ptr [edx*4 + 0x100d0f4] */
  edx = R32((uint32_t)(edx*4 + 0x100d0f4u));
/* ffa5dd: mov dword ptr [ecx + edi*4], edx */
  W32((uint32_t)(ecx + edi*4), edx);
/* ffa5e0: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* ffa5e3: mov eax, dword ptr [ebx + eax*4 + 0x624] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x624u));
/* ffa5ea: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffa5ed: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ffa5f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa5f2: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ffa5f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa5f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa5f8: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xffa5fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa5fb: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* ffa5fe: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* ffa601: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ffa605: mov edx, dword ptr [ebx + eax*4 + 0x724] */
  edx = R32((uint32_t)(ebx + eax*4 + 0x724u));
/* ffa60c: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ffa60f: mov edx, dword ptr [edx*4 + 0x100d0fc] */
  edx = R32((uint32_t)(edx*4 + 0x100d0fcu));
/* ffa616: mov dword ptr [ecx + edi*4], edx */
  W32((uint32_t)(ecx + edi*4), edx);
/* ffa619: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ffa61c: mov eax, dword ptr [ebx + eax*4 + 0x824] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x824u));
/* ffa623: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffa626: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* ffa62a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa62b: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ffa62f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa631: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xffa634u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffa634: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ffa637: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* ffa63a: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* ffa63e: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ffa641: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa644: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffa645: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffa648: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa64a: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffa64e: jl 0xffa57f */
  if ((sf != of)) goto L_ffa57f;
L_ffa654: /* ffa654: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* ffa657: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa659: je 0xffa73a */
  if (zf) goto L_ffa73a;
L_ffa65f: /* ffa65f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ffa663: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffa666: je 0xffa73a */
  if (zf) goto L_ffa73a;
L_ffa66c: /* ffa66c: mov edi, dword ptr [ebp + 0x4c4] */
  edi = R32((uint32_t)(ebp + 0x4c4u));
/* ffa672: cmp edi, dword ptr [ebp + 0x4c8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4c8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffa678: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* ffa67a: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* ffa67e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa680: je 0xffa6fd */
  if (zf) goto L_ffa6fd;
L_ffa682: /* ffa682: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xffa688u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ffa688: mov ecx, eax */
  ecx = eax;
/* ffa68a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ffa68e: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* ffa691: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* ffa694: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ffa698: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa699: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ffa69b: mov eax, dword ptr [ebx + edx*4] */
  eax = R32((uint32_t)(ebx + edx*4));
/* ffa69e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffa69f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa6a1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffa6a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa6a4: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ffa6a8: mov edx, dword ptr [ebx + eax*4 + 0xd28] */
  edx = R32((uint32_t)(ebx + eax*4 + 0xd28u));
/* ffa6af: lea edi, [ebx + 0xe28] */
  edi = (uint32_t)(ebx + 0xe28u);
/* ffa6b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa6b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa6b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa6b8: call 0xffd2d0 */
  esp -= 4; W32(esp, 0xffa6bdu); SPILL(); f_ffd2d0(); if (g_unwind) return; RELOAD();
/* ffa6bd: mov ebp, dword ptr [ebp + 0x4c8] */
  ebp = R32((uint32_t)(ebp + 0x4c8u));
/* ffa6c3: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* ffa6c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa6c7: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xffa6cdu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ffa6cd: mov ecx, eax */
  ecx = eax;
/* ffa6cf: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ffa6d3: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* ffa6d6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* ffa6d9: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* ffa6dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa6de: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ffa6e0: mov eax, dword ptr [ebx + edx*4] */
  eax = R32((uint32_t)(ebx + edx*4));
/* ffa6e3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffa6e4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa6e6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffa6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa6e9: mov eax, dword ptr [ebx + ebp*4 + 0xd28] */
  eax = R32((uint32_t)(ebx + ebp*4 + 0xd28u));
/* ffa6f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa6f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa6f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa6f3: call 0xffd2d0 */
  esp -= 4; W32(esp, 0xffa6f8u); SPILL(); f_ffd2d0(); if (g_unwind) return; RELOAD();
/* ffa6f8: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa6fb: jmp 0xffa73a */
  goto L_ffa73a;
L_ffa6fd: /* ffa6fd: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xffa703u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ffa703: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ffa707: mov ecx, eax */
  ecx = eax;
/* ffa709: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* ffa70c: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* ffa70f: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ffa712: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffa716: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa717: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffa719: mov eax, dword ptr [ebx + eax*4] */
  eax = R32((uint32_t)(ebx + eax*4));
/* ffa71c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffa71d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffa71f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffa721: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa722: mov eax, dword ptr [ebx + edi*4 + 0xd28] */
  eax = R32((uint32_t)(ebx + edi*4 + 0xd28u));
/* ffa729: lea edx, [ebx + 0xe28] */
  edx = (uint32_t)(ebx + 0xe28u);
/* ffa72f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa731: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa732: call 0xffd2d0 */
  esp -= 4; W32(esp, 0xffa737u); SPILL(); f_ffd2d0(); if (g_unwind) return; RELOAD();
/* ffa737: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffa73a: /* ffa73a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ffa73e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffa741: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ffa745: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* ffa748: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffa74b: je 0xffa760 */
  if (zf) goto L_ffa760;
L_ffa74d: /* ffa74d: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ffa751: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffa753: mov eax, dword ptr [ebx + edx*4] */
  eax = R32((uint32_t)(ebx + edx*4));
/* ffa756: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa757: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa758: call 0x1008b30 */
  esp -= 4; W32(esp, 0xffa75du); SPILL(); f_1008b30(); if (g_unwind) return; RELOAD();
/* ffa75d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffa760: /* ffa760: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffa761: mov eax, esi */
  eax = esi;
/* ffa763: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffa764: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffa765: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffa766: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa769: ret  */
  esp += 4; SPILL(); return;
}

void f_ffa770(void) {
  LOAD_REGS();
L_ffa770: /* ffa770: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffa771: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* ffa775: cmp dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa778: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffa779: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa77a: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* ffa77e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa77f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa781: jle 0xffa79c */
  if ((zf || sf != of)) goto L_ffa79c;
L_ffa783: /* ffa783: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa785: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa786: call 0x100913c */
  esp -= 4; W32(esp, 0xffa78bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa78b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ffa78d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa78f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ffa790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa791: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa792: call 0x100913c */
  esp -= 4; W32(esp, 0xffa797u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa797: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa79a: jmp 0xffa7a7 */
  goto L_ffa7a7;
L_ffa79c: /* ffa79c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffa79e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa79f: call 0x100913c */
  esp -= 4; W32(esp, 0xffa7a4u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa7a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffa7a7: /* ffa7a7: mov eax, dword ptr [ebx + 0x4cc] */
  eax = R32((uint32_t)(ebx + 0x4ccu));
/* ffa7ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa7af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa7b1: jle 0xffa850 */
  if ((zf || sf != of)) goto L_ffa850;
L_ffa7b7: /* ffa7b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa7b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa7ba: call 0x100913c */
  esp -= 4; W32(esp, 0xffa7bfu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa7bf: mov ecx, dword ptr [ebx + 0x4cc] */
  ecx = R32((uint32_t)(ebx + 0x4ccu));
/* ffa7c5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffa7c7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ffa7c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa7c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa7ca: call 0x100913c */
  esp -= 4; W32(esp, 0xffa7cfu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa7cf: mov eax, dword ptr [ebx + 0x4cc] */
  eax = R32((uint32_t)(ebx + 0x4ccu));
/* ffa7d5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa7d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa7da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ffa7e2: jle 0xffa85b */
  if ((zf || sf != of)) goto L_ffa85b;
L_ffa7e4: /* ffa7e4: lea edi, [ebx + 0x8d0] */
  edi = (uint32_t)(ebx + 0x8d0u);
/* ffa7ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffa7f0: /* ffa7f0: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ffa7f4: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ffa7f7: xor ecx, ecx */
  ecx = 0;
/* ffa7f9: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa7fc: jbe 0xffa808 */
  if ((cf | zf)) goto L_ffa808;
L_ffa7fe: /* ffa7fe: mov edi, edi */
  edi = edi;
L_ffa800: /* ffa800: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ffa802: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffa803: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa806: ja 0xffa800 */
  if ((!cf && !zf)) goto L_ffa800;
L_ffa808: /* ffa808: mov edx, dword ptr [edi - 0x400] */
  edx = R32((uint32_t)(edi + 0xfffffc00u));
/* ffa80e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa80f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa811: call 0x100913c */
  esp -= 4; W32(esp, 0xffa816u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa816: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ffa819: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa81c: xor ecx, ecx */
  ecx = 0;
/* ffa81e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa821: jbe 0xffa82b */
  if ((cf | zf)) goto L_ffa82b;
L_ffa823: /* ffa823: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ffa825: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffa826: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa829: ja 0xffa823 */
  if ((!cf && !zf)) goto L_ffa823;
L_ffa82b: /* ffa82b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ffa82d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa82e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa82f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa830: call 0x100913c */
  esp -= 4; W32(esp, 0xffa835u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa835: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ffa839: mov ecx, dword ptr [ebx + 0x4cc] */
  ecx = R32((uint32_t)(ebx + 0x4ccu));
/* ffa83f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa842: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffa843: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa846: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa848: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffa84c: jl 0xffa7f0 */
  if ((sf != of)) goto L_ffa7f0;
L_ffa84e: /* ffa84e: jmp 0xffa85f */
  goto L_ffa85f;
L_ffa850: /* ffa850: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffa852: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa853: call 0x100913c */
  esp -= 4; W32(esp, 0xffa858u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa858: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffa85b: /* ffa85b: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_ffa85f: /* ffa85f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ffa861: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffa863: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa864: call 0x100913c */
  esp -= 4; W32(esp, 0xffa869u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa869: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ffa86b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa86e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa871: jle 0xffa89e */
  if ((zf || sf != of)) goto L_ffa89e;
L_ffa873: /* ffa873: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ffa876: xor edi, edi */
  edi = 0;
/* ffa878: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa87a: jle 0xffa89e */
  if ((zf || sf != of)) goto L_ffa89e;
L_ffa87c: /* ffa87c: lea ebp, [ebx + 4] */
  ebp = (uint32_t)(ebx + 0x4u);
/* ffa87f: nop  */
L_ffa880: /* ffa880: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ffa883: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa887: call 0x100913c */
  esp -= 4; W32(esp, 0xffa88cu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa88c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ffa890: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffa893: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa896: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffa897: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ffa89a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa89c: jl 0xffa880 */
  if ((sf != of)) goto L_ffa880;
L_ffa89e: /* ffa89e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ffa8a0: xor ebp, ebp */
  ebp = 0;
/* ffa8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa8a4: jle 0xffa8e0 */
  if ((zf || sf != of)) goto L_ffa8e0;
L_ffa8a6: /* ffa8a6: lea edi, [ebx + 0x444] */
  edi = (uint32_t)(ebx + 0x444u);
/* ffa8ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffa8b0: /* ffa8b0: mov eax, dword ptr [edi - 0x40] */
  eax = R32((uint32_t)(edi + 0xffffffc0u));
/* ffa8b3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffa8b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffa8b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa8b7: call 0x100913c */
  esp -= 4; W32(esp, 0xffa8bcu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa8bc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ffa8be: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffa8c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa8c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa8c2: call 0x100913c */
  esp -= 4; W32(esp, 0xffa8c7u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa8c7: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* ffa8ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffa8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffa8cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa8ce: call 0x100913c */
  esp -= 4; W32(esp, 0xffa8d3u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ffa8d3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ffa8d5: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa8d8: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ffa8d9: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffa8dc: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa8de: jl 0xffa8b0 */
  if ((sf != of)) goto L_ffa8b0;
L_ffa8e0: /* ffa8e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffa8e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffa8e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffa8e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffa8e4: ret  */
  esp += 4; SPILL(); return;
}

void f_ffa8f0(void) {
  LOAD_REGS();
L_ffa8f0: /* ffa8f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffa8f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffa8f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffa8f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffa8f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa8f7: push 0xcd0 */
  { uint32_t v = 0xcd0u; esp -= 4; W32(esp, v); }
/* ffa8fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa8fe: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xffa904u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ffa904: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* ffa908: mov esi, eax */
  esi = eax;
/* ffa90a: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* ffa90d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ffa911: xor eax, eax */
  eax = 0;
/* ffa913: mov ecx, 0x334 */
  ecx = 0x334u;
/* ffa918: mov edi, esi */
  edi = esi;
/* ffa91a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffa91c: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* ffa920: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa922: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa923: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* ffa927: call 0x1009154 */
  esp -= 4; W32(esp, 0xffa92cu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffa92c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa92f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa931: je 0xffa943 */
  if (zf) goto L_ffa943;
L_ffa933: /* ffa933: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffa935: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa936: call 0x1009154 */
  esp -= 4; W32(esp, 0xffa93bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffa93b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa93e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffa93f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ffa941: jmp 0xffa949 */
  goto L_ffa949;
L_ffa943: /* ffa943: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
L_ffa949: /* ffa949: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ffa94b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa94c: call 0x1009154 */
  esp -= 4; W32(esp, 0xffa951u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffa951: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa954: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffa956: je 0xffaa13 */
  if (zf) goto L_ffaa13;
L_ffa95c: /* ffa95c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffa95e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa95f: call 0x1009154 */
  esp -= 4; W32(esp, 0xffa964u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffa964: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa967: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffa968: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa96a: mov dword ptr [esi + 0x4cc], eax */
  W32((uint32_t)(esi + 0x4ccu), eax);
/* ffa970: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* ffa978: jle 0xffaa13 */
  if ((zf || sf != of)) goto L_ffaa13;
L_ffa97e: /* ffa97e: lea ebx, [esi + 0x8d0] */
  ebx = (uint32_t)(esi + 0x8d0u);
L_ffa984: /* ffa984: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ffa987: xor ecx, ecx */
  ecx = 0;
/* ffa989: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa98c: jbe 0xffa998 */
  if ((cf | zf)) goto L_ffa998;
L_ffa98e: /* ffa98e: mov edi, edi */
  edi = edi;
L_ffa990: /* ffa990: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ffa992: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffa993: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa996: ja 0xffa990 */
  if ((!cf && !zf)) goto L_ffa990;
L_ffa998: /* ffa998: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa999: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa99a: call 0x1009154 */
  esp -= 4; W32(esp, 0xffa99fu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffa99f: mov esi, eax */
  esi = eax;
/* ffa9a1: mov dword ptr [ebx - 0x400], esi */
  W32((uint32_t)(ebx + 0xfffffc00u), esi);
/* ffa9a7: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ffa9aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa9ad: xor ecx, ecx */
  ecx = 0;
/* ffa9af: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa9b2: jbe 0xffa9bc */
  if ((cf | zf)) goto L_ffa9bc;
L_ffa9b4: /* ffa9b4: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ffa9b6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffa9b7: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ffa9ba: ja 0xffa9b4 */
  if ((!cf && !zf)) goto L_ffa9b4;
L_ffa9bc: /* ffa9bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffa9bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffa9be: call 0x1009154 */
  esp -= 4; W32(esp, 0xffa9c3u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffa9c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffa9c6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa9c8: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* ffa9ca: jl 0xffaacc */
  if ((sf != of)) goto L_ffaacc;
L_ffa9d0: /* ffa9d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffa9d2: jl 0xffaacc */
  if ((sf != of)) goto L_ffaacc;
L_ffa9d8: /* ffa9d8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffa9da: je 0xffaacc */
  if (zf) goto L_ffaacc;
L_ffa9e0: /* ffa9e0: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* ffa9e3: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa9e5: jge 0xffaacc */
  if ((sf == of)) goto L_ffaacc;
L_ffa9eb: /* ffa9eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffa9ed: jge 0xffaacc */
  if ((sf == of)) goto L_ffaacc;
L_ffa9f3: /* ffa9f3: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ffa9f7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ffa9fb: mov edx, dword ptr [ecx + 0x4cc] */
  edx = R32((uint32_t)(ecx + 0x4ccu));
/* ffaa01: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffaa02: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffaa05: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaa07: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ffaa0b: jl 0xffa984 */
  if ((sf != of)) goto L_ffa984;
L_ffaa11: /* ffaa11: mov esi, ecx */
  esi = ecx;
L_ffaa13: /* ffaa13: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ffaa15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaa16: call 0x1009154 */
  esp -= 4; W32(esp, 0xffaa1bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffaa1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaa1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffaa20: jg 0xffaad0 */
  if ((!zf && sf == of)) goto L_ffaad0;
L_ffaa26: /* ffaa26: cmp dword ptr [esi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaa29: jle 0xffaa5f */
  if ((zf || sf != of)) goto L_ffaa5f;
L_ffaa2b: /* ffaa2b: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ffaa2e: xor ebx, ebx */
  ebx = 0;
/* ffaa30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffaa32: jle 0xffaa5f */
  if ((zf || sf != of)) goto L_ffaa5f;
L_ffaa34: /* ffaa34: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_ffaa37: /* ffaa37: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ffaa39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaa3a: call 0x1009154 */
  esp -= 4; W32(esp, 0xffaa3fu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffaa3f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ffaa43: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ffaa45: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* ffaa47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaa4a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaa4c: jge 0xffaacc */
  if ((sf == of)) goto L_ffaacc;
L_ffaa52: /* ffaa52: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ffaa55: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffaa56: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffaa59: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaa5b: jl 0xffaa37 */
  if ((sf != of)) goto L_ffaa37;
L_ffaa5d: /* ffaa5d: mov esi, edx */
  esi = edx;
L_ffaa5f: /* ffaa5f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffaa61: xor ebp, ebp */
  ebp = 0;
/* ffaa63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffaa65: jle 0xffaac2 */
  if ((zf || sf != of)) goto L_ffaac2;
L_ffaa67: /* ffaa67: add esi, 0x444 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x444u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffaa6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffaa70: /* ffaa70: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffaa72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaa73: call 0x1009154 */
  esp -= 4; W32(esp, 0xffaa78u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffaa78: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ffaa7c: mov dword ptr [esi - 0x40], eax */
  W32((uint32_t)(esi + 0xffffffc0u), eax);
/* ffaa7f: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffaa82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaa85: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaa87: jge 0xffaacc */
  if ((sf == of)) goto L_ffaacc;
L_ffaa89: /* ffaa89: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffaa8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaa8c: call 0x1009154 */
  esp -= 4; W32(esp, 0xffaa91u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffaa91: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ffaa93: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* ffaa96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaa99: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaa9b: jge 0xffaacc */
  if ((sf == of)) goto L_ffaacc;
L_ffaa9d: /* ffaa9d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ffaa9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaaa0: call 0x1009154 */
  esp -= 4; W32(esp, 0xffaaa5u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ffaaa5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* ffaaa8: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* ffaaab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaaae: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaab0: jge 0xffaacc */
  if ((sf == of)) goto L_ffaacc;
L_ffaab2: /* ffaab2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ffaab6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffaab8: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ffaab9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffaabc: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaabe: jl 0xffaa70 */
  if ((sf != of)) goto L_ffaa70;
L_ffaac0: /* ffaac0: mov esi, eax */
  esi = eax;
L_ffaac2: /* ffaac2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffaac3: mov eax, esi */
  eax = esi;
/* ffaac5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffaac6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffaac7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffaac8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaacb: ret  */
  esp += 4; SPILL(); return;
L_ffaacc: /* ffaacc: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
L_ffaad0: /* ffaad0: xor eax, eax */
  eax = 0;
/* ffaad2: mov ecx, 0x334 */
  ecx = 0x334u;
/* ffaad7: mov edi, esi */
  edi = esi;
/* ffaad9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffaada: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffaadc: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xffaae2u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ffaae2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaae5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffaae6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffaae7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffaae8: xor eax, eax */
  eax = 0;
/* ffaaea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffaaeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaaee: ret  */
  esp += 4; SPILL(); return;
}

void f_ffaaf0(void) {
  LOAD_REGS();
L_ffaaf0: /* ffaaf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffaaf1: mov ebp, esp */
  ebp = esp;
/* ffaaf3: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffaaf9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffaafa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffaafb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ffaafe: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* ffab01: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* ffab04: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* ffab07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffab08: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* ffab0b: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* ffab0e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffab11: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* ffab14: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* ffab17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffab1a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffab1d: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* ffab20: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* ffab23: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffab26: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffab29: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* ffab2c: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* ffab2f: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* ffab32: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* ffab35: call 0x1009200 */
  esp -= 4; W32(esp, 0xffab3au); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffab3a: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* ffab41: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* ffab44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffab45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffab46: call 0xff2840 */
  esp -= 4; W32(esp, 0xffab4bu); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* ffab4b: mov ebx, eax */
  ebx = eax;
/* ffab4d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* ffab50: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ffab53: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffab56: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffab59: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffab5c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffab5f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffab62: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* ffab65: call 0x1009200 */
  esp -= 4; W32(esp, 0xffab6au); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffab6a: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* ffab6d: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ffab70: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* ffab73: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffab76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffab78: mov ecx, esp */
  ecx = esp;
/* ffab7a: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* ffab7d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffab84: jle 0xffadb5 */
  if ((zf || sf != of)) goto L_ffadb5;
L_ffab8a: /* ffab8a: fild dword ptr [ebp - 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ffab8d: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffab90: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffab91: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffab93: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* ffab96: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffab98: fld dword ptr [0x100a1f8] */
  { double v = F32((uint32_t)(0x100a1f8u)); FPUSH(v); }
/* ffab9e: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffaba1: fdiv dword ptr [ebp - 0x60] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffa0u)));
/* ffaba4: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* ffaba7: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* ffabaa: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* ffabad: jmp 0xffabb2 */
  goto L_ffabb2;
L_ffabaf: /* ffabaf: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
L_ffabb2: /* ffabb2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ffabb4: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* ffabb7: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffabba: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffabc0: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* ffabc3: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffabc5: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* ffabc8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffabca: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* ffabcd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffabd0: jp 0xffabe2 */
  if (pf) goto L_ffabe2;
L_ffabd2: /* ffabd2: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* ffabd9: mov dword ptr [ebp - 0x7c], 0xc0790000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0xc0790000u);
/* ffabe0: jmp 0xffabff */
  goto L_ffabff;
L_ffabe2: /* ffabe2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* ffabe5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffabe8: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* ffabeb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffabee: call 0x1009172 */
  esp -= 4; W32(esp, 0xffabf3u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffabf3: fmul qword ptr [0x100a098] */
  ST0 = ST0 * (F64((uint32_t)(0x100a098u)));
/* ffabf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffabfc: fstp qword ptr [ebp - 0x80] */
  WF64((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
L_ffabff: /* ffabff: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ffac02: fld qword ptr [ebp - 0x80] */
  { double v = F64((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* ffac05: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ffac08: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* ffac0b: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* ffac0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffac0f: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* ffac12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffac13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffac14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffac15: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffac18: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffac1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffac1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffac1d: call 0x1008f70 */
  esp -= 4; W32(esp, 0xffac22u); SPILL(); f_1008f70(); if (g_unwind) return; RELOAD();
/* ffac22: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffac25: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* ffac28: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ffac2b: mov edx, ecx */
  edx = ecx;
/* ffac2d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ffac30: mov esi, edi */
  esi = edi;
/* ffac32: mov edi, ebx */
  edi = ebx;
/* ffac34: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ffac36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffac37: mov ecx, edx */
  ecx = edx;
/* ffac39: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffac3c: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ffac3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffac40: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffac43: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ffac45: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ffac48: mov eax, dword ptr [edx + ecx*4 + 0xc] */
  eax = R32((uint32_t)(edx + ecx*4 + 0xcu));
/* ffac4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffac4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffac4f: call 0xffc690 */
  esp -= 4; W32(esp, 0xffac54u); SPILL(); f_ffc690(); if (g_unwind) return; RELOAD();
/* ffac54: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffac57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffac58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffac59: call 0x1008ad0 */
  esp -= 4; W32(esp, 0xffac5eu); SPILL(); f_1008ad0(); if (g_unwind) return; RELOAD();
/* ffac5e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* ffac61: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffac64: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* ffac66: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* ffac69: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ffac6c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffac6f: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffac75: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* ffac77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffac79: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffac7c: jp 0xffac8e */
  if (pf) goto L_ffac8e;
L_ffac7e: /* ffac7e: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* ffac85: mov dword ptr [ebp - 0x74], 0xc0790000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0xc0790000u);
/* ffac8c: jmp 0xffacab */
  goto L_ffacab;
L_ffac8e: /* ffac8e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ffac91: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffac94: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* ffac97: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffac9a: call 0x1009172 */
  esp -= 4; W32(esp, 0xffac9fu); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffac9f: fmul qword ptr [0x100a098] */
  ST0 = ST0 * (F64((uint32_t)(0x100a098u)));
/* ffaca5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaca8: fstp qword ptr [ebp - 0x78] */
  WF64((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
L_ffacab: /* ffacab: fld qword ptr [ebp - 0x78] */
  { double v = F64((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* ffacae: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* ffacb1: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* ffacb4: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* ffacb7: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* ffacba: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ffacbc: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ffacbe: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffacc1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ffacc2: mov esi, 1 */
  esi = 0x1u;
/* ffacc7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffacc9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* ffaccc: jle 0xffad6b */
  if ((zf || sf != of)) goto L_ffad6b;
L_ffacd2: /* ffacd2: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* ffacd5: mov edx, dword ptr [ebx + esi*4 + 4] */
  edx = R32((uint32_t)(ebx + esi*4 + 0x4u));
/* ffacd9: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* ffacdc: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* ffacdf: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* fface2: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* fface5: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* fface8: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* ffaceb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffaced: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* ffacf0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ffacf3: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffacf9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffacfb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffacfe: jp 0xffad10 */
  if (pf) goto L_ffad10;
L_ffad00: /* ffad00: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* ffad07: mov dword ptr [ebp - 0x6c], 0xc0790000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0xc0790000u);
/* ffad0e: jmp 0xffad2d */
  goto L_ffad2d;
L_ffad10: /* ffad10: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ffad13: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffad16: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* ffad19: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffad1c: call 0x1009172 */
  esp -= 4; W32(esp, 0xffad21u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffad21: fmul qword ptr [0x100a098] */
  ST0 = ST0 * (F64((uint32_t)(0x100a098u)));
/* ffad27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffad2a: fstp qword ptr [ebp - 0x70] */
  WF64((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
L_ffad2d: /* ffad2d: fld qword ptr [ebp - 0x70] */
  { double v = F64((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* ffad30: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* ffad33: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* ffad39: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* ffad3c: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ffad3e: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* ffad41: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* ffad44: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* ffad47: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* ffad4a: mov ecx, eax */
  ecx = eax;
/* ffad4c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ffad4f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ffad52: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* ffad54: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffad56: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffad59: jne 0xffad5d */
  if (!zf) goto L_ffad5d;
L_ffad5b: /* ffad5b: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_ffad5d: /* ffad5d: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* ffad60: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffad63: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffad65: jl 0xffacd2 */
  if ((sf != of)) goto L_ffacd2;
L_ffad6b: /* ffad6b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ffad6d: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffad73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffad75: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffad78: jne 0xffad80 */
  if (!zf) goto L_ffad80;
L_ffad7a: /* ffad7a: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_ffad80: /* ffad80: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ffad82: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* ffad85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffad87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffad8a: jne 0xffad91 */
  if (!zf) goto L_ffad91;
L_ffad8c: /* ffad8c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ffad8e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_ffad91: /* ffad91: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffad94: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffad97: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffad9a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ffad9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffad9e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffada1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffada3: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffada6: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* ffada9: jl 0xffabaf */
  if ((sf != of)) goto L_ffabaf;
L_ffadaf: /* ffadaf: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* ffadb2: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
L_ffadb5: /* ffadb5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffadb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffadba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffadc1: jle 0xffaf1e */
  if ((zf || sf != of)) goto L_ffaf1e;
L_ffadc7: /* ffadc7: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffadca: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffadcd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffadce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffadd0: mov edx, eax */
  edx = eax;
/* ffadd2: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* ffadd5: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ffadd7: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffadda: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffaddc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ffaddf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ffade2: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* ffade5: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* ffade8: jmp 0xffadf0 */
  goto L_ffadf0;
L_ffadea: /* ffadea: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffaded: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffadf0: /* ffadf0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffadf2: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffadf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffadf7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffadf9: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* ffadfc: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffadff: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* ffae02: lea edi, [esi + edx*4] */
  edi = (uint32_t)(esi + edx*4);
/* ffae05: jle 0xffae75 */
  if ((zf || sf != of)) goto L_ffae75;
L_ffae07: /* ffae07: mov eax, ebx */
  eax = ebx;
/* ffae09: mov ecx, esi */
  ecx = esi;
/* ffae0b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffae0d: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* ffae10: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* ffae13: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
L_ffae16: /* ffae16: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffae18: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffae1e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffae20: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffae23: jp 0xffae35 */
  if (pf) goto L_ffae35;
L_ffae25: /* ffae25: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* ffae2c: mov dword ptr [ebp - 0x7c], 0xc0790000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0xc0790000u);
/* ffae33: jmp 0xffae5d */
  goto L_ffae5d;
L_ffae35: /* ffae35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffae37: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* ffae3a: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* ffae3d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffae40: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* ffae43: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffae46: call 0x1009172 */
  esp -= 4; W32(esp, 0xffae4bu); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffae4b: fmul qword ptr [0x100a098] */
  ST0 = ST0 * (F64((uint32_t)(0x100a098u)));
/* ffae51: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* ffae54: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffae57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffae5a: fstp qword ptr [ebp - 0x80] */
  WF64((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
L_ffae5d: /* ffae5d: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* ffae60: fld qword ptr [ebp - 0x80] */
  { double v = F64((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* ffae63: fstp dword ptr [eax + ecx] */
  WF32((uint32_t)(eax + ecx), ST0); FPOP();
/* ffae66: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* ffae69: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffae6c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffae6d: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* ffae70: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* ffae73: jne 0xffae16 */
  if (!zf) goto L_ffae16;
L_ffae75: /* ffae75: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffae78: fld qword ptr [ecx + 0x90] */
  { double v = F64((uint32_t)(ecx + 0x90u)); FPUSH(v); }
/* ffae7e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffae81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffae82: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* ffae85: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* ffae88: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* ffae8b: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* ffae8e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* ffae91: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ffae94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffae95: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* ffae98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffae99: lea edx, [ebx + edx*4] */
  edx = (uint32_t)(ebx + edx*4);
/* ffae9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffae9d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffaea0: mov ecx, dword ptr [edx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x20u));
/* ffaea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffaea5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaea6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffaea7: call 0xfffc20 */
  esp -= 4; W32(esp, 0xffaeacu); SPILL(); f_fffc20(); if (g_unwind) return; RELOAD();
/* ffaeac: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffaeaf: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* ffaeb2: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* ffaeb5: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* ffaeb8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffaebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaebc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaebd: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* ffaec0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffaec1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffaec4: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* ffaec7: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* ffaeca: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffaecd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffaece: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffaecf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffaed0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffaed1: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xffaed4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffaed4: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffaed7: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* ffaeda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffaedb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffaedd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffaee0: mov edx, dword ptr [eax + ecx*4 + 0x20] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x20u));
/* ffaee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffaee5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffaee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffaee7: call 0xfffbd0 */
  esp -= 4; W32(esp, 0xffaeecu); SPILL(); f_fffbd0(); if (g_unwind) return; RELOAD();
/* ffaeec: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffaeef: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffaef2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffaef5: mov ecx, 4 */
  ecx = 0x4u;
/* ffaefa: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffaefc: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffaefe: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffaf01: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffaf04: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffaf07: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffaf08: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffaf0a: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* ffaf0d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ffaf10: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffaf13: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* ffaf16: jl 0xffadea */
  if ((sf != of)) goto L_ffadea;
L_ffaf1c: /* ffaf1c: mov edi, ecx */
  edi = ecx;
L_ffaf1e: /* ffaf1e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ffaf21: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* ffaf24: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* ffaf27: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ffaf29: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* ffaf2c: lea esi, [ebx*4] */
  esi = (uint32_t)(ebx*4);
/* ffaf33: mov eax, esi */
  eax = esi;
/* ffaf35: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffaf38: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffaf3b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* ffaf3e: call 0x1009200 */
  esp -= 4; W32(esp, 0xffaf43u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffaf43: mov eax, esi */
  eax = esi;
/* ffaf45: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffaf48: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffaf4b: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* ffaf4e: call 0x1009200 */
  esp -= 4; W32(esp, 0xffaf53u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffaf53: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffaf56: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* ffaf58: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ffaf5b: mov eax, esi */
  eax = esi;
/* ffaf5d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffaf60: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffaf63: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* ffaf66: call 0x1009200 */
  esp -= 4; W32(esp, 0xffaf6bu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffaf6b: mov eax, esi */
  eax = esi;
/* ffaf6d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffaf70: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffaf73: mov dword ptr [ebp - 0x5c], esp */
  W32((uint32_t)(ebp + 0xffffffa4u), esp);
/* ffaf76: call 0x1009200 */
  esp -= 4; W32(esp, 0xffaf7bu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffaf7b: mov eax, esi */
  eax = esi;
/* ffaf7d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffaf80: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffaf83: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* ffaf86: call 0x1009200 */
  esp -= 4; W32(esp, 0xffaf8bu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffaf8b: mov eax, esi */
  eax = esi;
/* ffaf8d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffaf90: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffaf93: mov dword ptr [ebp - 0x3c], esp */
  W32((uint32_t)(ebp + 0xffffffc4u), esp);
/* ffaf96: call 0x1009200 */
  esp -= 4; W32(esp, 0xffaf9bu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffaf9b: mov eax, esi */
  eax = esi;
/* ffaf9d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffafa0: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffafa3: mov dword ptr [ebp - 0x50], esp */
  W32((uint32_t)(ebp + 0xffffffb0u), esp);
/* ffafa6: call 0x1009200 */
  esp -= 4; W32(esp, 0xffafabu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffafab: mov eax, esi */
  eax = esi;
/* ffafad: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffafb0: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffafb3: mov dword ptr [ebp - 0x28], esp */
  W32((uint32_t)(ebp + 0xffffffd8u), esp);
/* ffafb6: call 0x1009200 */
  esp -= 4; W32(esp, 0xffafbbu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffafbb: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* ffafbe: mov edx, dword ptr [ecx + 0x1088] */
  edx = R32((uint32_t)(ecx + 0x1088u));
/* ffafc4: xor eax, eax */
  eax = 0;
/* ffafc6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffafc8: mov dword ptr [ebp - 0x4c], esp */
  W32((uint32_t)(ebp + 0xffffffb4u), esp);
/* ffafcb: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* ffafce: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* ffafd1: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffafd4: jle 0xffb049 */
  if ((zf || sf != of)) goto L_ffb049;
L_ffafd6: /* ffafd6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffafd9: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffafdc: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* ffafdf: mov eax, ecx */
  eax = ecx;
/* ffafe1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffafe2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffafe4: mov ebx, eax */
  ebx = eax;
/* ffafe6: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ffafe8: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* ffafef: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ffaff1: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* ffaff4: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffaff6: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* ffaff9: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* ffaffc: jmp 0xffb004 */
  goto L_ffb004;
L_ffaffe: /* ffaffe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffb001: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
L_ffb004: /* ffb004: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* ffb00b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb00c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffb00f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb010: call 0xff2840 */
  esp -= 4; W32(esp, 0xffb015u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* ffb015: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* ffb018: mov dword ptr [edi + esi], eax */
  W32((uint32_t)(edi + esi), eax);
/* ffb01b: mov edx, ecx */
  edx = ecx;
/* ffb01d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ffb020: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* ffb023: xor eax, eax */
  eax = 0;
/* ffb025: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* ffb027: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffb029: mov ecx, edx */
  ecx = edx;
/* ffb02b: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ffb02e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ffb030: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb033: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb036: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffb039: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb03c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ffb03d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffb040: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb042: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffb045: jl 0xffaffe */
  if ((sf != of)) goto L_ffaffe;
L_ffb047: /* ffb047: mov edi, ecx */
  edi = ecx;
L_ffb049: /* ffb049: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffb04c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffb04f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb052: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb055: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb05au); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb05a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffb05d: mov eax, esp */
  eax = esp;
/* ffb05f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffb061: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffb064: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffb067: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb06a: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb06d: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb072u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb072: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* ffb075: mov eax, esp */
  eax = esp;
/* ffb077: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ffb079: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffb07c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffb07f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb082: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb085: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb08au); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb08a: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
/* ffb08d: mov eax, esp */
  eax = esp;
/* ffb08f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ffb091: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffb094: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ffb097: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb09a: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb09d: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb0a2u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb0a2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffb0a5: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb0a8: mov eax, esp */
  eax = esp;
/* ffb0aa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ffb0ac: mov eax, dword ptr [ebx + 0x4cc] */
  eax = R32((uint32_t)(ebx + 0x4ccu));
/* ffb0b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffb0b4: jne 0xffb11b */
  if (!zf) goto L_ffb11b;
L_ffb0b6: /* ffb0b6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffb0b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb0bb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffb0c2: jle 0xffb141 */
  if ((zf || sf != of)) goto L_ffb141;
L_ffb0c8: /* ffb0c8: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffb0cb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb0ce: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb0d1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb0d2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb0d4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffb0d6: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffb0d8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ffb0db: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* ffb0de: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* ffb0e1: jmp 0xffb0e6 */
  goto L_ffb0e6;
L_ffb0e3: /* ffb0e3: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
L_ffb0e6: /* ffb0e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb0e8: mov edx, dword ptr [ecx + ebx] */
  edx = R32((uint32_t)(ecx + ebx));
/* ffb0eb: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ffb0ed: jle 0xffb102 */
  if ((zf || sf != of)) goto L_ffb102;
L_ffb0ef: /* ffb0ef: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_ffb0f1: /* ffb0f1: mov ebx, dword ptr [edx + ecx] */
  ebx = R32((uint32_t)(edx + ecx));
/* ffb0f4: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* ffb0f6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb0f9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffb0fa: jne 0xffb0f1 */
  if (!zf) goto L_ffb0f1;
L_ffb0fc: /* ffb0fc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffb0ff: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
L_ffb102: /* ffb102: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb105: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* ffb108: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb109: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffb10c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb10e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* ffb111: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* ffb114: jl 0xffb0e3 */
  if ((sf != of)) goto L_ffb0e3;
L_ffb116: /* ffb116: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb119: jmp 0xffb141 */
  goto L_ffb141;
L_ffb11b: /* ffb11b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* ffb11e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb121: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb124: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffb126: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb127: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb12a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb12b: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* ffb12e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb12f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffb132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb133: mov eax, dword ptr [edx + ecx*4 + 0x20] */
  eax = R32((uint32_t)(edx + ecx*4 + 0x20u));
/* ffb137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffb138: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb139: call 0x10007a0 */
  esp -= 4; W32(esp, 0xffb13eu); SPILL(); f_10007a0(); if (g_unwind) return; RELOAD();
/* ffb13e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffb141: /* ffb141: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb144: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffb14b: jle 0xffb295 */
  if ((zf || sf != of)) goto L_ffb295;
L_ffb151: /* ffb151: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* ffb154: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffb157: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb159: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* ffb15c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffb15f: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb161: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* ffb164: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* ffb167: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb169: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* ffb16c: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* ffb16f: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffb171: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb173: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* ffb176: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* ffb179: jmp 0xffb180 */
  goto L_ffb180;
L_ffb17b: /* ffb17b: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* ffb17e: mov edi, edi */
  edi = edi;
L_ffb180: /* ffb180: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* ffb183: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffb186: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* ffb188: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ffb18b: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffb18d: mov dword ptr [edx + esi], ebx */
  W32((uint32_t)(edx + esi), ebx);
/* ffb190: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* ffb193: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ffb195: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb198: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffb19a: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* ffb19c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffb19f: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ffb1a1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffb1a3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ffb1a6: mov dword ptr [ecx + esi], edx */
  W32((uint32_t)(ecx + esi), edx);
/* ffb1a9: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* ffb1ac: xor eax, eax */
  eax = 0;
/* ffb1ae: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb1b0: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* ffb1b3: jle 0xffb244 */
  if ((zf || sf != of)) goto L_ffb244;
L_ffb1b9: /* ffb1b9: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb1bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb1bf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffb1c2: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ffb1c5: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* ffb1c8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffb1ca: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* ffb1cd: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb1d0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffb1d2: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* ffb1d5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb1d8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffb1da: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* ffb1dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffb1e0: /* ffb1e0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffb1e3: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffb1e5: jne 0xffb232 */
  if (!zf) goto L_ffb232;
L_ffb1e7: /* ffb1e7: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* ffb1ea: cmp dword ptr [edx + ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffb1ee: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ffb1f1: mov edx, dword ptr [edx + esi] */
  edx = R32((uint32_t)(edx + esi));
/* ffb1f4: je 0xffb1ff */
  if (zf) goto L_ffb1ff;
L_ffb1f6: /* ffb1f6: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* ffb1fd: jmp 0xffb206 */
  goto L_ffb206;
L_ffb1ff: /* ffb1ff: mov dword ptr [edx + eax*4], 0 */
  W32((uint32_t)(edx + eax*4), 0x0u);
L_ffb206: /* ffb206: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* ffb208: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* ffb20b: mov edx, dword ptr [edx + esi] */
  edx = R32((uint32_t)(edx + esi));
/* ffb20e: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* ffb211: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb214: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* ffb217: mov edx, dword ptr [edx + ebx*4] */
  edx = R32((uint32_t)(edx + ebx*4));
/* ffb21a: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* ffb21d: mov ebx, dword ptr [ecx + ebx] */
  ebx = R32((uint32_t)(ecx + ebx));
/* ffb220: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* ffb223: mov ebx, dword ptr [ebp - 0x68] */
  ebx = R32((uint32_t)(ebp + 0xffffff98u));
/* ffb226: mov ebx, dword ptr [ebx + ecx] */
  ebx = R32((uint32_t)(ebx + ecx));
/* ffb229: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ffb22b: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* ffb22e: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb231: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_ffb232: /* ffb232: inc dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* ffb235: add dword ptr [ebp - 0x18], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* ffb239: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* ffb23c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb23f: cmp edx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb242: jl 0xffb1e0 */
  if ((sf != of)) goto L_ffb1e0;
L_ffb244: /* ffb244: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* ffb247: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* ffb24a: mov dword ptr [ecx + esi], eax */
  W32((uint32_t)(ecx + esi), eax);
/* ffb24d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffb250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb251: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffb253: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* ffb256: mov eax, dword ptr [eax + esi] */
  eax = R32((uint32_t)(eax + esi));
/* ffb259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb25a: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* ffb25d: mov eax, dword ptr [eax + esi] */
  eax = R32((uint32_t)(eax + esi));
/* ffb260: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* ffb263: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffb266: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* ffb269: mov edx, dword ptr [edx + ebx*4] */
  edx = R32((uint32_t)(edx + ebx*4));
/* ffb26c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb26d: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* ffb270: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffb273: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb274: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb275: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xffb278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb278: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* ffb27b: mov dword ptr [edx + esi], eax */
  W32((uint32_t)(edx + esi), eax);
/* ffb27e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb281: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffb283: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb286: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffb287: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffb28a: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb28c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ffb28f: jl 0xffb17b */
  if ((sf != of)) goto L_ffb17b;
L_ffb295: /* ffb295: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* ffb298: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb29a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffb2a1: jle 0xffb3f9 */
  if ((zf || sf != of)) goto L_ffb3f9;
L_ffb2a7: /* ffb2a7: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb2aa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffb2ac: xor edi, edi */
  edi = 0;
/* ffb2ae: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb2b0: jle 0xffb330 */
  if ((zf || sf != of)) goto L_ffb330;
L_ffb2b6: /* ffb2b6: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* ffb2b9: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffb2bc: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* ffb2bf: mov eax, esi */
  eax = esi;
/* ffb2c1: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffb2c3: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* ffb2c6: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* ffb2c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffb2cb: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* ffb2ce: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffb2d1: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ffb2d3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffb2d5: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* ffb2d8: jmp 0xffb2e0 */
  goto L_ffb2e0;
L_ffb2e0: /* ffb2e0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffb2e3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* ffb2e6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffb2e9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* ffb2ec: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* ffb2ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2f0: mov ecx, dword ptr [ebx + esi] */
  ecx = R32((uint32_t)(ebx + esi));
/* ffb2f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2f4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb2f7: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* ffb2fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2fb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ffb2fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2fe: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* ffb301: mov ecx, dword ptr [ecx + esi] */
  ecx = R32((uint32_t)(ecx + esi));
/* ffb304: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb305: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* ffb308: mov ecx, dword ptr [ecx + esi] */
  ecx = R32((uint32_t)(ecx + esi));
/* ffb30b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb30c: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* ffb30f: mov ecx, dword ptr [ecx + esi] */
  ecx = R32((uint32_t)(ecx + esi));
/* ffb312: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb313: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* ffb316: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffb319: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb31a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb31b: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xffb31eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb31e: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb321: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ffb323: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb326: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffb327: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffb32a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb32c: jl 0xffb2e0 */
  if ((sf != of)) goto L_ffb2e0;
L_ffb32e: /* ffb32e: mov eax, ecx */
  eax = ecx;
L_ffb330: /* ffb330: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb333: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* ffb336: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb337: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb339: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* ffb33c: jge 0xffb3f6 */
  if ((sf == of)) goto L_ffb3f6;
L_ffb342: /* ffb342: mov edx, dword ptr [eax + 0x4cc] */
  edx = R32((uint32_t)(eax + 0x4ccu));
/* ffb348: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffb34a: jne 0xffb3cc */
  if (!zf) goto L_ffb3cc;
L_ffb350: /* ffb350: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb353: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffb356: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb358: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* ffb35f: jle 0xffb2a7 */
  if ((zf || sf != of)) goto L_ffb2a7;
L_ffb365: /* ffb365: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffb368: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb36b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb36e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb36f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb371: mov ebx, eax */
  ebx = eax;
/* ffb373: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb376: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb378: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ffb37a: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ffb37c: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* ffb37f: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* ffb382: jmp 0xffb387 */
  goto L_ffb387;
L_ffb384: /* ffb384: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
L_ffb387: /* ffb387: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb389: mov edx, dword ptr [eax + edi] */
  edx = R32((uint32_t)(eax + edi));
/* ffb38c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ffb38e: mov esi, dword ptr [esi + edi] */
  esi = R32((uint32_t)(esi + edi));
/* ffb391: jle 0xffb3b3 */
  if ((zf || sf != of)) goto L_ffb3b3;
L_ffb393: /* ffb393: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffb395: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ffb397: mov eax, ebx */
  eax = ebx;
/* ffb399: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffb3a0: /* ffb3a0: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* ffb3a3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb3a6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffb3a7: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* ffb3aa: fstp dword ptr [esi + ecx - 4] */
  WF32((uint32_t)(esi + ecx + 0xfffffffcu), ST0); FPOP();
/* ffb3ae: jne 0xffb3a0 */
  if (!zf) goto L_ffb3a0;
L_ffb3b0: /* ffb3b0: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
L_ffb3b3: /* ffb3b3: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* ffb3b6: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb3b9: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* ffb3bc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb3bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffb3c0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb3c2: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* ffb3c5: jl 0xffb384 */
  if ((sf != of)) goto L_ffb384;
L_ffb3c7: /* ffb3c7: jmp 0xffb2a7 */
  goto L_ffb2a7;
L_ffb3cc: /* ffb3cc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb3cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb3d0: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* ffb3d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb3d4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb3d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb3d8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb3db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb3dc: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* ffb3df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb3e1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffb3e4: mov edx, dword ptr [eax + ecx*4 + 0x20] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x20u));
/* ffb3e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb3e9: call 0x10007a0 */
  esp -= 4; W32(esp, 0xffb3eeu); SPILL(); f_10007a0(); if (g_unwind) return; RELOAD();
/* ffb3ee: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb3f1: jmp 0xffb2a7 */
  goto L_ffb2a7;
L_ffb3f6: /* ffb3f6: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
L_ffb3f9: /* ffb3f9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffb3fc: mov ecx, dword ptr [0x100d1e0] */
  ecx = R32((uint32_t)(0x100d1e0u));
/* ffb402: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* ffb405: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb407: mov dword ptr [0x100d1e0], ecx */
  W32((uint32_t)(0x100d1e0u), ecx);
/* ffb40d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffb410: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffb413: mov eax, dword ptr [esi + edx*4] */
  eax = R32((uint32_t)(esi + edx*4));
/* ffb416: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb417: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ffb41a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb41c: mov edi, eax */
  edi = eax;
/* ffb41e: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* ffb421: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* ffb424: mov esi, dword ptr [0x100d1e8] */
  esi = R32((uint32_t)(0x100d1e8u));
/* ffb42a: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* ffb42d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb42e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ffb431: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb433: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffb436: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ffb439: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb43b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb43c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* ffb43e: mov eax, dword ptr [0x100d1ec] */
  eax = R32((uint32_t)(0x100d1ecu));
/* ffb443: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* ffb445: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffb448: mov dword ptr [0x100d1ec], eax */
  W32((uint32_t)(0x100d1ecu), eax);
/* ffb44d: mov dword ptr [0x100d1e8], esi */
  W32((uint32_t)(0x100d1e8u), esi);
/* ffb453: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* ffb456: xor eax, eax */
  eax = 0;
/* ffb458: lea esp, [ebp - 0x8c] */
  esp = (uint32_t)(ebp + 0xffffff74u);
/* ffb45e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffb45f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffb460: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffb461: mov esp, ebp */
  esp = ebp;
/* ffb463: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffb464: ret  */
  esp += 4; SPILL(); return;
}

void f_ffb2da(void) {
  LOAD_REGS();
  goto L_ffb2da;
L_ffb2a7: /* ffb2a7: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb2aa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffb2ac: xor edi, edi */
  edi = 0;
/* ffb2ae: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb2b0: jle 0xffb330 */
  if ((zf || sf != of)) goto L_ffb330;
L_ffb2b6: /* ffb2b6: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* ffb2b9: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffb2bc: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* ffb2bf: mov eax, esi */
  eax = esi;
/* ffb2c1: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffb2c3: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* ffb2c6: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* ffb2c9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffb2cb: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* ffb2ce: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffb2d1: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ffb2d3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffb2d5: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* ffb2d8: jmp 0xffb2e0 */
  goto L_ffb2e0;
L_ffb2da: /* ffb2da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffb2e0: /* ffb2e0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffb2e3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* ffb2e6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffb2e9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* ffb2ec: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* ffb2ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2f0: mov ecx, dword ptr [ebx + esi] */
  ecx = R32((uint32_t)(ebx + esi));
/* ffb2f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2f4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb2f7: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* ffb2fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2fb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ffb2fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb2fe: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* ffb301: mov ecx, dword ptr [ecx + esi] */
  ecx = R32((uint32_t)(ecx + esi));
/* ffb304: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb305: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* ffb308: mov ecx, dword ptr [ecx + esi] */
  ecx = R32((uint32_t)(ecx + esi));
/* ffb30b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb30c: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* ffb30f: mov ecx, dword ptr [ecx + esi] */
  ecx = R32((uint32_t)(ecx + esi));
/* ffb312: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb313: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* ffb316: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffb319: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb31a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb31b: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xffb31eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb31e: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb321: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ffb323: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb326: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffb327: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffb32a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb32c: jl 0xffb2e0 */
  if ((sf != of)) goto L_ffb2e0;
L_ffb32e: /* ffb32e: mov eax, ecx */
  eax = ecx;
L_ffb330: /* ffb330: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb333: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* ffb336: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb337: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb339: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* ffb33c: jge 0xffb3f6 */
  if ((sf == of)) goto L_ffb3f6;
L_ffb342: /* ffb342: mov edx, dword ptr [eax + 0x4cc] */
  edx = R32((uint32_t)(eax + 0x4ccu));
/* ffb348: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffb34a: jne 0xffb3cc */
  if (!zf) goto L_ffb3cc;
L_ffb350: /* ffb350: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb353: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffb356: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb358: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* ffb35f: jle 0xffb2a7 */
  if ((zf || sf != of)) goto L_ffb2a7;
L_ffb365: /* ffb365: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffb368: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb36b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb36e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb36f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb371: mov ebx, eax */
  ebx = eax;
/* ffb373: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb376: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb378: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ffb37a: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ffb37c: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* ffb37f: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* ffb382: jmp 0xffb387 */
  goto L_ffb387;
L_ffb384: /* ffb384: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
L_ffb387: /* ffb387: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb389: mov edx, dword ptr [eax + edi] */
  edx = R32((uint32_t)(eax + edi));
/* ffb38c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ffb38e: mov esi, dword ptr [esi + edi] */
  esi = R32((uint32_t)(esi + edi));
/* ffb391: jle 0xffb3b3 */
  if ((zf || sf != of)) goto L_ffb3b3;
L_ffb393: /* ffb393: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffb395: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ffb397: mov eax, ebx */
  eax = ebx;
/* ffb399: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffb3a0: /* ffb3a0: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* ffb3a3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb3a6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffb3a7: fsub dword ptr [ecx - 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffffcu)));
/* ffb3aa: fstp dword ptr [esi + ecx - 4] */
  WF32((uint32_t)(esi + ecx + 0xfffffffcu), ST0); FPOP();
/* ffb3ae: jne 0xffb3a0 */
  if (!zf) goto L_ffb3a0;
L_ffb3b0: /* ffb3b0: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
L_ffb3b3: /* ffb3b3: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* ffb3b6: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb3b9: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* ffb3bc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb3bd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffb3c0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb3c2: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* ffb3c5: jl 0xffb384 */
  if ((sf != of)) goto L_ffb384;
L_ffb3c7: /* ffb3c7: jmp 0xffb2a7 */
  goto L_ffb2a7;
L_ffb3cc: /* ffb3cc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb3cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb3d0: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* ffb3d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb3d4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb3d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb3d8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb3db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb3dc: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* ffb3df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb3e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb3e1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffb3e4: mov edx, dword ptr [eax + ecx*4 + 0x20] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x20u));
/* ffb3e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb3e9: call 0x10007a0 */
  esp -= 4; W32(esp, 0xffb3eeu); SPILL(); f_10007a0(); if (g_unwind) return; RELOAD();
/* ffb3ee: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb3f1: jmp 0xffb2a7 */
  goto L_ffb2a7;
L_ffb3f6: /* ffb3f6: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb3f9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ffb3fc: mov ecx, dword ptr [0x100d1e0] */
  ecx = R32((uint32_t)(0x100d1e0u));
/* ffb402: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* ffb405: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb407: mov dword ptr [0x100d1e0], ecx */
  W32((uint32_t)(0x100d1e0u), ecx);
/* ffb40d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffb410: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffb413: mov eax, dword ptr [esi + edx*4] */
  eax = R32((uint32_t)(esi + edx*4));
/* ffb416: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb417: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ffb41a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb41c: mov edi, eax */
  edi = eax;
/* ffb41e: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* ffb421: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* ffb424: mov esi, dword ptr [0x100d1e8] */
  esi = R32((uint32_t)(0x100d1e8u));
/* ffb42a: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* ffb42d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb42e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ffb431: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb433: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffb436: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ffb439: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb43b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb43c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* ffb43e: mov eax, dword ptr [0x100d1ec] */
  eax = R32((uint32_t)(0x100d1ecu));
/* ffb443: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* ffb445: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffb448: mov dword ptr [0x100d1ec], eax */
  W32((uint32_t)(0x100d1ecu), eax);
/* ffb44d: mov dword ptr [0x100d1e8], esi */
  W32((uint32_t)(0x100d1e8u), esi);
/* ffb453: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* ffb456: xor eax, eax */
  eax = 0;
/* ffb458: lea esp, [ebp - 0x8c] */
  esp = (uint32_t)(ebp + 0xffffff74u);
/* ffb45e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffb45f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffb460: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffb461: mov esp, ebp */
  esp = ebp;
/* ffb463: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffb464: ret  */
  esp += 4; SPILL(); return;
}

void f_ffb470(void) {
  LOAD_REGS();
L_ffb470: /* ffb470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffb471: mov ebp, esp */
  ebp = esp;
/* ffb473: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffb476: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffb477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffb478: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ffb47b: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* ffb47e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ffb481: mov eax, dword ptr [eax + 0x68] */
  eax = R32((uint32_t)(eax + 0x68u));
/* ffb484: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffb487: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* ffb48a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffb48d: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* ffb490: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* ffb493: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ffb496: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* ffb499: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffb49c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* ffb49f: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* ffb4a2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* ffb4a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffb4a6: lea edi, [ecx*4] */
  edi = (uint32_t)(ecx*4);
/* ffb4ad: mov eax, edi */
  eax = edi;
/* ffb4af: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb4b2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb4b5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ffb4b8: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb4bdu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb4bd: mov eax, edi */
  eax = edi;
/* ffb4bf: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb4c2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb4c5: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* ffb4c8: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb4cdu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb4cd: mov eax, edi */
  eax = edi;
/* ffb4cf: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb4d2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb4d5: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* ffb4d8: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb4ddu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb4dd: mov eax, edi */
  eax = edi;
/* ffb4df: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb4e2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffb4e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ffb4e8: call 0x1009200 */
  esp -= 4; W32(esp, 0xffb4edu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ffb4ed: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffb4f0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffb4f3: mov eax, esp */
  eax = esp;
/* ffb4f5: xor ebx, ebx */
  ebx = 0;
/* ffb4f7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb4f9: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* ffb4fc: jle 0xffb589 */
  if ((zf || sf != of)) goto L_ffb589;
L_ffb502: /* ffb502: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffb505: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb508: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffb50b: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ffb50e: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ffb510: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffb513: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb515: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* ffb518: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ffb51b: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* ffb51e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ffb521: jmp 0xffb526 */
  goto L_ffb526;
L_ffb523: /* ffb523: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
L_ffb526: /* ffb526: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffb529: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb52c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ffb52e: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffb531: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* ffb534: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ffb537: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* ffb53a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb53b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffb53c: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xffb53fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb53f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb542: xor edx, edx */
  edx = 0;
/* ffb544: mov dword ptr [ecx + edi], eax */
  W32((uint32_t)(ecx + edi), eax);
/* ffb547: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffb54a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb54d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffb54f: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ffb552: xor eax, eax */
  eax = 0;
/* ffb554: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* ffb556: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ffb558: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
/* ffb55b: mov edx, ecx */
  edx = ecx;
/* ffb55d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ffb560: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffb562: mov ecx, edx */
  ecx = edx;
/* ffb564: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb567: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ffb56a: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ffb56c: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb56f: mov eax, 4 */
  eax = 0x4u;
/* ffb574: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffb576: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffb578: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffb57b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ffb57e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffb57f: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb581: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* ffb584: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* ffb587: jl 0xffb523 */
  if ((sf != of)) goto L_ffb523;
L_ffb589: /* ffb589: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffb58c: mov eax, dword ptr [edi + 0x4cc] */
  eax = R32((uint32_t)(edi + 0x4ccu));
/* ffb592: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb594: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffb59b: jle 0xffb5e1 */
  if ((zf || sf != of)) goto L_ffb5e1;
L_ffb59d: /* ffb59d: lea eax, [edi + 0x8d0] */
  eax = (uint32_t)(edi + 0x8d0u);
L_ffb5a3: /* ffb5a3: mov edx, dword ptr [eax - 0x400] */
  edx = R32((uint32_t)(eax + 0xfffffc00u));
/* ffb5a9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb5ac: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* ffb5af: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffb5b1: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* ffb5b4: jne 0xffb5be */
  if (!zf) goto L_ffb5be;
L_ffb5b6: /* ffb5b6: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* ffb5b8: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffb5bc: je 0xffb5cd */
  if (zf) goto L_ffb5cd;
L_ffb5be: /* ffb5be: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* ffb5c4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ffb5c6: mov dword ptr [ecx + edx*4], 1 */
  W32((uint32_t)(ecx + edx*4), 0x1u);
L_ffb5cd: /* ffb5cd: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb5d0: mov edx, dword ptr [edi + 0x4cc] */
  edx = R32((uint32_t)(edi + 0x4ccu));
/* ffb5d6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb5d7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb5da: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb5dc: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* ffb5df: jl 0xffb5a3 */
  if ((sf != of)) goto L_ffb5a3;
L_ffb5e1: /* ffb5e1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ffb5e3: xor ebx, ebx */
  ebx = 0;
/* ffb5e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb5e7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ffb5ea: jle 0xffb67c */
  if ((zf || sf != of)) goto L_ffb67c;
L_ffb5f0: /* ffb5f0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffb5f3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* ffb5f6: xor ecx, ecx */
  ecx = 0;
/* ffb5f8: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb5fa: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* ffb5fd: jle 0xffb64b */
  if ((zf || sf != of)) goto L_ffb64b;
L_ffb5ff: /* ffb5ff: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb602: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffb605: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* ffb608: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb60b: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffb60d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffb610: /* ffb610: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ffb613: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffb615: jne 0xffb63b */
  if (!zf) goto L_ffb63b;
L_ffb617: /* ffb617: mov ebx, dword ptr [ebp - 0x10] */
  ebx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb61a: xor edx, edx */
  edx = 0;
/* ffb61c: cmp dword ptr [ebx + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffb61f: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb622: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ffb625: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffb626: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ffb629: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ffb62c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb62f: mov dword ptr [eax - 4], edx */
  W32((uint32_t)(eax + 0xfffffffcu), edx);
/* ffb632: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ffb634: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* ffb637: mov dword ptr [edi + eax - 4], edx */
  W32((uint32_t)(edi + eax + 0xfffffffcu), edx);
L_ffb63b: /* ffb63b: add dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* ffb63f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffb642: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb643: cmp ecx, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb646: jl 0xffb610 */
  if ((sf != of)) goto L_ffb610;
L_ffb648: /* ffb648: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
L_ffb64b: /* ffb64b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffb64e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* ffb651: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* ffb654: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb657: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* ffb65a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb65b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffb65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb65f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb662: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb663: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ffb666: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb667: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffb668: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xffb66bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb66b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ffb66d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb670: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffb671: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb673: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ffb676: jl 0xffb5f0 */
  if ((sf != of)) goto L_ffb5f0;
L_ffb67c: /* ffb67c: mov ecx, dword ptr [edi + 0x4cc] */
  ecx = R32((uint32_t)(edi + 0x4ccu));
/* ffb682: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* ffb683: js 0xffb73b */
  if (sf) goto L_ffb73b;
L_ffb689: /* ffb689: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffb68c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb68d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffb68f: mov ebx, eax */
  ebx = eax;
/* ffb691: lea edi, [edi + ecx*4 + 0x8d0] */
  edi = (uint32_t)(edi + ecx*4 + 0x8d0u);
/* ffb698: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ffb69a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ffb69b: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ffb69e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_ffb6a1: /* ffb6a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb6a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffb6a5: mov edx, dword ptr [edi - 0x400] */
  edx = R32((uint32_t)(edi + 0xfffffc00u));
/* ffb6ab: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* ffb6ae: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ffb6b0: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* ffb6b3: jle 0xffb728 */
  if ((zf || sf != of)) goto L_ffb728;
L_ffb6b9: /* ffb6b9: mov edx, eax */
  edx = eax;
/* ffb6bb: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ffb6bd: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_ffb6c0: /* ffb6c0: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* ffb6c2: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* ffb6c5: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* ffb6c8: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffb6cb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ffb6ce: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffb6d4: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffb6d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffb6d9: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffb6df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffb6e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffb6e4: jne 0xffb6fe */
  if (!zf) goto L_ffb6fe;
L_ffb6e6: /* ffb6e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffb6e9: jne 0xffb6f6 */
  if (!zf) goto L_ffb6f6;
L_ffb6eb: /* ffb6eb: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffb6ee: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ffb6f1: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* ffb6f4: jmp 0xffb719 */
  goto L_ffb719;
L_ffb6f6: /* ffb6f6: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffb6f9: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ffb6fc: jmp 0xffb714 */
  goto L_ffb714;
L_ffb6fe: /* ffb6fe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffb701: jne 0xffb70e */
  if (!zf) goto L_ffb70e;
L_ffb703: /* ffb703: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ffb706: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ffb709: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* ffb70c: jmp 0xffb719 */
  goto L_ffb719;
L_ffb70e: /* ffb70e: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ffb711: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
L_ffb714: /* ffb714: mov dword ptr [edx + ecx], edi */
  W32((uint32_t)(edx + ecx), edi);
/* ffb717: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
L_ffb719: /* ffb719: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* ffb71c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb71f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffb720: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ffb723: jne 0xffb6c0 */
  if (!zf) goto L_ffb6c0;
L_ffb725: /* ffb725: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_ffb728: /* ffb728: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ffb72b: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffb72e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ffb72f: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ffb732: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* ffb735: jne 0xffb6a1 */
  if (!zf) goto L_ffb6a1;
L_ffb73b: /* ffb73b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffb73e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffb741: xor edi, edi */
  edi = 0;
/* ffb743: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb745: jle 0xffb787 */
  if ((zf || sf != of)) goto L_ffb787;
L_ffb747: /* ffb747: mov ebx, dword ptr [ebp - 0xc] */
  ebx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffb74a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffb74d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffb750: /* ffb750: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ffb753: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ffb755: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* ffb758: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* ffb75b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ffb75d: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* ffb760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb761: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ffb764: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* ffb767: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb768: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ffb76b: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* ffb76e: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* ffb771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb772: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffb773: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xffb776u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb776: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ffb779: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffb77c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb77f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffb780: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffb783: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb785: jl 0xffb750 */
  if ((sf != of)) goto L_ffb750;
L_ffb787: /* ffb787: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffb78a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffb78d: xor edi, edi */
  edi = 0;
/* ffb78f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb791: jle 0xffb7ba */
  if ((zf || sf != of)) goto L_ffb7ba;
L_ffb793: /* ffb793: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ffb795: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ffb798: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ffb79b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ffb79e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb7a0: mov eax, dword ptr [edx + ecx*4 + 0xc] */
  eax = R32((uint32_t)(edx + ecx*4 + 0xcu));
/* ffb7a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ffb7a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb7a7: call 0xffc420 */
  esp -= 4; W32(esp, 0xffb7acu); SPILL(); f_ffc420(); if (g_unwind) return; RELOAD();
/* ffb7ac: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffb7af: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffb7b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb7b5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffb7b6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb7b8: jl 0xffb793 */
  if ((sf != of)) goto L_ffb793;
L_ffb7ba: /* ffb7ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffb7bd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ffb7c0: xor ebx, ebx */
  ebx = 0;
/* ffb7c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb7c4: jle 0xffb80c */
  if ((zf || sf != of)) goto L_ffb80c;
L_ffb7c6: /* ffb7c6: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ffb7c9: cmp dword ptr [edx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ffb7cd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ffb7cf: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* ffb7d2: je 0xffb7f6 */
  if (zf) goto L_ffb7f6;
L_ffb7d4: /* ffb7d4: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ffb7d7: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ffb7da: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* ffb7dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb7de: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* ffb7e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb7e2: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* ffb7e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffb7e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb7e7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffb7ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb7eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffb7ec: call 0x1008f70 */
  esp -= 4; W32(esp, 0xffb7f1u); SPILL(); f_1008f70(); if (g_unwind) return; RELOAD();
/* ffb7f1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb7f4: jmp 0xffb801 */
  goto L_ffb801;
L_ffb7f6: /* ffb7f6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffb7f9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb7fb: jle 0xffb801 */
  if ((zf || sf != of)) goto L_ffb801;
L_ffb7fd: /* ffb7fd: xor eax, eax */
  eax = 0;
/* ffb7ff: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_ffb801: /* ffb801: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ffb804: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ffb807: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ffb808: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffb80a: jl 0xffb7c6 */
  if ((sf != of)) goto L_ffb7c6;
L_ffb80c: /* ffb80c: xor eax, eax */
  eax = 0;
/* ffb80e: lea esp, [ebp - 0x3c] */
  esp = (uint32_t)(ebp + 0xffffffc4u);
/* ffb811: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffb812: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffb813: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffb814: mov esp, ebp */
  esp = ebp;
/* ffb816: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffb817: ret  */
  esp += 4; SPILL(); return;
}

void f_ffb820(void) {
  LOAD_REGS();
L_ffb820: /* ffb820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffb821: mov ebp, esp */
  ebp = esp;
/* ffb823: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ffb826: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffb829: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffb82a: mov ebx, dword ptr [0x100a03c] */
  ebx = R32((uint32_t)(0x100a03cu));
/* ffb830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffb831: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffb832: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* ffb835: mov eax, edi */
  eax = edi;
/* ffb837: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ffb838: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ffb83b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffb83d: mov esi, eax */
  esi = eax;
/* ffb83f: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* ffb842: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* ffb849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffb84a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffb84cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb84c: lea ecx, [esi + edi] */
  ecx = (uint32_t)(esi + edi);
/* ffb84f: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ffb852: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffb853: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ffb857: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xffb859u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffb859: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* ffb85c: mov ebx, eax */
  ebx = eax;
/* ffb85e: mov eax, edi */
  eax = edi;
/* ffb860: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ffb864: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffb866: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffb86a: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ffb86e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffb871: call 0x1009172 */
  esp -= 4; W32(esp, 0xffb876u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffb876: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* ffb87b: fstp qword ptr [esp + 0x3c] */
  WF64((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* ffb87f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffb881: call 0x1009172 */
  esp -= 4; W32(esp, 0xffb886u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffb886: fdivr qword ptr [esp + 0x40] */
  ST0 = (F64((uint32_t)(esp + 0x40u))) / ST0;
/* ffb88a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb88d: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffb893: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffb896: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xffb89cu); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ffb89c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffb89f: call 0x1009188 */
  esp -= 4; W32(esp, 0xffb8a4u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffb8a4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ffb8a8: mov ecx, eax */
  ecx = eax;
/* ffb8aa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ffb8ad: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ffb8af: xor edi, edi */
  edi = 0;
/* ffb8b1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffb8b3: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffb8b7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* ffb8ba: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* ffb8bd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* ffb8c0: jle 0xffb9aa */
  if ((zf || sf != of)) goto L_ffb9aa;
L_ffb8c6: /* ffb8c6: fld dword ptr [0x100a168] */
  { double v = F32((uint32_t)(0x100a168u)); FPUSH(v); }
/* ffb8cc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffb8cf: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* ffb8d3: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* ffb8d6: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* ffb8da: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ffb8de: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* ffb8e1: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ffb8e5: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
/* ffb8ed: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ffb8f1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ffb8f5: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffb8f9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffb8fd: fld dword ptr [0x100a168] */
  { double v = F32((uint32_t)(0x100a168u)); FPUSH(v); }
/* ffb903: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* ffb907: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* ffb90b: jmp 0xffb910 */
  goto L_ffb910;
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
