#include "recomp.h"
#include "rec_mod.h"

void f_ff4fe0(void) {
  LOAD_REGS();
L_ff4fe0: /* ff4fe0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ff4fe4: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* ff4fe7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ff4fe9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ff4fec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff4fed: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* ff4ff0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4ff1: mov ebp, dword ptr [ecx + 0x28] */
  ebp = R32((uint32_t)(ecx + 0x28u));
/* ff4ff4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4ff5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff4ff6: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* ff4ff9: mov eax, dword ptr [edi + ebp*4] */
  eax = R32((uint32_t)(edi + ebp*4));
/* ff4ffc: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* ff5000: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff5001: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff5004: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff5006: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff5009: mov esi, ebx */
  esi = ebx;
/* ff500b: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff500d: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff500f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff5011: je 0xff5037 */
  if (zf) goto L_ff5037;
L_ff5013: /* ff5013: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ff5016: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* ff5019: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff501a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff501d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff501f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff5022: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* ff5024: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff5026: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* ff5029: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* ff502c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff502d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff5030: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff5032: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff5035: jmp 0xff5044 */
  goto L_ff5044;
L_ff5037: /* ff5037: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff5039: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff503a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff503d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff503f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff5042: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_ff5044: /* ff5044: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ff5048: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff504a: mov eax, dword ptr [ebp + 0xac] */
  eax = R32((uint32_t)(ebp + 0xacu));
/* ff5050: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5052: jl 0xff5058 */
  if ((sf != of)) goto L_ff5058;
L_ff5054: /* ff5054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5056: jl 0xff5088 */
  if ((sf != of)) goto L_ff5088;
L_ff5058: /* ff5058: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff505b: mov eax, ebx */
  eax = ebx;
/* ff505d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff505e: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xff505e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff5060: mov edi, eax */
  edi = eax;
/* ff5062: mov eax, esi */
  eax = esi;
/* ff5064: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff5065: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xff5065);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff5067: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5069: jge 0xff5081 */
  if ((sf == of)) goto L_ff5081;
L_ff506b: /* ff506b: mov ecx, dword ptr [ebp + 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xa0u));
/* ff5071: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
L_ff5074: /* ff5074: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff5077: jne 0xff5088 */
  if (!zf) goto L_ff5088;
L_ff5079: /* ff5079: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff507a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff507d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff507f: jl 0xff5074 */
  if ((sf != of)) goto L_ff5074;
L_ff5081: /* ff5081: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5082: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5083: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5084: xor eax, eax */
  eax = 0;
/* ff5086: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5087: ret  */
  esp += 4; SPILL(); return;
L_ff5088: /* ff5088: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5089: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff508a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff508b: mov eax, 1 */
  eax = 0x1u;
/* ff5090: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5091: ret  */
  esp += 4; SPILL(); return;
}

