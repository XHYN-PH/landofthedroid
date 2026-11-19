#include "recomp.h"
#include "rec_mod.h"

void f_fe1000(void) {
  LOAD_REGS();
L_fe1000: /* fe1000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1001: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* fe1005: xor eax, eax */
  eax = 0;
/* fe1007: mov ecx, esi */
  ecx = esi;
/* fe1009: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* fe100b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* fe100e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* fe1011: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* fe1014: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* fe1019: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* fe101c: call dword ptr [0xfe302c] */
  esp -= 4; W32(esp, 0xfe1022u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* fe1022: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* fe1025: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* fe1028: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe102b: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* fe102e: mov dword ptr [esi + 0x10], 0x100 */
  W32((uint32_t)(esi + 0x10u), 0x100u);
/* fe1035: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1036: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1040(void) {
  LOAD_REGS();
L_fe1040: /* fe1040: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1044: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* fe1047: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* fe104a: mov byte ptr [ecx], 0 */
  W8((uint32_t)(ecx), 0x0u);
/* fe104d: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* fe1053: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* fe105a: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1060(void) {
  LOAD_REGS();
L_fe1060: /* fe1060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1061: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* fe1065: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* fe1068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1069: call dword ptr [0xfe3018] */
  esp -= 4; W32(esp, 0xfe106fu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* fe106f: xor ecx, ecx */
  ecx = 0;
/* fe1071: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* fe1073: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* fe1076: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* fe1079: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* fe107c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe107f: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* fe1082: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1083: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1090(void) {
  LOAD_REGS();
L_fe1090: /* fe1090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1094: xor ecx, ecx */
  ecx = 0;
/* fe1096: mov edx, eax */
  edx = eax;
/* fe1098: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* fe109a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* fe109d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* fe10a0: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* fe10a3: mov dword ptr [edx + 0x10], ecx */
  W32((uint32_t)(edx + 0x10u), ecx);
/* fe10a6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* fe10aa: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* fe10ad: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* fe10b0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* fe10b4: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* fe10b7: ret  */
  esp += 4; SPILL(); return;
}

void f_fe10c0(void) {
  LOAD_REGS();
L_fe10c0: /* fe10c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe10c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe10c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe10c3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* fe10c7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* fe10c9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* fe10cc: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe10cf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe10d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe10d2: jl 0xfe10fd */
  if ((sf != of)) goto L_fe10fd;
L_fe10d4: /* fe10d4: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* fe10d7: add eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe10dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe10dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe10de: call dword ptr [0xfe3008] */
  esp -= 4; W32(esp, 0xfe10e4u); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* fe10e4: mov edi, dword ptr [esi + 0x10] */
  edi = R32((uint32_t)(esi + 0x10u));
/* fe10e7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* fe10e9: add edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe10ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe10f2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe10f4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* fe10f7: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* fe10fa: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
L_fe10fd: /* fe10fd: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* fe1101: mov edx, dword ptr [edi*4 + 0xfe4010] */
  edx = R32((uint32_t)(edi*4 + 0xfe4010u));
/* fe1108: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* fe110c: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* fe110f: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  eax = r;
  }
/* fe1111: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* fe1114: mov ecx, ebp */
  ecx = ebp;
/* fe1116: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* fe1118: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* fe111a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* fe111c: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe111e: or cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* fe1120: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1123: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* fe1125: jl 0xfe1191 */
  if ((sf != of)) goto L_fe1191;
L_fe1127: /* fe1127: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* fe112a: mov ecx, 8 */
  ecx = 0x8u;
/* fe112f: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1131: mov edx, eax */
  edx = eax;
/* fe1133: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* fe1135: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1138: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* fe113b: mov byte ptr [ecx + 1], dl */
  W8((uint32_t)(ecx + 0x1u), (edx & 0xffu));
/* fe113e: jl 0xfe1191 */
  if ((sf != of)) goto L_fe1191;
L_fe1140: /* fe1140: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* fe1143: mov ecx, 0x10 */
  ecx = 0x10u;
/* fe1148: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe114a: mov edx, eax */
  edx = eax;
/* fe114c: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* fe114e: cmp edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1151: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* fe1154: mov byte ptr [ecx + 2], dl */
  W8((uint32_t)(ecx + 0x2u), (edx & 0xffu));
/* fe1157: jl 0xfe1191 */
  if ((sf != of)) goto L_fe1191;
L_fe1159: /* fe1159: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* fe115c: mov ecx, 0x18 */
  ecx = 0x18u;
/* fe1161: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1163: mov edx, eax */
  edx = eax;
/* fe1165: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* fe1167: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe116a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* fe116d: mov byte ptr [ecx + 3], dl */
  W8((uint32_t)(ecx + 0x3u), (edx & 0xffu));
/* fe1170: jl 0xfe1191 */
  if ((sf != of)) goto L_fe1191;
L_fe1172: /* fe1172: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* fe1175: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1177: je 0xfe118a */
  if (zf) goto L_fe118a;
L_fe1179: /* fe1179: mov ecx, 0x20 */
  ecx = 0x20u;
/* fe117e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1180: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* fe1183: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* fe1185: mov byte ptr [edx + 4], al */
  W8((uint32_t)(edx + 0x4u), (eax & 0xffu));
/* fe1188: jmp 0xfe1191 */
  goto L_fe1191;
L_fe118a: /* fe118a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* fe118d: mov byte ptr [eax + 4], 0 */
  W8((uint32_t)(eax + 0x4u), 0x0u);
L_fe1191: /* fe1191: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* fe1194: mov eax, edi */
  eax = edi;
/* fe1196: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe1197: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fe119a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe119c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* fe119e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe11a1: and edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* fe11a4: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* fe11a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe11a8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe11aa: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe11ac: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* fe11ae: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* fe11b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe11b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe11b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe11b4: ret  */
  esp += 4; SPILL(); return;
}

void f_fe11c0(void) {
  LOAD_REGS();
L_fe11c0: /* fe11c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* fe11c4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* fe11c8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* fe11ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe11cb: mov ebx, dword ptr [edx*4 + 0xfe4010] */
  ebx = R32((uint32_t)(edx*4 + 0xfe4010u));
/* fe11d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe11d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe11d4: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* fe11d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe11d8: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* fe11db: lea ebp, [eax + 4] */
  ebp = (uint32_t)(eax + 0x4u);
/* fe11de: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe11e0: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe11e2: jl 0xfe11f6 */
  if ((sf != of)) goto L_fe11f6;
L_fe11e4: /* fe11e4: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* fe11e7: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fe11ea: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe11ec: jle 0xfe11f6 */
  if ((zf || sf != of)) goto L_fe11f6;
L_fe11ee: /* fe11ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe11ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe11f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe11f1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe11f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe11f5: ret  */
  esp += 4; SPILL(); return;
L_fe11f6: /* fe11f6: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* fe11f9: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* fe11fc: mov cl, byte ptr [ecx + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4u))) & 0xffu);
/* fe11ff: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* fe1201: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1204: jle 0xfe1255 */
  if ((zf || sf != of)) goto L_fe1255;
L_fe1206: /* fe1206: movzx ebp, byte ptr [esi + 1] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x1u)));
/* fe120a: mov ecx, 8 */
  ecx = 0x8u;
/* fe120f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1211: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* fe1213: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe1215: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1218: jle 0xfe1255 */
  if ((zf || sf != of)) goto L_fe1255;
L_fe121a: /* fe121a: movzx ebp, byte ptr [esi + 2] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x2u)));
/* fe121e: mov ecx, 0x10 */
  ecx = 0x10u;
/* fe1223: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1225: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* fe1227: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe1229: cmp edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe122c: jle 0xfe1255 */
  if ((zf || sf != of)) goto L_fe1255;
L_fe122e: /* fe122e: movzx ebp, byte ptr [esi + 3] */
  ebp = (uint32_t)(R8((uint32_t)(esi + 0x3u)));
/* fe1232: mov ecx, 0x18 */
  ecx = 0x18u;
/* fe1237: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1239: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* fe123b: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe123d: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1240: jle 0xfe1255 */
  if ((zf || sf != of)) goto L_fe1255;
L_fe1242: /* fe1242: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1244: je 0xfe1255 */
  if (zf) goto L_fe1255;
L_fe1246: /* fe1246: movzx edx, byte ptr [esi + 4] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x4u)));
/* fe124a: mov ecx, 0x20 */
  ecx = 0x20u;
/* fe124f: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1251: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* fe1253: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_fe1255: /* fe1255: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1256: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1257: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe1258: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fe125a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe125b: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1260(void) {
  LOAD_REGS();
L_fe1260: /* fe1260: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* fe1264: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* fe1266: cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1269: jl 0xfe126f */
  if ((sf != of)) goto L_fe126f;
L_fe126b: /* fe126b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe126e: ret  */
  esp += 4; SPILL(); return;
L_fe126f: /* fe126f: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* fe1272: movzx eax, byte ptr [edx] */
  eax = (uint32_t)(R8((uint32_t)(edx)));
/* fe1275: mov cl, byte ptr [ecx + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4u))) & 0xffu);
/* fe1278: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* fe127a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fe127d: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1280(void) {
  LOAD_REGS();
L_fe1280: /* fe1280: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* fe1284: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* fe1287: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1288: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* fe128c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fe128e: mov eax, esi */
  eax = esi;
/* fe1290: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe1291: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fe1294: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1296: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* fe1299: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe129c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe129e: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* fe12a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* fe12a3: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* fe12a6: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe12a8: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* fe12ab: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* fe12ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe12ae: ret  */
  esp += 4; SPILL(); return;
}

void f_fe12b0(void) {
  LOAD_REGS();
L_fe12b0: /* fe12b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe12b4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* fe12b7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe12b8: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe12bb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* fe12be: jle 0xfe12cf */
  if ((zf || sf != of)) goto L_fe12cf;
L_fe12c0: /* fe12c0: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* fe12c3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe12c5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe12c6: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* fe12cd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_fe12cf: /* fe12cf: ret  */
  esp += 4; SPILL(); return;
}

void f_fe12d0(void) {
  LOAD_REGS();
L_fe12d0: /* fe12d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe12d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* fe12d5: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* fe12d8: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* fe12db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe12dc: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* fe12e0: mov eax, dword ptr [esi*4 + 0xfe4010] */
  eax = R32((uint32_t)(esi*4 + 0xfe4010u));
/* fe12e7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* fe12eb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* fe12ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe12ee: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* fe12f1: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fe12f3: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe12f5: jl 0xfe1304 */
  if ((sf != of)) goto L_fe1304;
L_fe12f7: /* fe12f7: lea eax, [esi + eax*8] */
  eax = (uint32_t)(esi + eax*8);
/* fe12fa: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe12fd: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* fe1300: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1302: jg 0xfe1369 */
  if ((!zf && sf == of)) goto L_fe1369;
L_fe1304: /* fe1304: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* fe1307: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* fe130a: mov cl, byte ptr [ebx + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x4u))) & 0xffu);
/* fe130d: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* fe130f: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1312: jle 0xfe1365 */
  if ((zf || sf != of)) goto L_fe1365;
L_fe1314: /* fe1314: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe1315: movzx ebp, byte ptr [eax + 1] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* fe1319: mov ecx, 8 */
  ecx = 0x8u;
/* fe131e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1320: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* fe1322: or edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* fe1324: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1327: jle 0xfe1364 */
  if ((zf || sf != of)) goto L_fe1364;
L_fe1329: /* fe1329: movzx ebp, byte ptr [eax + 2] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* fe132d: mov ecx, 0x10 */
  ecx = 0x10u;
/* fe1332: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1334: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* fe1336: or edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* fe1338: cmp esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe133b: jle 0xfe1364 */
  if ((zf || sf != of)) goto L_fe1364;
L_fe133d: /* fe133d: movzx ebp, byte ptr [eax + 3] */
  ebp = (uint32_t)(R8((uint32_t)(eax + 0x3u)));
/* fe1341: mov ecx, 0x18 */
  ecx = 0x18u;
/* fe1346: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1348: shl ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
  }
/* fe134a: or edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* fe134c: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe134f: jle 0xfe1364 */
  if ((zf || sf != of)) goto L_fe1364;
L_fe1351: /* fe1351: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1353: je 0xfe1364 */
  if (zf) goto L_fe1364;
L_fe1355: /* fe1355: movzx eax, byte ptr [eax + 4] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x4u)));
/* fe1359: mov ecx, 0x20 */
  ecx = 0x20u;
/* fe135e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* fe1360: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* fe1362: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_fe1364: /* fe1364: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_fe1365: /* fe1365: and edi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
L_fe1369: /* fe1369: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* fe136c: mov eax, esi */
  eax = esi;
/* fe136e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe136f: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fe1372: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1374: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe1377: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1379: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* fe137c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* fe137e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1380: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* fe1382: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* fe1385: mov eax, edi */
  eax = edi;
/* fe1387: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1388: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* fe138b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe138c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe138d: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1390(void) {
  LOAD_REGS();
L_fe1390: /* fe1390: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* fe1394: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* fe1397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1398: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* fe139a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe139c: jl 0xfe13a3 */
  if ((sf != of)) goto L_fe13a3;
L_fe139e: /* fe139e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe13a1: jmp 0xfe13b1 */
  goto L_fe13b1;
L_fe13a3: /* fe13a3: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* fe13a6: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* fe13a9: mov cl, byte ptr [edx + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4u))) & 0xffu);
/* fe13ac: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* fe13ae: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_fe13b1: /* fe13b1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* fe13b4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe13b5: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe13b8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* fe13bb: jle 0xfe13ce */
  if ((zf || sf != of)) goto L_fe13ce;
L_fe13bd: /* fe13bd: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* fe13c0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe13c1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fe13c2: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* fe13c9: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* fe13cc: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_fe13ce: /* fe13ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe13cf: ret  */
  esp += 4; SPILL(); return;
}

void f_fe13d0(void) {
  LOAD_REGS();
L_fe13d0: /* fe13d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* fe13d4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* fe13d7: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe13da: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe13db: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fe13de: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe13e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* fe13e2: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe13e5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe13e7: ret  */
  esp += 4; SPILL(); return;
}

void f_fe13f0(void) {
  LOAD_REGS();
L_fe13f0: /* fe13f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe13f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe13f6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* fe13f9: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* fe13fc: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1400(void) {
  LOAD_REGS();
L_fe1400: /* fe1400: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1404: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* fe1407: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1410(void) {
  LOAD_REGS();
L_fe1410: /* fe1410: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1414: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe1416: movzx eax, byte ptr [ecx + 4] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x4u)));
/* fe141a: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1420(void) {
  LOAD_REGS();
L_fe1420: /* fe1420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1424: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe1426: xor eax, eax */
  eax = 0;
/* fe1428: mov al, byte ptr [ecx + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x5u))) & 0xffu);
/* fe142b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fe142e: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1430(void) {
  LOAD_REGS();
L_fe1430: /* fe1430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1434: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe1436: xor eax, eax */
  eax = 0;
/* fe1438: mov al, byte ptr [ecx + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x5u))) & 0xffu);
/* fe143b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fe143e: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1440(void) {
  LOAD_REGS();
L_fe1440: /* fe1440: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1444: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe1446: xor eax, eax */
  eax = 0;
/* fe1448: mov al, byte ptr [ecx + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x5u))) & 0xffu);
/* fe144b: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fe144e: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1450(void) {
  LOAD_REGS();
L_fe1450: /* fe1450: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1454: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe1456: movzx eax, byte ptr [ecx + 0xd] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xdu)));
/* fe145a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe145b: shld edx, eax, 8 */
  { uint32_t a = edx, b = eax, c = (0x8u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edx = r;
  } }
/* fe145f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1460: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* fe1463: mov esi, eax */
  esi = eax;
/* fe1465: movzx eax, byte ptr [ecx + 0xc] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xcu)));
/* fe1469: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe146a: mov edi, edx */
  edi = edx;
/* fe146c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe146d: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe146f: movzx eax, byte ptr [ecx + 0xb] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xbu)));
/* fe1473: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* fe1475: shld edi, esi, 8 */
  { uint32_t a = edi, b = esi, c = (0x8u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edi = r;
  } }
/* fe1479: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fe147c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe147d: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe147f: movzx eax, byte ptr [ecx + 0xa] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xau)));
/* fe1483: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* fe1485: shld edi, esi, 8 */
  { uint32_t a = edi, b = esi, c = (0x8u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edi = r;
  } }
/* fe1489: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fe148c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe148d: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe148f: movzx eax, byte ptr [ecx + 9] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x9u)));
/* fe1493: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* fe1495: shld edi, esi, 8 */
  { uint32_t a = edi, b = esi, c = (0x8u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edi = r;
  } }
/* fe1499: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fe149c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe149d: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe149f: movzx eax, byte ptr [ecx + 8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x8u)));
/* fe14a3: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* fe14a5: shld edi, esi, 8 */
  { uint32_t a = edi, b = esi, c = (0x8u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edi = r;
  } }
/* fe14a9: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fe14ac: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe14ad: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe14af: movzx eax, byte ptr [ecx + 7] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x7u)));
/* fe14b3: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* fe14b5: shld edi, esi, 8 */
  { uint32_t a = edi, b = esi, c = (0x8u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edi = r;
  } }
/* fe14b9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe14ba: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fe14bd: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe14bf: movzx eax, byte ptr [ecx + 6] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x6u)));
/* fe14c3: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* fe14c5: shld edi, esi, 8 */
  { uint32_t a = edi, b = esi, c = (0x8u) & 31;
  if (c) {
  uint32_t r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  edi = r;
  } }
/* fe14c9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe14ca: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fe14cd: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* fe14cf: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe14d1: mov edx, edi */
  edx = edi;
/* fe14d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe14d4: mov eax, esi */
  eax = esi;
/* fe14d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe14d7: ret  */
  esp += 4; SPILL(); return;
}

void f_fe14e0(void) {
  LOAD_REGS();
L_fe14e0: /* fe14e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe14e4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fe14e6: movzx edx, byte ptr [eax + 0xf] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0xfu)));
/* fe14ea: xor ecx, ecx */
  ecx = 0;
/* fe14ec: mov ch, byte ptr [eax + 0x11] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(eax + 0x11u))) & 0xffu) << 8);
/* fe14ef: mov cl, byte ptr [eax + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x10u))) & 0xffu);
/* fe14f2: movzx eax, byte ptr [eax + 0xe] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xeu)));
/* fe14f6: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe14f9: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* fe14fb: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe14fe: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe1500: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1510(void) {
  LOAD_REGS();
L_fe1510: /* fe1510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1514: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fe1516: movzx edx, byte ptr [eax + 0x13] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x13u)));
/* fe151a: xor ecx, ecx */
  ecx = 0;
/* fe151c: mov ch, byte ptr [eax + 0x15] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(eax + 0x15u))) & 0xffu) << 8);
/* fe151f: mov cl, byte ptr [eax + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x14u))) & 0xffu);
/* fe1522: movzx eax, byte ptr [eax + 0x12] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x12u)));
/* fe1526: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe1529: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* fe152b: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe152e: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe1530: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1540(void) {
  LOAD_REGS();
L_fe1540: /* fe1540: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1544: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* fe1546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1547: movzx esi, byte ptr [edx + 0x1a] */
  esi = (uint32_t)(R8((uint32_t)(edx + 0x1au)));
/* fe154b: xor eax, eax */
  eax = 0;
/* fe154d: xor ecx, ecx */
  ecx = 0;
/* fe154f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1551: jle 0xfe1560 */
  if ((zf || sf != of)) goto L_fe1560;
L_fe1553: /* fe1553: cmp byte ptr [edx + ecx + 0x1b], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx + 0x1bu))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* fe1558: jae 0xfe155b */
  if (!cf) goto L_fe155b;
L_fe155a: /* fe155a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_fe155b: /* fe155b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe155c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe155e: jl 0xfe1553 */
  if ((sf != of)) goto L_fe1553;
L_fe1560: /* fe1560: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1561: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1570(void) {
  LOAD_REGS();
L_fe1570: /* fe1570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1571: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* fe1575: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1577: je 0xfe15ca */
  if (zf) goto L_fe15ca;
L_fe1579: /* fe1579: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe157a: xor eax, eax */
  eax = 0;
/* fe157c: mov ecx, 0x5a */
  ecx = 0x5au;
/* fe1581: mov edi, esi */
  edi = esi;
/* fe1583: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* fe1585: mov edi, dword ptr [0xfe302c] */
  edi = R32((uint32_t)(0xfe302cu));
/* fe158b: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* fe1590: mov dword ptr [esi + 4], 0x4000 */
  W32((uint32_t)(esi + 0x4u), 0x4000u);
/* fe1597: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xfe1599u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1599: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* fe159e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* fe15a0: mov dword ptr [esi + 0x18], 0x400 */
  W32((uint32_t)(esi + 0x18u), 0x400u);
/* fe15a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xfe15a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe15a9: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* fe15ac: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* fe15af: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* fe15b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe15b3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xfe15b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe15b5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* fe15b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe15bc: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* fe15bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe15c0: mov dword ptr [esi + 0x150], ecx */
  W32((uint32_t)(esi + 0x150u), ecx);
/* fe15c6: xor eax, eax */
  eax = 0;
/* fe15c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe15c9: ret  */
  esp += 4; SPILL(); return;
L_fe15ca: /* fe15ca: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe15cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe15ce: ret  */
  esp += 4; SPILL(); return;
}

void f_fe15d0(void) {
  LOAD_REGS();
L_fe15d0: /* fe15d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe15d1: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* fe15d5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe15d7: je 0xfe1610 */
  if (zf) goto L_fe1610;
L_fe15d9: /* fe15d9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fe15db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe15dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe15de: mov esi, dword ptr [0xfe3018] */
  esi = R32((uint32_t)(0xfe3018u));
/* fe15e4: je 0xfe15ec */
  if (zf) goto L_fe15ec;
L_fe15e6: /* fe15e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe15e7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xfe15e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe15e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe15ec: /* fe15ec: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* fe15ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe15f1: je 0xfe15f9 */
  if (zf) goto L_fe15f9;
L_fe15f3: /* fe15f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe15f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xfe15f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe15f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe15f9: /* fe15f9: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* fe15fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe15fe: je 0xfe1606 */
  if (zf) goto L_fe1606;
L_fe1600: /* fe1600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1601: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xfe1603u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1603: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe1606: /* fe1606: mov ecx, 0x5a */
  ecx = 0x5au;
/* fe160b: xor eax, eax */
  eax = 0;
/* fe160d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* fe160f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_fe1610: /* fe1610: xor eax, eax */
  eax = 0;
/* fe1612: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1613: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1620(void) {
  LOAD_REGS();
L_fe1620: /* fe1620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1621: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* fe1625: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1627: je 0xfe1639 */
  if (zf) goto L_fe1639;
L_fe1629: /* fe1629: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe162a: call 0xfe15d0 */
  esp -= 4; W32(esp, 0xfe162fu); SPILL(); f_fe15d0(); if (g_unwind) return; RELOAD();
/* fe162f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1630: call dword ptr [0xfe3018] */
  esp -= 4; W32(esp, 0xfe1636u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* fe1636: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe1639: /* fe1639: xor eax, eax */
  eax = 0;
/* fe163b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe163c: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1640(void) {
  LOAD_REGS();
L_fe1640: /* fe1640: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* fe1643: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* fe1646: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe1648: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe164a: jg 0xfe167b */
  if ((!zf && sf == of)) goto L_fe167b;
L_fe164c: /* fe164c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* fe1650: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* fe1653: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1654: mov edi, dword ptr [0xfe3008] */
  edi = R32((uint32_t)(0xfe3008u));
/* fe165a: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* fe165d: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* fe1660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1661: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1662: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xfe1664u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1664: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* fe1667: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* fe166a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* fe166d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* fe1670: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1672: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xfe1674u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1674: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1677: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* fe167a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_fe167b: /* fe167b: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1680(void) {
  LOAD_REGS();
L_fe1680: /* fe1680: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* fe1684: xor edx, edx */
  edx = 0;
/* fe1686: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1688: je 0xfe1721 */
  if (zf) goto L_fe1721;
L_fe168e: /* fe168e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe168f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe1690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1691: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe1693: mov byte ptr [esi + 0x16], dl */
  W8((uint32_t)(esi + 0x16u), (edx & 0xffu));
/* fe1696: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe1698: mov byte ptr [esi + 0x17], dl */
  W8((uint32_t)(esi + 0x17u), (edx & 0xffu));
/* fe169b: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe169d: mov byte ptr [esi + 0x18], dl */
  W8((uint32_t)(esi + 0x18u), (edx & 0xffu));
/* fe16a0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe16a2: mov byte ptr [esi + 0x19], dl */
  W8((uint32_t)(esi + 0x19u), (edx & 0xffu));
/* fe16a5: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* fe16a8: xor eax, eax */
  eax = 0;
/* fe16aa: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe16ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe16ad: jle 0xfe16cf */
  if ((zf || sf != of)) goto L_fe16cf;
L_fe16af: /* fe16af: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
L_fe16b1: /* fe16b1: movzx ebx, byte ptr [edi + edx] */
  ebx = (uint32_t)(R8((uint32_t)(edi + edx)));
/* fe16b5: mov ebp, eax */
  ebp = eax;
/* fe16b7: shr ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* fe16ba: xor ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* fe16bc: mov ebx, dword ptr [ebx*4 + 0xfe4098] */
  ebx = R32((uint32_t)(ebx*4 + 0xfe4098u));
/* fe16c3: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* fe16c6: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* fe16c8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fe16c9: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe16cb: jl 0xfe16b1 */
  if ((sf != of)) goto L_fe16b1;
L_fe16cd: /* fe16cd: xor edx, edx */
  edx = 0;
L_fe16cf: /* fe16cf: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* fe16d2: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe16d4: jle 0xfe16fc */
  if ((zf || sf != of)) goto L_fe16fc;
L_fe16d6: /* fe16d6: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* fe16d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_fe16e0: /* fe16e0: movzx ebx, byte ptr [edi + edx] */
  ebx = (uint32_t)(R8((uint32_t)(edi + edx)));
/* fe16e4: mov ebp, eax */
  ebp = eax;
/* fe16e6: shr ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* fe16e9: xor ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* fe16eb: mov ebx, dword ptr [ebx*4 + 0xfe4098] */
  ebx = R32((uint32_t)(ebx*4 + 0xfe4098u));
/* fe16f2: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* fe16f5: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* fe16f7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fe16f8: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe16fa: jl 0xfe16e0 */
  if ((sf != of)) goto L_fe16e0;
L_fe16fc: /* fe16fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* fe16fe: mov byte ptr [edx + 0x16], al */
  W8((uint32_t)(edx + 0x16u), (eax & 0xffu));
/* fe1701: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe1703: mov edx, eax */
  edx = eax;
/* fe1705: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* fe1708: mov byte ptr [esi + 0x17], dl */
  W8((uint32_t)(esi + 0x17u), (edx & 0xffu));
/* fe170b: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe170d: mov edx, eax */
  edx = eax;
/* fe170f: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* fe1712: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1713: mov byte ptr [esi + 0x18], dl */
  W8((uint32_t)(esi + 0x18u), (edx & 0xffu));
/* fe1716: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* fe1718: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1719: shr eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* fe171c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe171d: mov byte ptr [ecx + 0x19], al */
  W8((uint32_t)(ecx + 0x19u), (eax & 0xffu));
/* fe1720: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_fe1721: /* fe1721: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1730(void) {
  LOAD_REGS();
L_fe1730: /* fe1730: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe1731: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* fe1735: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe1736: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* fe173a: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* fe173d: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* fe1742: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* fe1744: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe1746: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* fe1749: mov eax, edx */
  eax = edx;
/* fe174b: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* fe174e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe174f: lea edi, [edx + eax + 1] */
  edi = (uint32_t)(edx + eax + 0x1u);
/* fe1753: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* fe1756: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1758: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* fe175c: je 0xfe1782 */
  if (zf) goto L_fe1782;
L_fe175e: /* fe175e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* fe1761: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* fe1763: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* fe1766: mov edx, ecx */
  edx = ecx;
/* fe1768: je 0xfe177b */
  if (zf) goto L_fe177b;
L_fe176a: /* fe176a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* fe176c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe176d: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* fe1770: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1771: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1772: call dword ptr [0xfe300c] */
  esp -= 4; W32(esp, 0xfe1778u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* fe1778: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe177b: /* fe177b: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
L_fe1782: /* fe1782: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* fe1785: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* fe1788: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* fe178b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe178d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe178f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1790: mov esi, dword ptr [0xfe3008] */
  esi = R32((uint32_t)(0xfe3008u));
/* fe1796: jg 0xfe17ad */
  if ((!zf && sf == of)) goto L_fe17ad;
L_fe1798: /* fe1798: lea eax, [ecx + eax + 0x400] */
  eax = (uint32_t)(ecx + eax + 0x400u);
/* fe179f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe17a0: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* fe17a3: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* fe17a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe17a6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xfe17a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe17a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe17ab: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_fe17ad: /* fe17ad: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* fe17b0: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* fe17b3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe17b5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe17b7: jg 0xfe17e4 */
  if ((!zf && sf == of)) goto L_fe17e4;
L_fe17b9: /* fe17b9: lea eax, [eax + edi + 0x20] */
  eax = (uint32_t)(eax + edi + 0x20u);
/* fe17bd: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* fe17c4: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* fe17c7: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* fe17ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe17cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe17cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xfe17ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe17ce: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* fe17d1: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* fe17d4: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe17d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe17d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe17d9: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* fe17dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xfe17deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe17de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe17e1: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
L_fe17e4: /* fe17e4: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* fe17e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* fe17e9: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* fe17ec: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* fe17ef: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe17f1: mov eax, ecx */
  eax = ecx;
/* fe17f3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* fe17f6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* fe17f8: mov ecx, eax */
  ecx = eax;
/* fe17fa: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* fe17fe: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* fe1801: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* fe1803: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* fe1806: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* fe1809: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fe180b: xor ecx, ecx */
  ecx = 0;
/* fe180d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* fe180e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1810: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* fe1813: jle 0xfe1844 */
  if ((zf || sf != of)) goto L_fe1844;
L_fe1815: /* fe1815: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe1818: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* fe181b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe181d: mov dword ptr [esi + edx*4], 0xff */
  W32((uint32_t)(esi + edx*4), 0xffu);
/* fe1824: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe1827: mov edi, dword ptr [ebx + 0x160] */
  edi = R32((uint32_t)(ebx + 0x160u));
/* fe182d: mov esi, dword ptr [ebx + 0x14] */
  esi = R32((uint32_t)(ebx + 0x14u));
/* fe1830: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe1832: mov dword ptr [esi + edx*8], edi */
  W32((uint32_t)(esi + edx*8), edi);
/* fe1835: mov edi, dword ptr [ebx + 0x164] */
  edi = R32((uint32_t)(ebx + 0x164u));
/* fe183b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe183c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe183e: mov dword ptr [esi + edx*8 + 4], edi */
  W32((uint32_t)(esi + edx*8 + 0x4u), edi);
/* fe1842: jl 0xfe1815 */
  if ((sf != of)) goto L_fe1815;
L_fe1844: /* fe1844: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* fe1847: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fe1848: mov esi, 0xff */
  esi = 0xffu;
/* fe184d: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0xfe184d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* fe184f: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* fe1852: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* fe1855: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1857: mov dword ptr [esi + eax*4], edx */
  W32((uint32_t)(esi + eax*4), edx);
/* fe185a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* fe185d: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe1860: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* fe1863: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fe1865: mov dword ptr [eax + edx*8], esi */
  W32((uint32_t)(eax + edx*8), esi);
/* fe1868: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* fe186b: mov dword ptr [eax + edx*8 + 4], esi */
  W32((uint32_t)(eax + edx*8 + 0x4u), esi);
/* fe186f: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* fe1872: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* fe1875: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1877: mov esi, dword ptr [edx + ecx*8] */
  esi = R32((uint32_t)(edx + ecx*8));
/* fe187a: mov dword ptr [ebx + 0x160], esi */
  W32((uint32_t)(ebx + 0x160u), esi);
/* fe1880: mov ecx, dword ptr [edx + ecx*8 + 4] */
  ecx = R32((uint32_t)(edx + ecx*8 + 0x4u));
/* fe1884: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* fe1887: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* fe188a: mov dword ptr [ebx + 0x164], ecx */
  W32((uint32_t)(ebx + 0x164u), ecx);
/* fe1890: or dword ptr [eax], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* fe1896: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* fe189a: mov edi, dword ptr [ebx + 0x1c] */
  edi = R32((uint32_t)(ebx + 0x1cu));
/* fe189d: mov esi, dword ptr [ebx + 0x158] */
  esi = R32((uint32_t)(ebx + 0x158u));
/* fe18a3: mov edx, dword ptr [ebx + 0x15c] */
  edx = R32((uint32_t)(ebx + 0x15cu));
/* fe18a9: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe18ab: mov eax, 1 */
  eax = 0x1u;
/* fe18b0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* fe18b2: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* fe18b5: mov dword ptr [ebx + 0x158], esi */
  W32((uint32_t)(ebx + 0x158u), esi);
/* fe18bb: mov dword ptr [ebx + 0x1c], edi */
  W32((uint32_t)(ebx + 0x1cu), edi);
/* fe18be: mov dword ptr [ebx + 0x15c], edx */
  W32((uint32_t)(ebx + 0x15cu), edx);
/* fe18c4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* fe18c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe18c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe18ca: je 0xfe18d2 */
  if (zf) goto L_fe18d2;
L_fe18cc: /* fe18cc: mov dword ptr [ebx + 0x148], eax */
  W32((uint32_t)(ebx + 0x148u), eax);
L_fe18d2: /* fe18d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe18d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe18d4: xor eax, eax */
  eax = 0;
/* fe18d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe18d7: ret  */
  esp += 4; SPILL(); return;
}

void f_fe18e0(void) {
  LOAD_REGS();
L_fe18e0: /* fe18e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe18e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe18e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe18e3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* fe18e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe18e8: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* fe18eb: cmp edi, 0xff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe18f1: jle 0xfe18f8 */
  if ((zf || sf != of)) goto L_fe18f8;
L_fe18f3: /* fe18f3: mov edi, 0xff */
  edi = 0xffu;
L_fe18f8: /* fe18f8: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* fe18fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* fe18fd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* fe1900: xor ebx, ebx */
  ebx = 0;
/* fe1902: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1904: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* fe1908: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* fe190c: jne 0xfe1915 */
  if (!zf) goto L_fe1915;
L_fe190e: /* fe190e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe190f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1910: xor eax, eax */
  eax = 0;
/* fe1912: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe1913: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* fe1914: ret  */
  esp += 4; SPILL(); return;
L_fe1915: /* fe1915: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe1916: cmp dword ptr [esi + 0x14c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe191c: jne 0xfe194a */
  if (!zf) goto L_fe194a;
L_fe191e: /* fe191e: xor eax, eax */
  eax = 0;
/* fe1920: xor edx, edx */
  edx = 0;
/* fe1922: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1924: jle 0xfe197d */
  if ((zf || sf != of)) goto L_fe197d;
L_fe1926: /* fe1926: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* fe1929: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_fe1930: /* fe1930: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* fe1932: and ebp, 0xff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* fe1938: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* fe1939: cmp ebp, 0xff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe193f: jl 0xfe197d */
  if ((sf != of)) goto L_fe197d;
L_fe1941: /* fe1941: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1944: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1946: jl 0xfe1930 */
  if ((sf != of)) goto L_fe1930;
L_fe1948: /* fe1948: jmp 0xfe197d */
  goto L_fe197d;
L_fe194a: /* fe194a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe194c: jle 0xfe197d */
  if ((zf || sf != of)) goto L_fe197d;
L_fe194e: /* fe194e: mov edi, edi */
  edi = edi;
L_fe1950: /* fe1950: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* fe1954: cmp ebp, 0x1000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe195a: jg 0xfe197d */
  if ((!zf && sf == of)) goto L_fe197d;
L_fe195c: /* fe195c: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* fe195f: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* fe1962: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fe1968: mov eax, ebp */
  eax = ebp;
/* fe196a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe196c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* fe196f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* fe1973: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* fe1975: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* fe1976: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1979: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe197b: jl 0xfe1950 */
  if ((sf != of)) goto L_fe1950;
L_fe197d: /* fe197d: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* fe1980: lea ebp, [esi + 0x28] */
  ebp = (uint32_t)(esi + 0x28u);
/* fe1983: mov dword ptr [ebp], 0x5367674f */
  W32((uint32_t)(ebp), 0x5367674fu);
/* fe198a: mov byte ptr [esi + 0x2c], 0 */
  W8((uint32_t)(esi + 0x2cu), 0x0u);
/* fe198e: mov byte ptr [esi + 0x2d], 0 */
  W8((uint32_t)(esi + 0x2du), 0x0u);
/* fe1992: test dword ptr [ecx], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1998: jne 0xfe199e */
  if (!zf) goto L_fe199e;
L_fe199a: /* fe199a: mov byte ptr [esi + 0x2d], 1 */
  W8((uint32_t)(esi + 0x2du), 0x1u);
L_fe199e: /* fe199e: mov ecx, dword ptr [esi + 0x14c] */
  ecx = R32((uint32_t)(esi + 0x14cu));
/* fe19a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe19a6: jne 0xfe19ac */
  if (!zf) goto L_fe19ac;
L_fe19a8: /* fe19a8: or byte ptr [esi + 0x2d], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2du))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x2du), r);
  }
L_fe19ac: /* fe19ac: mov ecx, dword ptr [esi + 0x148] */
  ecx = R32((uint32_t)(esi + 0x148u));
/* fe19b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe19b4: je 0xfe19bf */
  if (zf) goto L_fe19bf;
L_fe19b6: /* fe19b6: cmp dword ptr [esi + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe19b9: jne 0xfe19bf */
  if (!zf) goto L_fe19bf;
L_fe19bb: /* fe19bb: or byte ptr [esi + 0x2d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x2du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi + 0x2du), r);
  }
L_fe19bf: /* fe19bf: mov dword ptr [esi + 0x14c], 1 */
  W32((uint32_t)(esi + 0x14cu), 0x1u);
/* fe19c9: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* fe19cb: mov byte ptr [esi + 0x2e], al */
  W8((uint32_t)(esi + 0x2eu), (eax & 0xffu));
/* fe19ce: call 0xfe23d0 */
  esp -= 4; W32(esp, 0xfe19d3u); SPILL(); f_fe23d0(); if (g_unwind) return; RELOAD();
/* fe19d3: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* fe19d5: mov byte ptr [esi + 0x2f], al */
  W8((uint32_t)(esi + 0x2fu), (eax & 0xffu));
/* fe19d8: call 0xfe23d0 */
  esp -= 4; W32(esp, 0xfe19ddu); SPILL(); f_fe23d0(); if (g_unwind) return; RELOAD();
/* fe19dd: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* fe19df: mov byte ptr [esi + 0x30], al */
  W8((uint32_t)(esi + 0x30u), (eax & 0xffu));
/* fe19e2: call 0xfe23d0 */
  esp -= 4; W32(esp, 0xfe19e7u); SPILL(); f_fe23d0(); if (g_unwind) return; RELOAD();
/* fe19e7: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* fe19e9: mov byte ptr [esi + 0x31], al */
  W8((uint32_t)(esi + 0x31u), (eax & 0xffu));
/* fe19ec: call 0xfe23d0 */
  esp -= 4; W32(esp, 0xfe19f1u); SPILL(); f_fe23d0(); if (g_unwind) return; RELOAD();
/* fe19f1: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* fe19f3: mov byte ptr [esi + 0x32], al */
  W8((uint32_t)(esi + 0x32u), (eax & 0xffu));
/* fe19f6: call 0xfe23d0 */
  esp -= 4; W32(esp, 0xfe19fbu); SPILL(); f_fe23d0(); if (g_unwind) return; RELOAD();
/* fe19fb: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* fe19fd: mov byte ptr [esi + 0x33], al */
  W8((uint32_t)(esi + 0x33u), (eax & 0xffu));
/* fe1a00: call 0xfe23d0 */
  esp -= 4; W32(esp, 0xfe1a05u); SPILL(); f_fe23d0(); if (g_unwind) return; RELOAD();
/* fe1a05: mov cl, 8 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* fe1a07: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* fe1a0a: call 0xfe23d0 */
  esp -= 4; W32(esp, 0xfe1a0fu); SPILL(); f_fe23d0(); if (g_unwind) return; RELOAD();
/* fe1a0f: mov byte ptr [esi + 0x35], al */
  W8((uint32_t)(esi + 0x35u), (eax & 0xffu));
/* fe1a12: mov eax, dword ptr [esi + 0x150] */
  eax = R32((uint32_t)(esi + 0x150u));
/* fe1a18: mov byte ptr [esi + 0x36], al */
  W8((uint32_t)(esi + 0x36u), (eax & 0xffu));
/* fe1a1b: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe1a1e: mov byte ptr [esi + 0x37], al */
  W8((uint32_t)(esi + 0x37u), (eax & 0xffu));
/* fe1a21: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe1a24: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* fe1a27: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe1a2a: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* fe1a2d: cmp dword ptr [esi + 0x154], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x154u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1a34: jne 0xfe1a40 */
  if (!zf) goto L_fe1a40;
L_fe1a36: /* fe1a36: mov dword ptr [esi + 0x154], 0 */
  W32((uint32_t)(esi + 0x154u), 0x0u);
L_fe1a40: /* fe1a40: mov eax, dword ptr [esi + 0x154] */
  eax = R32((uint32_t)(esi + 0x154u));
/* fe1a46: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* fe1a49: mov dword ptr [esi + 0x154], edx */
  W32((uint32_t)(esi + 0x154u), edx);
/* fe1a4f: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* fe1a52: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe1a55: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* fe1a58: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe1a5b: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* fe1a5e: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fe1a61: mov byte ptr [esi + 0x3d], al */
  W8((uint32_t)(esi + 0x3du), (eax & 0xffu));
/* fe1a64: xor eax, eax */
  eax = 0;
/* fe1a66: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1a68: mov byte ptr [esi + 0x3e], 0 */
  W8((uint32_t)(esi + 0x3eu), 0x0u);
/* fe1a6c: mov byte ptr [esi + 0x3f], 0 */
  W8((uint32_t)(esi + 0x3fu), 0x0u);
/* fe1a70: mov byte ptr [esi + 0x40], 0 */
  W8((uint32_t)(esi + 0x40u), 0x0u);
/* fe1a74: mov byte ptr [esi + 0x41], 0 */
  W8((uint32_t)(esi + 0x41u), 0x0u);
/* fe1a78: mov byte ptr [esi + 0x42], bl */
  W8((uint32_t)(esi + 0x42u), (ebx & 0xffu));
/* fe1a7b: jle 0xfe1a9c */
  if ((zf || sf != of)) goto L_fe1a9c;
L_fe1a7d: /* fe1a7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_fe1a80: /* fe1a80: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* fe1a83: mov cl, byte ptr [ecx + eax*4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*4))) & 0xffu);
/* fe1a86: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* fe1a8a: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* fe1a8d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe1a8f: mov byte ptr [esi + eax + 0x43], cl */
  W8((uint32_t)(esi + eax + 0x43u), (ecx & 0xffu));
/* fe1a93: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe1a94: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1a96: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* fe1a9a: jl 0xfe1a80 */
  if ((sf != of)) goto L_fe1a80;
L_fe1a9c: /* fe1a9c: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* fe1aa0: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* fe1aa2: mov ebp, dword ptr [0xfe300c] */
  ebp = R32((uint32_t)(0xfe300cu));
/* fe1aa8: lea eax, [ebx + 0x1b] */
  eax = (uint32_t)(ebx + 0x1bu);
/* fe1aab: mov dword ptr [esi + 0x144], eax */
  W32((uint32_t)(esi + 0x144u), eax);
/* fe1ab1: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* fe1ab4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* fe1ab6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* fe1ab9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1abb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* fe1abf: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* fe1ac2: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* fe1ac5: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* fe1ac8: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fe1aca: mov ecx, eax */
  ecx = eax;
/* fe1acc: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* fe1acf: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* fe1ad2: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* fe1ad9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1ada: lea ecx, [eax + ebx*4] */
  ecx = (uint32_t)(eax + ebx*4);
/* fe1add: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1ade: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1adf: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xfe1ae1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1ae1: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* fe1ae4: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* fe1ae7: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* fe1aea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1aeb: lea ecx, [eax + ebx*8] */
  ecx = (uint32_t)(eax + ebx*8);
/* fe1aee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1aef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1af0: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xfe1af2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1af2: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* fe1af5: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* fe1af9: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* fe1afb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1afc: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* fe1aff: call 0xfe1680 */
  esp -= 4; W32(esp, 0xfe1b04u); SPILL(); f_fe1680(); if (g_unwind) return; RELOAD();
/* fe1b04: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1b07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe1b08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1b09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1b0a: mov eax, 1 */
  eax = 0x1u;
/* fe1b0f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe1b10: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* fe1b11: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1b20(void) {
  LOAD_REGS();
L_fe1b20: /* fe1b20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1b24: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* fe1b2a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1b2c: je 0xfe1b35 */
  if (zf) goto L_fe1b35;
L_fe1b2e: /* fe1b2e: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* fe1b31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1b33: jne 0xfe1b5f */
  if (!zf) goto L_fe1b5f;
L_fe1b35: /* fe1b35: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* fe1b38: sub ecx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fe1b3b: cmp ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1b41: jg 0xfe1b5f */
  if ((!zf && sf == of)) goto L_fe1b5f;
L_fe1b43: /* fe1b43: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* fe1b46: cmp ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1b4c: jge 0xfe1b5f */
  if ((sf == of)) goto L_fe1b5f;
L_fe1b4e: /* fe1b4e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1b50: je 0xfe1b5c */
  if (zf) goto L_fe1b5c;
L_fe1b52: /* fe1b52: mov ecx, dword ptr [eax + 0x14c] */
  ecx = R32((uint32_t)(eax + 0x14cu));
/* fe1b58: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1b5a: je 0xfe1b5f */
  if (zf) goto L_fe1b5f;
L_fe1b5c: /* fe1b5c: xor eax, eax */
  eax = 0;
/* fe1b5e: ret  */
  esp += 4; SPILL(); return;
L_fe1b5f: /* fe1b5f: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* fe1b63: jmp 0xfe18e0 */
  SPILL(); f_fe18e0(); return;
}

void f_fe1b70(void) {
  LOAD_REGS();
L_fe1b70: /* fe1b70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1b74: mov eax, dword ptr [eax + 0x148] */
  eax = R32((uint32_t)(eax + 0x148u));
/* fe1b7a: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1b80(void) {
  LOAD_REGS();
L_fe1b80: /* fe1b80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1b81: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* fe1b85: xor eax, eax */
  eax = 0;
/* fe1b87: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1b89: je 0xfe1b92 */
  if (zf) goto L_fe1b92;
L_fe1b8b: /* fe1b8b: mov ecx, 7 */
  ecx = 0x7u;
/* fe1b90: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_fe1b92: /* fe1b92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1b93: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1ba0(void) {
  LOAD_REGS();
L_fe1ba0: /* fe1ba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1ba1: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* fe1ba5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1ba7: je 0xfe1bc2 */
  if (zf) goto L_fe1bc2;
L_fe1ba9: /* fe1ba9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fe1bab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1bad: je 0xfe1bb9 */
  if (zf) goto L_fe1bb9;
L_fe1baf: /* fe1baf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1bb0: call dword ptr [0xfe3018] */
  esp -= 4; W32(esp, 0xfe1bb6u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* fe1bb6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe1bb9: /* fe1bb9: mov ecx, 7 */
  ecx = 0x7u;
/* fe1bbe: xor eax, eax */
  eax = 0;
/* fe1bc0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_fe1bc2: /* fe1bc2: xor eax, eax */
  eax = 0;
/* fe1bc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1bc5: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1bd0(void) {
  LOAD_REGS();
L_fe1bd0: /* fe1bd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1bd1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* fe1bd5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1bd7: je 0xfe1c00 */
  if (zf) goto L_fe1c00;
L_fe1bd9: /* fe1bd9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* fe1bdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1bdd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe1bde: mov ebx, dword ptr [0xfe3018] */
  ebx = R32((uint32_t)(0xfe3018u));
/* fe1be4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1be5: je 0xfe1bed */
  if (zf) goto L_fe1bed;
L_fe1be7: /* fe1be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1be8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xfe1beau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1bea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe1bed: /* fe1bed: xor eax, eax */
  eax = 0;
/* fe1bef: mov ecx, 7 */
  ecx = 0x7u;
/* fe1bf4: mov edi, esi */
  edi = esi;
/* fe1bf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1bf7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* fe1bf9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xfe1bfbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe1bfb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1bfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1bff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_fe1c00: /* fe1c00: xor eax, eax */
  eax = 0;
/* fe1c02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1c03: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1c10(void) {
  LOAD_REGS();
L_fe1c10: /* fe1c10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1c11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* fe1c15: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* fe1c18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1c1a: je 0xfe1c3f */
  if (zf) goto L_fe1c3f;
L_fe1c1c: /* fe1c1c: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* fe1c1f: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fe1c21: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1c23: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* fe1c26: jle 0xfe1c38 */
  if ((zf || sf != of)) goto L_fe1c38;
L_fe1c28: /* fe1c28: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* fe1c2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1c2b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1c2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1c2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1c2f: call dword ptr [0xfe300c] */
  esp -= 4; W32(esp, 0xfe1c35u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* fe1c35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe1c38: /* fe1c38: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
L_fe1c3f: /* fe1c3f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* fe1c42: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* fe1c45: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* fe1c49: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fe1c4b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1c4d: jle 0xfe1c84 */
  if ((zf || sf != of)) goto L_fe1c84;
L_fe1c4f: /* fe1c4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1c50: lea edi, [eax + ecx + 0x1000] */
  edi = (uint32_t)(eax + ecx + 0x1000u);
/* fe1c57: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* fe1c59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1c5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1c5c: je 0xfe1c75 */
  if (zf) goto L_fe1c75;
L_fe1c5e: /* fe1c5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1c5f: call dword ptr [0xfe3008] */
  esp -= 4; W32(esp, 0xfe1c65u); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* fe1c65: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* fe1c68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* fe1c6e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* fe1c70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1c71: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1c73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1c74: ret  */
  esp += 4; SPILL(); return;
L_fe1c75: /* fe1c75: call dword ptr [0xfe302c] */
  esp -= 4; W32(esp, 0xfe1c7bu); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* fe1c7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1c7e: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* fe1c81: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* fe1c83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_fe1c84: /* fe1c84: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* fe1c86: add eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1c89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1c8a: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1c90(void) {
  LOAD_REGS();
L_fe1c90: /* fe1c90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe1c94: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* fe1c98: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* fe1c9b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1c9d: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1ca0: jle 0xfe1ca6 */
  if ((zf || sf != of)) goto L_fe1ca6;
L_fe1ca2: /* fe1ca2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe1ca5: ret  */
  esp += 4; SPILL(); return;
L_fe1ca6: /* fe1ca6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* fe1ca9: xor eax, eax */
  eax = 0;
/* fe1cab: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1cb0(void) {
  LOAD_REGS();
L_fe1cb0: /* fe1cb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fe1cb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe1cb4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe1cb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1cb6: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* fe1cba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* fe1cbd: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* fe1cc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1cc1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* fe1cc3: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe1cc5: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* fe1cc7: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* fe1cca: xor edx, edx */
  edx = 0;
/* fe1ccc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1cce: jne 0xfe1d14 */
  if (!zf) goto L_fe1d14;
L_fe1cd0: /* fe1cd0: cmp ebx, 0x1b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1cd3: jl 0xfe1d1e */
  if ((sf != of)) goto L_fe1d1e;
L_fe1cd5: /* fe1cd5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* fe1cd7: mov eax, 0xfe3038 */
  eax = 0xfe3038u;
/* fe1cdc: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1cde: jne 0xfe1d69 */
  if (!zf) goto L_fe1d69;
L_fe1ce4: /* fe1ce4: movzx ecx, byte ptr [edi + 0x1a] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x1au)));
/* fe1ce8: lea ebp, [ecx + 0x1b] */
  ebp = (uint32_t)(ecx + 0x1bu);
/* fe1ceb: xor eax, eax */
  eax = 0;
/* fe1ced: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1cef: jl 0xfe1dde */
  if ((sf != of)) goto L_fe1dde;
L_fe1cf5: /* fe1cf5: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1cf7: jle 0xfe1d11 */
  if ((zf || sf != of)) goto L_fe1d11;
L_fe1cf9: /* fe1cf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_fe1d00: /* fe1d00: movzx ecx, byte ptr [edi + eax + 0x1b] */
  ecx = (uint32_t)(R8((uint32_t)(edi + eax + 0x1bu)));
/* fe1d05: add dword ptr [esi + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x18u), r);
  }
/* fe1d08: movzx ecx, byte ptr [edi + 0x1a] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x1au)));
/* fe1d0c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe1d0d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1d0f: jl 0xfe1d00 */
  if ((sf != of)) goto L_fe1d00;
L_fe1d11: /* fe1d11: mov dword ptr [esi + 0x14], ebp */
  W32((uint32_t)(esi + 0x14u), ebp);
L_fe1d14: /* fe1d14: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* fe1d17: add eax, dword ptr [esi + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1d1a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1d1c: jle 0xfe1d28 */
  if ((zf || sf != of)) goto L_fe1d28;
L_fe1d1e: /* fe1d1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1d1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1d20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe1d21: xor eax, eax */
  eax = 0;
/* fe1d23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe1d24: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1d27: ret  */
  esp += 4; SPILL(); return;
L_fe1d28: /* fe1d28: mov ebp, dword ptr [edi + 0x16] */
  ebp = R32((uint32_t)(edi + 0x16u));
/* fe1d2b: mov dword ptr [edi + 0x16], edx */
  W32((uint32_t)(edi + 0x16u), edx);
/* fe1d2e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* fe1d31: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* fe1d34: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* fe1d38: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* fe1d3c: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1d3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1d3f: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* fe1d43: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* fe1d47: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* fe1d4b: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* fe1d4f: call 0xfe1680 */
  esp -= 4; W32(esp, 0xfe1d54u); SPILL(); f_fe1680(); if (g_unwind) return; RELOAD();
/* fe1d54: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* fe1d58: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* fe1d5a: mov eax, dword ptr [edi + 0x16] */
  eax = R32((uint32_t)(edi + 0x16u));
/* fe1d5d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1d60: xor edx, edx */
  edx = 0;
/* fe1d62: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1d64: je 0xfe1da0 */
  if (zf) goto L_fe1da0;
L_fe1d66: /* fe1d66: mov dword ptr [edi + 0x16], ebp */
  W32((uint32_t)(edi + 0x16u), ebp);
L_fe1d69: /* fe1d69: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* fe1d6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe1d6b: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* fe1d6e: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* fe1d71: lea edx, [edi + 1] */
  edx = (uint32_t)(edi + 0x1u);
/* fe1d74: push 0x4f */
  { uint32_t v = 0x4fu; esp -= 4; W32(esp, v); }
/* fe1d76: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1d77: call dword ptr [0xfe3010] */
  esp -= 4; W32(esp, 0xfe1d7du); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* fe1d7d: mov ecx, eax */
  ecx = eax;
/* fe1d7f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1d82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1d84: jne 0xfe1d8b */
  if (!zf) goto L_fe1d8b;
L_fe1d86: /* fe1d86: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* fe1d89: add ecx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_fe1d8b: /* fe1d8b: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* fe1d8d: mov eax, ecx */
  eax = ecx;
/* fe1d8f: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fe1d91: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* fe1d94: mov eax, edi */
  eax = edi;
/* fe1d96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1d97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1d98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe1d99: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fe1d9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe1d9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1d9f: ret  */
  esp += 4; SPILL(); return;
L_fe1da0: /* fe1da0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* fe1da2: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* fe1da5: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* fe1da9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1dab: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1dad: je 0xfe1dc5 */
  if (zf) goto L_fe1dc5;
L_fe1daf: /* fe1daf: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* fe1db1: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* fe1db4: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* fe1db7: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* fe1dba: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe1dbc: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* fe1dbf: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* fe1dc2: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_fe1dc5: /* fe1dc5: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* fe1dc8: mov edi, dword ptr [esi + 0x18] */
  edi = R32((uint32_t)(esi + 0x18u));
/* fe1dcb: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* fe1dce: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe1dd0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1dd2: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* fe1dd5: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* fe1dd8: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* fe1ddb: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
L_fe1dde: /* fe1dde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1ddf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1de0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe1de1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe1de2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1de5: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1df0(void) {
  LOAD_REGS();
L_fe1df0: /* fe1df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1df1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* fe1df5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1df6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* fe1dfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1dfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1dfc: call 0xfe1cb0 */
  esp -= 4; W32(esp, 0xfe1e01u); SPILL(); f_fe1cb0(); if (g_unwind) return; RELOAD();
/* fe1e01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1e04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1e06: jg 0xfe1e1f */
  if ((!zf && sf == of)) goto L_fe1e1f;
L_fe1e08: /* fe1e08: je 0xfe1e27 */
  if (zf) goto L_fe1e27;
L_fe1e0a: /* fe1e0a: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* fe1e0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1e0f: je 0xfe1e2c */
  if (zf) goto L_fe1e2c;
L_fe1e11: /* fe1e11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1e12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1e13: call 0xfe1cb0 */
  esp -= 4; W32(esp, 0xfe1e18u); SPILL(); f_fe1cb0(); if (g_unwind) return; RELOAD();
/* fe1e18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1e1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1e1d: jle 0xfe1e08 */
  if ((zf || sf != of)) goto L_fe1e08;
L_fe1e1f: /* fe1e1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1e20: mov eax, 1 */
  eax = 0x1u;
/* fe1e25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1e26: ret  */
  esp += 4; SPILL(); return;
L_fe1e27: /* fe1e27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1e28: xor eax, eax */
  eax = 0;
/* fe1e2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1e2b: ret  */
  esp += 4; SPILL(); return;
L_fe1e2c: /* fe1e2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1e2d: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* fe1e34: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe1e37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1e38: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1e40(void) {
  LOAD_REGS();
L_fe1e40: /* fe1e40: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fe1e43: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* fe1e47: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* fe1e4a: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* fe1e4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe1e4e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe1e4f: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* fe1e51: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* fe1e55: movzx eax, byte ptr [ebp + 4] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0x4u)));
/* fe1e59: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* fe1e5d: movzx eax, byte ptr [ebp + 5] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0x5u)));
/* fe1e61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe1e62: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* fe1e66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe1e67: mov edx, eax */
  edx = eax;
/* fe1e69: mov edi, eax */
  edi = eax;
/* fe1e6b: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fe1e6e: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fe1e71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1e72: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* fe1e7a: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* fe1e7d: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* fe1e81: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* fe1e85: call 0xfe1450 */
  esp -= 4; W32(esp, 0xfe1e8au); SPILL(); f_fe1450(); if (g_unwind) return; RELOAD();
/* fe1e8a: xor ecx, ecx */
  ecx = 0;
/* fe1e8c: mov ch, byte ptr [ebp + 0x11] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0x11u))) & 0xffu) << 8);
/* fe1e8f: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* fe1e93: movzx edx, byte ptr [ebp + 0xf] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xfu)));
/* fe1e97: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* fe1e9b: movzx eax, byte ptr [ebp + 0xe] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xeu)));
/* fe1e9f: mov cl, byte ptr [ebp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x10u))) & 0xffu);
/* fe1ea2: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* fe1ea6: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* fe1ea9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1eac: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe1eaf: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* fe1eb1: movzx edx, byte ptr [ebp + 0x13] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0x13u)));
/* fe1eb5: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe1eb8: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* fe1eba: movzx eax, byte ptr [ebp + 0x12] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0x12u)));
/* fe1ebe: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* fe1ec2: xor ecx, ecx */
  ecx = 0;
/* fe1ec4: mov ch, byte ptr [ebp + 0x15] */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0x15u))) & 0xffu) << 8);
/* fe1ec7: mov cl, byte ptr [ebp + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x14u))) & 0xffu);
/* fe1eca: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe1ecd: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* fe1ecf: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe1ed2: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* fe1ed4: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* fe1ed7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1ed9: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* fe1edd: movzx ecx, byte ptr [ebp + 0x1a] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0x1au)));
/* fe1ee1: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* fe1ee5: je 0xfe1f0b */
  if (zf) goto L_fe1f0b;
L_fe1ee7: /* fe1ee7: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* fe1eea: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* fe1eec: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* fe1eef: mov edx, ecx */
  edx = ecx;
/* fe1ef1: je 0xfe1f04 */
  if (zf) goto L_fe1f04;
L_fe1ef3: /* fe1ef3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* fe1ef5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1ef6: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* fe1ef9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1efa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1efb: call dword ptr [0xfe300c] */
  esp -= 4; W32(esp, 0xfe1f01u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* fe1f01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe1f04: /* fe1f04: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
L_fe1f0b: /* fe1f0b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1f0d: je 0xfe1f59 */
  if (zf) goto L_fe1f59;
L_fe1f0f: /* fe1f0f: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* fe1f12: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* fe1f14: je 0xfe1f42 */
  if (zf) goto L_fe1f42;
L_fe1f16: /* fe1f16: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* fe1f19: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe1f1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1f1d: lea edx, [eax + esi*4] */
  edx = (uint32_t)(eax + esi*4);
/* fe1f20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1f21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1f22: call dword ptr [0xfe300c] */
  esp -= 4; W32(esp, 0xfe1f28u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* fe1f28: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* fe1f2b: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* fe1f2e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fe1f30: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* fe1f33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe1f34: lea edx, [eax + esi*8] */
  edx = (uint32_t)(eax + esi*8);
/* fe1f37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe1f38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe1f39: call dword ptr [0xfe300c] */
  esp -= 4; W32(esp, 0xfe1f3fu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* fe1f3f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fe1f42: /* fe1f42: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* fe1f45: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* fe1f48: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fe1f4a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fe1f4c: mov dword ptr [ebx + 0x1c], ecx */
  W32((uint32_t)(ebx + 0x1cu), ecx);
/* fe1f4f: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* fe1f52: mov dword ptr [ebx + 0x24], 0 */
  W32((uint32_t)(ebx + 0x24u), 0x0u);
L_fe1f59: /* fe1f59: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fe1f5d: cmp eax, dword ptr [ebx + 0x150] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x150u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1f63: jne 0xfe1f6d */
  if (!zf) goto L_fe1f6d;
L_fe1f65: /* fe1f65: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* fe1f69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1f6b: jle 0xfe1f78 */
  if ((zf || sf != of)) goto L_fe1f78;
L_fe1f6d: /* fe1f6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe1f6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe1f6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe1f70: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe1f73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe1f74: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe1f77: ret  */
  esp += 4; SPILL(); return;
L_fe1f78: /* fe1f78: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* fe1f7c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe1f7d: mov esi, ebx */
  esi = ebx;
/* fe1f7f: call 0xfe1640 */
  esp -= 4; W32(esp, 0xfe1f84u); SPILL(); f_fe1640(); if (g_unwind) return; RELOAD();
/* fe1f84: mov edx, dword ptr [ebx + 0x154] */
  edx = R32((uint32_t)(ebx + 0x154u));
/* fe1f8a: cmp dword ptr [esp + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1f8e: je 0xfe202f */
  if (zf) goto L_fe202f;
L_fe1f94: /* fe1f94: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* fe1f97: cmp eax, dword ptr [ebx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1f9a: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* fe1f9e: jge 0xfe1fca */
  if ((sf == of)) goto L_fe1fca;
L_fe1fa0: /* fe1fa0: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* fe1fa3: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* fe1fa6: jmp 0xfe1fb0 */
  goto L_fe1fb0;
L_fe1fb0: /* fe1fb0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe1fb2: and esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* fe1fb8: sub dword ptr [ebx + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebx + 0x8u), r);
  }
/* fe1fbb: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* fe1fbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe1fbf: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1fc2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1fc4: jl 0xfe1fb0 */
  if ((sf != of)) goto L_fe1fb0;
L_fe1fc6: /* fe1fc6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
L_fe1fca: /* fe1fca: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1fcd: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* fe1fd0: je 0xfe1fea */
  if (zf) goto L_fe1fea;
L_fe1fd2: /* fe1fd2: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* fe1fd5: mov dword ptr [edx + eax*4], 0x400 */
  W32((uint32_t)(edx + eax*4), 0x400u);
/* fe1fdc: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* fe1fdf: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* fe1fe2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe1fe3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe1fe4: mov dword ptr [ebx + 0x1c], ecx */
  W32((uint32_t)(ebx + 0x1cu), ecx);
/* fe1fe7: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
L_fe1fea: /* fe1fea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1fec: je 0xfe202f */
  if (zf) goto L_fe202f;
L_fe1fee: /* fe1fee: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* fe1ff2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1ff4: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* fe1ffc: jle 0xfe202f */
  if ((zf || sf != of)) goto L_fe202f;
L_fe1ffe: /* fe1ffe: mov edi, edi */
  edi = edi;
L_fe2000: /* fe2000: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* fe2004: movzx eax, byte ptr [ecx + ebp + 0x1b] */
  eax = (uint32_t)(R8((uint32_t)(ecx + ebp + 0x1bu)));
/* fe2009: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* fe200d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* fe2011: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fe2013: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* fe2015: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe2016: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe201b: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* fe201f: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* fe2023: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* fe2027: jl 0xfe2033 */
  if ((sf != of)) goto L_fe2033;
L_fe2029: /* fe2029: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe202b: jl 0xfe2000 */
  if ((sf != of)) goto L_fe2000;
L_fe202d: /* fe202d: jmp 0xfe2033 */
  goto L_fe2033;
L_fe202f: /* fe202f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
L_fe2033: /* fe2033: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* fe2037: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2039: je 0xfe208b */
  if (zf) goto L_fe208b;
L_fe203b: /* fe203b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* fe203e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* fe2041: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe2043: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe2045: jg 0xfe2060 */
  if ((!zf && sf == of)) goto L_fe2060;
L_fe2047: /* fe2047: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* fe2049: lea eax, [eax + esi + 0x400] */
  eax = (uint32_t)(eax + esi + 0x400u);
/* fe2050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe2051: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe2052: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* fe2055: call dword ptr [0xfe3008] */
  esp -= 4; W32(esp, 0xfe205bu); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* fe205b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe205e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_fe2060: /* fe2060: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* fe2063: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* fe2065: mov ecx, esi */
  ecx = esi;
/* fe2067: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* fe206b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe206d: mov eax, ecx */
  eax = ecx;
/* fe206f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* fe2072: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* fe2074: mov ecx, eax */
  ecx = eax;
/* fe2076: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* fe2079: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* fe207b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* fe207f: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* fe2082: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe2084: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* fe2088: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_fe208b: /* fe208b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* fe208f: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe2092: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe2094: jge 0xfe211b */
  if ((sf == of)) goto L_fe211b;
L_fe209a: /* fe209a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_fe20a0: /* fe20a0: movzx eax, byte ptr [ecx + ebp + 0x1b] */
  eax = (uint32_t)(R8((uint32_t)(ecx + ebp + 0x1bu)));
/* fe20a5: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20a8: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* fe20ab: mov dword ptr [edi + edx*4], eax */
  W32((uint32_t)(edi + edx*4), eax);
/* fe20ae: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20b1: mov edi, dword ptr [ebx + 0x14] */
  edi = R32((uint32_t)(ebx + 0x14u));
/* fe20b4: mov dword ptr [edi + edx*8], 0xffffffff */
  W32((uint32_t)(edi + edx*8), 0xffffffffu);
/* fe20bb: mov dword ptr [edi + edx*8 + 4], 0xffffffff */
  W32((uint32_t)(edi + edx*8 + 0x4u), 0xffffffffu);
/* fe20c3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* fe20c7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe20c9: je 0xfe20e2 */
  if (zf) goto L_fe20e2;
L_fe20cb: /* fe20cb: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* fe20ce: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20d1: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* fe20d4: or dword ptr [edx], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx), r);
  }
/* fe20da: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
L_fe20e2: /* fe20e2: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe20e7: jge 0xfe20ec */
  if ((sf == of)) goto L_fe20ec;
L_fe20e9: /* fe20e9: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
L_fe20ec: /* fe20ec: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fe20f0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe20f1: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe20f6: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* fe20f9: jge 0xfe20fe */
  if ((sf == of)) goto L_fe20fe;
L_fe20fb: /* fe20fb: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
L_fe20fe: /* fe20fe: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe2102: jl 0xfe20a0 */
  if ((sf != of)) goto L_fe20a0;
L_fe2104: /* fe2104: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe2107: je 0xfe211b */
  if (zf) goto L_fe211b;
L_fe2109: /* fe2109: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* fe210c: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* fe2110: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* fe2114: mov dword ptr [eax + esi*8], ecx */
  W32((uint32_t)(eax + esi*8), ecx);
/* fe2117: mov dword ptr [eax + esi*8 + 4], edx */
  W32((uint32_t)(eax + esi*8 + 0x4u), edx);
L_fe211b: /* fe211b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* fe211f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2121: je 0xfe2141 */
  if (zf) goto L_fe2141;
L_fe2123: /* fe2123: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* fe2126: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe2128: mov dword ptr [ebx + 0x148], 1 */
  W32((uint32_t)(ebx + 0x148u), 0x1u);
/* fe2132: jle 0xfe2141 */
  if ((zf || sf != of)) goto L_fe2141;
L_fe2134: /* fe2134: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* fe2137: lea eax, [ecx + eax*4 - 4] */
  eax = (uint32_t)(ecx + eax*4 + 0xfffffffcu);
/* fe213b: or dword ptr [eax], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_fe2141: /* fe2141: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* fe2145: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe2146: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe2147: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fe2148: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe2149: mov dword ptr [ebx + 0x154], edx */
  W32((uint32_t)(ebx + 0x154u), edx);
/* fe214f: xor eax, eax */
  eax = 0;
/* fe2151: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe2152: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe2155: ret  */
  esp += 4; SPILL(); return;
}

void f_fe1fa8(void) {
  LOAD_REGS();
L_fe1fa8: /* fe1fa8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* fe1faf: nop  */
L_fe1fb0: /* fe1fb0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* fe1fb2: and esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* fe1fb8: sub dword ptr [ebx + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebx + 0x8u), r);
  }
/* fe1fbb: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* fe1fbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe1fbf: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe1fc2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe1fc4: jl 0xfe1fb0 */
  if ((sf != of)) goto L_fe1fb0;
L_fe1fc6: /* fe1fc6: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* fe1fca: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe1fcd: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* fe1fd0: je 0xfe1fea */
  if (zf) goto L_fe1fea;
L_fe1fd2: /* fe1fd2: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* fe1fd5: mov dword ptr [edx + eax*4], 0x400 */
  W32((uint32_t)(edx + eax*4), 0x400u);
/* fe1fdc: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* fe1fdf: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* fe1fe2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe1fe3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe1fe4: mov dword ptr [ebx + 0x1c], ecx */
  W32((uint32_t)(ebx + 0x1cu), ecx);
/* fe1fe7: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
L_fe1fea: /* fe1fea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe1fec: je 0xfe202f */
  if (zf) goto L_fe202f;
L_fe1fee: /* fe1fee: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* fe1ff2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe1ff4: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* fe1ffc: jle 0xfe202f */
  if ((zf || sf != of)) goto L_fe202f;
L_fe1ffe: /* fe1ffe: mov edi, edi */
  edi = edi;
L_fe2000: /* fe2000: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* fe2004: movzx eax, byte ptr [ecx + ebp + 0x1b] */
  eax = (uint32_t)(R8((uint32_t)(ecx + ebp + 0x1bu)));
/* fe2009: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* fe200d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* fe2011: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fe2013: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* fe2015: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe2016: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe201b: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* fe201f: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* fe2023: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* fe2027: jl 0xfe2033 */
  if ((sf != of)) goto L_fe2033;
L_fe2029: /* fe2029: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe202b: jl 0xfe2000 */
  if ((sf != of)) goto L_fe2000;
L_fe202d: /* fe202d: jmp 0xfe2033 */
  goto L_fe2033;
L_fe202f: /* fe202f: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
L_fe2033: /* fe2033: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* fe2037: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2039: je 0xfe208b */
  if (zf) goto L_fe208b;
L_fe203b: /* fe203b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* fe203e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* fe2041: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe2043: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe2045: jg 0xfe2060 */
  if ((!zf && sf == of)) goto L_fe2060;
L_fe2047: /* fe2047: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* fe2049: lea eax, [eax + esi + 0x400] */
  eax = (uint32_t)(eax + esi + 0x400u);
/* fe2050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe2051: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fe2052: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* fe2055: call dword ptr [0xfe3008] */
  esp -= 4; W32(esp, 0xfe205bu); SPILL(); f_401c76(); if (g_unwind) return; /* MSVCR70!realloc */ RELOAD();
/* fe205b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe205e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_fe2060: /* fe2060: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* fe2063: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* fe2065: mov ecx, esi */
  ecx = esi;
/* fe2067: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* fe206b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fe206d: mov eax, ecx */
  eax = ecx;
/* fe206f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* fe2072: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* fe2074: mov ecx, eax */
  ecx = eax;
/* fe2076: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* fe2079: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* fe207b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* fe207f: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* fe2082: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fe2084: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* fe2088: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_fe208b: /* fe208b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* fe208f: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* fe2092: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe2094: jge 0xfe211b */
  if ((sf == of)) goto L_fe211b;
L_fe209a: /* fe209a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_fe20a0: /* fe20a0: movzx eax, byte ptr [ecx + ebp + 0x1b] */
  eax = (uint32_t)(R8((uint32_t)(ecx + ebp + 0x1bu)));
/* fe20a5: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20a8: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* fe20ab: mov dword ptr [edi + edx*4], eax */
  W32((uint32_t)(edi + edx*4), eax);
/* fe20ae: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20b1: mov edi, dword ptr [ebx + 0x14] */
  edi = R32((uint32_t)(ebx + 0x14u));
/* fe20b4: mov dword ptr [edi + edx*8], 0xffffffff */
  W32((uint32_t)(edi + edx*8), 0xffffffffu);
/* fe20bb: mov dword ptr [edi + edx*8 + 4], 0xffffffff */
  W32((uint32_t)(edi + edx*8 + 0x4u), 0xffffffffu);
/* fe20c3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* fe20c7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe20c9: je 0xfe20e2 */
  if (zf) goto L_fe20e2;
L_fe20cb: /* fe20cb: mov edi, dword ptr [ebx + 0x10] */
  edi = R32((uint32_t)(ebx + 0x10u));
/* fe20ce: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20d1: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* fe20d4: or dword ptr [edx], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx), r);
  }
/* fe20da: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
L_fe20e2: /* fe20e2: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe20e7: jge 0xfe20ec */
  if ((sf == of)) goto L_fe20ec;
L_fe20e9: /* fe20e9: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
L_fe20ec: /* fe20ec: mov edx, dword ptr [ebx + 0x1c] */
  edx = R32((uint32_t)(ebx + 0x1cu));
/* fe20ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fe20f0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fe20f1: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe20f6: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* fe20f9: jge 0xfe20fe */
  if ((sf == of)) goto L_fe20fe;
L_fe20fb: /* fe20fb: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
L_fe20fe: /* fe20fe: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe2102: jl 0xfe20a0 */
  if ((sf != of)) goto L_fe20a0;
L_fe2104: /* fe2104: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe2107: je 0xfe211b */
  if (zf) goto L_fe211b;
L_fe2109: /* fe2109: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* fe210c: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* fe2110: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* fe2114: mov dword ptr [eax + esi*8], ecx */
  W32((uint32_t)(eax + esi*8), ecx);
/* fe2117: mov dword ptr [eax + esi*8 + 4], edx */
  W32((uint32_t)(eax + esi*8 + 0x4u), edx);
L_fe211b: /* fe211b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* fe211f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2121: je 0xfe2141 */
  if (zf) goto L_fe2141;
L_fe2123: /* fe2123: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* fe2126: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fe2128: mov dword ptr [ebx + 0x148], 1 */
  W32((uint32_t)(ebx + 0x148u), 0x1u);
/* fe2132: jle 0xfe2141 */
  if ((zf || sf != of)) goto L_fe2141;
L_fe2134: /* fe2134: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* fe2137: lea eax, [ecx + eax*4 - 4] */
  eax = (uint32_t)(ecx + eax*4 + 0xfffffffcu);
/* fe213b: or dword ptr [eax], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_fe2141: /* fe2141: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* fe2145: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe2146: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe2147: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fe2148: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe2149: mov dword ptr [ebx + 0x154], edx */
  W32((uint32_t)(ebx + 0x154u), edx);
/* fe214f: xor eax, eax */
  eax = 0;
/* fe2151: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe2152: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe2155: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2160(void) {
  LOAD_REGS();
L_fe2160: /* fe2160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe2164: xor ecx, ecx */
  ecx = 0;
/* fe2166: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* fe2169: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* fe216c: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* fe216f: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* fe2172: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* fe2175: xor eax, eax */
  eax = 0;
/* fe2177: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2180(void) {
  LOAD_REGS();
L_fe2180: /* fe2180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe2184: xor ecx, ecx */
  ecx = 0;
/* fe2186: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* fe2189: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* fe218c: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* fe218f: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* fe2192: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* fe2195: mov dword ptr [eax + 0x144], ecx */
  W32((uint32_t)(eax + 0x144u), ecx);
/* fe219b: mov dword ptr [eax + 0x148], ecx */
  W32((uint32_t)(eax + 0x148u), ecx);
/* fe21a1: mov dword ptr [eax + 0x14c], ecx */
  W32((uint32_t)(eax + 0x14cu), ecx);
/* fe21a7: mov dword ptr [eax + 0x154], 0xffffffff */
  W32((uint32_t)(eax + 0x154u), 0xffffffffu);
/* fe21b1: mov dword ptr [eax + 0x158], ecx */
  W32((uint32_t)(eax + 0x158u), ecx);
/* fe21b7: mov dword ptr [eax + 0x15c], ecx */
  W32((uint32_t)(eax + 0x15cu), ecx);
/* fe21bd: mov dword ptr [eax + 0x160], ecx */
  W32((uint32_t)(eax + 0x160u), ecx);
/* fe21c3: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* fe21c9: xor eax, eax */
  eax = 0;
/* fe21cb: ret  */
  esp += 4; SPILL(); return;
}

void f_fe21d0(void) {
  LOAD_REGS();
L_fe21d0: /* fe21d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe21d4: xor ecx, ecx */
  ecx = 0;
/* fe21d6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* fe21d9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* fe21dc: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* fe21df: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* fe21e2: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* fe21e5: mov dword ptr [eax + 0x144], ecx */
  W32((uint32_t)(eax + 0x144u), ecx);
/* fe21eb: mov dword ptr [eax + 0x148], ecx */
  W32((uint32_t)(eax + 0x148u), ecx);
/* fe21f1: mov dword ptr [eax + 0x14c], ecx */
  W32((uint32_t)(eax + 0x14cu), ecx);
/* fe21f7: mov dword ptr [eax + 0x158], ecx */
  W32((uint32_t)(eax + 0x158u), ecx);
/* fe21fd: mov dword ptr [eax + 0x15c], ecx */
  W32((uint32_t)(eax + 0x15cu), ecx);
/* fe2203: mov dword ptr [eax + 0x160], ecx */
  W32((uint32_t)(eax + 0x160u), ecx);
/* fe2209: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* fe220f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* fe2213: mov dword ptr [eax + 0x154], 0xffffffff */
  W32((uint32_t)(eax + 0x154u), 0xffffffffu);
/* fe221d: mov dword ptr [eax + 0x150], ecx */
  W32((uint32_t)(eax + 0x150u), ecx);
/* fe2223: xor eax, eax */
  eax = 0;
/* fe2225: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2230(void) {
  LOAD_REGS();
L_fe2230: /* fe2230: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fe2233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe2234: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe2235: mov edi, dword ptr [eax + 0x24] */
  edi = R32((uint32_t)(eax + 0x24u));
/* fe2238: mov esi, ecx */
  esi = ecx;
/* fe223a: cmp dword ptr [eax + 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe223d: jg 0xfe2247 */
  if ((!zf && sf == of)) goto L_fe2247;
L_fe223f: /* fe223f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe2240: xor eax, eax */
  eax = 0;
/* fe2242: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe2243: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe2246: ret  */
  esp += 4; SPILL(); return;
L_fe2247: /* fe2247: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* fe224a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe224b: lea ebp, [ecx + edi*4] */
  ebp = (uint32_t)(ecx + edi*4);
/* fe224e: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* fe2251: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fe2254: je 0xfe2282 */
  if (zf) goto L_fe2282;
L_fe2256: /* fe2256: mov edx, dword ptr [eax + 0x158] */
  edx = R32((uint32_t)(eax + 0x158u));
/* fe225c: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* fe2262: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fe2263: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* fe2266: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe2267: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* fe226a: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* fe226d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe226e: mov dword ptr [eax + 0x158], edx */
  W32((uint32_t)(eax + 0x158u), edx);
/* fe2274: mov dword ptr [eax + 0x15c], ecx */
  W32((uint32_t)(eax + 0x15cu), ecx);
/* fe227a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* fe227d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe227e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe2281: ret  */
  esp += 4; SPILL(); return;
L_fe2282: /* fe2282: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2284: jne 0xfe2292 */
  if (!zf) goto L_fe2292;
L_fe2286: /* fe2286: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* fe228a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe228c: je 0xfe2359 */
  if (zf) goto L_fe2359;
L_fe2292: /* fe2292: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe2293: mov ebx, ecx */
  ebx = ecx;
/* fe2295: mov edx, ecx */
  edx = ecx;
/* fe2297: and ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* fe229d: and edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fe22a3: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* fe22a9: cmp ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe22af: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* fe22b3: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* fe22b7: jne 0xfe22ea */
  if (!zf) goto L_fe22ea;
L_fe22b9: /* fe22b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_fe22c0: /* fe22c0: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* fe22c3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* fe22c6: mov ecx, edx */
  ecx = edx;
/* fe22c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fe22c9: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* fe22cf: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fe22d2: je 0xfe22dc */
  if (zf) goto L_fe22dc;
L_fe22d4: /* fe22d4: mov dword ptr [esp + 0x10], 0x200 */
  W32((uint32_t)(esp + 0x10u), 0x200u);
L_fe22dc: /* fe22dc: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* fe22de: cmp ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe22e4: je 0xfe22c0 */
  if (zf) goto L_fe22c0;
L_fe22e6: /* fe22e6: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_fe22ea: /* fe22ea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe22ec: je 0xfe2326 */
  if (zf) goto L_fe2326;
L_fe22ee: /* fe22ee: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* fe22f1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* fe22f5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* fe22f8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* fe22fa: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* fe22fd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fe22ff: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* fe2301: mov edx, dword ptr [eax + 0x158] */
  edx = R32((uint32_t)(eax + 0x158u));
/* fe2307: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* fe230a: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* fe2310: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* fe2313: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* fe2316: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* fe2319: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* fe231c: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* fe2320: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* fe2323: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
L_fe2326: /* fe2326: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* fe232a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe232c: je 0xfe2358 */
  if (zf) goto L_fe2358;
L_fe232e: /* fe232e: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* fe2331: mov edx, dword ptr [eax + 0x158] */
  edx = R32((uint32_t)(eax + 0x158u));
/* fe2337: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* fe233d: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fe233f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fe2340: add edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* fe2343: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* fe2346: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* fe2349: mov dword ptr [eax + 0x24], edi */
  W32((uint32_t)(eax + 0x24u), edi);
/* fe234c: mov dword ptr [eax + 0x158], edx */
  W32((uint32_t)(eax + 0x158u), edx);
/* fe2352: mov dword ptr [eax + 0x15c], ecx */
  W32((uint32_t)(eax + 0x15cu), ecx);
L_fe2358: /* fe2358: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_fe2359: /* fe2359: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe235a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe235b: mov eax, 1 */
  eax = 0x1u;
/* fe2360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe2361: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe2364: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2370(void) {
  LOAD_REGS();
L_fe2370: /* fe2370: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* fe2374: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe2378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* fe237a: call 0xfe2230 */
  esp -= 4; W32(esp, 0xfe237fu); SPILL(); f_fe2230(); if (g_unwind) return; RELOAD();
/* fe237f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe2382: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2390(void) {
  LOAD_REGS();
L_fe2390: /* fe2390: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* fe2394: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fe2398: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* fe239a: call 0xfe2230 */
  esp -= 4; W32(esp, 0xfe239fu); SPILL(); f_fe2230(); if (g_unwind) return; RELOAD();
/* fe239f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe23a2: ret  */
  esp += 4; SPILL(); return;
}

void f_fe23b0(void) {
  LOAD_REGS();
L_fe23b0: /* fe23b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe23b1: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* fe23b5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fe23b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe23b8: call dword ptr [0xfe3018] */
  esp -= 4; W32(esp, 0xfe23beu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* fe23be: mov ecx, 8 */
  ecx = 0x8u;
/* fe23c3: xor eax, eax */
  eax = 0;
/* fe23c5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe23c8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* fe23ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe23cb: ret  */
  esp += 4; SPILL(); return;
}

void f_fe23d0(void) {
  LOAD_REGS();
L_fe23d0: /* fe23d0: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* fe23d3: jae 0xfe23eb */
  if (!cf) goto L_fe23eb;
L_fe23d5: /* fe23d5: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* fe23d8: jae 0xfe23e0 */
  if (!cf) goto L_fe23e0;
L_fe23da: /* fe23da: shrd eax, edx, cl */
  { uint32_t a = eax, b = edx, c = ((ecx & 31)) & 31;
  if (c) {
  uint32_t r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  eax = r;
  } }
/* fe23dd: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* fe23df: ret  */
  esp += 4; SPILL(); return;
L_fe23e0: /* fe23e0: mov eax, edx */
  eax = edx;
/* fe23e2: sar edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* fe23e5: and cl, 0x1f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* fe23e8: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* fe23ea: ret  */
  esp += 4; SPILL(); return;
L_fe23eb: /* fe23eb: sar edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* fe23ee: mov eax, edx */
  eax = edx;
/* fe23f0: ret  */
  esp += 4; SPILL(); return;
}

void f_fe23f1(void) {
  LOAD_REGS();
L_fe23f1: /* fe23f1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* fe23f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe23f7: jne 0xfe2407 */
  if (!zf) goto L_fe2407;
L_fe23f9: /* fe23f9: cmp dword ptr [0xfe44a0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44a0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fe23ff: jle 0xfe242f */
  if ((zf || sf != of)) goto L_fe242f;
L_fe2401: /* fe2401: dec dword ptr [0xfe44a0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44a0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xfe44a0u), r);
  }
L_fe2407: /* fe2407: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe240a: mov ecx, dword ptr [0xfe3028] */
  ecx = R32((uint32_t)(0xfe3028u));
/* fe2410: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* fe2412: mov dword ptr [0xfe44a4], ecx */
  W32((uint32_t)(0xfe44a4u), ecx);
/* fe2418: jne 0xfe2469 */
  if (!zf) goto L_fe2469;
L_fe241a: /* fe241a: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* fe241f: call dword ptr [0xfe302c] */
  esp -= 4; W32(esp, 0xfe2425u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* fe2425: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2427: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* fe2428: mov dword ptr [0xfe44ac], eax */
  W32((uint32_t)(0xfe44acu), eax);
/* fe242d: jne 0xfe2433 */
  if (!zf) goto L_fe2433;
L_fe242f: /* fe242f: xor eax, eax */
  eax = 0;
/* fe2431: jmp 0xfe24ac */
  goto L_fe24ac;
L_fe2433: /* fe2433: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* fe2436: mov eax, dword ptr [0xfe44ac] */
  eax = R32((uint32_t)(0xfe44acu));
/* fe243b: mov dword ptr [0xfe44a8], eax */
  W32((uint32_t)(0xfe44a8u), eax);
/* fe2440: call 0xfe258a */
  esp -= 4; W32(esp, 0xfe2445u); SPILL(); f_fe258a(); if (g_unwind) return; RELOAD();
/* fe2445: push 0xfe25ce */
  { uint32_t v = 0xfe25ceu; esp -= 4; W32(esp, v); }
/* fe244a: call 0xfe2578 */
  esp -= 4; W32(esp, 0xfe244fu); SPILL(); f_fe2578(); if (g_unwind) return; RELOAD();
/* fe244f: mov dword ptr [esp], 0xfe4004 */
  W32((uint32_t)(esp), 0xfe4004u);
/* fe2456: push 0xfe4000 */
  { uint32_t v = 0xfe4000u; esp -= 4; W32(esp, v); }
/* fe245b: call 0xfe254c */
  esp -= 4; W32(esp, 0xfe2460u); SPILL(); f_fe254c(); if (g_unwind) return; RELOAD();
/* fe2460: inc dword ptr [0xfe44a0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44a0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xfe44a0u), r);
  }
/* fe2466: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* fe2467: jmp 0xfe24a8 */
  goto L_fe24a8;
L_fe2469: /* fe2469: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe246b: jne 0xfe24a9 */
  if (!zf) goto L_fe24a9;
L_fe246d: /* fe246d: mov eax, dword ptr [0xfe44ac] */
  eax = R32((uint32_t)(0xfe44acu));
/* fe2472: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2474: je 0xfe24a9 */
  if (zf) goto L_fe24a9;
L_fe2476: /* fe2476: jmp 0xfe248b */
  goto L_fe248b;
L_fe2478: /* fe2478: mov ecx, dword ptr [0xfe44a8] */
  ecx = R32((uint32_t)(0xfe44a8u));
/* fe247e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* fe2480: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2482: je 0xfe248b */
  if (zf) goto L_fe248b;
L_fe2484: /* fe2484: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xfe2486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe2486: mov eax, dword ptr [0xfe44ac] */
  eax = R32((uint32_t)(0xfe44acu));
L_fe248b: /* fe248b: sub dword ptr [0xfe44a8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44a8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xfe44a8u), r);
  }
/* fe2492: cmp dword ptr [0xfe44a8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44a8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* fe2498: jae 0xfe2478 */
  if (!cf) goto L_fe2478;
L_fe249a: /* fe249a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe249b: call dword ptr [0xfe3018] */
  esp -= 4; W32(esp, 0xfe24a1u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* fe24a1: and dword ptr [0xfe44ac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44acu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xfe44acu), r);
  }
L_fe24a8: /* fe24a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_fe24a9: /* fe24a9: xor eax, eax */
  eax = 0;
/* fe24ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_fe24ac: /* fe24ac: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_fe24af(void) {
  LOAD_REGS();
L_fe24af: /* fe24af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fe24b0: mov ebp, esp */
  ebp = esp;
/* fe24b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe24b3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* fe24b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe24b7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* fe24ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe24bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe24bd: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* fe24c0: jne 0xfe24cb */
  if (!zf) goto L_fe24cb;
L_fe24c2: /* fe24c2: cmp dword ptr [0xfe44a0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44a0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe24c9: jmp 0xfe24f1 */
  goto L_fe24f1;
L_fe24cb: /* fe24cb: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe24ce: je 0xfe24d5 */
  if (zf) goto L_fe24d5;
L_fe24d0: /* fe24d0: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe24d3: jne 0xfe24f7 */
  if (!zf) goto L_fe24f7;
L_fe24d5: /* fe24d5: mov eax, dword ptr [0xfe44b0] */
  eax = R32((uint32_t)(0xfe44b0u));
/* fe24da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe24dc: je 0xfe24e7 */
  if (zf) goto L_fe24e7;
L_fe24de: /* fe24de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe24df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe24e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe24e1: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xfe24e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe24e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe24e5: je 0xfe24f3 */
  if (zf) goto L_fe24f3;
L_fe24e7: /* fe24e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe24e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe24e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe24ea: call 0xfe23f1 */
  esp -= 4; W32(esp, 0xfe24efu); SPILL(); f_fe23f1(); if (g_unwind) return; RELOAD();
/* fe24ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_fe24f1: /* fe24f1: jne 0xfe24f7 */
  if (!zf) goto L_fe24f7;
L_fe24f3: /* fe24f3: xor eax, eax */
  eax = 0;
/* fe24f5: jmp 0xfe2545 */
  goto L_fe2545;
L_fe24f7: /* fe24f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe24f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe24f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe24fa: call 0xfe2612 */
  esp -= 4; W32(esp, 0xfe24ffu); SPILL(); f_fe2612(); if (g_unwind) return; RELOAD();
/* fe24ff: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe2502: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* fe2505: jne 0xfe2513 */
  if (!zf) goto L_fe2513;
L_fe2507: /* fe2507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2509: jne 0xfe2542 */
  if (!zf) goto L_fe2542;
L_fe250b: /* fe250b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe250c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe250d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe250e: call 0xfe23f1 */
  esp -= 4; W32(esp, 0xfe2513u); SPILL(); f_fe23f1(); if (g_unwind) return; RELOAD();
L_fe2513: /* fe2513: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2515: je 0xfe251c */
  if (zf) goto L_fe251c;
L_fe2517: /* fe2517: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe251a: jne 0xfe2542 */
  if (!zf) goto L_fe2542;
L_fe251c: /* fe251c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe251d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe251e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe251f: call 0xfe23f1 */
  esp -= 4; W32(esp, 0xfe2524u); SPILL(); f_fe23f1(); if (g_unwind) return; RELOAD();
/* fe2524: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2526: jne 0xfe252b */
  if (!zf) goto L_fe252b;
L_fe2528: /* fe2528: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_fe252b: /* fe252b: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe252f: je 0xfe2542 */
  if (zf) goto L_fe2542;
L_fe2531: /* fe2531: mov eax, dword ptr [0xfe44b0] */
  eax = R32((uint32_t)(0xfe44b0u));
/* fe2536: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe2538: je 0xfe2542 */
  if (zf) goto L_fe2542;
L_fe253a: /* fe253a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe253b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe253c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe253d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xfe253fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe253f: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_fe2542: /* fe2542: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_fe2545: /* fe2545: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe2546: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe2547: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe2548: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fe2549: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_fe254c(void) {
  LOAD_REGS();
L_fe254c: /* fe254c: jmp dword ptr [0xfe3014] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_fe2552(void) {
  LOAD_REGS();
L_fe2552: /* fe2552: cmp dword ptr [0xfe44ac], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44acu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe2559: jne 0xfe2561 */
  if (!zf) goto L_fe2561;
L_fe255b: /* fe255b: jmp dword ptr [0xfe3020] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_fe2561: /* fe2561: push 0xfe44a8 */
  { uint32_t v = 0xfe44a8u; esp -= 4; W32(esp, v); }
/* fe2566: push 0xfe44ac */
  { uint32_t v = 0xfe44acu; esp -= 4; W32(esp, v); }
/* fe256b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* fe256f: call 0xfe2632 */
  esp -= 4; W32(esp, 0xfe2574u); SPILL(); f_fe2632(); if (g_unwind) return; RELOAD();
/* fe2574: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fe2577: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2578(void) {
  LOAD_REGS();
L_fe2578: /* fe2578: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* fe257c: call 0xfe2552 */
  esp -= 4; W32(esp, 0xfe2581u); SPILL(); f_fe2552(); if (g_unwind) return; RELOAD();
/* fe2581: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* fe2583: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* fe2585: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* fe2587: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* fe2588: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* fe2589: ret  */
  esp += 4; SPILL(); return;
}

void f_fe258a(void) {
  LOAD_REGS();
L_fe258a: /* fe258a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* fe258c: push 0xfe3040 */
  { uint32_t v = 0xfe3040u; esp -= 4; W32(esp, v); }
/* fe2591: call 0xfe2638 */
  esp -= 4; W32(esp, 0xfe2596u); SPILL(); f_fe2638(); if (g_unwind) return; RELOAD();
/* fe2596: mov dword ptr [ebp - 0x1c], 0xfe3060 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfe3060u);
L_fe259d: /* fe259d: cmp dword ptr [ebp - 0x1c], 0xfe3060 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfe3060u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* fe25a4: jae 0xfe25c8 */
  if (!cf) goto L_fe25c8;
L_fe25a6: /* fe25a6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe25aa: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* fe25ad: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fe25af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe25b1: je 0xfe25be */
  if (zf) goto L_fe25be;
L_fe25b3: /* fe25b3: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xfe25b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe25b5: jmp 0xfe25be */
  goto L_fe25be;
L_fe25be: /* fe25be: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe25c2: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* fe25c6: jmp 0xfe259d */
  goto L_fe259d;
L_fe25c8: /* fe25c8: call 0xfe2673 */
  esp -= 4; W32(esp, 0xfe25cdu); SPILL(); f_fe2673(); if (g_unwind) return; RELOAD();
/* fe25cd: ret  */
  esp += 4; SPILL(); return;
}

void f_fe25b7(void) {
  LOAD_REGS();
L_fe25b7: /* fe25b7: xor eax, eax */
  eax = 0;
/* fe25b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe25ba: ret  */
  esp += 4; SPILL(); return;
}

void f_fe25bb(void) {
  LOAD_REGS();
  goto L_fe25bb;
L_fe259d: /* fe259d: cmp dword ptr [ebp - 0x1c], 0xfe3060 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfe3060u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* fe25a4: jae 0xfe25c8 */
  if (!cf) goto L_fe25c8;
L_fe25a6: /* fe25a6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe25aa: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* fe25ad: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fe25af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe25b1: je 0xfe25be */
  if (zf) goto L_fe25be;
L_fe25b3: /* fe25b3: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xfe25b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe25b5: jmp 0xfe25be */
  goto L_fe25be;
L_fe25bb: /* fe25bb: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_fe25be: /* fe25be: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe25c2: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* fe25c6: jmp 0xfe259d */
  goto L_fe259d;
L_fe25c8: /* fe25c8: call 0xfe2673 */
  esp -= 4; W32(esp, 0xfe25cdu); SPILL(); f_fe2673(); if (g_unwind) return; RELOAD();
/* fe25cd: ret  */
  esp += 4; SPILL(); return;
}

void f_fe25ce(void) {
  LOAD_REGS();
L_fe25ce: /* fe25ce: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* fe25d0: push 0xfe3050 */
  { uint32_t v = 0xfe3050u; esp -= 4; W32(esp, v); }
/* fe25d5: call 0xfe2638 */
  esp -= 4; W32(esp, 0xfe25dau); SPILL(); f_fe2638(); if (g_unwind) return; RELOAD();
/* fe25da: mov dword ptr [ebp - 0x1c], 0xfe3068 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfe3068u);
L_fe25e1: /* fe25e1: cmp dword ptr [ebp - 0x1c], 0xfe3068 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfe3068u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* fe25e8: jae 0xfe260c */
  if (!cf) goto L_fe260c;
L_fe25ea: /* fe25ea: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe25ee: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* fe25f1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fe25f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe25f5: je 0xfe2602 */
  if (zf) goto L_fe2602;
L_fe25f7: /* fe25f7: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xfe25f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe25f9: jmp 0xfe2602 */
  goto L_fe2602;
L_fe2602: /* fe2602: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe2606: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* fe260a: jmp 0xfe25e1 */
  goto L_fe25e1;
L_fe260c: /* fe260c: call 0xfe2673 */
  esp -= 4; W32(esp, 0xfe2611u); SPILL(); f_fe2673(); if (g_unwind) return; RELOAD();
/* fe2611: ret  */
  esp += 4; SPILL(); return;
}

void f_fe25fb(void) {
  LOAD_REGS();
L_fe25fb: /* fe25fb: xor eax, eax */
  eax = 0;
/* fe25fd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe25fe: ret  */
  esp += 4; SPILL(); return;
}

void f_fe25ff(void) {
  LOAD_REGS();
  goto L_fe25ff;
L_fe25e1: /* fe25e1: cmp dword ptr [ebp - 0x1c], 0xfe3068 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xfe3068u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* fe25e8: jae 0xfe260c */
  if (!cf) goto L_fe260c;
L_fe25ea: /* fe25ea: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe25ee: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* fe25f1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fe25f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fe25f5: je 0xfe2602 */
  if (zf) goto L_fe2602;
L_fe25f7: /* fe25f7: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xfe25f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* fe25f9: jmp 0xfe2602 */
  goto L_fe2602;
L_fe25ff: /* fe25ff: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_fe2602: /* fe2602: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* fe2606: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* fe260a: jmp 0xfe25e1 */
  goto L_fe25e1;
L_fe260c: /* fe260c: call 0xfe2673 */
  esp -= 4; W32(esp, 0xfe2611u); SPILL(); f_fe2673(); if (g_unwind) return; RELOAD();
/* fe2611: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2612(void) {
  LOAD_REGS();
L_fe2612: /* fe2612: cmp dword ptr [esp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe2617: jne 0xfe262c */
  if (!zf) goto L_fe262c;
L_fe2619: /* fe2619: cmp dword ptr [0xfe44b0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xfe44b0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fe2620: jne 0xfe262c */
  if (!zf) goto L_fe262c;
L_fe2622: /* fe2622: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* fe2626: call dword ptr [0xfe3000] */
  esp -= 4; W32(esp, 0xfe262cu); SPILL(); call_ind(R32(0xfe3000u)); if (g_unwind) return; /* KERNEL32!DisableThreadLibraryCalls */ RELOAD();
L_fe262c: /* fe262c: xor eax, eax */
  eax = 0;
/* fe262e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fe262f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_fe2632(void) {
  LOAD_REGS();
L_fe2632: /* fe2632: jmp dword ptr [0xfe301c] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_fe2638(void) {
  LOAD_REGS();
L_fe2638: /* fe2638: push 0xfe2684 */
  { uint32_t v = 0xfe2684u; esp -= 4; W32(esp, v); }
/* fe263d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* fe2643: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe2644: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* fe2648: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* fe264c: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* fe2650: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fe2652: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fe2653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fe2654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fe2655: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* fe2658: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* fe265b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fe265c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* fe265f: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* fe2666: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* fe2669: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* fe266c: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* fe2672: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2673(void) {
  LOAD_REGS();
L_fe2673: /* fe2673: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* fe2676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* fe267d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* fe267e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fe267f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fe2680: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fe2681: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* fe2682: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fe2683: ret  */
  esp += 4; SPILL(); return;
}

void f_fe2684(void) {
  LOAD_REGS();
L_fe2684: /* fe2684: jmp dword ptr [0xfe3024] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}
