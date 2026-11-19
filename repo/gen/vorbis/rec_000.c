#include "recomp.h"
#include "rec_mod.h"

void f_ff1000(void) {
  LOAD_REGS();
L_ff1000: /* ff1000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff1001: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff1002: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff1003: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff1007: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* ff100a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* ff100d: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* ff1010: mov ebp, dword ptr [edx + 0x1c] */
  ebp = R32((uint32_t)(edx + 0x1cu));
/* ff1013: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff1014: xor ebx, ebx */
  ebx = 0;
/* ff1016: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* ff1019: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff101a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff101e: mov dword ptr [esi + 0x58], ebx */
  W32((uint32_t)(esi + 0x58u), ebx);
/* ff1021: mov dword ptr [esi + 0x5c], ebx */
  W32((uint32_t)(esi + 0x5cu), ebx);
/* ff1024: mov dword ptr [esi + 0x60], ebx */
  W32((uint32_t)(esi + 0x60u), ebx);
/* ff1027: mov dword ptr [esi + 0x64], ebx */
  W32((uint32_t)(esi + 0x64u), ebx);
/* ff102a: call 0x1009142 */
  esp -= 4; W32(esp, 0xff102fu); SPILL(); f_1009142(); if (g_unwind) return; RELOAD();
/* ff102f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff1031: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff1032: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff1033: call 0x100913c */
  esp -= 4; W32(esp, 0xff1038u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff1038: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff103b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff103e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1040: je 0xff104d */
  if (zf) goto L_ff104d;
L_ff1042: /* ff1042: cmp dword ptr [ebp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1046: jle 0xff104d */
  if ((zf || sf != of)) goto L_ff104d;
L_ff1048: /* ff1048: mov ebx, 1 */
  ebx = 0x1u;
L_ff104d: /* ff104d: mov eax, dword ptr [ebp + ebx*4 + 0x24] */
  eax = R32((uint32_t)(ebp + ebx*4 + 0x24u));
/* ff1051: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* ff1054: mov ebp, dword ptr [ebp + ecx*4 + 0x124] */
  ebp = R32((uint32_t)(ebp + ecx*4 + 0x124u));
/* ff105b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ff105f: mov dword ptr [esi + 0x28], ebx */
  W32((uint32_t)(esi + 0x28u), ebx);
/* ff1062: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* ff1065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1066: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff1067: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff1068: call 0x100913c */
  esp -= 4; W32(esp, 0xff106du); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff106d: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff1070: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff1073: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1075: je 0xff1092 */
  if (zf) goto L_ff1092;
L_ff1077: /* ff1077: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* ff107a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff107c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff107d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff107e: call 0x100913c */
  esp -= 4; W32(esp, 0xff1083u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff1083: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* ff1086: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff1088: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff1089: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff108a: call 0x100913c */
  esp -= 4; W32(esp, 0xff108fu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff108f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff1092: /* ff1092: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff1096: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ff1099: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* ff109c: mov eax, dword ptr [ebp*4 + 0x100d108] */
  eax = R32((uint32_t)(ebp*4 + 0x100d108u));
/* ff10a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff10a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff10a5: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xff10a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff10a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff10ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff10ad: jne 0xff10f2 */
  if (!zf) goto L_ff10f2;
L_ff10af: /* ff10af: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* ff10b3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff10b5: je 0xff10f0 */
  if (zf) goto L_ff10f0;
L_ff10b7: /* ff10b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff10b8: call 0x1009136 */
  esp -= 4; W32(esp, 0xff10bdu); SPILL(); f_1009136(); if (g_unwind) return; RELOAD();
/* ff10bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff10be: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* ff10c0: call 0x1009130 */
  esp -= 4; W32(esp, 0xff10c5u); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff10c5: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* ff10c8: mov dword ptr [ebx + 8], 0 */
  W32((uint32_t)(ebx + 0x8u), 0x0u);
/* ff10cf: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ff10d2: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* ff10d5: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ff10d8: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* ff10db: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* ff10de: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* ff10e1: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* ff10e4: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* ff10e7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* ff10ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff10ed: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
L_ff10f0: /* ff10f0: xor eax, eax */
  eax = 0;
L_ff10f2: /* ff10f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff10f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff10f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff10f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff10f6: ret  */
  esp += 4; SPILL(); return;
}

void f_ff1100(void) {
  LOAD_REGS();
L_ff1100: /* ff1100: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* ff1103: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff1104: mov ebx, eax */
  ebx = eax;
/* ff1106: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff1109: and eax, 0x1ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* ff110e: mov edx, 0 */
  edx = 0x0u;
/* ff1113: jle 0xff1124 */
  if ((zf || sf != of)) goto L_ff1124;
L_ff1115: /* ff1115: mov edx, ecx */
  edx = ecx;
/* ff1117: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* ff111a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff111b: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* ff111d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff111f: mov edx, dword ptr [ebp + edx*4 - 4] */
  edx = R32((uint32_t)(ebp + edx*4 + 0xfffffffcu));
/* ff1123: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ff1124: /* ff1124: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1126: jge 0xff1141 */
  if ((sf == of)) goto L_ff1141;
L_ff1128: /* ff1128: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* ff112b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff112d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff112f: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* ff1132: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1134: and ebx, 0x3f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ff1137: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* ff113a: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff113d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff113f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff1140: ret  */
  esp += 4; SPILL(); return;
L_ff1141: /* ff1141: mov eax, edx */
  eax = edx;
/* ff1143: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1145: and ebx, 0x3f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ff1148: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* ff114b: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff114e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1150: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff1151: ret  */
  esp += 4; SPILL(); return;
}

void f_ff1160(void) {
  LOAD_REGS();
L_ff1160: /* ff1160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff1161: mov ebp, esp */
  ebp = esp;
/* ff1163: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ff1166: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff1169: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff116a: mov esi, eax */
  esi = eax;
/* ff116c: fld qword ptr [esi + 0x58] */
  { double v = F64((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* ff116f: fmul qword ptr [0x100a108] */
  ST0 = ST0 * (F64((uint32_t)(0x100a108u)));
/* ff1175: fsub qword ptr [0x100a0d0] */
  ST0 = ST0 - (F64((uint32_t)(0x100a0d0u)));
/* ff117b: call 0x1009188 */
  esp -= 4; W32(esp, 0xff1180u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff1180: mov ecx, eax */
  ecx = eax;
/* ff1182: xor edx, edx */
  edx = 0;
/* ff1184: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff1186: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* ff118a: jne 0xff1192 */
  if (!zf) goto L_ff1192;
L_ff118c: /* ff118c: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* ff1190: jmp 0xff119d */
  goto L_ff119d;
L_ff1192: /* ff1192: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff1195: mov eax, dword ptr [eax + ecx*4 - 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* ff1199: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_ff119d: /* ff119d: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* ff11a0: fild dword ptr [esi + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* ff11a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff11a5: jge 0xff11ad */
  if ((sf == of)) goto L_ff11ad;
L_ff11a7: /* ff11a7: fadd qword ptr [0x100a100] */
  ST0 = ST0 + (F64((uint32_t)(0x100a100u)));
L_ff11ad: /* ff11ad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff11b0: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff11b4: fild dword ptr [eax + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* ff11b7: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff11bb: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ff11bf: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff11c3: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff11c7: fdiv qword ptr [esp + 0x18] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x18u)));
/* ff11cb: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* ff11cf: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff11d3: fld qword ptr [ebp + 0xc] */
  { double v = F64((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* ff11d6: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff11da: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* ff11dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff11de: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff11e1: jne 0xff1224 */
  if (!zf) goto L_ff1224;
L_ff11e3: /* ff11e3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff11e5: jle 0xff1220 */
  if ((zf || sf != of)) goto L_ff1220;
L_ff11e7: /* ff11e7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ff11e8: jne 0xff11f0 */
  if (!zf) goto L_ff11f0;
L_ff11ea: /* ff11ea: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* ff11ee: jmp 0xff11fb */
  goto L_ff11fb;
L_ff11f0: /* ff11f0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff11f3: mov eax, dword ptr [eax + ecx*4 - 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* ff11f7: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_ff11fb: /* ff11fb: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ff11ff: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff1203: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff1207: fdiv qword ptr [esp + 0x18] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x18u)));
/* ff120b: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* ff120f: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff1213: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff1217: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* ff1219: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff121b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff121e: je 0xff11e3 */
  if (zf) goto L_ff11e3;
L_ff1220: /* ff1220: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
L_ff1224: /* ff1224: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* ff1227: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1229: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* ff122c: jl 0xff1234 */
  if ((sf != of)) goto L_ff1234;
L_ff122e: /* ff122e: mov eax, dword ptr [esi + edx*4 - 4] */
  eax = R32((uint32_t)(esi + edx*4 + 0xfffffffcu));
/* ff1232: jmp 0xff1237 */
  goto L_ff1237;
L_ff1234: /* ff1234: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
L_ff1237: /* ff1237: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* ff123b: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ff123f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ff1243: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ff1247: fdiv qword ptr [esp + 0x18] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x18u)));
/* ff124b: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* ff124f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ff1253: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ff1257: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* ff1259: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff125b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff125e: jp 0xff1296 */
  if (pf) goto L_ff1296;
L_ff1260: /* ff1260: lea esi, [esi + ecx*4] */
  esi = (uint32_t)(esi + ecx*4);
L_ff1263: /* ff1263: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1265: jge 0xff1292 */
  if ((sf == of)) goto L_ff1292;
L_ff1267: /* ff1267: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff1268: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff126b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff126d: jge 0xff1285 */
  if ((sf == of)) goto L_ff1285;
L_ff126f: /* ff126f: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* ff1271: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* ff1275: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ff1279: fdiv qword ptr [esp + 0x18] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x18u)));
/* ff127d: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* ff1281: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
L_ff1285: /* ff1285: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* ff1289: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* ff128b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff128d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1290: jnp 0xff1263 */
  if (!pf) goto L_ff1263;
L_ff1292: /* ff1292: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
L_ff1296: /* ff1296: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff1298: jne 0xff12b3 */
  if (!zf) goto L_ff12b3;
L_ff129a: /* ff129a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ff129c: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ff12a0: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* ff12a4: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* ff12a8: fdiv qword ptr [0x100a108] */
  ST0 = ST0 / (F64((uint32_t)(0x100a108u)));
/* ff12ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff12af: mov esp, ebp */
  esp = ebp;
/* ff12b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff12b2: ret  */
  esp += 4; SPILL(); return;
L_ff12b3: /* ff12b3: fsub qword ptr [esp + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x10u)));
/* ff12b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff12b8: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ff12bc: fsub qword ptr [esp + 0xc] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0xcu)));
/* ff12c0: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* ff12c2: fstp qword ptr [esp + 0x14] */
  WF64((uint32_t)(esp + 0x14u), ST0); FPOP();
/* ff12c6: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* ff12ca: fstp qword ptr [esp + 0x1c] */
  WF64((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* ff12ce: fld qword ptr [esp + 0x1c] */
  { double v = F64((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff12d2: fadd qword ptr [esp + 0x14] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x14u)));
/* ff12d6: fdiv qword ptr [0x100a108] */
  ST0 = ST0 / (F64((uint32_t)(0x100a108u)));
/* ff12dc: mov esp, ebp */
  esp = ebp;
/* ff12de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff12df: ret  */
  esp += 4; SPILL(); return;
}

void f_ff12e0(void) {
  LOAD_REGS();
L_ff12e0: /* ff12e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff12e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff12e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff12e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff12e6: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ff12ea: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* ff12ed: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* ff12f0: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* ff12f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff12f4: mov edi, ecx */
  edi = ecx;
/* ff12f6: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* ff12f8: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff12fc: jns 0xff1311 */
  if (!sf) goto L_ff1311;
L_ff12fe: /* ff12fe: mov ebp, dword ptr [esi + 0x30] */
  ebp = R32((uint32_t)(esi + 0x30u));
/* ff1301: lea ebx, [edx*8 + 4] */
  ebx = (uint32_t)(edx*8 + 0x4u);
/* ff1308: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* ff130b: mov ebx, dword ptr [ebx + ebp - 4] */
  ebx = R32((uint32_t)(ebx + ebp + 0xfffffffcu));
/* ff130f: jmp 0xff1313 */
  goto L_ff1313;
L_ff1311: /* ff1311: xor ebx, ebx */
  ebx = 0;
L_ff1313: /* ff1313: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1315: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* ff1319: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff131b: jle 0xff1332 */
  if ((zf || sf != of)) goto L_ff1332;
L_ff131d: /* ff131d: mov ebp, dword ptr [esi + 0x30] */
  ebp = R32((uint32_t)(esi + 0x30u));
/* ff1320: lea edi, [edx*8 + 4] */
  edi = (uint32_t)(edx*8 + 0x4u);
/* ff1327: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* ff132a: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff132c: mov edi, dword ptr [edi + ebx*4 - 4] */
  edi = R32((uint32_t)(edi + ebx*4 + 0xfffffffcu));
/* ff1330: jmp 0xff1334 */
  goto L_ff1334;
L_ff1332: /* ff1332: xor edi, edi */
  edi = 0;
L_ff1334: /* ff1334: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1336: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff1338: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* ff133c: jle 0xff13d6 */
  if ((zf || sf != of)) goto L_ff13d6;
L_ff1342: /* ff1342: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* ff1345: mov ebx, ecx */
  ebx = ecx;
/* ff1347: mov ebp, ecx */
  ebp = ecx;
/* ff1349: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* ff134b: neg ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(0 - a);
  ebp = r;
  }
/* ff134d: lea edi, [edx*8 + 4] */
  edi = (uint32_t)(edx*8 + 0x4u);
/* ff1354: lea esi, [edx + edx + 1] */
  esi = (uint32_t)(edx + edx + 0x1u);
/* ff1358: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* ff135b: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* ff135e: shl ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* ff1360: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* ff1363: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* ff1366: jmp 0xff1370 */
  goto L_ff1370;
L_ff1368: /* ff1368: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff136c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff1370: /* ff1370: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* ff1373: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1376: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff137a: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff137e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff137f: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff1381: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff1383: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1385: jle 0xff13d2 */
  if ((zf || sf != of)) goto L_ff13d2;
L_ff1387: /* ff1387: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff138b: jle 0xff139c */
  if ((zf || sf != of)) goto L_ff139c;
L_ff138d: /* ff138d: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff1391: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* ff1394: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff1396: mov eax, dword ptr [eax + ecx*4 - 4] */
  eax = R32((uint32_t)(eax + ecx*4 + 0xfffffffcu));
/* ff139a: jmp 0xff139e */
  goto L_ff139e;
L_ff139c: /* ff139c: xor eax, eax */
  eax = 0;
L_ff139e: /* ff139e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff13a2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff13a4: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff13a8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff13ac: cmp eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff13b0: jle 0xff13c2 */
  if ((zf || sf != of)) goto L_ff13c2;
L_ff13b2: /* ff13b2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ff13b6: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* ff13b9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ff13bc: mov eax, dword ptr [eax + edi - 4] */
  eax = R32((uint32_t)(eax + edi + 0xfffffffcu));
/* ff13c0: jmp 0xff13c4 */
  goto L_ff13c4;
L_ff13c2: /* ff13c2: xor eax, eax */
  eax = 0;
L_ff13c4: /* ff13c4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff13c8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff13ca: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff13cc: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff13d0: jg 0xff1368 */
  if ((!zf && sf == of)) goto L_ff1368;
L_ff13d2: /* ff13d2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_ff13d6: /* ff13d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff13d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff13d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff13d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff13da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff13dd: ret  */
  esp += 4; SPILL(); return;
}

void f_ff13e0(void) {
  LOAD_REGS();
L_ff13e0: /* ff13e0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* ff13e4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff13e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff13e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff13e9: mov ebp, dword ptr [edx + 0x1c] */
  ebp = R32((uint32_t)(edx + 0x1cu));
/* ff13ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff13ed: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ff13f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff13f2: lea ebx, [ebp + 0xe78] */
  ebx = (uint32_t)(ebp + 0xe78u);
/* ff13f8: xor eax, eax */
  eax = 0;
/* ff13fa: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff13fc: mov ecx, 0x20 */
  ecx = 0x20u;
/* ff1401: mov edi, esi */
  edi = esi;
/* ff1403: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff1405: je 0xff1614 */
  if (zf) goto L_ff1614;
L_ff140b: /* ff140b: fild dword ptr [edx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ff140e: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff1412: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff1416: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* ff1418: call 0x1009188 */
  esp -= 4; W32(esp, 0xff141du); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff141d: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff1421: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* ff1424: fild dword ptr [edi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* ff1427: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff142b: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff142f: fmul qword ptr [ebx + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebx + 0x8u)));
/* ff1432: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* ff1434: call 0x1009188 */
  esp -= 4; W32(esp, 0xff1439u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff1439: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* ff143c: fild dword ptr [edi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* ff143f: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ff1443: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff1447: fmul qword ptr [ebx + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebx + 0x10u)));
/* ff144a: call 0x1009188 */
  esp -= 4; W32(esp, 0xff144fu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff144f: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ff1452: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* ff1455: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff1457: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff1459: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* ff145c: jbe 0xff1460 */
  if ((cf | zf)) goto L_ff1460;
L_ff145e: /* ff145e: mov eax, ecx */
  eax = ecx;
L_ff1460: /* ff1460: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* ff1463: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff1465: jle 0xff15f0 */
  if ((zf || sf != of)) goto L_ff15f0;
L_ff146b: /* ff146b: fld qword ptr [ebx + 0x28] */
  { double v = F64((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* ff146e: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1474: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1476: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1479: je 0xff14af */
  if (zf) goto L_ff14af;
L_ff147b: /* ff147b: fld qword ptr [ebx + 0x30] */
  { double v = F64((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* ff147e: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1484: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1486: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1489: je 0xff14af */
  if (zf) goto L_ff14af;
L_ff148b: /* ff148b: fld qword ptr [ebx + 0x20] */
  { double v = F64((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* ff148e: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1494: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1496: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1499: je 0xff14af */
  if (zf) goto L_ff14af;
L_ff149b: /* ff149b: fld qword ptr [ebx + 0x18] */
  { double v = F64((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* ff149e: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff14a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff14a6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff14a9: jne 0xff15f0 */
  if (!zf) goto L_ff15f0;
L_ff14af: /* ff14af: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* ff14b2: mov eax, ecx */
  eax = ecx;
/* ff14b4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff14b5: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ff14b7: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0xff14b7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff14b9: mov edi, eax */
  edi = eax;
/* ff14bb: mov eax, dword ptr [ebp + 0x1088] */
  eax = R32((uint32_t)(ebp + 0x1088u));
/* ff14c1: mov ebp, dword ptr [ebp + eax*4 + 0x1004] */
  ebp = R32((uint32_t)(ebp + eax*4 + 0x1004u));
/* ff14c8: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* ff14cb: add edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff14ce: mov ecx, ebp */
  ecx = ebp;
/* ff14d0: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* ff14d3: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff14d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff14d7: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* ff14da: mov dword ptr [esi + 0x10], ebp */
  W32((uint32_t)(esi + 0x10u), ebp);
/* ff14dd: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff14e3u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff14e3: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* ff14ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff14eb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff14ed: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff14f3u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff14f3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff14f6: fld qword ptr [ebx + 0x28] */
  { double v = F64((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* ff14f9: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff14ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff1502: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1504: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1507: je 0xff1519 */
  if (zf) goto L_ff1519;
L_ff1509: /* ff1509: fld qword ptr [ebx + 0x30] */
  { double v = F64((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* ff150c: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1512: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1514: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1517: jne 0xff154a */
  if (!zf) goto L_ff154a;
L_ff1519: /* ff1519: fld qword ptr [ebx] */
  { double v = F64((uint32_t)(ebx)); FPUSH(v); }
/* ff151b: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1521: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1523: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1526: jne 0xff154a */
  if (!zf) goto L_ff154a;
L_ff1528: /* ff1528: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* ff152f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1530: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff1536u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff1536: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* ff1539: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* ff153c: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* ff153f: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* ff1542: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff1545: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* ff1548: jmp 0xff1551 */
  goto L_ff1551;
L_ff154a: /* ff154a: mov dword ptr [esi + 0x1c], 0xffffffff */
  W32((uint32_t)(esi + 0x1cu), 0xffffffffu);
L_ff1551: /* ff1551: fld qword ptr [ebx + 0x18] */
  { double v = F64((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* ff1554: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff155a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff155c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff155f: je 0xff1571 */
  if (zf) goto L_ff1571;
L_ff1561: /* ff1561: fld qword ptr [ebx + 0x20] */
  { double v = F64((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* ff1564: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff156a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff156c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff156f: jne 0xff15ae */
  if (!zf) goto L_ff15ae;
L_ff1571: /* ff1571: fld qword ptr [ebx + 0x10] */
  { double v = F64((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* ff1574: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff157a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff157c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff157f: jne 0xff15ae */
  if (!zf) goto L_ff15ae;
L_ff1581: /* ff1581: lea ebx, [ebp + 1] */
  ebx = (uint32_t)(ebp + 0x1u);
/* ff1584: mov eax, ebx */
  eax = ebx;
/* ff1586: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* ff1589: mov ebp, dword ptr [0x100a038] */
  ebp = R32((uint32_t)(0x100a038u));
/* ff158f: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff1591: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff1593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1594: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff1596u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff1596: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff1598: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff1599: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* ff159c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff159eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff159e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff15a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff15a1: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* ff15a4: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff15a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff15a6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff15a9: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* ff15ac: jmp 0xff15bb */
  goto L_ff15bb;
L_ff15ae: /* ff15ae: mov ebp, dword ptr [0x100a038] */
  ebp = R32((uint32_t)(0x100a038u));
/* ff15b4: mov dword ptr [esi + 0x44], 0xffffffff */
  W32((uint32_t)(esi + 0x44u), 0xffffffffu);
L_ff15bb: /* ff15bb: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* ff15bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff15be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff15c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff15c0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff15c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff15c3: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* ff15c6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff15c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff15c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff15cb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff15cd: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* ff15d0: jle 0xff1614 */
  if ((zf || sf != of)) goto L_ff1614;
L_ff15d2: /* ff15d2: xor ebx, ebx */
  ebx = 0;
L_ff15d4: /* ff15d4: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* ff15d7: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff15d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff15da: call 0x1009148 */
  esp -= 4; W32(esp, 0xff15dfu); SPILL(); f_1009148(); if (g_unwind) return; RELOAD();
/* ff15df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff15e2: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff15e5: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* ff15e6: jne 0xff15d4 */
  if (!zf) goto L_ff15d4;
L_ff15e8: /* ff15e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff15e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff15ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff15eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff15ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff15ef: ret  */
  esp += 4; SPILL(); return;
L_ff15f0: /* ff15f0: mov edi, dword ptr [0x100a038] */
  edi = R32((uint32_t)(0x100a038u));
/* ff15f6: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* ff15f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff15fa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff15fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff15fc: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff15fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff1600: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* ff1603: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff1605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff1605: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* ff1608: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff1609: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* ff160c: call 0x1009148 */
  esp -= 4; W32(esp, 0xff1611u); SPILL(); f_1009148(); if (g_unwind) return; RELOAD();
/* ff1611: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff1614: /* ff1614: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff1615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff1616: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff1617: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff1618: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff161b: ret  */
  esp += 4; SPILL(); return;
}

void f_ff1620(void) {
  LOAD_REGS();
L_ff1620: /* ff1620: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff1621: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* ff1625: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1627: je 0xff16eb */
  if (zf) goto L_ff16eb;
L_ff162d: /* ff162d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff162f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1631: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff1632: mov ebp, dword ptr [0x100a040] */
  ebp = R32((uint32_t)(0x100a040u));
/* ff1638: je 0xff1640 */
  if (zf) goto L_ff1640;
L_ff163a: /* ff163a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff163b: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff163du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff163d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff1640: /* ff1640: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ff1643: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1645: je 0xff164d */
  if (zf) goto L_ff164d;
L_ff1647: /* ff1647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1648: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff164au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff164a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff164d: /* ff164d: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* ff1650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1652: je 0xff165a */
  if (zf) goto L_ff165a;
L_ff1654: /* ff1654: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1655: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff1657u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff1657: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff165a: /* ff165a: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* ff165d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff165f: je 0xff1667 */
  if (zf) goto L_ff1667;
L_ff1661: /* ff1661: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1662: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff1664u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff1664: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff1667: /* ff1667: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* ff166a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff166c: je 0xff1674 */
  if (zf) goto L_ff1674;
L_ff166e: /* ff166e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff166f: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff1671u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff1671: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff1674: /* ff1674: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* ff1677: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1679: je 0xff1681 */
  if (zf) goto L_ff1681;
L_ff167b: /* ff167b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff167c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff167eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff167e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff1681: /* ff1681: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* ff1684: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1686: je 0xff16d4 */
  if (zf) goto L_ff16d4;
L_ff1688: /* ff1688: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff168b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff168d: jne 0xff16a0 */
  if (!zf) goto L_ff16a0;
L_ff168f: /* ff168f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff1690: call 0x100914e */
  esp -= 4; W32(esp, 0xff1695u); SPILL(); f_100914e(); if (g_unwind) return; RELOAD();
/* ff1695: mov eax, dword ptr [edi + 0x78] */
  eax = R32((uint32_t)(edi + 0x78u));
/* ff1698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1699: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff169bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff169b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff169e: jmp 0xff16d4 */
  goto L_ff16d4;
L_ff16a0: /* ff16a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff16a1: xor esi, esi */
  esi = 0;
/* ff16a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff16a5: jle 0xff16ca */
  if ((zf || sf != of)) goto L_ff16ca;
L_ff16a7: /* ff16a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff16a8: xor ebx, ebx */
  ebx = 0;
/* ff16aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff16b0: /* ff16b0: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* ff16b3: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff16b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff16b6: call 0x100914e */
  esp -= 4; W32(esp, 0xff16bbu); SPILL(); f_100914e(); if (g_unwind) return; RELOAD();
/* ff16bb: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ff16be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff16c1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff16c2: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff16c5: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff16c7: jl 0xff16b0 */
  if ((sf != of)) goto L_ff16b0;
L_ff16c9: /* ff16c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ff16ca: /* ff16ca: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* ff16cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff16ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff16d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff16d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff16d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_ff16d4: /* ff16d4: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* ff16d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff16d9: je 0xff16e1 */
  if (zf) goto L_ff16e1;
L_ff16db: /* ff16db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff16dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff16deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff16de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff16e1: /* ff16e1: mov ecx, 0x20 */
  ecx = 0x20u;
/* ff16e6: xor eax, eax */
  eax = 0;
/* ff16e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff16ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ff16eb: /* ff16eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff16ec: ret  */
  esp += 4; SPILL(); return;
}

void f_ff16f0(void) {
  LOAD_REGS();
L_ff16f0: /* ff16f0: mov eax, 0x80 */
  eax = 0x80u;
/* ff16f5: ret  */
  esp += 4; SPILL(); return;
}

void f_ff1700(void) {
  LOAD_REGS();
L_ff1700: /* ff1700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff1701: mov ebp, esp */
  ebp = esp;
/* ff1703: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ff1706: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff1709: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff170c: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* ff170f: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff1713: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* ff1716: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff1717: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* ff171a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* ff171d: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* ff1720: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff1723: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff1727: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* ff172a: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* ff172d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff172e: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* ff1731: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ff1735: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff1737: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1739: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* ff173d: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* ff1740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff1741: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff1745: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* ff1749: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* ff174d: jne 0xff17ec */
  if (!zf) goto L_ff17ec;
L_ff1753: /* ff1753: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1755: jne 0xff2717 */
  if (!zf) goto L_ff2717;
L_ff175b: /* ff175b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ff175e: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* ff1761: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff1762: mov dword ptr [ebx + 0xc], 1 */
  W32((uint32_t)(ebx + 0xcu), 0x1u);
/* ff1769: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* ff176d: call 0x1009136 */
  esp -= 4; W32(esp, 0xff1772u); SPILL(); f_1009136(); if (g_unwind) return; RELOAD();
/* ff1772: mov ecx, dword ptr [ebx + 0x7c] */
  ecx = R32((uint32_t)(ebx + 0x7cu));
/* ff1775: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff1776: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ff1778: call 0x1009130 */
  esp -= 4; W32(esp, 0xff177du); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff177d: mov edx, dword ptr [ebx + 0x7c] */
  edx = R32((uint32_t)(ebx + 0x7cu));
/* ff1780: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* ff1783: mov eax, dword ptr [ebx + 0x7c] */
  eax = R32((uint32_t)(ebx + 0x7cu));
/* ff1786: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* ff178d: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* ff1790: mov ecx, dword ptr [ebx + 0x7c] */
  ecx = R32((uint32_t)(ebx + 0x7cu));
/* ff1793: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* ff1796: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ff1799: mov eax, dword ptr [ebx + 0x7c] */
  eax = R32((uint32_t)(ebx + 0x7cu));
/* ff179c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* ff179f: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* ff17a2: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* ff17a5: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* ff17a8: mov eax, dword ptr [ebx + 0x7c] */
  eax = R32((uint32_t)(ebx + 0x7cu));
/* ff17ab: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* ff17ae: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* ff17b1: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* ff17b4: mov ebx, dword ptr [ebx + 0x78] */
  ebx = R32((uint32_t)(ebx + 0x78u));
/* ff17b7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* ff17bb: mov ecx, 5 */
  ecx = 0x5u;
/* ff17c0: mov esi, ebx */
  esi = ebx;
/* ff17c2: lea edi, [esp + 0x64] */
  edi = (uint32_t)(esp + 0x64u);
/* ff17c6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff17c8: mov esi, eax */
  esi = eax;
/* ff17ca: mov ecx, 5 */
  ecx = 0x5u;
/* ff17cf: mov edi, ebx */
  edi = ebx;
/* ff17d1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff17d3: mov edi, eax */
  edi = eax;
/* ff17d5: mov ecx, 5 */
  ecx = 0x5u;
/* ff17da: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* ff17de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff17e1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff17e3: xor eax, eax */
  eax = 0;
/* ff17e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff17e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff17e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff17e8: mov esp, ebp */
  esp = ebp;
/* ff17ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff17eb: ret  */
  esp += 4; SPILL(); return;
L_ff17ec: /* ff17ec: cmp edx, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff17ef: jl 0xff17f7 */
  if ((sf != of)) goto L_ff17f7;
L_ff17f1: /* ff17f1: xor edx, edx */
  edx = 0;
/* ff17f3: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
L_ff17f7: /* ff17f7: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* ff17fa: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* ff17fd: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff1801: cmp edx, dword ptr [ebx + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff1804: je 0xff2717 */
  if (zf) goto L_ff2717;
L_ff180a: /* ff180a: cmp edx, dword ptr [ebx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff180d: je 0xff2717 */
  if (zf) goto L_ff2717;
L_ff1813: /* ff1813: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff1817: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ff181a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff181d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ff1821: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* ff1824: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* ff1827: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* ff1829: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* ff182b: and edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1831: mov dword ptr [eax + esi*4], edx */
  W32((uint32_t)(eax + esi*4), edx);
/* ff1834: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* ff1837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff1838: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ff183b: call 0x1009136 */
  esp -= 4; W32(esp, 0xff1840u); SPILL(); f_1009136(); if (g_unwind) return; RELOAD();
/* ff1840: mov ecx, dword ptr [ebx + 0x7c] */
  ecx = R32((uint32_t)(ebx + 0x7cu));
/* ff1843: mov dword ptr [esi + ecx], eax */
  W32((uint32_t)(esi + ecx), eax);
/* ff1846: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* ff1849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff184a: call 0x1009130 */
  esp -= 4; W32(esp, 0xff184fu); SPILL(); f_1009130(); if (g_unwind) return; RELOAD();
/* ff184f: mov edx, dword ptr [ebx + 0x7c] */
  edx = R32((uint32_t)(ebx + 0x7cu));
/* ff1852: mov dword ptr [esi + edx + 4], eax */
  W32((uint32_t)(esi + edx + 0x4u), eax);
/* ff1856: mov eax, dword ptr [ebx + 0x7c] */
  eax = R32((uint32_t)(ebx + 0x7cu));
/* ff1859: mov dword ptr [esi + eax + 8], 0 */
  W32((uint32_t)(esi + eax + 0x8u), 0x0u);
/* ff1861: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* ff1864: mov ecx, dword ptr [ebx + 0x7c] */
  ecx = R32((uint32_t)(ebx + 0x7cu));
/* ff1867: mov dword ptr [esi + ecx + 0xc], edx */
  W32((uint32_t)(esi + ecx + 0xcu), edx);
/* ff186b: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* ff186e: mov eax, dword ptr [ebx + 0x7c] */
  eax = R32((uint32_t)(ebx + 0x7cu));
/* ff1871: mov dword ptr [esi + eax + 0x10], ecx */
  W32((uint32_t)(esi + eax + 0x10u), ecx);
/* ff1875: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* ff1878: mov dword ptr [esi + eax + 0x14], edx */
  W32((uint32_t)(esi + eax + 0x14u), edx);
/* ff187c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* ff187f: mov eax, dword ptr [ebx + 0x7c] */
  eax = R32((uint32_t)(ebx + 0x7cu));
/* ff1882: mov dword ptr [esi + eax + 0x18], ecx */
  W32((uint32_t)(esi + eax + 0x18u), ecx);
/* ff1886: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* ff1889: mov dword ptr [esi + eax + 0x1c], edx */
  W32((uint32_t)(esi + eax + 0x1cu), edx);
/* ff188d: mov ecx, dword ptr [ebx + 0x78] */
  ecx = R32((uint32_t)(ebx + 0x78u));
/* ff1890: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff1894: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* ff1897: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* ff189a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* ff189d: mov esi, eax */
  esi = eax;
/* ff189f: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff18a2: mov ecx, 5 */
  ecx = 0x5u;
/* ff18a7: lea edi, [esp + 0x64] */
  edi = (uint32_t)(esp + 0x64u);
/* ff18ab: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff18ad: mov edi, eax */
  edi = eax;
/* ff18af: mov esi, edx */
  esi = edx;
/* ff18b1: mov ecx, 5 */
  ecx = 0x5u;
/* ff18b6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff18b8: mov edi, edx */
  edi = edx;
/* ff18ba: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* ff18be: mov ecx, 5 */
  ecx = 0x5u;
/* ff18c3: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* ff18c7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff18c9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff18cd: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* ff18d0: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* ff18d4: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff18d7: mov eax, ecx */
  eax = ecx;
/* ff18d9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff18dc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff18de: mov ecx, eax */
  ecx = eax;
/* ff18e0: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff18e3: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ff18e5: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* ff18e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff18eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff18ed: je 0xff18f4 */
  if (zf) goto L_ff18f4;
L_ff18ef: /* ff18ef: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* ff18f2: jmp 0xff18f8 */
  goto L_ff18f8;
L_ff18f4: /* ff18f4: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_ff18f8: /* ff18f8: xor ecx, ecx */
  ecx = 0;
/* ff18fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff18fc: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* ff1900: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* ff1904: je 0xff1e03 */
  if (zf) goto L_ff1e03;
L_ff190a: /* ff190a: cmp dword ptr [esp + 0x30], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff190e: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* ff1911: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ff1915: je 0xff191b */
  if (zf) goto L_ff191b;
L_ff1917: /* ff1917: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_ff191b: /* ff191b: cmp dword ptr [esp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff191f: jle 0xff1967 */
  if ((zf || sf != of)) goto L_ff1967;
L_ff1921: /* ff1921: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff1925: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* ff1928: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff192b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff192c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff192f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1931: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ff1934: mov edi, eax */
  edi = eax;
/* ff1936: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ff1939: sar edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ff193c: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ff1940: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* ff1943: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1944: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff194a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff194c: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff194f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1951: lea edx, [eax*8 + 8] */
  edx = (uint32_t)(eax*8 + 0x8u);
/* ff1958: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff195c: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* ff195e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff1962: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff1963: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1965: jl 0xff1921 */
  if ((sf != of)) goto L_ff1921;
L_ff1967: /* ff1967: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff196a: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff196d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ff1971: mov edx, dword ptr [edi + ecx*4] */
  edx = R32((uint32_t)(edi + ecx*4));
/* ff1974: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* ff1977: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff1979: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff197b: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* ff197e: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff1981: mov edx, dword ptr [edi + ecx*4] */
  edx = R32((uint32_t)(edi + ecx*4));
/* ff1984: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* ff1987: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff1989: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff198b: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* ff198e: cmp edx, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff1991: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* ff1994: ja 0xff19a2 */
  if ((!cf && !zf)) goto L_ff19a2;
L_ff1996: /* ff1996: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff199a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff199c: je 0xff1e30 */
  if (zf) goto L_ff1e30;
L_ff19a2: /* ff19a2: cmp ecx, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff19a6: jbe 0xff1d4d */
  if ((cf | zf)) goto L_ff1d4d;
L_ff19ac: /* ff19ac: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* ff19af: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* ff19b2: mov edx, dword ptr [edi + 0xeac] */
  edx = R32((uint32_t)(edi + 0xeacu));
/* ff19b8: mov eax, dword ptr [edi + 0xea8] */
  eax = R32((uint32_t)(edi + 0xea8u));
/* ff19be: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff19c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff19c1: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* ff19c5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff19c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff19ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff19cb: mov eax, ebx */
  eax = ebx;
/* ff19cd: call 0xff1160 */
  esp -= 4; W32(esp, 0xff19d2u); SPILL(); f_ff1160(); if (g_unwind) return; RELOAD();
/* ff19d2: fstp qword ptr [esp + 0x44] */
  WF64((uint32_t)(esp + 0x44u), ST0); FPOP();
/* ff19d6: mov edx, dword ptr [edi + 0xea4] */
  edx = R32((uint32_t)(edi + 0xea4u));
/* ff19dc: mov eax, dword ptr [edi + 0xea0] */
  eax = R32((uint32_t)(edi + 0xea0u));
/* ff19e2: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ff19e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff19e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff19e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff19e9: mov eax, ebx */
  eax = ebx;
/* ff19eb: call 0xff1160 */
  esp -= 4; W32(esp, 0xff19f0u); SPILL(); f_ff1160(); if (g_unwind) return; RELOAD();
/* ff19f0: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* ff19f4: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff19f8: mov eax, dword ptr [edi + 0xeb4] */
  eax = R32((uint32_t)(edi + 0xeb4u));
/* ff19fe: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1a04: mov edx, dword ptr [edi + 0xeb0] */
  edx = R32((uint32_t)(edi + 0xeb0u));
/* ff1a0a: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* ff1a0e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff1a11: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* ff1a15: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1a17: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1a1a: jne 0xff1a3b */
  if (!zf) goto L_ff1a3b;
L_ff1a1c: /* ff1a1c: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ff1a20: fcomp qword ptr [esp + 0x50] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x50u)));
  FPOP();
/* ff1a24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1a26: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1a29: jp 0xff1a3b */
  if (pf) goto L_ff1a3b;
L_ff1a2b: /* ff1a2b: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* ff1a2f: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* ff1a33: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* ff1a37: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
L_ff1a3b: /* ff1a3b: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ff1a3f: fcomp qword ptr [edi + 0xeb8] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xeb8u)));
  FPOP();
/* ff1a45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1a47: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1a4a: jp 0xff1a60 */
  if (pf) goto L_ff1a60;
L_ff1a4c: /* ff1a4c: mov eax, dword ptr [edi + 0xeb8] */
  eax = R32((uint32_t)(edi + 0xeb8u));
/* ff1a52: mov ecx, dword ptr [edi + 0xebc] */
  ecx = R32((uint32_t)(edi + 0xebcu));
/* ff1a58: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff1a5c: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
L_ff1a60: /* ff1a60: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ff1a64: fcomp qword ptr [esp + 0x50] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x50u)));
  FPOP();
/* ff1a68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1a6a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1a6d: jne 0xff1a7f */
  if (!zf) goto L_ff1a7f;
L_ff1a6f: /* ff1a6f: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* ff1a73: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* ff1a77: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* ff1a7b: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
L_ff1a7f: /* ff1a7f: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff1a83: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff1a87: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ff1a8b: fild dword ptr [ecx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* ff1a8e: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ff1a92: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff1a96: fsub qword ptr [ebx + 0x58] */
  ST0 = ST0 - (F64((uint32_t)(ebx + 0x58u)));
/* ff1a99: fdiv qword ptr [esp + 0x40] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x40u)));
/* ff1a9d: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff1aa1: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* ff1aa5: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* ff1aa9: fcom qword ptr [edi + 0xec0] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xec0u)));
/* ff1aaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1ab1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1ab4: jp 0xff1acb */
  if (pf) goto L_ff1acb;
L_ff1ab6: /* ff1ab6: fld qword ptr [edi + 0xec0] */
  { double v = F64((uint32_t)(edi + 0xec0u)); FPUSH(v); }
/* ff1abc: fdiv qword ptr [esp + 0x48] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x48u)));
/* ff1ac0: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* ff1ac4: fadd qword ptr [ebx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ebx + 0x58u)));
/* ff1ac7: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
L_ff1acb: /* ff1acb: fcomp qword ptr [edi + 0xec8] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xec8u)));
  FPOP();
/* ff1ad1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1ad3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1ad6: jne 0xff1aed */
  if (!zf) goto L_ff1aed;
L_ff1ad8: /* ff1ad8: fld qword ptr [edi + 0xec8] */
  { double v = F64((uint32_t)(edi + 0xec8u)); FPUSH(v); }
/* ff1ade: fdiv qword ptr [esp + 0x48] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x48u)));
/* ff1ae2: fmul qword ptr [esp + 0x40] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x40u)));
/* ff1ae6: fadd qword ptr [ebx + 0x58] */
  ST0 = ST0 + (F64((uint32_t)(ebx + 0x58u)));
/* ff1ae9: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
L_ff1aed: /* ff1aed: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff1af1: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* ff1af5: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* ff1af9: fmul qword ptr [0x100a120] */
  ST0 = ST0 * (F64((uint32_t)(0x100a120u)));
/* ff1aff: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* ff1b02: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* ff1b05: call 0x1009188 */
  esp -= 4; W32(esp, 0xff1b0au); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff1b0a: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff1b0e: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ff1b12: cmp dword ptr [ebx + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff1b15: jbe 0xff1b6f */
  if ((cf | zf)) goto L_ff1b6f;
L_ff1b17: /* ff1b17: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* ff1b1a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff1b1d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* ff1b20: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* ff1b23: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* ff1b27: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* ff1b2b: mov edx, ecx */
  edx = ecx;
/* ff1b2d: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ff1b2f: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff1b33: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* ff1b36: mov edx, dword ptr [edi + edx*4] */
  edx = R32((uint32_t)(edi + edx*4));
/* ff1b39: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ff1b3b: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* ff1b3e: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* ff1b41: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff1b43: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff1b45: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff1b46: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* ff1b49: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* ff1b4c: mov ecx, eax */
  ecx = eax;
/* ff1b4e: mov eax, dword ptr [ebx + 0x68] */
  eax = R32((uint32_t)(ebx + 0x68u));
/* ff1b51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1b53: je 0xff1b5a */
  if (zf) goto L_ff1b5a;
L_ff1b55: /* ff1b55: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1b57: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
L_ff1b5a: /* ff1b5a: cmp ecx, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1b5d: jl 0xff1b66 */
  if ((sf != of)) goto L_ff1b66;
L_ff1b5f: /* ff1b5f: mov dword ptr [ebx + 0x18], 0 */
  W32((uint32_t)(ebx + 0x18u), 0x0u);
L_ff1b66: /* ff1b66: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff1b6a: cmp dword ptr [ebx + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff1b6d: ja 0xff1b17 */
  if ((!cf && !zf)) goto L_ff1b17;
L_ff1b6f: /* ff1b6f: fld qword ptr [ebx + 0x58] */
  { double v = F64((uint32_t)(ebx + 0x58u)); FPUSH(v); }
/* ff1b72: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* ff1b75: fcomp qword ptr [edi + 0xed0] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xed0u)));
  FPOP();
/* ff1b7b: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* ff1b7f: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1b82: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1b84: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1b87: jp 0xff1b91 */
  if (pf) goto L_ff1b91;
L_ff1b89: /* ff1b89: fadd qword ptr [0x100a0d0] */
  ST0 = ST0 + (F64((uint32_t)(0x100a0d0u)));
/* ff1b8f: jmp 0xff1bb7 */
  goto L_ff1bb7;
L_ff1b91: /* ff1b91: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1b97: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1b99: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1b9c: jne 0xff1bba */
  if (!zf) goto L_ff1bba;
L_ff1b9e: /* ff1b9e: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1ba1: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1ba7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1ba9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1bac: jne 0xff1bba */
  if (!zf) goto L_ff1bba;
L_ff1bae: /* ff1bae: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1bb1: fsub qword ptr [0x100a118] */
  ST0 = ST0 - (F64((uint32_t)(0x100a118u)));
L_ff1bb7: /* ff1bb7: fstp qword ptr [ebx + 0x70] */
  WF64((uint32_t)(ebx + 0x70u), ST0); FPOP();
L_ff1bba: /* ff1bba: fld qword ptr [ebx + 0x58] */
  { double v = F64((uint32_t)(ebx + 0x58u)); FPUSH(v); }
/* ff1bbd: fcomp qword ptr [edi + 0xed8] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xed8u)));
  FPOP();
/* ff1bc3: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1bc6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1bc8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1bcb: jne 0xff1bd5 */
  if (!zf) goto L_ff1bd5;
L_ff1bcd: /* ff1bcd: fsub qword ptr [0x100a0d0] */
  ST0 = ST0 - (F64((uint32_t)(0x100a0d0u)));
/* ff1bd3: jmp 0xff1bfb */
  goto L_ff1bfb;
L_ff1bd5: /* ff1bd5: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1bdb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1bdd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1be0: jp 0xff1bfe */
  if (pf) goto L_ff1bfe;
L_ff1be2: /* ff1be2: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1be5: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1beb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1bed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1bf0: jp 0xff1bfe */
  if (pf) goto L_ff1bfe;
L_ff1bf2: /* ff1bf2: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1bf5: fadd qword ptr [0x100a118] */
  ST0 = ST0 + (F64((uint32_t)(0x100a118u)));
L_ff1bfb: /* ff1bfb: fstp qword ptr [ebx + 0x70] */
  WF64((uint32_t)(ebx + 0x70u), ST0); FPOP();
L_ff1bfe: /* ff1bfe: mov eax, dword ptr [ebx + 0x68] */
  eax = R32((uint32_t)(ebx + 0x68u));
/* ff1c01: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff1c03: jg 0xff1d4d */
  if ((!zf && sf == of)) goto L_ff1d4d;
L_ff1c09: /* ff1c09: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1c0c: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1c12: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1c14: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1c17: jp 0xff1c6c */
  if (pf) goto L_ff1c6c;
L_ff1c19: /* ff1c19: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1c1c: fsub qword ptr [0x100a0d0] */
  ST0 = ST0 - (F64((uint32_t)(0x100a0d0u)));
/* ff1c22: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff1c26: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* ff1c2a: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1c2d: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* ff1c31: fchs  */
  ST0 = -ST0;
/* ff1c33: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* ff1c36: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
/* ff1c39: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* ff1c3c: mov eax, ecx */
  eax = ecx;
/* ff1c3e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1c3f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1c41: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff1c43: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ff1c47: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff1c4b: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ff1c4f: fcomp qword ptr [esp + 0x48] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x48u)));
  FPOP();
/* ff1c53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1c55: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1c58: jne 0xff1c67 */
  if (!zf) goto L_ff1c67;
L_ff1c5a: /* ff1c5a: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff1c5e: fsub qword ptr [0x100a0d0] */
  ST0 = ST0 - (F64((uint32_t)(0x100a0d0u)));
/* ff1c64: fstp qword ptr [ebx + 0x60] */
  WF64((uint32_t)(ebx + 0x60u), ST0); FPOP();
L_ff1c67: /* ff1c67: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff1c69: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
L_ff1c6c: /* ff1c6c: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1c6f: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1c75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1c77: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1c7a: jne 0xff1ccd */
  if (!zf) goto L_ff1ccd;
L_ff1c7c: /* ff1c7c: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1c7f: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* ff1c82: fadd qword ptr [0x100a0d0] */
  ST0 = ST0 + (F64((uint32_t)(0x100a0d0u)));
/* ff1c88: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff1c8c: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* ff1c90: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* ff1c94: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* ff1c97: mov eax, ecx */
  eax = ecx;
/* ff1c99: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* ff1c9c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1c9d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1c9f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff1ca1: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ff1ca5: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* ff1ca9: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ff1cad: fld qword ptr [ebx + 0x70] */
  { double v = F64((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* ff1cb0: fcomp qword ptr [esp + 0x48] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x48u)));
  FPOP();
/* ff1cb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1cb6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1cb9: jne 0xff1cc8 */
  if (!zf) goto L_ff1cc8;
L_ff1cbb: /* ff1cbb: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff1cbf: fadd qword ptr [0x100a0d0] */
  ST0 = ST0 + (F64((uint32_t)(0x100a0d0u)));
/* ff1cc5: fstp qword ptr [ebx + 0x60] */
  WF64((uint32_t)(ebx + 0x60u), ST0); FPOP();
L_ff1cc8: /* ff1cc8: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff1cca: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
L_ff1ccd: /* ff1ccd: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1cd0: xor ecx, ecx */
  ecx = 0;
/* ff1cd2: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1cd8: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
/* ff1cdb: mov dword ptr [ebx + 0x74], ecx */
  W32((uint32_t)(ebx + 0x74u), ecx);
/* ff1cde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1ce0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1ce3: jne 0xff1cef */
  if (!zf) goto L_ff1cef;
L_ff1ce5: /* ff1ce5: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
/* ff1ce8: mov dword ptr [ebx + 0x74], 0xbff00000 */
  W32((uint32_t)(ebx + 0x74u), 0xbff00000u);
L_ff1cef: /* ff1cef: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1cf2: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff1cf8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1cfa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1cfd: jp 0xff1d09 */
  if (pf) goto L_ff1d09;
L_ff1cff: /* ff1cff: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
/* ff1d02: mov dword ptr [ebx + 0x74], 0x3ff00000 */
  W32((uint32_t)(ebx + 0x74u), 0x3ff00000u);
L_ff1d09: /* ff1d09: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1d0c: fcomp qword ptr [edi + 0xee0] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xee0u)));
  FPOP();
/* ff1d12: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1d14: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff1d17: jp 0xff1d2b */
  if (pf) goto L_ff1d2b;
L_ff1d19: /* ff1d19: mov ecx, dword ptr [edi + 0xee0] */
  ecx = R32((uint32_t)(edi + 0xee0u));
/* ff1d1f: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* ff1d22: mov edx, dword ptr [edi + 0xee4] */
  edx = R32((uint32_t)(edi + 0xee4u));
/* ff1d28: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
L_ff1d2b: /* ff1d2b: fld qword ptr [ebx + 0x60] */
  { double v = F64((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* ff1d2e: fcomp qword ptr [edi + 0xee8] */
  fpu_com(ST0, F64((uint32_t)(edi + 0xee8u)));
  FPOP();
/* ff1d34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff1d36: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff1d39: jne 0xff1d4d */
  if (!zf) goto L_ff1d4d;
L_ff1d3b: /* ff1d3b: mov eax, dword ptr [edi + 0xee8] */
  eax = R32((uint32_t)(edi + 0xee8u));
/* ff1d41: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* ff1d44: mov ecx, dword ptr [edi + 0xeec] */
  ecx = R32((uint32_t)(edi + 0xeecu));
/* ff1d4a: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
L_ff1d4d: /* ff1d4d: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* ff1d50: cmp edx, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff1d53: jbe 0xff1e30 */
  if ((cf | zf)) goto L_ff1e30;
L_ff1d59: /* ff1d59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff1d60: /* ff1d60: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* ff1d63: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ff1d66: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* ff1d69: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff1d6d: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* ff1d70: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* ff1d73: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff1d75: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ff1d79: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ff1d7c: xor ecx, ecx */
  ecx = 0;
/* ff1d7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff1d80: jle 0xff1dd2 */
  if ((zf || sf != of)) goto L_ff1dd2;
L_ff1d82: /* ff1d82: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* ff1d85: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* ff1d8a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff1d8c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff1d8e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* ff1d91: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1d94: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1d95: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1d98: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1d9a: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* ff1d9d: mov edi, eax */
  edi = eax;
/* ff1d9f: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ff1da2: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ff1da6: sar edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ff1da9: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* ff1dac: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1dad: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1db3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1db5: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff1db8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1dba: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff1dbd: mov edx, 0xfffffff8 */
  edx = 0xfffffff8u;
/* ff1dc2: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff1dc4: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff1dc8: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* ff1dca: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ff1dcd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff1dce: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1dd0: jl 0xff1d82 */
  if ((sf != of)) goto L_ff1d82;
L_ff1dd2: /* ff1dd2: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* ff1dd6: mov edi, dword ptr [ebx + 0x24] */
  edi = R32((uint32_t)(ebx + 0x24u));
/* ff1dd9: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* ff1ddc: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ff1ddf: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff1de1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff1de2: mov eax, edx */
  eax = edx;
/* ff1de4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1de6: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
/* ff1de9: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* ff1dec: jl 0xff1df5 */
  if ((sf != of)) goto L_ff1df5;
L_ff1dee: /* ff1dee: mov dword ptr [ebx + 0x1c], 0 */
  W32((uint32_t)(ebx + 0x1cu), 0x0u);
L_ff1df5: /* ff1df5: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* ff1df8: cmp ecx, dword ptr [ebx + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff1dfb: ja 0xff1d60 */
  if ((!cf && !zf)) goto L_ff1d60;
L_ff1e01: /* ff1e01: jmp 0xff1e30 */
  goto L_ff1e30;
L_ff1e03: /* ff1e03: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff1e07: fld qword ptr [ecx + 0xeb0] */
  { double v = F64((uint32_t)(ecx + 0xeb0u)); FPUSH(v); }
/* ff1e0d: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* ff1e10: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff1e14: fmul qword ptr [0x100a120] */
  ST0 = ST0 * (F64((uint32_t)(0x100a120u)));
/* ff1e1a: lea edi, [edx + eax*4] */
  edi = (uint32_t)(edx + eax*4);
/* ff1e1d: call 0x1009188 */
  esp -= 4; W32(esp, 0xff1e22u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ff1e22: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff1e24: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff1e28: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ff1e2a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* ff1e2c: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
L_ff1e30: /* ff1e30: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* ff1e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1e35: je 0xff26fa */
  if (zf) goto L_ff26fa;
L_ff1e3b: /* ff1e3b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff1e3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff1e41: je 0xff1e4d */
  if (zf) goto L_ff1e4d;
L_ff1e43: /* ff1e43: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* ff1e4b: jmp 0xff1e54 */
  goto L_ff1e54;
L_ff1e4d: /* ff1e4d: mov eax, dword ptr [ebx + 0x4c] */
  eax = R32((uint32_t)(ebx + 0x4cu));
/* ff1e50: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
L_ff1e54: /* ff1e54: cmp esi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff1e58: je 0xff20b9 */
  if (zf) goto L_ff20b9;
L_ff1e5e: /* ff1e5e: mov edi, edi */
  edi = edi;
L_ff1e60: /* ff1e60: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ff1e63: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* ff1e66: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff1e6a: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* ff1e6d: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* ff1e70: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff1e72: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ff1e76: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff1e7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* ff1e7c: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* ff1e84: jbe 0xff2001 */
  if ((cf | zf)) goto L_ff2001;
L_ff1e8a: /* ff1e8a: mov ecx, 0x40 */
  ecx = 0x40u;
/* ff1e8f: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff1e93: jmp 0xff1ea0 */
  goto L_ff1ea0;
L_ff1e95: /* ff1e95: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff1e99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff1ea0: /* ff1ea0: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* ff1ea3: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ff1ea6: mov edx, eax */
  edx = eax;
/* ff1ea8: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1eae: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff1eb0: jbe 0xff1eb4 */
  if ((cf | zf)) goto L_ff1eb4;
L_ff1eb2: /* ff1eb2: mov ecx, eax */
  ecx = eax;
L_ff1eb4: /* ff1eb4: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* ff1eb7: mov eax, ecx */
  eax = ecx;
/* ff1eb9: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff1ebc: and eax, 0x1ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* ff1ec1: mov edx, 0 */
  edx = 0x0u;
/* ff1ec6: jle 0xff1ed9 */
  if ((zf || sf != of)) goto L_ff1ed9;
L_ff1ec8: /* ff1ec8: mov edx, edi */
  edx = edi;
/* ff1eca: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff1ecd: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ff1ecf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff1ed1: mov edx, dword ptr [esi + edx*4 - 4] */
  edx = R32((uint32_t)(esi + edx*4 + 0xfffffffcu));
/* ff1ed5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_ff1ed9: /* ff1ed9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1edb: jge 0xff1eef */
  if ((sf == of)) goto L_ff1eef;
L_ff1edd: /* ff1edd: imul edi, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  edi = (uint32_t)r;
  }
/* ff1ee2: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff1ee6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff1ee8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff1eea: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ff1eed: jmp 0xff1ef1 */
  goto L_ff1ef1;
L_ff1eef: /* ff1eef: mov eax, edx */
  eax = edx;
L_ff1ef1: /* ff1ef1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1ef3: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff1ef6: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff1ef9: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* ff1efc: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff1f00: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff1f03: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1f05: lea edx, [ecx + ecx + 1] */
  edx = (uint32_t)(ecx + ecx + 0x1u);
/* ff1f09: imul edx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  edx = (uint32_t)r;
  }
/* ff1f0e: mov ecx, dword ptr [ebx + 0x30] */
  ecx = R32((uint32_t)(ebx + 0x30u));
/* ff1f11: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1f14: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff1f16: lea edi, [ecx + edx*4] */
  edi = (uint32_t)(ecx + edx*4);
/* ff1f19: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1f1a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1f1d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1f1f: mov ecx, eax */
  ecx = eax;
/* ff1f21: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff1f24: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* ff1f27: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1f28: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1f2e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1f30: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff1f33: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1f35: lea edx, [eax*8 + 8] */
  edx = (uint32_t)(eax*8 + 0x8u);
/* ff1f3c: add dword ptr [edi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* ff1f3e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff1f41: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* ff1f44: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff1f48: mov edx, ecx */
  edx = ecx;
/* ff1f4a: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1f50: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ff1f52: jb 0xff1f56 */
  if (cf) goto L_ff1f56;
L_ff1f54: /* ff1f54: mov ecx, eax */
  ecx = eax;
L_ff1f56: /* ff1f56: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* ff1f59: mov eax, ecx */
  eax = ecx;
/* ff1f5b: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff1f5e: and eax, 0x1ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* ff1f63: mov edx, 0 */
  edx = 0x0u;
/* ff1f68: jle 0xff1f7b */
  if ((zf || sf != of)) goto L_ff1f7b;
L_ff1f6a: /* ff1f6a: mov edx, edi */
  edx = edi;
/* ff1f6c: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff1f6f: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ff1f71: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff1f73: mov edx, dword ptr [esi + edx*4 - 4] */
  edx = R32((uint32_t)(esi + edx*4 + 0xfffffffcu));
/* ff1f77: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_ff1f7b: /* ff1f7b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff1f7d: jge 0xff1f91 */
  if ((sf == of)) goto L_ff1f91;
L_ff1f7f: /* ff1f7f: imul edi, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  edi = (uint32_t)r;
  }
/* ff1f84: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff1f88: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff1f8a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff1f8c: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ff1f8f: jmp 0xff1f93 */
  goto L_ff1f93;
L_ff1f91: /* ff1f91: mov eax, edx */
  eax = edx;
L_ff1f93: /* ff1f93: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff1f95: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff1f98: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff1f9b: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* ff1f9e: imul ecx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  ecx = (uint32_t)r;
  }
/* ff1fa3: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff1fa6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1fa8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff1fac: lea ecx, [edx + ecx*2] */
  ecx = (uint32_t)(edx + ecx*2);
/* ff1faf: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* ff1fb2: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* ff1fb5: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1fb8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1fb9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1fbc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1fbe: mov ecx, eax */
  ecx = eax;
/* ff1fc0: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff1fc3: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* ff1fc6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff1fc7: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff1fcd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1fcf: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff1fd3: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff1fd6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff1fd8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff1fda: lea eax, [eax*8 + 8] */
  eax = (uint32_t)(eax*8 + 0x8u);
/* ff1fe1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff1fe3: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff1fe7: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* ff1fe9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff1fed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff1fee: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff1ff1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ff1ff3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ff1ff7: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* ff1ffb: jb 0xff1e95 */
  if (cf) goto L_ff1e95;
L_ff2001: /* ff2001: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* ff2004: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* ff2007: mov dword ptr [edx + ecx*4], esi */
  W32((uint32_t)(edx + ecx*4), esi);
/* ff200a: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* ff200d: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* ff2010: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* ff2014: mov dword ptr [ecx + eax*4], 0 */
  W32((uint32_t)(ecx + eax*4), 0x0u);
/* ff201b: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* ff201e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2020: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ff2023: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* ff2026: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff2029: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* ff202c: mov eax, ecx */
  eax = ecx;
/* ff202e: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff2031: and eax, 0x1ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* ff2036: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* ff203a: mov edi, 0 */
  edi = 0x0u;
/* ff203f: jle 0xff2050 */
  if ((zf || sf != of)) goto L_ff2050;
L_ff2041: /* ff2041: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* ff2043: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff2046: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2048: mov edi, dword ptr [edi + edx*4 - 4] */
  edi = R32((uint32_t)(edi + edx*4 + 0xfffffffcu));
/* ff204c: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
L_ff2050: /* ff2050: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2052: jge 0xff2060 */
  if ((sf == of)) goto L_ff2060;
L_ff2054: /* ff2054: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff2057: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2059: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff205b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* ff205e: jmp 0xff2062 */
  goto L_ff2062;
L_ff2060: /* ff2060: mov eax, edi */
  eax = edi;
L_ff2062: /* ff2062: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff2064: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff2067: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff206a: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff206d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff206f: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2072: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2073: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff2076: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2078: mov ecx, eax */
  ecx = eax;
/* ff207a: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff207d: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* ff2080: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2081: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff2087: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2089: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* ff208c: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff208f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2091: lea ecx, [eax*8 + 8] */
  ecx = (uint32_t)(eax*8 + 0x8u);
/* ff2098: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ff209b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff209d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff209e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff20a0: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* ff20a3: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* ff20a7: jl 0xff20af */
  if ((sf != of)) goto L_ff20af;
L_ff20a9: /* ff20a9: xor esi, esi */
  esi = 0;
/* ff20ab: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_ff20af: /* ff20af: cmp esi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff20b3: jne 0xff1e60 */
  if (!zf) goto L_ff1e60;
L_ff20b9: /* ff20b9: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* ff20bc: cmp eax, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff20c0: jbe 0xff240a */
  if ((cf | zf)) goto L_ff240a;
L_ff20c6: /* ff20c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff20c8: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* ff20cc: fild dword ptr [esp + 0x50] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff20d0: jge 0xff20d8 */
  if ((sf == of)) goto L_ff20d8;
L_ff20d2: /* ff20d2: fadd qword ptr [0x100a100] */
  ST0 = ST0 + (F64((uint32_t)(0x100a100u)));
L_ff20d8: /* ff20d8: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff20dc: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* ff20e0: fild dword ptr [edx + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* ff20e3: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* ff20e7: xor edi, edi */
  edi = 0;
/* ff20e9: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff20ed: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ff20f1: fild dword ptr [ebx + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x40u)); FPUSH(v); }
/* ff20f4: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff20f8: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff20fc: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ff2100: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff2104: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff2108: fld qword ptr [esi + 0xe98] */
  { double v = F64((uint32_t)(esi + 0xe98u)); FPUSH(v); }
/* ff210e: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff2114: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff2116: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff2119: jne 0xff212c */
  if (!zf) goto L_ff212c;
L_ff211b: /* ff211b: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff211f: fcomp qword ptr [esi + 0xe98] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xe98u)));
  FPOP();
/* ff2125: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff2127: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff212a: je 0xff2158 */
  if (zf) goto L_ff2158;
L_ff212c: /* ff212c: fld qword ptr [esi + 0xe90] */
  { double v = F64((uint32_t)(esi + 0xe90u)); FPUSH(v); }
/* ff2132: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff2138: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff213a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff213d: jne 0xff240a */
  if (!zf) goto L_ff240a;
L_ff2143: /* ff2143: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff2147: fcomp qword ptr [esi + 0xe90] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xe90u)));
  FPOP();
/* ff214d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff214f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff2152: jp 0xff240a */
  if (pf) goto L_ff240a;
L_ff2158: /* ff2158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff215a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff215b: call 0xff12e0 */
  esp -= 4; W32(esp, 0xff2160u); SPILL(); f_ff12e0(); if (g_unwind) return; RELOAD();
/* ff2160: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff2164: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ff2168: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff216b: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff216f: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff2173: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ff2177: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff217b: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff217f: fld qword ptr [esi + 0xe98] */
  { double v = F64((uint32_t)(esi + 0xe98u)); FPUSH(v); }
/* ff2185: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* ff218b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff218d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff2190: jne 0xff220d */
  if (!zf) goto L_ff220d;
L_ff2192: /* ff2192: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff2196: fcomp qword ptr [esi + 0xe98] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xe98u)));
  FPOP();
/* ff219c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff219e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff21a1: jne 0xff220d */
  if (!zf) goto L_ff220d;
L_ff21a3: /* ff21a3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff21a7: mov eax, esi */
  eax = esi;
/* ff21a9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* ff21ab: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff21ae: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff21b1: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff21b5: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff21b9: jge 0xff228e */
  if ((sf == of)) goto L_ff228e;
L_ff21bf: /* ff21bf: nop  */
L_ff21c0: /* ff21c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff21c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff21c2: call 0xff12e0 */
  esp -= 4; W32(esp, 0xff21c7u); SPILL(); f_ff12e0(); if (g_unwind) return; RELOAD();
/* ff21c7: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff21cb: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ff21cf: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff21d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff21d6: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff21da: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff21de: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ff21e2: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff21e6: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff21ea: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff21ee: fcomp qword ptr [eax + 0xe98] */
  fpu_com(ST0, F64((uint32_t)(eax + 0xe98u)));
  FPOP();
/* ff21f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff21f6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff21f9: jnp 0xff228a */
  if (!pf) goto L_ff228a;
L_ff21ff: /* ff21ff: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff2203: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* ff2204: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2206: jg 0xff21c0 */
  if ((!zf && sf == of)) goto L_ff21c0;
L_ff2208: /* ff2208: jmp 0xff228a */
  goto L_ff228a;
L_ff220d: /* ff220d: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff2211: fcomp qword ptr [esi + 0xe90] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xe90u)));
  FPOP();
/* ff2217: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff221b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff221d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff2220: jp 0xff228e */
  if (pf) goto L_ff228e;
L_ff2222: /* ff2222: mov edi, 1 */
  edi = 0x1u;
/* ff2227: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2229: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff222d: jle 0xff2274 */
  if ((zf || sf != of)) goto L_ff2274;
L_ff222f: /* ff222f: nop  */
L_ff2230: /* ff2230: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2231: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2232: call 0xff12e0 */
  esp -= 4; W32(esp, 0xff2237u); SPILL(); f_ff12e0(); if (g_unwind) return; RELOAD();
/* ff2237: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff223b: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ff223f: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ff2243: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2246: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff224a: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff224e: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ff2252: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ff2256: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ff225a: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff225e: fcomp qword ptr [ecx + 0xe90] */
  fpu_com(ST0, F64((uint32_t)(ecx + 0xe90u)));
  FPOP();
/* ff2264: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff2266: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff2269: je 0xff2270 */
  if (zf) goto L_ff2270;
L_ff226b: /* ff226b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff226c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff226e: jl 0xff2230 */
  if ((sf != of)) goto L_ff2230;
L_ff2270: /* ff2270: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_ff2274: /* ff2274: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ff2278: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff227c: fcomp qword ptr [edx + 0xe98] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xe98u)));
  FPOP();
/* ff2282: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff2284: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff2287: jne 0xff228e */
  if (!zf) goto L_ff228e;
L_ff2289: /* ff2289: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_ff228a: /* ff228a: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_ff228e: /* ff228e: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* ff2291: mov eax, esi */
  eax = esi;
/* ff2293: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* ff2295: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff2299: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* ff229c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff229e: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff22a2: jl 0xff22c0 */
  if ((sf != of)) goto L_ff22c0;
L_ff22a4: /* ff22a4: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* ff22a7: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* ff22aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff22b0: /* ff22b0: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff22b2: jl 0xff22bc */
  if ((sf != of)) goto L_ff22bc;
L_ff22b4: /* ff22b4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff22b5: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff22b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff22ba: jge 0xff22b0 */
  if ((sf == of)) goto L_ff22b0;
L_ff22bc: /* ff22bc: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_ff22c0: /* ff22c0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff22c2: jle 0xff23cb */
  if ((zf || sf != of)) goto L_ff23cb;
L_ff22c8: /* ff22c8: mov edi, esi */
  edi = esi;
/* ff22ca: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
/* ff22cc: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ff22ce: mov dword ptr [esp + 0x50], edi */
  W32((uint32_t)(esp + 0x50u), edi);
/* ff22d2: lea edi, [edx + 1] */
  edi = (uint32_t)(edx + 0x1u);
/* ff22d5: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* ff22d8: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ff22db: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* ff22df: lea edi, [edx + edx + 1] */
  edi = (uint32_t)(edx + edx + 0x1u);
/* ff22e3: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* ff22e6: mov ecx, edx */
  ecx = edx;
/* ff22e8: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* ff22eb: mov eax, esi */
  eax = esi;
/* ff22ed: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff22f1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* ff22f3: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* ff22f7: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff22fa: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff22fd: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff22ff: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* ff2302: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* ff2306: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ff230a: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* ff230e: mov edi, edi */
  edi = edi;
L_ff2310: /* ff2310: mov esi, dword ptr [ebx + 0x38] */
  esi = R32((uint32_t)(ebx + 0x38u));
/* ff2313: mov esi, dword ptr [esi + edx*4] */
  esi = R32((uint32_t)(esi + edx*4));
/* ff2316: cmp esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff231a: jle 0xff232b */
  if ((zf || sf != of)) goto L_ff232b;
L_ff231c: /* ff231c: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ff2320: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff2322: mov esi, dword ptr [ebx + 0x30] */
  esi = R32((uint32_t)(ebx + 0x30u));
/* ff2325: mov esi, dword ptr [esi + edi*4 - 4] */
  esi = R32((uint32_t)(esi + edi*4 + 0xfffffffcu));
/* ff2329: jmp 0xff232d */
  goto L_ff232d;
L_ff232b: /* ff232b: xor esi, esi */
  esi = 0;
L_ff232d: /* ff232d: mov edi, dword ptr [ebx + 0x40] */
  edi = R32((uint32_t)(ebx + 0x40u));
/* ff2330: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff2332: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* ff2336: mov dword ptr [ebx + 0x40], edi */
  W32((uint32_t)(ebx + 0x40u), edi);
/* ff2339: cmp dword ptr [esp + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff233d: jle 0xff234c */
  if ((zf || sf != of)) goto L_ff234c;
L_ff233f: /* ff233f: mov esi, dword ptr [ebx + 0x30] */
  esi = R32((uint32_t)(ebx + 0x30u));
/* ff2342: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff2346: mov esi, dword ptr [edi + esi - 4] */
  esi = R32((uint32_t)(edi + esi + 0xfffffffcu));
/* ff234a: jmp 0xff234e */
  goto L_ff234e;
L_ff234c: /* ff234c: xor esi, esi */
  esi = 0;
L_ff234e: /* ff234e: mov edi, dword ptr [ebx + 0x40] */
  edi = R32((uint32_t)(ebx + 0x40u));
/* ff2351: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff2353: mov dword ptr [ebx + 0x40], esi */
  W32((uint32_t)(ebx + 0x40u), esi);
/* ff2356: cmp edx, dword ptr [ebx + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2359: jge 0xff2392 */
  if ((sf == of)) goto L_ff2392;
L_ff235b: /* ff235b: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff235f: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff2361: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2363: jle 0xff2392 */
  if ((zf || sf != of)) goto L_ff2392;
L_ff2365: /* ff2365: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* ff2369: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* ff236d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff2370: /* ff2370: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* ff2373: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* ff2376: add dword ptr [ecx + eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + eax), r);
  }
/* ff2379: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff237d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff2380: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff2383: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff2384: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* ff2388: jne 0xff2370 */
  if (!zf) goto L_ff2370;
L_ff238a: /* ff238a: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* ff238e: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
L_ff2392: /* ff2392: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* ff2396: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ff239a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff239c: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* ff23a0: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* ff23a4: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff23a6: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* ff23aa: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* ff23ae: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* ff23b2: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff23b3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff23b5: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff23b7: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff23b9: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* ff23bd: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* ff23c1: jg 0xff2310 */
  if ((!zf && sf == of)) goto L_ff2310;
L_ff23c7: /* ff23c7: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_ff23cb: /* ff23cb: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* ff23ce: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* ff23d1: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* ff23d4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff23d8: mov dword ptr [eax + edx*4 + 4], ecx */
  W32((uint32_t)(eax + edx*4 + 0x4u), ecx);
/* ff23dc: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* ff23df: mov dword ptr [eax + edx*4 + 4], edi */
  W32((uint32_t)(eax + edx*4 + 0x4u), edi);
/* ff23e3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff23e4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff23e5: xor eax, eax */
  eax = 0;
/* ff23e7: mov edi, edx */
  edi = edx;
/* ff23e9: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* ff23ec: lea ecx, [esi + esi] */
  ecx = (uint32_t)(esi + esi);
/* ff23ef: mov esi, dword ptr [ebx + 0x30] */
  esi = R32((uint32_t)(ebx + 0x30u));
/* ff23f2: mov dword ptr [ebx + 0x3c], edx */
  W32((uint32_t)(ebx + 0x3cu), edx);
/* ff23f5: lea edi, [esi + edi*8] */
  edi = (uint32_t)(esi + edi*8);
/* ff23f8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff23fa: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* ff23fd: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* ff2400: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* ff2403: mov dword ptr [eax + edx*4], 0xffffffff */
  W32((uint32_t)(eax + edx*4), 0xffffffffu);
L_ff240a: /* ff240a: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff240e: cmp dword ptr [ebx + 0x48], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x48u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff2411: jbe 0xff26f2 */
  if ((cf | zf)) goto L_ff26f2;
L_ff2417: /* ff2417: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* ff241a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff241d: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* ff2420: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff2424: mov ecx, eax */
  ecx = eax;
/* ff2426: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff2429: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* ff242c: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff2431: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff2435: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff2439: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff243b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff243d: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* ff2441: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* ff2449: jle 0xff25a8 */
  if ((zf || sf != of)) goto L_ff25a8;
L_ff244f: /* ff244f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff2452: mov dword ptr [esp + 0x28], 0x40 */
  W32((uint32_t)(esp + 0x28u), 0x40u);
/* ff245a: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* ff245e: mov edi, edi */
  edi = edi;
L_ff2460: /* ff2460: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff2464: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff2468: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff246a: jle 0xff246e */
  if ((zf || sf != of)) goto L_ff246e;
L_ff246c: /* ff246c: mov ecx, eax */
  ecx = eax;
L_ff246e: /* ff246e: mov esi, dword ptr [ebx + 0x44] */
  esi = R32((uint32_t)(ebx + 0x44u));
/* ff2471: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* ff2474: mov eax, ecx */
  eax = ecx;
/* ff2476: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff2479: and eax, 0x1ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* ff247e: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* ff2482: mov edx, 0 */
  edx = 0x0u;
/* ff2487: jle 0xff2496 */
  if ((zf || sf != of)) goto L_ff2496;
L_ff2489: /* ff2489: mov edx, edi */
  edx = edi;
/* ff248b: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff248e: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ff2490: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2492: mov edx, dword ptr [esi + edx*4 - 4] */
  edx = R32((uint32_t)(esi + edx*4 + 0xfffffffcu));
L_ff2496: /* ff2496: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2498: jge 0xff24a8 */
  if ((sf == of)) goto L_ff24a8;
L_ff249a: /* ff249a: imul edi, dword ptr [esp + 0x50] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x50u)));
  edi = (uint32_t)r;
  }
/* ff249f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff24a1: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff24a3: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ff24a6: jmp 0xff24aa */
  goto L_ff24aa;
L_ff24a8: /* ff24a8: mov eax, edx */
  eax = edx;
L_ff24aa: /* ff24aa: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff24ac: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff24af: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff24b2: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff24b5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff24b7: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff24ba: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff24bb: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff24be: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff24c0: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* ff24c3: mov ecx, eax */
  ecx = eax;
/* ff24c5: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff24c9: mov esi, dword ptr [eax + edx] */
  esi = R32((uint32_t)(eax + edx));
/* ff24cc: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* ff24cf: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff24d2: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* ff24d5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff24d6: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff24dc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff24de: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff24e1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff24e3: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff24e6: mov ecx, 0xfffffff8 */
  ecx = 0xfffffff8u;
/* ff24eb: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff24ed: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff24f1: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff24f3: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ff24f7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff24f9: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* ff24fb: jge 0xff24ff */
  if ((sf == of)) goto L_ff24ff;
L_ff24fd: /* ff24fd: mov ecx, eax */
  ecx = eax;
L_ff24ff: /* ff24ff: mov esi, dword ptr [ebx + 0x44] */
  esi = R32((uint32_t)(ebx + 0x44u));
/* ff2502: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* ff2505: mov eax, ecx */
  eax = ecx;
/* ff2507: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff250a: and eax, 0x1ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* ff250f: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* ff2513: mov edx, 0 */
  edx = 0x0u;
/* ff2518: jle 0xff2527 */
  if ((zf || sf != of)) goto L_ff2527;
L_ff251a: /* ff251a: mov edx, edi */
  edx = edi;
/* ff251c: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* ff251f: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ff2521: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2523: mov edx, dword ptr [esi + edx*4 - 4] */
  edx = R32((uint32_t)(esi + edx*4 + 0xfffffffcu));
L_ff2527: /* ff2527: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2529: jge 0xff2539 */
  if ((sf == of)) goto L_ff2539;
L_ff252b: /* ff252b: imul edi, dword ptr [esp + 0x50] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x50u)));
  edi = (uint32_t)r;
  }
/* ff2530: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff2532: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff2534: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* ff2537: jmp 0xff253b */
  goto L_ff253b;
L_ff2539: /* ff2539: mov eax, edx */
  eax = edx;
L_ff253b: /* ff253b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff253d: and ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff2540: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* ff2543: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* ff2547: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff254a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff254c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff254f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2550: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff2553: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2555: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* ff2558: mov ecx, eax */
  ecx = eax;
/* ff255a: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff255d: lea edi, [edx + esi*4] */
  edi = (uint32_t)(edx + esi*4);
/* ff2560: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* ff2563: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2564: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff256a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff256c: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ff2570: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff2573: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2575: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff2578: mov ecx, 0xfffffff8 */
  ecx = 0xfffffff8u;
/* ff257d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff257f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff2581: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2583: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* ff2587: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff2589: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff258d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff258e: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2591: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff2594: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2596: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* ff259a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* ff259e: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* ff25a2: jl 0xff2460 */
  if ((sf != of)) goto L_ff2460;
L_ff25a8: /* ff25a8: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* ff25ab: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* ff25ad: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff25b1: mov eax, ecx */
  eax = ecx;
/* ff25b3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff25b6: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff25b8: jle 0xff25c0 */
  if ((zf || sf != of)) goto L_ff25c0;
L_ff25ba: /* ff25ba: mov esi, eax */
  esi = eax;
/* ff25bc: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_ff25c0: /* ff25c0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff25c4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff25c6: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff25c9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff25cb: jge 0xff25d3 */
  if ((sf == of)) goto L_ff25d3;
L_ff25cd: /* ff25cd: mov esi, eax */
  esi = eax;
/* ff25cf: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_ff25d3: /* ff25d3: mov edi, dword ptr [ebx + 0x44] */
  edi = R32((uint32_t)(ebx + 0x44u));
/* ff25d6: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ff25d9: mov eax, esi */
  eax = esi;
/* ff25db: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff25de: and eax, 0x1ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* ff25e3: mov ecx, 0 */
  ecx = 0x0u;
/* ff25e8: jle 0xff25fb */
  if ((zf || sf != of)) goto L_ff25fb;
L_ff25ea: /* ff25ea: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ff25ec: mov ecx, edx */
  ecx = edx;
/* ff25ee: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* ff25f1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff25f3: mov ecx, dword ptr [esi + ecx*4 - 4] */
  ecx = R32((uint32_t)(esi + ecx*4 + 0xfffffffcu));
/* ff25f7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_ff25fb: /* ff25fb: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff25fd: jge 0xff260b */
  if ((sf == of)) goto L_ff260b;
L_ff25ff: /* ff25ff: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* ff2602: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2604: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff2606: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* ff2609: jmp 0xff260d */
  goto L_ff260d;
L_ff260b: /* ff260b: mov eax, ecx */
  eax = ecx;
L_ff260d: /* ff260d: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff260f: mov edx, esi */
  edx = esi;
/* ff2611: and edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff2614: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* ff2617: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff261a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff261c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff261f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2620: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff2623: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2625: mov ecx, eax */
  ecx = eax;
/* ff2627: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff262a: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* ff262d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff262e: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff2634: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2636: mov edx, dword ptr [ebx + 0x40] */
  edx = R32((uint32_t)(ebx + 0x40u));
/* ff2639: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff263c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff263e: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff2641: mov ecx, 0xfffffff8 */
  ecx = 0xfffffff8u;
/* ff2646: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff2648: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* ff264b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff264d: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* ff2650: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* ff2654: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff2656: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* ff2659: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff265c: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* ff265f: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* ff2662: and ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff2668: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ff266a: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* ff266d: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* ff2670: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* ff2673: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ff2676: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff2678: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* ff267a: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* ff267d: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* ff2680: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff2682: jne 0xff26ce */
  if (!zf) goto L_ff26ce;
L_ff2684: /* ff2684: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* ff2687: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff268b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* ff268e: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* ff2691: mov esi, dword ptr [0x100a044] */
  esi = R32((uint32_t)(0x100a044u));
/* ff2697: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff269a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff269b: lea ecx, [eax + ecx*8] */
  ecx = (uint32_t)(eax + ecx*8);
/* ff269e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff269f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff26a0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff26a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff26a2: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* ff26a5: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* ff26a8: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff26ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff26ac: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* ff26af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff26b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff26b1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff26b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff26b3: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* ff26b6: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* ff26b9: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff26bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff26bd: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* ff26c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff26c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff26c2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff26c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff26c4: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* ff26c7: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff26ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff26cb: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
L_ff26ce: /* ff26ce: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* ff26d1: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ff26d4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff26d5: mov eax, edx */
  eax = edx;
/* ff26d7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff26d9: mov dword ptr [ebx + 0x44], edx */
  W32((uint32_t)(ebx + 0x44u), edx);
/* ff26dc: jl 0xff26e5 */
  if ((sf != of)) goto L_ff26e5;
L_ff26de: /* ff26de: mov dword ptr [ebx + 0x44], 0 */
  W32((uint32_t)(ebx + 0x44u), 0x0u);
L_ff26e5: /* ff26e5: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* ff26e9: cmp dword ptr [ebx + 0x48], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x48u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff26ec: ja 0xff2417 */
  if ((!cf && !zf)) goto L_ff2417;
L_ff26f2: /* ff26f2: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* ff26f5: mov dword ptr [ebx + 0x54], eax */
  W32((uint32_t)(ebx + 0x54u), eax);
/* ff26f8: jmp 0xff2700 */
  goto L_ff2700;
L_ff26fa: /* ff26fa: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* ff26fd: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
L_ff2700: /* ff2700: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff2704: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2706: je 0xff270e */
  if (zf) goto L_ff270e;
L_ff2708: /* ff2708: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* ff270b: mov dword ptr [ebx + 0x54], edx */
  W32((uint32_t)(ebx + 0x54u), edx);
L_ff270e: /* ff270e: xor eax, eax */
  eax = 0;
/* ff2710: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2711: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2712: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff2713: mov esp, ebp */
  esp = ebp;
/* ff2715: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff2716: ret  */
  esp += 4; SPILL(); return;
L_ff2717: /* ff2717: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2718: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2719: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff271c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff271d: mov esp, ebp */
  esp = ebp;
/* ff271f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff2720: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2730(void) {
  LOAD_REGS();
L_ff2730: /* ff2730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff2734: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2735: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* ff2738: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* ff273b: add ebx, 0x30 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff273e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2742: jne 0xff2769 */
  if (!zf) goto L_ff2769;
L_ff2744: /* ff2744: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ff2747: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2749: je 0xff2771 */
  if (zf) goto L_ff2771;
L_ff274b: /* ff274b: mov esi, dword ptr [ebx + 0x7c] */
  esi = R32((uint32_t)(ebx + 0x7cu));
/* ff274e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff2752: mov ecx, 8 */
  ecx = 0x8u;
/* ff2757: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff2759: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff275a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff275b: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* ff2762: mov eax, 1 */
  eax = 0x1u;
/* ff2767: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff2768: ret  */
  esp += 4; SPILL(); return;
L_ff2769: /* ff2769: mov edi, dword ptr [ebx + 0x50] */
  edi = R32((uint32_t)(ebx + 0x50u));
/* ff276c: cmp edi, dword ptr [ebx + 0x54] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff276f: jne 0xff2777 */
  if (!zf) goto L_ff2777;
L_ff2771: /* ff2771: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2772: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2773: xor eax, eax */
  eax = 0;
/* ff2775: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff2776: ret  */
  esp += 4; SPILL(); return;
L_ff2777: /* ff2777: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ff277a: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* ff277d: mov esi, ebx */
  esi = ebx;
/* ff277f: call 0xff1100 */
  esp -= 4; W32(esp, 0xff2784u); SPILL(); f_ff1100(); if (g_unwind) return; RELOAD();
/* ff2784: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2787: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2788: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff278b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff278d: mov edx, dword ptr [ebx + 0x7c] */
  edx = R32((uint32_t)(ebx + 0x7cu));
/* ff2790: mov esi, edi */
  esi = edi;
/* ff2792: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* ff2795: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff2797: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ff279b: mov ecx, 8 */
  ecx = 0x8u;
/* ff27a0: mov edi, edx */
  edi = edx;
/* ff27a2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff27a4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* ff27a7: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff27aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff27ac: jge 0xff27b1 */
  if ((sf == of)) goto L_ff27b1;
L_ff27ae: /* ff27ae: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
L_ff27b1: /* ff27b1: mov edx, dword ptr [ebx + 0x50] */
  edx = R32((uint32_t)(ebx + 0x50u));
/* ff27b4: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ff27b7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff27b8: mov eax, edx */
  eax = edx;
/* ff27ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff27bc: mov dword ptr [ebx + 0x50], edx */
  W32((uint32_t)(ebx + 0x50u), edx);
/* ff27bf: jl 0xff27c8 */
  if ((sf != of)) goto L_ff27c8;
L_ff27c1: /* ff27c1: mov dword ptr [ebx + 0x50], 0 */
  W32((uint32_t)(ebx + 0x50u), 0x0u);
L_ff27c8: /* ff27c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff27c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff27ca: mov eax, 1 */
  eax = 0x1u;
/* ff27cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff27d0: ret  */
  esp += 4; SPILL(); return;
}

void f_ff27e0(void) {
  LOAD_REGS();
L_ff27e0: /* ff27e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff27e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ff27e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff27e6: xor eax, eax */
  eax = 0;
/* ff27e8: mov ecx, 0x1c */
  ecx = 0x1cu;
/* ff27ed: mov edi, esi */
  edi = esi;
/* ff27ef: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff27f1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ff27f5: xor ecx, ecx */
  ecx = 0;
/* ff27f7: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* ff27fa: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* ff27fd: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* ff2800: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff2802: je 0xff2838 */
  if (zf) goto L_ff2838;
L_ff2804: /* ff2804: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff2806: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff2808: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff280eu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff280e: mov edi, eax */
  edi = eax;
/* ff2810: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* ff2813: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff2816: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2817: call 0x1009148 */
  esp -= 4; W32(esp, 0xff281cu); SPILL(); f_1009148(); if (g_unwind) return; RELOAD();
/* ff281c: mov dword ptr [edi + 4], 0xc61c3c00 */
  W32((uint32_t)(edi + 0x4u), 0xc61c3c00u);
/* ff2823: call 0xff16f0 */
  esp -= 4; W32(esp, 0xff2828u); SPILL(); f_ff16f0(); if (g_unwind) return; RELOAD();
/* ff2828: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff282b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff282c: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff2832u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff2832: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2835: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
L_ff2838: /* ff2838: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2839: xor eax, eax */
  eax = 0;
/* ff283b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff283c: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2840(void) {
  LOAD_REGS();
L_ff2840: /* ff2840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2841: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ff2845: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* ff2848: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* ff284b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff284c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff2850: add edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff2853: and edi, 0xfffffff8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* ff2856: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2858: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff285a: jle 0xff289e */
  if ((zf || sf != of)) goto L_ff289e;
L_ff285c: /* ff285c: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* ff285f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2861: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2862: mov ebx, dword ptr [0x100a03c] */
  ebx = R32((uint32_t)(0x100a03cu));
/* ff2868: je 0xff288a */
  if (zf) goto L_ff288a;
L_ff286a: /* ff286a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* ff286c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff286eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff286e: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* ff2871: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* ff2874: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2877: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2879: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* ff287c: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* ff287f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* ff2882: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* ff2885: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* ff2887: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
L_ff288a: /* ff288a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff288b: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* ff288e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff2890u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2890: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2893: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* ff2896: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
/* ff289d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ff289e: /* ff289e: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* ff28a1: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* ff28a4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff28a6: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff28a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff28a9: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* ff28ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff28ad: ret  */
  esp += 4; SPILL(); return;
}

void f_ff28b0(void) {
  LOAD_REGS();
L_ff28b0: /* ff28b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff28b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff28b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff28b3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff28b7: mov esi, dword ptr [edi + 0x54] */
  esi = R32((uint32_t)(edi + 0x54u));
/* ff28ba: xor ebx, ebx */
  ebx = 0;
/* ff28bc: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff28be: je 0xff28e5 */
  if (zf) goto L_ff28e5;
L_ff28c0: /* ff28c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff28c1: mov ebp, dword ptr [0x100a040] */
  ebp = R32((uint32_t)(0x100a040u));
L_ff28c7: /* ff28c7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff28c9: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* ff28cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff28cd: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff28cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff28cf: xor ecx, ecx */
  ecx = 0;
/* ff28d1: mov edx, esi */
  edx = esi;
/* ff28d3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* ff28d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff28d6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* ff28d9: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff28dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff28db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff28de: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff28e0: mov esi, ebx */
  esi = ebx;
/* ff28e2: jne 0xff28c7 */
  if (!zf) goto L_ff28c7;
L_ff28e4: /* ff28e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ff28e5: /* ff28e5: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* ff28e8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff28ea: je 0xff2910 */
  if (zf) goto L_ff2910;
L_ff28ec: /* ff28ec: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* ff28ef: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* ff28f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff28f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff28f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff28f6: call dword ptr [0x100a048] */
  esp -= 4; W32(esp, 0xff28fcu); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* ff28fc: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* ff28ff: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* ff2902: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* ff2905: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2908: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff290a: mov dword ptr [edi + 0x4c], ecx */
  W32((uint32_t)(edi + 0x4cu), ecx);
/* ff290d: mov dword ptr [edi + 0x50], ebx */
  W32((uint32_t)(edi + 0x50u), ebx);
L_ff2910: /* ff2910: mov dword ptr [edi + 0x48], ebx */
  W32((uint32_t)(edi + 0x48u), ebx);
/* ff2913: mov dword ptr [edi + 0x54], ebx */
  W32((uint32_t)(edi + 0x54u), ebx);
/* ff2916: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2917: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2918: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff2919: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2920(void) {
  LOAD_REGS();
L_ff2920: /* ff2920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2921: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2922: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* ff2926: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* ff2929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff292b: je 0xff293e */
  if (zf) goto L_ff293e;
L_ff292d: /* ff292d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff2930: je 0xff293e */
  if (zf) goto L_ff293e;
L_ff2932: /* ff2932: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* ff2935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2936: call 0x100914e */
  esp -= 4; W32(esp, 0xff293bu); SPILL(); f_100914e(); if (g_unwind) return; RELOAD();
/* ff293b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff293e: /* ff293e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff293f: call 0xff28b0 */
  esp -= 4; W32(esp, 0xff2944u); SPILL(); f_ff28b0(); if (g_unwind) return; RELOAD();
/* ff2944: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* ff2947: mov esi, dword ptr [0x100a040] */
  esi = R32((uint32_t)(0x100a040u));
/* ff294d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2950: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2952: je 0xff295a */
  if (zf) goto L_ff295a;
L_ff2954: /* ff2954: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2955: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff2957u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2957: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff295a: /* ff295a: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* ff295d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff295f: je 0xff2977 */
  if (zf) goto L_ff2977;
L_ff2961: /* ff2961: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* ff2964: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2966: je 0xff296e */
  if (zf) goto L_ff296e;
L_ff2968: /* ff2968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2969: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff296bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff296b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff296e: /* ff296e: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* ff2971: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2972: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xff2974u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2974: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2977: /* ff2977: mov ecx, 0x1c */
  ecx = 0x1cu;
/* ff297c: xor eax, eax */
  eax = 0;
/* ff297e: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff2980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2982: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2990(void) {
  LOAD_REGS();
L_ff2990: /* ff2990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff2994: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff2997: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff2998: mov ebp, dword ptr [0x100a038] */
  ebp = R32((uint32_t)(0x100a038u));
/* ff299e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff299f: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* ff29a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff29a3: xor eax, eax */
  eax = 0;
/* ff29a5: push 0xb0 */
  { uint32_t v = 0xb0u; esp -= 4; W32(esp, v); }
/* ff29aa: mov ecx, 0x1c */
  ecx = 0x1cu;
/* ff29af: mov edi, ebx */
  edi = ebx;
/* ff29b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff29b3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff29b5: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff29b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff29b7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ff29bb: mov edi, eax */
  edi = eax;
/* ff29bd: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* ff29c0: mov dword ptr [ebx + 0x68], edi */
  W32((uint32_t)(ebx + 0x68u), edi);
/* ff29c3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff29c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff29c9: xor ecx, ecx */
  ecx = 0;
/* ff29cb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff29ce: jbe 0xff29d8 */
  if ((cf | zf)) goto L_ff29d8;
L_ff29d0: /* ff29d0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff29d2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff29d3: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff29d6: ja 0xff29d0 */
  if ((!cf && !zf)) goto L_ff29d0;
L_ff29d8: /* ff29d8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff29da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff29dc: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* ff29df: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff29e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff29e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff29e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff29e5: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* ff29e8: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff29eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff29ea: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* ff29ec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff29ee: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* ff29f1: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff29f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff29f3: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* ff29f6: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* ff29f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff29fa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* ff29fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff29feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff29fe: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* ff2a01: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* ff2a03: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff2a05: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* ff2a08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ff2a0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2a0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2a0c: call 0xffb820 */
  esp -= 4; W32(esp, 0xff2a11u); SPILL(); f_ffb820(); if (g_unwind) return; RELOAD();
/* ff2a11: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff2a14: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* ff2a17: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ff2a19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2a1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2a1b: call 0xffb820 */
  esp -= 4; W32(esp, 0xff2a20u); SPILL(); f_ffb820(); if (g_unwind) return; RELOAD();
/* ff2a20: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff2a22: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2a23: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff2a25: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff2a27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2a28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff2a2a: call 0x1008ea0 */
  esp -= 4; W32(esp, 0xff2a2fu); SPILL(); f_1008ea0(); if (g_unwind) return; RELOAD();
/* ff2a2f: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* ff2a32: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff2a35: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2a36: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff2a38: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff2a3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2a3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff2a3d: call 0x1008ea0 */
  esp -= 4; W32(esp, 0xff2a42u); SPILL(); f_1008ea0(); if (g_unwind) return; RELOAD();
/* ff2a42: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* ff2a45: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* ff2a49: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2a4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2a4e: mov eax, dword ptr [esi + 0xd24] */
  eax = R32((uint32_t)(esi + 0xd24u));
/* ff2a54: je 0xff2adb */
  if (zf) goto L_ff2adb;
L_ff2a5a: /* ff2a5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2a5c: jne 0xff2ad0 */
  if (!zf) goto L_ff2ad0;
L_ff2a5e: /* ff2a5e: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* ff2a61: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* ff2a63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2a64: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2a66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2a66: mov dword ptr [esi + 0xd24], eax */
  W32((uint32_t)(esi + 0xd24u), eax);
/* ff2a6c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff2a6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2a72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2a74: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* ff2a7c: jle 0xff2ad0 */
  if ((zf || sf != of)) goto L_ff2ad0;
L_ff2a7e: /* ff2a7e: lea eax, [esi + 0x924] */
  eax = (uint32_t)(esi + 0x924u);
/* ff2a84: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ff2a8c: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_ff2a90: /* ff2a90: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ff2a94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff2a96: mov eax, dword ptr [esi + 0xd24] */
  eax = R32((uint32_t)(esi + 0xd24u));
/* ff2a9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2a9d: add eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2aa2: call 0x1002a30 */
  esp -= 4; W32(esp, 0xff2aa7u); SPILL(); f_1002a30(); if (g_unwind) return; RELOAD();
/* ff2aa7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* ff2aab: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff2aaf: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff2ab3: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff2ab6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2ab9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff2aba: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* ff2abe: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ff2ac1: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2ac4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2ac6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff2aca: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff2ace: jl 0xff2a90 */
  if ((sf != of)) goto L_ff2a90;
L_ff2ad0: /* ff2ad0: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* ff2ad6: jmp 0xff2b5c */
  goto L_ff2b5c;
L_ff2adb: /* ff2adb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2add: jne 0xff2b5c */
  if (!zf) goto L_ff2b5c;
L_ff2ae3: /* ff2ae3: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ff2ae6: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* ff2ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2ae9: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2aebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2aeb: mov dword ptr [esi + 0xd24], eax */
  W32((uint32_t)(esi + 0xd24u), eax);
/* ff2af1: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff2af4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2af7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2af9: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* ff2b01: jle 0xff2b5c */
  if ((zf || sf != of)) goto L_ff2b5c;
L_ff2b03: /* ff2b03: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ff2b0b: lea ebp, [esi + 0x924] */
  ebp = (uint32_t)(esi + 0x924u);
L_ff2b11: /* ff2b11: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff2b14: mov eax, dword ptr [esi + 0xd24] */
  eax = R32((uint32_t)(esi + 0xd24u));
/* ff2b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2b1b: add eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2b20: call 0x1002ab0 */
  esp -= 4; W32(esp, 0xff2b25u); SPILL(); f_1002ab0(); if (g_unwind) return; RELOAD();
/* ff2b25: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff2b28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2b29: call 0x10029b0 */
  esp -= 4; W32(esp, 0xff2b2eu); SPILL(); f_10029b0(); if (g_unwind) return; RELOAD();
/* ff2b2e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff2b32: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff2b36: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2b39: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* ff2b40: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ff2b43: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff2b44: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2b47: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff2b4a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2b4c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff2b50: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* ff2b54: jl 0xff2b11 */
  if ((sf != of)) goto L_ff2b11;
L_ff2b56: /* ff2b56: mov ebp, dword ptr [0x100a038] */
  ebp = R32((uint32_t)(0x100a038u));
L_ff2b5c: /* ff2b5c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff2b5f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff2b63: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* ff2b66: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff2b69: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff2b6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2b6d: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff2b73u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff2b73: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff2b77: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* ff2b7a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ff2b7d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff2b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2b81: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff2b87u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff2b87: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ff2b8b: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* ff2b8e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ff2b91: xor eax, eax */
  eax = 0;
/* ff2b93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2b96: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2b98: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff2b9c: jle 0xff2bc7 */
  if ((zf || sf != of)) goto L_ff2bc7;
L_ff2b9e: /* ff2b9e: mov edi, edi */
  edi = edi;
L_ff2ba0: /* ff2ba0: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ff2ba3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff2ba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2ba6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2ba8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2ba8: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff2bac: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ff2baf: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* ff2bb2: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff2bb6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* ff2bb9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2bbc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff2bbd: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2bbf: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff2bc3: jl 0xff2ba0 */
  if ((sf != of)) goto L_ff2ba0;
L_ff2bc5: /* ff2bc5: xor eax, eax */
  eax = 0;
L_ff2bc7: /* ff2bc7: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* ff2bca: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* ff2bcd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff2bd0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff2bd1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff2bd3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff2bd5: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
/* ff2bd8: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* ff2bdb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff2bde: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff2be0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2be1: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2be3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2be3: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* ff2be6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff2be9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2bec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2bee: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* ff2bf6: jle 0xff2c53 */
  if ((zf || sf != of)) goto L_ff2c53;
L_ff2bf8: /* ff2bf8: mov eax, 0xffffffdc */
  eax = 0xffffffdcu;
/* ff2bfd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff2bff: lea ebp, [esi + 0x24] */
  ebp = (uint32_t)(esi + 0x24u);
/* ff2c02: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff2c06: jmp 0xff2c10 */
  goto L_ff2c10;
L_ff2c10: /* ff2c10: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff2c13: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* ff2c16: mov edx, dword ptr [esi + ecx*4 + 0x124] */
  edx = R32((uint32_t)(esi + ecx*4 + 0x124u));
/* ff2c1d: mov ecx, dword ptr [esi + ecx*4 + 0x224] */
  ecx = R32((uint32_t)(esi + ecx*4 + 0x224u));
/* ff2c24: mov edx, dword ptr [edx*4 + 0x100d108] */
  edx = R32((uint32_t)(edx*4 + 0x100d108u));
/* ff2c2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2c2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2c2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2c2e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xff2c31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2c31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff2c35: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* ff2c38: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2c3a: mov dword ptr [edx + ecx], eax */
  W32((uint32_t)(edx + ecx), eax);
/* ff2c3d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff2c41: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff2c44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2c47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff2c48: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff2c4b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2c4d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff2c51: jl 0xff2c10 */
  if ((sf != of)) goto L_ff2c10;
L_ff2c53: /* ff2c53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2c54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2c55: xor eax, eax */
  eax = 0;
/* ff2c57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff2c58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2c5b: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2c08(void) {
  LOAD_REGS();
L_ff2c08: /* ff2c08: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ff2c0f: nop  */
L_ff2c10: /* ff2c10: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff2c13: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* ff2c16: mov edx, dword ptr [esi + ecx*4 + 0x124] */
  edx = R32((uint32_t)(esi + ecx*4 + 0x124u));
/* ff2c1d: mov ecx, dword ptr [esi + ecx*4 + 0x224] */
  ecx = R32((uint32_t)(esi + ecx*4 + 0x224u));
/* ff2c24: mov edx, dword ptr [edx*4 + 0x100d108] */
  edx = R32((uint32_t)(edx*4 + 0x100d108u));
/* ff2c2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2c2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2c2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2c2e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xff2c31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2c31: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ff2c35: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* ff2c38: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff2c3a: mov dword ptr [edx + ecx], eax */
  W32((uint32_t)(edx + ecx), eax);
/* ff2c3d: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff2c41: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff2c44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2c47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff2c48: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff2c4b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2c4d: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff2c51: jl 0xff2c10 */
  if ((sf != of)) goto L_ff2c10;
L_ff2c53: /* ff2c53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2c54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2c55: xor eax, eax */
  eax = 0;
/* ff2c57: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff2c58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2c5b: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2c60(void) {
  LOAD_REGS();
L_ff2c60: /* ff2c60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2c61: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ff2c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2c66: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff2c6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2c6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff2c6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2c6e: call 0xff2990 */
  esp -= 4; W32(esp, 0xff2c73u); SPILL(); f_ff2990(); if (g_unwind) return; RELOAD();
/* ff2c73: mov edi, dword ptr [ebx + 0x68] */
  edi = R32((uint32_t)(ebx + 0x68u));
/* ff2c76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2c77: call 0xffc990 */
  esp -= 4; W32(esp, 0xff2c7cu); SPILL(); f_ffc990(); if (g_unwind) return; RELOAD();
/* ff2c7c: push 0xb4 */
  { uint32_t v = 0xb4u; esp -= 4; W32(esp, v); }
/* ff2c81: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff2c83: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* ff2c86: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff2c8cu); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff2c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2c8e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff2c90: call 0xff45b0 */
  esp -= 4; W32(esp, 0xff2c95u); SPILL(); f_ff45b0(); if (g_unwind) return; RELOAD();
/* ff2c95: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff2c98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2c99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2c9a: call 0xff13e0 */
  esp -= 4; W32(esp, 0xff2c9fu); SPILL(); f_ff13e0(); if (g_unwind) return; RELOAD();
/* ff2c9f: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2ca2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2ca3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2ca4: xor eax, eax */
  eax = 0;
/* ff2ca6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff2ca7: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2cb0(void) {
  LOAD_REGS();
L_ff2cb0: /* ff2cb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2cb1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ff2cb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2cb7: je 0xff2e6b */
  if (zf) goto L_ff2e6b;
L_ff2cbd: /* ff2cbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2cbe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff2cbf: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* ff2cc2: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2cc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2cc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2cc6: je 0xff2cd1 */
  if (zf) goto L_ff2cd1;
L_ff2cc8: /* ff2cc8: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* ff2ccb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff2ccf: jmp 0xff2cd9 */
  goto L_ff2cd9;
L_ff2cd1: /* ff2cd1: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_ff2cd9: /* ff2cd9: mov esi, dword ptr [eax + 0x68] */
  esi = R32((uint32_t)(eax + 0x68u));
/* ff2cdc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2cde: mov edi, dword ptr [0x100a040] */
  edi = R32((uint32_t)(0x100a040u));
/* ff2ce4: je 0xff2d74 */
  if (zf) goto L_ff2d74;
L_ff2cea: /* ff2cea: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff2ced: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2cef: je 0xff2cf7 */
  if (zf) goto L_ff2cf7;
L_ff2cf1: /* ff2cf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2cf2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2cf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2cf4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2cf7: /* ff2cf7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff2cfa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2cfc: je 0xff2d04 */
  if (zf) goto L_ff2d04;
L_ff2cfe: /* ff2cfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2cff: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2d01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2d01: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2d04: /* ff2d04: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff2d06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2d08: je 0xff2d18 */
  if (zf) goto L_ff2d18;
L_ff2d0a: /* ff2d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2d0b: call 0xff47c0 */
  esp -= 4; W32(esp, 0xff2d10u); SPILL(); f_ff47c0(); if (g_unwind) return; RELOAD();
/* ff2d10: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff2d12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2d13: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2d15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2d15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2d18: /* ff2d18: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff2d1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2d1d: je 0xff2d38 */
  if (zf) goto L_ff2d38;
L_ff2d1f: /* ff2d1f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* ff2d21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2d22: call 0xffc270 */
  esp -= 4; W32(esp, 0xff2d27u); SPILL(); f_ffc270(); if (g_unwind) return; RELOAD();
/* ff2d27: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* ff2d2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff2d2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2d2d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2d2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2d2f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff2d32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2d33: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2d35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2d38: /* ff2d38: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ff2d3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2d3d: je 0xff2d58 */
  if (zf) goto L_ff2d58;
L_ff2d3f: /* ff2d3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ff2d41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2d42: call 0xffc270 */
  esp -= 4; W32(esp, 0xff2d47u); SPILL(); f_ffc270(); if (g_unwind) return; RELOAD();
/* ff2d47: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* ff2d4a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff2d4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2d4d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2d4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2d4f: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* ff2d52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2d53: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2d55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2d55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2d58: /* ff2d58: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff2d5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2d5d: je 0xff2d68 */
  if (zf) goto L_ff2d68;
L_ff2d5f: /* ff2d5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2d60: call 0xffc9c0 */
  esp -= 4; W32(esp, 0xff2d65u); SPILL(); f_ffc9c0(); if (g_unwind) return; RELOAD();
/* ff2d65: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2d68: /* ff2d68: lea edx, [esi + 0x30] */
  edx = (uint32_t)(esi + 0x30u);
/* ff2d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2d6c: call 0xff1620 */
  esp -= 4; W32(esp, 0xff2d71u); SPILL(); f_ff1620(); if (g_unwind) return; RELOAD();
/* ff2d71: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2d74: /* ff2d74: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff2d78: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff2d7b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2d7d: je 0xff2dca */
  if (zf) goto L_ff2dca;
L_ff2d7f: /* ff2d7f: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ff2d82: xor ebx, ebx */
  ebx = 0;
/* ff2d84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2d86: jle 0xff2dac */
  if ((zf || sf != of)) goto L_ff2dac;
L_ff2d88: /* ff2d88: jmp 0xff2d90 */
  goto L_ff2d90;
L_ff2d90: /* ff2d90: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff2d94: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ff2d97: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* ff2d9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2d9c: je 0xff2da4 */
  if (zf) goto L_ff2da4;
L_ff2d9e: /* ff2d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2d9f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2da1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2da1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2da4: /* ff2da4: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ff2da7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff2da8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2daa: jl 0xff2d90 */
  if ((sf != of)) goto L_ff2d90;
L_ff2dac: /* ff2dac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff2db0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff2db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2db4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2db6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2db6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff2dba: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* ff2dbd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2dc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2dc2: je 0xff2dca */
  if (zf) goto L_ff2dca;
L_ff2dc4: /* ff2dc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2dc5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2dc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2dc7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2dca: /* ff2dca: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff2dce: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2dd0: je 0xff2e1c */
  if (zf) goto L_ff2e1c;
L_ff2dd2: /* ff2dd2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff2dd5: xor ebx, ebx */
  ebx = 0;
/* ff2dd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2dd9: jle 0xff2e1c */
  if ((zf || sf != of)) goto L_ff2e1c;
L_ff2ddb: /* ff2ddb: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff2dde: mov edi, edi */
  edi = edi;
L_ff2de0: /* ff2de0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2de2: je 0xff2e0d */
  if (zf) goto L_ff2e0d;
L_ff2de4: /* ff2de4: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff2de7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2de9: je 0xff2e0d */
  if (zf) goto L_ff2e0d;
L_ff2deb: /* ff2deb: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff2dee: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ff2df1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff2df5: mov edx, dword ptr [ecx + edx*4 + 0x124] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x124u));
/* ff2dfc: mov ecx, dword ptr [edx*4 + 0x100d108] */
  ecx = R32((uint32_t)(edx*4 + 0x100d108u));
/* ff2e03: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* ff2e06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2e07: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xff2e0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e0a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e0d: /* ff2e0d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff2e11: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff2e14: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff2e15: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff2e18: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2e1a: jl 0xff2de0 */
  if ((sf != of)) goto L_ff2de0;
L_ff2e1c: /* ff2e1c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e1e: je 0xff2e5a */
  if (zf) goto L_ff2e5a;
L_ff2e20: /* ff2e20: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff2e23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e25: je 0xff2e2d */
  if (zf) goto L_ff2e2d;
L_ff2e27: /* ff2e27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e28: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e2a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e2d: /* ff2e2d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff2e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e32: je 0xff2e3a */
  if (zf) goto L_ff2e3a;
L_ff2e34: /* ff2e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e35: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e37: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e3a: /* ff2e3a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* ff2e3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e3f: je 0xff2e47 */
  if (zf) goto L_ff2e47;
L_ff2e41: /* ff2e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e42: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e44: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e47: /* ff2e47: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff2e4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e4c: je 0xff2e54 */
  if (zf) goto L_ff2e54;
L_ff2e4e: /* ff2e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e4f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e51: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e54: /* ff2e54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2e55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e57: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e5a: /* ff2e5a: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ff2e5e: mov ecx, 0x1c */
  ecx = 0x1cu;
/* ff2e63: xor eax, eax */
  eax = 0;
/* ff2e65: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff2e67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2e68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2e69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff2e6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ff2e6b: /* ff2e6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff2e6c: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2d8a(void) {
  LOAD_REGS();
L_ff2d8a: /* ff2d8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff2d90: /* ff2d90: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff2d94: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ff2d97: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* ff2d9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2d9c: je 0xff2da4 */
  if (zf) goto L_ff2da4;
L_ff2d9e: /* ff2d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2d9f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2da1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2da1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2da4: /* ff2da4: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* ff2da7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff2da8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2daa: jl 0xff2d90 */
  if ((sf != of)) goto L_ff2d90;
L_ff2dac: /* ff2dac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff2db0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff2db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2db4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2db6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2db6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff2dba: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* ff2dbd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2dc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2dc2: je 0xff2dca */
  if (zf) goto L_ff2dca;
L_ff2dc4: /* ff2dc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2dc5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2dc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2dc7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2dca: /* ff2dca: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff2dce: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2dd0: je 0xff2e1c */
  if (zf) goto L_ff2e1c;
L_ff2dd2: /* ff2dd2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff2dd5: xor ebx, ebx */
  ebx = 0;
/* ff2dd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2dd9: jle 0xff2e1c */
  if ((zf || sf != of)) goto L_ff2e1c;
L_ff2ddb: /* ff2ddb: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff2dde: mov edi, edi */
  edi = edi;
L_ff2de0: /* ff2de0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2de2: je 0xff2e0d */
  if (zf) goto L_ff2e0d;
L_ff2de4: /* ff2de4: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff2de7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2de9: je 0xff2e0d */
  if (zf) goto L_ff2e0d;
L_ff2deb: /* ff2deb: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff2dee: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ff2df1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff2df5: mov edx, dword ptr [ecx + edx*4 + 0x124] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x124u));
/* ff2dfc: mov ecx, dword ptr [edx*4 + 0x100d108] */
  ecx = R32((uint32_t)(edx*4 + 0x100d108u));
/* ff2e03: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* ff2e06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2e07: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xff2e0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e0a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e0d: /* ff2e0d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff2e11: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff2e14: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff2e15: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* ff2e18: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2e1a: jl 0xff2de0 */
  if ((sf != of)) goto L_ff2de0;
L_ff2e1c: /* ff2e1c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e1e: je 0xff2e5a */
  if (zf) goto L_ff2e5a;
L_ff2e20: /* ff2e20: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff2e23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e25: je 0xff2e2d */
  if (zf) goto L_ff2e2d;
L_ff2e27: /* ff2e27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e28: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e2a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e2d: /* ff2e2d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff2e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e32: je 0xff2e3a */
  if (zf) goto L_ff2e3a;
L_ff2e34: /* ff2e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e35: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e37: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e3a: /* ff2e3a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* ff2e3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e3f: je 0xff2e47 */
  if (zf) goto L_ff2e47;
L_ff2e41: /* ff2e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e42: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e44: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e47: /* ff2e47: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff2e4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e4c: je 0xff2e54 */
  if (zf) goto L_ff2e54;
L_ff2e4e: /* ff2e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e4f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e51: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e54: /* ff2e54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2e55: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff2e57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e57: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e5a: /* ff2e5a: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ff2e5e: mov ecx, 0x1c */
  ecx = 0x1cu;
/* ff2e63: xor eax, eax */
  eax = 0;
/* ff2e65: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff2e67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2e68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2e69: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff2e6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff2e6b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff2e6c: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2e70(void) {
  LOAD_REGS();
L_ff2e70: /* ff2e70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2e71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff2e72: mov ebp, dword ptr [0x100a040] */
  ebp = R32((uint32_t)(0x100a040u));
/* ff2e78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff2e79: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ff2e7d: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* ff2e80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2e81: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* ff2e84: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* ff2e87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e89: je 0xff2e91 */
  if (zf) goto L_ff2e91;
L_ff2e8b: /* ff2e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2e8c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2e8e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2e91: /* ff2e91: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff2e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2e96: mov dword ptr [edi + 0x20], 0 */
  W32((uint32_t)(edi + 0x20u), 0x0u);
/* ff2e9d: je 0xff2ea5 */
  if (zf) goto L_ff2ea5;
L_ff2e9f: /* ff2e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2ea0: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2ea2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2ea2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2ea5: /* ff2ea5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* ff2ea8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff2eaa: mov dword ptr [edi + 0x24], 0 */
  W32((uint32_t)(edi + 0x24u), 0x0u);
/* ff2eb1: je 0xff2eb9 */
  if (zf) goto L_ff2eb9;
L_ff2eb3: /* ff2eb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2eb4: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2eb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2eb6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff2eb9: /* ff2eb9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff2ebd: mov dword ptr [edi + 0x28], 0 */
  W32((uint32_t)(edi + 0x28u), 0x0u);
/* ff2ec4: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff2ec7: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* ff2eca: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* ff2ecd: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2ecf: jl 0xff2f07 */
  if ((sf != of)) goto L_ff2f07;
L_ff2ed1: /* ff2ed1: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* ff2ed4: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* ff2ed7: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff2eda: xor edi, edi */
  edi = 0;
/* ff2edc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2ede: jle 0xff2f07 */
  if ((zf || sf != of)) goto L_ff2f07;
L_ff2ee0: /* ff2ee0: mov ebp, dword ptr [0x100a048] */
  ebp = R32((uint32_t)(0x100a048u));
L_ff2ee6: /* ff2ee6: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* ff2ee9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff2eec: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ff2eef: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff2ef2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2ef3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2ef4: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xff2ef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff2ef6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff2ef9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2efc: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* ff2eff: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff2f02: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff2f03: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2f05: jl 0xff2ee6 */
  if ((sf != of)) goto L_ff2ee6;
L_ff2f07: /* ff2f07: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ff2f0a: xor eax, eax */
  eax = 0;
/* ff2f0c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2f0e: jle 0xff2f2a */
  if ((zf || sf != of)) goto L_ff2f2a;
L_ff2f10: /* ff2f10: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff2f13: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ff2f16: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff2f19: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* ff2f1c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* ff2f1f: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* ff2f22: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ff2f25: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff2f26: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2f28: jl 0xff2f10 */
  if ((sf != of)) goto L_ff2f10;
L_ff2f2a: /* ff2f2a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff2f2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff2f2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff2f2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff2f30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff2f31: ret  */
  esp += 4; SPILL(); return;
}

void f_ff2f40(void) {
  LOAD_REGS();
L_ff2f40: /* ff2f40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff2f41: mov ebp, esp */
  ebp = esp;
/* ff2f43: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff2f46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff2f47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2f48: mov eax, 0x80 */
  eax = 0x80u;
/* ff2f4d: call 0x1009200 */
  esp -= 4; W32(esp, 0xff2f52u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff2f52: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* ff2f55: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* ff2f5c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff2f5f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff2f62: mov dword ptr [ebp - 8], esp */
  W32((uint32_t)(ebp + 0xfffffff8u), esp);
/* ff2f65: call 0x1009200 */
  esp -= 4; W32(esp, 0xff2f6au); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff2f6a: sub ebx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff2f6d: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2f70: mov edi, esp */
  edi = esp;
/* ff2f72: mov dword ptr [esi + 0x1c], 1 */
  W32((uint32_t)(esi + 0x1cu), 0x1u);
/* ff2f79: jle 0xff3038 */
  if ((zf || sf != of)) goto L_ff3038;
L_ff2f7f: /* ff2f7f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff2f82: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff2f85: xor ebx, ebx */
  ebx = 0;
/* ff2f87: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2f89: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* ff2f8c: jle 0xff3038 */
  if ((zf || sf != of)) goto L_ff3038;
L_ff2f92: /* ff2f92: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_ff2f95: /* ff2f95: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff2f98: xor eax, eax */
  eax = 0;
/* ff2f9a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2f9c: jle 0xff2fba */
  if ((zf || sf != of)) goto L_ff2fba;
L_ff2f9e: /* ff2f9e: mov edi, edi */
  edi = edi;
L_ff2fa0: /* ff2fa0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff2fa3: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff2fa6: mov edx, dword ptr [edx + ebx] */
  edx = R32((uint32_t)(edx + ebx));
/* ff2fa9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff2fab: mov ecx, dword ptr [edx + ecx*4 - 4] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xfffffffcu));
/* ff2faf: mov dword ptr [edi + eax*4], ecx */
  W32((uint32_t)(edi + eax*4), ecx);
/* ff2fb2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff2fb5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff2fb6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff2fb8: jl 0xff2fa0 */
  if ((sf != of)) goto L_ff2fa0;
L_ff2fba: /* ff2fba: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* ff2fbd: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ff2fc0: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff2fc3: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff2fc5: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff2fc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2fc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2fc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff2fca: call 0xff9550 */
  esp -= 4; W32(esp, 0xff2fcfu); SPILL(); f_ff9550(); if (g_unwind) return; RELOAD();
/* ff2fcf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ff2fd1: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* ff2fd4: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff2fd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2fd8: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff2fda: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* ff2fdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff2fde: lea edx, [edi + eax*4 - 0x80] */
  edx = (uint32_t)(edi + eax*4 + 0xffffff80u);
/* ff2fe2: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff2fe5: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff2fe7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff2fe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff2fe9: call 0xff98c0 */
  esp -= 4; W32(esp, 0xff2feeu); SPILL(); f_ff98c0(); if (g_unwind) return; RELOAD();
/* ff2fee: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff2ff1: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff2ff4: xor eax, eax */
  eax = 0;
/* ff2ff6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff2ff8: jle 0xff301d */
  if ((zf || sf != of)) goto L_ff301d;
L_ff2ffa: /* ff2ffa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff3000: /* ff3000: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3003: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff3006: mov edx, dword ptr [edx + ebx] */
  edx = R32((uint32_t)(edx + ebx));
/* ff3009: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* ff300c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff300e: mov dword ptr [edx + ecx*4 - 4], ebx */
  W32((uint32_t)(edx + ecx*4 + 0xfffffffcu), ebx);
/* ff3012: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff3015: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff3018: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3019: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff301b: jl 0xff3000 */
  if ((sf != of)) goto L_ff3000;
L_ff301d: /* ff301d: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff3020: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff3023: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ff3026: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3027: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff302a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff302c: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* ff302f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ff3032: jl 0xff2f95 */
  if ((sf != of)) goto L_ff2f95;
L_ff3038: /* ff3038: lea esp, [ebp - 0x14] */
  esp = (uint32_t)(ebp + 0xffffffecu);
/* ff303b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff303c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff303d: mov esp, ebp */
  esp = ebp;
/* ff303f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3040: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3050(void) {
  LOAD_REGS();
L_ff3050: /* ff3050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff3051: mov ebp, esp */
  ebp = esp;
/* ff3053: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3054: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3055: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3056: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ff3059: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff305c: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* ff305f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* ff3062: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff3065: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3067: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3068: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ff306b: jg 0xff3151 */
  if ((!zf && sf == of)) goto L_ff3151;
L_ff3071: /* ff3071: mov eax, 0x80 */
  eax = 0x80u;
/* ff3076: call 0x1009200 */
  esp -= 4; W32(esp, 0xff307bu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff307b: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* ff307e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3080: mov edi, esp */
  edi = esp;
/* ff3082: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* ff3085: jne 0xff308c */
  if (!zf) goto L_ff308c;
L_ff3087: /* ff3087: call 0xff2f40 */
  esp -= 4; W32(esp, 0xff308cu); SPILL(); f_ff2f40(); if (g_unwind) return; RELOAD();
L_ff308c: /* ff308c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff308f: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff3091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3092: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3093: call 0xff2e70 */
  esp -= 4; W32(esp, 0xff3098u); SPILL(); f_ff2e70(); if (g_unwind) return; RELOAD();
/* ff3098: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff309b: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* ff309e: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ff30a1: lea edx, [eax + ecx*2] */
  edx = (uint32_t)(eax + ecx*2);
/* ff30a4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff30a7: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* ff30aa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff30ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff30b0: xor ebx, ebx */
  ebx = 0;
/* ff30b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff30b4: jle 0xff3185 */
  if ((zf || sf != of)) goto L_ff3185;
L_ff30ba: /* ff30ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff30c0: /* ff30c0: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* ff30c3: cmp edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff30c6: jle 0xff3112 */
  if ((zf || sf != of)) goto L_ff3112;
L_ff30c8: /* ff30c8: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff30cb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* ff30ce: mov eax, edx */
  eax = edx;
/* ff30d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff30d2: jle 0xff30d6 */
  if ((zf || sf != of)) goto L_ff30d6;
L_ff30d4: /* ff30d4: mov eax, ecx */
  eax = ecx;
L_ff30d6: /* ff30d6: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff30d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff30d9: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff30db: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff30de: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* ff30e1: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* ff30e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff30e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff30e6: call 0xff9550 */
  esp -= 4; W32(esp, 0xff30ebu); SPILL(); f_ff9550(); if (g_unwind) return; RELOAD();
/* ff30eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* ff30ed: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff30f0: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* ff30f3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff30f6: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* ff30f9: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff30fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff30fc: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* ff30ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3100: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3102: lea eax, [ecx + eax*4 - 0x80] */
  eax = (uint32_t)(ecx + eax*4 + 0xffffff80u);
/* ff3106: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3107: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3108: call 0xff98c0 */
  esp -= 4; W32(esp, 0xff310du); SPILL(); f_ff98c0(); if (g_unwind) return; RELOAD();
/* ff310d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3110: jmp 0xff3136 */
  goto L_ff3136;
L_ff3112: /* ff3112: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff3115: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* ff3118: mov edi, dword ptr [edi + ebx*4] */
  edi = R32((uint32_t)(edi + ebx*4));
/* ff311b: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff311d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff3120: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* ff3123: mov edx, ecx */
  edx = ecx;
/* ff3125: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff3128: xor eax, eax */
  eax = 0;
/* ff312a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff312c: mov ecx, edx */
  ecx = edx;
/* ff312e: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff3131: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* ff3133: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_ff3136: /* ff3136: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ff3139: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff313c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff313d: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff313f: jl 0xff30c0 */
  if ((sf != of)) goto L_ff30c0;
L_ff3145: /* ff3145: xor eax, eax */
  eax = 0;
/* ff3147: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff314a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff314b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff314c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff314d: mov esp, ebp */
  esp = ebp;
/* ff314f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3150: ret  */
  esp += 4; SPILL(); return;
L_ff3151: /* ff3151: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* ff3154: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3156: cmp eax, dword ptr [esi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3159: jle 0xff316a */
  if ((zf || sf != of)) goto L_ff316a;
L_ff315b: /* ff315b: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* ff3160: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff3163: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3164: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3165: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3166: mov esp, ebp */
  esp = ebp;
/* ff3168: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3169: ret  */
  esp += 4; SPILL(); return;
L_ff316a: /* ff316a: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* ff316d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff316f: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* ff3172: jne 0xff3185 */
  if (!zf) goto L_ff3185;
L_ff3174: /* ff3174: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* ff3177: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ff317a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff317c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff317e: jle 0xff3185 */
  if ((zf || sf != of)) goto L_ff3185;
L_ff3180: /* ff3180: call 0xff2f40 */
  esp -= 4; W32(esp, 0xff3185u); SPILL(); f_ff2f40(); if (g_unwind) return; RELOAD();
L_ff3185: /* ff3185: xor eax, eax */
  eax = 0;
/* ff3187: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* ff318a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff318b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff318c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff318d: mov esp, ebp */
  esp = ebp;
/* ff318f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3190: ret  */
  esp += 4; SPILL(); return;
}

void f_ff31a0(void) {
  LOAD_REGS();
L_ff31a0: /* ff31a0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff31a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff31a4: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* ff31a8: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff31ab: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* ff31ae: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff31b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff31b3: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* ff31b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff31b8: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* ff31bb: mov eax, dword ptr [ebx + 0x68] */
  eax = R32((uint32_t)(ebx + 0x68u));
/* ff31be: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff31c2: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* ff31c5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff31c9: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
/* ff31cc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff31cd: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff31cf: mov edx, eax */
  edx = eax;
/* ff31d1: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* ff31d4: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff31d6: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff31d8: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ff31dc: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* ff31df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff31e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff31e2: mov edi, dword ptr [ebp + 0x68] */
  edi = R32((uint32_t)(ebp + 0x68u));
/* ff31e5: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* ff31e9: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* ff31ed: je 0xff3257 */
  if (zf) goto L_ff3257;
L_ff31ef: /* ff31ef: cmp dword ptr [ebx + 0x20], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x20u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff31f3: je 0xff3257 */
  if (zf) goto L_ff3257;
L_ff31f5: /* ff31f5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff31f7: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff31fa: jge 0xff320f */
  if ((sf == of)) goto L_ff320f;
L_ff31fc: /* ff31fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff31fd: call 0xff4dc0 */
  esp -= 4; W32(esp, 0xff3202u); SPILL(); f_ff4dc0(); if (g_unwind) return; RELOAD();
/* ff3202: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3205: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3208: je 0xff3257 */
  if (zf) goto L_ff3257;
L_ff320a: /* ff320a: mov dword ptr [ebx + 0x2c], eax */
  W32((uint32_t)(ebx + 0x2cu), eax);
/* ff320d: jmp 0xff3216 */
  goto L_ff3216;
L_ff320f: /* ff320f: mov dword ptr [ebx + 0x2c], 0 */
  W32((uint32_t)(ebx + 0x2cu), 0x0u);
L_ff3216: /* ff3216: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* ff3219: mov edx, dword ptr [esi + ecx*4] */
  edx = R32((uint32_t)(esi + ecx*4));
/* ff321c: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* ff321f: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* ff3222: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* ff3226: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3227: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff322a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff322c: mov ecx, eax */
  ecx = eax;
/* ff322e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff3232: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3233: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff3236: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3238: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff323b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff323e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff3240: add ecx, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff3243: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff3247: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3248: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff324a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff324c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff324e: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ff3252: cmp dword ptr [ebx + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3255: jge 0xff3261 */
  if ((sf == of)) goto L_ff3261;
L_ff3257: /* ff3257: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3258: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3259: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff325a: xor eax, eax */
  eax = 0;
/* ff325c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff325d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3260: ret  */
  esp += 4; SPILL(); return;
L_ff3261: /* ff3261: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff3262: call 0xff28b0 */
  esp -= 4; W32(esp, 0xff3267u); SPILL(); f_ff28b0(); if (g_unwind) return; RELOAD();
/* ff3267: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* ff326a: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* ff326d: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* ff3270: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* ff3273: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* ff3276: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* ff3279: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* ff327c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff327f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3281: je 0xff32a3 */
  if (zf) goto L_ff32a3;
L_ff3283: /* ff3283: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* ff3286: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3288: je 0xff329a */
  if (zf) goto L_ff329a;
L_ff328a: /* ff328a: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* ff328d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff328f: je 0xff329a */
  if (zf) goto L_ff329a;
L_ff3291: /* ff3291: mov dword ptr [edi + 8], 1 */
  W32((uint32_t)(edi + 0x8u), 0x1u);
/* ff3298: jmp 0xff32b4 */
  goto L_ff32b4;
L_ff329a: /* ff329a: mov dword ptr [edi + 8], 0 */
  W32((uint32_t)(edi + 0x8u), 0x0u);
/* ff32a1: jmp 0xff32b4 */
  goto L_ff32b4;
L_ff32a3: /* ff32a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff32a4: call 0xff4fe0 */
  esp -= 4; W32(esp, 0xff32a9u); SPILL(); f_ff4fe0(); if (g_unwind) return; RELOAD();
/* ff32a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff32ac: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* ff32ae: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* ff32b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff32b1: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_ff32b4: /* ff32b4: mov dword ptr [ebp + 0x40], ebx */
  W32((uint32_t)(ebp + 0x40u), ebx);
/* ff32b7: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* ff32ba: mov dword ptr [ebp + 0x38], ecx */
  W32((uint32_t)(ebp + 0x38u), ecx);
/* ff32bd: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* ff32c0: mov dword ptr [ebp + 0x3c], edx */
  W32((uint32_t)(ebp + 0x3cu), edx);
/* ff32c3: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* ff32c6: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* ff32c9: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* ff32cc: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* ff32cf: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* ff32d2: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* ff32d5: mov dword ptr [ebx + 0x40], ecx */
  W32((uint32_t)(ebx + 0x40u), ecx);
/* ff32d8: mov dword ptr [ebp + 0x30], eax */
  W32((uint32_t)(ebp + 0x30u), eax);
/* ff32db: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* ff32de: mov dword ptr [ebp + 0x34], ecx */
  W32((uint32_t)(ebp + 0x34u), ecx);
/* ff32e1: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* ff32e4: mov eax, dword ptr [esi + edx*4] */
  eax = R32((uint32_t)(esi + edx*4));
/* ff32e7: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* ff32eb: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* ff32ee: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff32f1: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* ff32f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff32f5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff32f8: jne 0xff32ff */
  if (!zf) goto L_ff32ff;
L_ff32fa: /* ff32fa: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* ff32fd: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_ff32ff: /* ff32ff: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff3301: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3302: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3303: call 0x10004c0 */
  esp -= 4; W32(esp, 0xff3308u); SPILL(); f_10004c0(); if (g_unwind) return; RELOAD();
/* ff3308: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* ff330c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff3310: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff3312: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* ff3316: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* ff3319: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff331c: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff331f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff3321: call 0xff2840 */
  esp -= 4; W32(esp, 0xff3326u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* ff3326: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* ff3329: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff332c: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff332f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff3331: call 0xff2840 */
  esp -= 4; W32(esp, 0xff3336u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* ff3336: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* ff333a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* ff333c: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ff333f: xor esi, esi */
  esi = 0;
/* ff3341: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3344: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3346: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* ff334a: jle 0xff33c4 */
  if ((zf || sf != of)) goto L_ff33c4;
L_ff334c: /* ff334c: jmp 0xff3356 */
  goto L_ff3356;
L_ff334e: /* ff334e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff3352: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
L_ff3356: /* ff3356: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* ff3359: add eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff335d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff3360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3361: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff3362: call 0xff2840 */
  esp -= 4; W32(esp, 0xff3367u); SPILL(); f_ff2840(); if (g_unwind) return; RELOAD();
/* ff3367: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff3369: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff336d: mov dword ptr [ecx + esi*4], eax */
  W32((uint32_t)(ecx + esi*4), eax);
/* ff3370: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* ff3373: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff3375: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff3377: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* ff337a: mov esi, dword ptr [edx + esi*4] */
  esi = R32((uint32_t)(edx + esi*4));
/* ff337d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* ff3381: mov edi, dword ptr [eax + edx*4] */
  edi = R32((uint32_t)(eax + edx*4));
/* ff3384: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff3387: mov eax, ecx */
  eax = ecx;
/* ff3389: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff338c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ff338e: mov ecx, eax */
  ecx = eax;
/* ff3390: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff3394: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff3397: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ff3399: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff339d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ff339f: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* ff33a2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff33a6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff33a9: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff33ab: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* ff33ae: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* ff33b1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* ff33b5: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* ff33b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff33bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff33bc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff33be: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff33c2: jl 0xff334e */
  if ((sf != of)) goto L_ff334e;
L_ff33c4: /* ff33c4: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* ff33c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff33c9: je 0xff33e7 */
  if (zf) goto L_ff33e7;
L_ff33cb: /* ff33cb: cmp dword ptr [ebx + 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x30u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff33ce: jl 0xff33e7 */
  if ((sf != of)) goto L_ff33e7;
L_ff33d0: /* ff33d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff33d1: mov dword ptr [ebx + 0x20], 0xffffffff */
  W32((uint32_t)(ebx + 0x20u), 0xffffffffu);
/* ff33d8: mov eax, 1 */
  eax = 0x1u;
/* ff33dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff33de: mov dword ptr [ebp + 0x2c], eax */
  W32((uint32_t)(ebp + 0x2cu), eax);
/* ff33e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff33e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff33e3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff33e6: ret  */
  esp += 4; SPILL(); return;
L_ff33e7: /* ff33e7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* ff33eb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ff33ee: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ff33f2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff33f3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff33f5: mov edx, dword ptr [ecx + 0xe70] */
  edx = R32((uint32_t)(ecx + 0xe70u));
/* ff33fb: mov esi, eax */
  esi = eax;
/* ff33fd: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* ff33ff: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff3401: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff3403: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3405: jle 0xff348f */
  if ((zf || sf != of)) goto L_ff348f;
L_ff340b: /* ff340b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff340f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* ff3411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3412: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3413: call 0xff50a0 */
  esp -= 4; W32(esp, 0xff3418u); SPILL(); f_ff50a0(); if (g_unwind) return; RELOAD();
/* ff3418: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* ff341b: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* ff341f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff3421: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* ff3424: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ff3427: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff342a: xor ebp, ebp */
  ebp = 0;
/* ff342c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff342e: jle 0xff3457 */
  if ((zf || sf != of)) goto L_ff3457;
L_ff3430: /* ff3430: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ff3433: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* ff3436: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* ff3439: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff343c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff343d: lea edx, [eax + edi*4] */
  edx = (uint32_t)(eax + edi*4);
/* ff3440: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3442: call dword ptr [0x100a044] */
  esp -= 4; W32(esp, 0xff3448u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* ff3448: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* ff344c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff344f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3452: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff3453: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3455: jl 0xff3430 */
  if ((sf != of)) goto L_ff3430;
L_ff3457: /* ff3457: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* ff345a: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* ff345d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff345f: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* ff3462: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* ff3465: mov ecx, dword ptr [ebx + 0x38] */
  ecx = R32((uint32_t)(ebx + 0x38u));
/* ff3468: mov dword ptr [ebx + 0x28], edx */
  W32((uint32_t)(ebx + 0x28u), edx);
/* ff346b: mov dword ptr [ebx + 0x30], esi */
  W32((uint32_t)(ebx + 0x30u), esi);
/* ff346e: je 0xff347f */
  if (zf) goto L_ff347f;
L_ff3470: /* ff3470: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3472: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3474: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* ff3477: jl 0xff347f */
  if ((sf != of)) goto L_ff347f;
L_ff3479: /* ff3479: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff347b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff347d: jmp 0xff3481 */
  goto L_ff3481;
L_ff347f: /* ff347f: mov eax, edi */
  eax = edi;
L_ff3481: /* ff3481: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3482: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* ff3484: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* ff3487: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* ff3489: mov dword ptr [ebx + 0x38], ecx */
  W32((uint32_t)(ebx + 0x38u), ecx);
/* ff348c: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
L_ff348f: /* ff348f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3490: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3491: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3492: mov eax, 1 */
  eax = 0x1u;
/* ff3497: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3498: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff349b: ret  */
  esp += 4; SPILL(); return;
}

void f_ff34a0(void) {
  LOAD_REGS();
L_ff34a0: /* ff34a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ff34a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff34a5: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ff34a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff34ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff34ac: call 0xff2990 */
  esp -= 4; W32(esp, 0xff34b1u); SPILL(); f_ff2990(); if (g_unwind) return; RELOAD();
/* ff34b1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff34b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff34b7: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* ff34ba: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* ff34bd: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* ff34c0: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* ff34c3: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* ff34c6: xor eax, eax */
  eax = 0;
/* ff34c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff34c9: ret  */
  esp += 4; SPILL(); return;
}

void f_ff34d0(void) {
  LOAD_REGS();
L_ff34d0: /* ff34d0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff34d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff34d4: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* ff34d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff34d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff34da: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* ff34de: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff34e1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff34e4: xor ebp, ebp */
  ebp = 0;
/* ff34e6: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff34e8: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff34ec: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ff34f0: jne 0xff34fe */
  if (!zf) goto L_ff34fe;
L_ff34f2: /* ff34f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff34f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff34f4: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* ff34f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff34fa: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff34fd: ret  */
  esp += 4; SPILL(); return;
L_ff34fe: /* ff34fe: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff3501: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* ff3504: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3505: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* ff3508: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff350a: jle 0xff351d */
  if ((zf || sf != of)) goto L_ff351d;
L_ff350c: /* ff350c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff350e: je 0xff351d */
  if (zf) goto L_ff351d;
L_ff3510: /* ff3510: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3511: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3512: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3513: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* ff3518: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3519: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff351c: ret  */
  esp += 4; SPILL(); return;
L_ff351d: /* ff351d: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff3520: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* ff3523: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* ff3526: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* ff3529: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* ff352c: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* ff352f: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* ff3532: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* ff3535: adc edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* ff3537: cmp eax, dword ptr [ebx + 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff353a: jne 0xff3541 */
  if (!zf) goto L_ff3541;
L_ff353c: /* ff353c: cmp edx, dword ptr [ebx + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff353f: je 0xff3547 */
  if (zf) goto L_ff3547;
L_ff3541: /* ff3541: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* ff3544: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
L_ff3547: /* ff3547: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* ff354a: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* ff354d: mov edx, dword ptr [ebx + 0x3c] */
  edx = R32((uint32_t)(ebx + 0x3cu));
/* ff3550: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* ff3553: cmp dword ptr [ebx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3555: je 0xff39d2 */
  if (zf) goto L_ff39d2;
L_ff355b: /* ff355b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff355e: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* ff3561: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3562: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3564: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff3566: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff356a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ff356c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff356d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff356f: mov edi, eax */
  edi = eax;
/* ff3571: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ff3574: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3575: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3577: mov ecx, eax */
  ecx = eax;
/* ff3579: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* ff357c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff357d: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff357f: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* ff3581: add dword ptr [esi + 0x48], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(esi + 0x48u), r);
  }
/* ff3584: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* ff3587: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* ff358b: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* ff358d: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* ff3590: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* ff3593: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3594: add dword ptr [esi + 0x50], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x50u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(esi + 0x50u), r);
  }
/* ff3597: adc dword ptr [esi + 0x54], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x54u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(esi + 0x54u), r);
  }
/* ff359a: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* ff359d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff359e: add dword ptr [esi + 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(esi + 0x58u), r);
  }
/* ff35a1: adc dword ptr [esi + 0x5c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(esi + 0x5cu), r);
  }
/* ff35a4: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* ff35a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff35a8: add dword ptr [esi + 0x60], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(esi + 0x60u), r);
  }
/* ff35ab: adc dword ptr [esi + 0x64], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x64u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(esi + 0x64u), r);
  }
/* ff35ae: cmp dword ptr [esi + 0x30], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x30u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff35b1: je 0xff35bf */
  if (zf) goto L_ff35bf;
L_ff35b3: /* ff35b3: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ff35b7: xor ecx, ecx */
  ecx = 0;
/* ff35b9: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff35bd: jmp 0xff35c7 */
  goto L_ff35c7;
L_ff35bf: /* ff35bf: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* ff35c3: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_ff35c7: /* ff35c7: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* ff35cb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* ff35ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff35d0: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* ff35d4: jle 0xff397b */
  if ((zf || sf != of)) goto L_ff397b;
L_ff35da: /* ff35da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff35e0: /* ff35e0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* ff35e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff35e5: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff35e8: je 0xff3788 */
  if (zf) goto L_ff3788;
L_ff35ee: /* ff35ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff35f0: je 0xff36bd */
  if (zf) goto L_ff36bd;
L_ff35f6: /* ff35f6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff35f9: mov edx, dword ptr [eax + ebp*4] */
  edx = R32((uint32_t)(eax + ebp*4));
/* ff35fc: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ff35ff: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff3601: mov ecx, dword ptr [ecx + ebp*4] */
  ecx = R32((uint32_t)(ecx + ebp*4));
/* ff3604: xor edx, edx */
  edx = 0;
/* ff3606: cmp dword ptr [esp + 0x3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff360b: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff360f: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* ff3613: jl 0xff3680 */
  if ((sf != of)) goto L_ff3680;
L_ff3615: /* ff3615: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* ff3619: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff361d: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff3620: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3623: sub ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ff3625: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* ff362d: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* ff3631: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* ff3635: jmp 0xff363b */
  goto L_ff363b;
L_ff3637: /* ff3637: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_ff363b: /* ff363b: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ff363e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff3641: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* ff3644: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff3647: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff364a: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff364d: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* ff3650: fld dword ptr [eax + ebp - 0x10] */
  { double v = F32((uint32_t)(eax + ebp + 0xfffffff0u)); FPUSH(v); }
/* ff3654: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* ff3658: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff365a: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* ff365d: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ff3660: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* ff3663: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff3666: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ff3669: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ff366c: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ff366f: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ff3672: jl 0xff3637 */
  if ((sf != of)) goto L_ff3637;
L_ff3674: /* ff3674: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ff3678: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* ff367c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_ff3680: /* ff3680: cmp edx, dword ptr [esp + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3684: jge 0xff3925 */
  if ((sf == of)) goto L_ff3925;
L_ff368a: /* ff368a: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ff368d: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* ff3691: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff3695: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff3697: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff369b: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff369f: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* ff36a3: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_ff36a5: /* ff36a5: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff36a9: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* ff36ac: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff36af: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ff36b0: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* ff36b3: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff36b6: jne 0xff36a5 */
  if (!zf) goto L_ff36a5;
L_ff36b8: /* ff36b8: jmp 0xff3925 */
  goto L_ff3925;
L_ff36bd: /* ff36bd: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff36c1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff36c2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff36c4: mov ecx, eax */
  ecx = eax;
/* ff36c6: mov eax, edi */
  eax = edi;
/* ff36c8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff36c9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff36cb: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff36ce: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* ff36d0: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff36d2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff36d4: add ecx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff36d8: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* ff36db: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* ff36de: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff36e0: mov ecx, dword ptr [ecx + ebp*4] */
  ecx = R32((uint32_t)(ecx + ebp*4));
/* ff36e3: xor edx, edx */
  edx = 0;
/* ff36e5: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff36e8: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff36ec: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* ff36f0: jl 0xff3757 */
  if ((sf != of)) goto L_ff3757;
L_ff36f2: /* ff36f2: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* ff36f6: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff36f9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff36fc: sub ebx, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff3700: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* ff3708: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* ff370c: jmp 0xff3712 */
  goto L_ff3712;
L_ff370e: /* ff370e: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
L_ff3712: /* ff3712: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ff3715: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff3718: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* ff371b: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff371e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff3721: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* ff3724: fld dword ptr [ebx + eax - 0x10] */
  { double v = F32((uint32_t)(ebx + eax + 0xfffffff0u)); FPUSH(v); }
/* ff3728: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* ff372c: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* ff372f: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff3732: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3734: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* ff3738: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ff373b: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* ff373e: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff3741: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ff3744: fld dword ptr [ecx - 0x10] */
  { double v = F32((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* ff3747: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* ff374a: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ff374d: jl 0xff370e */
  if ((sf != of)) goto L_ff370e;
L_ff374f: /* ff374f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff3753: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
L_ff3757: /* ff3757: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3759: jge 0xff3925 */
  if ((sf == of)) goto L_ff3925;
L_ff375f: /* ff375f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ff3762: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* ff3766: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff376a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff376c: mov eax, edi */
  eax = edi;
/* ff376e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3770: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
L_ff3774: /* ff3774: fld dword ptr [edx + ecx] */
  { double v = F32((uint32_t)(edx + ecx)); FPUSH(v); }
/* ff3777: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff377a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff377b: fadd dword ptr [edx - 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xfffffffcu)));
/* ff377e: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* ff3781: jne 0xff3774 */
  if (!zf) goto L_ff3774;
L_ff3783: /* ff3783: jmp 0xff3925 */
  goto L_ff3925;
L_ff3788: /* ff3788: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff378a: je 0xff3890 */
  if (zf) goto L_ff3890;
L_ff3790: /* ff3790: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3793: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* ff3796: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* ff3798: mov ebx, dword ptr [ebx + ebp*4] */
  ebx = R32((uint32_t)(ebx + ebp*4));
/* ff379b: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* ff379e: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* ff37a2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff37a3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff37a5: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff37a7: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff37ab: mov eax, edi */
  eax = edi;
/* ff37ad: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff37ae: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff37b0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff37b4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff37b6: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff37b8: lea edx, [ebx + edx*4] */
  edx = (uint32_t)(ebx + edx*4);
/* ff37bb: xor ebx, ebx */
  ebx = 0;
/* ff37bd: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff37c0: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* ff37c4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* ff37c8: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* ff37cc: jl 0xff3822 */
  if ((sf != of)) goto L_ff3822;
L_ff37ce: /* ff37ce: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* ff37d2: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff37d5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff37d8: sub ebp, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ff37dc: mov eax, 3 */
  eax = 0x3u;
L_ff37e1: /* ff37e1: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* ff37e4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff37e7: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* ff37ea: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff37ed: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff37f0: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff37f3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff37f5: fstp dword ptr [ecx - 0x14] */
  WF32((uint32_t)(ecx + 0xffffffecu), ST0); FPOP();
/* ff37f8: fld dword ptr [ecx + ebp - 0x10] */
  { double v = F32((uint32_t)(ecx + ebp + 0xfffffff0u)); FPUSH(v); }
/* ff37fc: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ff37ff: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* ff3802: fld dword ptr [edx - 0x14] */
  { double v = F32((uint32_t)(edx + 0xffffffecu)); FPUSH(v); }
/* ff3805: fadd dword ptr [ecx - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff4u)));
/* ff3808: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* ff380b: fld dword ptr [edx - 0x10] */
  { double v = F32((uint32_t)(edx + 0xfffffff0u)); FPUSH(v); }
/* ff380e: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* ff3811: fstp dword ptr [ecx - 8] */
  WF32((uint32_t)(ecx + 0xfffffff8u), ST0); FPOP();
/* ff3814: jl 0xff37e1 */
  if ((sf != of)) goto L_ff37e1;
L_ff3816: /* ff3816: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ff381a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff381e: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_ff3822: /* ff3822: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3824: jge 0xff385e */
  if ((sf == of)) goto L_ff385e;
L_ff3826: /* ff3826: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff382a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff382c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff3830: mov eax, edi */
  eax = edi;
/* ff3832: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3834: lea edx, [ecx + ebx*4] */
  edx = (uint32_t)(ecx + ebx*4);
/* ff3837: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ff383b: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff383d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff3840: /* ff3840: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ff3844: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* ff3847: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff384b: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* ff384d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff3850: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3851: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ff3855: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* ff3858: jne 0xff3840 */
  if (!zf) goto L_ff3840;
L_ff385a: /* ff385a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_ff385e: /* ff385e: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff3862: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3864: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3866: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff386a: jge 0xff3921 */
  if ((sf == of)) goto L_ff3921;
L_ff3870: /* ff3870: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff3874: lea eax, [ecx + ebx*4] */
  eax = (uint32_t)(ecx + ebx*4);
/* ff3877: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff3879: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* ff387d: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff387f: nop  */
L_ff3880: /* ff3880: mov ebx, dword ptr [eax + edx] */
  ebx = R32((uint32_t)(eax + edx));
/* ff3883: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* ff3885: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3888: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ff3889: jne 0xff3880 */
  if (!zf) goto L_ff3880;
L_ff388b: /* ff388b: jmp 0xff3921 */
  goto L_ff3921;
L_ff3890: /* ff3890: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff3893: mov edx, dword ptr [eax + ebp*4] */
  edx = R32((uint32_t)(eax + ebp*4));
/* ff3896: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ff3899: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff389b: mov ecx, dword ptr [ecx + ebp*4] */
  ecx = R32((uint32_t)(ecx + ebp*4));
/* ff389e: xor edx, edx */
  edx = 0;
/* ff38a0: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff38a3: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* ff38a7: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* ff38ab: jl 0xff3901 */
  if ((sf != of)) goto L_ff3901;
L_ff38ad: /* ff38ad: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* ff38b1: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff38b4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff38b7: sub ebp, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* ff38bb: mov ebx, 3 */
  ebx = 0x3u;
L_ff38c0: /* ff38c0: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* ff38c3: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff38c6: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* ff38c9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff38cc: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff38cf: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff38d2: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff38d4: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* ff38d7: fld dword ptr [eax + ebp - 0x10] */
  { double v = F32((uint32_t)(eax + ebp + 0xfffffff0u)); FPUSH(v); }
/* ff38db: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* ff38de: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ff38e1: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* ff38e4: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff38e7: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ff38ea: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ff38ed: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ff38f0: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ff38f3: jl 0xff38c0 */
  if ((sf != of)) goto L_ff38c0;
L_ff38f5: /* ff38f5: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* ff38f9: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ff38fd: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
L_ff3901: /* ff3901: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3903: jge 0xff3925 */
  if ((sf == of)) goto L_ff3925;
L_ff3905: /* ff3905: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* ff3909: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ff390c: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff390e: mov eax, edi */
  eax = edi;
/* ff3910: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_ff3912: /* ff3912: fld dword ptr [ecx + ebx] */
  { double v = F32((uint32_t)(ecx + ebx)); FPUSH(v); }
/* ff3915: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff3918: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3919: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* ff391c: fstp dword ptr [ecx - 4] */
  WF32((uint32_t)(ecx + 0xfffffffcu), ST0); FPOP();
/* ff391f: jne 0xff3912 */
  if (!zf) goto L_ff3912;
L_ff3921: /* ff3921: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
L_ff3925: /* ff3925: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3928: mov eax, dword ptr [edx + ebp*4] */
  eax = R32((uint32_t)(edx + ebp*4));
/* ff392b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ff392f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff3933: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff3936: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3938: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff393a: mov ecx, dword ptr [ecx + ebp*4] */
  ecx = R32((uint32_t)(ecx + ebp*4));
/* ff393d: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff3940: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff3942: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* ff3946: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3948: jle 0xff3963 */
  if ((zf || sf != of)) goto L_ff3963;
L_ff394a: /* ff394a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff394c: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
L_ff3950: /* ff3950: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* ff3953: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* ff3955: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* ff3959: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff395c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* ff395d: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* ff3961: jne 0xff3950 */
  if (!zf) goto L_ff3950;
L_ff3963: /* ff3963: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ff3967: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ff396a: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff396b: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff396d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ff3971: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* ff3975: jl 0xff35e0 */
  if ((sf != of)) goto L_ff35e0;
L_ff397b: /* ff397b: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* ff397e: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* ff3982: xor edx, edx */
  edx = 0;
/* ff3984: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3986: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff3989: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ff398c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff398d: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff398f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3992: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* ff3995: jne 0xff39a0 */
  if (!zf) goto L_ff39a0;
L_ff3997: /* ff3997: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff399b: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* ff399e: jmp 0xff39cb */
  goto L_ff39cb;
L_ff39a0: /* ff39a0: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* ff39a4: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff39a7: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* ff39aa: mov eax, dword ptr [edi + eax*4] */
  eax = R32((uint32_t)(edi + eax*4));
/* ff39ad: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff39ae: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff39b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff39b3: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* ff39b6: mov ebp, eax */
  ebp = eax;
/* ff39b8: mov eax, dword ptr [edi + edx*4] */
  eax = R32((uint32_t)(edi + edx*4));
/* ff39bb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff39bc: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff39bf: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* ff39c2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff39c4: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff39c7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff39c9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_ff39cb: /* ff39cb: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff39cf: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_ff39d2: /* ff39d2: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* ff39d5: mov ebp, dword ptr [esi + 0x3c] */
  ebp = R32((uint32_t)(esi + 0x3cu));
/* ff39d8: mov eax, edi */
  eax = edi;
/* ff39da: and eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff39dc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff39df: jne 0xff39fc */
  if (!zf) goto L_ff39fc;
L_ff39e1: /* ff39e1: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* ff39e4: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* ff39e7: mov edx, eax */
  edx = eax;
/* ff39e9: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff39eb: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff39ee: je 0xff3a97 */
  if (zf) goto L_ff3a97;
L_ff39f4: /* ff39f4: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* ff39f7: jmp 0xff3a94 */
  goto L_ff3a94;
L_ff39fc: /* ff39fc: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* ff39ff: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* ff3a02: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3a03: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff3a06: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3a08: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* ff3a0b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff3a0e: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* ff3a12: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* ff3a15: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* ff3a19: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3a1a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff3a1d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3a1f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff3a22: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3a24: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3a25: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* ff3a27: adc edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* ff3a29: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* ff3a2c: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* ff3a2f: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* ff3a32: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
/* ff3a35: mov edx, eax */
  edx = eax;
/* ff3a37: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff3a39: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3a3c: je 0xff3a97 */
  if (zf) goto L_ff3a97;
L_ff3a3e: /* ff3a3e: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* ff3a41: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3a43: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* ff3a46: jne 0xff3a4c */
  if (!zf) goto L_ff3a4c;
L_ff3a48: /* ff3a48: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3a4a: je 0xff3a97 */
  if (zf) goto L_ff3a97;
L_ff3a4c: /* ff3a4c: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3a4e: jl 0xff3a8b */
  if ((sf != of)) goto L_ff3a8b;
L_ff3a50: /* ff3a50: jg 0xff3a56 */
  if ((!zf && sf == of)) goto L_ff3a56;
L_ff3a52: /* ff3a52: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff3a54: jbe 0xff3a8b */
  if ((cf | zf)) goto L_ff3a8b;
L_ff3a56: /* ff3a56: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* ff3a59: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* ff3a5c: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* ff3a5f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3a61: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3a63: je 0xff3a6a */
  if (zf) goto L_ff3a6a;
L_ff3a65: /* ff3a65: sub dword ptr [esi + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esi + 0x14u), r);
  }
/* ff3a68: jmp 0xff3a8b */
  goto L_ff3a8b;
L_ff3a6a: /* ff3a6a: cmp dword ptr [ebx + 0x38], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x38u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3a6e: jne 0xff3a8b */
  if (!zf) goto L_ff3a8b;
L_ff3a70: /* ff3a70: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* ff3a73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3a75: jne 0xff3a8b */
  if (!zf) goto L_ff3a8b;
L_ff3a77: /* ff3a77: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* ff3a7a: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff3a7c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff3a7f: mov ecx, edi */
  ecx = edi;
/* ff3a81: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3a83: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* ff3a86: jle 0xff3a8b */
  if ((zf || sf != of)) goto L_ff3a8b;
L_ff3a88: /* ff3a88: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
L_ff3a8b: /* ff3a8b: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* ff3a8e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* ff3a91: mov ecx, dword ptr [ebx + 0x34] */
  ecx = R32((uint32_t)(ebx + 0x34u));
L_ff3a94: /* ff3a94: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
L_ff3a97: /* ff3a97: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* ff3a9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3a9c: je 0xff3aa5 */
  if (zf) goto L_ff3aa5;
L_ff3a9e: /* ff3a9e: mov dword ptr [esi + 0x20], 1 */
  W32((uint32_t)(esi + 0x20u), 0x1u);
L_ff3aa5: /* ff3aa5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3aa6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3aa7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3aa8: xor eax, eax */
  eax = 0;
/* ff3aaa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3aab: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3aae: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3ab0(void) {
  LOAD_REGS();
L_ff3ab0: /* ff3ab0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ff3ab4: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* ff3ab7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3aba: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ff3abd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3abe: jle 0xff3b09 */
  if ((zf || sf != of)) goto L_ff3b09;
L_ff3ac0: /* ff3ac0: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3ac3: jge 0xff3b09 */
  if ((sf == of)) goto L_ff3b09;
L_ff3ac5: /* ff3ac5: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ff3ac9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3acb: je 0xff3b01 */
  if (zf) goto L_ff3b01;
L_ff3acd: /* ff3acd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3ace: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* ff3ad1: xor eax, eax */
  eax = 0;
/* ff3ad3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3ad5: jle 0xff3afb */
  if ((zf || sf != of)) goto L_ff3afb;
L_ff3ad7: /* ff3ad7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3ad8: jmp 0xff3ae0 */
  goto L_ff3ae0;
L_ff3ae0: /* ff3ae0: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* ff3ae3: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* ff3ae6: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* ff3ae9: lea edi, [edi + ebx*4] */
  edi = (uint32_t)(edi + ebx*4);
/* ff3aec: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* ff3aef: mov dword ptr [ebx + eax*4], edi */
  W32((uint32_t)(ebx + eax*4), edi);
/* ff3af2: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* ff3af5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3af6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3af8: jl 0xff3ae0 */
  if ((sf != of)) goto L_ff3ae0;
L_ff3afa: /* ff3afa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ff3afb: /* ff3afb: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* ff3afe: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff3b00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_ff3b01: /* ff3b01: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* ff3b04: sub eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3b07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3b08: ret  */
  esp += 4; SPILL(); return;
L_ff3b09: /* ff3b09: xor eax, eax */
  eax = 0;
/* ff3b0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3b0c: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3ada(void) {
  LOAD_REGS();
L_ff3ada: /* ff3ada: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff3ae0: /* ff3ae0: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* ff3ae3: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* ff3ae6: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* ff3ae9: lea edi, [edi + ebx*4] */
  edi = (uint32_t)(edi + ebx*4);
/* ff3aec: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* ff3aef: mov dword ptr [ebx + eax*4], edi */
  W32((uint32_t)(ebx + eax*4), edi);
/* ff3af2: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* ff3af5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3af6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3af8: jl 0xff3ae0 */
  if ((sf != of)) goto L_ff3ae0;
L_ff3afa: /* ff3afa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3afb: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* ff3afe: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff3b00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3b01: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* ff3b04: sub eax, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3b07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3b08: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3b10(void) {
  LOAD_REGS();
L_ff3b10: /* ff3b10: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ff3b14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3b16: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ff3b1a: je 0xff3b30 */
  if (zf) goto L_ff3b30;
L_ff3b1c: /* ff3b1c: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* ff3b1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3b20: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* ff3b23: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff3b25: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3b27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3b28: jle 0xff3b30 */
  if ((zf || sf != of)) goto L_ff3b30;
L_ff3b2a: /* ff3b2a: mov eax, 0xffffff7d */
  eax = 0xffffff7du;
/* ff3b2f: ret  */
  esp += 4; SPILL(); return;
L_ff3b30: /* ff3b30: add dword ptr [eax + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0x18u), r);
  }
/* ff3b33: xor eax, eax */
  eax = 0;
/* ff3b35: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3b40(void) {
  LOAD_REGS();
L_ff3b40: /* ff3b40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3b41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff3b42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3b43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3b44: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ff3b48: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* ff3b4a: push 0x564342 */
  { uint32_t v = 0x564342u; esp -= 4; W32(esp, v); }
/* ff3b4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3b50: call 0x100913c */
  esp -= 4; W32(esp, 0xff3b55u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3b55: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* ff3b59: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff3b5b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff3b5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3b5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3b5f: call 0x100913c */
  esp -= 4; W32(esp, 0xff3b64u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3b64: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff3b67: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* ff3b69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3b6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3b6b: call 0x100913c */
  esp -= 4; W32(esp, 0xff3b70u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3b70: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff3b73: mov ecx, 1 */
  ecx = 0x1u;
/* ff3b78: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3b7b: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3b7d: jle 0xff3b98 */
  if ((zf || sf != of)) goto L_ff3b98;
L_ff3b7f: /* ff3b7f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* ff3b82: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_ff3b85: /* ff3b85: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* ff3b88: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3b8a: je 0xff3b98 */
  if (zf) goto L_ff3b98;
L_ff3b8c: /* ff3b8c: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3b8e: jl 0xff3b98 */
  if ((sf != of)) goto L_ff3b98;
L_ff3b90: /* ff3b90: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff3b91: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff3b94: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3b96: jl 0xff3b85 */
  if ((sf != of)) goto L_ff3b85;
L_ff3b98: /* ff3b98: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3b9a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3b9c: jne 0xff3c32 */
  if (!zf) goto L_ff3c32;
L_ff3ba2: /* ff3ba2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3ba4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3ba5: xor ebp, ebp */
  ebp = 0;
/* ff3ba7: call 0x100913c */
  esp -= 4; W32(esp, 0xff3bacu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3bac: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3baf: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff3bb1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff3bb3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff3bb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3bb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3bb6: call 0x100913c */
  esp -= 4; W32(esp, 0xff3bbbu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3bbb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3bbe: mov ebx, 1 */
  ebx = 0x1u;
/* ff3bc3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3bc6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3bc8: jle 0xff3c15 */
  if ((zf || sf != of)) goto L_ff3c15;
L_ff3bca: /* ff3bca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff3bd0: /* ff3bd0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff3bd3: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* ff3bd6: lea ecx, [ecx + ebx*4] */
  ecx = (uint32_t)(ecx + ebx*4);
/* ff3bd9: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* ff3bdc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3bde: jle 0xff3c0d */
  if ((zf || sf != of)) goto L_ff3c0d;
L_ff3be0: /* ff3be0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3be2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_ff3be6: /* ff3be6: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* ff3be9: sub edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff3beb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3bec: call 0x1002470 */
  esp -= 4; W32(esp, 0xff3bf1u); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff3bf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3bf2: mov eax, ebx */
  eax = ebx;
/* ff3bf4: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3bf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3bf8: call 0x100913c */
  esp -= 4; W32(esp, 0xff3bfdu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3bfd: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff3c01: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3c04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3c05: mov ebp, ebx */
  ebp = ebx;
/* ff3c07: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* ff3c0b: jne 0xff3be6 */
  if (!zf) goto L_ff3be6;
L_ff3c0d: /* ff3c0d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3c10: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff3c11: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3c13: jl 0xff3bd0 */
  if ((sf != of)) goto L_ff3bd0;
L_ff3c15: /* ff3c15: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff3c18: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff3c1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3c1b: call 0x1002470 */
  esp -= 4; W32(esp, 0xff3c20u); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff3c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3c21: sub ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff3c23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3c24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3c25: call 0x100913c */
  esp -= 4; W32(esp, 0xff3c2au); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3c2a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3c2d: jmp 0xff3ceb */
  goto L_ff3ceb;
L_ff3c32: /* ff3c32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff3c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3c35: call 0x100913c */
  esp -= 4; W32(esp, 0xff3c3au); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3c3a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff3c3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3c40: xor eax, eax */
  eax = 0;
/* ff3c42: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3c44: jle 0xff3c5d */
  if ((zf || sf != of)) goto L_ff3c5d;
L_ff3c46: /* ff3c46: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3c49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff3c50: /* ff3c50: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3c53: je 0xff3c5d */
  if (zf) goto L_ff3c5d;
L_ff3c55: /* ff3c55: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3c56: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff3c59: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3c5b: jl 0xff3c50 */
  if ((sf != of)) goto L_ff3c50;
L_ff3c5d: /* ff3c5d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3c5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3c61: jne 0xff3c94 */
  if (!zf) goto L_ff3c94;
L_ff3c63: /* ff3c63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff3c65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3c66: call 0x100913c */
  esp -= 4; W32(esp, 0xff3c6bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3c6b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3c6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3c71: xor ebx, ebx */
  ebx = 0;
/* ff3c73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3c75: jle 0xff3ceb */
  if ((zf || sf != of)) goto L_ff3ceb;
L_ff3c77: /* ff3c77: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3c7a: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* ff3c7d: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff3c7f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff3c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3c81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3c82: call 0x100913c */
  esp -= 4; W32(esp, 0xff3c87u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3c87: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3c8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3c8d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff3c8e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3c90: jl 0xff3c77 */
  if ((sf != of)) goto L_ff3c77;
L_ff3c92: /* ff3c92: jmp 0xff3ceb */
  goto L_ff3ceb;
L_ff3c94: /* ff3c94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3c96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3c97: call 0x100913c */
  esp -= 4; W32(esp, 0xff3c9cu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3c9c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3c9f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3ca2: xor ebx, ebx */
  ebx = 0;
/* ff3ca4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3ca6: jle 0xff3ceb */
  if ((zf || sf != of)) goto L_ff3ceb;
L_ff3ca8: /* ff3ca8: jmp 0xff3cb0 */
  goto L_ff3cb0;
L_ff3cb0: /* ff3cb0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff3cb3: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3cb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3cb9: jne 0xff3cc8 */
  if (!zf) goto L_ff3cc8;
L_ff3cbb: /* ff3cbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff3cbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3cbe: call 0x100913c */
  esp -= 4; W32(esp, 0xff3cc3u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3cc3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3cc6: jmp 0xff3ce3 */
  goto L_ff3ce3;
L_ff3cc8: /* ff3cc8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3cca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3ccb: call 0x100913c */
  esp -= 4; W32(esp, 0xff3cd0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3cd0: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3cd3: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* ff3cd6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff3cd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff3cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3cda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3cdb: call 0x100913c */
  esp -= 4; W32(esp, 0xff3ce0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3ce0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff3ce3: /* ff3ce3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3ce6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff3ce7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3ce9: jl 0xff3cb0 */
  if ((sf != of)) goto L_ff3cb0;
L_ff3ceb: /* ff3ceb: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* ff3cee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3cf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3cf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3cf2: call 0x100913c */
  esp -= 4; W32(esp, 0xff3cf7u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3cf7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff3cfa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3cfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3cff: je 0xff3d9e */
  if (zf) goto L_ff3d9e;
L_ff3d05: /* ff3d05: jle 0xff3da5 */
  if ((zf || sf != of)) goto L_ff3da5;
L_ff3d0b: /* ff3d0b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3d0e: jg 0xff3da5 */
  if ((!zf && sf == of)) goto L_ff3da5;
L_ff3d14: /* ff3d14: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff3d17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3d19: je 0xff3da5 */
  if (zf) goto L_ff3da5;
L_ff3d1f: /* ff3d1f: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* ff3d22: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3d25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d26: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d2bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d2b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff3d2e: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d32: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d37u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d37: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* ff3d3a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3d3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff3d3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3d3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d3f: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d44u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d44: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* ff3d47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3d49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3d4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d4b: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d50u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d50: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff3d53: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3d56: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3d57: je 0xff3d69 */
  if (zf) goto L_ff3d69;
L_ff3d59: /* ff3d59: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3d5a: je 0xff3d61 */
  if (zf) goto L_ff3d61;
L_ff3d5c: /* ff3d5c: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* ff3d5f: jmp 0xff3d74 */
  goto L_ff3d74;
L_ff3d61: /* ff3d61: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* ff3d64: imul ebp, dword ptr [esi] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi)));
  ebp = (uint32_t)r;
  }
/* ff3d67: jmp 0xff3d74 */
  goto L_ff3d74;
L_ff3d69: /* ff3d69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3d6a: call 0x1002670 */
  esp -= 4; W32(esp, 0xff3d6fu); SPILL(); f_1002670(); if (g_unwind) return; RELOAD();
/* ff3d6f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3d72: mov ebp, eax */
  ebp = eax;
L_ff3d74: /* ff3d74: xor ebx, ebx */
  ebx = 0;
/* ff3d76: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3d78: jle 0xff3d9e */
  if ((zf || sf != of)) goto L_ff3d9e;
L_ff3d7a: /* ff3d7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff3d80: /* ff3d80: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff3d83: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* ff3d86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3d87: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* ff3d8a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3d8b: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff3d8d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3d90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d91: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d96u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3d99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff3d9a: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3d9c: jl 0xff3d80 */
  if ((sf != of)) goto L_ff3d80;
L_ff3d9e: /* ff3d9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3d9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3da0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3da1: xor eax, eax */
  eax = 0;
/* ff3da3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3da4: ret  */
  esp += 4; SPILL(); return;
L_ff3da5: /* ff3da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3da7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3da8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff3dab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3dac: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3caa(void) {
  LOAD_REGS();
L_ff3caa: /* ff3caa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff3cb0: /* ff3cb0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff3cb3: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3cb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3cb9: jne 0xff3cc8 */
  if (!zf) goto L_ff3cc8;
L_ff3cbb: /* ff3cbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ff3cbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3cbe: call 0x100913c */
  esp -= 4; W32(esp, 0xff3cc3u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3cc3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3cc6: jmp 0xff3ce3 */
  goto L_ff3ce3;
L_ff3cc8: /* ff3cc8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3cca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3ccb: call 0x100913c */
  esp -= 4; W32(esp, 0xff3cd0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3cd0: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3cd3: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* ff3cd6: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff3cd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* ff3cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3cda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3cdb: call 0x100913c */
  esp -= 4; W32(esp, 0xff3ce0u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3ce0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff3ce3: /* ff3ce3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3ce6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff3ce7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3ce9: jl 0xff3cb0 */
  if ((sf != of)) goto L_ff3cb0;
L_ff3ceb: /* ff3ceb: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* ff3cee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3cf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3cf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3cf2: call 0x100913c */
  esp -= 4; W32(esp, 0xff3cf7u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3cf7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff3cfa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3cfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3cff: je 0xff3d9e */
  if (zf) goto L_ff3d9e;
L_ff3d05: /* ff3d05: jle 0xff3da5 */
  if ((zf || sf != of)) goto L_ff3da5;
L_ff3d0b: /* ff3d0b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3d0e: jg 0xff3da5 */
  if ((!zf && sf == of)) goto L_ff3da5;
L_ff3d14: /* ff3d14: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* ff3d17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3d19: je 0xff3da5 */
  if (zf) goto L_ff3da5;
L_ff3d1f: /* ff3d1f: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* ff3d22: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3d24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3d25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d26: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d2bu); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d2b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff3d2e: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d32: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d37u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d37: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* ff3d3a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3d3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff3d3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3d3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d3f: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d44u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d44: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* ff3d47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3d49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3d4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d4b: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d50u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d50: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff3d53: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3d56: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3d57: je 0xff3d69 */
  if (zf) goto L_ff3d69;
L_ff3d59: /* ff3d59: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3d5a: je 0xff3d61 */
  if (zf) goto L_ff3d61;
L_ff3d5c: /* ff3d5c: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* ff3d5f: jmp 0xff3d74 */
  goto L_ff3d74;
L_ff3d61: /* ff3d61: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* ff3d64: imul ebp, dword ptr [esi] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi)));
  ebp = (uint32_t)r;
  }
/* ff3d67: jmp 0xff3d74 */
  goto L_ff3d74;
L_ff3d69: /* ff3d69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3d6a: call 0x1002670 */
  esp -= 4; W32(esp, 0xff3d6fu); SPILL(); f_1002670(); if (g_unwind) return; RELOAD();
/* ff3d6f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3d72: mov ebp, eax */
  ebp = eax;
L_ff3d74: /* ff3d74: xor ebx, ebx */
  ebx = 0;
/* ff3d76: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3d78: jle 0xff3d9e */
  if ((zf || sf != of)) goto L_ff3d9e;
L_ff3d7a: /* ff3d7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff3d80: /* ff3d80: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* ff3d83: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* ff3d86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3d87: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* ff3d8a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff3d8b: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff3d8d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff3d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3d90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3d91: call 0x100913c */
  esp -= 4; W32(esp, 0xff3d96u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff3d96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3d99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff3d9a: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3d9c: jl 0xff3d80 */
  if ((sf != of)) goto L_ff3d80;
L_ff3d9e: /* ff3d9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3d9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3da0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3da1: xor eax, eax */
  eax = 0;
/* ff3da3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3da4: ret  */
  esp += 4; SPILL(); return;
L_ff3da5: /* ff3da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3da7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3da8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff3dab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3dac: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3db0(void) {
  LOAD_REGS();
L_ff3db0: /* ff3db0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3db1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ff3db5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff3db6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3db7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff3dbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff3dbc: xor eax, eax */
  eax = 0;
/* ff3dbe: mov ecx, 0xd */
  ecx = 0xdu;
/* ff3dc3: mov edi, esi */
  edi = esi;
/* ff3dc5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* ff3dc7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff3dc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3dca: mov dword ptr [esi + 0x30], 1 */
  W32((uint32_t)(esi + 0x30u), 0x1u);
/* ff3dd1: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3dd6u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3dd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3dd9: cmp eax, 0x564342 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x564342u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3dde: jne 0xff3fde */
  if (!zf) goto L_ff3fde;
L_ff3de4: /* ff3de4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* ff3de6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3de7: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3decu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3dec: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* ff3dee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3def: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* ff3df1: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3df6u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3df6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3df9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3dfc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* ff3dff: je 0xff3fde */
  if (zf) goto L_ff3fde;
L_ff3e05: /* ff3e05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3e07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3e08: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3e0du); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3e0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3e10: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* ff3e13: je 0xff3e8e */
  if (zf) goto L_ff3e8e;
L_ff3e15: /* ff3e15: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3e16: jne 0xff3fe7 */
  if (!zf) goto L_ff3fe7;
L_ff3e1c: /* ff3e1c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff3e1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3e1f: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3e24u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3e24: mov ebp, eax */
  ebp = eax;
/* ff3e26: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3e29: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff3e2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3e2d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff3e2e: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff3e34u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff3e34: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ff3e37: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3e3a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3e3d: xor edi, edi */
  edi = 0;
/* ff3e3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3e41: jle 0xff3f23 */
  if ((zf || sf != of)) goto L_ff3f23;
L_ff3e47: /* ff3e47: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff3e4a: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff3e4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3e4d: call 0x1002470 */
  esp -= 4; W32(esp, 0xff3e52u); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff3e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3e53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3e54: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3e59u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3e59: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3e5c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3e5f: je 0xff3fde */
  if (zf) goto L_ff3fde;
L_ff3e65: /* ff3e65: xor ecx, ecx */
  ecx = 0;
/* ff3e67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3e69: jle 0xff3e81 */
  if ((zf || sf != of)) goto L_ff3e81;
L_ff3e6b: /* ff3e6b: jmp 0xff3e70 */
  goto L_ff3e70;
L_ff3e70: /* ff3e70: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3e73: jge 0xff3e81 */
  if ((sf == of)) goto L_ff3e81;
L_ff3e75: /* ff3e75: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3e78: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff3e79: mov dword ptr [edx + edi*4], ebp */
  W32((uint32_t)(edx + edi*4), ebp);
/* ff3e7c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff3e7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3e7f: jl 0xff3e70 */
  if ((sf != of)) goto L_ff3e70;
L_ff3e81: /* ff3e81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3e84: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff3e85: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3e87: jl 0xff3e47 */
  if ((sf != of)) goto L_ff3e47;
L_ff3e89: /* ff3e89: jmp 0xff3f23 */
  goto L_ff3f23;
L_ff3e8e: /* ff3e8e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3e91: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff3e94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3e95: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff3e9bu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff3e9b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3e9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3e9e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* ff3ea1: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3ea6u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3ea6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3ea9: xor edi, edi */
  edi = 0;
/* ff3eab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3ead: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3eb0: je 0xff3ef6 */
  if (zf) goto L_ff3ef6;
L_ff3eb2: /* ff3eb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3eb4: jle 0xff3f23 */
  if ((zf || sf != of)) goto L_ff3f23;
L_ff3eb6: /* ff3eb6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3eb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3eb9: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3ebeu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3ebe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3ec1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ff3ec3: je 0xff3ee2 */
  if (zf) goto L_ff3ee2;
L_ff3ec5: /* ff3ec5: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff3ec7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3ec8: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3ecdu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3ecd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3ed0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3ed3: je 0xff3fde */
  if (zf) goto L_ff3fde;
L_ff3ed9: /* ff3ed9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff3edc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3edd: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* ff3ee0: jmp 0xff3eec */
  goto L_ff3eec;
L_ff3ee2: /* ff3ee2: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3ee5: mov dword ptr [edx + edi*4], 0 */
  W32((uint32_t)(edx + edi*4), 0x0u);
L_ff3eec: /* ff3eec: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3eef: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff3ef0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3ef2: jl 0xff3eb6 */
  if ((sf != of)) goto L_ff3eb6;
L_ff3ef4: /* ff3ef4: jmp 0xff3f23 */
  goto L_ff3f23;
L_ff3ef6: /* ff3ef6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3ef8: jle 0xff3f23 */
  if ((zf || sf != of)) goto L_ff3f23;
L_ff3efa: /* ff3efa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff3f00: /* ff3f00: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* ff3f02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f03: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f08u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3f0b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3f0e: je 0xff3fde */
  if (zf) goto L_ff3fde;
L_ff3f14: /* ff3f14: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff3f17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3f18: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* ff3f1b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3f1e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff3f1f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3f21: jl 0xff3f00 */
  if ((sf != of)) goto L_ff3f00;
L_ff3f23: /* ff3f23: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3f25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f26: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f2bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3f2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3f30: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ff3f33: je 0xff3fef */
  if (zf) goto L_ff3fef;
L_ff3f39: /* ff3f39: jle 0xff3fde */
  if ((zf || sf != of)) goto L_ff3fde;
L_ff3f3f: /* ff3f3f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3f42: jg 0xff3fde */
  if ((!zf && sf == of)) goto L_ff3fde;
L_ff3f48: /* ff3f48: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3f4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f4b: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f50u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f50: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3f52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f53: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* ff3f56: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f5bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f5b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3f5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f5e: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* ff3f61: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f66u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3f67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3f69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f6a: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* ff3f6d: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f72u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f72: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* ff3f75: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff3f78: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3f7b: xor edi, edi */
  edi = 0;
/* ff3f7d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3f7e: je 0xff3f8b */
  if (zf) goto L_ff3f8b;
L_ff3f80: /* ff3f80: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3f81: jne 0xff3f96 */
  if (!zf) goto L_ff3f96;
L_ff3f83: /* ff3f83: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ff3f85: imul edi, dword ptr [esi + 4] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x4u)));
  edi = (uint32_t)r;
  }
/* ff3f89: jmp 0xff3f96 */
  goto L_ff3f96;
L_ff3f8b: /* ff3f8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3f8c: call 0x1002670 */
  esp -= 4; W32(esp, 0xff3f91u); SPILL(); f_1002670(); if (g_unwind) return; RELOAD();
/* ff3f91: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3f94: mov edi, eax */
  edi = eax;
L_ff3f96: /* ff3f96: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* ff3f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3f9e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff3fa2: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff3fa8u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff3fa8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3fab: xor ebp, ebp */
  ebp = 0;
/* ff3fad: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3faf: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* ff3fb2: jle 0xff3fce */
  if ((zf || sf != of)) goto L_ff3fce;
L_ff3fb4: /* ff3fb4: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* ff3fb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3fb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3fb9: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3fbeu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3fbe: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* ff3fc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3fc4: mov dword ptr [ecx + ebp*4], eax */
  W32((uint32_t)(ecx + ebp*4), eax);
/* ff3fc7: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff3fc8: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3fca: jl 0xff3fb4 */
  if ((sf != of)) goto L_ff3fb4;
L_ff3fcc: /* ff3fcc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_ff3fce: /* ff3fce: je 0xff3fef */
  if (zf) goto L_ff3fef;
L_ff3fd0: /* ff3fd0: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* ff3fd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff3fd7: cmp dword ptr [edx + eax - 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3fdc: jne 0xff3fef */
  if (!zf) goto L_ff3fef;
L_ff3fde: /* ff3fde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3fdf: call 0x1002900 */
  esp -= 4; W32(esp, 0xff3fe4u); SPILL(); f_1002900(); if (g_unwind) return; RELOAD();
/* ff3fe4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff3fe7: /* ff3fe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3fe8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3fe9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3fea: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff3fed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3fee: ret  */
  esp += 4; SPILL(); return;
L_ff3fef: /* ff3fef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3ff0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3ff2: xor eax, eax */
  eax = 0;
/* ff3ff4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3ff5: ret  */
  esp += 4; SPILL(); return;
}

void f_ff3e6d(void) {
  LOAD_REGS();
  goto L_ff3e6d;
L_ff3e47: /* ff3e47: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* ff3e4a: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff3e4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff3e4d: call 0x1002470 */
  esp -= 4; W32(esp, 0xff3e52u); SPILL(); f_1002470(); if (g_unwind) return; RELOAD();
/* ff3e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3e53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3e54: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3e59u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3e59: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3e5c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3e5f: je 0xff3fde */
  if (zf) goto L_ff3fde;
L_ff3e65: /* ff3e65: xor ecx, ecx */
  ecx = 0;
/* ff3e67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3e69: jle 0xff3e81 */
  if ((zf || sf != of)) goto L_ff3e81;
L_ff3e6b: /* ff3e6b: jmp 0xff3e70 */
  goto L_ff3e70;
L_ff3e6d: /* ff3e6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ff3e70: /* ff3e70: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3e73: jge 0xff3e81 */
  if ((sf == of)) goto L_ff3e81;
L_ff3e75: /* ff3e75: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff3e78: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff3e79: mov dword ptr [edx + edi*4], ebp */
  W32((uint32_t)(edx + edi*4), ebp);
/* ff3e7c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff3e7d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3e7f: jl 0xff3e70 */
  if ((sf != of)) goto L_ff3e70;
L_ff3e81: /* ff3e81: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff3e84: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff3e85: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3e87: jl 0xff3e47 */
  if ((sf != of)) goto L_ff3e47;
L_ff3e89: /* ff3e89: jmp 0xff3f23 */
  goto L_ff3f23;
L_ff3f23: /* ff3f23: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3f25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f26: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f2bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3f2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3f30: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* ff3f33: je 0xff3fef */
  if (zf) goto L_ff3fef;
L_ff3f39: /* ff3f39: jle 0xff3fde */
  if ((zf || sf != of)) goto L_ff3fde;
L_ff3f3f: /* ff3f3f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3f42: jg 0xff3fde */
  if ((!zf && sf == of)) goto L_ff3fde;
L_ff3f48: /* ff3f48: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3f4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f4b: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f50u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f50: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* ff3f52: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f53: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* ff3f56: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f5bu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f5b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff3f5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f5e: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* ff3f61: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f66u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff3f67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* ff3f69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3f6a: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* ff3f6d: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3f72u); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3f72: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* ff3f75: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff3f78: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3f7b: xor edi, edi */
  edi = 0;
/* ff3f7d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3f7e: je 0xff3f8b */
  if (zf) goto L_ff3f8b;
L_ff3f80: /* ff3f80: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff3f81: jne 0xff3f96 */
  if (!zf) goto L_ff3f96;
L_ff3f83: /* ff3f83: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* ff3f85: imul edi, dword ptr [esi + 4] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x4u)));
  edi = (uint32_t)r;
  }
/* ff3f89: jmp 0xff3f96 */
  goto L_ff3f96;
L_ff3f8b: /* ff3f8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3f8c: call 0x1002670 */
  esp -= 4; W32(esp, 0xff3f91u); SPILL(); f_1002670(); if (g_unwind) return; RELOAD();
/* ff3f91: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3f94: mov edi, eax */
  edi = eax;
L_ff3f96: /* ff3f96: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* ff3f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff3f9e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff3fa2: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff3fa8u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff3fa8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3fab: xor ebp, ebp */
  ebp = 0;
/* ff3fad: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff3faf: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* ff3fb2: jle 0xff3fce */
  if ((zf || sf != of)) goto L_ff3fce;
L_ff3fb4: /* ff3fb4: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* ff3fb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff3fb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff3fb9: call 0x1009154 */
  esp -= 4; W32(esp, 0xff3fbeu); SPILL(); f_1009154(); if (g_unwind) return; RELOAD();
/* ff3fbe: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* ff3fc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3fc4: mov dword ptr [ecx + ebp*4], eax */
  W32((uint32_t)(ecx + ebp*4), eax);
/* ff3fc7: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff3fc8: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff3fca: jl 0xff3fb4 */
  if ((sf != of)) goto L_ff3fb4;
L_ff3fcc: /* ff3fcc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_ff3fce: /* ff3fce: je 0xff3fef */
  if (zf) goto L_ff3fef;
L_ff3fd0: /* ff3fd0: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* ff3fd3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* ff3fd7: cmp dword ptr [edx + eax - 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff3fdc: jne 0xff3fef */
  if (!zf) goto L_ff3fef;
L_ff3fde: /* ff3fde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff3fdf: call 0x1002900 */
  esp -= 4; W32(esp, 0xff3fe4u); SPILL(); f_1002900(); if (g_unwind) return; RELOAD();
/* ff3fe4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff3fe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3fe8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3fe9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3fea: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff3fed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3fee: ret  */
  esp += 4; SPILL(); return;
L_ff3fef: /* ff3fef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff3ff0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff3ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff3ff2: xor eax, eax */
  eax = 0;
/* ff3ff4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff3ff5: ret  */
  esp += 4; SPILL(); return;
}

void f_ff4000(void) {
  LOAD_REGS();
L_ff4000: /* ff4000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4001: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ff4005: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff4008: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff400b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* ff400e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff400f: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* ff4013: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ff4016: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* ff4019: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff401a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff401e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff401f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff4020: call 0x100913c */
  esp -= 4; W32(esp, 0xff4025u); SPILL(); f_100913c(); if (g_unwind) return; RELOAD();
/* ff4025: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff4028: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ff402b: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* ff402e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4031: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4033: ret  */
  esp += 4; SPILL(); return;
}

void f_ff4040(void) {
  LOAD_REGS();
L_ff4040: /* ff4040: mov ecx, eax */
  ecx = eax;
/* ff4042: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff4045: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff4048: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ff404a: mov eax, ecx */
  eax = ecx;
/* ff404c: mov edx, ecx */
  edx = ecx;
/* ff404e: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff4051: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff4054: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff4056: and eax, 0xff00ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff405b: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff405e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff4060: mov ecx, eax */
  ecx = eax;
/* ff4062: mov edx, eax */
  edx = eax;
/* ff4064: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* ff4067: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ff406a: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* ff406c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff406f: and ecx, 0xf0f0f0f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0f0f0fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff4075: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* ff4077: mov edx, ecx */
  edx = ecx;
/* ff4079: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* ff407c: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* ff4083: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* ff4085: and edx, 0x33333333 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x33333333u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff408b: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* ff408e: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* ff4090: mov eax, edx */
  eax = edx;
/* ff4092: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* ff4094: lea ecx, [edx + edx] */
  ecx = (uint32_t)(edx + edx);
/* ff4097: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff4099: and eax, 0x55555555 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff409e: add edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff40a0: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* ff40a2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff40b0(void) {
  LOAD_REGS();
L_ff40b0: /* ff40b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff40b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff40b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff40b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff40b4: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* ff40b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff40b9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* ff40bd: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* ff40c0: mov ebp, dword ptr [edi + 0x28] */
  ebp = R32((uint32_t)(edi + 0x28u));
/* ff40c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff40c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff40c5: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* ff40c9: call 0x1009160 */
  esp -= 4; W32(esp, 0xff40ceu); SPILL(); f_1009160(); if (g_unwind) return; RELOAD();
/* ff40ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff40d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff40d3: jl 0xff4112 */
  if ((sf != of)) goto L_ff4112;
L_ff40d5: /* ff40d5: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* ff40d8: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* ff40db: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* ff40dd: jns 0xff40f7 */
  if (!sf) goto L_ff40f7;
L_ff40df: /* ff40df: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* ff40e2: mov esi, ebx */
  esi = ebx;
/* ff40e4: sar esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 15;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* ff40e7: and ebx, 0x7fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* ff40ed: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* ff40f3: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff40f5: jmp 0xff4117 */
  goto L_ff4117;
L_ff40f7: /* ff40f7: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* ff40fa: movsx eax, byte ptr [edx + ebx - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + ebx + 0xffffffffu)));
/* ff40ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff4100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4101: call 0x100915a */
  esp -= 4; W32(esp, 0xff4106u); SPILL(); f_100915a(); if (g_unwind) return; RELOAD();
/* ff4106: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4109: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff410a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff410b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff410c: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* ff410f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4110: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff4111: ret  */
  esp += 4; SPILL(); return;
L_ff4112: /* ff4112: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* ff4115: xor esi, esi */
  esi = 0;
L_ff4117: /* ff4117: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ff411b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff411c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff411d: call 0x1009160 */
  esp -= 4; W32(esp, 0xff4122u); SPILL(); f_1009160(); if (g_unwind) return; RELOAD();
/* ff4122: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4125: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4127: jge 0xff4152 */
  if ((sf == of)) goto L_ff4152;
L_ff4129: /* ff4129: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff4130: /* ff4130: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4133: jle 0xff414a */
  if ((zf || sf != of)) goto L_ff414a;
L_ff4135: /* ff4135: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* ff4136: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff4138: call 0x1009160 */
  esp -= 4; W32(esp, 0xff413du); SPILL(); f_1009160(); if (g_unwind) return; RELOAD();
/* ff413d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4140: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4142: jl 0xff4130 */
  if ((sf != of)) goto L_ff4130;
L_ff4144: /* ff4144: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* ff4148: jmp 0xff4152 */
  goto L_ff4152;
L_ff414a: /* ff414a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff414c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* ff4150: jl 0xff41bc */
  if ((sf != of)) goto L_ff41bc;
L_ff4152: /* ff4152: call 0xff4040 */
  esp -= 4; W32(esp, 0xff4157u); SPILL(); f_ff4040(); if (g_unwind) return; RELOAD();
/* ff4157: mov edx, edi */
  edx = edi;
/* ff4159: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff415b: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff415e: jle 0xff4191 */
  if ((zf || sf != of)) goto L_ff4191;
L_ff4160: /* ff4160: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* ff4164: mov ebx, dword ptr [ecx + 0x14] */
  ebx = R32((uint32_t)(ecx + 0x14u));
L_ff4167: /* ff4167: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* ff4169: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* ff416c: cmp eax, dword ptr [ebx + ecx*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ff416f: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* ff4171: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* ff4173: lea ebp, [ecx - 1] */
  ebp = (uint32_t)(ecx + 0xffffffffu);
/* ff4176: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* ff4178: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ff417a: and ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* ff417c: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ff417e: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff4180: mov edx, edi */
  edx = edi;
/* ff4182: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff4184: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4187: jg 0xff4167 */
  if ((!zf && sf == of)) goto L_ff4167;
L_ff4189: /* ff4189: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ff418d: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_ff4191: /* ff4191: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff4195: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* ff4198: movsx eax, byte ptr [eax + esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + esi)));
/* ff419c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff419e: jg 0xff41b2 */
  if ((!zf && sf == of)) goto L_ff41b2;
L_ff41a0: /* ff41a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff41a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff41a2: call 0x100915a */
  esp -= 4; W32(esp, 0xff41a7u); SPILL(); f_100915a(); if (g_unwind) return; RELOAD();
/* ff41a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff41aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff41ab: mov eax, esi */
  eax = esi;
/* ff41ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff41ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff41af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff41b0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff41b1: ret  */
  esp += 4; SPILL(); return;
L_ff41b2: /* ff41b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff41b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff41b4: call 0x100915a */
  esp -= 4; W32(esp, 0xff41b9u); SPILL(); f_100915a(); if (g_unwind) return; RELOAD();
/* ff41b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ff41bc: /* ff41bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff41bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff41be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff41bf: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff41c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff41c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ff41c4: ret  */
  esp += 4; SPILL(); return;
}

void f_ff41d0(void) {
  LOAD_REGS();
L_ff41d0: /* ff41d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ff41d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff41d5: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* ff41d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff41da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff41db: call 0xff40b0 */
  esp -= 4; W32(esp, 0xff41e0u); SPILL(); f_ff40b0(); if (g_unwind) return; RELOAD();
/* ff41e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff41e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff41e5: jl 0xff41ed */
  if ((sf != of)) goto L_ff41ed;
L_ff41e7: /* ff41e7: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* ff41ea: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
L_ff41ed: /* ff41ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff41ee: ret  */
  esp += 4; SPILL(); return;
}

void f_ff41f0(void) {
  LOAD_REGS();
L_ff41f0: /* ff41f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff41f1: mov ebp, esp */
  ebp = esp;
/* ff41f3: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff41f6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ff41f9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff41fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff41fb: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ff41fe: idiv dword ptr [ebx] */
  { int32_t d = (int32_t)R32((uint32_t)(ebx)); if (!d) d = (int32_t)guest_divzero(0xff41fe);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff4200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff4202: mov edi, eax */
  edi = eax;
/* ff4204: lea esi, [edi*4] */
  esi = (uint32_t)(edi*4);
/* ff420b: mov eax, esi */
  eax = esi;
/* ff420d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4210: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff4213: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* ff4216: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* ff4219: call 0x1009200 */
  esp -= 4; W32(esp, 0xff421eu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff421e: mov eax, esi */
  eax = esi;
/* ff4220: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4223: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff4226: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* ff4229: call 0x1009200 */
  esp -= 4; W32(esp, 0xff422eu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff422e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4230: mov esi, esp */
  esi = esp;
/* ff4232: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* ff4235: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* ff423c: jle 0xff427d */
  if ((zf || sf != of)) goto L_ff427d;
L_ff423e: /* ff423e: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff4241: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff4243: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
L_ff4246: /* ff4246: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff4249: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff424a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff424b: call 0xff40b0 */
  esp -= 4; W32(esp, 0xff4250u); SPILL(); f_ff40b0(); if (g_unwind) return; RELOAD();
/* ff4250: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff4253: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4256: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff4259: mov dword ptr [ecx + esi], eax */
  W32((uint32_t)(ecx + esi), eax);
/* ff425c: je 0xff4349 */
  if (zf) goto L_ff4349;
L_ff4262: /* ff4262: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff4264: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff4267: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ff426a: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* ff426d: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ff4270: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff4271: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* ff4273: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff4276: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4278: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* ff427b: jl 0xff4246 */
  if ((sf != of)) goto L_ff4246;
L_ff427d: /* ff427d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff427f: xor edx, edx */
  edx = 0;
/* ff4281: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4283: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* ff4286: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* ff4289: jle 0xff433d */
  if ((zf || sf != of)) goto L_ff433d;
L_ff428f: /* ff428f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff4292: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
L_ff4295: /* ff4295: xor esi, esi */
  esi = 0;
/* ff4297: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff429a: jl 0xff42ee */
  if ((sf != of)) goto L_ff42ee;
L_ff429c: /* ff429c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff429f: mov edi, 3 */
  edi = 0x3u;
/* ff42a4: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_ff42a7: /* ff42a7: mov ebx, dword ptr [ecx - 8] */
  ebx = R32((uint32_t)(ecx + 0xfffffff8u));
/* ff42aa: fld dword ptr [ebx + edx] */
  { double v = F32((uint32_t)(ebx + edx)); FPUSH(v); }
/* ff42ad: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff42b0: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* ff42b2: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff42b5: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff42b8: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff42bb: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ff42be: mov ebx, dword ptr [ecx - 0x14] */
  ebx = R32((uint32_t)(ecx + 0xffffffecu));
/* ff42c1: fld dword ptr [ebx + edx] */
  { double v = F32((uint32_t)(ebx + edx)); FPUSH(v); }
/* ff42c4: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* ff42c7: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ff42ca: mov ebx, dword ptr [ecx - 0x10] */
  ebx = R32((uint32_t)(ecx + 0xfffffff0u));
/* ff42cd: fld dword ptr [edx + ebx] */
  { double v = F32((uint32_t)(edx + ebx)); FPUSH(v); }
/* ff42d0: fadd dword ptr [eax - 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff8u)));
/* ff42d3: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ff42d6: mov ebx, dword ptr [ecx - 0xc] */
  ebx = R32((uint32_t)(ecx + 0xfffffff4u));
/* ff42d9: fld dword ptr [ebx + edx] */
  { double v = F32((uint32_t)(ebx + edx)); FPUSH(v); }
/* ff42dc: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff42df: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff42e1: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* ff42e4: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff42e7: jl 0xff42a7 */
  if ((sf != of)) goto L_ff42a7;
L_ff42e9: /* ff42e9: mov edi, ebx */
  edi = ebx;
/* ff42eb: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_ff42ee: /* ff42ee: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff42f0: jge 0xff4316 */
  if ((sf == of)) goto L_ff4316;
L_ff42f2: /* ff42f2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff42f5: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* ff42f8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ff42fb: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* ff42fe: mov edi, edi */
  edi = edi;
L_ff4300: /* ff4300: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff4303: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* ff4306: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* ff4309: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff430a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* ff430c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff430f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4311: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff4314: jl 0xff4300 */
  if ((sf != of)) goto L_ff4300;
L_ff4316: /* ff4316: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff4319: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* ff431c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* ff431f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4321: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ff4324: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ff4327: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4329: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* ff432b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff432c: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff432f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4331: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* ff4334: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* ff4337: jl 0xff4295 */
  if ((sf != of)) goto L_ff4295;
L_ff433d: /* ff433d: xor eax, eax */
  eax = 0;
/* ff433f: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* ff4342: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4344: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4345: mov esp, ebp */
  esp = ebp;
/* ff4347: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4348: ret  */
  esp += 4; SPILL(); return;
L_ff4349: /* ff4349: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff434c: lea esp, [ebp - 0x20] */
  esp = (uint32_t)(ebp + 0xffffffe0u);
/* ff434f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4350: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4351: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4352: mov esp, ebp */
  esp = ebp;
/* ff4354: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4355: ret  */
  esp += 4; SPILL(); return;
}

void f_ff4360(void) {
  LOAD_REGS();
L_ff4360: /* ff4360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff4361: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ff4365: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* ff4367: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4368: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4369: xor esi, esi */
  esi = 0;
/* ff436b: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff436e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff4372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff4373: jle 0xff43c6 */
  if ((zf || sf != of)) goto L_ff43c6;
L_ff4375: /* ff4375: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4377: jle 0xff43bf */
  if ((zf || sf != of)) goto L_ff43bf;
L_ff4379: /* ff4379: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ff437d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
L_ff4381: /* ff4381: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4382: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff4383: call 0xff40b0 */
  esp -= 4; W32(esp, 0xff4388u); SPILL(); f_ff40b0(); if (g_unwind) return; RELOAD();
/* ff4388: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff438b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff438e: je 0xff4475 */
  if (zf) goto L_ff4475;
L_ff4394: /* ff4394: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff4396: mov edx, ecx */
  edx = ecx;
/* ff4398: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff439b: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ff439e: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* ff43a1: xor eax, eax */
  eax = 0;
/* ff43a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff43a5: jle 0xff43b9 */
  if ((zf || sf != of)) goto L_ff43b9;
L_ff43a7: /* ff43a7: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* ff43aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff43ab: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff43ae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff43af: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ff43b3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* ff43b5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff43b7: jl 0xff43a7 */
  if ((sf != of)) goto L_ff43a7;
L_ff43b9: /* ff43b9: cmp esi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff43bd: jl 0xff4381 */
  if ((sf != of)) goto L_ff4381;
L_ff43bf: /* ff43bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff43c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff43c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff43c2: xor eax, eax */
  eax = 0;
/* ff43c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff43c5: ret  */
  esp += 4; SPILL(); return;
L_ff43c6: /* ff43c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff43c8: jle 0xff43bf */
  if ((zf || sf != of)) goto L_ff43bf;
L_ff43ca: /* ff43ca: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ff43ce: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
L_ff43d2: /* ff43d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff43d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff43d4: call 0xff40b0 */
  esp -= 4; W32(esp, 0xff43d9u); SPILL(); f_ff40b0(); if (g_unwind) return; RELOAD();
/* ff43d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff43dc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff43df: je 0xff4475 */
  if (zf) goto L_ff4475;
L_ff43e5: /* ff43e5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* ff43e7: mov ecx, edx */
  ecx = edx;
/* ff43e9: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* ff43ec: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* ff43ef: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* ff43f2: xor eax, eax */
  eax = 0;
/* ff43f4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* ff43f5: cmp edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ff43f8: ja 0xff4464 */
  if ((!cf && !zf)) goto L_ff4464;
L_ff43fa: /* ff43fa: jmp dword ptr [edx*4 + 0xff4480] */
  switch (R32((uint32_t)(edx*4 + 0xff4480u))) {
    case 0xff4401u: goto L_ff4401;
    case 0xff4410u: goto L_ff4410;
    case 0xff441cu: goto L_ff441c;
    case 0xff4428u: goto L_ff4428;
    case 0xff4434u: goto L_ff4434;
    case 0xff4440u: goto L_ff4440;
    case 0xff444cu: goto L_ff444c;
    case 0xff4458u: goto L_ff4458;
    default: guest_badjump(0xff43fa, R32((uint32_t)(edx*4 + 0xff4480u))); return;
  }
L_ff4401: /* ff4401: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ff4403: mov eax, 1 */
  eax = 0x1u;
/* ff4408: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff440b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff440c: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff4410: /* ff4410: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff4413: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff4414: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff4417: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff4418: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff441c: /* ff441c: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff441f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff4420: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff4423: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff4424: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff4428: /* ff4428: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff442b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff442c: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff442f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff4430: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff4434: /* ff4434: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff4437: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff4438: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff443b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff443c: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff4440: /* ff4440: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff4443: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff4444: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff4447: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff4448: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff444c: /* ff444c: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff444f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff4450: fadd dword ptr [edi + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4)));
/* ff4453: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff4454: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff4458: /* ff4458: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* ff445b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff445c: fadd dword ptr [edi + esi*4 - 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + esi*4 + 0xfffffffcu)));
/* ff4460: fstp dword ptr [edi + esi*4 - 4] */
  WF32((uint32_t)(edi + esi*4 + 0xfffffffcu), ST0); FPOP();
L_ff4464: /* ff4464: cmp esi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4468: jl 0xff43d2 */
  if ((sf != of)) goto L_ff43d2;
L_ff446e: /* ff446e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff446f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4470: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4471: xor eax, eax */
  eax = 0;
/* ff4473: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4474: ret  */
  esp += 4; SPILL(); return;
L_ff4475: /* ff4475: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4476: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4477: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4478: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff447b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff447c: ret  */
  esp += 4; SPILL(); return;
}

void f_ff44a0(void) {
  LOAD_REGS();
L_ff44a0: /* ff44a0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ff44a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff44a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff44a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff44a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff44a8: xor edi, edi */
  edi = 0;
/* ff44aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff44ac: jle 0xff44f6 */
  if ((zf || sf != of)) goto L_ff44f6;
L_ff44ae: /* ff44ae: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* ff44b2: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* ff44b6: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* ff44ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff44c0: /* ff44c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff44c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff44c2: call 0xff40b0 */
  esp -= 4; W32(esp, 0xff44c7u); SPILL(); f_ff40b0(); if (g_unwind) return; RELOAD();
/* ff44c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff44ca: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff44cd: je 0xff44fd */
  if (zf) goto L_ff44fd;
L_ff44cf: /* ff44cf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff44d1: mov edx, ecx */
  edx = ecx;
/* ff44d3: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* ff44d6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* ff44d9: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* ff44dc: xor eax, eax */
  eax = 0;
/* ff44de: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff44e0: jle 0xff44f0 */
  if ((zf || sf != of)) goto L_ff44f0;
L_ff44e2: /* ff44e2: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* ff44e5: mov dword ptr [ebx + edi*4], ecx */
  W32((uint32_t)(ebx + edi*4), ecx);
/* ff44e8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff44ea: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff44eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ff44ec: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff44ee: jl 0xff44e2 */
  if ((sf != of)) goto L_ff44e2;
L_ff44f0: /* ff44f0: cmp edi, dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff44f4: jl 0xff44c0 */
  if ((sf != of)) goto L_ff44c0;
L_ff44f6: /* ff44f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff44f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff44f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff44f9: xor eax, eax */
  eax = 0;
/* ff44fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff44fc: ret  */
  esp += 4; SPILL(); return;
L_ff44fd: /* ff44fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff44fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff44ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4500: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff4503: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4504: ret  */
  esp += 4; SPILL(); return;
}

void f_ff4510(void) {
  LOAD_REGS();
L_ff4510: /* ff4510: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ff4514: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff4515: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* ff4519: mov eax, ecx */
  eax = ecx;
/* ff451b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff451c: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xff451c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff451e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff451f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4520: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff4521: xor esi, esi */
  esi = 0;
/* ff4523: mov edi, eax */
  edi = eax;
/* ff4525: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ff4529: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff452b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff452c: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xff452c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff452e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4530: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ff4534: jge 0xff459c */
  if ((sf == of)) goto L_ff459c;
L_ff4536: /* ff4536: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ff453a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ff4540: /* ff4540: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff4544: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff4545: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4546: call 0xff40b0 */
  esp -= 4; W32(esp, 0xff454bu); SPILL(); f_ff40b0(); if (g_unwind) return; RELOAD();
/* ff454b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff454e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff4551: je 0xff45a3 */
  if (zf) goto L_ff45a3;
L_ff4553: /* ff4553: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff4556: mov ecx, edx */
  ecx = edx;
/* ff4558: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* ff455b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff455e: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* ff4561: xor ecx, ecx */
  ecx = 0;
/* ff4563: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4565: jle 0xff4596 */
  if ((zf || sf != of)) goto L_ff4596;
L_ff4567: /* ff4567: jmp 0xff4570 */
  goto L_ff4570;
L_ff4570: /* ff4570: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff4574: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* ff4577: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ff457a: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* ff457d: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* ff4580: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff4581: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ff4583: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff4587: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff4589: jne 0xff458e */
  if (!zf) goto L_ff458e;
L_ff458b: /* ff458b: xor esi, esi */
  esi = 0;
/* ff458d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_ff458e: /* ff458e: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff4591: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff4592: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4594: jl 0xff4570 */
  if ((sf != of)) goto L_ff4570;
L_ff4596: /* ff4596: cmp edi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff459a: jl 0xff4540 */
  if ((sf != of)) goto L_ff4540;
L_ff459c: /* ff459c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff459d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff459e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff459f: xor eax, eax */
  eax = 0;
/* ff45a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff45a2: ret  */
  esp += 4; SPILL(); return;
L_ff45a3: /* ff45a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff45a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff45a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff45a6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff45a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff45aa: ret  */
  esp += 4; SPILL(); return;
}

void f_ff4569(void) {
  LOAD_REGS();
  goto L_ff4569;
L_ff4540: /* ff4540: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff4544: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff4545: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4546: call 0xff40b0 */
  esp -= 4; W32(esp, 0xff454bu); SPILL(); f_ff40b0(); if (g_unwind) return; RELOAD();
/* ff454b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff454e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff4551: je 0xff45a3 */
  if (zf) goto L_ff45a3;
L_ff4553: /* ff4553: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* ff4556: mov ecx, edx */
  ecx = edx;
/* ff4558: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* ff455b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ff455e: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* ff4561: xor ecx, ecx */
  ecx = 0;
/* ff4563: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4565: jle 0xff4596 */
  if ((zf || sf != of)) goto L_ff4596;
L_ff4567: /* ff4567: jmp 0xff4570 */
  goto L_ff4570;
L_ff4569: /* ff4569: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff4570: /* ff4570: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff4574: fld dword ptr [ebx + ecx*4] */
  { double v = F32((uint32_t)(ebx + ecx*4)); FPUSH(v); }
/* ff4577: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ff457a: fadd dword ptr [eax + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi*4)));
/* ff457d: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* ff4580: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ff4581: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ff4583: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff4587: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff4589: jne 0xff458e */
  if (!zf) goto L_ff458e;
L_ff458b: /* ff458b: xor esi, esi */
  esi = 0;
/* ff458d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_ff458e: /* ff458e: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* ff4591: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff4592: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4594: jl 0xff4570 */
  if ((sf != of)) goto L_ff4570;
L_ff4596: /* ff4596: cmp edi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff459a: jl 0xff4540 */
  if ((sf != of)) goto L_ff4540;
L_ff459c: /* ff459c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff459d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff459e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff459f: xor eax, eax */
  eax = 0;
/* ff45a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff45a2: ret  */
  esp += 4; SPILL(); return;
L_ff45a3: /* ff45a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff45a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff45a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff45a6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff45a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff45aa: ret  */
  esp += 4; SPILL(); return;
}

void f_ff45b0(void) {
  LOAD_REGS();
L_ff45b0: /* ff45b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff45b1: mov ebp, esp */
  ebp = esp;
/* ff45b3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ff45b6: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff45b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ff45bc: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* ff45bf: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* ff45c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff45c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff45c4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* ff45c7: mov ebx, 0x80 */
  ebx = 0x80u;
/* ff45cc: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* ff45cf: mov dword ptr [esi + 8], 0x40 */
  W32((uint32_t)(esi + 0x8u), 0x40u);
/* ff45d6: mov edx, dword ptr [eax + 0xe68] */
  edx = R32((uint32_t)(eax + 0xe68u));
/* ff45dc: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* ff45df: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* ff45e1: mov dword ptr [esi + 0xa4], ebx */
  W32((uint32_t)(esi + 0xa4u), ebx);
/* ff45e7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* ff45ea: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff45eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff45ec: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff45ee: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff45f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff45f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff45f3: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* ff45f7: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* ff45fd: call dword ptr [0x100a038] */
  esp -= 4; W32(esp, 0xff4603u); SPILL(); f_4016cb(); if (g_unwind) return; /* MSVCR70!calloc */ RELOAD();
/* ff4603: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* ff4606: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* ff4609: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff460a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff460b: call 0xffb820 */
  esp -= 4; W32(esp, 0xff4610u); SPILL(); f_ffb820(); if (g_unwind) return; RELOAD();
/* ff4610: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4613: xor edi, edi */
  edi = 0;
/* ff4615: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* ff4619: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ff4620: /* ff4620: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff4624: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff4627: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff462b: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* ff462f: fdiv qword ptr [0x100a138] */
  ST0 = ST0 / (F64((uint32_t)(0x100a138u)));
/* ff4635: fmul qword ptr [0x100a130] */
  ST0 = ST0 * (F64((uint32_t)(0x100a130u)));
/* ff463b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff463e: call 0x100923e */
  esp -= 4; W32(esp, 0xff4643u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* ff4643: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* ff4646: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* ff464a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* ff464e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4651: fstp dword ptr [ecx + edi*4] */
  WF32((uint32_t)(ecx + edi*4), ST0); FPOP();
/* ff4654: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* ff4657: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* ff465a: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* ff465d: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* ff4661: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff4665: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff4666: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4668: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* ff466c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* ff4670: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* ff4672: jl 0xff4620 */
  if ((sf != of)) goto L_ff4620;
L_ff4674: /* ff4674: mov eax, 4 */
  eax = 0x4u;
/* ff4679: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* ff467c: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* ff467f: mov eax, 6 */
  eax = 0x6u;
/* ff4684: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* ff4687: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* ff468a: mov eax, 8 */
  eax = 0x8u;
/* ff468f: mov dword ptr [esi + 0x28], 2 */
  W32((uint32_t)(esi + 0x28u), 0x2u);
/* ff4696: mov dword ptr [esi + 0x3c], 5 */
  W32((uint32_t)(esi + 0x3cu), 0x5u);
/* ff469d: mov dword ptr [esi + 0x58], 9 */
  W32((uint32_t)(esi + 0x58u), 0x9u);
/* ff46a4: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* ff46a7: mov dword ptr [esi + 0x68], 0xd */
  W32((uint32_t)(esi + 0x68u), 0xdu);
/* ff46ae: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* ff46b1: mov dword ptr [esi + 0x78], 0x11 */
  W32((uint32_t)(esi + 0x78u), 0x11u);
/* ff46b8: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* ff46bb: mov dword ptr [esi + 0x88], 0x16 */
  W32((uint32_t)(esi + 0x88u), 0x16u);
/* ff46c5: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* ff46cb: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* ff46ce: mov dword ptr [esp + 0x20], 7 */
  W32((uint32_t)(esp + 0x20u), 0x7u);
/* ff46d6: jmp 0xff46e0 */
  goto L_ff46e0;
L_ff46e0: /* ff46e0: mov eax, dword ptr [edi - 8] */
  eax = R32((uint32_t)(edi + 0xfffffff8u));
/* ff46e3: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* ff46ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff46eb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff46ef: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff46f5u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff46f5: mov dword ptr [edi - 4], eax */
  W32((uint32_t)(edi + 0xfffffffcu), eax);
/* ff46f8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff46fc: xor ebx, ebx */
  ebx = 0;
/* ff46fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4701: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4703: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ff4707: jle 0xff4760 */
  if ((zf || sf != of)) goto L_ff4760;
L_ff4709: /* ff4709: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff470d: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
L_ff4711: /* ff4711: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff4715: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff4718: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff471c: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff4720: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ff4726: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ff472a: fmul qword ptr [0x100a130] */
  ST0 = ST0 * (F64((uint32_t)(0x100a130u)));
/* ff4730: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff4733: call 0x100923e */
  esp -= 4; W32(esp, 0xff4738u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* ff4738: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* ff473b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff473f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff4743: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4746: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* ff4749: mov ecx, dword ptr [edi - 4] */
  ecx = R32((uint32_t)(edi + 0xfffffffcu));
/* ff474c: fld dword ptr [ecx + ebx*4] */
  { double v = F32((uint32_t)(ecx + ebx*4)); FPUSH(v); }
/* ff474f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff4753: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* ff4755: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff4756: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4758: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ff475c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ff475e: jl 0xff4711 */
  if ((sf != of)) goto L_ff4711;
L_ff4760: /* ff4760: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ff4762: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff4766: fdivr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) / ST0;
/* ff476c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff476f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff4770: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff4774: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* ff4777: jne 0xff46e0 */
  if (!zf) goto L_ff46e0;
L_ff477d: /* ff477d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff4781: mov edi, dword ptr [0x100a038] */
  edi = R32((uint32_t)(0x100a038u));
/* ff4787: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* ff478a: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* ff478f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff4790: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff4792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff4792: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* ff4798: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff479a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff479b: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* ff47a1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff47a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff47a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff47a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff47a7: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* ff47ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff47ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff47af: mov esp, ebp */
  esp = ebp;
/* ff47b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff47b2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff46d8(void) {
  LOAD_REGS();
L_ff46d8: /* ff46d8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* ff46df: nop  */
L_ff46e0: /* ff46e0: mov eax, dword ptr [edi - 8] */
  eax = R32((uint32_t)(edi + 0xfffffff8u));
/* ff46e3: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* ff46ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff46eb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff46ef: call dword ptr [0x100a03c] */
  esp -= 4; W32(esp, 0xff46f5u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* ff46f5: mov dword ptr [edi - 4], eax */
  W32((uint32_t)(edi + 0xfffffffcu), eax);
/* ff46f8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff46fc: xor ebx, ebx */
  ebx = 0;
/* ff46fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4701: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4703: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ff4707: jle 0xff4760 */
  if ((zf || sf != of)) goto L_ff4760;
L_ff4709: /* ff4709: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ff470d: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
L_ff4711: /* ff4711: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ff4715: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff4718: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff471c: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff4720: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ff4726: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ff472a: fmul qword ptr [0x100a130] */
  ST0 = ST0 * (F64((uint32_t)(0x100a130u)));
/* ff4730: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff4733: call 0x100923e */
  esp -= 4; W32(esp, 0xff4738u); SPILL(); f_100923e(); if (g_unwind) return; RELOAD();
/* ff4738: mov eax, dword ptr [edi - 4] */
  eax = R32((uint32_t)(edi + 0xfffffffcu));
/* ff473b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* ff473f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ff4743: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4746: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* ff4749: mov ecx, dword ptr [edi - 4] */
  ecx = R32((uint32_t)(edi + 0xfffffffcu));
/* ff474c: fld dword ptr [ecx + ebx*4] */
  { double v = F32((uint32_t)(ecx + ebx*4)); FPUSH(v); }
/* ff474f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ff4753: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* ff4755: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ff4756: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4758: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ff475c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* ff475e: jl 0xff4711 */
  if ((sf != of)) goto L_ff4711;
L_ff4760: /* ff4760: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ff4762: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff4766: fdivr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) / ST0;
/* ff476c: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff476f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* ff4770: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff4774: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* ff4777: jne 0xff46e0 */
  if (!zf) goto L_ff46e0;
L_ff477d: /* ff477d: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* ff4781: mov edi, dword ptr [0x100a038] */
  edi = R32((uint32_t)(0x100a038u));
/* ff4787: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* ff478a: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* ff478f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff4790: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff4792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff4792: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* ff4798: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ff479a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff479b: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* ff47a1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xff47a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff47a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff47a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff47a7: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* ff47ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff47ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff47af: mov esp, ebp */
  esp = ebp;
/* ff47b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff47b2: ret  */
  esp += 4; SPILL(); return;
}

void f_ff47c0(void) {
  LOAD_REGS();
L_ff47c0: /* ff47c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff47c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff47c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff47c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff47c4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* ff47c8: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* ff47cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff47cc: call 0xffc270 */
  esp -= 4; W32(esp, 0xff47d1u); SPILL(); f_ffc270(); if (g_unwind) return; RELOAD();
/* ff47d1: mov ebx, dword ptr [0x100a040] */
  ebx = R32((uint32_t)(0x100a040u));
/* ff47d7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff47da: lea esi, [edi + 0x30] */
  esi = (uint32_t)(edi + 0x30u);
/* ff47dd: mov ebp, 7 */
  ebp = 0x7u;
L_ff47e2: /* ff47e2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* ff47e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff47e5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff47e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff47e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff47ea: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff47ed: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* ff47ee: jne 0xff47e2 */
  if (!zf) goto L_ff47e2;
L_ff47f0: /* ff47f0: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* ff47f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ff47f4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff47f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff47f6: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* ff47fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff47fd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff47ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff47ff: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* ff4805: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff4806: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xff4808u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ff4808: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff480b: mov ecx, 0x2d */
  ecx = 0x2du;
/* ff4810: xor eax, eax */
  eax = 0;
/* ff4812: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ff4814: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4815: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4816: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4817: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4818: ret  */
  esp += 4; SPILL(); return;
}

void f_ff4820(void) {
  LOAD_REGS();
L_ff4820: /* ff4820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4821: mov ebp, esp */
  ebp = esp;
/* ff4823: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff4826: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff4827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4828: mov esi, eax */
  esi = eax;
/* ff482a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* ff482d: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* ff4830: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* ff4833: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* ff483a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff483d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff483e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* ff4841: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ff4844: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* ff4847: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* ff484e: call 0x1009200 */
  esp -= 4; W32(esp, 0xff4853u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* ff4853: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* ff4859: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff485a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff485c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff485e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4861: mov dword ptr [ebp - 0xc], esp */
  W32((uint32_t)(ebp + 0xfffffff4u), esp);
/* ff4864: mov dword ptr [ebp - 0x14], 2 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x2u);
/* ff486b: jl 0xff4870 */
  if ((sf != of)) goto L_ff4870;
L_ff486d: /* ff486d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_ff4870: /* ff4870: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4873: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* ff4876: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* ff4879: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* ff487c: fld dword ptr [edi + 0x3c] */
  { double v = F32((uint32_t)(edi + 0x3cu)); FPUSH(v); }
/* ff487f: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* ff4882: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* ff4885: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* ff4888: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ff488e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4890: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4893: jp 0xff489c */
  if (pf) goto L_ff489c;
L_ff4895: /* ff4895: mov dword ptr [ebp - 0x10], 0 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x0u);
L_ff489c: /* ff489c: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* ff489f: fcomp dword ptr [edi + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x3cu)));
  FPOP();
/* ff48a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff48a4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff48a7: jne 0xff48af */
  if (!zf) goto L_ff48af;
L_ff48a9: /* ff48a9: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* ff48ac: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
L_ff48af: /* ff48af: xor edi, edi */
  edi = 0;
/* ff48b1: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff48b4: jl 0xff4951 */
  if ((sf != of)) goto L_ff4951;
L_ff48ba: /* ff48ba: mov ebx, dword ptr [ebp - 0xc] */
  ebx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff48bd: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ff48c0: lea ecx, [edx + 0xc] */
  ecx = (uint32_t)(edx + 0xcu);
/* ff48c3: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff48c5: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* ff48c8: mov edx, 4 */
  edx = 0x4u;
/* ff48cd: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff48cf: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* ff48d2: mov edx, 8 */
  edx = 0x8u;
/* ff48d7: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff48d9: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* ff48dc: mov edx, 0xfffffffc */
  edx = 0xfffffffcu;
/* ff48e1: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff48e3: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* ff48ea: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* ff48ed: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* ff48f0: jmp 0xff48f5 */
  goto L_ff48f5;
L_ff48f2: /* ff48f2: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
L_ff48f5: /* ff48f5: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* ff48f8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff48fa: fld dword ptr [ebx + edx] */
  { double v = F32((uint32_t)(ebx + edx)); FPUSH(v); }
/* ff48fd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff4900: fmul dword ptr [ecx - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff4u)));
/* ff4903: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4906: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4909: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* ff490c: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* ff490f: fld dword ptr [ebx + edx + 4] */
  { double v = F32((uint32_t)(ebx + edx + 0x4u)); FPUSH(v); }
/* ff4913: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ff4916: fmul dword ptr [edx + eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax + 0xfffffff0u)));
/* ff491a: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff491d: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ff4920: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* ff4923: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4925: fld dword ptr [edx + eax - 0x10] */
  { double v = F32((uint32_t)(edx + eax + 0xfffffff0u)); FPUSH(v); }
/* ff4929: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff492c: fmul dword ptr [ecx - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xffffffecu)));
/* ff492f: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ff4932: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* ff4935: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4937: fld dword ptr [edx + eax - 0x10] */
  { double v = F32((uint32_t)(edx + eax + 0xfffffff0u)); FPUSH(v); }
/* ff493b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* ff493e: fmul dword ptr [ecx - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ff4941: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff4944: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4947: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4949: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ff494c: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* ff494f: jl 0xff48f2 */
  if ((sf != of)) goto L_ff48f2;
L_ff4951: /* ff4951: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4953: jge 0xff4974 */
  if ((sf == of)) goto L_ff4974;
L_ff4955: /* ff4955: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff4958: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* ff495b: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* ff495e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_ff4960: /* ff4960: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* ff4963: fld dword ptr [edx + edi*4] */
  { double v = F32((uint32_t)(edx + edi*4)); FPUSH(v); }
/* ff4966: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff4967: fmul dword ptr [eax + ecx] */
  ST0 = ST0 * (F32((uint32_t)(eax + ecx)));
/* ff496a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff496d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff496f: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ff4972: jl 0xff4960 */
  if ((sf != of)) goto L_ff4960;
L_ff4974: /* ff4974: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff4977: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff4978: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff4979: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff497c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff497d: call 0xffc690 */
  esp -= 4; W32(esp, 0xff4982u); SPILL(); f_ffc690(); if (g_unwind) return; RELOAD();
/* ff4982: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* ff4985: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff4987: fstp qword ptr [ebp - 0x3c] */
  WF64((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* ff498a: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* ff498d: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ff4990: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* ff4993: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ff4996: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* ff4999: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* ff499f: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* ff49a2: xor esi, esi */
  esi = 0;
/* ff49a4: fld qword ptr [ebp - 0x3c] */
  { double v = F64((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* ff49a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff49aa: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff49ac: fmul qword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffc4u)));
/* ff49af: fmul qword ptr [0x100a160] */
  ST0 = ST0 * (F64((uint32_t)(0x100a160u)));
/* ff49b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff49b7: fld qword ptr [ebp - 0x34] */
  { double v = F64((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* ff49ba: fmul qword ptr [ebp - 0x34] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffccu)));
/* ff49bd: fmul qword ptr [0x100a158] */
  ST0 = ST0 * (F64((uint32_t)(0x100a158u)));
/* ff49c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff49c5: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ff49c8: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff49cb: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff49ce: jne 0xff49e4 */
  if (!zf) goto L_ff49e4;
L_ff49d0: /* ff49d0: fadd dword ptr [edi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x88u)));
/* ff49d6: mov dword ptr [edi + 0x88], edx */
  W32((uint32_t)(edi + 0x88u), edx);
/* ff49dc: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* ff49df: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ff49e2: jmp 0xff49ff */
  goto L_ff49ff;
L_ff49e4: /* ff49e4: fadd dword ptr [edi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x84u)));
/* ff49ea: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* ff49ed: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff49f0: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ff49f3: fadd dword ptr [edi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x88u)));
/* ff49f9: fstp dword ptr [edi + 0x88] */
  WF32((uint32_t)(edi + 0x88u), ST0); FPOP();
L_ff49ff: /* ff49ff: mov dword ptr [edi + 0x84], ecx */
  W32((uint32_t)(edi + 0x84u), ecx);
/* ff4a05: fld dword ptr [edi + 0x84] */
  { double v = F32((uint32_t)(edi + 0x84u)); FPUSH(v); }
/* ff4a0b: fsub dword ptr [edi + eax*4 + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(edi + eax*4 + 0x48u)));
/* ff4a0f: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* ff4a12: fstp dword ptr [edi + 0x84] */
  WF32((uint32_t)(edi + 0x84u), ST0); FPOP();
/* ff4a18: mov dword ptr [edi + eax*4 + 0x48], edx */
  W32((uint32_t)(edi + eax*4 + 0x48u), edx);
/* ff4a1c: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* ff4a22: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4a25: fmul qword ptr [0x100a150] */
  ST0 = ST0 * (F64((uint32_t)(0x100a150u)));
/* ff4a2b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* ff4a2c: mov eax, ecx */
  eax = ecx;
/* ff4a2e: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4a31: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff4a34: mov dword ptr [edi + 0x8c], ecx */
  W32((uint32_t)(edi + 0x8cu), ecx);
/* ff4a3a: jl 0xff4a42 */
  if ((sf != of)) goto L_ff4a42;
L_ff4a3c: /* ff4a3c: mov dword ptr [edi + 0x8c], esi */
  W32((uint32_t)(edi + 0x8cu), esi);
L_ff4a42: /* ff4a42: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4a45: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ff4a4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4a4d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4a50: jp 0xff4a5e */
  if (pf) goto L_ff4a5e;
L_ff4a52: /* ff4a52: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* ff4a55: mov dword ptr [ebp - 0x38], 0xc0790000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xc0790000u);
/* ff4a5c: jmp 0xff4a7b */
  goto L_ff4a7b;
L_ff4a5e: /* ff4a5e: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4a61: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff4a64: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff4a67: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff4a6a: call 0x1009172 */
  esp -= 4; W32(esp, 0xff4a6fu); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ff4a6f: fmul qword ptr [0x100a098] */
  ST0 = ST0 * (F64((uint32_t)(0x100a098u)));
/* ff4a75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4a78: fstp qword ptr [ebp - 0x3c] */
  WF64((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
L_ff4a7b: /* ff4a7b: fld qword ptr [ebp - 0x3c] */
  { double v = F64((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* ff4a7e: mov eax, ebx */
  eax = ebx;
/* ff4a80: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* ff4a86: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff4a87: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff4a89: mov ebx, eax */
  ebx = eax;
/* ff4a8b: fsub qword ptr [0x100a148] */
  ST0 = ST0 - (F64((uint32_t)(0x100a148u)));
/* ff4a91: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ff4a93: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4a95: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff4a98: jle 0xff4b53 */
  if ((zf || sf != of)) goto L_ff4b53;
L_ff4a9e: /* ff4a9e: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* ff4aa1: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
L_ff4aa4: /* ff4aa4: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ff4aa7: mov ecx, dword ptr [edx + esi*4 + 4] */
  ecx = R32((uint32_t)(edx + esi*4 + 0x4u));
/* ff4aab: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* ff4aae: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* ff4ab1: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ff4ab4: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* ff4ab7: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* ff4aba: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* ff4abd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ff4abf: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ff4ac2: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff4ac5: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ff4acb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4acd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4ad0: jp 0xff4ae2 */
  if (pf) goto L_ff4ae2;
L_ff4ad2: /* ff4ad2: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* ff4ad9: mov dword ptr [ebp - 0x38], 0xc0790000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xc0790000u);
/* ff4ae0: jmp 0xff4b02 */
  goto L_ff4b02;
L_ff4ae2: /* ff4ae2: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff4ae5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff4ae8: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff4aeb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ff4aee: call 0x1009172 */
  esp -= 4; W32(esp, 0xff4af3u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ff4af3: fmul qword ptr [0x100a098] */
  ST0 = ST0 * (F64((uint32_t)(0x100a098u)));
/* ff4af9: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff4afc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4aff: fstp qword ptr [ebp - 0x3c] */
  WF64((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
L_ff4b02: /* ff4b02: fld qword ptr [ebp - 0x3c] */
  { double v = F64((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* ff4b05: fmul qword ptr [0x100a128] */
  ST0 = ST0 * (F64((uint32_t)(0x100a128u)));
/* ff4b0b: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ff4b0e: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff4b11: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* ff4b14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4b16: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4b19: jp 0xff4b23 */
  if (pf) goto L_ff4b23;
L_ff4b1b: /* ff4b1b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ff4b1e: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* ff4b21: jmp 0xff4b26 */
  goto L_ff4b26;
L_ff4b23: /* ff4b23: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_ff4b26: /* ff4b26: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff4b29: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* ff4b2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4b2e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4b31: jp 0xff4b35 */
  if (pf) goto L_ff4b35;
L_ff4b33: /* ff4b33: mov ecx, edi */
  ecx = edi;
L_ff4b35: /* ff4b35: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4b38: mov eax, esi */
  eax = esi;
/* ff4b3a: fsub qword ptr [0x100a140] */
  ST0 = ST0 - (F64((uint32_t)(0x100a140u)));
/* ff4b40: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff4b42: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff4b45: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4b47: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ff4b4a: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* ff4b4d: jl 0xff4aa4 */
  if ((sf != of)) goto L_ff4aa4;
L_ff4b53: /* ff4b53: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ff4b56: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ff4b59: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ff4b5c: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4b5f: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff4b62: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4b65: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* ff4b6c: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* ff4b6f: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_ff4b72: /* ff4b72: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* ff4b75: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* ff4b77: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4b79: mov dword ptr [ebp - 8], 0 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x0u);
/* ff4b80: jle 0xff4ba3 */
  if ((zf || sf != of)) goto L_ff4ba3;
L_ff4b82: /* ff4b82: mov ecx, dword ptr [esi - 4] */
  ecx = R32((uint32_t)(esi + 0xfffffffcu));
/* ff4b85: mov ebx, dword ptr [ebp - 0xc] */
  ebx = R32((uint32_t)(ebp + 0xfffffff4u));
/* ff4b88: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* ff4b8b: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* ff4b8e: mov edi, edi */
  edi = edi;
L_ff4b90: /* ff4b90: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ff4b92: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4b95: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* ff4b97: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4b9a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* ff4b9b: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* ff4b9e: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ff4ba1: jne 0xff4b90 */
  if (!zf) goto L_ff4b90;
L_ff4ba3: /* ff4ba3: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff4ba6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* ff4ba8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* ff4bab: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff4bac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4bae: mov dword ptr [ebp - 4], 0xc7c34f80 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xc7c34f80u);
/* ff4bb5: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ff4bb8: mov dword ptr [ebp + 8], 0x47c34f80 */
  W32((uint32_t)(ebp + 0x8u), 0x47c34f80u);
/* ff4bbf: jge 0xff4bc4 */
  if ((sf == of)) goto L_ff4bc4;
L_ff4bc1: /* ff4bc1: add ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_ff4bc4: /* ff4bc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff4bc7: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff4bca: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ff4bcd: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff4bd0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4bd2: fcomp dword ptr [eax + edx*4] */
  fpu_com(ST0, F32((uint32_t)(eax + edx*4)));
  FPOP();
/* ff4bd5: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* ff4bd8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4bda: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4bdd: jne 0xff4be4 */
  if (!zf) goto L_ff4be4;
L_ff4bdf: /* ff4bdf: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* ff4be2: jmp 0xff4be9 */
  goto L_ff4be9;
L_ff4be4: /* ff4be4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4be6: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_ff4be9: /* ff4be9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* ff4bec: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4bee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4bf0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4bf3: jp 0xff4bfa */
  if (pf) goto L_ff4bfa;
L_ff4bf5: /* ff4bf5: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* ff4bf8: jmp 0xff4bff */
  goto L_ff4bff;
L_ff4bfa: /* ff4bfa: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4bfc: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_ff4bff: /* ff4bff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ff4c02: xor ebx, ebx */
  ebx = 0;
/* ff4c04: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4c07: jl 0xff4ce3 */
  if ((sf != of)) goto L_ff4ce3;
L_ff4c0d: /* ff4c0d: mov esi, 3 */
  esi = 0x3u;
L_ff4c12: /* ff4c12: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff4c13: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff4c16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4c18: jge 0xff4c20 */
  if ((sf == of)) goto L_ff4c20;
L_ff4c1a: /* ff4c1a: add ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4c1d: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_ff4c20: /* ff4c20: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4c23: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4c25: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4c27: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4c2a: je 0xff4c31 */
  if (zf) goto L_ff4c31;
L_ff4c2c: /* ff4c2c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4c2e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff4c31: /* ff4c31: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff4c34: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4c36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4c38: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4c3b: jnp 0xff4c42 */
  if (!pf) goto L_ff4c42;
L_ff4c3d: /* ff4c3d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4c3f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ff4c42: /* ff4c42: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff4c43: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff4c46: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4c48: jge 0xff4c50 */
  if ((sf == of)) goto L_ff4c50;
L_ff4c4a: /* ff4c4a: add ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4c4d: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_ff4c50: /* ff4c50: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4c53: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4c55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4c57: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4c5a: je 0xff4c61 */
  if (zf) goto L_ff4c61;
L_ff4c5c: /* ff4c5c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4c5e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff4c61: /* ff4c61: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff4c64: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4c66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4c68: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4c6b: jnp 0xff4c72 */
  if (!pf) goto L_ff4c72;
L_ff4c6d: /* ff4c6d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4c6f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ff4c72: /* ff4c72: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff4c73: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff4c76: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4c78: jge 0xff4c80 */
  if ((sf == of)) goto L_ff4c80;
L_ff4c7a: /* ff4c7a: add ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4c7d: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_ff4c80: /* ff4c80: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4c83: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4c85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4c87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4c8a: je 0xff4c91 */
  if (zf) goto L_ff4c91;
L_ff4c8c: /* ff4c8c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4c8e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff4c91: /* ff4c91: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff4c94: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4c96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4c98: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4c9b: jnp 0xff4ca2 */
  if (!pf) goto L_ff4ca2;
L_ff4c9d: /* ff4c9d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4c9f: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ff4ca2: /* ff4ca2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff4ca3: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff4ca6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4ca8: jge 0xff4cb0 */
  if ((sf == of)) goto L_ff4cb0;
L_ff4caa: /* ff4caa: add ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4cad: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_ff4cb0: /* ff4cb0: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4cb3: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4cb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4cb7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4cba: je 0xff4cc1 */
  if (zf) goto L_ff4cc1;
L_ff4cbc: /* ff4cbc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4cbe: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff4cc1: /* ff4cc1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff4cc4: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4cc6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4cc8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4ccb: jnp 0xff4cd2 */
  if (!pf) goto L_ff4cd2;
L_ff4ccd: /* ff4ccd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4ccf: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ff4cd2: /* ff4cd2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ff4cd5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff4cd8: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff4cdb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4cdd: jl 0xff4c12 */
  if ((sf != of)) goto L_ff4c12;
L_ff4ce3: /* ff4ce3: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4ce6: jge 0xff4d2b */
  if ((sf == of)) goto L_ff4d2b;
L_ff4ce8: /* ff4ce8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff4ceb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* ff4cee: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* ff4cf1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4cf3: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* ff4cf6: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_ff4cf8: /* ff4cf8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ff4cf9: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* ff4cfc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4cfe: jge 0xff4d06 */
  if ((sf == of)) goto L_ff4d06;
L_ff4d00: /* ff4d00: add ecx, 0x11 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4d03: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_ff4d06: /* ff4d06: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ff4d09: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4d0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4d0d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4d10: je 0xff4d17 */
  if (zf) goto L_ff4d17;
L_ff4d12: /* ff4d12: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4d14: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_ff4d17: /* ff4d17: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* ff4d1a: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ff4d1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4d1e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4d21: jnp 0xff4d28 */
  if (!pf) goto L_ff4d28;
L_ff4d23: /* ff4d23: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4d25: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ff4d28: /* ff4d28: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* ff4d29: jne 0xff4cf8 */
  if (!zf) goto L_ff4cf8;
L_ff4d2b: /* ff4d2b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* ff4d2d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* ff4d30: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* ff4d33: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ff4d36: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* ff4d39: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* ff4d3c: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ff4d3f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* ff4d42: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* ff4d45: mov dword ptr [esi + edx*4], eax */
  W32((uint32_t)(esi + edx*4), eax);
/* ff4d48: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* ff4d4a: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* ff4d4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* ff4d4e: mov eax, edx */
  eax = edx;
/* ff4d50: cmp eax, 0x11 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4d53: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* ff4d56: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* ff4d58: jl 0xff4d60 */
  if ((sf != of)) goto L_ff4d60;
L_ff4d5a: /* ff4d5a: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_ff4d60: /* ff4d60: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* ff4d63: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* ff4d66: fadd dword ptr [edx - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0xffffffe4u)));
/* ff4d69: fcomp dword ptr [ebp - 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd0u)));
  FPOP();
/* ff4d6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4d6e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ff4d71: jp 0xff4d77 */
  if (pf) goto L_ff4d77;
L_ff4d73: /* ff4d73: or dword ptr [ebp - 0x18], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_ff4d77: /* ff4d77: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* ff4d79: fsub dword ptr [ebp - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff0u)));
/* ff4d7c: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* ff4d7f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ff4d81: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4d84: jne 0xff4d8a */
  if (!zf) goto L_ff4d8a;
L_ff4d86: /* ff4d86: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_ff4d8a: /* ff4d8a: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* ff4d8d: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4d90: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ff4d93: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4d96: add edi, 0x90 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff4d9c: cmp ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4da2: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* ff4da5: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ff4da8: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* ff4dab: jl 0xff4b72 */
  if ((sf != of)) goto L_ff4b72;
L_ff4db1: /* ff4db1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ff4db4: lea esp, [ebp - 0x48] */
  esp = (uint32_t)(ebp + 0xffffffb8u);
/* ff4db7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4db8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4db9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4dba: mov esp, ebp */
  esp = ebp;
/* ff4dbc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4dbd: ret  */
  esp += 4; SPILL(); return;
}

void f_ff4dc0(void) {
  LOAD_REGS();
L_ff4dc0: /* ff4dc0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ff4dc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ff4dc4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4dc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ff4dc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ff4dc7: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* ff4dcb: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* ff4dce: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* ff4dd0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* ff4dd3: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ff4dd6: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* ff4ddc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff4ddd: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ff4de1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff4de4: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xff4de4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff4de6: mov ebp, eax */
  ebp = eax;
/* ff4de8: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* ff4deb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff4dec: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0xff4dec);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff4dee: mov ebx, eax */
  ebx = eax;
/* ff4df0: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* ff4df3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4df5: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* ff4df9: jge 0xff4dfd */
  if ((sf == of)) goto L_ff4dfd;
L_ff4dfb: /* ff4dfb: xor ebp, ebp */
  ebp = 0;
L_ff4dfd: /* ff4dfd: cmp ebx, dword ptr [esi + 0xa4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4e03: jle 0xff4e28 */
  if ((zf || sf != of)) goto L_ff4e28;
L_ff4e05: /* ff4e05: mov ecx, dword ptr [esi + 0xa0] */
  ecx = R32((uint32_t)(esi + 0xa0u));
/* ff4e0b: lea eax, [ebx + 6] */
  eax = (uint32_t)(ebx + 0x6u);
/* ff4e0e: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* ff4e14: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ff4e17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff4e18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff4e19: call dword ptr [0x100a048] */
  esp -= 4; W32(esp, 0xff4e1fu); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* ff4e1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4e22: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
L_ff4e28: /* ff4e28: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4e2a: jge 0xff4f1f */
  if ((sf == of)) goto L_ff4f1f;
L_ff4e30: /* ff4e30: mov edi, dword ptr [esi + 0x9c] */
  edi = R32((uint32_t)(esi + 0x9cu));
/* ff4e36: xor ecx, ecx */
  ecx = 0;
/* ff4e38: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff4e39: mov eax, 0x18 */
  eax = 0x18u;
/* ff4e3e: mov edx, edi */
  edx = edi;
/* ff4e40: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4e42: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff4e46: mov dword ptr [esi + 0x9c], edi */
  W32((uint32_t)(esi + 0x9cu), edi);
/* ff4e4c: jle 0xff4e54 */
  if ((zf || sf != of)) goto L_ff4e54;
L_ff4e4e: /* ff4e4e: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
L_ff4e54: /* ff4e54: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff4e56: xor edi, edi */
  edi = 0;
/* ff4e58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4e5a: jle 0xff4eb1 */
  if ((zf || sf != of)) goto L_ff4eb1;
L_ff4e5c: /* ff4e5c: xor ebx, ebx */
  ebx = 0;
/* ff4e5e: mov edi, edi */
  edi = edi;
L_ff4e60: /* ff4e60: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* ff4e63: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* ff4e67: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* ff4e6a: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* ff4e6d: mov edx, dword ptr [eax + edi*4] */
  edx = R32((uint32_t)(eax + edi*4));
/* ff4e70: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* ff4e73: mov ecx, dword ptr [esi + 0x98] */
  ecx = R32((uint32_t)(esi + 0x98u));
/* ff4e79: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ff4e7a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ff4e7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff4e7d: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* ff4e80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ff4e81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff4e82: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ff4e86: add eax, 0xe28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4e8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ff4e8c: mov eax, esi */
  eax = esi;
/* ff4e8e: call 0xff4820 */
  esp -= 4; W32(esp, 0xff4e93u); SPILL(); f_ff4820(); if (g_unwind) return; RELOAD();
/* ff4e93: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* ff4e97: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ff4e99: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* ff4e9b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4e9e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ff4e9f: add ebx, 0x3f0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3f0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff4ea5: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4ea7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* ff4eab: jl 0xff4e60 */
  if ((sf != of)) goto L_ff4e60;
L_ff4ead: /* ff4ead: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
L_ff4eb1: /* ff4eb1: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4eb4: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* ff4eba: mov dword ptr [edx + ebp*4 + 8], 0 */
  W32((uint32_t)(edx + ebp*4 + 0x8u), 0x0u);
/* ff4ec2: je 0xff4edf */
  if (zf) goto L_ff4edf;
L_ff4ec4: /* ff4ec4: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* ff4eca: mov dword ptr [eax + ebp*4], 1 */
  W32((uint32_t)(eax + ebp*4), 0x1u);
/* ff4ed1: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* ff4ed7: mov dword ptr [edx + ebp*4 + 4], 1 */
  W32((uint32_t)(edx + ebp*4 + 0x4u), 0x1u);
L_ff4edf: /* ff4edf: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4ee2: je 0xff4f03 */
  if (zf) goto L_ff4f03;
L_ff4ee4: /* ff4ee4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ff4ee6: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* ff4eec: mov dword ptr [eax + ebp*4], 1 */
  W32((uint32_t)(eax + ebp*4), 0x1u);
/* ff4ef3: jle 0xff4f03 */
  if ((zf || sf != of)) goto L_ff4f03;
L_ff4ef5: /* ff4ef5: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* ff4efb: mov dword ptr [edx + ebp*4 - 4], 1 */
  W32((uint32_t)(edx + ebp*4 + 0xfffffffcu), 0x1u);
L_ff4f03: /* ff4f03: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ff4f06: je 0xff4f12 */
  if (zf) goto L_ff4f12;
L_ff4f08: /* ff4f08: mov dword ptr [esi + 0x9c], 0xffffffff */
  W32((uint32_t)(esi + 0x9cu), 0xffffffffu);
L_ff4f12: /* ff4f12: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* ff4f13: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4f15: jl 0xff4e30 */
  if ((sf != of)) goto L_ff4e30;
L_ff4f1b: /* ff4f1b: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_ff4f1f: /* ff4f1f: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* ff4f22: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff4f26: mov ecx, ebp */
  ecx = ebp;
/* ff4f28: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* ff4f2b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* ff4f2f: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* ff4f35: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* ff4f38: mov eax, dword ptr [ebx + edx*4] */
  eax = R32((uint32_t)(ebx + edx*4));
/* ff4f3b: mov edi, dword ptr [edi + 0x30] */
  edi = R32((uint32_t)(edi + 0x30u));
/* ff4f3e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff4f3f: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff4f42: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4f44: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff4f47: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* ff4f4b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* ff4f4e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff4f4f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff4f51: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ff4f53: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4f55: mov edx, ebx */
  edx = ebx;
/* ff4f57: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* ff4f5b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ff4f5d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff4f5e: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* ff4f61: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ff4f63: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* ff4f67: mov ebx, eax */
  ebx = eax;
/* ff4f69: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ff4f6d: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* ff4f70: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ff4f72: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* ff4f76: mov edi, dword ptr [esi + 0xb0] */
  edi = R32((uint32_t)(esi + 0xb0u));
/* ff4f7c: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ff4f7e: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ff4f80: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4f82: jge 0xff4fb8 */
  if ((sf == of)) goto L_ff4fb8;
L_ff4f84: /* ff4f84: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_ff4f88: /* ff4f88: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4f8a: jge 0xff4fc3 */
  if ((sf == of)) goto L_ff4fc3;
L_ff4f8c: /* ff4f8c: mov eax, edi */
  eax = edi;
/* ff4f8e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* ff4f8f: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0xff4f8f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* ff4f91: mov edx, dword ptr [esi + 0xa0] */
  edx = R32((uint32_t)(esi + 0xa0u));
/* ff4f97: mov dword ptr [esi + 0xb0], edi */
  W32((uint32_t)(esi + 0xb0u), edi);
/* ff4f9d: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ff4fa1: je 0xff4fa7 */
  if (zf) goto L_ff4fa7;
L_ff4fa3: /* ff4fa3: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4fa5: jg 0xff4fd0 */
  if ((!zf && sf == of)) goto L_ff4fd0;
L_ff4fa7: /* ff4fa7: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* ff4fad: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* ff4fb0: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ff4fb2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ff4fb4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ff4fb6: jl 0xff4f88 */
  if ((sf != of)) goto L_ff4f88;
L_ff4fb8: /* ff4fb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4fb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4fba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4fbb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ff4fbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4fbf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4fc2: ret  */
  esp += 4; SPILL(); return;
L_ff4fc3: /* ff4fc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4fc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4fc5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4fc6: mov eax, 1 */
  eax = 0x1u;
/* ff4fcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4fcc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4fcf: ret  */
  esp += 4; SPILL(); return;
L_ff4fd0: /* ff4fd0: mov dword ptr [esi + 0xac], edi */
  W32((uint32_t)(esi + 0xacu), edi);
/* ff4fd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ff4fd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ff4fd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ff4fd9: xor eax, eax */
  eax = 0;
/* ff4fdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ff4fdc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ff4fdf: ret  */
  esp += 4; SPILL(); return;
}