void f_ff50a0(void) {
  LOAD_REGS();
L_ff50a0: /* ff50a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff50a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff50a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff50a3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff50a7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff50aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff50ab: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ff50af: mov eax, edi */
  eax = edi;
/* ff50b1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff50b2: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xff50b2);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff50b4: mov ebp, dword ptr [esi + 0xa0] */
  ebp = R32((uint32_t)(esi + 0xa0u));
/* ff50ba: mov ebx, eax */
  ebx = eax;
/* ff50bc: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* ff50c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff50c3: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xff50c3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff50c5: lea ecx, [ebp + ebx*4] */
  ecx = (uint32_t)(ebp + ebx*4);
/* ff50c9: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff50cb: lea eax, [eax*4 + 8] */
  eax = (uint32_t)(eax*4 + 0x8u);
/* ff50d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff50d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff50d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff50d5: call dword ptr [0x100a044] */
  esp -= 4; W32(esp, 0xff50dbu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* ff50db: mov edx, dword ptr [esi + 0xa8] */
  edx = R32((uint32_t)(esi + 0xa8u));
/* ff50e1: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* ff50e7: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff50e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff50ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff50ee: mov dword ptr [esi + 0xa8], edx */
  W32((uint32_t)(esi + 0xa8u), edx);
/* ff50f4: jl 0xff50fe */
  if ((sf != of)) goto L_ff50fe;
L_ff50f6: /* ff50f6: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff50f8: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
L_ff50fe: /* ff50fe: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* ff5104: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff5106: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5107: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* ff510d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff510e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff510f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5110: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5120(void) {
  LOAD_REGS();
L_ff5120: /* ff5120: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5122: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5123: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5124: mov esi, eax */
  esi = eax;
/* ff5126: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* ff5128: xor eax, eax */
  eax = 0;
/* ff512a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff512c: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ff5130: lea ebp, [edx + ecx*4] */
  ebp = (uint32_t)(edx + ecx*4);
/* ff5133: je 0xff513c */
  if (zf) goto L_ff513c;
L_ff5135: /* ff5135: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff5138: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_ff513c: /* ff513c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff513e: jle 0xff5159 */
  if ((zf || sf != of)) goto L_ff5159;
L_ff5140: /* ff5140: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ff5144: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
L_ff5147: /* ff5147: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ff5149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff514a: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* ff514e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5151: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5153: fstp dword ptr [ebp + eax*4 - 4] */
  WF32((uint32_t)(ebp + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ff5157: jl 0xff5147 */
  if ((sf != of)) goto L_ff5147;
L_ff5159: /* ff5159: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff515a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff515c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff515d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff515e: call 0x1003170 */
  esp -= 4; W32(esp, 0xff5163u); SPILL(); f_1003170(); if (g_unwind) return; RELOAD();
/* ff5163: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* ff5166: mov edx, eax */
  edx = eax;
/* ff5168: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* ff516b: mov ecx, ebx */
  ecx = ebx;
/* ff516d: lea esi, [esi + edx*4] */
  esi = (uint32_t)(esi + edx*4);
/* ff5170: mov edi, ebp */
  edi = ebp;
/* ff5172: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff5174: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5177: xor ecx, ecx */
  ecx = 0;
/* ff5179: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff517b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff517c: jle 0xff5191 */
  if ((zf || sf != of)) goto L_ff5191;
L_ff517e: /* ff517e: mov edi, edi */
  edi = edi;
L_ff5180: /* ff5180: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ff5184: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff5185: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5187: fadd dword ptr [ebp + ecx*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + ecx*4 + 0xfffffffcu)));
/* ff518b: fstp dword ptr [ebp + ecx*4 - 4] */
  WF32((uint32_t)(ebp + ecx*4 + 0xfffffffcu), ST0); FPOP();
/* ff518f: jl 0xff5180 */
  if ((sf != of)) goto L_ff5180;
L_ff5191: /* ff5191: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5192: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5193: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5194: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff5195: ret  */
  esp += 4; SPILL(); return;
}

void f_ff51a0(void) {
  LOAD_REGS();
L_ff51a0: /* ff51a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff51a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff51a2: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* ff51a4: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff51aau); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff51aa: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff51ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff51b1: mov ecx, 0x18 */
  ecx = 0x18u;
/* ff51b6: mov edi, eax */
  edi = eax;
/* ff51b8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff51ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff51bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff51bc: ret  */
  esp += 4; SPILL(); return;
}

void f_ff51c0(void) {
  LOAD_REGS();
L_ff51c0: /* ff51c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ff51c4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff51c6: je 0xff51df */
  if (zf) goto L_ff51df;
L_ff51c8: /* ff51c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff51c9: mov ecx, 0x18 */
  ecx = 0x18u;
/* ff51ce: xor eax, eax */
  eax = 0;
/* ff51d0: mov edi, edx */
  edi = edx;
/* ff51d2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff51d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff51d5: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ff51d9: jmp dword ptr [0x100a040] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_ff51df: /* ff51df: ret  */
  esp += 4; SPILL(); return;
}

void f_ff51e0(void) {
  LOAD_REGS();
L_ff51e0: /* ff51e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff51e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ff51e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff51e7: je 0xff5227 */
  if (zf) goto L_ff5227;
L_ff51e9: /* ff51e9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff51ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff51ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff51ef: mov ebx, dword ptr [0x100a040] */
  ebx = R32((uint32_t)(0x100a040u));
/* ff51f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff51f6: je 0xff51fe */
  if (zf) goto L_ff51fe;
L_ff51f8: /* ff51f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff51f9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff51fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff51fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff51fe: /* ff51fe: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff5201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff5203: je 0xff520b */
  if (zf) goto L_ff520b;
L_ff5205: /* ff5205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5206: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff5208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff5208: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff520b: /* ff520b: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* ff520e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff520f: call 0xff98a0 */
  esp -= 4; W32(esp, 0xff5214u); SPILL(); f_ff98a0(); if (g_unwind) return; RELOAD();
/* ff5214: xor eax, eax */
  eax = 0;
/* ff5216: mov ecx, 0xd */
  ecx = 0xdu;
/* ff521b: mov edi, esi */
  edi = esi;
/* ff521d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff521e: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5220: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff5222u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff5222: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5225: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5226: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ff5227: /* ff5227: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5228: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5230(void) {
  LOAD_REGS();
L_ff5230: /* ff5230: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5231: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5232: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ff5236: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff5238: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5239: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff523d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff523f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5240: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5241: call 0x100913c */
  esp -= 4; W32(esp, 0xff5246u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5246: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff5249: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff524b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff524c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff524d: call 0x100913c */
  esp -= 4; W32(esp, 0xff5252u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5252: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff5255: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff5257: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5258: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5259: call 0x100913c */
  esp -= 4; W32(esp, 0xff525eu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff525e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff5261: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff5263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5264: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5265: call 0x100913c */
  esp -= 4; W32(esp, 0xff526au); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff526a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* ff526d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff526f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5270: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5271: call 0x100913c */
  esp -= 4; W32(esp, 0xff5276u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5276: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* ff5279: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff527b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff527c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff527d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff527e: call 0x100913c */
  esp -= 4; W32(esp, 0xff5283u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5283: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff5286: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5289: xor ebx, ebx */
  ebx = 0;
/* ff528b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff528d: jle 0xff52ae */
  if ((zf || sf != of)) goto L_ff52ae;
L_ff528f: /* ff528f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5290: lea ebp, [esi + 0x18] */
  ebp = (uint32_t)(esi + 0x18u);
L_ff5293: /* ff5293: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff5296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff5298: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5299: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff529a: call 0x100913c */
  esp -= 4; W32(esp, 0xff529fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff529f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff52a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff52a5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff52a6: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff52a9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff52ab: jl 0xff5293 */
  if ((sf != of)) goto L_ff5293;
L_ff52ad: /* ff52ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ff52ae: /* ff52ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff52af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff52b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff52b1: ret  */
  esp += 4; SPILL(); return;
}

void f_ff52c0(void) {
  LOAD_REGS();
L_ff52c0: /* ff52c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff52c4: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff52c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff52c8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff52c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff52ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff52cb: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* ff52cd: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff52d1: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff52d7u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff52d7: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff52db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff52dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff52de: mov esi, eax */
  esi = eax;
/* ff52e0: call 0x1009154 */
  esp -= 4; W32(esp, 0xff52e5u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff52e5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff52e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff52e8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff52ea: call 0x1009154 */
  esp -= 4; W32(esp, 0xff52efu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff52ef: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff52f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff52f2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff52f5: call 0x1009154 */
  esp -= 4; W32(esp, 0xff52fau); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff52fa: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* ff52fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff52fd: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ff5300: call 0x1009154 */
  esp -= 4; W32(esp, 0xff5305u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff5305: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff5307: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5308: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ff530b: call 0x1009154 */
  esp -= 4; W32(esp, 0xff5310u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff5310: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff5312: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5313: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* ff5316: call 0x1009154 */
  esp -= 4; W32(esp, 0xff531bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff531b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff531d: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5320: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5321: mov ecx, 1 */
  ecx = 0x1u;
/* ff5326: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5328: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* ff532b: jl 0xff5370 */
  if ((sf != of)) goto L_ff5370;
L_ff532d: /* ff532d: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5330: jl 0xff5370 */
  if ((sf != of)) goto L_ff5370;
L_ff5332: /* ff5332: cmp dword ptr [esi + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5335: jl 0xff5370 */
  if ((sf != of)) goto L_ff5370;
L_ff5337: /* ff5337: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5339: jl 0xff5370 */
  if ((sf != of)) goto L_ff5370;
L_ff533b: /* ff533b: xor ebp, ebp */
  ebp = 0;
/* ff533d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff533f: jle 0xff5369 */
  if ((zf || sf != of)) goto L_ff5369;
L_ff5341: /* ff5341: lea ebx, [esi + 0x18] */
  ebx = (uint32_t)(esi + 0x18u);
L_ff5344: /* ff5344: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff5346: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5347: call 0x1009154 */
  esp -= 4; W32(esp, 0xff534cu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff534c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff534f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5351: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* ff5353: jl 0xff5370 */
  if ((sf != of)) goto L_ff5370;
L_ff5355: /* ff5355: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ff5359: cmp eax, dword ptr [edx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff535c: jge 0xff5370 */
  if ((sf == of)) goto L_ff5370;
L_ff535e: /* ff535e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff5361: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff5362: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff5365: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5367: jl 0xff5344 */
  if ((sf != of)) goto L_ff5344;
L_ff5369: /* ff5369: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff536a: mov eax, esi */
  eax = esi;
/* ff536c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff536d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff536e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff536f: ret  */
  esp += 4; SPILL(); return;
L_ff5370: /* ff5370: xor eax, eax */
  eax = 0;
/* ff5372: mov ecx, 0x18 */
  ecx = 0x18u;
/* ff5377: mov edi, esi */
  edi = esi;
/* ff5379: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff537a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff537c: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff5382u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff5382: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5385: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5386: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5387: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5388: xor eax, eax */
  eax = 0;
/* ff538a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff538b: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5390(void) {
  LOAD_REGS();
L_ff5390: /* ff5390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5391: mov ebp, esp */
  ebp = esp;
/* ff5393: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ff5396: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff5399: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff539a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ff539d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff53a0: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff53a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff53a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff53a5: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* ff53a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff53a9: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff53ad: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff53b3u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff53b3: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ff53b6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ff53b8: mov esi, eax */
  esi = eax;
/* ff53ba: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff53bd: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* ff53c0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ff53c2: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff53c6: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* ff53c9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff53ca: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff53cc: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff53ce: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff53d0: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff53d3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff53d6: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* ff53d9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff53db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff53de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff53e0: je 0xff53f6 */
  if (zf) goto L_ff53f6;
L_ff53e2: /* ff53e2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff53e5: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff53e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff53e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff53ea: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* ff53ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff53ee: call 0xff9860 */
  esp -= 4; W32(esp, 0xff53f3u); SPILL(); f_ff9860(); if (g_unwind) return; RELOAD();
/* ff53f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff53f6: /* ff53f6: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff53f9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff53fc: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff5400: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff5404: fdiv dword ptr [0x100a16c] */
  ST0 = ST0 / (F32((uint32_t)(0x100a16cu)));
/* ff540a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff540e: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* ff5411: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff5415: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff5418: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff541c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff5420: fdiv dword ptr [0x100a16c] */
  ST0 = ST0 / (F32((uint32_t)(0x100a16cu)));
/* ff5426: fmul dword ptr [0x100a0b0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0b0u)));
/* ff542c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff542f: call 0x1009178 */
  esp -= 4; W32(esp, 0xff5434u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ff5434: fmul qword ptr [0x100a0a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0a8u)));
/* ff543a: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff543e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff5442: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* ff5446: fmul dword ptr [0x100a0c0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0c0u)));
/* ff544c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff544f: call 0x1009178 */
  esp -= 4; W32(esp, 0xff5454u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ff5454: fmul qword ptr [0x100a0b8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0b8u)));
/* ff545a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff545c: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* ff5463: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5464: fadd qword ptr [esp + 0x2c] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x2cu)));
/* ff5468: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff546b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff546f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff5473: fdiv dword ptr [0x100a16c] */
  ST0 = ST0 / (F32((uint32_t)(0x100a16cu)));
/* ff5479: fmul dword ptr [0x100a0a0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0a0u)));
/* ff547f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff5481: fdivr qword ptr [esp + 0x24] */
  ST0 = (F64((uint32_t)(esp + 0x24u))) / ST0;
/* ff5485: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* ff5489: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff548fu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff548f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ff5492: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff5494: xor ebx, ebx */
  ebx = 0;
/* ff5496: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff549b: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ff549f: jle 0xff558d */
  if ((zf || sf != of)) goto L_ff558d;
L_ff54a5: /* ff54a5: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff54a8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff54ab: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff54af: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff54b3: fdiv dword ptr [0x100a16c] */
  ST0 = ST0 / (F32((uint32_t)(0x100a16cu)));
/* ff54b9: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* ff54bb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff54bf: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* ff54c3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff54c7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff54cb: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff54cf: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff54d3: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* ff54d7: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff54db: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff54de: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff54e2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff54e6: fdiv dword ptr [0x100a16c] */
  ST0 = ST0 / (F32((uint32_t)(0x100a16cu)));
/* ff54ec: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* ff54ee: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff54f2: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* ff54f6: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* ff54fa: fmul dword ptr [0x100a0b0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0b0u)));
/* ff5500: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff5503: call 0x1009178 */
  esp -= 4; W32(esp, 0xff5508u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ff5508: fmul qword ptr [0x100a0a8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0a8u)));
/* ff550e: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff5512: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff5516: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* ff551a: fmul dword ptr [0x100a0c0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0c0u)));
/* ff5520: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff5523: call 0x1009178 */
  esp -= 4; W32(esp, 0xff5528u); SPILL(); f_1009178(); if (g_unwind) return; RELOAD();
/* ff5528: fmul qword ptr [0x100a0b8] */
  ST0 = ST0 * (F64((uint32_t)(0x100a0b8u)));
/* ff552e: fadd qword ptr [esp + 0x20] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x20u)));
/* ff5532: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff5535: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff5539: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff553d: fdiv dword ptr [0x100a16c] */
  ST0 = ST0 / (F32((uint32_t)(0x100a16cu)));
/* ff5543: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* ff5545: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff5549: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* ff554d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* ff5551: fmul dword ptr [0x100a0a0] */
  ST0 = ST0 * (F32((uint32_t)(0x100a0a0u)));
/* ff5557: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff5559: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* ff555d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff5560: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xff5566u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ff5566: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5569: call 0x1009188 */
  esp -= 4; W32(esp, 0xff556eu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff556e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff5571: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5573: jl 0xff5578 */
  if ((sf != of)) goto L_ff5578;
L_ff5575: /* ff5575: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_ff5578: /* ff5578: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* ff557b: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
/* ff557e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff5580: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff5581: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5583: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ff5587: jl 0xff54a5 */
  if ((sf != of)) goto L_ff54a5;
L_ff558d: /* ff558d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ff5590: mov dword ptr [edx + ebx*4], 0xffffffff */
  W32((uint32_t)(edx + ebx*4), 0xffffffffu);
/* ff5597: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff559a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff559d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff559e: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff55a4u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff55a4: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* ff55a7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff55aa: xor edi, edi */
  edi = 0;
/* ff55ac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff55af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff55b1: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* ff55b5: jle 0xff5608 */
  if ((zf || sf != of)) goto L_ff5608;
L_ff55b7: /* ff55b7: jmp 0xff55c0 */
  goto L_ff55c0;
L_ff55c0: /* ff55c0: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* ff55c3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff55c6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff55ca: fld dword ptr [0x100a168] */
  { double v = F32((uint32_t)(0x100a168u)); FPUSH(v); }
/* ff55d0: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* ff55d4: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff55d8: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff55dc: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* ff55e0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff55e3: call 0x1009244 */
  esp -= 4; W32(esp, 0xff55e8u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* ff55e8: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* ff55eb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ff55ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff55f0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff55f1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff55f5: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* ff55f9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff55fd: fstp dword ptr [ecx + edi*4 - 4] */
  WF32((uint32_t)(ecx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* ff5601: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff5604: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5606: jl 0xff55c0 */
  if ((sf != of)) goto L_ff55c0;
L_ff5608: /* ff5608: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5609: mov eax, esi */
  eax = esi;
/* ff560b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff560c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff560d: mov esp, ebp */
  esp = ebp;
/* ff560f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5610: ret  */
  esp += 4; SPILL(); return;
}

void f_ff55b9(void) {
  LOAD_REGS();
L_ff55b9: /* ff55b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff55c0: /* ff55c0: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* ff55c3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff55c6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff55ca: fld dword ptr [0x100a168] */
  { double v = F32((uint32_t)(0x100a168u)); FPUSH(v); }
/* ff55d0: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* ff55d4: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff55d8: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff55dc: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* ff55e0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff55e3: call 0x1009244 */
  esp -= 4; W32(esp, 0xff55e8u); SPILL(); f_1009244(); if (g_unwind) return; RELOAD();
/* ff55e8: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* ff55eb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ff55ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff55f0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff55f1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff55f5: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* ff55f9: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff55fd: fstp dword ptr [ecx + edi*4 - 4] */
  WF32((uint32_t)(ecx + edi*4 + 0xfffffffcu), ST0); FPOP();
/* ff5601: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff5604: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5606: jl 0xff55c0 */
  if ((sf != of)) goto L_ff55c0;
L_ff5608: /* ff5608: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5609: mov eax, esi */
  eax = esi;
/* ff560b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff560c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff560d: mov esp, ebp */
  esp = ebp;
/* ff560f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5610: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5620(void) {
  LOAD_REGS();
L_ff5620: /* ff5620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5621: mov ebp, esp */
  ebp = esp;
/* ff5623: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff5626: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff5629: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* ff562c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff562d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff562e: lea esi, [eax*4] */
  esi = (uint32_t)(eax*4);
/* ff5635: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ff5638: mov eax, esi */
  eax = esi;
/* ff563a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff563d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff563e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff5641: call 0x1009200 */
  esp -= 4; W32(esp, 0xff5646u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff5646: mov ecx, esi */
  ecx = esi;
/* ff5648: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff564b: mov ebx, esp */
  ebx = esp;
/* ff564d: xor eax, eax */
  eax = 0;
/* ff564f: mov edi, ebx */
  edi = ebx;
/* ff5651: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5653: mov ecx, esi */
  ecx = esi;
/* ff5655: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* ff5658: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff565b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff565d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff565f: xor edx, edx */
  edx = 0;
/* ff5661: xor edi, edi */
  edi = 0;
/* ff5663: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5665: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ff5668: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ff566b: jle 0xff57e7 */
  if ((zf || sf != of)) goto L_ff57e7;
L_ff5671: /* ff5671: mov ecx, edx */
  ecx = edx;
L_ff5673: /* ff5673: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ff5676: mov edx, dword ptr [edx + edi*4] */
  edx = R32((uint32_t)(edx + edi*4));
/* ff5679: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff567c: fld dword ptr [ebx + edx*4] */
  { double v = F32((uint32_t)(ebx + edx*4)); FPUSH(v); }
/* ff567f: fcomp dword ptr [eax + edi*4] */
  fpu_com(ST0, F32((uint32_t)(eax + edi*4)));
  FPOP();
/* ff5682: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff5684: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff5687: jp 0xff5692 */
  if (pf) goto L_ff5692;
L_ff5689: /* ff5689: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff568c: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ff568f: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
L_ff5692: /* ff5692: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* ff5695: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5697: jle 0xff57d7 */
  if ((zf || sf != of)) goto L_ff57d7;
L_ff569d: /* ff569d: mov eax, edx */
  eax = edx;
/* ff569f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff56a1: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* ff56a4: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff56a7: mov edi, 1 */
  edi = 0x1u;
/* ff56ac: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* ff56af: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* ff56b2: jl 0xff578a */
  if ((sf != of)) goto L_ff578a;
L_ff56b8: /* ff56b8: fild dword ptr [ebp - 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* ff56bb: mov esi, 4 */
  esi = 0x4u;
/* ff56c0: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* ff56c3: lea eax, [ebx + ecx*4 + 4] */
  eax = (uint32_t)(ebx + ecx*4 + 0x4u);
/* ff56c7: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_ff56ca: /* ff56ca: fild dword ptr [ebp - 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff56cd: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* ff56d0: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* ff56d3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff56d4: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff56d7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff56da: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff56dd: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff56e0: fdiv dword ptr [ebp - 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff56e3: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff56e6: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ff56ec: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff56ef: fmul dword ptr [ebx + ecx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx*4)));
/* ff56f2: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff56f5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* ff56f8: fmul dword ptr [ebx + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edx*4)));
/* ff56fb: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff56fe: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff5701: cmp esi, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5704: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff5706: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* ff5709: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ff570c: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff570f: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff5712: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff5715: fdiv dword ptr [ebp - 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff5718: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff571b: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ff5721: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff5724: fmul dword ptr [ebx + ecx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx*4)));
/* ff5727: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff572a: fmul dword ptr [ebx + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edx*4)));
/* ff572d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff572f: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ff5732: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff5735: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* ff5738: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff573b: fdiv dword ptr [ebp - 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff573e: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff5741: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ff5747: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff574a: fmul dword ptr [ebx + ecx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx*4)));
/* ff574d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff5750: fmul dword ptr [ebx + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edx*4)));
/* ff5753: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff5755: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ff5758: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ff575b: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* ff575e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* ff5761: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff5764: fdiv dword ptr [ebp - 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff5767: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff576a: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ff5770: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff5773: fmul dword ptr [ebx + ecx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx*4)));
/* ff5776: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff5779: fmul dword ptr [ebx + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edx*4)));
/* ff577c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff577e: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff5781: jl 0xff56ca */
  if ((sf != of)) goto L_ff56ca;
L_ff5787: /* ff5787: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
L_ff578a: /* ff578a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff578c: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* ff578f: jge 0xff57d4 */
  if ((sf == of)) goto L_ff57d4;
L_ff5791: /* ff5791: fild dword ptr [ebp - 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* ff5794: lea esi, [edi + ecx] */
  esi = (uint32_t)(edi + ecx);
/* ff5797: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* ff579a: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ff579d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff57a0: /* ff57a0: fild dword ptr [ebp - 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* ff57a3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff57a4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff57a7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff57a9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* ff57ac: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* ff57af: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff57b2: fdiv dword ptr [ebp - 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff57b5: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff57b8: fld dword ptr [0x100a0c8] */
  { double v = F32((uint32_t)(0x100a0c8u)); FPUSH(v); }
/* ff57be: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff57c1: fmul dword ptr [ebx + ecx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + ecx*4)));
/* ff57c4: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff57c7: fmul dword ptr [ebx + edx*4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + edx*4)));
/* ff57ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff57cc: fstp dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0); FPOP();
/* ff57cf: jl 0xff57a0 */
  if ((sf != of)) goto L_ff57a0;
L_ff57d1: /* ff57d1: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_ff57d4: /* ff57d4: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_ff57d7: /* ff57d7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff57d9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff57da: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff57dc: mov ecx, edx */
  ecx = edx;
/* ff57de: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* ff57e1: jl 0xff5673 */
  if ((sf != of)) goto L_ff5673;
L_ff57e7: /* ff57e7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ff57ea: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* ff57ed: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff57ef: jge 0xff57fe */
  if ((sf == of)) goto L_ff57fe;
L_ff57f1: /* ff57f1: lea edi, [ebx + eax*4] */
  edi = (uint32_t)(ebx + eax*4);
/* ff57f4: lea esi, [edi - 4] */
  esi = (uint32_t)(edi + 0xfffffffcu);
/* ff57f7: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff57f9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff57fb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_ff57fe: /* ff57fe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5800: xor eax, eax */
  eax = 0;
/* ff5802: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5804: jle 0xff581d */
  if ((zf || sf != of)) goto L_ff581d;
L_ff5806: /* ff5806: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff5809: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff580c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff580d: fsub dword ptr [0x100a188] */
  ST0 = ST0 - (F32((uint32_t)(0x100a188u)));
/* ff5813: fstp dword ptr [ecx + eax*4 - 4] */
  WF32((uint32_t)(ecx + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ff5817: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5819: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff581b: jl 0xff5806 */
  if ((sf != of)) goto L_ff5806;
L_ff581d: /* ff581d: mov ecx, dword ptr [0x100d1d0] */
  ecx = R32((uint32_t)(0x100d1d0u));
/* ff5823: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5825: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5827: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5828: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5829: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff582a: push 0x100a17c */
  { uint32_t v = 0x100a17cu; esp -= 4; W32(esp, v); }
/* ff582f: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5834u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5834: mov eax, dword ptr [0x100d1d0] */
  eax = R32((uint32_t)(0x100d1d0u));
/* ff5839: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff583b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ff583e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5840: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff5842: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5843: mov ecx, eax */
  ecx = eax;
/* ff5845: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5846: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5847: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5848: push 0x100a170 */
  { uint32_t v = 0x100a170u; esp -= 4; W32(esp, v); }
/* ff584d: mov dword ptr [0x100d1d0], eax */
  W32((uint32_t)(0x100d1d0u), eax);
/* ff5852: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5857u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5857: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5859: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff585c: xor eax, eax */
  eax = 0;
/* ff585e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5860: jle 0xff5876 */
  if ((zf || sf != of)) goto L_ff5876;
L_ff5862: /* ff5862: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* ff5865: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5866: fadd dword ptr [0x100a188] */
  ST0 = ST0 + (F32((uint32_t)(0x100a188u)));
/* ff586c: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ff5870: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5872: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5874: jl 0xff5862 */
  if ((sf != of)) goto L_ff5862;
L_ff5876: /* ff5876: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff5879: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff587c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff587d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff587e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff587f: call 0xff97a0 */
  esp -= 4; W32(esp, 0xff5884u); SPILL(); f_ff97a0(); if (g_unwind) return; RELOAD();
/* ff5884: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5887: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* ff588a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff588b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff588c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff588d: mov esp, ebp */
  esp = ebp;
/* ff588f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5890: ret  */
  esp += 4; SPILL(); return;
}

void f_ff58a0(void) {
  LOAD_REGS();
L_ff58a0: /* ff58a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff58a1: mov ebp, esp */
  ebp = esp;
/* ff58a3: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff58a6: mov ecx, dword ptr [0x100d1d4] */
  ecx = R32((uint32_t)(0x100d1d4u));
/* ff58ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff58ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff58ae: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ff58b1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff58b3: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* ff58b6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff58b7: mov dword ptr [0x100d1d4], ecx */
  W32((uint32_t)(0x100d1d4u), ecx);
/* ff58bd: xor ecx, ecx */
  ecx = 0;
/* ff58bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff58c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff58c2: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* ff58c5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* ff58c8: jle 0xff58e9 */
  if ((zf || sf != of)) goto L_ff58e9;
L_ff58ca: /* ff58ca: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* ff58cd: mov eax, edi */
  eax = edi;
/* ff58cf: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_ff58d1: /* ff58d1: fild dword ptr [ebx + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* ff58d4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff58d5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff58d8: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* ff58db: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* ff58de: fadd dword ptr [edx + eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax + 0xfffffffcu)));
/* ff58e2: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff58e5: cmp ecx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff58e7: jl 0xff58d1 */
  if ((sf != of)) goto L_ff58d1;
L_ff58e9: /* ff58e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff58ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff58eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff58ec: call 0xff5620 */
  esp -= 4; W32(esp, 0xff58f1u); SPILL(); f_ff5620(); if (g_unwind) return; RELOAD();
/* ff58f1: fstp qword ptr [esp + 4] */
  WF64((uint32_t)(esp + 0x4u), ST0); FPOP();
/* ff58f5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff58f8: call 0x100924a */
  esp -= 4; W32(esp, 0xff58fdu); SPILL(); f_100924a(); if (g_unwind) return; RELOAD();
/* ff58fd: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff5900: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ff5903: mov eax, 1 */
  eax = 0x1u;
/* ff5908: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* ff590a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff590b: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* ff590e: fild dword ptr [ebp - 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff5911: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ff5914: fild dword ptr [ebx + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* ff5917: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* ff591a: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff591d: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* ff5920: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* ff5923: fadd dword ptr [0x100a1ac] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1acu)));
/* ff5929: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff592c: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xff5932u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ff5932: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5935: call 0x1009188 */
  esp -= 4; W32(esp, 0xff593au); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff593a: xor edx, edx */
  edx = 0;
/* ff593c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff593e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* ff5941: jge 0xff5948 */
  if ((sf == of)) goto L_ff5948;
L_ff5943: /* ff5943: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* ff5946: mov eax, edx */
  eax = edx;
L_ff5948: /* ff5948: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff594b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff594d: jle 0xff5954 */
  if ((zf || sf != of)) goto L_ff5954;
L_ff594f: /* ff594f: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* ff5952: mov eax, ecx */
  eax = ecx;
L_ff5954: /* ff5954: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5956: jle 0xff5972 */
  if ((zf || sf != of)) goto L_ff5972;
L_ff5958: /* ff5958: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* ff595b: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* ff595e: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* ff5961: fdiv dword ptr [ebp - 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffff4u)));
/* ff5964: fild dword ptr [ebx + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* ff5967: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* ff596a: fmul dword ptr [ebp - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff0u)));
/* ff596d: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff5970: jmp 0xff5975 */
  goto L_ff5975;
L_ff5972: /* ff5972: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
L_ff5975: /* ff5975: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff5977: je 0xff59ae */
  if (zf) goto L_ff59ae;
L_ff5979: /* ff5979: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff597c: mov ecx, dword ptr [0x100d1d4] */
  ecx = R32((uint32_t)(0x100d1d4u));
/* ff5982: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5983: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5984: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5985: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5986: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff5987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5988: push 0x100a1a8 */
  { uint32_t v = 0x100a1a8u; esp -= 4; W32(esp, v); }
/* ff598d: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5992u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5992: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff5995: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5996: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5997: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5998: call 0xff9ef0 */
  esp -= 4; W32(esp, 0xff599du); SPILL(); f_ff9ef0(); if (g_unwind) return; RELOAD();
/* ff599d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff59a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff59a2: je 0xff59ab */
  if (zf) goto L_ff59ab;
L_ff59a4: /* ff59a4: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_ff59ab: /* ff59ab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_ff59ae: /* ff59ae: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ff59b1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff59b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff59b5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff59b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff59b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff59ba: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* ff59bd: call 0x100913c */
  esp -= 4; W32(esp, 0xff59c2u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff59c2: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ff59c5: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ff59c8: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ff59cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff59ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff59cf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff59d1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff59d4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff59d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff59d7: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* ff59da: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* ff59dd: je 0xff5baa */
  if (zf) goto L_ff5baa;
L_ff59e3: /* ff59e3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff59e6: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff59e9: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff59ec: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff59ef: call 0x1009200 */
  esp -= 4; W32(esp, 0xff59f4u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff59f4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff59f7: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ff59fa: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ff59fd: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff5a00: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff5a03: mov edx, dword ptr [0x100d1d4] */
  edx = R32((uint32_t)(0x100d1d4u));
/* ff5a09: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ff5a0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5a11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5a12: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff5a13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5a14: push 0x100a1a4 */
  { uint32_t v = 0x100a1a4u; esp -= 4; W32(esp, v); }
/* ff5a19: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ff5a1c: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5a21u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5a21: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* ff5a24: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5a27: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5a2a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* ff5a2d: jle 0xff5a80 */
  if ((zf || sf != of)) goto L_ff5a80;
L_ff5a2f: /* ff5a2f: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff5a32: xor ecx, ecx */
  ecx = 0;
/* ff5a34: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5a36: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* ff5a39: jle 0xff5a71 */
  if ((zf || sf != of)) goto L_ff5a71;
L_ff5a3b: /* ff5a3b: jmp 0xff5a40 */
  goto L_ff5a40;
L_ff5a40: /* ff5a40: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* ff5a43: fsub dword ptr [ebp - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff4u)));
/* ff5a46: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* ff5a49: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff5a4c: fcomp dword ptr [ebx + 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x58u)));
  FPOP();
/* ff5a4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff5a51: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff5a54: jnp 0xff5a71 */
  if (!pf) goto L_ff5a71;
L_ff5a56: /* ff5a56: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff5a59: fcomp dword ptr [ebx + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x5cu)));
  FPOP();
/* ff5a5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff5a5e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff5a61: je 0xff5a71 */
  if (zf) goto L_ff5a71;
L_ff5a63: /* ff5a63: mov eax, dword ptr [edi + ecx*4] */
  eax = R32((uint32_t)(edi + ecx*4));
/* ff5a66: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* ff5a69: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff5a6c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff5a6d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5a6f: jl 0xff5a40 */
  if ((sf != of)) goto L_ff5a40;
L_ff5a71: /* ff5a71: xor eax, eax */
  eax = 0;
/* ff5a73: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5a75: setge al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* ff5a78: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ff5a7b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ff5a7e: jmp 0xff5a87 */
  goto L_ff5a87;
L_ff5a80: /* ff5a80: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
L_ff5a87: /* ff5a87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff5a8a: mov ebx, dword ptr [ebx + ecx*4 + 0x18] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x18u));
/* ff5a8e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff5a91: imul ebx, ebx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x2cu);
  ebx = (uint32_t)r;
  }
/* ff5a94: mov ecx, dword ptr [edx + 0xd24] */
  ecx = R32((uint32_t)(edx + 0xd24u));
/* ff5a9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5a9b: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff5a9d: call 0x1002470 */
  esp -= 4; W32(esp, 0xff5aa2u); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff5aa2: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff5aa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5aa6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff5aa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5aaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5aab: call 0x100913c */
  esp -= 4; W32(esp, 0xff5ab0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5ab0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ff5ab3: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* ff5ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5ab7: call 0x1002470 */
  esp -= 4; W32(esp, 0xff5abcu); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff5abc: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* ff5abf: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5ac1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff5ac4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5ac9: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* ff5acc: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* ff5ad3: jle 0xff5b0a */
  if ((zf || sf != of)) goto L_ff5b0a;
L_ff5ad5: /* ff5ad5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff5ad8: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff5adb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5adc: mov eax, ebx */
  eax = ebx;
/* ff5ade: call 0xff5120 */
  esp -= 4; W32(esp, 0xff5ae3u); SPILL(); f_ff5120(); if (g_unwind) return; RELOAD();
/* ff5ae3: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff5ae6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5ae8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5ae9: call 0xff4000 */
  esp -= 4; W32(esp, 0xff5aeeu); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff5aee: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* ff5af1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5af3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff5af6: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* ff5af9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff5afb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff5afe: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff5b00: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5b03: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5b05: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ff5b08: jl 0xff5ad5 */
  if ((sf != of)) goto L_ff5ad5;
L_ff5b0a: /* ff5b0a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff5b0d: mov eax, dword ptr [0x100d1d4] */
  eax = R32((uint32_t)(0x100d1d4u));
/* ff5b12: mov ebx, dword ptr [ebp - 0x10] */
  ebx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff5b15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5b17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5b19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5b1b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff5b1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b1d: push 0x100a19c */
  { uint32_t v = 0x100a19cu; esp -= 4; W32(esp, v); }
/* ff5b22: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5b27u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5b27: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5b29: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5b2c: xor eax, eax */
  eax = 0;
/* ff5b2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5b30: jle 0xff5b40 */
  if ((zf || sf != of)) goto L_ff5b40;
L_ff5b32: /* ff5b32: mov dword ptr [edi + eax*4], 0x3f800000 */
  W32((uint32_t)(edi + eax*4), 0x3f800000u);
/* ff5b39: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5b3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5b3c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5b3e: jl 0xff5b32 */
  if ((sf != of)) goto L_ff5b32;
L_ff5b40: /* ff5b40: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ff5b43: fild dword ptr [ecx + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* ff5b46: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff5b49: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff5b4c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* ff5b4f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ff5b52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b53: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff5b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b57: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff5b59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5b5a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* ff5b5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5b5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5b61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5b62: call 0xff9a00 */
  esp -= 4; W32(esp, 0xff5b67u); SPILL(); f_ff9a00(); if (g_unwind) return; RELOAD();
/* ff5b67: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff5b69: mov eax, dword ptr [0x100d1d4] */
  eax = R32((uint32_t)(0x100d1d4u));
/* ff5b6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff5b70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff5b72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5b74: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff5b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b76: push 0x100a194 */
  { uint32_t v = 0x100a194u; esp -= 4; W32(esp, v); }
/* ff5b7b: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5b80u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5b80: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5b82: mov edx, dword ptr [0x100d1d4] */
  edx = R32((uint32_t)(0x100d1d4u));
/* ff5b88: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff5b8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5b8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5b8e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff5b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b90: push 0x100a18c */
  { uint32_t v = 0x100a18cu; esp -= 4; W32(esp, v); }
/* ff5b95: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5b9au); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5b9a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff5b9d: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5ba0: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff5ba3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5ba4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5ba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5ba6: mov esp, ebp */
  esp = ebp;
/* ff5ba8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5ba9: ret  */
  esp += 4; SPILL(); return;
L_ff5baa: /* ff5baa: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5bac: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff5baf: mov edx, ecx */
  edx = ecx;
/* ff5bb1: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff5bb4: xor eax, eax */
  eax = 0;
/* ff5bb6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5bb8: mov ecx, edx */
  ecx = edx;
/* ff5bba: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff5bbd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff5bbf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5bc1: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ff5bc4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff5bc7: mov edx, ecx */
  edx = ecx;
/* ff5bc9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff5bcc: xor eax, eax */
  eax = 0;
/* ff5bce: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5bd0: mov ecx, edx */
  ecx = edx;
/* ff5bd2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff5bd5: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff5bd7: xor eax, eax */
  eax = 0;
/* ff5bd9: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff5bdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5bdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5bdf: mov esp, ebp */
  esp = ebp;
/* ff5be1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5be2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5a3d(void) {
  LOAD_REGS();
L_ff5a3d: /* ff5a3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff5a40: /* ff5a40: fld dword ptr [edi + ecx*4] */
  { double v = F32((uint32_t)(edi + ecx*4)); FPUSH(v); }
/* ff5a43: fsub dword ptr [ebp - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff4u)));
/* ff5a46: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* ff5a49: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff5a4c: fcomp dword ptr [ebx + 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x58u)));
  FPOP();
/* ff5a4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff5a51: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff5a54: jnp 0xff5a71 */
  if (!pf) goto L_ff5a71;
L_ff5a56: /* ff5a56: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff5a59: fcomp dword ptr [ebx + 0x5c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x5cu)));
  FPOP();
/* ff5a5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff5a5e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff5a61: je 0xff5a71 */
  if (zf) goto L_ff5a71;
L_ff5a63: /* ff5a63: mov eax, dword ptr [edi + ecx*4] */
  eax = R32((uint32_t)(edi + ecx*4));
/* ff5a66: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* ff5a69: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff5a6c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff5a6d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5a6f: jl 0xff5a40 */
  if ((sf != of)) goto L_ff5a40;
L_ff5a71: /* ff5a71: xor eax, eax */
  eax = 0;
/* ff5a73: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5a75: setge al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* ff5a78: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ff5a7b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ff5a7e: jmp 0xff5a87 */
  goto L_ff5a87;
L_ff5a87: /* ff5a87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff5a8a: mov ebx, dword ptr [ebx + ecx*4 + 0x18] */
  ebx = R32((uint32_t)(ebx + ecx*4 + 0x18u));
/* ff5a8e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff5a91: imul ebx, ebx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x2cu);
  ebx = (uint32_t)r;
  }
/* ff5a94: mov ecx, dword ptr [edx + 0xd24] */
  ecx = R32((uint32_t)(edx + 0xd24u));
/* ff5a9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5a9b: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff5a9d: call 0x1002470 */
  esp -= 4; W32(esp, 0xff5aa2u); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff5aa2: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff5aa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5aa6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff5aa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5aaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5aab: call 0x100913c */
  esp -= 4; W32(esp, 0xff5ab0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5ab0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* ff5ab3: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* ff5ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5ab7: call 0x1002470 */
  esp -= 4; W32(esp, 0xff5abcu); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff5abc: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* ff5abf: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5ac1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff5ac4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5ac9: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* ff5acc: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* ff5ad3: jle 0xff5b0a */
  if ((zf || sf != of)) goto L_ff5b0a;
L_ff5ad5: /* ff5ad5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff5ad8: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff5adb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5adc: mov eax, ebx */
  eax = ebx;
/* ff5ade: call 0xff5120 */
  esp -= 4; W32(esp, 0xff5ae3u); SPILL(); f_ff5120(); if (g_unwind) return; RELOAD();
/* ff5ae3: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff5ae6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5ae8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5ae9: call 0xff4000 */
  esp -= 4; W32(esp, 0xff5aeeu); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff5aee: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* ff5af1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5af3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff5af6: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* ff5af9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff5afb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff5afe: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff5b00: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5b03: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5b05: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ff5b08: jl 0xff5ad5 */
  if ((sf != of)) goto L_ff5ad5;
L_ff5b0a: /* ff5b0a: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff5b0d: mov eax, dword ptr [0x100d1d4] */
  eax = R32((uint32_t)(0x100d1d4u));
/* ff5b12: mov ebx, dword ptr [ebp - 0x10] */
  ebx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff5b15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5b17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5b19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5b1b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff5b1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b1d: push 0x100a19c */
  { uint32_t v = 0x100a19cu; esp -= 4; W32(esp, v); }
/* ff5b22: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5b27u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5b27: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5b29: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5b2c: xor eax, eax */
  eax = 0;
/* ff5b2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5b30: jle 0xff5b40 */
  if ((zf || sf != of)) goto L_ff5b40;
L_ff5b32: /* ff5b32: mov dword ptr [edi + eax*4], 0x3f800000 */
  W32((uint32_t)(edi + eax*4), 0x3f800000u);
/* ff5b39: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5b3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5b3c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5b3e: jl 0xff5b32 */
  if ((sf != of)) goto L_ff5b32;
L_ff5b40: /* ff5b40: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* ff5b43: fild dword ptr [ecx + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* ff5b46: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff5b49: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff5b4c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* ff5b4f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ff5b52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b53: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff5b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b57: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff5b59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5b5a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* ff5b5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5b5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5b61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5b62: call 0xff9a00 */
  esp -= 4; W32(esp, 0xff5b67u); SPILL(); f_ff9a00(); if (g_unwind) return; RELOAD();
/* ff5b67: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff5b69: mov eax, dword ptr [0x100d1d4] */
  eax = R32((uint32_t)(0x100d1d4u));
/* ff5b6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff5b70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff5b72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5b74: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff5b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5b76: push 0x100a194 */
  { uint32_t v = 0x100a194u; esp -= 4; W32(esp, v); }
/* ff5b7b: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5b80u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5b80: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5b82: mov edx, dword ptr [0x100d1d4] */
  edx = R32((uint32_t)(0x100d1d4u));
/* ff5b88: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff5b8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff5b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5b8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5b8e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff5b8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5b90: push 0x100a18c */
  { uint32_t v = 0x100a18cu; esp -= 4; W32(esp, v); }
/* ff5b95: call 0x1008e80 */
  esp -= 4; W32(esp, 0xff5b9au); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ff5b9a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff5b9d: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5ba0: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff5ba3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5ba4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5ba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5ba6: mov esp, ebp */
  esp = ebp;
/* ff5ba8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5ba9: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5baa(void) {
  LOAD_REGS();
L_ff5baa: /* ff5baa: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5bac: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff5baf: mov edx, ecx */
  edx = ecx;
/* ff5bb1: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff5bb4: xor eax, eax */
  eax = 0;
/* ff5bb6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5bb8: mov ecx, edx */
  ecx = edx;
/* ff5bba: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff5bbd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff5bbf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5bc1: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* ff5bc4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff5bc7: mov edx, ecx */
  edx = ecx;
/* ff5bc9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff5bcc: xor eax, eax */
  eax = 0;
/* ff5bce: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5bd0: mov ecx, edx */
  ecx = edx;
/* ff5bd2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff5bd5: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff5bd7: xor eax, eax */
  eax = 0;
/* ff5bd9: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* ff5bdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5bdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5bdf: mov esp, ebp */
  esp = ebp;
/* ff5be1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5be2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5bf0(void) {
  LOAD_REGS();
L_ff5bf0: /* ff5bf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5bf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5bf2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* ff5bf6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5bf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5bf8: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* ff5bfb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff5bfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5bff: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ff5c03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5c04: lea ebp, [edi + 4] */
  ebp = (uint32_t)(edi + 0x4u);
/* ff5c07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5c08: call 0x1009154 */
  esp -= 4; W32(esp, 0xff5c0du); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff5c0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff5c12: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff5c16: jle 0xff5d30 */
  if ((zf || sf != of)) goto L_ff5d30;
L_ff5c1c: /* ff5c1c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* ff5c1f: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff5c23: mov edx, 1 */
  edx = 0x1u;
/* ff5c28: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff5c2a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff5c2e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff5c31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5c32: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff5c33: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ff5c37: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff5c3b: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff5c3f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ff5c43: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* ff5c47: fild dword ptr [esi + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* ff5c4a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff5c4e: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* ff5c52: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ff5c56: call 0x1002470 */
  esp -= 4; W32(esp, 0xff5c5bu); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff5c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5c5c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5c5d: call 0x1009154 */
  esp -= 4; W32(esp, 0xff5c62u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff5c62: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5c65: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff5c68: je 0xff5d30 */
  if (zf) goto L_ff5d30;
L_ff5c6e: /* ff5c6e: cmp eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5c71: jge 0xff5d30 */
  if ((sf == of)) goto L_ff5d30;
L_ff5c77: /* ff5c77: mov esi, dword ptr [esi + eax*4 + 0x18] */
  esi = R32((uint32_t)(esi + eax*4 + 0x18u));
/* ff5c7b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* ff5c7e: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* ff5c81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ff5c84: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* ff5c87: add esi, dword ptr [eax + 0xd24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xd24u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff5c8d: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ff5c90: lea edx, [ecx*4 + 4] */
  edx = (uint32_t)(ecx*4 + 0x4u);
/* ff5c97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5c98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5c99: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* ff5ca1: call 0xff2840 */
  esp -= 4; W32(esp, 0xff5ca6u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* ff5ca6: mov edi, eax */
  edi = eax;
/* ff5ca8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff5cac: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff5caf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5cb2: xor ebx, ebx */
  ebx = 0;
/* ff5cb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5cb6: jle 0xff5cdd */
  if ((zf || sf != of)) goto L_ff5cdd;
L_ff5cb8: /* ff5cb8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5cba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5cbb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5cbc: lea edx, [edi + ebx*4] */
  edx = (uint32_t)(edi + ebx*4);
/* ff5cbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5cc1: call 0xff44a0 */
  esp -= 4; W32(esp, 0xff5cc6u); SPILL(); f_ff44a0(); if (g_unwind) return; RELOAD();
/* ff5cc6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5cc9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff5ccc: je 0xff5d30 */
  if (zf) goto L_ff5d30;
L_ff5cce: /* ff5cce: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff5cd0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff5cd4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff5cd7: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff5cd9: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5cdb: jl 0xff5cb8 */
  if ((sf != of)) goto L_ff5cb8;
L_ff5cdd: /* ff5cdd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff5ce1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ff5ce4: xor eax, eax */
  eax = 0;
/* ff5ce6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5ce8: jle 0xff5d1a */
  if ((zf || sf != of)) goto L_ff5d1a;
L_ff5cea: /* ff5cea: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff5cec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff5cf0: /* ff5cf0: xor ecx, ecx */
  ecx = 0;
/* ff5cf2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5cf4: jle 0xff5d09 */
  if ((zf || sf != of)) goto L_ff5d09;
L_ff5cf6: /* ff5cf6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff5cfa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff5cfb: fadd dword ptr [edi + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + eax*4)));
/* ff5cfe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5cff: fstp dword ptr [edi + eax*4 - 4] */
  WF32((uint32_t)(edi + eax*4 + 0xfffffffcu), ST0); FPOP();
/* ff5d03: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff5d05: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5d07: jl 0xff5cf6 */
  if ((sf != of)) goto L_ff5cf6;
L_ff5d09: /* ff5d09: mov ecx, dword ptr [edi + eax*4 - 4] */
  ecx = R32((uint32_t)(edi + eax*4 + 0xfffffffcu));
/* ff5d0d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff5d11: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff5d15: cmp eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5d18: jl 0xff5cf0 */
  if ((sf != of)) goto L_ff5cf0;
L_ff5d1a: /* ff5d1a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff5d1e: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ff5d21: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff5d25: mov dword ptr [edi + eax*4], ecx */
  W32((uint32_t)(edi + eax*4), ecx);
/* ff5d28: mov eax, edi */
  eax = edi;
/* ff5d2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5d2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5d2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5d2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5d2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff5d2f: ret  */
  esp += 4; SPILL(); return;
L_ff5d30: /* ff5d30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5d31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5d32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5d33: xor eax, eax */
  eax = 0;
/* ff5d35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5d36: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff5d37: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5d40(void) {
  LOAD_REGS();
L_ff5d40: /* ff5d40: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ff5d44: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff5d46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5d47: je 0xff5d86 */
  if (zf) goto L_ff5d86;
L_ff5d49: /* ff5d49: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ff5d4d: mov edi, dword ptr [eax + 0x10] */
  edi = R32((uint32_t)(eax + 0x10u));
/* ff5d50: fild dword ptr [edi + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* ff5d53: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff5d56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5d57: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* ff5d5a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff5d5e: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff5d62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5d63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5d64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5d65: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff5d68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5d69: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ff5d6b: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* ff5d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5d6f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff5d73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5d74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5d76: call 0xff9a00 */
  esp -= 4; W32(esp, 0xff5d7bu); SPILL(); f_ff9a00(); if (g_unwind) return; RELOAD();
/* ff5d7b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5d7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5d7f: mov eax, 1 */
  eax = 0x1u;
/* ff5d84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5d85: ret  */
  esp += 4; SPILL(); return;
L_ff5d86: /* ff5d86: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ff5d8a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* ff5d8c: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff5d90: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff5d93: mov edx, ecx */
  edx = ecx;
/* ff5d95: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff5d98: xor eax, eax */
  eax = 0;
/* ff5d9a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5d9c: mov ecx, edx */
  ecx = edx;
/* ff5d9e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff5da1: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff5da3: xor eax, eax */
  eax = 0;
/* ff5da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5da6: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5db0(void) {
  LOAD_REGS();
L_ff5db0: /* ff5db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5db1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5db2: push 0x470 */
  { uint32_t v = 0x470u; esp -= 4; W32(esp, v); }
/* ff5db7: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff5dbdu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff5dbd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff5dc1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5dc4: mov ecx, 0x11c */
  ecx = 0x11cu;
/* ff5dc9: mov edi, eax */
  edi = eax;
/* ff5dcb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff5dcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5dce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5dcf: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5dd0(void) {
  LOAD_REGS();
L_ff5dd0: /* ff5dd0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ff5dd4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff5dd6: je 0xff5def */
  if (zf) goto L_ff5def;
L_ff5dd8: /* ff5dd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5dd9: mov ecx, 0x11c */
  ecx = 0x11cu;
/* ff5dde: xor eax, eax */
  eax = 0;
/* ff5de0: mov edi, edx */
  edi = edx;
/* ff5de2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5de4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5de5: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ff5de9: jmp dword ptr [0x100a040] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_ff5def: /* ff5def: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5df0(void) {
  LOAD_REGS();
L_ff5df0: /* ff5df0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ff5df4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff5df6: je 0xff5e0f */
  if (zf) goto L_ff5e0f;
L_ff5df8: /* ff5df8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5df9: mov ecx, 0x148 */
  ecx = 0x148u;
/* ff5dfe: xor eax, eax */
  eax = 0;
/* ff5e00: mov edi, edx */
  edi = edx;
/* ff5e02: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff5e04: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5e05: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ff5e09: jmp dword ptr [0x100a040] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
L_ff5e0f: /* ff5e0f: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5e10(void) {
  LOAD_REGS();
L_ff5e10: /* ff5e10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff5e13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5e14: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ff5e18: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff5e19: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ff5e1d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff5e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff5e21: mov esi, dword ptr [ebp + 0x348] */
  esi = R32((uint32_t)(ebp + 0x348u));
/* ff5e27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff5e28: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff5e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5e2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5e2c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* ff5e34: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ff5e38: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff5e3b: call 0x100913c */
  esp -= 4; W32(esp, 0xff5e40u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5e40: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff5e43: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5e46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5e48: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ff5e50: jle 0xff5e82 */
  if ((zf || sf != of)) goto L_ff5e82;
L_ff5e52: /* ff5e52: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
L_ff5e55: /* ff5e55: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5e57: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff5e59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5e5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5e5b: call 0x100913c */
  esp -= 4; W32(esp, 0xff5e60u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5e60: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff5e62: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5e65: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5e67: jge 0xff5e6b */
  if ((sf == of)) goto L_ff5e6b;
L_ff5e69: /* ff5e69: mov edi, eax */
  edi = eax;
L_ff5e6b: /* ff5e6b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff5e6f: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff5e72: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5e73: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff5e76: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5e78: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff5e7c: jl 0xff5e55 */
  if ((sf != of)) goto L_ff5e55;
L_ff5e7e: /* ff5e7e: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_ff5e82: /* ff5e82: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff5e83: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5e85: jle 0xff5f29 */
  if ((zf || sf != of)) goto L_ff5f29;
L_ff5e8b: /* ff5e8b: lea edx, [ebp + 0x140] */
  edx = (uint32_t)(ebp + 0x140u);
/* ff5e91: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff5e95: lea esi, [ebp + 0xc0] */
  esi = (uint32_t)(ebp + 0xc0u);
/* ff5e9b: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* ff5e9f: nop  */
L_ff5ea0: /* ff5ea0: mov eax, dword ptr [esi - 0x40] */
  eax = R32((uint32_t)(esi + 0xffffffc0u));
/* ff5ea3: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ff5ea5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff5ea6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5ea7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5ea8: call 0x100913c */
  esp -= 4; W32(esp, 0xff5eadu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5ead: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5eaf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ff5eb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5eb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5eb3: call 0x100913c */
  esp -= 4; W32(esp, 0xff5eb8u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5eb8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff5eba: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5ebd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff5ebf: je 0xff5ed0 */
  if (zf) goto L_ff5ed0;
L_ff5ec1: /* ff5ec1: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* ff5ec4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff5ec6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff5ec7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5ec8: call 0x100913c */
  esp -= 4; W32(esp, 0xff5ecdu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5ecd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esp = r;
  }
L_ff5ed0: /* ff5ed0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5ed2: mov eax, 1 */
  eax = 0x1u;
/* ff5ed7: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* ff5ed9: xor edi, edi */
  edi = 0;
/* ff5edb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5edd: jle 0xff5f08 */
  if ((zf || sf != of)) goto L_ff5f08;
L_ff5edf: /* ff5edf: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_ff5ee3: /* ff5ee3: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff5ee6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff5ee8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff5ee9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5eeb: call 0x100913c */
  esp -= 4; W32(esp, 0xff5ef0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5ef0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff5ef2: mov edx, 1 */
  edx = 0x1u;
/* ff5ef7: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff5ef9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5efc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff5efd: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff5f00: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5f02: jl 0xff5ee3 */
  if ((sf != of)) goto L_ff5ee3;
L_ff5f04: /* ff5f04: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_ff5f08: /* ff5f08: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff5f0c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff5f10: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5f13: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff5f16: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff5f17: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff5f1b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff5f1f: jne 0xff5ea0 */
  if (!zf) goto L_ff5ea0;
L_ff5f25: /* ff5f25: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_ff5f29: /* ff5f29: mov eax, dword ptr [ebp + 0x340] */
  eax = R32((uint32_t)(ebp + 0x340u));
/* ff5f2f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ff5f31: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff5f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5f33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5f34: call 0x100913c */
  esp -= 4; W32(esp, 0xff5f39u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5f39: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5f3c: xor eax, eax */
  eax = 0;
/* ff5f3e: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff5f41: mov ecx, esi */
  ecx = esi;
/* ff5f43: jbe 0xff5f4d */
  if ((cf | zf)) goto L_ff5f4d;
L_ff5f45: /* ff5f45: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff5f47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5f48: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff5f4b: ja 0xff5f45 */
  if ((!cf && !zf)) goto L_ff5f45;
L_ff5f4d: /* ff5f4d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff5f4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5f50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5f51: call 0x100913c */
  esp -= 4; W32(esp, 0xff5f56u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5f56: xor eax, eax */
  eax = 0;
/* ff5f58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5f5b: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff5f5e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff5f62: jbe 0xff5f70 */
  if ((cf | zf)) goto L_ff5f70;
L_ff5f64: /* ff5f64: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* ff5f66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff5f67: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff5f6a: ja 0xff5f64 */
  if ((!cf && !zf)) goto L_ff5f64;
L_ff5f6c: /* ff5f6c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_ff5f70: /* ff5f70: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff5f73: xor eax, eax */
  eax = 0;
/* ff5f75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff5f77: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ff5f7f: jle 0xff5ff6 */
  if ((zf || sf != of)) goto L_ff5ff6;
L_ff5f81: /* ff5f81: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* ff5f84: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* ff5f88: jmp 0xff5f90 */
  goto L_ff5f90;
L_ff5f90: /* ff5f90: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff5f94: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff5f96: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff5f9a: add ecx, dword ptr [ebp + edx*4 + 0x80] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + edx*4 + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5fa1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5fa3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ff5fa7: jge 0xff5fdb */
  if ((sf == of)) goto L_ff5fdb;
L_ff5fa9: /* ff5fa9: mov esi, ecx */
  esi = ecx;
/* ff5fab: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff5fad: lea edi, [ebp + eax*4 + 0x34c] */
  edi = (uint32_t)(ebp + eax*4 + 0x34cu);
/* ff5fb4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff5fb6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff5fba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff5fc0: /* ff5fc0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff5fc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff5fc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5fc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5fc8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5fc9: call 0x100913c */
  esp -= 4; W32(esp, 0xff5fceu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5fce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5fd1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff5fd4: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ff5fd5: jne 0xff5fc0 */
  if (!zf) goto L_ff5fc0;
L_ff5fd7: /* ff5fd7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_ff5fdb: /* ff5fdb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff5fdf: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* ff5fe3: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff5fe6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff5fe7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff5fea: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5fec: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff5ff0: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* ff5ff4: jl 0xff5f90 */
  if ((sf != of)) goto L_ff5f90;
L_ff5ff6: /* ff5ff6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5ff7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5ff8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5ff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5ffa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5ffd: ret  */
  esp += 4; SPILL(); return;
}

void f_ff5f8a(void) {
  LOAD_REGS();
L_ff5f8a: /* ff5f8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff5f90: /* ff5f90: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff5f94: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff5f96: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff5f9a: add ecx, dword ptr [ebp + edx*4 + 0x80] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + edx*4 + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff5fa1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5fa3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ff5fa7: jge 0xff5fdb */
  if ((sf == of)) goto L_ff5fdb;
L_ff5fa9: /* ff5fa9: mov esi, ecx */
  esi = ecx;
/* ff5fab: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff5fad: lea edi, [ebp + eax*4 + 0x34c] */
  edi = (uint32_t)(ebp + eax*4 + 0x34cu);
/* ff5fb4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff5fb6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff5fba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff5fc0: /* ff5fc0: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff5fc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff5fc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff5fc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff5fc8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff5fc9: call 0x100913c */
  esp -= 4; W32(esp, 0xff5fceu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff5fce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5fd1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff5fd4: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ff5fd5: jne 0xff5fc0 */
  if (!zf) goto L_ff5fc0;
L_ff5fd7: /* ff5fd7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
L_ff5fdb: /* ff5fdb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff5fdf: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* ff5fe3: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff5fe6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff5fe7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff5fea: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff5fec: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff5ff0: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* ff5ff4: jl 0xff5f90 */
  if ((sf != of)) goto L_ff5f90;
L_ff5ff6: /* ff5ff6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff5ff7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff5ff8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff5ff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff5ffa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff5ffd: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6000(void) {
  LOAD_REGS();
L_ff6000: /* ff6000: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff6003: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff6007: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff600a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff600b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff600c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff600d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff600e: push 0x470 */
  { uint32_t v = 0x470u; esp -= 4; W32(esp, v); }
/* ff6013: xor esi, esi */
  esi = 0;
/* ff6015: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff6017: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* ff601b: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* ff601f: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff6022: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff6028u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff6028: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* ff602c: mov ebp, eax */
  ebp = eax;
/* ff602e: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff6030: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6031: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* ff6035: call 0x1009154 */
  esp -= 4; W32(esp, 0xff603au); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff603a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff603d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff603f: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* ff6042: jle 0xff607a */
  if ((zf || sf != of)) goto L_ff607a;
L_ff6044: /* ff6044: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* ff6047: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff604b: jmp 0xff6050 */
  goto L_ff6050;
L_ff6050: /* ff6050: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff6052: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6053: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6058u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6058: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ff605c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff605f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6061: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ff6063: jge 0xff6067 */
  if ((sf == of)) goto L_ff6067;
L_ff6065: /* ff6065: mov edi, eax */
  edi = eax;
L_ff6067: /* ff6067: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff606b: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff606e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff606f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6072: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6074: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ff6078: jl 0xff6050 */
  if ((sf != of)) goto L_ff6050;
L_ff607a: /* ff607a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff607b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff607d: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* ff6085: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* ff6089: jle 0xff615d */
  if ((zf || sf != of)) goto L_ff615d;
L_ff608f: /* ff608f: lea edx, [ebp + 0x140] */
  edx = (uint32_t)(ebp + 0x140u);
/* ff6095: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff6099: lea esi, [ebp + 0x100] */
  esi = (uint32_t)(ebp + 0x100u);
/* ff609f: nop  */
L_ff60a0: /* ff60a0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ff60a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff60a3: call 0x1009154 */
  esp -= 4; W32(esp, 0xff60a8u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff60a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff60a9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ff60ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff60ac: mov dword ptr [esi - 0x80], eax */
  W32((uint32_t)(esi + 0xffffff80u), eax);
/* ff60af: call 0x1009154 */
  esp -= 4; W32(esp, 0xff60b4u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff60b4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff60b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff60b9: mov dword ptr [esi - 0x40], eax */
  W32((uint32_t)(esi + 0xffffffc0u), eax);
/* ff60bc: jl 0xff6223 */
  if ((sf != of)) goto L_ff6223;
L_ff60c2: /* ff60c2: je 0xff60d1 */
  if (zf) goto L_ff60d1;
L_ff60c4: /* ff60c4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff60c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff60c7: call 0x1009154 */
  esp -= 4; W32(esp, 0xff60ccu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff60cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff60cf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_ff60d1: /* ff60d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff60d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff60d5: jl 0xff6223 */
  if ((sf != of)) goto L_ff6223;
L_ff60db: /* ff60db: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff60df: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff60e2: jge 0xff6223 */
  if ((sf == of)) goto L_ff6223;
L_ff60e8: /* ff60e8: mov ecx, dword ptr [esi - 0x40] */
  ecx = R32((uint32_t)(esi + 0xffffffc0u));
/* ff60eb: mov edx, 1 */
  edx = 0x1u;
/* ff60f0: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff60f2: xor ebp, ebp */
  ebp = 0;
/* ff60f4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff60f6: jle 0xff613a */
  if ((zf || sf != of)) goto L_ff613a;
L_ff60f8: /* ff60f8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff60fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff6100: /* ff6100: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff6102: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6103: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6108u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6108: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff610b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff610c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff610f: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff6111: jl 0xff621f */
  if ((sf != of)) goto L_ff621f;
L_ff6117: /* ff6117: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff611b: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff611e: jge 0xff621f */
  if ((sf == of)) goto L_ff621f;
L_ff6124: /* ff6124: mov ecx, dword ptr [esi - 0x40] */
  ecx = R32((uint32_t)(esi + 0xffffffc0u));
/* ff6127: mov edx, 1 */
  edx = 0x1u;
/* ff612c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff612e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff612f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6132: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6134: jl 0xff6100 */
  if ((sf != of)) goto L_ff6100;
L_ff6136: /* ff6136: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_ff613a: /* ff613a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff613e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff6142: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* ff6146: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6147: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff614a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff614d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff614f: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff6153: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff6157: jl 0xff60a0 */
  if ((sf != of)) goto L_ff60a0;
L_ff615d: /* ff615d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ff615f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6160: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6165u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6165: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6166: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff6168: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6169: mov dword ptr [ebp + 0x340], eax */
  W32((uint32_t)(ebp + 0x340u), eax);
/* ff616f: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6174u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6174: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff6178: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff617b: xor edi, edi */
  edi = 0;
/* ff617d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6180: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff6182: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* ff6186: jle 0xff61fa */
  if ((zf || sf != of)) goto L_ff61fa;
L_ff6188: /* ff6188: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* ff618b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff618f: nop  */
L_ff6190: /* ff6190: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff6194: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff6196: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff619a: add eax, dword ptr [ebp + edx*4 + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + edx*4 + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff61a1: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61a3: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff61a7: jge 0xff61df */
  if ((sf == of)) goto L_ff61df;
L_ff61a9: /* ff61a9: lea esi, [ebp + edi*4 + 0x34c] */
  esi = (uint32_t)(ebp + edi*4 + 0x34cu);
L_ff61b0: /* ff61b0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff61b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff61b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff61b6: call 0x1009154 */
  esp -= 4; W32(esp, 0xff61bbu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff61bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff61be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff61c0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff61c2: jl 0xff6223 */
  if ((sf != of)) goto L_ff6223;
L_ff61c4: /* ff61c4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff61c8: mov edx, 1 */
  edx = 0x1u;
/* ff61cd: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff61cf: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61d1: jge 0xff6223 */
  if ((sf == of)) goto L_ff6223;
L_ff61d3: /* ff61d3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff61d7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff61d8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff61db: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61dd: jl 0xff61b0 */
  if ((sf != of)) goto L_ff61b0;
L_ff61df: /* ff61df: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff61e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff61e7: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff61ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff61eb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff61ee: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61f0: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff61f4: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff61f8: jl 0xff6190 */
  if ((sf != of)) goto L_ff6190;
L_ff61fa: /* ff61fa: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff61fe: mov eax, 1 */
  eax = 0x1u;
/* ff6203: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* ff6205: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff6207: mov dword ptr [ebp + 0x344], 0 */
  W32((uint32_t)(ebp + 0x344u), 0x0u);
/* ff6211: mov dword ptr [ebp + 0x348], eax */
  W32((uint32_t)(ebp + 0x348u), eax);
/* ff6217: mov eax, ebp */
  eax = ebp;
/* ff6219: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff621a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff621b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff621e: ret  */
  esp += 4; SPILL(); return;
L_ff621f: /* ff621f: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_ff6223: /* ff6223: xor eax, eax */
  eax = 0;
/* ff6225: mov ecx, 0x11c */
  ecx = 0x11cu;
/* ff622a: mov edi, ebp */
  edi = ebp;
/* ff622c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff622d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff622f: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff6235u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff6235: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff623a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff623b: xor eax, eax */
  eax = 0;
/* ff623d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff623e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6241: ret  */
  esp += 4; SPILL(); return;
}

void f_ff604d(void) {
  LOAD_REGS();
L_ff604d: /* ff604d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff6050: /* ff6050: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff6052: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6053: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6058u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6058: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ff605c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff605f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6061: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ff6063: jge 0xff6067 */
  if ((sf == of)) goto L_ff6067;
L_ff6065: /* ff6065: mov edi, eax */
  edi = eax;
L_ff6067: /* ff6067: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff606b: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff606e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff606f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6072: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6074: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ff6078: jl 0xff6050 */
  if ((sf != of)) goto L_ff6050;
L_ff607a: /* ff607a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff607b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff607d: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* ff6085: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* ff6089: jle 0xff615d */
  if ((zf || sf != of)) goto L_ff615d;
L_ff608f: /* ff608f: lea edx, [ebp + 0x140] */
  edx = (uint32_t)(ebp + 0x140u);
/* ff6095: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff6099: lea esi, [ebp + 0x100] */
  esi = (uint32_t)(ebp + 0x100u);
/* ff609f: nop  */
L_ff60a0: /* ff60a0: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ff60a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff60a3: call 0x1009154 */
  esp -= 4; W32(esp, 0xff60a8u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff60a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff60a9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ff60ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff60ac: mov dword ptr [esi - 0x80], eax */
  W32((uint32_t)(esi + 0xffffff80u), eax);
/* ff60af: call 0x1009154 */
  esp -= 4; W32(esp, 0xff60b4u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff60b4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff60b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff60b9: mov dword ptr [esi - 0x40], eax */
  W32((uint32_t)(esi + 0xffffffc0u), eax);
/* ff60bc: jl 0xff6223 */
  if ((sf != of)) goto L_ff6223;
L_ff60c2: /* ff60c2: je 0xff60d1 */
  if (zf) goto L_ff60d1;
L_ff60c4: /* ff60c4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff60c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff60c7: call 0x1009154 */
  esp -= 4; W32(esp, 0xff60ccu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff60cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff60cf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_ff60d1: /* ff60d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff60d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff60d5: jl 0xff6223 */
  if ((sf != of)) goto L_ff6223;
L_ff60db: /* ff60db: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff60df: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff60e2: jge 0xff6223 */
  if ((sf == of)) goto L_ff6223;
L_ff60e8: /* ff60e8: mov ecx, dword ptr [esi - 0x40] */
  ecx = R32((uint32_t)(esi + 0xffffffc0u));
/* ff60eb: mov edx, 1 */
  edx = 0x1u;
/* ff60f0: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff60f2: xor ebp, ebp */
  ebp = 0;
/* ff60f4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff60f6: jle 0xff613a */
  if ((zf || sf != of)) goto L_ff613a;
L_ff60f8: /* ff60f8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff60fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff6100: /* ff6100: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff6102: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6103: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6108u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6108: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff610b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff610c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff610f: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff6111: jl 0xff621f */
  if ((sf != of)) goto L_ff621f;
L_ff6117: /* ff6117: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff611b: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff611e: jge 0xff621f */
  if ((sf == of)) goto L_ff621f;
L_ff6124: /* ff6124: mov ecx, dword ptr [esi - 0x40] */
  ecx = R32((uint32_t)(esi + 0xffffffc0u));
/* ff6127: mov edx, 1 */
  edx = 0x1u;
/* ff612c: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff612e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff612f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6132: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6134: jl 0xff6100 */
  if ((sf != of)) goto L_ff6100;
L_ff6136: /* ff6136: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_ff613a: /* ff613a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff613e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff6142: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* ff6146: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6147: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff614a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff614d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff614f: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff6153: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff6157: jl 0xff60a0 */
  if ((sf != of)) goto L_ff60a0;
L_ff615d: /* ff615d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* ff615f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6160: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6165u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6165: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6166: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff6168: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6169: mov dword ptr [ebp + 0x340], eax */
  W32((uint32_t)(ebp + 0x340u), eax);
/* ff616f: call 0x1009154 */
  esp -= 4; W32(esp, 0xff6174u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff6174: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff6178: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff617b: xor edi, edi */
  edi = 0;
/* ff617d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6180: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff6182: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* ff6186: jle 0xff61fa */
  if ((zf || sf != of)) goto L_ff61fa;
L_ff6188: /* ff6188: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* ff618b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff618f: nop  */
L_ff6190: /* ff6190: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff6194: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff6196: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff619a: add eax, dword ptr [ebp + edx*4 + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + edx*4 + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff61a1: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61a3: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff61a7: jge 0xff61df */
  if ((sf == of)) goto L_ff61df;
L_ff61a9: /* ff61a9: lea esi, [ebp + edi*4 + 0x34c] */
  esi = (uint32_t)(ebp + edi*4 + 0x34cu);
L_ff61b0: /* ff61b0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff61b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff61b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff61b6: call 0x1009154 */
  esp -= 4; W32(esp, 0xff61bbu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff61bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff61be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff61c0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff61c2: jl 0xff6223 */
  if ((sf != of)) goto L_ff6223;
L_ff61c4: /* ff61c4: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff61c8: mov edx, 1 */
  edx = 0x1u;
/* ff61cd: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff61cf: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61d1: jge 0xff6223 */
  if ((sf == of)) goto L_ff6223;
L_ff61d3: /* ff61d3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff61d7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff61d8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff61db: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61dd: jl 0xff61b0 */
  if ((sf != of)) goto L_ff61b0;
L_ff61df: /* ff61df: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff61e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff61e7: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff61ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff61eb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff61ee: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff61f0: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff61f4: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff61f8: jl 0xff6190 */
  if ((sf != of)) goto L_ff6190;
L_ff61fa: /* ff61fa: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff61fe: mov eax, 1 */
  eax = 0x1u;
/* ff6203: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* ff6205: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff6207: mov dword ptr [ebp + 0x344], 0 */
  W32((uint32_t)(ebp + 0x344u), 0x0u);
/* ff6211: mov dword ptr [ebp + 0x348], eax */
  W32((uint32_t)(ebp + 0x348u), eax);
/* ff6217: mov eax, ebp */
  eax = ebp;
/* ff6219: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff621a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff621b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff621e: ret  */
  esp += 4; SPILL(); return;
L_ff621f: /* ff621f: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_ff6223: /* ff6223: xor eax, eax */
  eax = 0;
/* ff6225: mov ecx, 0x11c */
  ecx = 0x11cu;
/* ff622a: mov edi, ebp */
  edi = ebp;
/* ff622c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff622d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff622f: call dword ptr [0x100a040] */
  esp -= 4; W32(esp, 0xff6235u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* ff6235: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff623a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff623b: xor eax, eax */
  eax = 0;
/* ff623d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff623e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6241: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6250(void) {
  LOAD_REGS();
L_ff6250: /* ff6250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff6254: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ff6256: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ff625a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff625c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ff625e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ff6260: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff6262: mov eax, ecx */
  eax = ecx;
/* ff6264: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6270(void) {
  LOAD_REGS();
L_ff6270: /* ff6270: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff6276: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6277: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff6278: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff6279: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff627a: push 0x520 */
  { uint32_t v = 0x520u; esp -= 4; W32(esp, v); }
/* ff627f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff6281: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff6287u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff6287: mov edi, dword ptr [esp + 0x144] */
  edi = R32((uint32_t)(esp + 0x144u));
/* ff628e: mov ebp, eax */
  ebp = eax;
/* ff6290: mov dword ptr [ebp + 0x510], edi */
  W32((uint32_t)(ebp + 0x510u), edi);
/* ff6296: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* ff629c: mov dword ptr [ebp + 0x508], eax */
  W32((uint32_t)(ebp + 0x508u), eax);
/* ff62a2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff62a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff62a7: xor esi, esi */
  esi = 0;
/* ff62a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff62ab: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* ff62af: jle 0xff62c3 */
  if ((zf || sf != of)) goto L_ff62c3;
L_ff62b1: /* ff62b1: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_ff62b4: /* ff62b4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ff62b6: add esi, dword ptr [edi + edx*4 + 0x80] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + edx*4 + 0x80u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff62bd: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff62c0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ff62c1: jne 0xff62b4 */
  if (!zf) goto L_ff62b4;
L_ff62c3: /* ff62c3: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff62c6: xor eax, eax */
  eax = 0;
/* ff62c8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff62ca: mov dword ptr [ebp + 0x504], esi */
  W32((uint32_t)(ebp + 0x504u), esi);
/* ff62d0: jle 0xff62e4 */
  if ((zf || sf != of)) goto L_ff62e4;
L_ff62d2: /* ff62d2: lea ecx, [edi + 0x344] */
  ecx = (uint32_t)(edi + 0x344u);
L_ff62d8: /* ff62d8: mov dword ptr [esp + eax*4 + 0x2c], ecx */
  W32((uint32_t)(esp + eax*4 + 0x2cu), ecx);
/* ff62dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff62dd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff62e0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff62e2: jl 0xff62d8 */
  if ((sf != of)) goto L_ff62d8;
L_ff62e4: /* ff62e4: push 0xff6250 */
  { uint32_t v = 0xff6250u; esp -= 4; W32(esp, v); }
/* ff62e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff62eb: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* ff62ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff62f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff62f1: call dword ptr [0x100a05c] */
  esp -= 4; W32(esp, 0xff62f7u); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* ff62f7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff62fa: xor eax, eax */
  eax = 0;
/* ff62fc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff62fe: jle 0xff6329 */
  if ((zf || sf != of)) goto L_ff6329;
L_ff6300: /* ff6300: lea ecx, [ebp + 0x104] */
  ecx = (uint32_t)(ebp + 0x104u);
/* ff6306: jmp 0xff6310 */
  goto L_ff6310;
L_ff6310: /* ff6310: mov edx, dword ptr [esp + eax*4 + 0x2c] */
  edx = R32((uint32_t)(esp + eax*4 + 0x2cu));
/* ff6314: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff6316: sub edx, 0x344 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff631c: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff631f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* ff6321: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6322: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6325: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6327: jl 0xff6310 */
  if ((sf != of)) goto L_ff6310;
L_ff6329: /* ff6329: xor eax, eax */
  eax = 0;
/* ff632b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff632d: jle 0xff6346 */
  if ((zf || sf != of)) goto L_ff6346;
L_ff632f: /* ff632f: lea ecx, [ebp + 0x104] */
  ecx = (uint32_t)(ebp + 0x104u);
L_ff6335: /* ff6335: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff6337: mov dword ptr [ebp + edx*4 + 0x208], eax */
  W32((uint32_t)(ebp + edx*4 + 0x208u), eax);
/* ff633e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff633f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6342: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6344: jl 0xff6335 */
  if ((sf != of)) goto L_ff6335;
L_ff6346: /* ff6346: xor eax, eax */
  eax = 0;
/* ff6348: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff634a: jle 0xff6367 */
  if ((zf || sf != of)) goto L_ff6367;
L_ff634c: /* ff634c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff6350: /* ff6350: mov ecx, dword ptr [ebp + eax*4 + 0x104] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0x104u));
/* ff6357: mov edx, dword ptr [edi + ecx*4 + 0x344] */
  edx = R32((uint32_t)(edi + ecx*4 + 0x344u));
/* ff635e: mov dword ptr [ebp + eax*4], edx */
  W32((uint32_t)(ebp + eax*4), edx);
/* ff6362: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6363: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6365: jl 0xff6350 */
  if ((sf != of)) goto L_ff6350;
L_ff6367: /* ff6367: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* ff636d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff636e: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff6371: ja 0xff63a8 */
  if ((!cf && !zf)) goto L_ff63a8;
L_ff6373: /* ff6373: jmp dword ptr [eax*4 + 0xff647c] */
  switch (R32((uint32_t)(eax*4 + 0xff647cu))) {
    case 0xff637au: goto L_ff637a;
    case 0xff6386u: goto L_ff6386;
    case 0xff6392u: goto L_ff6392;
    case 0xff639eu: goto L_ff639e;
    default: guest_badjump(0xff6373, R32((uint32_t)(eax*4 + 0xff647cu))); return;
  }
L_ff637a: /* ff637a: mov dword ptr [ebp + 0x50c], 0x100 */
  W32((uint32_t)(ebp + 0x50cu), 0x100u);
/* ff6384: jmp 0xff63a8 */
  goto L_ff63a8;
L_ff6386: /* ff6386: mov dword ptr [ebp + 0x50c], 0x80 */
  W32((uint32_t)(ebp + 0x50cu), 0x80u);
/* ff6390: jmp 0xff63a8 */
  goto L_ff63a8;
L_ff6392: /* ff6392: mov dword ptr [ebp + 0x50c], 0x56 */
  W32((uint32_t)(ebp + 0x50cu), 0x56u);
/* ff639c: jmp 0xff63a8 */
  goto L_ff63a8;
L_ff639e: /* ff639e: mov dword ptr [ebp + 0x50c], 0x40 */
  W32((uint32_t)(ebp + 0x50cu), 0x40u);
L_ff63a8: /* ff63a8: add esi, -2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff63ab: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff63ad: jle 0xff646c */
  if ((zf || sf != of)) goto L_ff646c;
L_ff63b3: /* ff63b3: lea eax, [ebp + 0x30c] */
  eax = (uint32_t)(ebp + 0x30cu);
/* ff63b9: add edi, 0x34c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff63bf: mov edx, 2 */
  edx = 0x2u;
/* ff63c4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ff63c8: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff63cc: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
L_ff63d0: /* ff63d0: mov ecx, dword ptr [ebp + 0x508] */
  ecx = R32((uint32_t)(ebp + 0x508u));
/* ff63d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff63da: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff63de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ff63e0: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ff63e4: xor ebx, ebx */
  ebx = 0;
/* ff63e6: xor esi, esi */
  esi = 0;
/* ff63e8: xor ecx, ecx */
  ecx = 0;
/* ff63ea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff63ec: mov edi, 1 */
  edi = 0x1u;
/* ff63f1: jle 0xff6441 */
  if ((zf || sf != of)) goto L_ff6441;
L_ff63f3: /* ff63f3: mov eax, dword ptr [esp + 0x13c] */
  eax = R32((uint32_t)(esp + 0x13cu));
/* ff63fa: add eax, 0x344 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff63ff: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_ff6403: /* ff6403: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff6407: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ff6409: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff640b: jle 0xff6417 */
  if ((zf || sf != of)) goto L_ff6417;
L_ff640d: /* ff640d: cmp eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6411: jge 0xff6417 */
  if ((sf == of)) goto L_ff6417;
L_ff6413: /* ff6413: mov ebx, ecx */
  ebx = ecx;
/* ff6415: mov esi, eax */
  esi = eax;
L_ff6417: /* ff6417: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff641b: jge 0xff6429 */
  if ((sf == of)) goto L_ff6429;
L_ff641d: /* ff641d: cmp eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6421: jle 0xff6429 */
  if ((zf || sf != of)) goto L_ff6429;
L_ff6423: /* ff6423: mov edi, ecx */
  edi = ecx;
/* ff6425: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_ff6429: /* ff6429: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff642d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff642e: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6431: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6433: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* ff6437: jl 0xff6403 */
  if ((sf != of)) goto L_ff6403;
L_ff6439: /* ff6439: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* ff643d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_ff6441: /* ff6441: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff6445: mov dword ptr [eax + 0xfc], ebx */
  W32((uint32_t)(eax + 0xfcu), ebx);
/* ff644b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* ff644f: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff6452: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6455: mov dword ptr [eax - 4], edi */
  W32((uint32_t)(eax + 0xfffffffcu), edi);
/* ff6458: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff6459: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ff645a: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* ff645e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ff6462: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff6466: jne 0xff63d0 */
  if (!zf) goto L_ff63d0;
L_ff646c: /* ff646c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff646d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff646e: mov eax, ebp */
  eax = ebp;
/* ff6470: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff6471: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff6472: add esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6478: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6308(void) {
  LOAD_REGS();
L_ff6308: /* ff6308: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ff630f: nop  */
L_ff6310: /* ff6310: mov edx, dword ptr [esp + eax*4 + 0x2c] */
  edx = R32((uint32_t)(esp + eax*4 + 0x2cu));
/* ff6314: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff6316: sub edx, 0x344 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff631c: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff631f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* ff6321: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6322: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6325: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6327: jl 0xff6310 */
  if ((sf != of)) goto L_ff6310;
L_ff6329: /* ff6329: xor eax, eax */
  eax = 0;
/* ff632b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff632d: jle 0xff6346 */
  if ((zf || sf != of)) goto L_ff6346;
L_ff632f: /* ff632f: lea ecx, [ebp + 0x104] */
  ecx = (uint32_t)(ebp + 0x104u);
L_ff6335: /* ff6335: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff6337: mov dword ptr [ebp + edx*4 + 0x208], eax */
  W32((uint32_t)(ebp + edx*4 + 0x208u), eax);
/* ff633e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff633f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6342: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6344: jl 0xff6335 */
  if ((sf != of)) goto L_ff6335;
L_ff6346: /* ff6346: xor eax, eax */
  eax = 0;
/* ff6348: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff634a: jle 0xff6367 */
  if ((zf || sf != of)) goto L_ff6367;
L_ff634c: /* ff634c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff6350: /* ff6350: mov ecx, dword ptr [ebp + eax*4 + 0x104] */
  ecx = R32((uint32_t)(ebp + eax*4 + 0x104u));
/* ff6357: mov edx, dword ptr [edi + ecx*4 + 0x344] */
  edx = R32((uint32_t)(edi + ecx*4 + 0x344u));
/* ff635e: mov dword ptr [ebp + eax*4], edx */
  W32((uint32_t)(ebp + eax*4), edx);
/* ff6362: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6363: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6365: jl 0xff6350 */
  if ((sf != of)) goto L_ff6350;
L_ff6367: /* ff6367: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* ff636d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff636e: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff6371: ja 0xff63a8 */
  if ((!cf && !zf)) goto L_ff63a8;
L_ff6373: /* ff6373: jmp dword ptr [eax*4 + 0xff647c] */
  switch (R32((uint32_t)(eax*4 + 0xff647cu))) {
    case 0xff637au: goto L_ff637a;
    case 0xff6386u: goto L_ff6386;
    case 0xff6392u: goto L_ff6392;
    case 0xff639eu: goto L_ff639e;
    default: guest_badjump(0xff6373, R32((uint32_t)(eax*4 + 0xff647cu))); return;
  }
L_ff637a: /* ff637a: mov dword ptr [ebp + 0x50c], 0x100 */
  W32((uint32_t)(ebp + 0x50cu), 0x100u);
/* ff6384: jmp 0xff63a8 */
  goto L_ff63a8;
L_ff6386: /* ff6386: mov dword ptr [ebp + 0x50c], 0x80 */
  W32((uint32_t)(ebp + 0x50cu), 0x80u);
/* ff6390: jmp 0xff63a8 */
  goto L_ff63a8;
L_ff6392: /* ff6392: mov dword ptr [ebp + 0x50c], 0x56 */
  W32((uint32_t)(ebp + 0x50cu), 0x56u);
/* ff639c: jmp 0xff63a8 */
  goto L_ff63a8;
L_ff639e: /* ff639e: mov dword ptr [ebp + 0x50c], 0x40 */
  W32((uint32_t)(ebp + 0x50cu), 0x40u);
L_ff63a8: /* ff63a8: add esi, -2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff63ab: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff63ad: jle 0xff646c */
  if ((zf || sf != of)) goto L_ff646c;
L_ff63b3: /* ff63b3: lea eax, [ebp + 0x30c] */
  eax = (uint32_t)(ebp + 0x30cu);
/* ff63b9: add edi, 0x34c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff63bf: mov edx, 2 */
  edx = 0x2u;
/* ff63c4: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ff63c8: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff63cc: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
L_ff63d0: /* ff63d0: mov ecx, dword ptr [ebp + 0x508] */
  ecx = R32((uint32_t)(ebp + 0x508u));
/* ff63d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff63da: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff63de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* ff63e0: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ff63e4: xor ebx, ebx */
  ebx = 0;
/* ff63e6: xor esi, esi */
  esi = 0;
/* ff63e8: xor ecx, ecx */
  ecx = 0;
/* ff63ea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff63ec: mov edi, 1 */
  edi = 0x1u;
/* ff63f1: jle 0xff6441 */
  if ((zf || sf != of)) goto L_ff6441;
L_ff63f3: /* ff63f3: mov eax, dword ptr [esp + 0x13c] */
  eax = R32((uint32_t)(esp + 0x13cu));
/* ff63fa: add eax, 0x344 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x344u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff63ff: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_ff6403: /* ff6403: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff6407: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ff6409: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff640b: jle 0xff6417 */
  if ((zf || sf != of)) goto L_ff6417;
L_ff640d: /* ff640d: cmp eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6411: jge 0xff6417 */
  if ((sf == of)) goto L_ff6417;
L_ff6413: /* ff6413: mov ebx, ecx */
  ebx = ecx;
/* ff6415: mov esi, eax */
  esi = eax;
L_ff6417: /* ff6417: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff641b: jge 0xff6429 */
  if ((sf == of)) goto L_ff6429;
L_ff641d: /* ff641d: cmp eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6421: jle 0xff6429 */
  if ((zf || sf != of)) goto L_ff6429;
L_ff6423: /* ff6423: mov edi, ecx */
  edi = ecx;
/* ff6425: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_ff6429: /* ff6429: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff642d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff642e: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6431: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6433: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* ff6437: jl 0xff6403 */
  if ((sf != of)) goto L_ff6403;
L_ff6439: /* ff6439: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* ff643d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_ff6441: /* ff6441: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff6445: mov dword ptr [eax + 0xfc], ebx */
  W32((uint32_t)(eax + 0xfcu), ebx);
/* ff644b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* ff644f: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff6452: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6455: mov dword ptr [eax - 4], edi */
  W32((uint32_t)(eax + 0xfffffffcu), edi);
/* ff6458: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff6459: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ff645a: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* ff645e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ff6462: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff6466: jne 0xff63d0 */
  if (!zf) goto L_ff63d0;
L_ff646c: /* ff646c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff646d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff646e: mov eax, ebp */
  eax = ebp;
/* ff6470: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff6471: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff6472: add esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6478: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6490(void) {
  LOAD_REGS();
L_ff6490: /* ff6490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff6491: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6492: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff6493: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff6497: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff6498: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* ff649c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff649d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ff64a1: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff64a3: mov eax, ecx */
  eax = ecx;
/* ff64a5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff64a6: mov ebx, eax */
  ebx = eax;
/* ff64a8: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* ff64aa: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff64ac: mov eax, ecx */
  eax = ecx;
/* ff64ae: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff64b0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff64b1: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0xff64b1);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff64b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff64b5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff64b9: jge 0xff64c4 */
  if ((sf == of)) goto L_ff64c4;
L_ff64bb: /* ff64bb: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* ff64be: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff64c2: jmp 0xff64cb */
  goto L_ff64cb;
L_ff64c4: /* ff64c4: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* ff64c7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_ff64cb: /* ff64cb: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* ff64ce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff64cf: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff64d1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff64d3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff64d7: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff64d9: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff64dd: xor ecx, ecx */
  ecx = 0;
/* ff64df: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff64e0: fld dword ptr [eax*4 + 0x100b038] */
  { double v = F32((uint32_t)(eax*4 + 0x100b038u)); FPUSH(v); }
/* ff64e7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff64eb: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff64ed: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff64f0: fmul dword ptr [eax + ebp*4 - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebp*4 + 0xfffffffcu)));
/* ff64f4: fstp dword ptr [eax + ebp*4 - 4] */
  WF32((uint32_t)(eax + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* ff64f8: jl 0xff65aa */
  if ((sf != of)) goto L_ff65aa;
L_ff64fe: /* ff64fe: lea edx, [ebp + 3] */
  edx = (uint32_t)(ebp + 0x3u);
/* ff6501: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff6505: lea eax, [eax + ebp*4 + 8] */
  eax = (uint32_t)(eax + ebp*4 + 0x8u);
L_ff6509: /* ff6509: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff650b: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff650d: jl 0xff6517 */
  if ((sf != of)) goto L_ff6517;
L_ff650f: /* ff650f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff6513: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff6515: jmp 0xff651b */
  goto L_ff651b;
L_ff6517: /* ff6517: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_ff651b: /* ff651b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff651d: fld dword ptr [edi*4 + 0x100b038] */
  { double v = F32((uint32_t)(edi*4 + 0x100b038u)); FPUSH(v); }
/* ff6524: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6526: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6528: fmul dword ptr [eax - 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff8u)));
/* ff652b: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ff652e: jl 0xff6538 */
  if ((sf != of)) goto L_ff6538;
L_ff6530: /* ff6530: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff6534: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff6536: jmp 0xff653c */
  goto L_ff653c;
L_ff6538: /* ff6538: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_ff653c: /* ff653c: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff653e: fld dword ptr [edi*4 + 0x100b038] */
  { double v = F32((uint32_t)(edi*4 + 0x100b038u)); FPUSH(v); }
/* ff6545: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6547: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6549: fmul dword ptr [eax - 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffffcu)));
/* ff654c: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff654f: jl 0xff6559 */
  if ((sf != of)) goto L_ff6559;
L_ff6551: /* ff6551: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff6555: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff6557: jmp 0xff655d */
  goto L_ff655d;
L_ff6559: /* ff6559: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_ff655d: /* ff655d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff655f: fld dword ptr [edi*4 + 0x100b038] */
  { double v = F32((uint32_t)(edi*4 + 0x100b038u)); FPUSH(v); }
/* ff6566: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6568: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff656a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* ff656c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ff656e: jl 0xff6578 */
  if ((sf != of)) goto L_ff6578;
L_ff6570: /* ff6570: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff6574: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff6576: jmp 0xff657c */
  goto L_ff657c;
L_ff6578: /* ff6578: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_ff657c: /* ff657c: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff657e: fld dword ptr [edi*4 + 0x100b038] */
  { double v = F32((uint32_t)(edi*4 + 0x100b038u)); FPUSH(v); }
/* ff6585: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff6589: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* ff658c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff658f: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6592: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6595: cmp edx, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6599: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ff659c: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff65a0: jl 0xff6509 */
  if ((sf != of)) goto L_ff6509;
L_ff65a6: /* ff65a6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_ff65aa: /* ff65aa: cmp ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff65ae: jge 0xff65f6 */
  if ((sf == of)) goto L_ff65f6;
L_ff65b0: /* ff65b0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff65b4: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff65b7: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff65bb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff65bf: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff65c2: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff65c6: lea edi, [edi*4 + 0x100b038] */
  edi = (uint32_t)(edi*4 + 0x100b038u);
/* ff65cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff65d0: /* ff65d0: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff65d2: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff65d4: jl 0xff65de */
  if ((sf != of)) goto L_ff65de;
L_ff65d6: /* ff65d6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff65da: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff65dc: jmp 0xff65e2 */
  goto L_ff65e2;
L_ff65de: /* ff65de: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_ff65e2: /* ff65e2: fld dword ptr [eax + ebp*4] */
  { double v = F32((uint32_t)(eax + ebp*4)); FPUSH(v); }
/* ff65e5: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff65e7: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* ff65e9: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff65ed: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff65ee: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff65f0: fstp dword ptr [eax + ebp*4 - 4] */
  WF32((uint32_t)(eax + ebp*4 + 0xfffffffcu), ST0); FPOP();
/* ff65f4: jl 0xff65d0 */
  if ((sf != of)) goto L_ff65d0;
L_ff65f6: /* ff65f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff65f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff65f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff65f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff65fa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff65fb: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6600(void) {
  LOAD_REGS();
L_ff6600: /* ff6600: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff6601: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ff6605: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6606: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff6607: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff660b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff660c: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ff6610: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff6611: mov edi, eax */
  edi = eax;
/* ff6613: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff6615: mov eax, edi */
  eax = edi;
/* ff6617: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff6618: mov esi, eax */
  esi = eax;
/* ff661a: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* ff661c: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff661e: mov eax, edi */
  eax = edi;
/* ff6620: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff6622: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff6623: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xff6623);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff6625: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6627: mov ebx, eax */
  ebx = eax;
/* ff6629: jge 0xff6634 */
  if ((sf == of)) goto L_ff6634;
L_ff662b: /* ff662b: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* ff662e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff6632: jmp 0xff663b */
  goto L_ff663b;
L_ff6634: /* ff6634: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* ff6637: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_ff663b: /* ff663b: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff663f: mov eax, ebx */
  eax = ebx;
/* ff6641: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff6644: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff6645: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff6647: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff6649: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff664d: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff664f: mov eax, dword ptr [edx*4 + 0x100b038] */
  eax = R32((uint32_t)(edx*4 + 0x100b038u));
/* ff6656: lea edx, [edx*4 + 0x100b038] */
  edx = (uint32_t)(edx*4 + 0x100b038u);
/* ff665d: mov dword ptr [edi + ebp*4], eax */
  W32((uint32_t)(edi + ebp*4), eax);
/* ff6660: lea eax, [ebp + 1] */
  eax = (uint32_t)(ebp + 0x1u);
/* ff6663: cmp eax, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6667: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ff666f: jge 0xff66a9 */
  if ((sf == of)) goto L_ff66a9;
L_ff6671: /* ff6671: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff6675: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* ff6678: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* ff667c: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* ff6680: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* ff6683: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
L_ff6687: /* ff6687: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6689: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff668b: jl 0xff6695 */
  if ((sf != of)) goto L_ff6695;
L_ff668d: /* ff668d: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* ff6691: sub ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ff6693: jmp 0xff6699 */
  goto L_ff6699;
L_ff6695: /* ff6695: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
L_ff6699: /* ff6699: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff669b: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* ff669d: mov dword ptr [edi + eax*4], ebx */
  W32((uint32_t)(edi + eax*4), ebx);
/* ff66a0: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ff66a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff66a5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff66a7: jl 0xff6687 */
  if ((sf != of)) goto L_ff6687;
L_ff66a9: /* ff66a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff66aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff66ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff66ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff66ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff66ae: ret  */
  esp += 4; SPILL(); return;
}

void f_ff66b0(void) {
  LOAD_REGS();
L_ff66b0: /* ff66b0: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff66b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff66b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff66b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff66b6: mov esi, eax */
  esi = eax;
/* ff66b8: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* ff66bc: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* ff66bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff66c0: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff66c6: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff66cc: call 0x1009188 */
  esp -= 4; W32(esp, 0xff66d1u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff66d1: xor ebx, ebx */
  ebx = 0;
/* ff66d3: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff66d8: jle 0xff66e4 */
  if ((zf || sf != of)) goto L_ff66e4;
L_ff66da: /* ff66da: mov dword ptr [esp + 0x44], 0x3ff */
  W32((uint32_t)(esp + 0x44u), 0x3ffu);
/* ff66e2: jmp 0xff66f2 */
  goto L_ff66f2;
L_ff66e4: /* ff66e4: xor ecx, ecx */
  ecx = 0;
/* ff66e6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff66e8: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* ff66eb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff66ec: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff66ee: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
L_ff66f2: /* ff66f2: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* ff66f6: xor eax, eax */
  eax = 0;
/* ff66f8: mov ecx, 0xc */
  ecx = 0xcu;
/* ff66fd: mov edi, edx */
  edi = edx;
/* ff66ff: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff6701: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* ff6705: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* ff6709: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* ff670c: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* ff6710: xor ebp, ebp */
  ebp = 0;
/* ff6712: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6714: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* ff6718: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* ff671c: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* ff6720: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* ff6724: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* ff6728: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* ff672c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ff6730: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* ff6734: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* ff6738: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* ff673c: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* ff6740: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ff6742: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* ff6745: jle 0xff674d */
  if ((zf || sf != of)) goto L_ff674d;
L_ff6747: /* ff6747: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* ff674b: mov ecx, eax */
  ecx = eax;
L_ff674d: /* ff674d: mov eax, ecx */
  eax = ecx;
/* ff674f: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff6751: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6754: jl 0xff6b24 */
  if ((sf != of)) goto L_ff6b24;
L_ff675a: /* ff675a: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* ff675e: lea ecx, [eax + esi*4 + 0xc] */
  ecx = (uint32_t)(eax + esi*4 + 0xcu);
/* ff6762: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* ff6766: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* ff676a: lea edx, [ecx + esi*4 + 4] */
  edx = (uint32_t)(ecx + esi*4 + 0x4u);
/* ff676e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff6770: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
/* ff6773: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* ff6777: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
L_ff677b: /* ff677b: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff677f: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* ff6782: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff6788: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff678e: call 0x1009188 */
  esp -= 4; W32(esp, 0xff6793u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff6793: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6798: jle 0xff67a1 */
  if ((zf || sf != of)) goto L_ff67a1;
L_ff679a: /* ff679a: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* ff679f: jmp 0xff67b1 */
  goto L_ff67b1;
L_ff67a1: /* ff67a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff67a3: jl 0xff6856 */
  if ((sf != of)) goto L_ff6856;
L_ff67a9: /* ff67a9: mov ecx, eax */
  ecx = eax;
/* ff67ab: je 0xff6856 */
  if (zf) goto L_ff6856;
L_ff67b1: /* ff67b1: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* ff67b5: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* ff67b8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* ff67bc: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff67c2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff67c6: fcomp dword ptr [edx - 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xfffffffcu)));
  FPOP();
/* ff67c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff67cb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff67ce: jne 0xff681a */
  if (!zf) goto L_ff681a;
L_ff67d0: /* ff67d0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff67d4: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff67d8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff67da: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff67de: mov eax, esi */
  eax = esi;
/* ff67e0: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* ff67e3: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff67e5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff67e9: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff67ed: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff67ef: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff67f3: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* ff67f7: mov edx, ecx */
  edx = ecx;
/* ff67f9: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff67fc: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* ff67ff: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6801: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* ff6805: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff6809: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff680d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff680f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6810: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* ff6814: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff6818: jmp 0xff6856 */
  goto L_ff6856;
L_ff681a: /* ff681a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff681e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ff6822: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6824: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff6828: mov eax, esi */
  eax = esi;
/* ff682a: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* ff682d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff682f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff6833: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* ff6837: mov edx, ecx */
  edx = ecx;
/* ff6839: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff683c: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* ff683f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6841: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff6845: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6847: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff6849: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff684a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff684e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ff6852: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
L_ff6856: /* ff6856: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff685a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ff685c: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff6862: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff6868: call 0x1009188 */
  esp -= 4; W32(esp, 0xff686du); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff686d: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6872: jle 0xff687b */
  if ((zf || sf != of)) goto L_ff687b;
L_ff6874: /* ff6874: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* ff6879: jmp 0xff688b */
  goto L_ff688b;
L_ff687b: /* ff687b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff687d: jl 0xff6935 */
  if ((sf != of)) goto L_ff6935;
L_ff6883: /* ff6883: mov ecx, eax */
  ecx = eax;
/* ff6885: je 0xff6935 */
  if (zf) goto L_ff6935;
L_ff688b: /* ff688b: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff688f: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* ff6893: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* ff6896: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* ff689a: fadd dword ptr [edx + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x460u)));
/* ff68a0: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* ff68a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff68a4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff68a7: jne 0xff68f6 */
  if (!zf) goto L_ff68f6;
L_ff68a9: /* ff68a9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff68ad: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff68b1: lea edx, [eax + esi + 1] */
  edx = (uint32_t)(eax + esi + 0x1u);
/* ff68b5: add dword ptr [esp + 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* ff68b9: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff68bd: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* ff68c0: mov edx, eax */
  edx = eax;
/* ff68c2: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff68c5: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff68c8: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff68ca: mov edx, ecx */
  edx = ecx;
/* ff68cc: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff68cf: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ff68d3: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* ff68d7: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* ff68db: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff68dd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff68e1: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff68e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff68e4: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* ff68e8: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* ff68ec: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* ff68f0: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff68f4: jmp 0xff6935 */
  goto L_ff6935;
L_ff68f6: /* ff68f6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff68fa: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ff68fe: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6900: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff6904: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* ff6907: mov edx, eax */
  edx = eax;
/* ff6909: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff690c: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff690f: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6911: mov edx, ecx */
  edx = ecx;
/* ff6913: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff6916: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff691a: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* ff691e: add dword ptr [esp + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* ff6922: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* ff6926: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6928: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff6929: lea ebx, [ebx + esi + 1] */
  ebx = (uint32_t)(ebx + esi + 0x1u);
/* ff692d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff6931: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
L_ff6935: /* ff6935: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff6939: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* ff693c: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff6942: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff6948: call 0x1009188 */
  esp -= 4; W32(esp, 0xff694du); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff694d: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6952: jle 0xff695b */
  if ((zf || sf != of)) goto L_ff695b;
L_ff6954: /* ff6954: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* ff6959: jmp 0xff696b */
  goto L_ff696b;
L_ff695b: /* ff695b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff695d: jl 0xff6a12 */
  if ((sf != of)) goto L_ff6a12;
L_ff6963: /* ff6963: mov ecx, eax */
  ecx = eax;
/* ff6965: je 0xff6a12 */
  if (zf) goto L_ff6a12;
L_ff696b: /* ff696b: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* ff696f: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* ff6972: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* ff6976: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff697c: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff6980: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* ff6983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff6985: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff6988: jne 0xff69d2 */
  if (!zf) goto L_ff69d2;
L_ff698a: /* ff698a: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff698e: lea edx, [eax + esi + 2] */
  edx = (uint32_t)(eax + esi + 0x2u);
/* ff6992: add dword ptr [esp + 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* ff6996: mov eax, edi */
  eax = edi;
/* ff6998: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* ff699b: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff699f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff69a3: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff69a5: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff69a9: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* ff69ad: mov edx, ecx */
  edx = ecx;
/* ff69af: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff69b2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff69b4: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff69b8: mov eax, edi */
  eax = edi;
/* ff69ba: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff69bd: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ff69c1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff69c3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff69c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff69c8: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* ff69cc: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff69d0: jmp 0xff6a12 */
  goto L_ff6a12;
L_ff69d2: /* ff69d2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff69d6: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff69da: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff69dc: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff69e0: mov edx, edi */
  edx = edi;
/* ff69e2: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* ff69e5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff69e7: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff69eb: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff69ef: mov eax, ecx */
  eax = ecx;
/* ff69f1: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff69f4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff69f6: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff69fa: mov edx, edi */
  edx = edi;
/* ff69fc: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff69ff: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff6a03: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6a05: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff6a06: lea ebx, [ebx + esi + 2] */
  ebx = (uint32_t)(ebx + esi + 0x2u);
/* ff6a0a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff6a0e: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
L_ff6a12: /* ff6a12: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff6a16: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ff6a19: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff6a1f: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff6a25: call 0x1009188 */
  esp -= 4; W32(esp, 0xff6a2au); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff6a2a: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6a2f: jle 0xff6a38 */
  if ((zf || sf != of)) goto L_ff6a38;
L_ff6a31: /* ff6a31: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* ff6a36: jmp 0xff6a48 */
  goto L_ff6a48;
L_ff6a38: /* ff6a38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6a3a: jl 0xff6af2 */
  if ((sf != of)) goto L_ff6af2;
L_ff6a40: /* ff6a40: mov ecx, eax */
  ecx = eax;
/* ff6a42: je 0xff6af2 */
  if (zf) goto L_ff6af2;
L_ff6a48: /* ff6a48: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* ff6a4c: fld dword ptr [edx + 0x460] */
  { double v = F32((uint32_t)(edx + 0x460u)); FPUSH(v); }
/* ff6a52: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* ff6a56: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* ff6a58: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff6a5c: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* ff6a5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff6a61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff6a64: jne 0xff6ab3 */
  if (!zf) goto L_ff6ab3;
L_ff6a66: /* ff6a66: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff6a6a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff6a6e: lea edx, [eax + esi + 3] */
  edx = (uint32_t)(eax + esi + 0x3u);
/* ff6a72: add dword ptr [esp + 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* ff6a76: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff6a7a: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* ff6a7d: mov edx, eax */
  edx = eax;
/* ff6a7f: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff6a82: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff6a85: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6a87: mov edx, ecx */
  edx = ecx;
/* ff6a89: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff6a8c: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ff6a90: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* ff6a94: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* ff6a98: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6a9a: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff6a9e: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6aa0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6aa1: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* ff6aa5: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* ff6aa9: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* ff6aad: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff6ab1: jmp 0xff6af2 */
  goto L_ff6af2;
L_ff6ab3: /* ff6ab3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff6ab7: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ff6abb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6abd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff6ac1: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* ff6ac4: mov edx, eax */
  edx = eax;
/* ff6ac6: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff6ac9: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff6acc: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6ace: mov edx, ecx */
  edx = ecx;
/* ff6ad0: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff6ad3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff6ad7: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* ff6adb: add dword ptr [esp + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* ff6adf: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* ff6ae3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6ae5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff6ae6: lea ebx, [ebx + esi + 3] */
  ebx = (uint32_t)(ebx + esi + 0x3u);
/* ff6aea: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff6aee: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
L_ff6af2: /* ff6af2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff6af6: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* ff6afa: mov eax, 0x10 */
  eax = 0x10u;
/* ff6aff: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6b01: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* ff6b05: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* ff6b09: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6b0c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6b0e: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* ff6b11: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff6b14: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6b16: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* ff6b1a: jl 0xff677b */
  if ((sf != of)) goto L_ff677b;
L_ff6b20: /* ff6b20: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
L_ff6b24: /* ff6b24: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6b26: jge 0xff6c21 */
  if ((sf == of)) goto L_ff6c21;
L_ff6b2c: /* ff6b2c: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* ff6b30: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* ff6b34: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff6b36: lea edi, [ecx + esi*4] */
  edi = (uint32_t)(ecx + esi*4);
/* ff6b39: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* ff6b3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff6b40: /* ff6b40: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ff6b42: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff6b48: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff6b4e: call 0x1009188 */
  esp -= 4; W32(esp, 0xff6b53u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff6b53: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6b58: jle 0xff6b61 */
  if ((zf || sf != of)) goto L_ff6b61;
L_ff6b5a: /* ff6b5a: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* ff6b5f: jmp 0xff6b71 */
  goto L_ff6b71;
L_ff6b61: /* ff6b61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6b63: jl 0xff6c0d */
  if ((sf != of)) goto L_ff6c0d;
L_ff6b69: /* ff6b69: mov ecx, eax */
  ecx = eax;
/* ff6b6b: je 0xff6c0d */
  if (zf) goto L_ff6c0d;
L_ff6b71: /* ff6b71: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* ff6b75: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* ff6b79: fld dword ptr [edi + edx] */
  { double v = F32((uint32_t)(edi + edx)); FPUSH(v); }
/* ff6b7c: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff6b82: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* ff6b84: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff6b86: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff6b89: jne 0xff6bd5 */
  if (!zf) goto L_ff6bd5;
L_ff6b8b: /* ff6b8b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff6b8f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff6b93: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6b95: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff6b99: mov edx, esi */
  edx = esi;
/* ff6b9b: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff6b9e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6ba0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ff6ba4: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff6ba8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6baa: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff6bae: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ff6bb2: mov eax, ecx */
  eax = ecx;
/* ff6bb4: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff6bb7: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* ff6bba: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6bbc: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff6bc0: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* ff6bc4: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* ff6bc8: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6bca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6bcb: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* ff6bcf: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff6bd3: jmp 0xff6c0d */
  goto L_ff6c0d;
L_ff6bd5: /* ff6bd5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff6bd9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff6bdd: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6bdf: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff6be3: mov edx, esi */
  edx = esi;
/* ff6be5: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff6be8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6bea: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff6bee: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff6bf2: mov eax, ecx */
  eax = ecx;
/* ff6bf4: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff6bf7: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* ff6bfa: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6bfc: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff6c00: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff6c04: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6c06: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff6c08: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ff6c0c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_ff6c0d: /* ff6c0d: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* ff6c11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff6c12: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6c15: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6c17: jl 0xff6b40 */
  if ((sf != of)) goto L_ff6b40;
L_ff6c1d: /* ff6c1d: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
L_ff6c21: /* ff6c21: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff6c25: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff6c29: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff6c2d: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6c2f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff6c33: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff6c35: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff6c39: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6c3b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff6c3f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ff6c43: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ff6c47: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6c49: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* ff6c4d: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* ff6c51: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff6c55: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff6c59: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff6c5d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6c5f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff6c63: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* ff6c67: mov edi, dword ptr [ecx + 0x454] */
  edi = R32((uint32_t)(ecx + 0x454u));
/* ff6c6d: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff6c6f: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6c71: jl 0xff6c8f */
  if ((sf != of)) goto L_ff6c8f;
L_ff6c73: /* ff6c73: cmp eax, dword ptr [ecx + 0x458] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x458u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6c79: jl 0xff6c8f */
  if ((sf != of)) goto L_ff6c8f;
L_ff6c7b: /* ff6c7b: mov eax, dword ptr [ecx + 0x45c] */
  eax = R32((uint32_t)(ecx + 0x45cu));
/* ff6c81: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* ff6c84: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff6c85: idiv dword ptr [esp + 0x20] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x20u)); if (!d) d = (int32_t)guest_divzero(0xff6c85);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff6c89: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* ff6c8d: jmp 0xff6c91 */
  goto L_ff6c91;
L_ff6c8f: /* ff6c8f: xor eax, eax */
  eax = 0;
L_ff6c91: /* ff6c91: mov edi, eax */
  edi = eax;
/* ff6c93: imul edi, dword ptr [esp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x24u)));
  edi = (uint32_t)r;
  }
/* ff6c98: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6c9a: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* ff6c9e: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* ff6ca1: mov edi, eax */
  edi = eax;
/* ff6ca3: imul edi, dword ptr [esp + 0x28] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x28u)));
  edi = (uint32_t)r;
  }
/* ff6ca8: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6caa: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* ff6cae: mov dword ptr [edx + 0xc], edi */
  W32((uint32_t)(edx + 0xcu), edi);
/* ff6cb1: mov edi, eax */
  edi = eax;
/* ff6cb3: imul edi, dword ptr [esp + 0x2c] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x2cu)));
  edi = (uint32_t)r;
  }
/* ff6cb8: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6cba: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* ff6cbe: mov dword ptr [edx + 0x10], edi */
  W32((uint32_t)(edx + 0x10u), edi);
/* ff6cc1: mov edi, eax */
  edi = eax;
/* ff6cc3: imul edi, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  edi = (uint32_t)r;
  }
/* ff6cc8: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6cca: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ff6cce: mov dword ptr [edx + 0x14], edi */
  W32((uint32_t)(edx + 0x14u), edi);
/* ff6cd1: mov edi, eax */
  edi = eax;
/* ff6cd3: imul edi, dword ptr [esp + 0x34] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x34u)));
  edi = (uint32_t)r;
  }
/* ff6cd8: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6cda: mov dword ptr [edx + 0x18], edi */
  W32((uint32_t)(edx + 0x18u), edi);
/* ff6cdd: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ff6ce1: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* ff6ce4: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6ce6: mov dword ptr [edx + 0x20], eax */
  W32((uint32_t)(edx + 0x20u), eax);
/* ff6ce9: mov dword ptr [edx + 0x1c], ebp */
  W32((uint32_t)(edx + 0x1cu), ebp);
/* ff6cec: mov dword ptr [edx + 0x24], edi */
  W32((uint32_t)(edx + 0x24u), edi);
/* ff6cef: cmp ebp, dword ptr [ecx + 0x464] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x464u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6cf5: jl 0xff6cfb */
  if ((sf != of)) goto L_ff6cfb;
L_ff6cf7: /* ff6cf7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff6cf8: mov dword ptr [edx + 0x24], edi */
  W32((uint32_t)(edx + 0x24u), edi);
L_ff6cfb: /* ff6cfb: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* ff6cff: cmp ecx, dword ptr [esp + 0x5c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6d03: mov dword ptr [edx + 0x2c], 0xffffff38 */
  W32((uint32_t)(edx + 0x2cu), 0xffffff38u);
/* ff6d0a: jge 0xff6d52 */
  if ((sf == of)) goto L_ff6d52;
L_ff6d0c: /* ff6d0c: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* ff6d10: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* ff6d13: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff6d19: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff6d1f: call 0x1009188 */
  esp -= 4; W32(esp, 0xff6d24u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff6d24: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6d29: jle 0xff6d41 */
  if ((zf || sf != of)) goto L_ff6d41;
L_ff6d2b: /* ff6d2b: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* ff6d2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6d30: mov eax, 0x3ff */
  eax = 0x3ffu;
/* ff6d35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff6d36: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* ff6d39: mov eax, ebp */
  eax = ebp;
/* ff6d3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff6d3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff6d3d: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6d40: ret  */
  esp += 4; SPILL(); return;
L_ff6d41: /* ff6d41: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* ff6d45: xor ecx, ecx */
  ecx = 0;
/* ff6d47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6d49: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* ff6d4c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff6d4d: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff6d4f: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
L_ff6d52: /* ff6d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff6d54: mov eax, ebp */
  eax = ebp;
/* ff6d56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff6d57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff6d58: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6d5b: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6d60(void) {
  LOAD_REGS();
L_ff6d60: /* ff6d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff6d61: mov ebp, esp */
  ebp = esp;
/* ff6d63: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ff6d66: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff6d69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff6d6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6d6d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ff6d70: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* ff6d72: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* ff6d75: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* ff6d79: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ff6d7c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff6d7f: mov eax, dword ptr [eax + ebx - 0x2c] */
  eax = R32((uint32_t)(eax + ebx + 0xffffffd4u));
/* ff6d83: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* ff6d86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff6d87: xor ecx, ecx */
  ecx = 0;
/* ff6d89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff6d8a: xor edx, edx */
  edx = 0;
/* ff6d8c: xor esi, esi */
  esi = 0;
/* ff6d8e: xor edi, edi */
  edi = 0;
/* ff6d90: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6d92: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff6d96: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ff6d9a: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* ff6d9e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff6da2: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff6da6: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* ff6daa: jle 0xff6df4 */
  if ((zf || sf != of)) goto L_ff6df4;
L_ff6dac: /* ff6dac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff6daf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6db2: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
L_ff6db6: /* ff6db6: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* ff6db9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff6dbb: je 0xff6dd6 */
  if (zf) goto L_ff6dd6;
L_ff6dbd: /* ff6dbd: add edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6dbf: add esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff6dc2: add edi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6dc5: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* ff6dc8: add dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* ff6dcc: add ecx, dword ptr [eax + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff6dcf: mov ebx, dword ptr [eax + 0x18] */
  ebx = R32((uint32_t)(eax + 0x18u));
/* ff6dd2: add dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
L_ff6dd6: /* ff6dd6: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* ff6dda: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff6ddd: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* ff6dde: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* ff6de2: jne 0xff6db6 */
  if (!zf) goto L_ff6db6;
L_ff6de4: /* ff6de4: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff6de8: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* ff6dec: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ff6df0: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_ff6df4: /* ff6df4: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* ff6df7: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* ff6df9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6dfb: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* ff6dff: jl 0xff6e35 */
  if ((sf != of)) goto L_ff6e35;
L_ff6e01: /* ff6e01: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff6e05: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff6e07: mov ebx, eax */
  ebx = eax;
/* ff6e09: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* ff6e0c: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6e0e: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* ff6e12: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* ff6e15: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6e17: add dword ptr [esp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* ff6e1b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff6e1f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff6e20: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6e21: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff6e25: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff6e29: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff6e2d: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ff6e31: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
L_ff6e35: /* ff6e35: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* ff6e38: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* ff6e3a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6e3c: jl 0xff6e6c */
  if ((sf != of)) goto L_ff6e6c;
L_ff6e3e: /* ff6e3e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff6e40: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff6e42: imul ebx, eax */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(eax);
  ebx = (uint32_t)r;
  }
/* ff6e45: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff6e49: mov edx, eax */
  edx = eax;
/* ff6e4b: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff6e4e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff6e52: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ff6e56: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff6e5a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff6e5c: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff6e5e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff6e5f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff6e60: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* ff6e64: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* ff6e68: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_ff6e6c: /* ff6e6c: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6e6f: jge 0xff6e7b */
  if ((sf == of)) goto L_ff6e7b;
L_ff6e71: /* ff6e71: lea eax, [ecx - 2] */
  eax = (uint32_t)(ecx + 0xfffffffeu);
/* ff6e74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6e75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff6e76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff6e77: mov esp, ebp */
  esp = ebp;
/* ff6e79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff6e7a: ret  */
  esp += 4; SPILL(); return;
L_ff6e7b: /* ff6e7b: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff6e7f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff6e82: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff6e86: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* ff6e8a: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff6e8e: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ff6e92: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ff6e96: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff6e9a: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* ff6e9e: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff6ea2: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* ff6ea6: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff6eaa: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ff6eae: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff6eb2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* ff6eb4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* ff6eb6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ff6eb8: fdivr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) / ST0;
/* ff6ebe: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff6ec2: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ff6ec6: fmul qword ptr [esp + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x28u)));
/* ff6eca: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* ff6ece: fmul st(2) */
  ST0 = ST0 * STI(2);
/* ff6ed0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ff6ed2: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* ff6ed6: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff6eda: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ff6ede: fmul qword ptr [esp + 0x30] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x30u)));
/* ff6ee2: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* ff6ee6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* ff6ee8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* ff6eea: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* ff6eee: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ff6ef2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ff6ef4: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ff6ef8: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff6efc: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff6f00: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff6f04: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* ff6f08: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ff6f0e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff6f11: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xff6f17u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ff6f17: call 0x1009188 */
  esp -= 4; W32(esp, 0xff6f1cu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff6f1c: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff6f20: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* ff6f23: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff6f25: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff6f29: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff6f2d: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff6f31: fadd qword ptr [esp + 0x18] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x18u)));
/* ff6f35: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ff6f3b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff6f3e: call dword ptr [0x100a054] */
  esp -= 4; W32(esp, 0xff6f44u); SPILL(); hle_floor(); if (g_unwind) return; /* MSVCR70!floor */ RELOAD();
/* ff6f44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff6f47: call 0x1009188 */
  esp -= 4; W32(esp, 0xff6f4cu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff6f4c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ff6f4f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ff6f51: cmp dword ptr [esi], 0x3ff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6f57: jle 0xff6f5f */
  if ((zf || sf != of)) goto L_ff6f5f;
L_ff6f59: /* ff6f59: mov dword ptr [esi], 0x3ff */
  W32((uint32_t)(esi), 0x3ffu);
L_ff6f5f: /* ff6f5f: cmp dword ptr [ecx], 0x3ff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6f65: jle 0xff6f6d */
  if ((zf || sf != of)) goto L_ff6f6d;
L_ff6f67: /* ff6f67: mov dword ptr [ecx], 0x3ff */
  W32((uint32_t)(ecx), 0x3ffu);
L_ff6f6d: /* ff6f6d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6f70: jge 0xff6f78 */
  if ((sf == of)) goto L_ff6f78;
L_ff6f72: /* ff6f72: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_ff6f78: /* ff6f78: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6f7b: jge 0xff6f83 */
  if ((sf == of)) goto L_ff6f83;
L_ff6f7d: /* ff6f7d: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
L_ff6f83: /* ff6f83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff6f84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff6f85: xor eax, eax */
  eax = 0;
/* ff6f87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff6f88: mov esp, ebp */
  esp = ebp;
/* ff6f8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff6f8b: ret  */
  esp += 4; SPILL(); return;
}

void f_ff6f90(void) {
  LOAD_REGS();
L_ff6f90: /* ff6f90: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff6f93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff6f94: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* ff6f98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff6f99: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff6f9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff6f9c: mov esi, eax */
  esi = eax;
/* ff6f9e: mov eax, ecx */
  eax = ecx;
/* ff6fa0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff6fa1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff6fa3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff6fa5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff6fa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff6faa: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* ff6fae: mov eax, ecx */
  eax = ecx;
/* ff6fb0: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff6fb2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff6fb3: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0xff6fb3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff6fb5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6fb7: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* ff6fbb: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff6fbf: jge 0xff6fc4 */
  if ((sf == of)) goto L_ff6fc4;
L_ff6fc1: /* ff6fc1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff6fc2: jmp 0xff6fc5 */
  goto L_ff6fc5;
L_ff6fc4: /* ff6fc4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_ff6fc5: /* ff6fc5: fld dword ptr [ebp + esi*4] */
  { double v = F32((uint32_t)(ebp + esi*4)); FPUSH(v); }
/* ff6fc9: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ff6fcd: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff6fd3: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* ff6fd7: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* ff6fdf: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff6fe5: call 0x1009188 */
  esp -= 4; W32(esp, 0xff6feau); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff6fea: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff6fef: jle 0xff6ff8 */
  if ((zf || sf != of)) goto L_ff6ff8;
L_ff6ff1: /* ff6ff1: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* ff6ff6: jmp 0xff7002 */
  goto L_ff7002;
L_ff6ff8: /* ff6ff8: xor ecx, ecx */
  ecx = 0;
/* ff6ffa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff6ffc: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* ff6fff: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff7000: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
L_ff7002: /* ff7002: xor eax, eax */
  eax = 0;
/* ff7004: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff7008: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff700c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7010: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* ff7013: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7014: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff7016: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7018: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff701c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff701e: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* ff7022: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff7026: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* ff702a: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff702e: fld dword ptr [edx + esi*4] */
  { double v = F32((uint32_t)(edx + esi*4)); FPUSH(v); }
/* ff7031: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff7037: fcomp dword ptr [ebp + esi*4] */
  fpu_com(ST0, F32((uint32_t)(ebp + esi*4)));
  FPOP();
/* ff703b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff703d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff7040: jne 0xff709f */
  if (!zf) goto L_ff709f;
L_ff7042: /* ff7042: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ff7046: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* ff704a: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ff704e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff7052: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* ff7056: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff705a: fadd dword ptr [eax + 0x448] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x448u)));
/* ff7060: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* ff7064: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7066: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff7069: jnp 0xff7237 */
  if (!pf) goto L_ff7237;
L_ff706f: /* ff706f: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* ff7073: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff7077: fsub dword ptr [eax + 0x44c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x44cu)));
/* ff707d: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* ff7081: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7083: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff7086: je 0xff7237 */
  if (zf) goto L_ff7237;
L_ff708c: /* ff708c: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff708e: mov eax, ebx */
  eax = ebx;
/* ff7090: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* ff7093: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff7097: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
L_ff709f: /* ff709f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff70a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff70a4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff70a6: jge 0xff71b5 */
  if ((sf == of)) goto L_ff71b5;
L_ff70ac: /* ff70ac: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff70ae: lea ebx, [ebp + esi*4] */
  ebx = (uint32_t)(ebp + esi*4);
/* ff70b2: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* ff70b6: jmp 0xff70c0 */
  goto L_ff70c0;
L_ff70b8: /* ff70b8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff70bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff70c0: /* ff70c0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff70c4: add eax, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff70c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff70ca: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff70ce: jl 0xff70e8 */
  if ((sf != of)) goto L_ff70e8;
L_ff70d0: /* ff70d0: mov ecx, eax */
  ecx = eax;
/* ff70d2: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff70d6: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff70d8: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff70dc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff70e0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff70e2: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* ff70e6: jmp 0xff70f6 */
  goto L_ff70f6;
L_ff70e8: /* ff70e8: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* ff70ec: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff70f0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff70f2: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
L_ff70f6: /* ff70f6: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* ff70f9: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* ff70fd: fadd dword ptr [ecx + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x460u)));
/* ff7103: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* ff7105: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7107: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff710a: jne 0xff71a5 */
  if (!zf) goto L_ff71a5;
L_ff7110: /* ff7110: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* ff7112: fmul dword ptr [0x100a1b4] */
  ST0 = ST0 * (F32((uint32_t)(0x100a1b4u)));
/* ff7118: fadd dword ptr [0x100a1b0] */
  ST0 = ST0 + (F32((uint32_t)(0x100a1b0u)));
/* ff711e: call 0x1009188 */
  esp -= 4; W32(esp, 0xff7123u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff7123: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7128: jle 0xff7135 */
  if ((zf || sf != of)) goto L_ff7135;
L_ff712a: /* ff712a: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* ff712f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff7133: jmp 0xff7141 */
  goto L_ff7141;
L_ff7135: /* ff7135: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7137: jl 0xff71a5 */
  if ((sf != of)) goto L_ff71a5;
L_ff7139: /* ff7139: mov ecx, eax */
  ecx = eax;
/* ff713b: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff713f: je 0xff71a5 */
  if (zf) goto L_ff71a5;
L_ff7141: /* ff7141: fild dword ptr [esp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ff7145: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* ff7149: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ff714d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff7151: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* ff7155: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff7159: fadd dword ptr [edx + 0x448] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x448u)));
/* ff715f: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* ff7163: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7165: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff7168: jnp 0xff7237 */
  if (!pf) goto L_ff7237;
L_ff716e: /* ff716e: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff7172: fsub dword ptr [edx + 0x44c] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x44cu)));
/* ff7178: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* ff717c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff717e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff7181: je 0xff7237 */
  if (zf) goto L_ff7237;
L_ff7187: /* ff7187: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff718b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff718d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff7191: mov edx, eax */
  edx = eax;
/* ff7193: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff7196: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff719a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff719c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff719d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff71a1: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_ff71a5: /* ff71a5: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff71a9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff71aa: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff71ad: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff71af: jl 0xff70b8 */
  if ((sf != of)) goto L_ff70b8;
L_ff71b5: /* ff71b5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff71b9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff71bb: je 0xff7244 */
  if (zf) goto L_ff7244;
L_ff71c1: /* ff71c1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* ff71c5: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* ff71c9: mov eax, dword ptr [ecx + 0x448] */
  eax = R32((uint32_t)(ecx + 0x448u));
/* ff71cf: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* ff71d3: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* ff71d7: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ff71db: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* ff71df: fdiv dword ptr [esp + 0x34] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x34u)));
/* ff71e3: fcomp dword ptr [ecx + 0x450] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x450u)));
  FPOP();
/* ff71e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff71eb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff71ee: je 0xff7244 */
  if (zf) goto L_ff7244;
L_ff71f0: /* ff71f0: mov edx, dword ptr [ecx + 0x44c] */
  edx = R32((uint32_t)(ecx + 0x44cu));
/* ff71f6: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* ff71fa: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ff71fe: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* ff7202: fdiv dword ptr [esp + 0x34] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x34u)));
/* ff7206: fcomp dword ptr [ecx + 0x450] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x450u)));
  FPOP();
/* ff720c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff720e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff7211: je 0xff7244 */
  if (zf) goto L_ff7244;
L_ff7213: /* ff7213: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff7217: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7218: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0xff7218);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff721a: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* ff721e: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ff7222: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* ff7226: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* ff722a: fcomp dword ptr [ecx + 0x450] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x450u)));
  FPOP();
/* ff7230: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7232: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff7235: jne 0xff7244 */
  if (!zf) goto L_ff7244;
L_ff7237: /* ff7237: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff7238: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff7239: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff723a: mov eax, 1 */
  eax = 0x1u;
/* ff723f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff7240: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7243: ret  */
  esp += 4; SPILL(); return;
L_ff7244: /* ff7244: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff7245: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff7246: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff7247: xor eax, eax */
  eax = 0;
/* ff7249: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff724a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff724d: ret  */
  esp += 4; SPILL(); return;
}

void f_ff7250(void) {
  LOAD_REGS();
L_ff7250: /* ff7250: mov eax, 0x1298 */
  eax = 0x1298u;
/* ff7255: call 0x1009200 */
  esp -= 4; W32(esp, 0xff725au); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff725a: mov eax, dword ptr [esp + 0x12a0] */
  eax = R32((uint32_t)(esp + 0x12a0u));
/* ff7261: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7262: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff7263: mov ebp, dword ptr [eax + 0x510] */
  ebp = R32((uint32_t)(eax + 0x510u));
/* ff7269: mov ebx, dword ptr [ebp + 0x46c] */
  ebx = R32((uint32_t)(ebp + 0x46cu));
/* ff726f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff7270: mov esi, dword ptr [eax + 0x504] */
  esi = R32((uint32_t)(eax + 0x504u));
/* ff7276: mov eax, dword ptr [esp + 0x12a8] */
  eax = R32((uint32_t)(esp + 0x12a8u));
/* ff727d: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* ff7280: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff7283: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* ff7286: xor edx, edx */
  edx = 0;
/* ff7288: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff7289: cmp dword ptr [eax + 0x68], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x68u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff728c: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* ff7290: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* ff7294: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* ff7298: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* ff729c: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* ff72a0: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* ff72a4: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff72a8: je 0xff72bc */
  if (zf) goto L_ff72bc;
L_ff72aa: /* ff72aa: mov eax, dword ptr [ecx + 0xd24] */
  eax = R32((uint32_t)(ecx + 0xd24u));
/* ff72b0: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* ff72b4: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
L_ff72bc: /* ff72bc: xor eax, eax */
  eax = 0;
/* ff72be: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff72c0: mov ecx, 0x41 */
  ecx = 0x41u;
/* ff72c5: lea edi, [esp + 0x298] */
  edi = (uint32_t)(esp + 0x298u);
/* ff72cc: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff72ce: jle 0xff72fd */
  if ((zf || sf != of)) goto L_ff72fd;
L_ff72d0: /* ff72d0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff72d2: mov ecx, esi */
  ecx = esi;
/* ff72d4: lea edi, [esp + 0x4a0] */
  edi = (uint32_t)(esp + 0x4a0u);
/* ff72db: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff72dd: jle 0xff72fd */
  if ((zf || sf != of)) goto L_ff72fd;
L_ff72df: /* ff72df: mov eax, 1 */
  eax = 0x1u;
/* ff72e4: mov ecx, esi */
  ecx = esi;
/* ff72e6: lea edi, [esp + 0x39c] */
  edi = (uint32_t)(esp + 0x39cu);
/* ff72ed: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff72ef: mov ecx, esi */
  ecx = esi;
/* ff72f1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff72f4: lea edi, [esp + 0x5a4] */
  edi = (uint32_t)(esp + 0x5a4u);
/* ff72fb: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_ff72fd: /* ff72fd: mov edx, dword ptr [ebp + 0x468] */
  edx = R32((uint32_t)(ebp + 0x468u));
/* ff7303: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7305: mov eax, dword ptr [esp + 0x12b8] */
  eax = R32((uint32_t)(esp + 0x12b8u));
/* ff730c: jle 0xff734d */
  if ((zf || sf != of)) goto L_ff734d;
L_ff730e: /* ff730e: mov edi, dword ptr [esp + 0x12bc] */
  edi = R32((uint32_t)(esp + 0x12bcu));
/* ff7315: lea ecx, [eax + ebx*4 - 4] */
  ecx = (uint32_t)(eax + ebx*4 + 0xfffffffcu);
/* ff7319: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff731b: jmp 0xff7320 */
  goto L_ff7320;
L_ff7320: /* ff7320: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ff7322: fcomp dword ptr [0x100a1b8] */
  fpu_com(ST0, F32((uint32_t)(0x100a1b8u)));
  FPOP();
/* ff7328: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff732a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff732d: jne 0xff7341 */
  if (!zf) goto L_ff7341;
L_ff732f: /* ff732f: fld dword ptr [ebp + 0x460] */
  { double v = F32((uint32_t)(ebp + 0x460u)); FPUSH(v); }
/* ff7335: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* ff7337: fcomp dword ptr [edi + ecx] */
  fpu_com(ST0, F32((uint32_t)(edi + ecx)));
  FPOP();
/* ff733a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff733c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff733f: je 0xff7349 */
  if (zf) goto L_ff7349;
L_ff7341: /* ff7341: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* ff7342: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7345: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7347: jg 0xff7320 */
  if ((!zf && sf == of)) goto L_ff7320;
L_ff7349: /* ff7349: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
L_ff734d: /* ff734d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff734f: jne 0xff737c */
  if (!zf) goto L_ff737c;
L_ff7351: /* ff7351: mov edx, dword ptr [esp + 0x12c0] */
  edx = R32((uint32_t)(esp + 0x12c0u));
/* ff7358: mov eax, dword ptr [esp + 0x12bc] */
  eax = R32((uint32_t)(esp + 0x12bcu));
/* ff735f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff7360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7361: lea ecx, [esp + 0x6b0] */
  ecx = (uint32_t)(esp + 0x6b0u);
/* ff7368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7369: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff736a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff736b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff736c: xor eax, eax */
  eax = 0;
/* ff736e: call 0xff66b0 */
  esp -= 4; W32(esp, 0xff7373u); SPILL(); f_ff66b0(); if (g_unwind) return; RELOAD();
/* ff7373: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7376: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff737a: jmp 0xff73d3 */
  goto L_ff73d3;
L_ff737c: /* ff737c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff7380: xor esi, esi */
  esi = 0;
/* ff7382: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff7383: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7385: jle 0xff7e0e */
  if ((zf || sf != of)) goto L_ff7e0e;
L_ff738b: /* ff738b: lea edi, [esp + 0x6a8] */
  edi = (uint32_t)(esp + 0x6a8u);
L_ff7392: /* ff7392: mov eax, dword ptr [esp + 0x12b0] */
  eax = R32((uint32_t)(esp + 0x12b0u));
/* ff7399: mov ecx, dword ptr [eax + esi*4 + 4] */
  ecx = R32((uint32_t)(eax + esi*4 + 0x4u));
/* ff739d: mov edx, dword ptr [esp + 0x12c0] */
  edx = R32((uint32_t)(esp + 0x12c0u));
/* ff73a4: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* ff73a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff73a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff73a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff73aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff73ab: mov ecx, dword ptr [esp + 0x12cc] */
  ecx = R32((uint32_t)(esp + 0x12ccu));
/* ff73b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff73b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff73b4: call 0xff66b0 */
  esp -= 4; W32(esp, 0xff73b9u); SPILL(); f_ff66b0(); if (g_unwind) return; RELOAD();
/* ff73b9: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* ff73bd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff73bf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff73c3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff73c6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff73c7: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff73ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff73cb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff73cd: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* ff73d1: jl 0xff7392 */
  if ((sf != of)) goto L_ff7392;
L_ff73d3: /* ff73d3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff73d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff73d9: je 0xff7e0e */
  if (zf) goto L_ff7e0e;
L_ff73df: /* ff73df: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff73e3: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ff73e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff73e8: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* ff73ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff73ed: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff73ee: lea ecx, [esp + 0x6b0] */
  ecx = (uint32_t)(esp + 0x6b0u);
/* ff73f5: mov ebx, 0xffffff38 */
  ebx = 0xffffff38u;
/* ff73fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff73fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff73fc: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* ff7400: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* ff7404: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7409u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7409: mov esi, eax */
  esi = eax;
/* ff740b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff740e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7410: jge 0xff7439 */
  if ((sf == of)) goto L_ff7439;
L_ff7412: /* ff7412: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ff7416: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7417: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* ff741b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff741c: lea ecx, [esp + 0x6b0] */
  ecx = (uint32_t)(esp + 0x6b0u);
/* ff7423: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff7424: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7425: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* ff7429: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* ff7431: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7436u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7436: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff7439: /* ff7439: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff743b: mov eax, 1 */
  eax = 0x1u;
/* ff7440: mov dword ptr [esp + 0x298], eax */
  W32((uint32_t)(esp + 0x298u), eax);
/* ff7447: mov dword ptr [esp + 0x29c], eax */
  W32((uint32_t)(esp + 0x29cu), eax);
/* ff744e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7452: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* ff7456: mov dword ptr [esp + 0x174], eax */
  W32((uint32_t)(esp + 0x174u), eax);
/* ff745d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7461: mov dword ptr [esp + 0x178], eax */
  W32((uint32_t)(esp + 0x178u), eax);
/* ff7468: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* ff746c: jl 0xff7750 */
  if ((sf != of)) goto L_ff7750;
L_ff7472: /* ff7472: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff7476: mov eax, 2 */
  eax = 0x2u;
/* ff747b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff747d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7481: jle 0xff7750 */
  if ((zf || sf != of)) goto L_ff7750;
L_ff7487: /* ff7487: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff748e: add edx, 0x210 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7494: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff7498: jmp 0xff74a0 */
  goto L_ff74a0;
L_ff74a0: /* ff74a0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff74a4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ff74a6: mov ecx, dword ptr [esp + eax*4 + 0x4a0] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x4a0u));
/* ff74ad: mov ebp, dword ptr [esp + eax*4 + 0x39c] */
  ebp = R32((uint32_t)(esp + eax*4 + 0x39cu));
/* ff74b4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff74b8: lea eax, [esp + ecx*4 + 0x5a4] */
  eax = (uint32_t)(esp + ecx*4 + 0x5a4u);
/* ff74bf: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff74c3: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff74c5: je 0xff7730 */
  if (zf) goto L_ff7730;
L_ff74cb: /* ff74cb: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff74d2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff74d6: mov edi, dword ptr [edx + ecx*4 + 0x208] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x208u));
/* ff74dd: mov ebx, dword ptr [edx + ebp*4 + 0x208] */
  ebx = R32((uint32_t)(edx + ebp*4 + 0x208u));
/* ff74e4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff74e6: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* ff74e8: mov eax, edi */
  eax = edi;
/* ff74ea: jge 0xff750d */
  if ((sf == of)) goto L_ff750d;
L_ff74ec: /* ff74ec: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* ff74ef: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff74f2: lea edx, [esp + edx + 0x6cc] */
  edx = (uint32_t)(esp + edx + 0x6ccu);
/* ff74f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7500: /* ff7500: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7503: jne 0xff750d */
  if (!zf) goto L_ff750d;
L_ff7505: /* ff7505: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7506: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7509: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff750b: jl 0xff7500 */
  if ((sf != of)) goto L_ff7500;
L_ff750d: /* ff750d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff750f: jne 0xff754b */
  if (!zf) goto L_ff754b;
L_ff7511: /* ff7511: mov esi, dword ptr [esp + ecx*4 + 0x70] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff7515: xor edx, edx */
  edx = 0;
/* ff7517: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7519: mov eax, 0xffffff38 */
  eax = 0xffffff38u;
/* ff751e: mov dword ptr [esp + ecx*4 + 0x174], eax */
  W32((uint32_t)(esp + ecx*4 + 0x174u), eax);
/* ff7525: jge 0xff752e */
  if ((sf == of)) goto L_ff752e;
L_ff7527: /* ff7527: mov dword ptr [esp + ecx*4 + 0x298], edx */
  W32((uint32_t)(esp + ecx*4 + 0x298u), edx);
L_ff752e: /* ff752e: mov dword ptr [esp + ebp*4 + 0x70], eax */
  W32((uint32_t)(esp + ebp*4 + 0x70u), eax);
/* ff7532: cmp dword ptr [esp + ebp*4 + 0x174], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ebp*4 + 0x174u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7539: jge 0xff7730 */
  if ((sf == of)) goto L_ff7730;
L_ff753f: /* ff753f: mov dword ptr [esp + ebp*4 + 0x298], edx */
  W32((uint32_t)(esp + ebp*4 + 0x298u), edx);
/* ff7546: jmp 0xff7730 */
  goto L_ff7730;
L_ff754b: /* ff754b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff754f: mov edx, dword ptr [eax + ecx*4 + 0x344] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x344u));
/* ff7556: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* ff755a: mov edx, dword ptr [eax + ebp*4 + 0x344] */
  edx = R32((uint32_t)(eax + ebp*4 + 0x344u));
/* ff7561: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff7565: mov edx, dword ptr [esp + ecx*4 + 0x70] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff7569: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff756b: jge 0xff7576 */
  if ((sf == of)) goto L_ff7576;
L_ff756d: /* ff756d: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff7574: jmp 0xff7585 */
  goto L_ff7585;
L_ff7576: /* ff7576: mov ecx, dword ptr [esp + ecx*4 + 0x174] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff757d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff757f: jl 0xff7585 */
  if ((sf != of)) goto L_ff7585;
L_ff7581: /* ff7581: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7583: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_ff7585: /* ff7585: mov ecx, dword ptr [esp + ebp*4 + 0x70] */
  ecx = R32((uint32_t)(esp + ebp*4 + 0x70u));
/* ff7589: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff758b: jge 0xff7596 */
  if ((sf == of)) goto L_ff7596;
L_ff758d: /* ff758d: mov ecx, dword ptr [esp + ebp*4 + 0x174] */
  ecx = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff7594: jmp 0xff75a5 */
  goto L_ff75a5;
L_ff7596: /* ff7596: mov esi, dword ptr [esp + ebp*4 + 0x174] */
  esi = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff759d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff759f: jl 0xff75a5 */
  if ((sf != of)) goto L_ff75a5;
L_ff75a1: /* ff75a1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff75a3: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_ff75a5: /* ff75a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75a6: mov eax, dword ptr [esp + 0x12bc] */
  eax = R32((uint32_t)(esp + 0x12bcu));
/* ff75ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75ae: mov eax, dword ptr [esp + 0x12c4] */
  eax = R32((uint32_t)(esp + 0x12c4u));
/* ff75b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75b6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff75ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75bb: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff75bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75c0: call 0xff6f90 */
  esp -= 4; W32(esp, 0xff75c5u); SPILL(); f_ff6f90(); if (g_unwind) return; RELOAD();
/* ff75c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff75c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff75ca: je 0xff7730 */
  if (zf) goto L_ff7730;
L_ff75d0: /* ff75d0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff75d4: mov eax, 0xffffff38 */
  eax = 0xffffff38u;
/* ff75d9: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* ff75dd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff75e1: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff75e5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff75e9: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* ff75ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75ee: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* ff75f2: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* ff75f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff75f6: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff75f8: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ff75fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75fc: lea eax, [esp + esi + 0x6b4] */
  eax = (uint32_t)(esp + esi + 0x6b4u);
/* ff7603: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7604: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7609u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7609: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* ff760d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7611: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* ff7615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7616: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* ff7619: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* ff761d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff761e: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff7620: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ff7623: lea eax, [esp + edi + 0x6c0] */
  eax = (uint32_t)(esp + edi + 0x6c0u);
/* ff762a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff762b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff762c: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7631u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7631: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* ff7635: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7638: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff763b: jne 0xff7646 */
  if (!zf) goto L_ff7646;
L_ff763d: /* ff763d: mov esi, dword ptr [esp + esi + 0x6d0] */
  esi = R32((uint32_t)(esp + esi + 0x6d0u));
/* ff7644: jmp 0xff764a */
  goto L_ff764a;
L_ff7646: /* ff7646: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
L_ff764a: /* ff764a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff764d: jne 0xff7658 */
  if (!zf) goto L_ff7658;
L_ff764f: /* ff764f: mov edi, dword ptr [esp + edi + 0x6d0] */
  edi = R32((uint32_t)(esp + edi + 0x6d0u));
/* ff7656: jmp 0xff765c */
  goto L_ff765c;
L_ff7658: /* ff7658: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
L_ff765c: /* ff765c: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ff7660: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7662: mov dword ptr [esp + ebx*4 + 0x174], esi */
  W32((uint32_t)(esp + ebx*4 + 0x174u), esi);
/* ff7669: jne 0xff7673 */
  if (!zf) goto L_ff7673;
L_ff766b: /* ff766b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff766d: jl 0xff7673 */
  if ((sf != of)) goto L_ff7673;
L_ff766f: /* ff766f: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
L_ff7673: /* ff7673: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7676: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff767a: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ff767e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7682: mov dword ptr [esp + edx*4 + 0x70], ecx */
  W32((uint32_t)(esp + edx*4 + 0x70u), ecx);
/* ff7686: mov dword ptr [esp + edx*4 + 0x174], edi */
  W32((uint32_t)(esp + edx*4 + 0x174u), edi);
/* ff768d: mov dword ptr [esp + ebp*4 + 0x70], eax */
  W32((uint32_t)(esp + ebp*4 + 0x70u), eax);
/* ff7691: jne 0xff769e */
  if (!zf) goto L_ff769e;
L_ff7693: /* ff7693: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7695: jl 0xff769e */
  if ((sf != of)) goto L_ff769e;
L_ff7697: /* ff7697: mov dword ptr [esp + 0x178], eax */
  W32((uint32_t)(esp + 0x178u), eax);
L_ff769e: /* ff769e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76a0: jge 0xff76b5 */
  if ((sf == of)) goto L_ff76b5;
L_ff76a2: /* ff76a2: mov esi, dword ptr [esp + ebx*4 + 0x70] */
  esi = R32((uint32_t)(esp + ebx*4 + 0x70u));
/* ff76a6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76a8: jge 0xff76b5 */
  if ((sf == of)) goto L_ff76b5;
L_ff76aa: /* ff76aa: mov dword ptr [esp + ebx*4 + 0x298], 0 */
  W32((uint32_t)(esp + ebx*4 + 0x298u), 0x0u);
L_ff76b5: /* ff76b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76b7: jge 0xff76cf */
  if ((sf == of)) goto L_ff76cf;
L_ff76b9: /* ff76b9: mov eax, dword ptr [esp + ebp*4 + 0x174] */
  eax = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff76c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76c2: jge 0xff76cf */
  if ((sf == of)) goto L_ff76cf;
L_ff76c4: /* ff76c4: mov dword ptr [esp + ebp*4 + 0x298], 0 */
  W32((uint32_t)(esp + ebp*4 + 0x298u), 0x0u);
L_ff76cf: /* ff76cf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76d1: jge 0xff76df */
  if ((sf == of)) goto L_ff76df;
L_ff76d3: /* ff76d3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76d5: jl 0xff7730 */
  if ((sf != of)) goto L_ff7730;
L_ff76d7: /* ff76d7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff76db: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_ff76df: /* ff76df: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff76e3: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* ff76e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76e8: jl 0xff7703 */
  if ((sf != of)) goto L_ff7703;
L_ff76ea: /* ff76ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff76f0: /* ff76f0: cmp dword ptr [esp + ecx*4 + 0x39c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x39cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff76f7: jne 0xff7703 */
  if (!zf) goto L_ff7703;
L_ff76f9: /* ff76f9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* ff76fa: mov dword ptr [esp + ecx*4 + 0x3a0], edx */
  W32((uint32_t)(esp + ecx*4 + 0x3a0u), edx);
/* ff7701: jns 0xff76f0 */
  if (!sf) goto L_ff76f0;
L_ff7703: /* ff7703: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff7707: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7708: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff770a: jge 0xff7725 */
  if ((sf == of)) goto L_ff7725;
L_ff770c: /* ff770c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7710: /* ff7710: cmp dword ptr [esp + eax*4 + 0x4a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x4a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7717: jne 0xff7725 */
  if (!zf) goto L_ff7725;
L_ff7719: /* ff7719: mov dword ptr [esp + eax*4 + 0x4a0], edx */
  W32((uint32_t)(esp + eax*4 + 0x4a0u), edx);
/* ff7720: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7721: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7723: jl 0xff7710 */
  if ((sf != of)) goto L_ff7710;
L_ff7725: /* ff7725: mov dword ptr [esp + edx*4 + 0x298], 1 */
  W32((uint32_t)(esp + edx*4 + 0x298u), 0x1u);
L_ff7730: /* ff7730: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7734: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff7738: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff773c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff773d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7740: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7742: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7746: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff774a: jl 0xff74a0 */
  if ((sf != of)) goto L_ff74a0;
L_ff7750: /* ff7750: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff7754: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* ff775a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff775b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff775e: ja 0xff78a9 */
  if ((!cf && !zf)) goto L_ff78a9;
L_ff7764: /* ff7764: jmp dword ptr [eax*4 + 0xff7e80] */
  switch (R32((uint32_t)(eax*4 + 0xff7e80u))) {
    case 0xff776bu: goto L_ff776b;
    case 0xff77bcu: goto L_ff77bc;
    case 0xff780cu: goto L_ff780c;
    case 0xff7866u: goto L_ff7866;
    default: guest_badjump(0xff7764, R32((uint32_t)(eax*4 + 0xff7e80u))); return;
  }
L_ff776b: /* ff776b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff776f: xor ecx, ecx */
  ecx = 0;
/* ff7771: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7773: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff7779: /* ff7779: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7780: /* ff7780: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff7787: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7789: je 0xff77b2 */
  if (zf) goto L_ff77b2;
L_ff778b: /* ff778b: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff778f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7791: jge 0xff779c */
  if ((sf == of)) goto L_ff779c;
L_ff7793: /* ff7793: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff779a: jmp 0xff77ab */
  goto L_ff77ab;
L_ff779c: /* ff779c: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77a3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77a5: jl 0xff77ab */
  if ((sf != of)) goto L_ff77ab;
L_ff77a7: /* ff77a7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff77a9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff77ab: /* ff77ab: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff77ae: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff77b2: /* ff77b2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff77b3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff77b5: jl 0xff7780 */
  if ((sf != of)) goto L_ff7780;
L_ff77b7: /* ff77b7: jmp 0xff78ad */
  goto L_ff78ad;
L_ff77bc: /* ff77bc: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff77c0: xor ecx, ecx */
  ecx = 0;
/* ff77c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77c4: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff77ca: /* ff77ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff77d0: /* ff77d0: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff77d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff77d9: je 0xff7802 */
  if (zf) goto L_ff7802;
L_ff77db: /* ff77db: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff77df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77e1: jge 0xff77ec */
  if ((sf == of)) goto L_ff77ec;
L_ff77e3: /* ff77e3: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77ea: jmp 0xff77fb */
  goto L_ff77fb;
L_ff77ec: /* ff77ec: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77f5: jl 0xff77fb */
  if ((sf != of)) goto L_ff77fb;
L_ff77f7: /* ff77f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff77f9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff77fb: /* ff77fb: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff77fe: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff7802: /* ff7802: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7803: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7805: jl 0xff77d0 */
  if ((sf != of)) goto L_ff77d0;
L_ff7807: /* ff7807: jmp 0xff78ad */
  goto L_ff78ad;
L_ff780c: /* ff780c: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff7810: xor esi, esi */
  esi = 0;
/* ff7812: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7814: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff781a: /* ff781a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff7820: /* ff7820: mov eax, dword ptr [esp + esi*4 + 0x298] */
  eax = R32((uint32_t)(esp + esi*4 + 0x298u));
/* ff7827: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7829: je 0xff785f */
  if (zf) goto L_ff785f;
L_ff782b: /* ff782b: mov ecx, dword ptr [esp + esi*4 + 0x70] */
  ecx = R32((uint32_t)(esp + esi*4 + 0x70u));
/* ff782f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7831: jge 0xff783c */
  if ((sf == of)) goto L_ff783c;
L_ff7833: /* ff7833: mov ecx, dword ptr [esp + esi*4 + 0x174] */
  ecx = R32((uint32_t)(esp + esi*4 + 0x174u));
/* ff783a: jmp 0xff784b */
  goto L_ff784b;
L_ff783c: /* ff783c: mov eax, dword ptr [esp + esi*4 + 0x174] */
  eax = R32((uint32_t)(esp + esi*4 + 0x174u));
/* ff7843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7845: jl 0xff784b */
  if ((sf != of)) goto L_ff784b;
L_ff7847: /* ff7847: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7849: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_ff784b: /* ff784b: mov eax, 0x2aaaaaab */
  eax = 0x2aaaaaabu;
/* ff7850: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* ff7852: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff7854: mov eax, edx */
  eax = edx;
/* ff7856: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7859: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff785b: mov dword ptr [esp + esi*4 + 0x70], edx */
  W32((uint32_t)(esp + esi*4 + 0x70u), edx);
L_ff785f: /* ff785f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff7860: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7862: jl 0xff7820 */
  if ((sf != of)) goto L_ff7820;
L_ff7864: /* ff7864: jmp 0xff78ad */
  goto L_ff78ad;
L_ff7866: /* ff7866: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff786a: xor ecx, ecx */
  ecx = 0;
/* ff786c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff786e: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff7870: /* ff7870: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff7877: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7879: je 0xff78a2 */
  if (zf) goto L_ff78a2;
L_ff787b: /* ff787b: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff787f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7881: jge 0xff788c */
  if ((sf == of)) goto L_ff788c;
L_ff7883: /* ff7883: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff788a: jmp 0xff789b */
  goto L_ff789b;
L_ff788c: /* ff788c: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff7893: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7895: jl 0xff789b */
  if ((sf != of)) goto L_ff789b;
L_ff7897: /* ff7897: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7899: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff789b: /* ff789b: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff789e: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff78a2: /* ff78a2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff78a3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff78a5: jl 0xff7870 */
  if ((sf != of)) goto L_ff7870;
L_ff78a7: /* ff78a7: jmp 0xff78ad */
  goto L_ff78ad;
L_ff78a9: /* ff78a9: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_ff78ad: /* ff78ad: mov ebx, 2 */
  ebx = 0x2u;
/* ff78b2: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff78b4: jle 0xff7a4c */
  if ((zf || sf != of)) goto L_ff7a4c;
L_ff78ba: /* ff78ba: mov ecx, dword ptr [esp + 0x12b0] */
  ecx = R32((uint32_t)(esp + 0x12b0u));
/* ff78c1: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff78c5: add ecx, 0x408 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff78cb: add edx, 0x34c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff78d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff78d5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_ff78d9: /* ff78d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ff78db: mov esi, dword ptr [esp + eax*4 + 0x70] */
  esi = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff78df: mov ecx, dword ptr [ecx - 0xfc] */
  ecx = R32((uint32_t)(ecx + 0xffffff04u));
/* ff78e5: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff78e9: mov edi, dword ptr [ebp + eax*4 + 0x344] */
  edi = R32((uint32_t)(ebp + eax*4 + 0x344u));
/* ff78f0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff78f4: mov ecx, dword ptr [esp + ecx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff78f8: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* ff78fe: and ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff7904: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7906: mov eax, ecx */
  eax = ecx;
/* ff7908: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7909: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff790b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff790d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff7911: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff7913: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff7915: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* ff7918: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff791c: mov ebp, dword ptr [ebp + edx*4 + 0x344] */
  ebp = R32((uint32_t)(ebp + edx*4 + 0x344u));
/* ff7923: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ff7925: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7926: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0xff7926);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff7928: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff792a: jge 0xff7930 */
  if ((sf == of)) goto L_ff7930;
L_ff792c: /* ff792c: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff792e: jmp 0xff7932 */
  goto L_ff7932;
L_ff7930: /* ff7930: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_ff7932: /* ff7932: mov eax, dword ptr [esp + ebx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x298u));
/* ff7939: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff793b: je 0xff79df */
  if (zf) goto L_ff79df;
L_ff7941: /* ff7941: mov eax, dword ptr [esp + 0x12b0] */
  eax = R32((uint32_t)(esp + 0x12b0u));
/* ff7948: mov ecx, dword ptr [eax + 0x50c] */
  ecx = R32((uint32_t)(eax + 0x50cu));
/* ff794e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7950: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7952: jl 0xff7956 */
  if ((sf != of)) goto L_ff7956;
L_ff7954: /* ff7954: mov ecx, esi */
  ecx = esi;
L_ff7956: /* ff7956: mov eax, dword ptr [esp + ebx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x70u));
/* ff795a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ff795c: jns 0xff7978 */
  if (!sf) goto L_ff7978;
L_ff795e: /* ff795e: mov edx, ecx */
  edx = ecx;
/* ff7960: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* ff7962: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7964: jge 0xff796d */
  if ((sf == of)) goto L_ff796d;
L_ff7966: /* ff7966: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7968: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff7969: mov eax, ecx */
  eax = ecx;
/* ff796b: jmp 0xff7982 */
  goto L_ff7982;
L_ff796d: /* ff796d: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff796f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ff7972: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7974: mov eax, ecx */
  eax = ecx;
/* ff7976: jmp 0xff7982 */
  goto L_ff7982;
L_ff7978: /* ff7978: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff797a: jl 0xff7980 */
  if ((sf != of)) goto L_ff7980;
L_ff797c: /* ff797c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff797e: jmp 0xff7982 */
  goto L_ff7982;
L_ff7980: /* ff7980: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_ff7982: /* ff7982: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff7986: mov edx, dword ptr [ecx - 0x1f8] */
  edx = R32((uint32_t)(ecx + 0xfffffe08u));
/* ff798c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff7990: mov dword ptr [esp + ebx*4 + 0x174], eax */
  W32((uint32_t)(esp + ebx*4 + 0x174u), eax);
/* ff7997: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* ff799a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff799c: jge 0xff79bc */
  if ((sf == of)) goto L_ff79bc;
L_ff799e: /* ff799e: mov edi, edi */
  edi = edi;
L_ff79a0: /* ff79a0: cmp dword ptr [esp + eax*4 + 0x4a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x4a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff79a7: jne 0xff79bc */
  if (!zf) goto L_ff79bc;
L_ff79a9: /* ff79a9: mov edi, dword ptr [esp + edx*4 + 0x4a0] */
  edi = R32((uint32_t)(esp + edx*4 + 0x4a0u));
/* ff79b0: mov dword ptr [esp + eax*4 + 0x4a0], edi */
  W32((uint32_t)(esp + eax*4 + 0x4a0u), edi);
/* ff79b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff79b8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff79ba: jl 0xff79a0 */
  if ((sf != of)) goto L_ff79a0;
L_ff79bc: /* ff79bc: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* ff79bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff79c1: jl 0xff79f6 */
  if ((sf != of)) goto L_ff79f6;
L_ff79c3: /* ff79c3: cmp dword ptr [esp + eax*4 + 0x39c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x39cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff79ca: jne 0xff79f6 */
  if (!zf) goto L_ff79f6;
L_ff79cc: /* ff79cc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ff79cd: mov edi, dword ptr [esp + edx*4 + 0x39c] */
  edi = R32((uint32_t)(esp + edx*4 + 0x39cu));
/* ff79d4: mov dword ptr [esp + eax*4 + 0x3a0], edi */
  W32((uint32_t)(esp + eax*4 + 0x3a0u), edi);
/* ff79db: jns 0xff79c3 */
  if (!sf) goto L_ff79c3;
L_ff79dd: /* ff79dd: jmp 0xff79f6 */
  goto L_ff79f6;
L_ff79df: /* ff79df: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff79e3: mov dword ptr [esp + ebx*4 + 0x70], esi */
  W32((uint32_t)(esp + ebx*4 + 0x70u), esi);
/* ff79e7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff79eb: mov dword ptr [esp + ebx*4 + 0x174], 0 */
  W32((uint32_t)(esp + ebx*4 + 0x174u), 0x0u);
L_ff79f6: /* ff79f6: mov eax, dword ptr [esp + ebx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x174u));
/* ff79fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff79ff: jne 0xff7a0b */
  if (!zf) goto L_ff7a0b;
L_ff7a01: /* ff7a01: or dword ptr [esp + ebx*4 + 0x70], 0x8000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ebx*4 + 0x70u))); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + ebx*4 + 0x70u), r);
  }
/* ff7a09: jmp 0xff7a31 */
  goto L_ff7a31;
L_ff7a0b: /* ff7a0b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ff7a0d: mov edi, dword ptr [esp + eax*4 + 0x70] */
  edi = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff7a11: lea eax, [esp + eax*4 + 0x70] */
  eax = (uint32_t)(esp + eax*4 + 0x70u);
/* ff7a15: and edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ff7a1b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ff7a1d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7a21: mov edx, dword ptr [esp + eax*4 + 0x70] */
  edx = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff7a25: lea eax, [esp + eax*4 + 0x70] */
  eax = (uint32_t)(esp + eax*4 + 0x70u);
/* ff7a29: and edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff7a2f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_ff7a31: /* ff7a31: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff7a35: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff7a36: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7a39: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7a3c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7a3e: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7a42: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff7a46: jl 0xff78d9 */
  if ((sf != of)) goto L_ff78d9;
L_ff7a4c: /* ff7a4c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7a50: xor edi, edi */
  edi = 0;
/* ff7a52: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a54: je 0xff7ce9 */
  if (zf) goto L_ff7ce9;
L_ff7a5a: /* ff7a5a: mov ebx, dword ptr [esp + 0x12ac] */
  ebx = R32((uint32_t)(esp + 0x12acu));
/* ff7a61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7a63: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff7a66: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7a68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7a69: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* ff7a6d: call 0x100913c */
  esp -= 4; W32(esp, 0xff7a72u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7a72: mov esi, dword ptr [esp + 0x12bc] */
  esi = R32((uint32_t)(esp + 0x12bcu));
/* ff7a79: mov eax, dword ptr [esi + 0x51c] */
  eax = R32((uint32_t)(esi + 0x51cu));
/* ff7a7f: mov edx, dword ptr [esi + 0x50c] */
  edx = R32((uint32_t)(esi + 0x50cu));
/* ff7a85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7a88: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7a89: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff7a8a: mov dword ptr [esi + 0x51c], eax */
  W32((uint32_t)(esi + 0x51cu), eax);
/* ff7a90: mov eax, edx */
  eax = edx;
/* ff7a92: xor ecx, ecx */
  ecx = 0;
/* ff7a94: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a96: je 0xff7a9f */
  if (zf) goto L_ff7a9f;
L_ff7a98: /* ff7a98: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7a9a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7a9b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a9d: jne 0xff7a98 */
  if (!zf) goto L_ff7a98;
L_ff7a9f: /* ff7a9f: mov ebp, dword ptr [esi + 0x518] */
  ebp = R32((uint32_t)(esi + 0x518u));
/* ff7aa5: lea eax, [ecx + ecx] */
  eax = (uint32_t)(ecx + ecx);
/* ff7aa8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff7aaa: mov eax, edx */
  eax = edx;
/* ff7aac: xor ecx, ecx */
  ecx = 0;
/* ff7aae: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7ab0: mov dword ptr [esi + 0x518], ebp */
  W32((uint32_t)(esi + 0x518u), ebp);
/* ff7ab6: je 0xff7abf */
  if (zf) goto L_ff7abf;
L_ff7ab8: /* ff7ab8: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7aba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7abb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7abd: jne 0xff7ab8 */
  if (!zf) goto L_ff7ab8;
L_ff7abf: /* ff7abf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7ac0: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* ff7ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7ac5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7ac6: call 0x100913c */
  esp -= 4; W32(esp, 0xff7acbu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7acb: mov eax, dword ptr [esi + 0x50c] */
  eax = R32((uint32_t)(esi + 0x50cu));
/* ff7ad1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7ad4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7ad5: mov ecx, edi */
  ecx = edi;
/* ff7ad7: je 0xff7ae7 */
  if (zf) goto L_ff7ae7;
L_ff7ad9: /* ff7ad9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7ae0: /* ff7ae0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7ae2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7ae3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7ae5: jne 0xff7ae0 */
  if (!zf) goto L_ff7ae0;
L_ff7ae7: /* ff7ae7: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* ff7aeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7aec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7aed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7aee: call 0x100913c */
  esp -= 4; W32(esp, 0xff7af3u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7af3: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* ff7af7: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff7afa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7afd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7aff: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* ff7b03: mov dword ptr [esp + 0x1c], 2 */
  W32((uint32_t)(esp + 0x1cu), 0x2u);
/* ff7b0b: jle 0xff7ce9 */
  if ((zf || sf != of)) goto L_ff7ce9;
L_ff7b11: /* ff7b11: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* ff7b14: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff7b18: jmp 0xff7b20 */
  goto L_ff7b20;
L_ff7b1a: /* ff7b1a: xor edi, edi */
  edi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ff7b1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7b20: /* ff7b20: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff7b24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff7b26: mov ebx, dword ptr [ebp + edx*4 + 0xc0] */
  ebx = R32((uint32_t)(ebp + edx*4 + 0xc0u));
/* ff7b2d: mov eax, dword ptr [ebp + edx*4 + 0x80] */
  eax = R32((uint32_t)(ebp + edx*4 + 0x80u));
/* ff7b34: mov ecx, ebx */
  ecx = ebx;
/* ff7b36: mov esi, 1 */
  esi = 0x1u;
/* ff7b3b: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* ff7b3d: xor ecx, ecx */
  ecx = 0;
/* ff7b3f: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7b41: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff7b45: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff7b49: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* ff7b4d: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* ff7b51: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* ff7b55: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* ff7b59: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* ff7b5d: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* ff7b61: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* ff7b65: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* ff7b69: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7b6d: je 0xff7c4c */
  if (zf) goto L_ff7c4c;
L_ff7b73: /* ff7b73: xor eax, eax */
  eax = 0;
/* ff7b75: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7b77: jle 0xff7bb1 */
  if ((zf || sf != of)) goto L_ff7bb1;
L_ff7b79: /* ff7b79: add edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7b7c: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff7b7f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7b81: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
L_ff7b85: /* ff7b85: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* ff7b87: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7b89: jge 0xff7b98 */
  if ((sf == of)) goto L_ff7b98;
L_ff7b8b: /* ff7b8b: mov dword ptr [esp + eax*4 + 0x278], 1 */
  W32((uint32_t)(esp + eax*4 + 0x278u), 0x1u);
/* ff7b96: jmp 0xff7ba9 */
  goto L_ff7ba9;
L_ff7b98: /* ff7b98: mov edi, dword ptr [ebp + edi*4 + 0x924] */
  edi = R32((uint32_t)(ebp + edi*4 + 0x924u));
/* ff7b9f: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* ff7ba2: mov dword ptr [esp + eax*4 + 0x278], edi */
  W32((uint32_t)(esp + eax*4 + 0x278u), edi);
L_ff7ba9: /* ff7ba9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7baa: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7bad: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7baf: jl 0xff7b85 */
  if ((sf != of)) goto L_ff7b85;
L_ff7bb1: /* ff7bb1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff7bb5: xor eax, eax */
  eax = 0;
/* ff7bb7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7bb9: jle 0xff7c02 */
  if ((zf || sf != of)) goto L_ff7c02;
L_ff7bbb: /* ff7bbb: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ff7bbf: lea ebp, [esp + ebp*4 + 0x174] */
  ebp = (uint32_t)(esp + ebp*4 + 0x174u);
L_ff7bc6: /* ff7bc6: xor edx, edx */
  edx = 0;
/* ff7bc8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff7bca: jle 0xff7be4 */
  if ((zf || sf != of)) goto L_ff7be4;
L_ff7bcc: /* ff7bcc: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* ff7bcf: nop  */
L_ff7bd0: /* ff7bd0: cmp edi, dword ptr [esp + edx*4 + 0x278] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edx*4 + 0x278u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bd7: jl 0xff7be0 */
  if ((sf != of)) goto L_ff7be0;
L_ff7bd9: /* ff7bd9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff7bda: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bdc: jl 0xff7bd0 */
  if ((sf != of)) goto L_ff7bd0;
L_ff7bde: /* ff7bde: jmp 0xff7be4 */
  goto L_ff7be4;
L_ff7be0: /* ff7be0: mov dword ptr [esp + eax*4 + 0x50], edx */
  W32((uint32_t)(esp + eax*4 + 0x50u), edx);
L_ff7be4: /* ff7be4: mov edx, dword ptr [esp + eax*4 + 0x50] */
  edx = R32((uint32_t)(esp + eax*4 + 0x50u));
/* ff7be8: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff7bec: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff7bee: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7bf0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff7bf3: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff7bf5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff7bf9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7bfa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bfc: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7c00: jl 0xff7bc6 */
  if ((sf != of)) goto L_ff7bc6;
L_ff7c02: /* ff7c02: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff7c06: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff7c0a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff7c0e: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* ff7c12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7c13: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff7c17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c18: mov ecx, dword ptr [edx + eax*4 + 0x100] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x100u));
/* ff7c1f: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* ff7c22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7c24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c25: call 0xff4000 */
  esp -= 4; W32(esp, 0xff7c2au); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff7c2a: mov ecx, dword ptr [esp + 0x12bc] */
  ecx = R32((uint32_t)(esp + 0x12bcu));
/* ff7c31: mov edx, dword ptr [ecx + 0x514] */
  edx = R32((uint32_t)(ecx + 0x514u));
/* ff7c37: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* ff7c3b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7c3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7c40: mov dword ptr [ecx + 0x514], edx */
  W32((uint32_t)(ecx + 0x514u), edx);
/* ff7c46: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff7c4a: xor edi, edi */
  edi = 0;
L_ff7c4c: /* ff7c4c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7c50: xor esi, esi */
  esi = 0;
/* ff7c52: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7c54: jle 0xff7cbc */
  if ((zf || sf != of)) goto L_ff7cbc;
L_ff7c56: /* ff7c56: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff7c5a: mov ebx, dword ptr [esp + 0x12b0] */
  ebx = R32((uint32_t)(esp + 0x12b0u));
/* ff7c61: lea edx, [edx*8 + 0x50] */
  edx = (uint32_t)(edx*8 + 0x50u);
/* ff7c68: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* ff7c6c: lea edi, [esp + edi*4 + 0x174] */
  edi = (uint32_t)(esp + edi*4 + 0x174u);
L_ff7c73: /* ff7c73: mov eax, dword ptr [esp + esi*4 + 0x50] */
  eax = R32((uint32_t)(esp + esi*4 + 0x50u));
/* ff7c77: add eax, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7c7b: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* ff7c7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7c81: jl 0xff7cb0 */
  if ((sf != of)) goto L_ff7cb0;
L_ff7c83: /* ff7c83: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff7c87: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* ff7c8a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff7c8c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7c8e: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7c91: jge 0xff7cb0 */
  if ((sf == of)) goto L_ff7cb0;
L_ff7c93: /* ff7c93: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff7c97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7c98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7c9a: call 0xff4000 */
  esp -= 4; W32(esp, 0xff7c9fu); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff7c9f: mov ecx, dword ptr [ebx + 0x518] */
  ecx = R32((uint32_t)(ebx + 0x518u));
/* ff7ca5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7ca8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7caa: mov dword ptr [ebx + 0x518], ecx */
  W32((uint32_t)(ebx + 0x518u), ecx);
L_ff7cb0: /* ff7cb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7cb4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff7cb5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7cb8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7cba: jl 0xff7c73 */
  if ((sf != of)) goto L_ff7c73;
L_ff7cbc: /* ff7cbc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7cc0: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff7cc4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff7cc8: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff7ccb: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7ccd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7cd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7cd2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7cd5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7cd7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* ff7cdb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7cdf: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7ce3: jl 0xff7b1a */
  if ((sf != of)) goto L_ff7b1a;
L_ff7ce9: /* ff7ce9: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff7ced: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* ff7cf3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff7cf7: imul ecx, dword ptr [esp + 0x70] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x70u)));
  ecx = (uint32_t)r;
  }
/* ff7cfc: mov ebp, dword ptr [esp + 0x12c4] */
  ebp = R32((uint32_t)(esp + 0x12c4u));
/* ff7d03: xor ebx, ebx */
  ebx = 0;
/* ff7d05: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d08: jle 0xff7d6d */
  if ((zf || sf != of)) goto L_ff7d6d;
L_ff7d0a: /* ff7d0a: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff7d11: add edx, 0x108 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7d17: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff7d18: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7d1c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_ff7d20: /* ff7d20: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7d24: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ff7d26: mov eax, dword ptr [esp + edx*4 + 0x70] */
  eax = R32((uint32_t)(esp + edx*4 + 0x70u));
/* ff7d2a: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* ff7d2c: js 0xff7d57 */
  if (sf) goto L_ff7d57;
L_ff7d2e: /* ff7d2e: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* ff7d32: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff7d37: imul eax, dword ptr [edi + 0x340] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x340u)));
  eax = (uint32_t)r;
  }
/* ff7d3e: mov edi, dword ptr [edi + edx*4 + 0x344] */
  edi = R32((uint32_t)(edi + edx*4 + 0x344u));
/* ff7d45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff7d46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7d47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff7d48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7d49: mov esi, eax */
  esi = eax;
/* ff7d4b: call 0xff6600 */
  esp -= 4; W32(esp, 0xff7d50u); SPILL(); f_ff6600(); if (g_unwind) return; RELOAD();
/* ff7d50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7d53: mov ebx, edi */
  ebx = edi;
/* ff7d55: mov ecx, esi */
  ecx = esi;
L_ff7d57: /* ff7d57: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff7d5b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7d5f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7d62: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7d63: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7d67: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff7d6b: jne 0xff7d20 */
  if (!zf) goto L_ff7d20;
L_ff7d6d: /* ff7d6d: mov edi, dword ptr [esp + 0x12ac] */
  edi = R32((uint32_t)(esp + 0x12acu));
/* ff7d74: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7d77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7d78: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7d7a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7d7c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d7e: jge 0xff7d95 */
  if ((sf == of)) goto L_ff7d95;
L_ff7d80: /* ff7d80: mov ecx, dword ptr [ebp + ebx*4 - 4] */
  ecx = R32((uint32_t)(ebp + ebx*4 + 0xfffffffcu));
/* ff7d84: mov dword ptr [ebp + ebx*4], ecx */
  W32((uint32_t)(ebp + ebx*4), ecx);
/* ff7d88: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7d8b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7d8c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7d8e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff7d8f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7d91: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d93: jl 0xff7d80 */
  if ((sf != of)) goto L_ff7d80;
L_ff7d95: /* ff7d95: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* ff7d99: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7d9b: jle 0xff7de3 */
  if ((zf || sf != of)) goto L_ff7de3;
L_ff7d9d: /* ff7d9d: mov ecx, dword ptr [esp + 0x12bc] */
  ecx = R32((uint32_t)(esp + 0x12bcu));
/* ff7da4: mov edx, dword ptr [esp + 0x12b8] */
  edx = R32((uint32_t)(esp + 0x12b8u));
/* ff7dab: mov esi, dword ptr [esp + 0x12b4] */
  esi = R32((uint32_t)(esp + 0x12b4u));
/* ff7db2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff7db4: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff7db6: mov ebx, ebp */
  ebx = ebp;
/* ff7db8: jmp 0xff7dc0 */
  goto L_ff7dc0;
L_ff7dc0: /* ff7dc0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff7dc4: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* ff7dc7: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff7dcd: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ff7dcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7dd1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff7dd4: jp 0xff7ddd */
  if (pf) goto L_ff7ddd;
L_ff7dd6: /* ff7dd6: mov dword ptr [esi + ecx], 0 */
  W32((uint32_t)(esi + ecx), 0x0u);
L_ff7ddd: /* ff7ddd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7de0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* ff7de1: jne 0xff7dc0 */
  if (!zf) goto L_ff7dc0;
L_ff7de3: /* ff7de3: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7de6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7de7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7de9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7deb: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7ded: mov ecx, ebp */
  ecx = ebp;
/* ff7def: jge 0xff7e64 */
  if ((sf == of)) goto L_ff7e64;
L_ff7df1: /* ff7df1: mov edx, dword ptr [esp + 0x12b4] */
  edx = R32((uint32_t)(esp + 0x12b4u));
/* ff7df8: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* ff7dff: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7e02: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7e03: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7e05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7e06: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7e08: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7e0a: jl 0xff7df1 */
  if ((sf != of)) goto L_ff7df1;
L_ff7e0c: /* ff7e0c: jmp 0xff7e64 */
  goto L_ff7e64;
L_ff7e0e: /* ff7e0e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7e14: je 0xff7e2d */
  if (zf) goto L_ff7e2d;
L_ff7e16: /* ff7e16: mov eax, dword ptr [esp + 0x12ac] */
  eax = R32((uint32_t)(esp + 0x12acu));
/* ff7e1d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7e1f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7e22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff7e24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7e25: call 0x100913c */
  esp -= 4; W32(esp, 0xff7e2au); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7e2a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff7e2d: /* ff7e2d: mov edi, dword ptr [esp + 0x12c4] */
  edi = R32((uint32_t)(esp + 0x12c4u));
/* ff7e34: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* ff7e3b: mov ecx, edx */
  ecx = edx;
/* ff7e3d: mov esi, ecx */
  esi = ecx;
/* ff7e3f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff7e42: xor eax, eax */
  eax = 0;
/* ff7e44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff7e46: mov ecx, esi */
  ecx = esi;
/* ff7e48: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff7e4b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff7e4d: mov edi, dword ptr [esp + 0x12b4] */
  edi = R32((uint32_t)(esp + 0x12b4u));
/* ff7e54: mov ecx, edx */
  ecx = edx;
/* ff7e56: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff7e59: xor eax, eax */
  eax = 0;
/* ff7e5b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff7e5d: mov ecx, edx */
  ecx = edx;
/* ff7e5f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff7e62: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_ff7e64: /* ff7e64: mov eax, dword ptr [0x100d1d8] */
  eax = R32((uint32_t)(0x100d1d8u));
/* ff7e69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff7e6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff7e6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7e6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff7e6d: mov dword ptr [0x100d1d8], eax */
  W32((uint32_t)(0x100d1d8u), eax);
/* ff7e72: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7e76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff7e77: add esp, 0x1298 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1298u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7e7d: ret  */
  esp += 4; SPILL(); return;
}

void f_ff731d(void) {
  LOAD_REGS();
L_ff731d: /* ff731d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff7320: /* ff7320: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ff7322: fcomp dword ptr [0x100a1b8] */
  fpu_com(ST0, F32((uint32_t)(0x100a1b8u)));
  FPOP();
/* ff7328: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff732a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff732d: jne 0xff7341 */
  if (!zf) goto L_ff7341;
L_ff732f: /* ff732f: fld dword ptr [ebp + 0x460] */
  { double v = F32((uint32_t)(ebp + 0x460u)); FPUSH(v); }
/* ff7335: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* ff7337: fcomp dword ptr [edi + ecx] */
  fpu_com(ST0, F32((uint32_t)(edi + ecx)));
  FPOP();
/* ff733a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff733c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff733f: je 0xff7349 */
  if (zf) goto L_ff7349;
L_ff7341: /* ff7341: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* ff7342: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7345: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7347: jg 0xff7320 */
  if ((!zf && sf == of)) goto L_ff7320;
L_ff7349: /* ff7349: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* ff734d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff734f: jne 0xff737c */
  if (!zf) goto L_ff737c;
L_ff7351: /* ff7351: mov edx, dword ptr [esp + 0x12c0] */
  edx = R32((uint32_t)(esp + 0x12c0u));
/* ff7358: mov eax, dword ptr [esp + 0x12bc] */
  eax = R32((uint32_t)(esp + 0x12bcu));
/* ff735f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff7360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7361: lea ecx, [esp + 0x6b0] */
  ecx = (uint32_t)(esp + 0x6b0u);
/* ff7368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7369: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff736a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff736b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff736c: xor eax, eax */
  eax = 0;
/* ff736e: call 0xff66b0 */
  esp -= 4; W32(esp, 0xff7373u); SPILL(); f_ff66b0(); if (g_unwind) return; RELOAD();
/* ff7373: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7376: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff737a: jmp 0xff73d3 */
  goto L_ff73d3;
L_ff737c: /* ff737c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff7380: xor esi, esi */
  esi = 0;
/* ff7382: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff7383: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7385: jle 0xff7e0e */
  if ((zf || sf != of)) goto L_ff7e0e;
L_ff738b: /* ff738b: lea edi, [esp + 0x6a8] */
  edi = (uint32_t)(esp + 0x6a8u);
L_ff7392: /* ff7392: mov eax, dword ptr [esp + 0x12b0] */
  eax = R32((uint32_t)(esp + 0x12b0u));
/* ff7399: mov ecx, dword ptr [eax + esi*4 + 4] */
  ecx = R32((uint32_t)(eax + esi*4 + 0x4u));
/* ff739d: mov edx, dword ptr [esp + 0x12c0] */
  edx = R32((uint32_t)(esp + 0x12c0u));
/* ff73a4: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* ff73a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff73a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff73a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff73aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff73ab: mov ecx, dword ptr [esp + 0x12cc] */
  ecx = R32((uint32_t)(esp + 0x12ccu));
/* ff73b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff73b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff73b4: call 0xff66b0 */
  esp -= 4; W32(esp, 0xff73b9u); SPILL(); f_ff66b0(); if (g_unwind) return; RELOAD();
/* ff73b9: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* ff73bd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff73bf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff73c3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff73c6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff73c7: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff73ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff73cb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff73cd: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* ff73d1: jl 0xff7392 */
  if ((sf != of)) goto L_ff7392;
L_ff73d3: /* ff73d3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff73d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff73d9: je 0xff7e0e */
  if (zf) goto L_ff7e0e;
L_ff73df: /* ff73df: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff73e3: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ff73e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff73e8: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* ff73ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff73ed: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff73ee: lea ecx, [esp + 0x6b0] */
  ecx = (uint32_t)(esp + 0x6b0u);
/* ff73f5: mov ebx, 0xffffff38 */
  ebx = 0xffffff38u;
/* ff73fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff73fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff73fc: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* ff7400: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* ff7404: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7409u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7409: mov esi, eax */
  esi = eax;
/* ff740b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff740e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7410: jge 0xff7439 */
  if ((sf == of)) goto L_ff7439;
L_ff7412: /* ff7412: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ff7416: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7417: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* ff741b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff741c: lea ecx, [esp + 0x6b0] */
  ecx = (uint32_t)(esp + 0x6b0u);
/* ff7423: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff7424: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7425: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* ff7429: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* ff7431: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7436u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7436: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff7439: /* ff7439: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff743b: mov eax, 1 */
  eax = 0x1u;
/* ff7440: mov dword ptr [esp + 0x298], eax */
  W32((uint32_t)(esp + 0x298u), eax);
/* ff7447: mov dword ptr [esp + 0x29c], eax */
  W32((uint32_t)(esp + 0x29cu), eax);
/* ff744e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7452: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* ff7456: mov dword ptr [esp + 0x174], eax */
  W32((uint32_t)(esp + 0x174u), eax);
/* ff745d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7461: mov dword ptr [esp + 0x178], eax */
  W32((uint32_t)(esp + 0x178u), eax);
/* ff7468: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* ff746c: jl 0xff7750 */
  if ((sf != of)) goto L_ff7750;
L_ff7472: /* ff7472: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff7476: mov eax, 2 */
  eax = 0x2u;
/* ff747b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff747d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7481: jle 0xff7750 */
  if ((zf || sf != of)) goto L_ff7750;
L_ff7487: /* ff7487: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff748e: add edx, 0x210 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7494: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff7498: jmp 0xff74a0 */
  goto L_ff74a0;
L_ff74a0: /* ff74a0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff74a4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ff74a6: mov ecx, dword ptr [esp + eax*4 + 0x4a0] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x4a0u));
/* ff74ad: mov ebp, dword ptr [esp + eax*4 + 0x39c] */
  ebp = R32((uint32_t)(esp + eax*4 + 0x39cu));
/* ff74b4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff74b8: lea eax, [esp + ecx*4 + 0x5a4] */
  eax = (uint32_t)(esp + ecx*4 + 0x5a4u);
/* ff74bf: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff74c3: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff74c5: je 0xff7730 */
  if (zf) goto L_ff7730;
L_ff74cb: /* ff74cb: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff74d2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff74d6: mov edi, dword ptr [edx + ecx*4 + 0x208] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x208u));
/* ff74dd: mov ebx, dword ptr [edx + ebp*4 + 0x208] */
  ebx = R32((uint32_t)(edx + ebp*4 + 0x208u));
/* ff74e4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff74e6: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* ff74e8: mov eax, edi */
  eax = edi;
/* ff74ea: jge 0xff750d */
  if ((sf == of)) goto L_ff750d;
L_ff74ec: /* ff74ec: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* ff74ef: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff74f2: lea edx, [esp + edx + 0x6cc] */
  edx = (uint32_t)(esp + edx + 0x6ccu);
/* ff74f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7500: /* ff7500: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7503: jne 0xff750d */
  if (!zf) goto L_ff750d;
L_ff7505: /* ff7505: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7506: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7509: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff750b: jl 0xff7500 */
  if ((sf != of)) goto L_ff7500;
L_ff750d: /* ff750d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff750f: jne 0xff754b */
  if (!zf) goto L_ff754b;
L_ff7511: /* ff7511: mov esi, dword ptr [esp + ecx*4 + 0x70] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff7515: xor edx, edx */
  edx = 0;
/* ff7517: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7519: mov eax, 0xffffff38 */
  eax = 0xffffff38u;
/* ff751e: mov dword ptr [esp + ecx*4 + 0x174], eax */
  W32((uint32_t)(esp + ecx*4 + 0x174u), eax);
/* ff7525: jge 0xff752e */
  if ((sf == of)) goto L_ff752e;
L_ff7527: /* ff7527: mov dword ptr [esp + ecx*4 + 0x298], edx */
  W32((uint32_t)(esp + ecx*4 + 0x298u), edx);
L_ff752e: /* ff752e: mov dword ptr [esp + ebp*4 + 0x70], eax */
  W32((uint32_t)(esp + ebp*4 + 0x70u), eax);
/* ff7532: cmp dword ptr [esp + ebp*4 + 0x174], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ebp*4 + 0x174u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7539: jge 0xff7730 */
  if ((sf == of)) goto L_ff7730;
L_ff753f: /* ff753f: mov dword ptr [esp + ebp*4 + 0x298], edx */
  W32((uint32_t)(esp + ebp*4 + 0x298u), edx);
/* ff7546: jmp 0xff7730 */
  goto L_ff7730;
L_ff754b: /* ff754b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff754f: mov edx, dword ptr [eax + ecx*4 + 0x344] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x344u));
/* ff7556: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* ff755a: mov edx, dword ptr [eax + ebp*4 + 0x344] */
  edx = R32((uint32_t)(eax + ebp*4 + 0x344u));
/* ff7561: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff7565: mov edx, dword ptr [esp + ecx*4 + 0x70] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff7569: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff756b: jge 0xff7576 */
  if ((sf == of)) goto L_ff7576;
L_ff756d: /* ff756d: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff7574: jmp 0xff7585 */
  goto L_ff7585;
L_ff7576: /* ff7576: mov ecx, dword ptr [esp + ecx*4 + 0x174] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff757d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff757f: jl 0xff7585 */
  if ((sf != of)) goto L_ff7585;
L_ff7581: /* ff7581: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7583: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_ff7585: /* ff7585: mov ecx, dword ptr [esp + ebp*4 + 0x70] */
  ecx = R32((uint32_t)(esp + ebp*4 + 0x70u));
/* ff7589: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff758b: jge 0xff7596 */
  if ((sf == of)) goto L_ff7596;
L_ff758d: /* ff758d: mov ecx, dword ptr [esp + ebp*4 + 0x174] */
  ecx = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff7594: jmp 0xff75a5 */
  goto L_ff75a5;
L_ff7596: /* ff7596: mov esi, dword ptr [esp + ebp*4 + 0x174] */
  esi = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff759d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff759f: jl 0xff75a5 */
  if ((sf != of)) goto L_ff75a5;
L_ff75a1: /* ff75a1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff75a3: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_ff75a5: /* ff75a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75a6: mov eax, dword ptr [esp + 0x12bc] */
  eax = R32((uint32_t)(esp + 0x12bcu));
/* ff75ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75ae: mov eax, dword ptr [esp + 0x12c4] */
  eax = R32((uint32_t)(esp + 0x12c4u));
/* ff75b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75b6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff75ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75bb: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff75bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75c0: call 0xff6f90 */
  esp -= 4; W32(esp, 0xff75c5u); SPILL(); f_ff6f90(); if (g_unwind) return; RELOAD();
/* ff75c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff75c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff75ca: je 0xff7730 */
  if (zf) goto L_ff7730;
L_ff75d0: /* ff75d0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff75d4: mov eax, 0xffffff38 */
  eax = 0xffffff38u;
/* ff75d9: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* ff75dd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff75e1: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff75e5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff75e9: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* ff75ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75ee: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* ff75f2: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* ff75f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff75f6: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff75f8: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ff75fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75fc: lea eax, [esp + esi + 0x6b4] */
  eax = (uint32_t)(esp + esi + 0x6b4u);
/* ff7603: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7604: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7609u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7609: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* ff760d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7611: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* ff7615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7616: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* ff7619: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* ff761d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff761e: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff7620: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ff7623: lea eax, [esp + edi + 0x6c0] */
  eax = (uint32_t)(esp + edi + 0x6c0u);
/* ff762a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff762b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff762c: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7631u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7631: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* ff7635: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7638: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff763b: jne 0xff7646 */
  if (!zf) goto L_ff7646;
L_ff763d: /* ff763d: mov esi, dword ptr [esp + esi + 0x6d0] */
  esi = R32((uint32_t)(esp + esi + 0x6d0u));
/* ff7644: jmp 0xff764a */
  goto L_ff764a;
L_ff7646: /* ff7646: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
L_ff764a: /* ff764a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff764d: jne 0xff7658 */
  if (!zf) goto L_ff7658;
L_ff764f: /* ff764f: mov edi, dword ptr [esp + edi + 0x6d0] */
  edi = R32((uint32_t)(esp + edi + 0x6d0u));
/* ff7656: jmp 0xff765c */
  goto L_ff765c;
L_ff7658: /* ff7658: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
L_ff765c: /* ff765c: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ff7660: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7662: mov dword ptr [esp + ebx*4 + 0x174], esi */
  W32((uint32_t)(esp + ebx*4 + 0x174u), esi);
/* ff7669: jne 0xff7673 */
  if (!zf) goto L_ff7673;
L_ff766b: /* ff766b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff766d: jl 0xff7673 */
  if ((sf != of)) goto L_ff7673;
L_ff766f: /* ff766f: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
L_ff7673: /* ff7673: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7676: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff767a: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ff767e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7682: mov dword ptr [esp + edx*4 + 0x70], ecx */
  W32((uint32_t)(esp + edx*4 + 0x70u), ecx);
/* ff7686: mov dword ptr [esp + edx*4 + 0x174], edi */
  W32((uint32_t)(esp + edx*4 + 0x174u), edi);
/* ff768d: mov dword ptr [esp + ebp*4 + 0x70], eax */
  W32((uint32_t)(esp + ebp*4 + 0x70u), eax);
/* ff7691: jne 0xff769e */
  if (!zf) goto L_ff769e;
L_ff7693: /* ff7693: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7695: jl 0xff769e */
  if ((sf != of)) goto L_ff769e;
L_ff7697: /* ff7697: mov dword ptr [esp + 0x178], eax */
  W32((uint32_t)(esp + 0x178u), eax);
L_ff769e: /* ff769e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76a0: jge 0xff76b5 */
  if ((sf == of)) goto L_ff76b5;
L_ff76a2: /* ff76a2: mov esi, dword ptr [esp + ebx*4 + 0x70] */
  esi = R32((uint32_t)(esp + ebx*4 + 0x70u));
/* ff76a6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76a8: jge 0xff76b5 */
  if ((sf == of)) goto L_ff76b5;
L_ff76aa: /* ff76aa: mov dword ptr [esp + ebx*4 + 0x298], 0 */
  W32((uint32_t)(esp + ebx*4 + 0x298u), 0x0u);
L_ff76b5: /* ff76b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76b7: jge 0xff76cf */
  if ((sf == of)) goto L_ff76cf;
L_ff76b9: /* ff76b9: mov eax, dword ptr [esp + ebp*4 + 0x174] */
  eax = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff76c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76c2: jge 0xff76cf */
  if ((sf == of)) goto L_ff76cf;
L_ff76c4: /* ff76c4: mov dword ptr [esp + ebp*4 + 0x298], 0 */
  W32((uint32_t)(esp + ebp*4 + 0x298u), 0x0u);
L_ff76cf: /* ff76cf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76d1: jge 0xff76df */
  if ((sf == of)) goto L_ff76df;
L_ff76d3: /* ff76d3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76d5: jl 0xff7730 */
  if ((sf != of)) goto L_ff7730;
L_ff76d7: /* ff76d7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff76db: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_ff76df: /* ff76df: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff76e3: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* ff76e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76e8: jl 0xff7703 */
  if ((sf != of)) goto L_ff7703;
L_ff76ea: /* ff76ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff76f0: /* ff76f0: cmp dword ptr [esp + ecx*4 + 0x39c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x39cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff76f7: jne 0xff7703 */
  if (!zf) goto L_ff7703;
L_ff76f9: /* ff76f9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* ff76fa: mov dword ptr [esp + ecx*4 + 0x3a0], edx */
  W32((uint32_t)(esp + ecx*4 + 0x3a0u), edx);
/* ff7701: jns 0xff76f0 */
  if (!sf) goto L_ff76f0;
L_ff7703: /* ff7703: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff7707: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7708: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff770a: jge 0xff7725 */
  if ((sf == of)) goto L_ff7725;
L_ff770c: /* ff770c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7710: /* ff7710: cmp dword ptr [esp + eax*4 + 0x4a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x4a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7717: jne 0xff7725 */
  if (!zf) goto L_ff7725;
L_ff7719: /* ff7719: mov dword ptr [esp + eax*4 + 0x4a0], edx */
  W32((uint32_t)(esp + eax*4 + 0x4a0u), edx);
/* ff7720: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7721: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7723: jl 0xff7710 */
  if ((sf != of)) goto L_ff7710;
L_ff7725: /* ff7725: mov dword ptr [esp + edx*4 + 0x298], 1 */
  W32((uint32_t)(esp + edx*4 + 0x298u), 0x1u);
L_ff7730: /* ff7730: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7734: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff7738: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff773c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff773d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7740: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7742: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7746: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff774a: jl 0xff74a0 */
  if ((sf != of)) goto L_ff74a0;
L_ff7750: /* ff7750: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff7754: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* ff775a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff775b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff775e: ja 0xff78a9 */
  if ((!cf && !zf)) goto L_ff78a9;
L_ff7764: /* ff7764: jmp dword ptr [eax*4 + 0xff7e80] */
  switch (R32((uint32_t)(eax*4 + 0xff7e80u))) {
    case 0xff776bu: goto L_ff776b;
    case 0xff77bcu: goto L_ff77bc;
    case 0xff780cu: goto L_ff780c;
    case 0xff7866u: goto L_ff7866;
    default: guest_badjump(0xff7764, R32((uint32_t)(eax*4 + 0xff7e80u))); return;
  }
L_ff776b: /* ff776b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff776f: xor ecx, ecx */
  ecx = 0;
/* ff7771: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7773: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff7779: /* ff7779: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7780: /* ff7780: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff7787: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7789: je 0xff77b2 */
  if (zf) goto L_ff77b2;
L_ff778b: /* ff778b: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff778f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7791: jge 0xff779c */
  if ((sf == of)) goto L_ff779c;
L_ff7793: /* ff7793: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff779a: jmp 0xff77ab */
  goto L_ff77ab;
L_ff779c: /* ff779c: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77a3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77a5: jl 0xff77ab */
  if ((sf != of)) goto L_ff77ab;
L_ff77a7: /* ff77a7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff77a9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff77ab: /* ff77ab: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff77ae: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff77b2: /* ff77b2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff77b3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff77b5: jl 0xff7780 */
  if ((sf != of)) goto L_ff7780;
L_ff77b7: /* ff77b7: jmp 0xff78ad */
  goto L_ff78ad;
L_ff77bc: /* ff77bc: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff77c0: xor ecx, ecx */
  ecx = 0;
/* ff77c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77c4: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff77ca: /* ff77ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff77d0: /* ff77d0: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff77d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff77d9: je 0xff7802 */
  if (zf) goto L_ff7802;
L_ff77db: /* ff77db: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff77df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77e1: jge 0xff77ec */
  if ((sf == of)) goto L_ff77ec;
L_ff77e3: /* ff77e3: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77ea: jmp 0xff77fb */
  goto L_ff77fb;
L_ff77ec: /* ff77ec: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77f5: jl 0xff77fb */
  if ((sf != of)) goto L_ff77fb;
L_ff77f7: /* ff77f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff77f9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff77fb: /* ff77fb: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff77fe: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff7802: /* ff7802: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7803: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7805: jl 0xff77d0 */
  if ((sf != of)) goto L_ff77d0;
L_ff7807: /* ff7807: jmp 0xff78ad */
  goto L_ff78ad;
L_ff780c: /* ff780c: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff7810: xor esi, esi */
  esi = 0;
/* ff7812: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7814: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff781a: /* ff781a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff7820: /* ff7820: mov eax, dword ptr [esp + esi*4 + 0x298] */
  eax = R32((uint32_t)(esp + esi*4 + 0x298u));
/* ff7827: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7829: je 0xff785f */
  if (zf) goto L_ff785f;
L_ff782b: /* ff782b: mov ecx, dword ptr [esp + esi*4 + 0x70] */
  ecx = R32((uint32_t)(esp + esi*4 + 0x70u));
/* ff782f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7831: jge 0xff783c */
  if ((sf == of)) goto L_ff783c;
L_ff7833: /* ff7833: mov ecx, dword ptr [esp + esi*4 + 0x174] */
  ecx = R32((uint32_t)(esp + esi*4 + 0x174u));
/* ff783a: jmp 0xff784b */
  goto L_ff784b;
L_ff783c: /* ff783c: mov eax, dword ptr [esp + esi*4 + 0x174] */
  eax = R32((uint32_t)(esp + esi*4 + 0x174u));
/* ff7843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7845: jl 0xff784b */
  if ((sf != of)) goto L_ff784b;
L_ff7847: /* ff7847: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7849: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_ff784b: /* ff784b: mov eax, 0x2aaaaaab */
  eax = 0x2aaaaaabu;
/* ff7850: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* ff7852: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff7854: mov eax, edx */
  eax = edx;
/* ff7856: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7859: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff785b: mov dword ptr [esp + esi*4 + 0x70], edx */
  W32((uint32_t)(esp + esi*4 + 0x70u), edx);
L_ff785f: /* ff785f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff7860: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7862: jl 0xff7820 */
  if ((sf != of)) goto L_ff7820;
L_ff7864: /* ff7864: jmp 0xff78ad */
  goto L_ff78ad;
L_ff7866: /* ff7866: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff786a: xor ecx, ecx */
  ecx = 0;
/* ff786c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff786e: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff7870: /* ff7870: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff7877: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7879: je 0xff78a2 */
  if (zf) goto L_ff78a2;
L_ff787b: /* ff787b: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff787f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7881: jge 0xff788c */
  if ((sf == of)) goto L_ff788c;
L_ff7883: /* ff7883: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff788a: jmp 0xff789b */
  goto L_ff789b;
L_ff788c: /* ff788c: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff7893: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7895: jl 0xff789b */
  if ((sf != of)) goto L_ff789b;
L_ff7897: /* ff7897: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7899: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff789b: /* ff789b: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff789e: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff78a2: /* ff78a2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff78a3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff78a5: jl 0xff7870 */
  if ((sf != of)) goto L_ff7870;
L_ff78a7: /* ff78a7: jmp 0xff78ad */
  goto L_ff78ad;
L_ff78a9: /* ff78a9: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_ff78ad: /* ff78ad: mov ebx, 2 */
  ebx = 0x2u;
/* ff78b2: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff78b4: jle 0xff7a4c */
  if ((zf || sf != of)) goto L_ff7a4c;
L_ff78ba: /* ff78ba: mov ecx, dword ptr [esp + 0x12b0] */
  ecx = R32((uint32_t)(esp + 0x12b0u));
/* ff78c1: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff78c5: add ecx, 0x408 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff78cb: add edx, 0x34c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff78d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff78d5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_ff78d9: /* ff78d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ff78db: mov esi, dword ptr [esp + eax*4 + 0x70] */
  esi = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff78df: mov ecx, dword ptr [ecx - 0xfc] */
  ecx = R32((uint32_t)(ecx + 0xffffff04u));
/* ff78e5: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff78e9: mov edi, dword ptr [ebp + eax*4 + 0x344] */
  edi = R32((uint32_t)(ebp + eax*4 + 0x344u));
/* ff78f0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff78f4: mov ecx, dword ptr [esp + ecx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff78f8: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* ff78fe: and ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff7904: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7906: mov eax, ecx */
  eax = ecx;
/* ff7908: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7909: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff790b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff790d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff7911: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff7913: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff7915: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* ff7918: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff791c: mov ebp, dword ptr [ebp + edx*4 + 0x344] */
  ebp = R32((uint32_t)(ebp + edx*4 + 0x344u));
/* ff7923: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ff7925: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7926: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0xff7926);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff7928: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff792a: jge 0xff7930 */
  if ((sf == of)) goto L_ff7930;
L_ff792c: /* ff792c: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff792e: jmp 0xff7932 */
  goto L_ff7932;
L_ff7930: /* ff7930: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_ff7932: /* ff7932: mov eax, dword ptr [esp + ebx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x298u));
/* ff7939: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff793b: je 0xff79df */
  if (zf) goto L_ff79df;
L_ff7941: /* ff7941: mov eax, dword ptr [esp + 0x12b0] */
  eax = R32((uint32_t)(esp + 0x12b0u));
/* ff7948: mov ecx, dword ptr [eax + 0x50c] */
  ecx = R32((uint32_t)(eax + 0x50cu));
/* ff794e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7950: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7952: jl 0xff7956 */
  if ((sf != of)) goto L_ff7956;
L_ff7954: /* ff7954: mov ecx, esi */
  ecx = esi;
L_ff7956: /* ff7956: mov eax, dword ptr [esp + ebx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x70u));
/* ff795a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ff795c: jns 0xff7978 */
  if (!sf) goto L_ff7978;
L_ff795e: /* ff795e: mov edx, ecx */
  edx = ecx;
/* ff7960: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* ff7962: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7964: jge 0xff796d */
  if ((sf == of)) goto L_ff796d;
L_ff7966: /* ff7966: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7968: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff7969: mov eax, ecx */
  eax = ecx;
/* ff796b: jmp 0xff7982 */
  goto L_ff7982;
L_ff796d: /* ff796d: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff796f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ff7972: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7974: mov eax, ecx */
  eax = ecx;
/* ff7976: jmp 0xff7982 */
  goto L_ff7982;
L_ff7978: /* ff7978: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff797a: jl 0xff7980 */
  if ((sf != of)) goto L_ff7980;
L_ff797c: /* ff797c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff797e: jmp 0xff7982 */
  goto L_ff7982;
L_ff7980: /* ff7980: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_ff7982: /* ff7982: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff7986: mov edx, dword ptr [ecx - 0x1f8] */
  edx = R32((uint32_t)(ecx + 0xfffffe08u));
/* ff798c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff7990: mov dword ptr [esp + ebx*4 + 0x174], eax */
  W32((uint32_t)(esp + ebx*4 + 0x174u), eax);
/* ff7997: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* ff799a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff799c: jge 0xff79bc */
  if ((sf == of)) goto L_ff79bc;
L_ff799e: /* ff799e: mov edi, edi */
  edi = edi;
L_ff79a0: /* ff79a0: cmp dword ptr [esp + eax*4 + 0x4a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x4a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff79a7: jne 0xff79bc */
  if (!zf) goto L_ff79bc;
L_ff79a9: /* ff79a9: mov edi, dword ptr [esp + edx*4 + 0x4a0] */
  edi = R32((uint32_t)(esp + edx*4 + 0x4a0u));
/* ff79b0: mov dword ptr [esp + eax*4 + 0x4a0], edi */
  W32((uint32_t)(esp + eax*4 + 0x4a0u), edi);
/* ff79b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff79b8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff79ba: jl 0xff79a0 */
  if ((sf != of)) goto L_ff79a0;
L_ff79bc: /* ff79bc: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* ff79bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff79c1: jl 0xff79f6 */
  if ((sf != of)) goto L_ff79f6;
L_ff79c3: /* ff79c3: cmp dword ptr [esp + eax*4 + 0x39c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x39cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff79ca: jne 0xff79f6 */
  if (!zf) goto L_ff79f6;
L_ff79cc: /* ff79cc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ff79cd: mov edi, dword ptr [esp + edx*4 + 0x39c] */
  edi = R32((uint32_t)(esp + edx*4 + 0x39cu));
/* ff79d4: mov dword ptr [esp + eax*4 + 0x3a0], edi */
  W32((uint32_t)(esp + eax*4 + 0x3a0u), edi);
/* ff79db: jns 0xff79c3 */
  if (!sf) goto L_ff79c3;
L_ff79dd: /* ff79dd: jmp 0xff79f6 */
  goto L_ff79f6;
L_ff79df: /* ff79df: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff79e3: mov dword ptr [esp + ebx*4 + 0x70], esi */
  W32((uint32_t)(esp + ebx*4 + 0x70u), esi);
/* ff79e7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff79eb: mov dword ptr [esp + ebx*4 + 0x174], 0 */
  W32((uint32_t)(esp + ebx*4 + 0x174u), 0x0u);
L_ff79f6: /* ff79f6: mov eax, dword ptr [esp + ebx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x174u));
/* ff79fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff79ff: jne 0xff7a0b */
  if (!zf) goto L_ff7a0b;
L_ff7a01: /* ff7a01: or dword ptr [esp + ebx*4 + 0x70], 0x8000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ebx*4 + 0x70u))); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + ebx*4 + 0x70u), r);
  }
/* ff7a09: jmp 0xff7a31 */
  goto L_ff7a31;
L_ff7a0b: /* ff7a0b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ff7a0d: mov edi, dword ptr [esp + eax*4 + 0x70] */
  edi = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff7a11: lea eax, [esp + eax*4 + 0x70] */
  eax = (uint32_t)(esp + eax*4 + 0x70u);
/* ff7a15: and edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ff7a1b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ff7a1d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7a21: mov edx, dword ptr [esp + eax*4 + 0x70] */
  edx = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff7a25: lea eax, [esp + eax*4 + 0x70] */
  eax = (uint32_t)(esp + eax*4 + 0x70u);
/* ff7a29: and edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff7a2f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_ff7a31: /* ff7a31: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff7a35: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff7a36: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7a39: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7a3c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7a3e: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7a42: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff7a46: jl 0xff78d9 */
  if ((sf != of)) goto L_ff78d9;
L_ff7a4c: /* ff7a4c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7a50: xor edi, edi */
  edi = 0;
/* ff7a52: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a54: je 0xff7ce9 */
  if (zf) goto L_ff7ce9;
L_ff7a5a: /* ff7a5a: mov ebx, dword ptr [esp + 0x12ac] */
  ebx = R32((uint32_t)(esp + 0x12acu));
/* ff7a61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7a63: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff7a66: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7a68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7a69: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* ff7a6d: call 0x100913c */
  esp -= 4; W32(esp, 0xff7a72u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7a72: mov esi, dword ptr [esp + 0x12bc] */
  esi = R32((uint32_t)(esp + 0x12bcu));
/* ff7a79: mov eax, dword ptr [esi + 0x51c] */
  eax = R32((uint32_t)(esi + 0x51cu));
/* ff7a7f: mov edx, dword ptr [esi + 0x50c] */
  edx = R32((uint32_t)(esi + 0x50cu));
/* ff7a85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7a88: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7a89: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff7a8a: mov dword ptr [esi + 0x51c], eax */
  W32((uint32_t)(esi + 0x51cu), eax);
/* ff7a90: mov eax, edx */
  eax = edx;
/* ff7a92: xor ecx, ecx */
  ecx = 0;
/* ff7a94: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a96: je 0xff7a9f */
  if (zf) goto L_ff7a9f;
L_ff7a98: /* ff7a98: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7a9a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7a9b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a9d: jne 0xff7a98 */
  if (!zf) goto L_ff7a98;
L_ff7a9f: /* ff7a9f: mov ebp, dword ptr [esi + 0x518] */
  ebp = R32((uint32_t)(esi + 0x518u));
/* ff7aa5: lea eax, [ecx + ecx] */
  eax = (uint32_t)(ecx + ecx);
/* ff7aa8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff7aaa: mov eax, edx */
  eax = edx;
/* ff7aac: xor ecx, ecx */
  ecx = 0;
/* ff7aae: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7ab0: mov dword ptr [esi + 0x518], ebp */
  W32((uint32_t)(esi + 0x518u), ebp);
/* ff7ab6: je 0xff7abf */
  if (zf) goto L_ff7abf;
L_ff7ab8: /* ff7ab8: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7aba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7abb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7abd: jne 0xff7ab8 */
  if (!zf) goto L_ff7ab8;
L_ff7abf: /* ff7abf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7ac0: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* ff7ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7ac5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7ac6: call 0x100913c */
  esp -= 4; W32(esp, 0xff7acbu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7acb: mov eax, dword ptr [esi + 0x50c] */
  eax = R32((uint32_t)(esi + 0x50cu));
/* ff7ad1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7ad4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7ad5: mov ecx, edi */
  ecx = edi;
/* ff7ad7: je 0xff7ae7 */
  if (zf) goto L_ff7ae7;
L_ff7ad9: /* ff7ad9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7ae0: /* ff7ae0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7ae2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7ae3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7ae5: jne 0xff7ae0 */
  if (!zf) goto L_ff7ae0;
L_ff7ae7: /* ff7ae7: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* ff7aeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7aec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7aed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7aee: call 0x100913c */
  esp -= 4; W32(esp, 0xff7af3u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7af3: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* ff7af7: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff7afa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7afd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7aff: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* ff7b03: mov dword ptr [esp + 0x1c], 2 */
  W32((uint32_t)(esp + 0x1cu), 0x2u);
/* ff7b0b: jle 0xff7ce9 */
  if ((zf || sf != of)) goto L_ff7ce9;
L_ff7b11: /* ff7b11: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* ff7b14: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff7b18: jmp 0xff7b20 */
  goto L_ff7b20;
L_ff7b1a: /* ff7b1a: xor edi, edi */
  edi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ff7b1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7b20: /* ff7b20: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff7b24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff7b26: mov ebx, dword ptr [ebp + edx*4 + 0xc0] */
  ebx = R32((uint32_t)(ebp + edx*4 + 0xc0u));
/* ff7b2d: mov eax, dword ptr [ebp + edx*4 + 0x80] */
  eax = R32((uint32_t)(ebp + edx*4 + 0x80u));
/* ff7b34: mov ecx, ebx */
  ecx = ebx;
/* ff7b36: mov esi, 1 */
  esi = 0x1u;
/* ff7b3b: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* ff7b3d: xor ecx, ecx */
  ecx = 0;
/* ff7b3f: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7b41: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff7b45: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff7b49: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* ff7b4d: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* ff7b51: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* ff7b55: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* ff7b59: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* ff7b5d: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* ff7b61: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* ff7b65: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* ff7b69: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7b6d: je 0xff7c4c */
  if (zf) goto L_ff7c4c;
L_ff7b73: /* ff7b73: xor eax, eax */
  eax = 0;
/* ff7b75: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7b77: jle 0xff7bb1 */
  if ((zf || sf != of)) goto L_ff7bb1;
L_ff7b79: /* ff7b79: add edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7b7c: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff7b7f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7b81: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
L_ff7b85: /* ff7b85: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* ff7b87: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7b89: jge 0xff7b98 */
  if ((sf == of)) goto L_ff7b98;
L_ff7b8b: /* ff7b8b: mov dword ptr [esp + eax*4 + 0x278], 1 */
  W32((uint32_t)(esp + eax*4 + 0x278u), 0x1u);
/* ff7b96: jmp 0xff7ba9 */
  goto L_ff7ba9;
L_ff7b98: /* ff7b98: mov edi, dword ptr [ebp + edi*4 + 0x924] */
  edi = R32((uint32_t)(ebp + edi*4 + 0x924u));
/* ff7b9f: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* ff7ba2: mov dword ptr [esp + eax*4 + 0x278], edi */
  W32((uint32_t)(esp + eax*4 + 0x278u), edi);
L_ff7ba9: /* ff7ba9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7baa: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7bad: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7baf: jl 0xff7b85 */
  if ((sf != of)) goto L_ff7b85;
L_ff7bb1: /* ff7bb1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff7bb5: xor eax, eax */
  eax = 0;
/* ff7bb7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7bb9: jle 0xff7c02 */
  if ((zf || sf != of)) goto L_ff7c02;
L_ff7bbb: /* ff7bbb: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ff7bbf: lea ebp, [esp + ebp*4 + 0x174] */
  ebp = (uint32_t)(esp + ebp*4 + 0x174u);
L_ff7bc6: /* ff7bc6: xor edx, edx */
  edx = 0;
/* ff7bc8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff7bca: jle 0xff7be4 */
  if ((zf || sf != of)) goto L_ff7be4;
L_ff7bcc: /* ff7bcc: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* ff7bcf: nop  */
L_ff7bd0: /* ff7bd0: cmp edi, dword ptr [esp + edx*4 + 0x278] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edx*4 + 0x278u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bd7: jl 0xff7be0 */
  if ((sf != of)) goto L_ff7be0;
L_ff7bd9: /* ff7bd9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff7bda: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bdc: jl 0xff7bd0 */
  if ((sf != of)) goto L_ff7bd0;
L_ff7bde: /* ff7bde: jmp 0xff7be4 */
  goto L_ff7be4;
L_ff7be0: /* ff7be0: mov dword ptr [esp + eax*4 + 0x50], edx */
  W32((uint32_t)(esp + eax*4 + 0x50u), edx);
L_ff7be4: /* ff7be4: mov edx, dword ptr [esp + eax*4 + 0x50] */
  edx = R32((uint32_t)(esp + eax*4 + 0x50u));
/* ff7be8: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff7bec: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff7bee: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7bf0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff7bf3: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff7bf5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff7bf9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7bfa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bfc: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7c00: jl 0xff7bc6 */
  if ((sf != of)) goto L_ff7bc6;
L_ff7c02: /* ff7c02: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff7c06: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff7c0a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff7c0e: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* ff7c12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7c13: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff7c17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c18: mov ecx, dword ptr [edx + eax*4 + 0x100] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x100u));
/* ff7c1f: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* ff7c22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7c24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c25: call 0xff4000 */
  esp -= 4; W32(esp, 0xff7c2au); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff7c2a: mov ecx, dword ptr [esp + 0x12bc] */
  ecx = R32((uint32_t)(esp + 0x12bcu));
/* ff7c31: mov edx, dword ptr [ecx + 0x514] */
  edx = R32((uint32_t)(ecx + 0x514u));
/* ff7c37: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* ff7c3b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7c3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7c40: mov dword ptr [ecx + 0x514], edx */
  W32((uint32_t)(ecx + 0x514u), edx);
/* ff7c46: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff7c4a: xor edi, edi */
  edi = 0;
L_ff7c4c: /* ff7c4c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7c50: xor esi, esi */
  esi = 0;
/* ff7c52: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7c54: jle 0xff7cbc */
  if ((zf || sf != of)) goto L_ff7cbc;
L_ff7c56: /* ff7c56: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff7c5a: mov ebx, dword ptr [esp + 0x12b0] */
  ebx = R32((uint32_t)(esp + 0x12b0u));
/* ff7c61: lea edx, [edx*8 + 0x50] */
  edx = (uint32_t)(edx*8 + 0x50u);
/* ff7c68: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* ff7c6c: lea edi, [esp + edi*4 + 0x174] */
  edi = (uint32_t)(esp + edi*4 + 0x174u);
L_ff7c73: /* ff7c73: mov eax, dword ptr [esp + esi*4 + 0x50] */
  eax = R32((uint32_t)(esp + esi*4 + 0x50u));
/* ff7c77: add eax, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7c7b: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* ff7c7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7c81: jl 0xff7cb0 */
  if ((sf != of)) goto L_ff7cb0;
L_ff7c83: /* ff7c83: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff7c87: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* ff7c8a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff7c8c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7c8e: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7c91: jge 0xff7cb0 */
  if ((sf == of)) goto L_ff7cb0;
L_ff7c93: /* ff7c93: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff7c97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7c98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7c9a: call 0xff4000 */
  esp -= 4; W32(esp, 0xff7c9fu); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff7c9f: mov ecx, dword ptr [ebx + 0x518] */
  ecx = R32((uint32_t)(ebx + 0x518u));
/* ff7ca5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7ca8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7caa: mov dword ptr [ebx + 0x518], ecx */
  W32((uint32_t)(ebx + 0x518u), ecx);
L_ff7cb0: /* ff7cb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7cb4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff7cb5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7cb8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7cba: jl 0xff7c73 */
  if ((sf != of)) goto L_ff7c73;
L_ff7cbc: /* ff7cbc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7cc0: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff7cc4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff7cc8: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff7ccb: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7ccd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7cd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7cd2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7cd5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7cd7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* ff7cdb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7cdf: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7ce3: jl 0xff7b1a */
  if ((sf != of)) goto L_ff7b1a;
L_ff7ce9: /* ff7ce9: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff7ced: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* ff7cf3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff7cf7: imul ecx, dword ptr [esp + 0x70] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x70u)));
  ecx = (uint32_t)r;
  }
/* ff7cfc: mov ebp, dword ptr [esp + 0x12c4] */
  ebp = R32((uint32_t)(esp + 0x12c4u));
/* ff7d03: xor ebx, ebx */
  ebx = 0;
/* ff7d05: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d08: jle 0xff7d6d */
  if ((zf || sf != of)) goto L_ff7d6d;
L_ff7d0a: /* ff7d0a: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff7d11: add edx, 0x108 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7d17: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff7d18: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7d1c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_ff7d20: /* ff7d20: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7d24: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ff7d26: mov eax, dword ptr [esp + edx*4 + 0x70] */
  eax = R32((uint32_t)(esp + edx*4 + 0x70u));
/* ff7d2a: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* ff7d2c: js 0xff7d57 */
  if (sf) goto L_ff7d57;
L_ff7d2e: /* ff7d2e: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* ff7d32: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff7d37: imul eax, dword ptr [edi + 0x340] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x340u)));
  eax = (uint32_t)r;
  }
/* ff7d3e: mov edi, dword ptr [edi + edx*4 + 0x344] */
  edi = R32((uint32_t)(edi + edx*4 + 0x344u));
/* ff7d45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff7d46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7d47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff7d48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7d49: mov esi, eax */
  esi = eax;
/* ff7d4b: call 0xff6600 */
  esp -= 4; W32(esp, 0xff7d50u); SPILL(); f_ff6600(); if (g_unwind) return; RELOAD();
/* ff7d50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7d53: mov ebx, edi */
  ebx = edi;
/* ff7d55: mov ecx, esi */
  ecx = esi;
L_ff7d57: /* ff7d57: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff7d5b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7d5f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7d62: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7d63: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7d67: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff7d6b: jne 0xff7d20 */
  if (!zf) goto L_ff7d20;
L_ff7d6d: /* ff7d6d: mov edi, dword ptr [esp + 0x12ac] */
  edi = R32((uint32_t)(esp + 0x12acu));
/* ff7d74: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7d77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7d78: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7d7a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7d7c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d7e: jge 0xff7d95 */
  if ((sf == of)) goto L_ff7d95;
L_ff7d80: /* ff7d80: mov ecx, dword ptr [ebp + ebx*4 - 4] */
  ecx = R32((uint32_t)(ebp + ebx*4 + 0xfffffffcu));
/* ff7d84: mov dword ptr [ebp + ebx*4], ecx */
  W32((uint32_t)(ebp + ebx*4), ecx);
/* ff7d88: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7d8b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7d8c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7d8e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff7d8f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7d91: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d93: jl 0xff7d80 */
  if ((sf != of)) goto L_ff7d80;
L_ff7d95: /* ff7d95: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* ff7d99: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7d9b: jle 0xff7de3 */
  if ((zf || sf != of)) goto L_ff7de3;
L_ff7d9d: /* ff7d9d: mov ecx, dword ptr [esp + 0x12bc] */
  ecx = R32((uint32_t)(esp + 0x12bcu));
/* ff7da4: mov edx, dword ptr [esp + 0x12b8] */
  edx = R32((uint32_t)(esp + 0x12b8u));
/* ff7dab: mov esi, dword ptr [esp + 0x12b4] */
  esi = R32((uint32_t)(esp + 0x12b4u));
/* ff7db2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff7db4: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff7db6: mov ebx, ebp */
  ebx = ebp;
/* ff7db8: jmp 0xff7dc0 */
  goto L_ff7dc0;
L_ff7dc0: /* ff7dc0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff7dc4: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* ff7dc7: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff7dcd: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ff7dcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7dd1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff7dd4: jp 0xff7ddd */
  if (pf) goto L_ff7ddd;
L_ff7dd6: /* ff7dd6: mov dword ptr [esi + ecx], 0 */
  W32((uint32_t)(esi + ecx), 0x0u);
L_ff7ddd: /* ff7ddd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7de0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* ff7de1: jne 0xff7dc0 */
  if (!zf) goto L_ff7dc0;
L_ff7de3: /* ff7de3: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7de6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7de7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7de9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7deb: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7ded: mov ecx, ebp */
  ecx = ebp;
/* ff7def: jge 0xff7e64 */
  if ((sf == of)) goto L_ff7e64;
L_ff7df1: /* ff7df1: mov edx, dword ptr [esp + 0x12b4] */
  edx = R32((uint32_t)(esp + 0x12b4u));
/* ff7df8: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* ff7dff: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7e02: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7e03: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7e05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7e06: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7e08: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7e0a: jl 0xff7df1 */
  if ((sf != of)) goto L_ff7df1;
L_ff7e0c: /* ff7e0c: jmp 0xff7e64 */
  goto L_ff7e64;
L_ff7e0e: /* ff7e0e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7e14: je 0xff7e2d */
  if (zf) goto L_ff7e2d;
L_ff7e16: /* ff7e16: mov eax, dword ptr [esp + 0x12ac] */
  eax = R32((uint32_t)(esp + 0x12acu));
/* ff7e1d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7e1f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7e22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff7e24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7e25: call 0x100913c */
  esp -= 4; W32(esp, 0xff7e2au); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7e2a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff7e2d: /* ff7e2d: mov edi, dword ptr [esp + 0x12c4] */
  edi = R32((uint32_t)(esp + 0x12c4u));
/* ff7e34: lea edx, [ebx*4] */
  edx = (uint32_t)(ebx*4);
/* ff7e3b: mov ecx, edx */
  ecx = edx;
/* ff7e3d: mov esi, ecx */
  esi = ecx;
/* ff7e3f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff7e42: xor eax, eax */
  eax = 0;
/* ff7e44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff7e46: mov ecx, esi */
  ecx = esi;
/* ff7e48: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff7e4b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff7e4d: mov edi, dword ptr [esp + 0x12b4] */
  edi = R32((uint32_t)(esp + 0x12b4u));
/* ff7e54: mov ecx, edx */
  ecx = edx;
/* ff7e56: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff7e59: xor eax, eax */
  eax = 0;
/* ff7e5b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff7e5d: mov ecx, edx */
  ecx = edx;
/* ff7e5f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff7e62: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_ff7e64: /* ff7e64: mov eax, dword ptr [0x100d1d8] */
  eax = R32((uint32_t)(0x100d1d8u));
/* ff7e69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff7e6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff7e6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7e6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff7e6d: mov dword ptr [0x100d1d8], eax */
  W32((uint32_t)(0x100d1d8u), eax);
/* ff7e72: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7e76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff7e77: add esp, 0x1298 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1298u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7e7d: ret  */
  esp += 4; SPILL(); return;
}

void f_ff749a(void) {
  LOAD_REGS();
L_ff749a: /* ff749a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff74a0: /* ff74a0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff74a4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ff74a6: mov ecx, dword ptr [esp + eax*4 + 0x4a0] */
  ecx = R32((uint32_t)(esp + eax*4 + 0x4a0u));
/* ff74ad: mov ebp, dword ptr [esp + eax*4 + 0x39c] */
  ebp = R32((uint32_t)(esp + eax*4 + 0x39cu));
/* ff74b4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff74b8: lea eax, [esp + ecx*4 + 0x5a4] */
  eax = (uint32_t)(esp + ecx*4 + 0x5a4u);
/* ff74bf: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff74c3: cmp dword ptr [eax], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff74c5: je 0xff7730 */
  if (zf) goto L_ff7730;
L_ff74cb: /* ff74cb: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff74d2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff74d6: mov edi, dword ptr [edx + ecx*4 + 0x208] */
  edi = R32((uint32_t)(edx + ecx*4 + 0x208u));
/* ff74dd: mov ebx, dword ptr [edx + ebp*4 + 0x208] */
  ebx = R32((uint32_t)(edx + ebp*4 + 0x208u));
/* ff74e4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff74e6: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* ff74e8: mov eax, edi */
  eax = edi;
/* ff74ea: jge 0xff750d */
  if ((sf == of)) goto L_ff750d;
L_ff74ec: /* ff74ec: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* ff74ef: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff74f2: lea edx, [esp + edx + 0x6cc] */
  edx = (uint32_t)(esp + edx + 0x6ccu);
/* ff74f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7500: /* ff7500: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7503: jne 0xff750d */
  if (!zf) goto L_ff750d;
L_ff7505: /* ff7505: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7506: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7509: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff750b: jl 0xff7500 */
  if ((sf != of)) goto L_ff7500;
L_ff750d: /* ff750d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff750f: jne 0xff754b */
  if (!zf) goto L_ff754b;
L_ff7511: /* ff7511: mov esi, dword ptr [esp + ecx*4 + 0x70] */
  esi = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff7515: xor edx, edx */
  edx = 0;
/* ff7517: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7519: mov eax, 0xffffff38 */
  eax = 0xffffff38u;
/* ff751e: mov dword ptr [esp + ecx*4 + 0x174], eax */
  W32((uint32_t)(esp + ecx*4 + 0x174u), eax);
/* ff7525: jge 0xff752e */
  if ((sf == of)) goto L_ff752e;
L_ff7527: /* ff7527: mov dword ptr [esp + ecx*4 + 0x298], edx */
  W32((uint32_t)(esp + ecx*4 + 0x298u), edx);
L_ff752e: /* ff752e: mov dword ptr [esp + ebp*4 + 0x70], eax */
  W32((uint32_t)(esp + ebp*4 + 0x70u), eax);
/* ff7532: cmp dword ptr [esp + ebp*4 + 0x174], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ebp*4 + 0x174u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7539: jge 0xff7730 */
  if ((sf == of)) goto L_ff7730;
L_ff753f: /* ff753f: mov dword ptr [esp + ebp*4 + 0x298], edx */
  W32((uint32_t)(esp + ebp*4 + 0x298u), edx);
/* ff7546: jmp 0xff7730 */
  goto L_ff7730;
L_ff754b: /* ff754b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff754f: mov edx, dword ptr [eax + ecx*4 + 0x344] */
  edx = R32((uint32_t)(eax + ecx*4 + 0x344u));
/* ff7556: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* ff755a: mov edx, dword ptr [eax + ebp*4 + 0x344] */
  edx = R32((uint32_t)(eax + ebp*4 + 0x344u));
/* ff7561: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff7565: mov edx, dword ptr [esp + ecx*4 + 0x70] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff7569: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff756b: jge 0xff7576 */
  if ((sf == of)) goto L_ff7576;
L_ff756d: /* ff756d: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff7574: jmp 0xff7585 */
  goto L_ff7585;
L_ff7576: /* ff7576: mov ecx, dword ptr [esp + ecx*4 + 0x174] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff757d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff757f: jl 0xff7585 */
  if ((sf != of)) goto L_ff7585;
L_ff7581: /* ff7581: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7583: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_ff7585: /* ff7585: mov ecx, dword ptr [esp + ebp*4 + 0x70] */
  ecx = R32((uint32_t)(esp + ebp*4 + 0x70u));
/* ff7589: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff758b: jge 0xff7596 */
  if ((sf == of)) goto L_ff7596;
L_ff758d: /* ff758d: mov ecx, dword ptr [esp + ebp*4 + 0x174] */
  ecx = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff7594: jmp 0xff75a5 */
  goto L_ff75a5;
L_ff7596: /* ff7596: mov esi, dword ptr [esp + ebp*4 + 0x174] */
  esi = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff759d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff759f: jl 0xff75a5 */
  if ((sf != of)) goto L_ff75a5;
L_ff75a1: /* ff75a1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff75a3: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_ff75a5: /* ff75a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75a6: mov eax, dword ptr [esp + 0x12bc] */
  eax = R32((uint32_t)(esp + 0x12bcu));
/* ff75ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75ae: mov eax, dword ptr [esp + 0x12c4] */
  eax = R32((uint32_t)(esp + 0x12c4u));
/* ff75b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75b6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff75ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75bb: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff75bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75c0: call 0xff6f90 */
  esp -= 4; W32(esp, 0xff75c5u); SPILL(); f_ff6f90(); if (g_unwind) return; RELOAD();
/* ff75c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff75c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff75ca: je 0xff7730 */
  if (zf) goto L_ff7730;
L_ff75d0: /* ff75d0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff75d4: mov eax, 0xffffff38 */
  eax = 0xffffff38u;
/* ff75d9: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* ff75dd: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff75e1: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff75e5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff75e9: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* ff75ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff75ee: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* ff75f2: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* ff75f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff75f6: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff75f8: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ff75fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff75fc: lea eax, [esp + esi + 0x6b4] */
  eax = (uint32_t)(esp + esi + 0x6b4u);
/* ff7603: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7604: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7609u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7609: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* ff760d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7611: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* ff7615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7616: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* ff7619: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* ff761d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff761e: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff7620: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ff7623: lea eax, [esp + edi + 0x6c0] */
  eax = (uint32_t)(esp + edi + 0x6c0u);
/* ff762a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff762b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff762c: call 0xff6d60 */
  esp -= 4; W32(esp, 0xff7631u); SPILL(); f_ff6d60(); if (g_unwind) return; RELOAD();
/* ff7631: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* ff7635: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7638: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff763b: jne 0xff7646 */
  if (!zf) goto L_ff7646;
L_ff763d: /* ff763d: mov esi, dword ptr [esp + esi + 0x6d0] */
  esi = R32((uint32_t)(esp + esi + 0x6d0u));
/* ff7644: jmp 0xff764a */
  goto L_ff764a;
L_ff7646: /* ff7646: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
L_ff764a: /* ff764a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff764d: jne 0xff7658 */
  if (!zf) goto L_ff7658;
L_ff764f: /* ff764f: mov edi, dword ptr [esp + edi + 0x6d0] */
  edi = R32((uint32_t)(esp + edi + 0x6d0u));
/* ff7656: jmp 0xff765c */
  goto L_ff765c;
L_ff7658: /* ff7658: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
L_ff765c: /* ff765c: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ff7660: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7662: mov dword ptr [esp + ebx*4 + 0x174], esi */
  W32((uint32_t)(esp + ebx*4 + 0x174u), esi);
/* ff7669: jne 0xff7673 */
  if (!zf) goto L_ff7673;
L_ff766b: /* ff766b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff766d: jl 0xff7673 */
  if ((sf != of)) goto L_ff7673;
L_ff766f: /* ff766f: mov dword ptr [esp + 0x70], esi */
  W32((uint32_t)(esp + 0x70u), esi);
L_ff7673: /* ff7673: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7676: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff767a: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ff767e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7682: mov dword ptr [esp + edx*4 + 0x70], ecx */
  W32((uint32_t)(esp + edx*4 + 0x70u), ecx);
/* ff7686: mov dword ptr [esp + edx*4 + 0x174], edi */
  W32((uint32_t)(esp + edx*4 + 0x174u), edi);
/* ff768d: mov dword ptr [esp + ebp*4 + 0x70], eax */
  W32((uint32_t)(esp + ebp*4 + 0x70u), eax);
/* ff7691: jne 0xff769e */
  if (!zf) goto L_ff769e;
L_ff7693: /* ff7693: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7695: jl 0xff769e */
  if ((sf != of)) goto L_ff769e;
L_ff7697: /* ff7697: mov dword ptr [esp + 0x178], eax */
  W32((uint32_t)(esp + 0x178u), eax);
L_ff769e: /* ff769e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76a0: jge 0xff76b5 */
  if ((sf == of)) goto L_ff76b5;
L_ff76a2: /* ff76a2: mov esi, dword ptr [esp + ebx*4 + 0x70] */
  esi = R32((uint32_t)(esp + ebx*4 + 0x70u));
/* ff76a6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76a8: jge 0xff76b5 */
  if ((sf == of)) goto L_ff76b5;
L_ff76aa: /* ff76aa: mov dword ptr [esp + ebx*4 + 0x298], 0 */
  W32((uint32_t)(esp + ebx*4 + 0x298u), 0x0u);
L_ff76b5: /* ff76b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76b7: jge 0xff76cf */
  if ((sf == of)) goto L_ff76cf;
L_ff76b9: /* ff76b9: mov eax, dword ptr [esp + ebp*4 + 0x174] */
  eax = R32((uint32_t)(esp + ebp*4 + 0x174u));
/* ff76c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76c2: jge 0xff76cf */
  if ((sf == of)) goto L_ff76cf;
L_ff76c4: /* ff76c4: mov dword ptr [esp + ebp*4 + 0x298], 0 */
  W32((uint32_t)(esp + ebp*4 + 0x298u), 0x0u);
L_ff76cf: /* ff76cf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76d1: jge 0xff76df */
  if ((sf == of)) goto L_ff76df;
L_ff76d3: /* ff76d3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76d5: jl 0xff7730 */
  if ((sf != of)) goto L_ff7730;
L_ff76d7: /* ff76d7: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff76db: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_ff76df: /* ff76df: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff76e3: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* ff76e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff76e8: jl 0xff7703 */
  if ((sf != of)) goto L_ff7703;
L_ff76ea: /* ff76ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff76f0: /* ff76f0: cmp dword ptr [esp + ecx*4 + 0x39c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ecx*4 + 0x39cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff76f7: jne 0xff7703 */
  if (!zf) goto L_ff7703;
L_ff76f9: /* ff76f9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* ff76fa: mov dword ptr [esp + ecx*4 + 0x3a0], edx */
  W32((uint32_t)(esp + ecx*4 + 0x3a0u), edx);
/* ff7701: jns 0xff76f0 */
  if (!sf) goto L_ff76f0;
L_ff7703: /* ff7703: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff7707: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7708: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff770a: jge 0xff7725 */
  if ((sf == of)) goto L_ff7725;
L_ff770c: /* ff770c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7710: /* ff7710: cmp dword ptr [esp + eax*4 + 0x4a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x4a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7717: jne 0xff7725 */
  if (!zf) goto L_ff7725;
L_ff7719: /* ff7719: mov dword ptr [esp + eax*4 + 0x4a0], edx */
  W32((uint32_t)(esp + eax*4 + 0x4a0u), edx);
/* ff7720: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7721: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7723: jl 0xff7710 */
  if ((sf != of)) goto L_ff7710;
L_ff7725: /* ff7725: mov dword ptr [esp + edx*4 + 0x298], 1 */
  W32((uint32_t)(esp + edx*4 + 0x298u), 0x1u);
L_ff7730: /* ff7730: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7734: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff7738: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff773c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff773d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7740: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7742: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7746: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* ff774a: jl 0xff74a0 */
  if ((sf != of)) goto L_ff74a0;
L_ff7750: /* ff7750: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff7754: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* ff775a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff775b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff775e: ja 0xff78a9 */
  if ((!cf && !zf)) goto L_ff78a9;
L_ff7764: /* ff7764: jmp dword ptr [eax*4 + 0xff7e80] */
  switch (R32((uint32_t)(eax*4 + 0xff7e80u))) {
    case 0xff776bu: goto L_ff776b;
    case 0xff77bcu: goto L_ff77bc;
    case 0xff780cu: goto L_ff780c;
    case 0xff7866u: goto L_ff7866;
    default: guest_badjump(0xff7764, R32((uint32_t)(eax*4 + 0xff7e80u))); return;
  }
L_ff776b: /* ff776b: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff776f: xor ecx, ecx */
  ecx = 0;
/* ff7771: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7773: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff7779: /* ff7779: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7780: /* ff7780: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff7787: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7789: je 0xff77b2 */
  if (zf) goto L_ff77b2;
L_ff778b: /* ff778b: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff778f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7791: jge 0xff779c */
  if ((sf == of)) goto L_ff779c;
L_ff7793: /* ff7793: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff779a: jmp 0xff77ab */
  goto L_ff77ab;
L_ff779c: /* ff779c: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77a3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77a5: jl 0xff77ab */
  if ((sf != of)) goto L_ff77ab;
L_ff77a7: /* ff77a7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff77a9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff77ab: /* ff77ab: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff77ae: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff77b2: /* ff77b2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff77b3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff77b5: jl 0xff7780 */
  if ((sf != of)) goto L_ff7780;
L_ff77b7: /* ff77b7: jmp 0xff78ad */
  goto L_ff78ad;
L_ff77bc: /* ff77bc: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff77c0: xor ecx, ecx */
  ecx = 0;
/* ff77c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77c4: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff77ca: /* ff77ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff77d0: /* ff77d0: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff77d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff77d9: je 0xff7802 */
  if (zf) goto L_ff7802;
L_ff77db: /* ff77db: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff77df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77e1: jge 0xff77ec */
  if ((sf == of)) goto L_ff77ec;
L_ff77e3: /* ff77e3: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77ea: jmp 0xff77fb */
  goto L_ff77fb;
L_ff77ec: /* ff77ec: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff77f3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff77f5: jl 0xff77fb */
  if ((sf != of)) goto L_ff77fb;
L_ff77f7: /* ff77f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff77f9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff77fb: /* ff77fb: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff77fe: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff7802: /* ff7802: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7803: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7805: jl 0xff77d0 */
  if ((sf != of)) goto L_ff77d0;
L_ff7807: /* ff7807: jmp 0xff78ad */
  goto L_ff78ad;
L_ff780c: /* ff780c: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff7810: xor esi, esi */
  esi = 0;
/* ff7812: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7814: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff781a: /* ff781a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff7820: /* ff7820: mov eax, dword ptr [esp + esi*4 + 0x298] */
  eax = R32((uint32_t)(esp + esi*4 + 0x298u));
/* ff7827: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7829: je 0xff785f */
  if (zf) goto L_ff785f;
L_ff782b: /* ff782b: mov ecx, dword ptr [esp + esi*4 + 0x70] */
  ecx = R32((uint32_t)(esp + esi*4 + 0x70u));
/* ff782f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7831: jge 0xff783c */
  if ((sf == of)) goto L_ff783c;
L_ff7833: /* ff7833: mov ecx, dword ptr [esp + esi*4 + 0x174] */
  ecx = R32((uint32_t)(esp + esi*4 + 0x174u));
/* ff783a: jmp 0xff784b */
  goto L_ff784b;
L_ff783c: /* ff783c: mov eax, dword ptr [esp + esi*4 + 0x174] */
  eax = R32((uint32_t)(esp + esi*4 + 0x174u));
/* ff7843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7845: jl 0xff784b */
  if ((sf != of)) goto L_ff784b;
L_ff7847: /* ff7847: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7849: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_ff784b: /* ff784b: mov eax, 0x2aaaaaab */
  eax = 0x2aaaaaabu;
/* ff7850: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* ff7852: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff7854: mov eax, edx */
  eax = edx;
/* ff7856: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7859: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff785b: mov dword ptr [esp + esi*4 + 0x70], edx */
  W32((uint32_t)(esp + esi*4 + 0x70u), edx);
L_ff785f: /* ff785f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff7860: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7862: jl 0xff7820 */
  if ((sf != of)) goto L_ff7820;
L_ff7864: /* ff7864: jmp 0xff78ad */
  goto L_ff78ad;
L_ff7866: /* ff7866: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff786a: xor ecx, ecx */
  ecx = 0;
/* ff786c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff786e: jle 0xff78ad */
  if ((zf || sf != of)) goto L_ff78ad;
L_ff7870: /* ff7870: mov eax, dword ptr [esp + ecx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x298u));
/* ff7877: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7879: je 0xff78a2 */
  if (zf) goto L_ff78a2;
L_ff787b: /* ff787b: mov eax, dword ptr [esp + ecx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff787f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7881: jge 0xff788c */
  if ((sf == of)) goto L_ff788c;
L_ff7883: /* ff7883: mov eax, dword ptr [esp + ecx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff788a: jmp 0xff789b */
  goto L_ff789b;
L_ff788c: /* ff788c: mov edx, dword ptr [esp + ecx*4 + 0x174] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x174u));
/* ff7893: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7895: jl 0xff789b */
  if ((sf != of)) goto L_ff789b;
L_ff7897: /* ff7897: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7899: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_ff789b: /* ff789b: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff789e: mov dword ptr [esp + ecx*4 + 0x70], eax */
  W32((uint32_t)(esp + ecx*4 + 0x70u), eax);
L_ff78a2: /* ff78a2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff78a3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff78a5: jl 0xff7870 */
  if ((sf != of)) goto L_ff7870;
L_ff78a7: /* ff78a7: jmp 0xff78ad */
  goto L_ff78ad;
L_ff78a9: /* ff78a9: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_ff78ad: /* ff78ad: mov ebx, 2 */
  ebx = 0x2u;
/* ff78b2: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff78b4: jle 0xff7a4c */
  if ((zf || sf != of)) goto L_ff7a4c;
L_ff78ba: /* ff78ba: mov ecx, dword ptr [esp + 0x12b0] */
  ecx = R32((uint32_t)(esp + 0x12b0u));
/* ff78c1: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff78c5: add ecx, 0x408 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff78cb: add edx, 0x34c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff78d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff78d5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_ff78d9: /* ff78d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ff78db: mov esi, dword ptr [esp + eax*4 + 0x70] */
  esi = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff78df: mov ecx, dword ptr [ecx - 0xfc] */
  ecx = R32((uint32_t)(ecx + 0xffffff04u));
/* ff78e5: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff78e9: mov edi, dword ptr [ebp + eax*4 + 0x344] */
  edi = R32((uint32_t)(ebp + eax*4 + 0x344u));
/* ff78f0: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff78f4: mov ecx, dword ptr [esp + ecx*4 + 0x70] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x70u));
/* ff78f8: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* ff78fe: and ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff7904: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7906: mov eax, ecx */
  eax = ecx;
/* ff7908: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7909: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff790b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff790d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff7911: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* ff7913: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff7915: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* ff7918: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff791c: mov ebp, dword ptr [ebp + edx*4 + 0x344] */
  ebp = R32((uint32_t)(ebp + edx*4 + 0x344u));
/* ff7923: sub ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ff7925: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7926: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0xff7926);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff7928: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff792a: jge 0xff7930 */
  if ((sf == of)) goto L_ff7930;
L_ff792c: /* ff792c: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff792e: jmp 0xff7932 */
  goto L_ff7932;
L_ff7930: /* ff7930: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_ff7932: /* ff7932: mov eax, dword ptr [esp + ebx*4 + 0x298] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x298u));
/* ff7939: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff793b: je 0xff79df */
  if (zf) goto L_ff79df;
L_ff7941: /* ff7941: mov eax, dword ptr [esp + 0x12b0] */
  eax = R32((uint32_t)(esp + 0x12b0u));
/* ff7948: mov ecx, dword ptr [eax + 0x50c] */
  ecx = R32((uint32_t)(eax + 0x50cu));
/* ff794e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7950: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7952: jl 0xff7956 */
  if ((sf != of)) goto L_ff7956;
L_ff7954: /* ff7954: mov ecx, esi */
  ecx = esi;
L_ff7956: /* ff7956: mov eax, dword ptr [esp + ebx*4 + 0x70] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x70u));
/* ff795a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ff795c: jns 0xff7978 */
  if (!sf) goto L_ff7978;
L_ff795e: /* ff795e: mov edx, ecx */
  edx = ecx;
/* ff7960: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* ff7962: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7964: jge 0xff796d */
  if ((sf == of)) goto L_ff796d;
L_ff7966: /* ff7966: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7968: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff7969: mov eax, ecx */
  eax = ecx;
/* ff796b: jmp 0xff7982 */
  goto L_ff7982;
L_ff796d: /* ff796d: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff796f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ff7972: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff7974: mov eax, ecx */
  eax = ecx;
/* ff7976: jmp 0xff7982 */
  goto L_ff7982;
L_ff7978: /* ff7978: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff797a: jl 0xff7980 */
  if ((sf != of)) goto L_ff7980;
L_ff797c: /* ff797c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff797e: jmp 0xff7982 */
  goto L_ff7982;
L_ff7980: /* ff7980: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_ff7982: /* ff7982: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff7986: mov edx, dword ptr [ecx - 0x1f8] */
  edx = R32((uint32_t)(ecx + 0xfffffe08u));
/* ff798c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff7990: mov dword ptr [esp + ebx*4 + 0x174], eax */
  W32((uint32_t)(esp + ebx*4 + 0x174u), eax);
/* ff7997: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* ff799a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff799c: jge 0xff79bc */
  if ((sf == of)) goto L_ff79bc;
L_ff799e: /* ff799e: mov edi, edi */
  edi = edi;
L_ff79a0: /* ff79a0: cmp dword ptr [esp + eax*4 + 0x4a0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x4a0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff79a7: jne 0xff79bc */
  if (!zf) goto L_ff79bc;
L_ff79a9: /* ff79a9: mov edi, dword ptr [esp + edx*4 + 0x4a0] */
  edi = R32((uint32_t)(esp + edx*4 + 0x4a0u));
/* ff79b0: mov dword ptr [esp + eax*4 + 0x4a0], edi */
  W32((uint32_t)(esp + eax*4 + 0x4a0u), edi);
/* ff79b7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff79b8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff79ba: jl 0xff79a0 */
  if ((sf != of)) goto L_ff79a0;
L_ff79bc: /* ff79bc: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* ff79bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff79c1: jl 0xff79f6 */
  if ((sf != of)) goto L_ff79f6;
L_ff79c3: /* ff79c3: cmp dword ptr [esp + eax*4 + 0x39c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0x39cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff79ca: jne 0xff79f6 */
  if (!zf) goto L_ff79f6;
L_ff79cc: /* ff79cc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* ff79cd: mov edi, dword ptr [esp + edx*4 + 0x39c] */
  edi = R32((uint32_t)(esp + edx*4 + 0x39cu));
/* ff79d4: mov dword ptr [esp + eax*4 + 0x3a0], edi */
  W32((uint32_t)(esp + eax*4 + 0x3a0u), edi);
/* ff79db: jns 0xff79c3 */
  if (!sf) goto L_ff79c3;
L_ff79dd: /* ff79dd: jmp 0xff79f6 */
  goto L_ff79f6;
L_ff79df: /* ff79df: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff79e3: mov dword ptr [esp + ebx*4 + 0x70], esi */
  W32((uint32_t)(esp + ebx*4 + 0x70u), esi);
/* ff79e7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff79eb: mov dword ptr [esp + ebx*4 + 0x174], 0 */
  W32((uint32_t)(esp + ebx*4 + 0x174u), 0x0u);
L_ff79f6: /* ff79f6: mov eax, dword ptr [esp + ebx*4 + 0x174] */
  eax = R32((uint32_t)(esp + ebx*4 + 0x174u));
/* ff79fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff79ff: jne 0xff7a0b */
  if (!zf) goto L_ff7a0b;
L_ff7a01: /* ff7a01: or dword ptr [esp + ebx*4 + 0x70], 0x8000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + ebx*4 + 0x70u))); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + ebx*4 + 0x70u), r);
  }
/* ff7a09: jmp 0xff7a31 */
  goto L_ff7a31;
L_ff7a0b: /* ff7a0b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ff7a0d: mov edi, dword ptr [esp + eax*4 + 0x70] */
  edi = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff7a11: lea eax, [esp + eax*4 + 0x70] */
  eax = (uint32_t)(esp + eax*4 + 0x70u);
/* ff7a15: and edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ff7a1b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ff7a1d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7a21: mov edx, dword ptr [esp + eax*4 + 0x70] */
  edx = R32((uint32_t)(esp + eax*4 + 0x70u));
/* ff7a25: lea eax, [esp + eax*4 + 0x70] */
  eax = (uint32_t)(esp + eax*4 + 0x70u);
/* ff7a29: and edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff7a2f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_ff7a31: /* ff7a31: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff7a35: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff7a36: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7a39: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7a3c: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7a3e: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7a42: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff7a46: jl 0xff78d9 */
  if ((sf != of)) goto L_ff78d9;
L_ff7a4c: /* ff7a4c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7a50: xor edi, edi */
  edi = 0;
/* ff7a52: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a54: je 0xff7ce9 */
  if (zf) goto L_ff7ce9;
L_ff7a5a: /* ff7a5a: mov ebx, dword ptr [esp + 0x12ac] */
  ebx = R32((uint32_t)(esp + 0x12acu));
/* ff7a61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7a63: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff7a66: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7a68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7a69: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* ff7a6d: call 0x100913c */
  esp -= 4; W32(esp, 0xff7a72u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7a72: mov esi, dword ptr [esp + 0x12bc] */
  esi = R32((uint32_t)(esp + 0x12bcu));
/* ff7a79: mov eax, dword ptr [esi + 0x51c] */
  eax = R32((uint32_t)(esi + 0x51cu));
/* ff7a7f: mov edx, dword ptr [esi + 0x50c] */
  edx = R32((uint32_t)(esi + 0x50cu));
/* ff7a85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7a88: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7a89: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff7a8a: mov dword ptr [esi + 0x51c], eax */
  W32((uint32_t)(esi + 0x51cu), eax);
/* ff7a90: mov eax, edx */
  eax = edx;
/* ff7a92: xor ecx, ecx */
  ecx = 0;
/* ff7a94: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a96: je 0xff7a9f */
  if (zf) goto L_ff7a9f;
L_ff7a98: /* ff7a98: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7a9a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7a9b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7a9d: jne 0xff7a98 */
  if (!zf) goto L_ff7a98;
L_ff7a9f: /* ff7a9f: mov ebp, dword ptr [esi + 0x518] */
  ebp = R32((uint32_t)(esi + 0x518u));
/* ff7aa5: lea eax, [ecx + ecx] */
  eax = (uint32_t)(ecx + ecx);
/* ff7aa8: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff7aaa: mov eax, edx */
  eax = edx;
/* ff7aac: xor ecx, ecx */
  ecx = 0;
/* ff7aae: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7ab0: mov dword ptr [esi + 0x518], ebp */
  W32((uint32_t)(esi + 0x518u), ebp);
/* ff7ab6: je 0xff7abf */
  if (zf) goto L_ff7abf;
L_ff7ab8: /* ff7ab8: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7aba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7abb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7abd: jne 0xff7ab8 */
  if (!zf) goto L_ff7ab8;
L_ff7abf: /* ff7abf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7ac0: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* ff7ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7ac5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7ac6: call 0x100913c */
  esp -= 4; W32(esp, 0xff7acbu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7acb: mov eax, dword ptr [esi + 0x50c] */
  eax = R32((uint32_t)(esi + 0x50cu));
/* ff7ad1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7ad4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7ad5: mov ecx, edi */
  ecx = edi;
/* ff7ad7: je 0xff7ae7 */
  if (zf) goto L_ff7ae7;
L_ff7ad9: /* ff7ad9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7ae0: /* ff7ae0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7ae2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7ae3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7ae5: jne 0xff7ae0 */
  if (!zf) goto L_ff7ae0;
L_ff7ae7: /* ff7ae7: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* ff7aeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7aec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7aed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7aee: call 0x100913c */
  esp -= 4; W32(esp, 0xff7af3u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff7af3: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* ff7af7: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff7afa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7afd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7aff: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* ff7b03: mov dword ptr [esp + 0x1c], 2 */
  W32((uint32_t)(esp + 0x1cu), 0x2u);
/* ff7b0b: jle 0xff7ce9 */
  if ((zf || sf != of)) goto L_ff7ce9;
L_ff7b11: /* ff7b11: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* ff7b14: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff7b18: jmp 0xff7b20 */
  goto L_ff7b20;
L_ff7b1a: /* ff7b1a: xor edi, edi */
  edi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ff7b1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff7b20: /* ff7b20: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff7b24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff7b26: mov ebx, dword ptr [ebp + edx*4 + 0xc0] */
  ebx = R32((uint32_t)(ebp + edx*4 + 0xc0u));
/* ff7b2d: mov eax, dword ptr [ebp + edx*4 + 0x80] */
  eax = R32((uint32_t)(ebp + edx*4 + 0x80u));
/* ff7b34: mov ecx, ebx */
  ecx = ebx;
/* ff7b36: mov esi, 1 */
  esi = 0x1u;
/* ff7b3b: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* ff7b3d: xor ecx, ecx */
  ecx = 0;
/* ff7b3f: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7b41: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff7b45: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff7b49: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* ff7b4d: mov dword ptr [esp + 0x54], edi */
  W32((uint32_t)(esp + 0x54u), edi);
/* ff7b51: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* ff7b55: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* ff7b59: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* ff7b5d: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* ff7b61: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* ff7b65: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* ff7b69: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7b6d: je 0xff7c4c */
  if (zf) goto L_ff7c4c;
L_ff7b73: /* ff7b73: xor eax, eax */
  eax = 0;
/* ff7b75: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7b77: jle 0xff7bb1 */
  if ((zf || sf != of)) goto L_ff7bb1;
L_ff7b79: /* ff7b79: add edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7b7c: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff7b7f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7b81: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
L_ff7b85: /* ff7b85: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* ff7b87: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7b89: jge 0xff7b98 */
  if ((sf == of)) goto L_ff7b98;
L_ff7b8b: /* ff7b8b: mov dword ptr [esp + eax*4 + 0x278], 1 */
  W32((uint32_t)(esp + eax*4 + 0x278u), 0x1u);
/* ff7b96: jmp 0xff7ba9 */
  goto L_ff7ba9;
L_ff7b98: /* ff7b98: mov edi, dword ptr [ebp + edi*4 + 0x924] */
  edi = R32((uint32_t)(ebp + edi*4 + 0x924u));
/* ff7b9f: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* ff7ba2: mov dword ptr [esp + eax*4 + 0x278], edi */
  W32((uint32_t)(esp + eax*4 + 0x278u), edi);
L_ff7ba9: /* ff7ba9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7baa: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7bad: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7baf: jl 0xff7b85 */
  if ((sf != of)) goto L_ff7b85;
L_ff7bb1: /* ff7bb1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff7bb5: xor eax, eax */
  eax = 0;
/* ff7bb7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7bb9: jle 0xff7c02 */
  if ((zf || sf != of)) goto L_ff7c02;
L_ff7bbb: /* ff7bbb: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ff7bbf: lea ebp, [esp + ebp*4 + 0x174] */
  ebp = (uint32_t)(esp + ebp*4 + 0x174u);
L_ff7bc6: /* ff7bc6: xor edx, edx */
  edx = 0;
/* ff7bc8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff7bca: jle 0xff7be4 */
  if ((zf || sf != of)) goto L_ff7be4;
L_ff7bcc: /* ff7bcc: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* ff7bcf: nop  */
L_ff7bd0: /* ff7bd0: cmp edi, dword ptr [esp + edx*4 + 0x278] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + edx*4 + 0x278u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bd7: jl 0xff7be0 */
  if ((sf != of)) goto L_ff7be0;
L_ff7bd9: /* ff7bd9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff7bda: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bdc: jl 0xff7bd0 */
  if ((sf != of)) goto L_ff7bd0;
L_ff7bde: /* ff7bde: jmp 0xff7be4 */
  goto L_ff7be4;
L_ff7be0: /* ff7be0: mov dword ptr [esp + eax*4 + 0x50], edx */
  W32((uint32_t)(esp + eax*4 + 0x50u), edx);
L_ff7be4: /* ff7be4: mov edx, dword ptr [esp + eax*4 + 0x50] */
  edx = R32((uint32_t)(esp + eax*4 + 0x50u));
/* ff7be8: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff7bec: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* ff7bee: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7bf0: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff7bf3: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff7bf5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ff7bf9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7bfa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7bfc: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff7c00: jl 0xff7bc6 */
  if ((sf != of)) goto L_ff7bc6;
L_ff7c02: /* ff7c02: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff7c06: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff7c0a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff7c0e: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* ff7c12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7c13: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff7c17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c18: mov ecx, dword ptr [edx + eax*4 + 0x100] */
  ecx = R32((uint32_t)(edx + eax*4 + 0x100u));
/* ff7c1f: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* ff7c22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7c24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c25: call 0xff4000 */
  esp -= 4; W32(esp, 0xff7c2au); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff7c2a: mov ecx, dword ptr [esp + 0x12bc] */
  ecx = R32((uint32_t)(esp + 0x12bcu));
/* ff7c31: mov edx, dword ptr [ecx + 0x514] */
  edx = R32((uint32_t)(ecx + 0x514u));
/* ff7c37: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* ff7c3b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7c3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7c40: mov dword ptr [ecx + 0x514], edx */
  W32((uint32_t)(ecx + 0x514u), edx);
/* ff7c46: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff7c4a: xor edi, edi */
  edi = 0;
L_ff7c4c: /* ff7c4c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7c50: xor esi, esi */
  esi = 0;
/* ff7c52: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7c54: jle 0xff7cbc */
  if ((zf || sf != of)) goto L_ff7cbc;
L_ff7c56: /* ff7c56: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff7c5a: mov ebx, dword ptr [esp + 0x12b0] */
  ebx = R32((uint32_t)(esp + 0x12b0u));
/* ff7c61: lea edx, [edx*8 + 0x50] */
  edx = (uint32_t)(edx*8 + 0x50u);
/* ff7c68: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* ff7c6c: lea edi, [esp + edi*4 + 0x174] */
  edi = (uint32_t)(esp + edi*4 + 0x174u);
L_ff7c73: /* ff7c73: mov eax, dword ptr [esp + esi*4 + 0x50] */
  eax = R32((uint32_t)(esp + esi*4 + 0x50u));
/* ff7c77: add eax, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7c7b: mov eax, dword ptr [ebp + eax*4] */
  eax = R32((uint32_t)(ebp + eax*4));
/* ff7c7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7c81: jl 0xff7cb0 */
  if ((sf != of)) goto L_ff7cb0;
L_ff7c83: /* ff7c83: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff7c87: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* ff7c8a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff7c8c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff7c8e: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7c91: jge 0xff7cb0 */
  if ((sf == of)) goto L_ff7cb0;
L_ff7c93: /* ff7c93: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff7c97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff7c98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7c99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff7c9a: call 0xff4000 */
  esp -= 4; W32(esp, 0xff7c9fu); SPILL(); f_ff4000(); if (g_unwind) return; RELOAD();
/* ff7c9f: mov ecx, dword ptr [ebx + 0x518] */
  ecx = R32((uint32_t)(ebx + 0x518u));
/* ff7ca5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7ca8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7caa: mov dword ptr [ebx + 0x518], ecx */
  W32((uint32_t)(ebx + 0x518u), ecx);
L_ff7cb0: /* ff7cb0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7cb4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff7cb5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7cb8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7cba: jl 0xff7c73 */
  if ((sf != of)) goto L_ff7c73;
L_ff7cbc: /* ff7cbc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff7cc0: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff7cc4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff7cc8: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff7ccb: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff7ccd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff7cd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7cd2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7cd5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7cd7: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* ff7cdb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff7cdf: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7ce3: jl 0xff7b1a */
  if ((sf != of)) goto L_ff7b1a;
L_ff7ce9: /* ff7ce9: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff7ced: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* ff7cf3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff7cf7: imul ecx, dword ptr [esp + 0x70] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x70u)));
  ecx = (uint32_t)r;
  }
/* ff7cfc: mov ebp, dword ptr [esp + 0x12c4] */
  ebp = R32((uint32_t)(esp + 0x12c4u));
/* ff7d03: xor ebx, ebx */
  ebx = 0;
/* ff7d05: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d08: jle 0xff7d6d */
  if ((zf || sf != of)) goto L_ff7d6d;
L_ff7d0a: /* ff7d0a: mov edx, dword ptr [esp + 0x12b0] */
  edx = R32((uint32_t)(esp + 0x12b0u));
/* ff7d11: add edx, 0x108 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7d17: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff7d18: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7d1c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_ff7d20: /* ff7d20: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7d24: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* ff7d26: mov eax, dword ptr [esp + edx*4 + 0x70] */
  eax = R32((uint32_t)(esp + edx*4 + 0x70u));
/* ff7d2a: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* ff7d2c: js 0xff7d57 */
  if (sf) goto L_ff7d57;
L_ff7d2e: /* ff7d2e: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* ff7d32: and eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff7d37: imul eax, dword ptr [edi + 0x340] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x340u)));
  eax = (uint32_t)r;
  }
/* ff7d3e: mov edi, dword ptr [edi + edx*4 + 0x344] */
  edi = R32((uint32_t)(edi + edx*4 + 0x344u));
/* ff7d45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff7d46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7d47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff7d48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7d49: mov esi, eax */
  esi = eax;
/* ff7d4b: call 0xff6600 */
  esp -= 4; W32(esp, 0xff7d50u); SPILL(); f_ff6600(); if (g_unwind) return; RELOAD();
/* ff7d50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7d53: mov ebx, edi */
  ebx = edi;
/* ff7d55: mov ecx, esi */
  ecx = esi;
L_ff7d57: /* ff7d57: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff7d5b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff7d5f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff7d62: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7d63: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff7d67: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff7d6b: jne 0xff7d20 */
  if (!zf) goto L_ff7d20;
L_ff7d6d: /* ff7d6d: mov edi, dword ptr [esp + 0x12ac] */
  edi = R32((uint32_t)(esp + 0x12acu));
/* ff7d74: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7d77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7d78: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7d7a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7d7c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d7e: jge 0xff7d95 */
  if ((sf == of)) goto L_ff7d95;
L_ff7d80: /* ff7d80: mov ecx, dword ptr [ebp + ebx*4 - 4] */
  ecx = R32((uint32_t)(ebp + ebx*4 + 0xfffffffcu));
/* ff7d84: mov dword ptr [ebp + ebx*4], ecx */
  W32((uint32_t)(ebp + ebx*4), ecx);
/* ff7d88: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7d8b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7d8c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7d8e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff7d8f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7d91: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7d93: jl 0xff7d80 */
  if ((sf != of)) goto L_ff7d80;
L_ff7d95: /* ff7d95: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* ff7d99: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff7d9b: jle 0xff7de3 */
  if ((zf || sf != of)) goto L_ff7de3;
L_ff7d9d: /* ff7d9d: mov ecx, dword ptr [esp + 0x12bc] */
  ecx = R32((uint32_t)(esp + 0x12bcu));
/* ff7da4: mov edx, dword ptr [esp + 0x12b8] */
  edx = R32((uint32_t)(esp + 0x12b8u));
/* ff7dab: mov esi, dword ptr [esp + 0x12b4] */
  esi = R32((uint32_t)(esp + 0x12b4u));
/* ff7db2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff7db4: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* ff7db6: mov ebx, ebp */
  ebx = ebp;
/* ff7db8: jmp 0xff7dc0 */
  goto L_ff7dc0;
L_ff7dc0: /* ff7dc0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff7dc4: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* ff7dc7: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff7dcd: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ff7dcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7dd1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff7dd4: jp 0xff7ddd */
  if (pf) goto L_ff7ddd;
L_ff7dd6: /* ff7dd6: mov dword ptr [esi + ecx], 0 */
  W32((uint32_t)(esi + ecx), 0x0u);
L_ff7ddd: /* ff7ddd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7de0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* ff7de1: jne 0xff7dc0 */
  if (!zf) goto L_ff7dc0;
L_ff7de3: /* ff7de3: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7de6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7de7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7de9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7deb: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7ded: mov ecx, ebp */
  ecx = ebp;
/* ff7def: jge 0xff7e64 */
  if ((sf == of)) goto L_ff7e64;
L_ff7df1: /* ff7df1: mov edx, dword ptr [esp + 0x12b4] */
  edx = R32((uint32_t)(esp + 0x12b4u));
/* ff7df8: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* ff7dff: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7e02: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7e03: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7e05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7e06: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7e08: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7e0a: jl 0xff7df1 */
  if ((sf != of)) goto L_ff7df1;
L_ff7e0c: /* ff7e0c: jmp 0xff7e64 */
  goto L_ff7e64;
L_ff7e64: /* ff7e64: mov eax, dword ptr [0x100d1d8] */
  eax = R32((uint32_t)(0x100d1d8u));
/* ff7e69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff7e6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff7e6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7e6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff7e6d: mov dword ptr [0x100d1d8], eax */
  W32((uint32_t)(0x100d1d8u), eax);
/* ff7e72: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7e76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff7e77: add esp, 0x1298 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1298u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7e7d: ret  */
  esp += 4; SPILL(); return;
}

void f_ff7dba(void) {
  LOAD_REGS();
L_ff7dba: /* ff7dba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff7dc0: /* ff7dc0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff7dc4: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* ff7dc7: fadd dword ptr [eax + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x460u)));
/* ff7dcd: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ff7dcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff7dd1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff7dd4: jp 0xff7ddd */
  if (pf) goto L_ff7ddd;
L_ff7dd6: /* ff7dd6: mov dword ptr [esi + ecx], 0 */
  W32((uint32_t)(esi + ecx), 0x0u);
L_ff7ddd: /* ff7ddd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff7de0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* ff7de1: jne 0xff7dc0 */
  if (!zf) goto L_ff7dc0;
L_ff7de3: /* ff7de3: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7de6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7de7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7de9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7deb: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7ded: mov ecx, ebp */
  ecx = ebp;
/* ff7def: jge 0xff7e64 */
  if ((sf == of)) goto L_ff7e64;
L_ff7df1: /* ff7df1: mov edx, dword ptr [esp + 0x12b4] */
  edx = R32((uint32_t)(esp + 0x12b4u));
/* ff7df8: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* ff7dff: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff7e02: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff7e03: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff7e05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7e06: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff7e08: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff7e0a: jl 0xff7df1 */
  if ((sf != of)) goto L_ff7df1;
L_ff7e0c: /* ff7e0c: jmp 0xff7e64 */
  goto L_ff7e64;
L_ff7e64: /* ff7e64: mov eax, dword ptr [0x100d1d8] */
  eax = R32((uint32_t)(0x100d1d8u));
/* ff7e69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff7e6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff7e6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff7e6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff7e6d: mov dword ptr [0x100d1d8], eax */
  W32((uint32_t)(0x100d1d8u), eax);
/* ff7e72: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff7e76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff7e77: add esp, 0x1298 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1298u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7e7d: ret  */
  esp += 4; SPILL(); return;
}

void f_ff7e90(void) {
  LOAD_REGS();
L_ff7e90: /* ff7e90: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff7e93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7e94: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff7e95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff7e96: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* ff7e9a: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* ff7e9d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff7ea0: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ff7ea3: mov eax, dword ptr [edx + 0xd24] */
  eax = R32((uint32_t)(edx + 0xd24u));
/* ff7ea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff7eaa: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* ff7eae: mov ebp, dword ptr [edi + 0x510] */
  ebp = R32((uint32_t)(edi + 0x510u));
/* ff7eb4: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* ff7eb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff7eb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7eba: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff7ebe: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* ff7ec2: call 0x1009154 */
  esp -= 4; W32(esp, 0xff7ec7u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff7ec7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7eca: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff7ecd: jne 0xff81a5 */
  if (!zf) goto L_ff81a5;
L_ff7ed3: /* ff7ed3: mov ecx, dword ptr [edi + 0x504] */
  ecx = R32((uint32_t)(edi + 0x504u));
/* ff7ed9: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff7edc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7edd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff7ede: call 0xff2840 */
  esp -= 4; W32(esp, 0xff7ee3u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* ff7ee3: mov esi, eax */
  esi = eax;
/* ff7ee5: mov eax, dword ptr [edi + 0x50c] */
  eax = R32((uint32_t)(edi + 0x50cu));
/* ff7eeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7eee: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7eef: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* ff7ef3: mov ecx, 0 */
  ecx = 0x0u;
/* ff7ef8: je 0xff7f07 */
  if (zf) goto L_ff7f07;
L_ff7efa: /* ff7efa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff7f00: /* ff7f00: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7f02: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7f03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7f05: jne 0xff7f00 */
  if (!zf) goto L_ff7f00;
L_ff7f07: /* ff7f07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7f08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7f09: call 0x1009154 */
  esp -= 4; W32(esp, 0xff7f0eu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff7f0e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff7f10: mov eax, dword ptr [edi + 0x50c] */
  eax = R32((uint32_t)(edi + 0x50cu));
/* ff7f16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7f19: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff7f1a: mov ecx, 0 */
  ecx = 0x0u;
/* ff7f1f: je 0xff7f28 */
  if (zf) goto L_ff7f28;
L_ff7f21: /* ff7f21: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff7f23: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff7f24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff7f26: jne 0xff7f21 */
  if (!zf) goto L_ff7f21;
L_ff7f28: /* ff7f28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff7f29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff7f2a: call 0x1009154 */
  esp -= 4; W32(esp, 0xff7f2fu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff7f2f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff7f32: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff7f35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff7f38: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* ff7f3a: mov eax, 2 */
  eax = 0x2u;
/* ff7f3f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ff7f47: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff7f4b: jle 0xff806a */
  if ((zf || sf != of)) goto L_ff806a;
L_ff7f51: /* ff7f51: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* ff7f54: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff7f58: jmp 0xff7f60 */
  goto L_ff7f60;
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
L_ff806a: /* ff806a: cmp dword ptr [edi + 0x504], eax */
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
