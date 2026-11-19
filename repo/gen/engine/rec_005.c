#include "recomp.h"
#include "rec_mod.h"

void f_6f1190(void) {
  LOAD_REGS();
L_6f1190: /* 6f1190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1191: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1192: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f1196: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1197: mov esi, ecx */
  esi = ecx;
/* 6f1199: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f119fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f119f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f11a2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 6f11a5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f11a7: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6f11aa: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f11ad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f11af: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 6f11b2: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f11b5: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f11b8: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f11bb: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6f11be: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f11c1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f11c3: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f11c6: mov ecx, eax */
  ecx = eax;
/* 6f11c8: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f11cb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f11cd: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f11d0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f11d2: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f11d5: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f11d8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f11da: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f11dd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f11df: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f11e2: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f11e5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f11e7: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f11ea: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f11ec: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f11ef: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f11f2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f11f4: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f11f7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f11f9: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f11fc: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f11ff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1201: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1204: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1206: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f1209: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f120c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f120e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1211: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1213: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f1216: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 6f1219: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f121b: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1220: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1222: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6f1225: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f1228: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f122a: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1230: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1232: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f1235: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6f1238: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6f123b: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6f123e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6f1241: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6f1244: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6f1247: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6f124a: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6f124d: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6f1250: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6f1253: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6f1256: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6f1259: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6f125c: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6f125f: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6f1262: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6f1265: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6f1268: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6f126b: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6f126e: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6f1271: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6f1274: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6f1277: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 6f127a: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 6f127d: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 6f1280: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 6f1283: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 6f1286: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 6f1289: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 6f128c: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 6f128f: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 6f1292: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 6f1295: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 6f1298: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 6f129b: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 6f129e: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 6f12a1: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 6f12a4: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 6f12a7: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 6f12ad: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 6f12b3: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 6f12b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f12ba: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 6f12c0: mov eax, esi */
  eax = esi;
/* 6f12c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f12c3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f1320(void) {
  LOAD_REGS();
L_6f1320: /* 6f1320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1321: mov esi, ecx */
  esi = ecx;
/* 6f1323: call 0x6c7f95 */
  esp -= 4; W32(esp, 0x6f1328u); SPILL(); f_6c7f95(); if (g_unwind) return; RELOAD();
/* 6f1328: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f132d: je 0x6f133e */
  if (zf) goto L_6f133e;
L_6f132f: /* 6f132f: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 6f1334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1335: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f133bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f133b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f133e: /* 6f133e: mov eax, esi */
  eax = esi;
/* 6f1340: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1341: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f1360(void) {
  LOAD_REGS();
L_6f1360: /* 6f1360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f1361: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f1365: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1368: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1369: mov esi, ecx */
  esi = ecx;
/* 6f136b: je 0x6f13a0 */
  if (zf) goto L_6f13a0;
L_6f136d: /* 6f136d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f1370: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1371: push 0x6c7f95 */
  { uint32_t v = 0x6c7f95u; esp -= 4; W32(esp, v); }
/* 6f1376: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f1379: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f137a: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 6f137f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1380: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f1385u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f1385: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1388: je 0x6f1398 */
  if (zf) goto L_6f1398;
L_6f138a: /* 6f138a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f1390: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f1392: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f1394: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1395: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f1398u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f1398: /* 6f1398: mov eax, edi */
  eax = edi;
/* 6f139a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f139b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f139c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f139d: ret 4 */
  esp += 8; SPILL(); return;
L_6f13a0: /* 6f13a0: mov ecx, esi */
  ecx = esi;
/* 6f13a2: call 0x6c7f95 */
  esp -= 4; W32(esp, 0x6f13a7u); SPILL(); f_6c7f95(); if (g_unwind) return; RELOAD();
/* 6f13a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f13aa: je 0x6f13bb */
  if (zf) goto L_6f13bb;
L_6f13ac: /* 6f13ac: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 6f13b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f13b2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f13b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f13b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f13bb: /* 6f13bb: mov eax, esi */
  eax = esi;
/* 6f13bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f13be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f13bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f13f0(void) {
  LOAD_REGS();
L_6f13f0: /* 6f13f0: mov eax, 0xb7c540 */
  eax = 0xb7c540u;
/* 6f13f5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1410(void) {
  LOAD_REGS();
L_6f1410: /* 6f1410: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f1415: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f1417: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f141b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f141f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1423: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1424: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f1428: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f142a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f142b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f142c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f142d: push 0xb7c540 */
  { uint32_t v = 0xb7c540u; esp -= 4; W32(esp, v); }
/* 6f1432: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f1438u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f1438: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f143b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1450(void) {
  LOAD_REGS();
L_6f1450: /* 6f1450: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f1454: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1470(void) {
  LOAD_REGS();
L_6f1470: /* 6f1470: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f1472: push 0x9c0f19 */
  { uint32_t v = 0x9c0f19u; esp -= 4; W32(esp, v); }
/* 6f1477: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f147d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f147e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f1485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1487: mov esi, ecx */
  esi = ecx;
/* 6f1489: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f148d: mov dword ptr [esi], 0x9f6830 */
  W32((uint32_t)(esi), 0x9f6830u);
/* 6f1493: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f149b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f14a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f14a1: mov ecx, esi */
  ecx = esi;
/* 6f14a3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f14ab: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f14b1u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f14b1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f14b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f14b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f14bd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f14c0: ret  */
  esp += 4; SPILL(); return;
}

void f_6f14f0(void) {
  LOAD_REGS();
L_6f14f0: /* 6f14f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f14f2: push 0x9c0f39 */
  { uint32_t v = 0x9c0f39u; esp -= 4; W32(esp, v); }
/* 6f14f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f14fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f14fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f1505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1507: mov esi, ecx */
  esi = ecx;
/* 6f1509: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f150d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f1513u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f1513: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 6f1516: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f151e: mov dword ptr [esi], 0x9f6830 */
  W32((uint32_t)(esi), 0x9f6830u);
/* 6f1524: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6f152au); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6f152a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f152e: mov eax, esi */
  eax = esi;
/* 6f1530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1531: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f1538: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f153b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1560(void) {
  LOAD_REGS();
L_6f1560: /* 6f1560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1561: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1562: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f1566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1567: mov esi, ecx */
  esi = ecx;
/* 6f1569: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f156fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f156f: mov dword ptr [esi], 0x9f6830 */
  W32((uint32_t)(esi), 0x9f6830u);
/* 6f1575: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f1578: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 6f157a: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 6f157d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f157f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 6f1582: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f1585: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 6f1588: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f158b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f158c: mov eax, esi */
  eax = esi;
/* 6f158e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f158f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f15b0(void) {
  LOAD_REGS();
L_6f15b0: /* 6f15b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f15b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f15b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f15b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f15b7: mov esi, ecx */
  esi = ecx;
/* 6f15b9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f15bfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f15bf: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f15c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 6f15c4: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 6f15c7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f15c9: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 6f15cc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f15cf: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 6f15d2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f15d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f15d6: mov eax, esi */
  eax = esi;
/* 6f15d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f15d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f15f0(void) {
  LOAD_REGS();
L_6f15f0: /* 6f15f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f15f1: mov esi, ecx */
  esi = ecx;
/* 6f15f3: call 0x6c1e65 */
  esp -= 4; W32(esp, 0x6f15f8u); SPILL(); f_6c1e65(); if (g_unwind) return; RELOAD();
/* 6f15f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f15fd: je 0x6f160b */
  if (zf) goto L_6f160b;
L_6f15ff: /* 6f15ff: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6f1601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1602: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f1608u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f1608: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f160b: /* 6f160b: mov eax, esi */
  eax = esi;
/* 6f160d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f160e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f1630(void) {
  LOAD_REGS();
L_6f1630: /* 6f1630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f1631: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f1635: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1638: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1639: mov esi, ecx */
  esi = ecx;
/* 6f163b: je 0x6f166d */
  if (zf) goto L_6f166d;
L_6f163d: /* 6f163d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f1640: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1641: push 0x6c1e65 */
  { uint32_t v = 0x6c1e65u; esp -= 4; W32(esp, v); }
/* 6f1646: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f1649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f164a: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6f164c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f164d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f1652u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f1652: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1655: je 0x6f1665 */
  if (zf) goto L_6f1665;
L_6f1657: /* 6f1657: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f165d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f165f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f1661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1662: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f1665u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f1665: /* 6f1665: mov eax, edi */
  eax = edi;
/* 6f1667: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f1668: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1669: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f166a: ret 4 */
  esp += 8; SPILL(); return;
L_6f166d: /* 6f166d: mov ecx, esi */
  ecx = esi;
/* 6f166f: call 0x6c1e65 */
  esp -= 4; W32(esp, 0x6f1674u); SPILL(); f_6c1e65(); if (g_unwind) return; RELOAD();
/* 6f1674: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1677: je 0x6f1685 */
  if (zf) goto L_6f1685;
L_6f1679: /* 6f1679: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6f167b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f167c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f1682u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f1682: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f1685: /* 6f1685: mov eax, esi */
  eax = esi;
/* 6f1687: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1688: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f1689: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f16b0(void) {
  LOAD_REGS();
L_6f16b0: /* 6f16b0: mov eax, 0xb78ab0 */
  eax = 0xb78ab0u;
/* 6f16b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f16d0(void) {
  LOAD_REGS();
L_6f16d0: /* 6f16d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f16d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f16d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f16db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f16df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f16e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f16e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f16e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f16e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f16ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f16eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f16ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f16ed: push 0xb78ab0 */
  { uint32_t v = 0xb78ab0u; esp -= 4; W32(esp, v); }
/* 6f16f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f16f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f16f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f16fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1710(void) {
  LOAD_REGS();
L_6f1710: /* 6f1710: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f1714: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1730(void) {
  LOAD_REGS();
L_6f1730: /* 6f1730: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f1732: push 0x9c0f59 */
  { uint32_t v = 0x9c0f59u; esp -= 4; W32(esp, v); }
/* 6f1737: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f173d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f173e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f1745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1747: mov esi, ecx */
  esi = ecx;
/* 6f1749: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f174d: mov dword ptr [esi], 0x9f68b0 */
  W32((uint32_t)(esi), 0x9f68b0u);
/* 6f1753: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f175b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f1761u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f1761: mov ecx, esi */
  ecx = esi;
/* 6f1763: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f176b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f1771u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f1771: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f1775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1776: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f177d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f1780: ret  */
  esp += 4; SPILL(); return;
}

void f_6f17b0(void) {
  LOAD_REGS();
L_6f17b0: /* 6f17b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f17b1: mov esi, ecx */
  esi = ecx;
/* 6f17b3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f17b9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f17b9: mov dword ptr [esi], 0x9f68b0 */
  W32((uint32_t)(esi), 0x9f68b0u);
/* 6f17bf: mov eax, esi */
  eax = esi;
/* 6f17c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f17c2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f17e0(void) {
  LOAD_REGS();
L_6f17e0: /* 6f17e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f17e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f17e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f17e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f17e7: mov esi, ecx */
  esi = ecx;
/* 6f17e9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f17efu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f17ef: mov dword ptr [esi], 0x9f68b0 */
  W32((uint32_t)(esi), 0x9f68b0u);
/* 6f17f5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f17f8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f17fb: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f17fe: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f1801: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f1804: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f1807: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f180a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f180d: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f1810: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f1813: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f1816: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f1819: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f181c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f181f: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6f1822: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6f1825: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 6f1828: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 6f182b: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 6f182e: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 6f1831: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 6f1834: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f1836: lea edx, [esi + 0x50] */
  edx = (uint32_t)(esi + 0x50u);
/* 6f1839: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6f183b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6f183e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6f1841: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f1844: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f1847: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6f184a: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6f184d: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 6f1850: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 6f1853: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* 6f1856: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f1858: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* 6f185b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6f185d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6f1860: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6f1863: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f1866: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f1869: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 6f186c: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 6f186f: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 6f1872: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 6f1875: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 6f1878: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 6f187b: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 6f187e: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 6f1881: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 6f1887: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 6f188d: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 6f1893: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 6f1899: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 6f189f: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 6f18a5: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 6f18ab: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 6f18b1: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 6f18b7: xor ecx, dword ptr [edi + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x90u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f18bd: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* 6f18c3: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f18c6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f18c8: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f18ce: mov ecx, eax */
  ecx = eax;
/* 6f18d0: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 6f18d6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f18d8: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f18db: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f18dd: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f18e3: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 6f18e9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f18eb: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f18ee: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f18f0: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 6f18f6: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 6f18fc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f18fe: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1901: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1903: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f1909: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 6f190f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1911: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1914: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1916: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 6f191c: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 6f1922: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1924: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1927: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1929: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f192f: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 6f1935: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1937: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f193a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f193c: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 6f1942: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 6f1948: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f194a: and edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f1950: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f1952: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 6f1958: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 6f195e: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 6f1964: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 6f196a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f196b: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 6f1971: mov eax, esi */
  eax = esi;
/* 6f1973: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1974: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f19f0(void) {
  LOAD_REGS();
L_6f19f0: /* 6f19f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f19f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f19f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f19f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f19f7: mov esi, ecx */
  esi = ecx;
/* 6f19f9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f19ffu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f19ff: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f1a02: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f1a05: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f1a08: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f1a0b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f1a0e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f1a11: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f1a14: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f1a17: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f1a1a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f1a1d: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f1a20: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f1a23: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f1a26: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f1a29: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6f1a2c: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6f1a2f: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 6f1a32: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 6f1a35: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 6f1a38: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 6f1a3b: lea ecx, [edi + 0x50] */
  ecx = (uint32_t)(edi + 0x50u);
/* 6f1a3e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f1a40: lea edx, [esi + 0x50] */
  edx = (uint32_t)(esi + 0x50u);
/* 6f1a43: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6f1a45: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6f1a48: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6f1a4b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f1a4e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f1a51: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6f1a54: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6f1a57: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 6f1a5a: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 6f1a5d: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* 6f1a60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f1a62: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* 6f1a65: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6f1a67: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6f1a6a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6f1a6d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f1a70: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f1a73: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 6f1a76: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 6f1a79: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 6f1a7c: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 6f1a7f: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 6f1a82: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 6f1a85: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 6f1a88: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 6f1a8b: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 6f1a91: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 6f1a97: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 6f1a9d: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 6f1aa3: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 6f1aa9: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 6f1aaf: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 6f1ab5: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 6f1abb: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 6f1ac1: xor ecx, dword ptr [edi + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x90u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1ac7: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* 6f1acd: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1ad0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1ad2: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f1ad8: mov ecx, eax */
  ecx = eax;
/* 6f1ada: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 6f1ae0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1ae2: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1ae5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1ae7: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f1aed: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 6f1af3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1af5: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1af8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1afa: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 6f1b00: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 6f1b06: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1b08: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1b0b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1b0d: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f1b13: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 6f1b19: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1b1b: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1b1e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1b20: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 6f1b26: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 6f1b2c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1b2e: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f1b31: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f1b33: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 6f1b39: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 6f1b3f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1b41: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f1b44: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f1b46: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 6f1b4c: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 6f1b52: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f1b54: and edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f1b5a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f1b5c: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 6f1b62: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 6f1b68: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 6f1b6e: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 6f1b74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f1b75: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 6f1b7b: mov eax, esi */
  eax = esi;
/* 6f1b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1b7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f1c00(void) {
  LOAD_REGS();
L_6f1c00: /* 6f1c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1c01: mov esi, ecx */
  esi = ecx;
/* 6f1c03: call 0x6ca3d0 */
  esp -= 4; W32(esp, 0x6f1c08u); SPILL(); f_6ca3d0(); if (g_unwind) return; RELOAD();
/* 6f1c08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1c0d: je 0x6f1c1e */
  if (zf) goto L_6f1c1e;
L_6f1c0f: /* 6f1c0f: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 6f1c14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1c15: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f1c1bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f1c1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f1c1e: /* 6f1c1e: mov eax, esi */
  eax = esi;
/* 6f1c20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1c21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f1c40(void) {
  LOAD_REGS();
L_6f1c40: /* 6f1c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f1c41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f1c45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1c48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1c49: mov esi, ecx */
  esi = ecx;
/* 6f1c4b: je 0x6f1c80 */
  if (zf) goto L_6f1c80;
L_6f1c4d: /* 6f1c4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f1c50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1c51: push 0x6ca3d0 */
  { uint32_t v = 0x6ca3d0u; esp -= 4; W32(esp, v); }
/* 6f1c56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f1c59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1c5a: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 6f1c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1c60: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f1c65u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f1c65: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1c68: je 0x6f1c78 */
  if (zf) goto L_6f1c78;
L_6f1c6a: /* 6f1c6a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f1c70: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f1c72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f1c74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1c75: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f1c78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f1c78: /* 6f1c78: mov eax, edi */
  eax = edi;
/* 6f1c7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f1c7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1c7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f1c7d: ret 4 */
  esp += 8; SPILL(); return;
L_6f1c80: /* 6f1c80: mov ecx, esi */
  ecx = esi;
/* 6f1c82: call 0x6ca3d0 */
  esp -= 4; W32(esp, 0x6f1c87u); SPILL(); f_6ca3d0(); if (g_unwind) return; RELOAD();
/* 6f1c87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f1c8a: je 0x6f1c9b */
  if (zf) goto L_6f1c9b;
L_6f1c8c: /* 6f1c8c: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 6f1c91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1c92: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f1c98u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f1c98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f1c9b: /* 6f1c9b: mov eax, esi */
  eax = esi;
/* 6f1c9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1c9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f1c9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f1cd0(void) {
  LOAD_REGS();
L_6f1cd0: /* 6f1cd0: mov eax, 0xb68488 */
  eax = 0xb68488u;
/* 6f1cd5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1cf0(void) {
  LOAD_REGS();
L_6f1cf0: /* 6f1cf0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f1cf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f1cf7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f1cfb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f1cff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1d01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1d03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1d04: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f1d08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1d0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f1d0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1d0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1d0d: push 0xb68488 */
  { uint32_t v = 0xb68488u; esp -= 4; W32(esp, v); }
/* 6f1d12: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f1d18u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f1d18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f1d1b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1d30(void) {
  LOAD_REGS();
L_6f1d30: /* 6f1d30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f1d34: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1d50(void) {
  LOAD_REGS();
L_6f1d50: /* 6f1d50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f1d52: push 0x9c0f9d */
  { uint32_t v = 0x9c0f9du; esp -= 4; W32(esp, v); }
/* 6f1d57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f1d5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1d5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f1d65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1d66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1d67: mov esi, ecx */
  esi = ecx;
/* 6f1d69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f1d6d: mov dword ptr [esi], 0x9f6930 */
  W32((uint32_t)(esi), 0x9f6930u);
/* 6f1d73: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 6f1d7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f1d81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f1d81: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f1d84: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 6f1d89: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6f1d8fu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f1d8f: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 6f1d92: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6f1d97: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6f1d9du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f1d9d: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 6f1da0: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6f1da5: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6f1dabu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f1dab: mov ecx, esi */
  ecx = esi;
/* 6f1dad: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f1db5: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f1dbbu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f1dbb: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f1dbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1dc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f1dc7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f1dca: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1df0(void) {
  LOAD_REGS();
L_6f1df0: /* 6f1df0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f1df2: push 0x9c0fe1 */
  { uint32_t v = 0x9c0fe1u; esp -= 4; W32(esp, v); }
/* 6f1df7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f1dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1dfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f1e05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1e06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1e07: mov esi, ecx */
  esi = ecx;
/* 6f1e09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f1e0d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f1e13u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f1e13: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 6f1e16: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f1e1e: mov dword ptr [esi], 0x9f6930 */
  W32((uint32_t)(esi), 0x9f6930u);
/* 6f1e24: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f1e2au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f1e2a: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 6f1e2d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6f1e32: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f1e38u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f1e38: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f1e3b: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 6f1e40: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f1e46u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f1e46: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f1e4a: mov eax, esi */
  eax = esi;
/* 6f1e4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1e4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f1e54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f1e57: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1e80(void) {
  LOAD_REGS();
L_6f1e80: /* 6f1e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f1e81: mov ebp, esp */
  ebp = esp;
/* 6f1e83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f1e85: push 0x9c1000 */
  { uint32_t v = 0x9c1000u; esp -= 4; W32(esp, v); }
/* 6f1e8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f1e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1e91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f1e98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f1e9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f1e9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1e9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1e9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 6f1ea1: mov esi, ecx */
  esi = ecx;
/* 6f1ea3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 6f1eaa: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x6f1eb0u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 6f1eb0: mov ecx, esi */
  ecx = esi;
/* 6f1eb2: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x6f1eb8u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 6f1eb8: mov ecx, eax */
  ecx = eax;
/* 6f1eba: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x6f1ec0u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 6f1ec0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6f1ec2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1ec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1ec5: push 0xac3a1c */
  { uint32_t v = 0xac3a1cu; esp -= 4; W32(esp, v); }
/* 6f1eca: push 0xac3a00 */
  { uint32_t v = 0xac3a00u; esp -= 4; W32(esp, v); }
/* 6f1ecf: call dword ptr [0xcfa330] */
  esp -= 4; W32(esp, 0x6f1ed5u); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* 6f1ed5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f1ed8: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 6f1edc: je 0x6f1ee8 */
  if (zf) goto L_6f1ee8;
L_6f1ede: /* 6f1ede: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1edf: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 6f1ee2: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x6f1ee8u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
L_6f1ee8: /* 6f1ee8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 6f1eeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f1eec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1eed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f1ef4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f1ef5: mov esp, ebp */
  esp = ebp;
/* 6f1ef7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f1ef8: ret  */
  esp += 4; SPILL(); return;
}

void f_6f1ef9(void) {
  LOAD_REGS();
L_6f1ef9: /* 6f1ef9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 6f1efc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 6f1f01: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 6f1f04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1f05: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 6f1f08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6f1f0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_6f1f0d(); return;
}

void f_6f1f0d(void) {
  LOAD_REGS();
L_6f1f0d: /* 6f1f0d: push 0x9f69ac */
  { uint32_t v = 0x9f69acu; esp -= 4; W32(esp, v); }
/* 6f1f12: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 6f1f17: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x6f1f1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 6f1f1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f1f20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1f22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f1f24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6f1f29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_6f1f29: guest_badaddr(0x6f1f29); return;
}

void f_6f1f60(void) {
  LOAD_REGS();
L_6f1f60: /* 6f1f60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f1f62: push 0x9c1031 */
  { uint32_t v = 0x9c1031u; esp -= 4; W32(esp, v); }
/* 6f1f67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f1f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1f6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f1f75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1f76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f1f77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1f78: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6f1f7c: mov esi, ecx */
  esi = ecx;
/* 6f1f7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1f7f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6f1f83: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f1f89u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f1f89: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 6f1f8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f1f8d: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 6f1f90: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6f1f98: mov dword ptr [esi], 0x9f6930 */
  W32((uint32_t)(esi), 0x9f6930u);
/* 6f1f9e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6f1fa4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6f1fa4: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 6f1fa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f1fa8: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 6f1fab: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 6f1fb0: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6f1fb6u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6f1fb6: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6f1fb9: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f1fbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f1fbd: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f1fc0: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 6f1fc5: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6f1fc8: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6f1fceu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6f1fce: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f1fd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f1fd3: mov eax, esi */
  eax = esi;
/* 6f1fd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f1fd6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f1fdd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f1fe0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2020(void) {
  LOAD_REGS();
L_6f2020: /* 6f2020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2021: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2022: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f2026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2027: mov esi, ecx */
  esi = ecx;
/* 6f2029: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f202fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f202f: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 6f2032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f2033: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 6f2036: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f203cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f203c: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 6f203f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2040: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 6f2043: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f2049u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f2049: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6f204c: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f204f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2050: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6f2053: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6f2056: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f205cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f205c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f205d: mov eax, esi */
  eax = esi;
/* 6f205f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2060: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2090(void) {
  LOAD_REGS();
L_6f2090: /* 6f2090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2091: mov esi, ecx */
  esi = ecx;
/* 6f2093: call 0x6c797d */
  esp -= 4; W32(esp, 0x6f2098u); SPILL(); f_6c797d(); if (g_unwind) return; RELOAD();
/* 6f2098: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f209d: je 0x6f20ab */
  if (zf) goto L_6f20ab;
L_6f209f: /* 6f209f: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6f20a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f20a2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f20a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f20a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f20ab: /* 6f20ab: mov eax, esi */
  eax = esi;
/* 6f20ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f20ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f20d0(void) {
  LOAD_REGS();
L_6f20d0: /* 6f20d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f20d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f20d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f20d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f20d9: mov esi, ecx */
  esi = ecx;
/* 6f20db: je 0x6f210d */
  if (zf) goto L_6f210d;
L_6f20dd: /* 6f20dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f20e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f20e1: push 0x6c797d */
  { uint32_t v = 0x6c797du; esp -= 4; W32(esp, v); }
/* 6f20e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f20e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f20ea: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6f20ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f20ed: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f20f2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f20f2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f20f5: je 0x6f2105 */
  if (zf) goto L_6f2105;
L_6f20f7: /* 6f20f7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f20fd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f20ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f2101: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2102: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f2105u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f2105: /* 6f2105: mov eax, edi */
  eax = edi;
/* 6f2107: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f2108: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2109: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f210a: ret 4 */
  esp += 8; SPILL(); return;
L_6f210d: /* 6f210d: mov ecx, esi */
  ecx = esi;
/* 6f210f: call 0x6c797d */
  esp -= 4; W32(esp, 0x6f2114u); SPILL(); f_6c797d(); if (g_unwind) return; RELOAD();
/* 6f2114: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2117: je 0x6f2125 */
  if (zf) goto L_6f2125;
L_6f2119: /* 6f2119: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6f211b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f211c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f2122u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f2122: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f2125: /* 6f2125: mov eax, esi */
  eax = esi;
/* 6f2127: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2128: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f2129: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2150(void) {
  LOAD_REGS();
L_6f2150: /* 6f2150: mov eax, 0xb5f878 */
  eax = 0xb5f878u;
/* 6f2155: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2170(void) {
  LOAD_REGS();
L_6f2170: /* 6f2170: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f2175: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2177: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f217b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f217f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2183: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2184: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f2188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f218a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f218b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f218c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f218d: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 6f2192: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f2198u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f2198: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f219b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f21b0(void) {
  LOAD_REGS();
L_6f21b0: /* 6f21b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f21b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f21d0(void) {
  LOAD_REGS();
L_6f21d0: /* 6f21d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f21d2: push 0x9c1059 */
  { uint32_t v = 0x9c1059u; esp -= 4; W32(esp, v); }
/* 6f21d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f21dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f21de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f21e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f21e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f21e7: mov esi, ecx */
  esi = ecx;
/* 6f21e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f21ed: mov dword ptr [esi], 0x9f69e8 */
  W32((uint32_t)(esi), 0x9f69e8u);
/* 6f21f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f21fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f2201u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f2201: mov ecx, esi */
  ecx = esi;
/* 6f2203: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f220b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f2211u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f2211: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f2215: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2216: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f221d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f2220: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2250(void) {
  LOAD_REGS();
L_6f2250: /* 6f2250: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 6f2253: cmp eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6f2257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2258: jl 0x6f2285 */
  if ((sf != of)) goto L_6f2285;
L_6f225a: /* 6f225a: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 6f225d: cmp edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6f2261: jl 0x6f2285 */
  if ((sf != of)) goto L_6f2285;
L_6f2263: /* 6f2263: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 6f2266: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 6f226a: mov edx, eax */
  edx = eax;
/* 6f226c: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f226e: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f2270: jne 0x6f2285 */
  if (!zf) goto L_6f2285;
L_6f2272: /* 6f2272: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 6f2275: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6f2279: mov eax, 1 */
  eax = 0x1u;
/* 6f227e: jle 0x6f2287 */
  if ((zf || sf != of)) goto L_6f2287;
L_6f2280: /* 6f2280: test byte ptr [ecx + 0x48], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x48u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2283: jne 0x6f2287 */
  if (!zf) goto L_6f2287;
L_6f2285: /* 6f2285: xor eax, eax */
  eax = 0;
L_6f2287: /* 6f2287: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2288: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6f22a0(void) {
  LOAD_REGS();
L_6f22a0: /* 6f22a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f22a1: mov esi, ecx */
  esi = ecx;
/* 6f22a3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f22a9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f22a9: mov dword ptr [esi], 0x9f69e8 */
  W32((uint32_t)(esi), 0x9f69e8u);
/* 6f22af: mov eax, esi */
  eax = esi;
/* 6f22b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f22b2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f22d0(void) {
  LOAD_REGS();
L_6f22d0: /* 6f22d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f22d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f22d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f22d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f22d7: mov esi, ecx */
  esi = ecx;
/* 6f22d9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f22dfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f22df: mov dword ptr [esi], 0x9f69e8 */
  W32((uint32_t)(esi), 0x9f69e8u);
/* 6f22e5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f22e8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f22eb: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f22ee: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f22f1: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f22f4: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f22f7: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f22fa: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f22fd: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f2300: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f2303: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f2306: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f2309: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f230c: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f230f: mov cl, byte ptr [edi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 6f2312: mov byte ptr [esi + 0x44], cl */
  W8((uint32_t)(esi + 0x44u), (ecx & 0xffu));
/* 6f2315: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 6f2318: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 6f231b: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f231d: mov eax, edi */
  eax = edi;
/* 6f231f: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f2322: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f2324: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6f2327: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f2328: mov eax, esi */
  eax = esi;
/* 6f232a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f232b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2350(void) {
  LOAD_REGS();
L_6f2350: /* 6f2350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2351: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2352: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f2356: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2357: mov esi, ecx */
  esi = ecx;
/* 6f2359: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f235fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f235f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f2362: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f2365: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f2368: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f236b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f236e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f2371: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f2374: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f2377: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f237a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f237d: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f2380: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f2383: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f2386: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f2389: mov cl, byte ptr [edi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 6f238c: mov byte ptr [esi + 0x44], cl */
  W8((uint32_t)(esi + 0x44u), (ecx & 0xffu));
/* 6f238f: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 6f2392: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 6f2395: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f2397: mov eax, edi */
  eax = edi;
/* 6f2399: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f239c: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f239e: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6f23a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f23a2: mov eax, esi */
  eax = esi;
/* 6f23a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f23a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f23d0(void) {
  LOAD_REGS();
L_6f23d0: /* 6f23d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f23d1: mov esi, ecx */
  esi = ecx;
/* 6f23d3: call 0x6c5777 */
  esp -= 4; W32(esp, 0x6f23d8u); SPILL(); f_6c5777(); if (g_unwind) return; RELOAD();
/* 6f23d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f23dd: je 0x6f23eb */
  if (zf) goto L_6f23eb;
L_6f23df: /* 6f23df: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f23e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f23e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f23e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f23e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f23eb: /* 6f23eb: mov eax, esi */
  eax = esi;
/* 6f23ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f23ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2410(void) {
  LOAD_REGS();
L_6f2410: /* 6f2410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f2411: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f2415: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2418: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2419: mov esi, ecx */
  esi = ecx;
/* 6f241b: je 0x6f244d */
  if (zf) goto L_6f244d;
L_6f241d: /* 6f241d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f2420: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2421: push 0x6c5777 */
  { uint32_t v = 0x6c5777u; esp -= 4; W32(esp, v); }
/* 6f2426: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f2429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f242a: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f242c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f242d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f2432u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f2432: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2435: je 0x6f2445 */
  if (zf) goto L_6f2445;
L_6f2437: /* 6f2437: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f243d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f243f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f2441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2442: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f2445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f2445: /* 6f2445: mov eax, edi */
  eax = edi;
/* 6f2447: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f2448: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2449: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f244a: ret 4 */
  esp += 8; SPILL(); return;
L_6f244d: /* 6f244d: mov ecx, esi */
  ecx = esi;
/* 6f244f: call 0x6c5777 */
  esp -= 4; W32(esp, 0x6f2454u); SPILL(); f_6c5777(); if (g_unwind) return; RELOAD();
/* 6f2454: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2457: je 0x6f2465 */
  if (zf) goto L_6f2465;
L_6f2459: /* 6f2459: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f245b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f245c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f2462u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f2462: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f2465: /* 6f2465: mov eax, esi */
  eax = esi;
/* 6f2467: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2468: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f2469: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2490(void) {
  LOAD_REGS();
L_6f2490: /* 6f2490: mov eax, 0xb1e8d8 */
  eax = 0xb1e8d8u;
/* 6f2495: ret  */
  esp += 4; SPILL(); return;
}

void f_6f24b0(void) {
  LOAD_REGS();
L_6f24b0: /* 6f24b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f24b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f24b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f24bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f24bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f24c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f24c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f24c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f24c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f24ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f24cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f24cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f24cd: push 0xb1e8d8 */
  { uint32_t v = 0xb1e8d8u; esp -= 4; W32(esp, v); }
/* 6f24d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f24d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f24d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f24db: ret  */
  esp += 4; SPILL(); return;
}

void f_6f24f0(void) {
  LOAD_REGS();
L_6f24f0: /* 6f24f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f24f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2510(void) {
  LOAD_REGS();
L_6f2510: /* 6f2510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f2512: push 0x9c1079 */
  { uint32_t v = 0x9c1079u; esp -= 4; W32(esp, v); }
/* 6f2517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f251d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f251e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f2525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2527: mov esi, ecx */
  esi = ecx;
/* 6f2529: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f252d: mov dword ptr [esi], 0x9f6a68 */
  W32((uint32_t)(esi), 0x9f6a68u);
/* 6f2533: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f253b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f2541u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f2541: mov ecx, esi */
  ecx = esi;
/* 6f2543: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f254b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f2551u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f2551: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f2555: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2556: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f255d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f2560: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2590(void) {
  LOAD_REGS();
L_6f2590: /* 6f2590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2591: mov esi, ecx */
  esi = ecx;
/* 6f2593: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f2599u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f2599: mov dword ptr [esi], 0x9f6a68 */
  W32((uint32_t)(esi), 0x9f6a68u);
/* 6f259f: mov eax, esi */
  eax = esi;
/* 6f25a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f25a2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f25c0(void) {
  LOAD_REGS();
L_6f25c0: /* 6f25c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f25c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f25c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f25c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f25c7: mov esi, ecx */
  esi = ecx;
/* 6f25c9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f25cfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f25cf: mov dword ptr [esi], 0x9f6a68 */
  W32((uint32_t)(esi), 0x9f6a68u);
/* 6f25d5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f25d8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f25db: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f25de: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f25e1: lea edx, [edi + 0x30] */
  edx = (uint32_t)(edi + 0x30u);
/* 6f25e4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6f25e6: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 6f25e9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f25eb: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6f25ee: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6f25f1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f25f4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f25f7: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 6f25fa: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 6f25fd: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 6f2600: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 6f2603: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6f2606: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6f2609: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6f260c: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 6f260f: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f2611: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f2614: mov ecx, edi */
  ecx = edi;
/* 6f2616: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f2618: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f2619: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6f261c: mov eax, esi */
  eax = esi;
/* 6f261e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f261f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2650(void) {
  LOAD_REGS();
L_6f2650: /* 6f2650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2651: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2652: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f2656: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2657: mov esi, ecx */
  esi = ecx;
/* 6f2659: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f265fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f265f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f2662: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f2665: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f2668: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f266b: lea edx, [edi + 0x30] */
  edx = (uint32_t)(edi + 0x30u);
/* 6f266e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6f2670: lea eax, [esi + 0x30] */
  eax = (uint32_t)(esi + 0x30u);
/* 6f2673: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f2675: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6f2678: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6f267b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f267e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f2681: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 6f2684: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 6f2687: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 6f268a: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 6f268d: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6f2690: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6f2693: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6f2696: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 6f2699: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f269b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f269e: mov ecx, edi */
  ecx = edi;
/* 6f26a0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f26a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f26a3: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6f26a6: mov eax, esi */
  eax = esi;
/* 6f26a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f26a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f26d0(void) {
  LOAD_REGS();
L_6f26d0: /* 6f26d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f26d1: mov esi, ecx */
  esi = ecx;
/* 6f26d3: call 0x6cc5f4 */
  esp -= 4; W32(esp, 0x6f26d8u); SPILL(); f_6cc5f4(); if (g_unwind) return; RELOAD();
/* 6f26d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f26dd: je 0x6f26eb */
  if (zf) goto L_6f26eb;
L_6f26df: /* 6f26df: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f26e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f26e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f26e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f26e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f26eb: /* 6f26eb: mov eax, esi */
  eax = esi;
/* 6f26ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f26ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2710(void) {
  LOAD_REGS();
L_6f2710: /* 6f2710: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f2711: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f2715: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2719: mov esi, ecx */
  esi = ecx;
/* 6f271b: je 0x6f274d */
  if (zf) goto L_6f274d;
L_6f271d: /* 6f271d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f2720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2721: push 0x6cc5f4 */
  { uint32_t v = 0x6cc5f4u; esp -= 4; W32(esp, v); }
/* 6f2726: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f2729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f272a: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f272c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f272d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f2732u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f2732: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2735: je 0x6f2745 */
  if (zf) goto L_6f2745;
L_6f2737: /* 6f2737: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f273d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f273f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f2741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2742: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f2745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f2745: /* 6f2745: mov eax, edi */
  eax = edi;
/* 6f2747: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f2748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2749: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f274a: ret 4 */
  esp += 8; SPILL(); return;
L_6f274d: /* 6f274d: mov ecx, esi */
  ecx = esi;
/* 6f274f: call 0x6cc5f4 */
  esp -= 4; W32(esp, 0x6f2754u); SPILL(); f_6cc5f4(); if (g_unwind) return; RELOAD();
/* 6f2754: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2757: je 0x6f2765 */
  if (zf) goto L_6f2765;
L_6f2759: /* 6f2759: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6f275b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f275c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f2762u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f2762: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f2765: /* 6f2765: mov eax, esi */
  eax = esi;
/* 6f2767: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2768: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f2769: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2790(void) {
  LOAD_REGS();
L_6f2790: /* 6f2790: mov eax, 0xb1ee08 */
  eax = 0xb1ee08u;
/* 6f2795: ret  */
  esp += 4; SPILL(); return;
}

void f_6f27b0(void) {
  LOAD_REGS();
L_6f27b0: /* 6f27b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f27b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f27b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f27bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f27bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f27c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f27c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f27c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f27c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f27ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f27cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f27cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f27cd: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 6f27d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f27d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f27d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f27db: ret  */
  esp += 4; SPILL(); return;
}

void f_6f27f0(void) {
  LOAD_REGS();
L_6f27f0: /* 6f27f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f27f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2810(void) {
  LOAD_REGS();
L_6f2810: /* 6f2810: mov eax, 0xb1f868 */
  eax = 0xb1f868u;
/* 6f2815: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2830(void) {
  LOAD_REGS();
L_6f2830: /* 6f2830: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f2835: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2837: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f283b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f283f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2841: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2843: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2844: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f2848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f284a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f284b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f284c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f284d: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 6f2852: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f2858u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f2858: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f285b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2870(void) {
  LOAD_REGS();
L_6f2870: /* 6f2870: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f2874: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2890(void) {
  LOAD_REGS();
L_6f2890: /* 6f2890: mov eax, 0xb1f338 */
  eax = 0xb1f338u;
/* 6f2895: ret  */
  esp += 4; SPILL(); return;
}

void f_6f28b0(void) {
  LOAD_REGS();
L_6f28b0: /* 6f28b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f28b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f28b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f28bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f28bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f28c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f28c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f28c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f28c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f28ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f28cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f28cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f28cd: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 6f28d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f28d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f28d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f28db: ret  */
  esp += 4; SPILL(); return;
}

void f_6f28f0(void) {
  LOAD_REGS();
L_6f28f0: /* 6f28f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f28f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2910(void) {
  LOAD_REGS();
L_6f2910: /* 6f2910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2911: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f2915: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2916: mov eax, ecx */
  eax = ecx;
/* 6f2918: mov ecx, 0xb */
  ecx = 0xbu;
/* 6f291d: mov edi, eax */
  edi = eax;
/* 6f291f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f2921: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f2922: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2923: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2940(void) {
  LOAD_REGS();
L_6f2940: /* 6f2940: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2942: call 0x6c321a */
  esp -= 4; W32(esp, 0x6f2947u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 6f2947: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2960(void) {
  LOAD_REGS();
L_6f2960: /* 6f2960: mov eax, ecx */
  eax = ecx;
/* 6f2962: mov dword ptr [eax], 0x9f6ae4 */
  W32((uint32_t)(eax), 0x9f6ae4u);
/* 6f2968: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2980(void) {
  LOAD_REGS();
L_6f2980: /* 6f2980: mov eax, ecx */
  eax = ecx;
/* 6f2982: mov dword ptr [eax], 0x9f6ae4 */
  W32((uint32_t)(eax), 0x9f6ae4u);
/* 6f2988: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f29a0(void) {
  LOAD_REGS();
L_6f29a0: /* 6f29a0: mov eax, ecx */
  eax = ecx;
/* 6f29a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f29c0(void) {
  LOAD_REGS();
L_6f29c0: /* 6f29c0: mov eax, 0xb847e8 */
  eax = 0xb847e8u;
/* 6f29c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f29e0(void) {
  LOAD_REGS();
L_6f29e0: /* 6f29e0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f29e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f29e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f29eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f29ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f29f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f29f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f29f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f29f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f29fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f29fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f29fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f29fd: push 0xb847e8 */
  { uint32_t v = 0xb847e8u; esp -= 4; W32(esp, v); }
/* 6f2a02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f2a08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f2a08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f2a0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2a20(void) {
  LOAD_REGS();
L_6f2a20: /* 6f2a20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f2a24: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2a40(void) {
  LOAD_REGS();
L_6f2a40: /* 6f2a40: mov eax, ecx */
  eax = ecx;
/* 6f2a42: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2a60(void) {
  LOAD_REGS();
L_6f2a60: /* 6f2a60: mov eax, ecx */
  eax = ecx;
/* 6f2a62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f2a66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2a67: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6f2a69: mov edx, eax */
  edx = eax;
/* 6f2a6b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6f2a6d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f2a70: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6f2a73: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 6f2a76: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 6f2a79: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f2a7c: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 6f2a7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2a80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2aa0(void) {
  LOAD_REGS();
L_6f2aa0: /* 6f2aa0: mov eax, ecx */
  eax = ecx;
/* 6f2aa2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2ac0(void) {
  LOAD_REGS();
L_6f2ac0: /* 6f2ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2ac1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f2ac5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f2ac6: mov eax, ecx */
  eax = ecx;
/* 6f2ac8: mov ecx, 7 */
  ecx = 0x7u;
/* 6f2acd: mov edi, eax */
  edi = eax;
/* 6f2acf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f2ad1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f2ad2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2ad3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2af0(void) {
  LOAD_REGS();
L_6f2af0: /* 6f2af0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 6f2af3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f2af6: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2b10(void) {
  LOAD_REGS();
L_6f2b10: /* 6f2b10: mov eax, 1 */
  eax = 0x1u;
/* 6f2b15: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2b30(void) {
  LOAD_REGS();
L_6f2b30: /* 6f2b30: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 6f2b33: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2b50(void) {
  LOAD_REGS();
L_6f2b50: /* 6f2b50: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 6f2b53: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2b70(void) {
  LOAD_REGS();
L_6f2b70: /* 6f2b70: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f2b90(void) {
  LOAD_REGS();
L_6f2b90: /* 6f2b90: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 6f2b93: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f2b96: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2bb0(void) {
  LOAD_REGS();
L_6f2bb0: /* 6f2bb0: mov eax, 1 */
  eax = 0x1u;
/* 6f2bb5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2bd0(void) {
  LOAD_REGS();
L_6f2bd0: /* 6f2bd0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 6f2bd3: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2bf0(void) {
  LOAD_REGS();
L_6f2bf0: /* 6f2bf0: mov eax, 2 */
  eax = 0x2u;
/* 6f2bf5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2c10(void) {
  LOAD_REGS();
L_6f2c10: /* 6f2c10: mov eax, ecx */
  eax = ecx;
/* 6f2c12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f2c16: mov dword ptr [eax], 0x9f6b0c */
  W32((uint32_t)(eax), 0x9f6b0cu);
/* 6f2c1c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f2c1f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f2c22: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f2c25: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f2c28: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f2c2b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f2c2e: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f2c31: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f2c34: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2c50(void) {
  LOAD_REGS();
L_6f2c50: /* 6f2c50: mov eax, ecx */
  eax = ecx;
/* 6f2c52: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f2c56: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f2c59: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f2c5c: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f2c5f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f2c62: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f2c65: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f2c68: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f2c6b: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f2c6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2c90(void) {
  LOAD_REGS();
L_6f2c90: /* 6f2c90: mov eax, 0xb84d18 */
  eax = 0xb84d18u;
/* 6f2c95: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2cb0(void) {
  LOAD_REGS();
L_6f2cb0: /* 6f2cb0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f2cb5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2cb7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f2cbb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f2cbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2cc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2cc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2cc4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f2cc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2cca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f2ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f2ccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2ccd: push 0xb84d18 */
  { uint32_t v = 0xb84d18u; esp -= 4; W32(esp, v); }
/* 6f2cd2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f2cd8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f2cd8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f2cdb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2cf0(void) {
  LOAD_REGS();
L_6f2cf0: /* 6f2cf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f2cf4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2d10(void) {
  LOAD_REGS();
L_6f2d10: /* 6f2d10: lea eax, [ecx - 0x28] */
  eax = (uint32_t)(ecx + 0xffffffd8u);
/* 6f2d13: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2d30(void) {
  LOAD_REGS();
L_6f2d30: /* 6f2d30: mov eax, 0xac3a2c */
  eax = 0xac3a2cu;
/* 6f2d35: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2d50(void) {
  LOAD_REGS();
L_6f2d50: /* 6f2d50: mov eax, 0xb82238 */
  eax = 0xb82238u;
/* 6f2d55: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2d70(void) {
  LOAD_REGS();
L_6f2d70: /* 6f2d70: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f2d75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2d77: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f2d7b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f2d7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2d81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2d83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2d84: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f2d88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2d8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f2d8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f2d8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2d8d: push 0xb82238 */
  { uint32_t v = 0xb82238u; esp -= 4; W32(esp, v); }
/* 6f2d92: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f2d98u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f2d98: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f2d9b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2db0(void) {
  LOAD_REGS();
L_6f2db0: /* 6f2db0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f2db4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2dd0(void) {
  LOAD_REGS();
L_6f2dd0: /* 6f2dd0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f2dd4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f2dd6: je 0x6f2ddd */
  if (zf) goto L_6f2ddd;
L_6f2dd8: /* 6f2dd8: jmp 0x6c7e55 */
  SPILL(); f_6c7e55(); return;
L_6f2ddd: /* 6f2ddd: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2df0(void) {
  LOAD_REGS();
L_6f2df0: /* 6f2df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f2df4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f2df8: mov dword ptr [ecx + 0xea8], eax */
  W32((uint32_t)(ecx + 0xea8u), eax);
/* 6f2dfe: mov dword ptr [ecx + 0xeac], edx */
  W32((uint32_t)(ecx + 0xeacu), edx);
/* 6f2e04: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f2e20(void) {
  LOAD_REGS();
L_6f2e20: /* 6f2e20: mov eax, dword ptr [ecx + 0xea8] */
  eax = R32((uint32_t)(ecx + 0xea8u));
/* 6f2e26: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2e40(void) {
  LOAD_REGS();
L_6f2e40: /* 6f2e40: fld dword ptr [ecx + 0xeac] */
  { double v = F32((uint32_t)(ecx + 0xeacu)); FPUSH(v); }
/* 6f2e46: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2e60(void) {
  LOAD_REGS();
L_6f2e60: /* 6f2e60: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6f2e63: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6f2e80(void) {
  LOAD_REGS();
L_6f2e80: /* 6f2e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f2e84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2e85: mov esi, ecx */
  esi = ecx;
/* 6f2e87: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2e89: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f2e8c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 6f2e8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f2e8f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6f2e92: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x6f2e98u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 6f2e98: mov eax, esi */
  eax = esi;
/* 6f2e9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2e9b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2eb0(void) {
  LOAD_REGS();
L_6f2eb0: /* 6f2eb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f2eb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f2eb5: mov esi, ecx */
  esi = ecx;
/* 6f2eb7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2eb9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f2ebc: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 6f2ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f2ebf: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6f2ec2: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x6f2ec8u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f2ec8: mov eax, esi */
  eax = esi;
/* 6f2eca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f2ecb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f2ee0(void) {
  LOAD_REGS();
L_6f2ee0: /* 6f2ee0: mov eax, 0xcc7b00 */
  eax = 0xcc7b00u;
/* 6f2ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2f00(void) {
  LOAD_REGS();
L_6f2f00: /* 6f2f00: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f2f05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2f07: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f2f0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f2f0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2f11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2f14: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f2f18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2f1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f2f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f2f1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2f1d: push 0xcc7b00 */
  { uint32_t v = 0xcc7b00u; esp -= 4; W32(esp, v); }
/* 6f2f22: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f2f28u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f2f28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f2f2b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2f40(void) {
  LOAD_REGS();
L_6f2f40: /* 6f2f40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f2f44: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2f60(void) {
  LOAD_REGS();
L_6f2f60: /* 6f2f60: mov eax, 0xcc5bc8 */
  eax = 0xcc5bc8u;
/* 6f2f65: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2f80(void) {
  LOAD_REGS();
L_6f2f80: /* 6f2f80: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f2f85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f2f87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f2f8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f2f8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2f91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2f93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2f94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f2f98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f2f9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f2f9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f2f9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f2f9d: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 6f2fa2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f2fa8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f2fa8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f2fab: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2fc0(void) {
  LOAD_REGS();
L_6f2fc0: /* 6f2fc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f2fc4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f2fe0(void) {
  LOAD_REGS();
L_6f2fe0: /* 6f2fe0: mov eax, 0xb7d828 */
  eax = 0xb7d828u;
/* 6f2fe5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3000(void) {
  LOAD_REGS();
L_6f3000: /* 6f3000: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f3005: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f3007: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f300b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f300f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3011: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3013: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3014: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f3018: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f301a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f301b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f301c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f301d: push 0xb7d828 */
  { uint32_t v = 0xb7d828u; esp -= 4; W32(esp, v); }
/* 6f3022: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f3028u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f3028: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f302b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3040(void) {
  LOAD_REGS();
L_6f3040: /* 6f3040: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f3044: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3060(void) {
  LOAD_REGS();
L_6f3060: /* 6f3060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f3062: push 0x9c1099 */
  { uint32_t v = 0x9c1099u; esp -= 4; W32(esp, v); }
/* 6f3067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f306d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f306e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f3075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3077: mov esi, ecx */
  esi = ecx;
/* 6f3079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f307d: mov dword ptr [esi], 0x9f6b28 */
  W32((uint32_t)(esi), 0x9f6b28u);
/* 6f3083: mov dword ptr [esi + 0x28], 0x9f6b24 */
  W32((uint32_t)(esi + 0x28u), 0x9f6b24u);
/* 6f308a: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f3092: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f3098u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f3098: mov ecx, esi */
  ecx = esi;
/* 6f309a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f30a2: call dword ptr [0xcfa2a0] */
  esp -= 4; W32(esp, 0x6f30a8u); SPILL(); f_4e152d(); if (g_unwind) return; /* Core!??1USubsystem@@UAE@XZ */ RELOAD();
/* 6f30a8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f30ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f30ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f30b4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f30b7: ret  */
  esp += 4; SPILL(); return;
}

void f_6f30e0(void) {
  LOAD_REGS();
L_6f30e0: /* 6f30e0: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3100(void) {
  LOAD_REGS();
L_6f3100: /* 6f3100: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3120(void) {
  LOAD_REGS();
L_6f3120: /* 6f3120: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3140(void) {
  LOAD_REGS();
L_6f3140: /* 6f3140: xor eax, eax */
  eax = 0;
/* 6f3142: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3160(void) {
  LOAD_REGS();
L_6f3160: /* 6f3160: xor eax, eax */
  eax = 0;
/* 6f3162: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3180(void) {
  LOAD_REGS();
L_6f3180: /* 6f3180: xor eax, eax */
  eax = 0;
/* 6f3182: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f31a0(void) {
  LOAD_REGS();
L_6f31a0: /* 6f31a0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6f31c0(void) {
  LOAD_REGS();
L_6f31c0: /* 6f31c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f31c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f31c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f31c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f31c7: mov esi, ecx */
  esi = ecx;
/* 6f31c9: call dword ptr [0xcfa2a8] */
  esp -= 4; W32(esp, 0x6f31cfu); SPILL(); f_4e3887(); if (g_unwind) return; /* Core!??0USubsystem@@QAE@ABV0@@Z */ RELOAD();
/* 6f31cf: mov dword ptr [esi], 0x9f6b28 */
  W32((uint32_t)(esi), 0x9f6b28u);
/* 6f31d5: mov dword ptr [esi + 0x28], 0x9f6b24 */
  W32((uint32_t)(esi + 0x28u), 0x9f6b24u);
/* 6f31dc: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 6f31df: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f31e2: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f31e5: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f31e8: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 6f31eb: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 6f31ee: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6f31f1: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6f31f4: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6f31f7: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6f31fa: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6f31fd: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6f3200: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6f3203: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6f3206: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6f3209: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6f320c: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6f320f: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6f3212: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6f3215: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6f3218: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6f321b: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6f321e: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6f3221: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6f3224: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6f3227: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6f322a: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 6f322d: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 6f3230: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 6f3233: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 6f3236: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 6f3239: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 6f323c: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 6f323f: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 6f3242: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 6f3245: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 6f3248: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 6f324b: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 6f324e: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 6f3251: xor ecx, dword ptr [edi + 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f3254: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 6f3257: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f325a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f325c: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 6f325f: mov eax, edx */
  eax = edx;
/* 6f3261: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 6f3264: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3266: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f3269: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f326b: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 6f326e: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 6f3271: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 6f3274: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 6f327a: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 6f3280: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 6f3286: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 6f328c: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 6f3292: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 6f3298: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 6f329e: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 6f32a4: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 6f32aa: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 6f32b0: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 6f32b6: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 6f32bc: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 6f32c2: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 6f32c8: mov edx, dword ptr [edi + 0x9c] */
  edx = R32((uint32_t)(edi + 0x9cu));
/* 6f32ce: mov dword ptr [esi + 0x9c], edx */
  W32((uint32_t)(esi + 0x9cu), edx);
/* 6f32d4: mov eax, dword ptr [edi + 0xa0] */
  eax = R32((uint32_t)(edi + 0xa0u));
/* 6f32da: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* 6f32e0: mov ecx, dword ptr [edi + 0xa4] */
  ecx = R32((uint32_t)(edi + 0xa4u));
/* 6f32e6: mov dword ptr [esi + 0xa4], ecx */
  W32((uint32_t)(esi + 0xa4u), ecx);
/* 6f32ec: mov edx, dword ptr [edi + 0xa8] */
  edx = R32((uint32_t)(edi + 0xa8u));
/* 6f32f2: mov dword ptr [esi + 0xa8], edx */
  W32((uint32_t)(esi + 0xa8u), edx);
/* 6f32f8: mov eax, dword ptr [edi + 0xac] */
  eax = R32((uint32_t)(edi + 0xacu));
/* 6f32fe: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 6f3304: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 6f330a: mov dword ptr [esi + 0xb0], ecx */
  W32((uint32_t)(esi + 0xb0u), ecx);
/* 6f3310: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 6f3316: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 6f331c: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 6f3322: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 6f3328: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 6f332e: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 6f3334: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 6f333a: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 6f3340: mov eax, dword ptr [edi + 0xc4] */
  eax = R32((uint32_t)(edi + 0xc4u));
/* 6f3346: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 6f334c: mov ecx, dword ptr [edi + 0xc8] */
  ecx = R32((uint32_t)(edi + 0xc8u));
/* 6f3352: mov dword ptr [esi + 0xc8], ecx */
  W32((uint32_t)(esi + 0xc8u), ecx);
/* 6f3358: mov edx, dword ptr [edi + 0xcc] */
  edx = R32((uint32_t)(edi + 0xccu));
/* 6f335e: mov dword ptr [esi + 0xcc], edx */
  W32((uint32_t)(esi + 0xccu), edx);
/* 6f3364: mov eax, dword ptr [edi + 0xd0] */
  eax = R32((uint32_t)(edi + 0xd0u));
/* 6f336a: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 6f3370: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 6f3376: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 6f337c: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 6f3382: mov dword ptr [esi + 0xd8], edx */
  W32((uint32_t)(esi + 0xd8u), edx);
/* 6f3388: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 6f338e: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 6f3394: mov ecx, dword ptr [edi + 0xe0] */
  ecx = R32((uint32_t)(edi + 0xe0u));
/* 6f339a: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 6f33a0: mov edx, dword ptr [edi + 0xe4] */
  edx = R32((uint32_t)(edi + 0xe4u));
/* 6f33a6: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* 6f33ac: mov eax, dword ptr [edi + 0xe8] */
  eax = R32((uint32_t)(edi + 0xe8u));
/* 6f33b2: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 6f33b8: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 6f33be: mov dword ptr [esi + 0xec], ecx */
  W32((uint32_t)(esi + 0xecu), ecx);
/* 6f33c4: mov edx, dword ptr [edi + 0xf0] */
  edx = R32((uint32_t)(edi + 0xf0u));
/* 6f33ca: mov dword ptr [esi + 0xf0], edx */
  W32((uint32_t)(esi + 0xf0u), edx);
/* 6f33d0: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* 6f33d6: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 6f33dc: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 6f33e2: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* 6f33e8: mov edx, dword ptr [edi + 0xfc] */
  edx = R32((uint32_t)(edi + 0xfcu));
/* 6f33ee: mov dword ptr [esi + 0xfc], edx */
  W32((uint32_t)(esi + 0xfcu), edx);
/* 6f33f4: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* 6f33fa: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* 6f3400: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* 6f3406: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f3407: mov dword ptr [esi + 0x104], ecx */
  W32((uint32_t)(esi + 0x104u), ecx);
/* 6f340d: mov eax, esi */
  eax = esi;
/* 6f340f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3410: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f34c0(void) {
  LOAD_REGS();
L_6f34c0: /* 6f34c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f34c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f34c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f34c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f34c7: mov esi, ecx */
  esi = ecx;
/* 6f34c9: call dword ptr [0xcfa2ac] */
  esp -= 4; W32(esp, 0x6f34cfu); SPILL(); f_4e3409(); if (g_unwind) return; /* Core!??4USubsystem@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f34cf: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 6f34d2: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f34d5: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6f34d8: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6f34db: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 6f34de: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 6f34e1: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6f34e4: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6f34e7: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6f34ea: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6f34ed: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6f34f0: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6f34f3: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6f34f6: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6f34f9: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6f34fc: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6f34ff: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6f3502: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6f3505: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6f3508: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6f350b: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6f350e: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6f3511: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6f3514: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6f3517: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6f351a: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6f351d: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 6f3520: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 6f3523: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 6f3526: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 6f3529: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 6f352c: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 6f352f: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 6f3532: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 6f3535: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 6f3538: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 6f353b: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 6f353e: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 6f3541: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 6f3544: xor ecx, dword ptr [edi + 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f3547: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 6f354a: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f354d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f354f: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 6f3552: mov eax, edx */
  eax = edx;
/* 6f3554: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* 6f3557: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3559: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f355c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f355e: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 6f3561: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 6f3564: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 6f3567: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* 6f356d: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* 6f3573: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 6f3579: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 6f357f: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 6f3585: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 6f358b: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 6f3591: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 6f3597: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 6f359d: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 6f35a3: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 6f35a9: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 6f35af: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 6f35b5: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 6f35bb: mov edx, dword ptr [edi + 0x9c] */
  edx = R32((uint32_t)(edi + 0x9cu));
/* 6f35c1: mov dword ptr [esi + 0x9c], edx */
  W32((uint32_t)(esi + 0x9cu), edx);
/* 6f35c7: mov eax, dword ptr [edi + 0xa0] */
  eax = R32((uint32_t)(edi + 0xa0u));
/* 6f35cd: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* 6f35d3: mov ecx, dword ptr [edi + 0xa4] */
  ecx = R32((uint32_t)(edi + 0xa4u));
/* 6f35d9: mov dword ptr [esi + 0xa4], ecx */
  W32((uint32_t)(esi + 0xa4u), ecx);
/* 6f35df: mov edx, dword ptr [edi + 0xa8] */
  edx = R32((uint32_t)(edi + 0xa8u));
/* 6f35e5: mov dword ptr [esi + 0xa8], edx */
  W32((uint32_t)(esi + 0xa8u), edx);
/* 6f35eb: mov eax, dword ptr [edi + 0xac] */
  eax = R32((uint32_t)(edi + 0xacu));
/* 6f35f1: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 6f35f7: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 6f35fd: mov dword ptr [esi + 0xb0], ecx */
  W32((uint32_t)(esi + 0xb0u), ecx);
/* 6f3603: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 6f3609: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 6f360f: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 6f3615: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 6f361b: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 6f3621: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 6f3627: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 6f362d: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 6f3633: mov eax, dword ptr [edi + 0xc4] */
  eax = R32((uint32_t)(edi + 0xc4u));
/* 6f3639: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 6f363f: mov ecx, dword ptr [edi + 0xc8] */
  ecx = R32((uint32_t)(edi + 0xc8u));
/* 6f3645: mov dword ptr [esi + 0xc8], ecx */
  W32((uint32_t)(esi + 0xc8u), ecx);
/* 6f364b: mov edx, dword ptr [edi + 0xcc] */
  edx = R32((uint32_t)(edi + 0xccu));
/* 6f3651: mov dword ptr [esi + 0xcc], edx */
  W32((uint32_t)(esi + 0xccu), edx);
/* 6f3657: mov eax, dword ptr [edi + 0xd0] */
  eax = R32((uint32_t)(edi + 0xd0u));
/* 6f365d: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 6f3663: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 6f3669: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 6f366f: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 6f3675: mov dword ptr [esi + 0xd8], edx */
  W32((uint32_t)(esi + 0xd8u), edx);
/* 6f367b: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 6f3681: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 6f3687: mov ecx, dword ptr [edi + 0xe0] */
  ecx = R32((uint32_t)(edi + 0xe0u));
/* 6f368d: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 6f3693: mov edx, dword ptr [edi + 0xe4] */
  edx = R32((uint32_t)(edi + 0xe4u));
/* 6f3699: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* 6f369f: mov eax, dword ptr [edi + 0xe8] */
  eax = R32((uint32_t)(edi + 0xe8u));
/* 6f36a5: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 6f36ab: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 6f36b1: mov dword ptr [esi + 0xec], ecx */
  W32((uint32_t)(esi + 0xecu), ecx);
/* 6f36b7: mov edx, dword ptr [edi + 0xf0] */
  edx = R32((uint32_t)(edi + 0xf0u));
/* 6f36bd: mov dword ptr [esi + 0xf0], edx */
  W32((uint32_t)(esi + 0xf0u), edx);
/* 6f36c3: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* 6f36c9: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 6f36cf: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 6f36d5: mov dword ptr [esi + 0xf8], ecx */
  W32((uint32_t)(esi + 0xf8u), ecx);
/* 6f36db: mov edx, dword ptr [edi + 0xfc] */
  edx = R32((uint32_t)(edi + 0xfcu));
/* 6f36e1: mov dword ptr [esi + 0xfc], edx */
  W32((uint32_t)(esi + 0xfcu), edx);
/* 6f36e7: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* 6f36ed: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* 6f36f3: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* 6f36f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f36fa: mov dword ptr [esi + 0x104], ecx */
  W32((uint32_t)(esi + 0x104u), ecx);
/* 6f3700: mov eax, esi */
  eax = esi;
/* 6f3702: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3703: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f37b0(void) {
  LOAD_REGS();
L_6f37b0: /* 6f37b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f37b1: mov esi, ecx */
  esi = ecx;
/* 6f37b3: call 0x6c1d25 */
  esp -= 4; W32(esp, 0x6f37b8u); SPILL(); f_6c1d25(); if (g_unwind) return; RELOAD();
/* 6f37b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f37bd: je 0x6f37ce */
  if (zf) goto L_6f37ce;
L_6f37bf: /* 6f37bf: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* 6f37c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f37c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f37cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f37cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f37ce: /* 6f37ce: mov eax, esi */
  eax = esi;
/* 6f37d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f37d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f37f0(void) {
  LOAD_REGS();
L_6f37f0: /* 6f37f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f37f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f37f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f37f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f37f9: mov esi, ecx */
  esi = ecx;
/* 6f37fb: je 0x6f3830 */
  if (zf) goto L_6f3830;
L_6f37fd: /* 6f37fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f3800: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3801: push 0x6c1d25 */
  { uint32_t v = 0x6c1d25u; esp -= 4; W32(esp, v); }
/* 6f3806: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f3809: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f380a: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* 6f380f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3810: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f3815u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f3815: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f3818: je 0x6f3828 */
  if (zf) goto L_6f3828;
L_6f381a: /* 6f381a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f3820: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f3822: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f3824: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3825: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f3828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f3828: /* 6f3828: mov eax, edi */
  eax = edi;
/* 6f382a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f382b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f382c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f382d: ret 4 */
  esp += 8; SPILL(); return;
L_6f3830: /* 6f3830: mov ecx, esi */
  ecx = esi;
/* 6f3832: call 0x6c1d25 */
  esp -= 4; W32(esp, 0x6f3837u); SPILL(); f_6c1d25(); if (g_unwind) return; RELOAD();
/* 6f3837: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f383a: je 0x6f384b */
  if (zf) goto L_6f384b;
L_6f383c: /* 6f383c: push 0x108 */
  { uint32_t v = 0x108u; esp -= 4; W32(esp, v); }
/* 6f3841: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3842: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f3848u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f3848: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f384b: /* 6f384b: mov eax, esi */
  eax = esi;
/* 6f384d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f384e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f384f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3880(void) {
  LOAD_REGS();
L_6f3880: /* 6f3880: mov eax, 0xb81b88 */
  eax = 0xb81b88u;
/* 6f3885: ret  */
  esp += 4; SPILL(); return;
}

void f_6f38a0(void) {
  LOAD_REGS();
L_6f38a0: /* 6f38a0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f38a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f38a7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f38ab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f38af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f38b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f38b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f38b4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f38b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f38ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f38bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f38bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f38bd: push 0xb81b88 */
  { uint32_t v = 0xb81b88u; esp -= 4; W32(esp, v); }
/* 6f38c2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f38c8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f38c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f38cb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f38e0(void) {
  LOAD_REGS();
L_6f38e0: /* 6f38e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f38e4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3900(void) {
  LOAD_REGS();
L_6f3900: /* 6f3900: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f3904: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f3906: je 0x6f390d */
  if (zf) goto L_6f390d;
L_6f3908: /* 6f3908: jmp 0x6c9cdc */
  SPILL(); f_6c9cdc(); return;
L_6f390d: /* 6f390d: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3920(void) {
  LOAD_REGS();
L_6f3920: /* 6f3920: mov eax, 0xb7bee0 */
  eax = 0xb7bee0u;
/* 6f3925: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3940(void) {
  LOAD_REGS();
L_6f3940: /* 6f3940: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f3945: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f3947: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f394b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f394f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3951: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3953: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3954: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f3958: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f395a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f395b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f395c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f395d: push 0xb7bee0 */
  { uint32_t v = 0xb7bee0u; esp -= 4; W32(esp, v); }
/* 6f3962: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f3968u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f3968: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f396b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3980(void) {
  LOAD_REGS();
L_6f3980: /* 6f3980: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f3984: ret  */
  esp += 4; SPILL(); return;
}

void f_6f39a0(void) {
  LOAD_REGS();
L_6f39a0: /* 6f39a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f39a2: push 0x9c10e3 */
  { uint32_t v = 0x9c10e3u; esp -= 4; W32(esp, v); }
/* 6f39a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f39ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f39ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f39b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f39b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f39b7: mov esi, ecx */
  esi = ecx;
/* 6f39b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f39bd: mov dword ptr [esi], 0x9f6c18 */
  W32((uint32_t)(esi), 0x9f6c18u);
/* 6f39c3: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 6f39cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f39d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f39d1: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 6f39d7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 6f39dc: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6f39e2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f39e2: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 6f39e8: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6f39ed: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6f39f3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f39f3: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 6f39f6: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6f39fb: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x6f3a01u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f3a01: mov ecx, esi */
  ecx = esi;
/* 6f3a03: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f3a0b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f3a11u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f3a11: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f3a15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3a16: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f3a1d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f3a20: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3a60(void) {
  LOAD_REGS();
L_6f3a60: /* 6f3a60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f3a62: push 0x9c1124 */
  { uint32_t v = 0x9c1124u; esp -= 4; W32(esp, v); }
/* 6f3a67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f3a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f3a6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f3a75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3a76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3a77: mov esi, ecx */
  esi = ecx;
/* 6f3a79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f3a7d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f3a83u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f3a83: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 6f3a86: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f3a8e: mov dword ptr [esi], 0x9f6c18 */
  W32((uint32_t)(esi), 0x9f6c18u);
/* 6f3a94: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f3a9au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f3a9a: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 6f3aa0: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6f3aa5: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f3aabu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f3aab: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 6f3ab1: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 6f3ab6: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f3abcu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f3abc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f3ac0: mov eax, esi */
  eax = esi;
/* 6f3ac2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3ac3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f3aca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f3acd: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3af0(void) {
  LOAD_REGS();
L_6f3af0: /* 6f3af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3af1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3af2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3af4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3af6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3af8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3af9: mov esi, ecx */
  esi = ecx;
/* 6f3afb: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6f3afd: mov ecx, esp */
  ecx = esp;
/* 6f3aff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6f3b01: push 0xac3a38 */
  { uint32_t v = 0xac3a38u; esp -= 4; W32(esp, v); }
/* 6f3b06: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x6f3b0cu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 6f3b0c: mov ecx, esi */
  ecx = esi;
/* 6f3b0e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6f3b14u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6f3b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f3b15: mov ecx, esi */
  ecx = esi;
/* 6f3b17: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6f3b1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f3b1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f3b1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3b1c: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3b30(void) {
  LOAD_REGS();
L_6f3b30: /* 6f3b30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f3b32: push 0x9c1164 */
  { uint32_t v = 0x9c1164u; esp -= 4; W32(esp, v); }
/* 6f3b37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f3b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f3b3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f3b45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3b46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3b47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3b48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6f3b4c: mov esi, ecx */
  esi = ecx;
/* 6f3b4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3b4f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6f3b53: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f3b59u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f3b59: mov dword ptr [esi], 0x9f6c18 */
  W32((uint32_t)(esi), 0x9f6c18u);
/* 6f3b5f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f3b62: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f3b65: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f3b68: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f3b6b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f3b6e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f3b71: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f3b74: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f3b77: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f3b7a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f3b7d: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f3b80: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f3b83: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f3b86: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f3b89: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6f3b8c: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6f3b8f: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 6f3b92: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 6f3b95: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 6f3b98: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 6f3b9b: mov cl, byte ptr [edi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 6f3b9e: mov byte ptr [esi + 0x50], cl */
  W8((uint32_t)(esi + 0x50u), (ecx & 0xffu));
/* 6f3ba1: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 6f3ba4: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 6f3ba7: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 6f3baa: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 6f3bad: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 6f3bb0: xor ecx, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f3bb3: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 6f3bb6: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f3bb9: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3bbb: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6f3bbe: mov eax, edx */
  eax = edx;
/* 6f3bc0: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6f3bc3: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3bc5: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f3bc8: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3bca: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6f3bcd: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 6f3bd0: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 6f3bd3: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 6f3bd6: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 6f3bd9: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 6f3bdc: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 6f3bdf: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 6f3be2: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 6f3be5: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 6f3be8: lea edx, [edi + 0x74] */
  edx = (uint32_t)(edi + 0x74u);
/* 6f3beb: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 6f3bee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f3bef: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 6f3bf2: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6f3bfa: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6f3c00u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6f3c00: lea eax, [edi + 0x80] */
  eax = (uint32_t)(edi + 0x80u);
/* 6f3c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f3c07: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 6f3c0d: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 6f3c12: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6f3c18u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6f3c18: lea ecx, [edi + 0x8c] */
  ecx = (uint32_t)(edi + 0x8cu);
/* 6f3c1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3c1f: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 6f3c25: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 6f3c2a: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6f3c30u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6f3c30: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 6f3c36: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 6f3c3c: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* 6f3c42: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 6f3c48: mov eax, esi */
  eax = esi;
/* 6f3c4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f3c4b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f3c4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3c50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f3c57: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f3c5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3cb0(void) {
  LOAD_REGS();
L_6f3cb0: /* 6f3cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3cb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3cb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f3cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3cb7: mov esi, ecx */
  esi = ecx;
/* 6f3cb9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f3cbfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f3cbf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f3cc2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f3cc5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f3cc8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f3ccb: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f3cce: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f3cd1: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f3cd4: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f3cd7: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f3cda: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f3cdd: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f3ce0: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f3ce3: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6f3ce6: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6f3ce9: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 6f3cec: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 6f3cef: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 6f3cf2: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 6f3cf5: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 6f3cf8: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 6f3cfb: mov cl, byte ptr [edi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 6f3cfe: mov byte ptr [esi + 0x50], cl */
  W8((uint32_t)(esi + 0x50u), (ecx & 0xffu));
/* 6f3d01: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 6f3d04: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 6f3d07: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 6f3d0a: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 6f3d0d: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 6f3d10: xor ecx, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f3d13: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 6f3d16: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f3d19: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3d1b: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6f3d1e: mov eax, edx */
  eax = edx;
/* 6f3d20: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6f3d23: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3d25: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f3d28: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f3d2a: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6f3d2d: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 6f3d30: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 6f3d33: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 6f3d36: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 6f3d39: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 6f3d3c: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 6f3d3f: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 6f3d42: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 6f3d45: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 6f3d48: lea edx, [edi + 0x74] */
  edx = (uint32_t)(edi + 0x74u);
/* 6f3d4b: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 6f3d4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f3d4f: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 6f3d52: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f3d58u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f3d58: lea eax, [edi + 0x80] */
  eax = (uint32_t)(edi + 0x80u);
/* 6f3d5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f3d5f: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 6f3d65: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f3d6bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f3d6b: lea ecx, [edi + 0x8c] */
  ecx = (uint32_t)(edi + 0x8cu);
/* 6f3d71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3d72: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 6f3d78: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f3d7eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f3d7e: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 6f3d84: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 6f3d8a: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* 6f3d90: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 6f3d96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f3d97: mov eax, esi */
  eax = esi;
/* 6f3d99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3d9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3de0(void) {
  LOAD_REGS();
L_6f3de0: /* 6f3de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3de1: mov esi, ecx */
  esi = ecx;
/* 6f3de3: call 0x6c8cb5 */
  esp -= 4; W32(esp, 0x6f3de8u); SPILL(); f_6c8cb5(); if (g_unwind) return; RELOAD();
/* 6f3de8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f3ded: je 0x6f3dfe */
  if (zf) goto L_6f3dfe;
L_6f3def: /* 6f3def: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 6f3df4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3df5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f3dfbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f3dfb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f3dfe: /* 6f3dfe: mov eax, esi */
  eax = esi;
/* 6f3e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3e01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3e20(void) {
  LOAD_REGS();
L_6f3e20: /* 6f3e20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f3e21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f3e25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f3e28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3e29: mov esi, ecx */
  esi = ecx;
/* 6f3e2b: je 0x6f3e60 */
  if (zf) goto L_6f3e60;
L_6f3e2d: /* 6f3e2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f3e30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3e31: push 0x6c8cb5 */
  { uint32_t v = 0x6c8cb5u; esp -= 4; W32(esp, v); }
/* 6f3e36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f3e39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f3e3a: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 6f3e3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3e40: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f3e45u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f3e45: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f3e48: je 0x6f3e58 */
  if (zf) goto L_6f3e58;
L_6f3e4a: /* 6f3e4a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f3e50: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f3e52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f3e54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3e55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f3e58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f3e58: /* 6f3e58: mov eax, edi */
  eax = edi;
/* 6f3e5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f3e5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3e5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f3e5d: ret 4 */
  esp += 8; SPILL(); return;
L_6f3e60: /* 6f3e60: mov ecx, esi */
  ecx = esi;
/* 6f3e62: call 0x6c8cb5 */
  esp -= 4; W32(esp, 0x6f3e67u); SPILL(); f_6c8cb5(); if (g_unwind) return; RELOAD();
/* 6f3e67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f3e6a: je 0x6f3e7b */
  if (zf) goto L_6f3e7b;
L_6f3e6c: /* 6f3e6c: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 6f3e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3e72: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f3e78u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f3e78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f3e7b: /* 6f3e7b: mov eax, esi */
  eax = esi;
/* 6f3e7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3e7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f3e7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3eb0(void) {
  LOAD_REGS();
L_6f3eb0: /* 6f3eb0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f3eb4: mov eax, ecx */
  eax = ecx;
/* 6f3eb6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f3eba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f3ebc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f3ec0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f3ec3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f3ec7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f3eca: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f3ece: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f3ed1: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f3ed4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_6f3ef0(void) {
  LOAD_REGS();
L_6f3ef0: /* 6f3ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f3ef1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f3ef5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f3ef6: mov eax, ecx */
  eax = ecx;
/* 6f3ef8: mov ecx, 5 */
  ecx = 0x5u;
/* 6f3efd: mov edi, eax */
  edi = eax;
/* 6f3eff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f3f01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f3f02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f3f03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3f20(void) {
  LOAD_REGS();
L_6f3f20: /* 6f3f20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f3f40(void) {
  LOAD_REGS();
L_6f3f40: /* 6f3f40: mov eax, ecx */
  eax = ecx;
/* 6f3f42: mov dword ptr [eax], 0x9f6cf0 */
  W32((uint32_t)(eax), 0x9f6cf0u);
/* 6f3f48: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3f60(void) {
  LOAD_REGS();
L_6f3f60: /* 6f3f60: mov eax, ecx */
  eax = ecx;
/* 6f3f62: mov dword ptr [eax], 0x9f6cf0 */
  W32((uint32_t)(eax), 0x9f6cf0u);
/* 6f3f68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3f80(void) {
  LOAD_REGS();
L_6f3f80: /* 6f3f80: mov eax, ecx */
  eax = ecx;
/* 6f3f82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f3fa0(void) {
  LOAD_REGS();
L_6f3fa0: /* 6f3fa0: mov eax, 0xb79f88 */
  eax = 0xb79f88u;
/* 6f3fa5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f3fc0(void) {
  LOAD_REGS();
L_6f3fc0: /* 6f3fc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f3fc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f3fc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f3fcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f3fcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3fd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3fd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3fd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f3fd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f3fda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f3fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f3fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f3fdd: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 6f3fe2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f3fe8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f3fe8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f3feb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4000(void) {
  LOAD_REGS();
L_6f4000: /* 6f4000: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f4004: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4020(void) {
  LOAD_REGS();
L_6f4020: /* 6f4020: jmp dword ptr [0xcfa338] */
  SPILL(); f_4e144c(); return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */
}

void f_6f4040(void) {
  LOAD_REGS();
L_6f4040: /* 6f4040: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 6f4046: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4048: je 0x6f4099 */
  if (zf) goto L_6f4099;
L_6f404a: /* 6f404a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f404e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4050: mov dword ptr [ecx + 0xfc], eax */
  W32((uint32_t)(ecx + 0xfcu), eax);
/* 6f4056: je 0x6f4099 */
  if (zf) goto L_6f4099;
L_6f4058: /* 6f4058: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4059: mov esi, dword ptr [ecx + 0x30] */
  esi = R32((uint32_t)(ecx + 0x30u));
/* 6f405c: lea edx, [eax + 0x170] */
  edx = (uint32_t)(eax + 0x170u);
/* 6f4062: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4063: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f4065: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6f406b: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f406d: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f4070: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f4073: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f4076: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f4079: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 6f407c: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f4081: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f4083: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6f4089: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f408b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f408e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f4091: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f4094: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4095: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f4098: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_6f4099: /* 6f4099: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f40c0(void) {
  LOAD_REGS();
L_6f40c0: /* 6f40c0: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6f40e0(void) {
  LOAD_REGS();
L_6f40e0: /* 6f40e0: mov eax, dword ptr [ecx + 0x144] */
  eax = R32((uint32_t)(ecx + 0x144u));
/* 6f40e6: imul eax, dword ptr [esp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 6f40eb: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f40ef: imul eax, dword ptr [ecx + 0x98] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x98u)));
  eax = (uint32_t)r;
  }
/* 6f40f6: add eax, dword ptr [ecx + 0x140] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x140u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f40fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f4110(void) {
  LOAD_REGS();
L_6f4110: /* 6f4110: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 6f4113: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4115: je 0x6f4132 */
  if (zf) goto L_6f4132;
L_6f4117: /* 6f4117: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 6f411d: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4120: je 0x6f412c */
  if (zf) goto L_6f412c;
L_6f4122: /* 6f4122: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4125: je 0x6f412c */
  if (zf) goto L_6f412c;
L_6f4127: /* 6f4127: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f412a: jne 0x6f4132 */
  if (!zf) goto L_6f4132;
L_6f412c: /* 6f412c: mov eax, 1 */
  eax = 0x1u;
/* 6f4131: ret  */
  esp += 4; SPILL(); return;
L_6f4132: /* 6f4132: xor eax, eax */
  eax = 0;
/* 6f4134: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4150(void) {
  LOAD_REGS();
L_6f4150: /* 6f4150: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 6f4153: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4155: je 0x6f419a */
  if (zf) goto L_6f419a;
L_6f4157: /* 6f4157: mov eax, dword ptr [ecx + 0x540] */
  eax = R32((uint32_t)(ecx + 0x540u));
/* 6f415d: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4160: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f4162: /* 6f4162: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4165: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f4167: /* 6f4167: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f416a: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f416c: /* 6f416c: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f416f: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f4171: /* 6f4171: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4174: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f4176: /* 6f4176: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4179: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f417b: /* 6f417b: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f417e: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f4180: /* 6f4180: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4183: je 0x6f4194 */
  if (zf) goto L_6f4194;
L_6f4185: /* 6f4185: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4188: jne 0x6f419a */
  if (!zf) goto L_6f419a;
L_6f418a: /* 6f418a: mov eax, dword ptr [ecx + 0x538] */
  eax = R32((uint32_t)(ecx + 0x538u));
/* 6f4190: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4192: je 0x6f419a */
  if (zf) goto L_6f419a;
L_6f4194: /* 6f4194: mov eax, 1 */
  eax = 0x1u;
/* 6f4199: ret  */
  esp += 4; SPILL(); return;
L_6f419a: /* 6f419a: xor eax, eax */
  eax = 0;
/* 6f419c: ret  */
  esp += 4; SPILL(); return;
}

void f_6f41c0(void) {
  LOAD_REGS();
L_6f41c0: /* 6f41c0: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 6f41c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f41c5: je 0x6f41d6 */
  if (zf) goto L_6f41d6;
L_6f41c7: /* 6f41c7: cmp dword ptr [eax + 0x540], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f41ce: jne 0x6f41d6 */
  if (!zf) goto L_6f41d6;
L_6f41d0: /* 6f41d0: mov eax, 1 */
  eax = 0x1u;
/* 6f41d5: ret  */
  esp += 4; SPILL(); return;
L_6f41d6: /* 6f41d6: xor eax, eax */
  eax = 0;
/* 6f41d8: ret  */
  esp += 4; SPILL(); return;
}

void f_6f41f0(void) {
  LOAD_REGS();
L_6f41f0: /* 6f41f0: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 6f41f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f41f5: je 0x6f4208 */
  if (zf) goto L_6f4208;
L_6f41f7: /* 6f41f7: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 6f41fd: test ch, 0x48 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4200: je 0x6f4208 */
  if (zf) goto L_6f4208;
L_6f4202: /* 6f4202: mov eax, 1 */
  eax = 0x1u;
/* 6f4207: ret  */
  esp += 4; SPILL(); return;
L_6f4208: /* 6f4208: xor eax, eax */
  eax = 0;
/* 6f420a: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4220(void) {
  LOAD_REGS();
L_6f4220: /* 6f4220: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 6f4223: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4225: je 0x6f4256 */
  if (zf) goto L_6f4256;
L_6f4227: /* 6f4227: mov eax, dword ptr [ecx + 0x540] */
  eax = R32((uint32_t)(ecx + 0x540u));
/* 6f422d: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4230: je 0x6f4250 */
  if (zf) goto L_6f4250;
L_6f4232: /* 6f4232: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4235: je 0x6f4250 */
  if (zf) goto L_6f4250;
L_6f4237: /* 6f4237: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f423a: je 0x6f4250 */
  if (zf) goto L_6f4250;
L_6f423c: /* 6f423c: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f423f: je 0x6f4250 */
  if (zf) goto L_6f4250;
L_6f4241: /* 6f4241: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f4244: jne 0x6f4256 */
  if (!zf) goto L_6f4256;
L_6f4246: /* 6f4246: mov eax, dword ptr [ecx + 0x538] */
  eax = R32((uint32_t)(ecx + 0x538u));
/* 6f424c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f424e: je 0x6f4256 */
  if (zf) goto L_6f4256;
L_6f4250: /* 6f4250: mov eax, 1 */
  eax = 0x1u;
/* 6f4255: ret  */
  esp += 4; SPILL(); return;
L_6f4256: /* 6f4256: xor eax, eax */
  eax = 0;
/* 6f4258: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4270(void) {
  LOAD_REGS();
L_6f4270: /* 6f4270: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 6f4273: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4275: je 0x6f4286 */
  if (zf) goto L_6f4286;
L_6f4277: /* 6f4277: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f427e: jne 0x6f4286 */
  if (!zf) goto L_6f4286;
L_6f4280: /* 6f4280: mov eax, 1 */
  eax = 0x1u;
/* 6f4285: ret  */
  esp += 4; SPILL(); return;
L_6f4286: /* 6f4286: xor eax, eax */
  eax = 0;
/* 6f4288: ret  */
  esp += 4; SPILL(); return;
}

void f_6f42a0(void) {
  LOAD_REGS();
L_6f42a0: /* 6f42a0: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 6f42a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f42a5: je 0x6f42ea */
  if (zf) goto L_6f42ea;
L_6f42a7: /* 6f42a7: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 6f42ad: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42b0: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42b2: /* 6f42b2: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42b5: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42b7: /* 6f42b7: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42ba: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42bc: /* 6f42bc: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42bf: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42c1: /* 6f42c1: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42c4: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42c6: /* 6f42c6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42c9: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42cb: /* 6f42cb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42ce: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42d0: /* 6f42d0: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42d3: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42d5: /* 6f42d5: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42d8: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42da: /* 6f42da: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42dd: je 0x6f42e4 */
  if (zf) goto L_6f42e4;
L_6f42df: /* 6f42df: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f42e2: jne 0x6f42ea */
  if (!zf) goto L_6f42ea;
L_6f42e4: /* 6f42e4: mov eax, 1 */
  eax = 0x1u;
/* 6f42e9: ret  */
  esp += 4; SPILL(); return;
L_6f42ea: /* 6f42ea: xor eax, eax */
  eax = 0;
/* 6f42ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4310(void) {
  LOAD_REGS();
L_6f4310: /* 6f4310: mov eax, ecx */
  eax = ecx;
/* 6f4312: mov dword ptr [eax], 0x9f6cf4 */
  W32((uint32_t)(eax), 0x9f6cf4u);
/* 6f4318: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4330(void) {
  LOAD_REGS();
L_6f4330: /* 6f4330: mov eax, ecx */
  eax = ecx;
/* 6f4332: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4350(void) {
  LOAD_REGS();
L_6f4350: /* 6f4350: mov eax, ecx */
  eax = ecx;
/* 6f4352: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4370(void) {
  LOAD_REGS();
L_6f4370: /* 6f4370: mov eax, 0xac3a48 */
  eax = 0xac3a48u;
/* 6f4375: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4390(void) {
  LOAD_REGS();
L_6f4390: /* 6f4390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f4394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4395: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f439a: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x6f43a0u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 6f43a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f43a3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 6f43a5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 6f43a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 6f43a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f43c0(void) {
  LOAD_REGS();
L_6f43c0: /* 6f43c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6f43c4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 6f43c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f43c7: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 6f43c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f43ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f43cb: mov ecx, eax */
  ecx = eax;
/* 6f43cd: call dword ptr [esi] */
  { uint32_t t = R32((uint32_t)(esi)); esp -= 4; W32(esp, 0x6f43cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f43cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f43d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f43f0(void) {
  LOAD_REGS();
L_6f43f0: /* 6f43f0: xor eax, eax */
  eax = 0;
/* 6f43f2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4410(void) {
  LOAD_REGS();
L_6f4410: /* 6f4410: mov eax, ecx */
  eax = ecx;
/* 6f4412: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f4418: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4430(void) {
  LOAD_REGS();
L_6f4430: /* 6f4430: mov eax, ecx */
  eax = ecx;
/* 6f4432: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f4436: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f443c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f443f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f4442: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f4445: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f4448: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f444b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f444e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4470(void) {
  LOAD_REGS();
L_6f4470: /* 6f4470: mov eax, ecx */
  eax = ecx;
/* 6f4472: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f4476: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f4479: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f447c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f447f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f4482: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f4485: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f4488: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f44a0(void) {
  LOAD_REGS();
L_6f44a0: /* 6f44a0: mov eax, 0xb79940 */
  eax = 0xb79940u;
/* 6f44a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f44c0(void) {
  LOAD_REGS();
L_6f44c0: /* 6f44c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f44c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f44c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f44cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f44cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f44d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f44d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f44d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f44d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f44da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f44db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f44dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f44dd: push 0xb79940 */
  { uint32_t v = 0xb79940u; esp -= 4; W32(esp, v); }
/* 6f44e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f44e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f44e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f44eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4500(void) {
  LOAD_REGS();
L_6f4500: /* 6f4500: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f4504: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4520(void) {
  LOAD_REGS();
L_6f4520: /* 6f4520: mov eax, dword ptr [ecx + 0xa4] */
  eax = R32((uint32_t)(ecx + 0xa4u));
/* 6f4526: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4540(void) {
  LOAD_REGS();
L_6f4540: /* 6f4540: mov eax, dword ptr [ecx + 0xa8] */
  eax = R32((uint32_t)(ecx + 0xa8u));
/* 6f4546: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4560(void) {
  LOAD_REGS();
L_6f4560: /* 6f4560: mov eax, 0xb7ab00 */
  eax = 0xb7ab00u;
/* 6f4565: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4580(void) {
  LOAD_REGS();
L_6f4580: /* 6f4580: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f4585: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f4587: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f458b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f458f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4591: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4593: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4594: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f4598: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f459a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f459b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f459c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f459d: push 0xb7ab00 */
  { uint32_t v = 0xb7ab00u; esp -= 4; W32(esp, v); }
/* 6f45a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f45a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f45a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f45ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6f45c0(void) {
  LOAD_REGS();
L_6f45c0: /* 6f45c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f45c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f45e0(void) {
  LOAD_REGS();
L_6f45e0: /* 6f45e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f45e2: push 0x9c1189 */
  { uint32_t v = 0x9c1189u; esp -= 4; W32(esp, v); }
/* 6f45e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f45ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f45ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f45f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f45f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f45f7: mov esi, ecx */
  esi = ecx;
/* 6f45f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f45fd: mov dword ptr [esi], 0x9f6d50 */
  W32((uint32_t)(esi), 0x9f6d50u);
/* 6f4603: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f460b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f4611u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f4611: mov ecx, esi */
  ecx = esi;
/* 6f4613: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f461b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f4621u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f4621: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f4625: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4626: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f462d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f4630: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4660(void) {
  LOAD_REGS();
L_6f4660: /* 6f4660: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f4680(void) {
  LOAD_REGS();
L_6f4680: /* 6f4680: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f46a0(void) {
  LOAD_REGS();
L_6f46a0: /* 6f46a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f46a1: mov esi, ecx */
  esi = ecx;
/* 6f46a3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f46a9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f46a9: mov dword ptr [esi], 0x9f6d50 */
  W32((uint32_t)(esi), 0x9f6d50u);
/* 6f46af: mov eax, esi */
  eax = esi;
/* 6f46b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f46b2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f46d0(void) {
  LOAD_REGS();
L_6f46d0: /* 6f46d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f46d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f46d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f46d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f46d7: mov esi, ecx */
  esi = ecx;
/* 6f46d9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f46dfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f46df: mov dword ptr [esi], 0x9f6d50 */
  W32((uint32_t)(esi), 0x9f6d50u);
/* 6f46e5: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f46e8: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f46eb: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f46ee: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 6f46f1: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f46f3: mov eax, edi */
  eax = edi;
/* 6f46f5: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f46f8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f46fa: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f46fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f46fe: mov eax, esi */
  eax = esi;
/* 6f4700: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4701: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4720(void) {
  LOAD_REGS();
L_6f4720: /* 6f4720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4721: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4722: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f4726: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4727: mov esi, ecx */
  esi = ecx;
/* 6f4729: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f472fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f472f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f4732: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f4735: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f4738: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 6f473b: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f473d: mov eax, edi */
  eax = edi;
/* 6f473f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f4742: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f4744: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f4747: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4748: mov eax, esi */
  eax = esi;
/* 6f474a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f474b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4760(void) {
  LOAD_REGS();
L_6f4760: /* 6f4760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4761: mov esi, ecx */
  esi = ecx;
/* 6f4763: call 0x6c1348 */
  esp -= 4; W32(esp, 0x6f4768u); SPILL(); f_6c1348(); if (g_unwind) return; RELOAD();
/* 6f4768: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f476d: je 0x6f477b */
  if (zf) goto L_6f477b;
L_6f476f: /* 6f476f: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6f4771: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4772: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f4778u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f4778: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f477b: /* 6f477b: mov eax, esi */
  eax = esi;
/* 6f477d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f477e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f47a0(void) {
  LOAD_REGS();
L_6f47a0: /* 6f47a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f47a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f47a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f47a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f47a9: mov esi, ecx */
  esi = ecx;
/* 6f47ab: je 0x6f47dd */
  if (zf) goto L_6f47dd;
L_6f47ad: /* 6f47ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f47b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f47b1: push 0x6c1348 */
  { uint32_t v = 0x6c1348u; esp -= 4; W32(esp, v); }
/* 6f47b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f47b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f47ba: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6f47bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f47bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f47c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f47c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f47c5: je 0x6f47d5 */
  if (zf) goto L_6f47d5;
L_6f47c7: /* 6f47c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f47cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f47cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f47d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f47d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f47d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f47d5: /* 6f47d5: mov eax, edi */
  eax = edi;
/* 6f47d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f47d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f47d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f47da: ret 4 */
  esp += 8; SPILL(); return;
L_6f47dd: /* 6f47dd: mov ecx, esi */
  ecx = esi;
/* 6f47df: call 0x6c1348 */
  esp -= 4; W32(esp, 0x6f47e4u); SPILL(); f_6c1348(); if (g_unwind) return; RELOAD();
/* 6f47e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f47e7: je 0x6f47f5 */
  if (zf) goto L_6f47f5;
L_6f47e9: /* 6f47e9: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 6f47eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f47ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f47f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f47f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f47f5: /* 6f47f5: mov eax, esi */
  eax = esi;
/* 6f47f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f47f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f47f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4820(void) {
  LOAD_REGS();
L_6f4820: /* 6f4820: mov eax, 0xb7b030 */
  eax = 0xb7b030u;
/* 6f4825: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4840(void) {
  LOAD_REGS();
L_6f4840: /* 6f4840: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f4845: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f4847: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f484b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f484f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4851: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4853: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4854: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f4858: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f485a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f485b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f485c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f485d: push 0xb7b030 */
  { uint32_t v = 0xb7b030u; esp -= 4; W32(esp, v); }
/* 6f4862: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f4868u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f4868: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f486b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4880(void) {
  LOAD_REGS();
L_6f4880: /* 6f4880: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f4884: ret  */
  esp += 4; SPILL(); return;
}

void f_6f48a0(void) {
  LOAD_REGS();
L_6f48a0: /* 6f48a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f48a2: push 0x9c11a8 */
  { uint32_t v = 0x9c11a8u; esp -= 4; W32(esp, v); }
/* 6f48a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f48ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f48ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f48b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f48b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f48b7: mov esi, ecx */
  esi = ecx;
/* 6f48b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f48bd: mov dword ptr [esi], 0x9f6dd8 */
  W32((uint32_t)(esi), 0x9f6dd8u);
/* 6f48c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f48cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f48d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f48d1: mov ecx, esi */
  ecx = esi;
/* 6f48d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f48db: call 0x6c1348 */
  esp -= 4; W32(esp, 0x6f48e0u); SPILL(); f_6c1348(); if (g_unwind) return; RELOAD();
/* 6f48e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f48e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f48e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f48ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f48ef: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4910(void) {
  LOAD_REGS();
L_6f4910: /* 6f4910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4911: mov esi, ecx */
  esi = ecx;
/* 6f4913: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f4919u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f4919: mov dword ptr [esi], 0x9f6dd8 */
  W32((uint32_t)(esi), 0x9f6dd8u);
/* 6f491f: mov eax, esi */
  eax = esi;
/* 6f4921: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4922: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4940(void) {
  LOAD_REGS();
L_6f4940: /* 6f4940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4942: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f4946: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4947: mov esi, ecx */
  esi = ecx;
/* 6f4949: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f494fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f494f: mov dword ptr [esi], 0x9f6d50 */
  W32((uint32_t)(esi), 0x9f6d50u);
/* 6f4955: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f4958: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f495b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f495e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 6f4961: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f4963: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f4966: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f4968: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f496b: mov dword ptr [esi], 0x9f6dd8 */
  W32((uint32_t)(esi), 0x9f6dd8u);
/* 6f4971: mov dl, byte ptr [edi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x30u))) & 0xffu);
/* 6f4974: mov byte ptr [esi + 0x30], dl */
  W8((uint32_t)(esi + 0x30u), (edx & 0xffu));
/* 6f4977: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f497a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f497d: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f4980: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f4983: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f4986: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4987: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f498a: mov eax, esi */
  eax = esi;
/* 6f498c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f498d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f49b0(void) {
  LOAD_REGS();
L_6f49b0: /* 6f49b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f49b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f49b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f49b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f49b7: mov esi, ecx */
  esi = ecx;
/* 6f49b9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f49bfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f49bf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f49c2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f49c5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f49c8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 6f49cb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f49cd: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f49d0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f49d2: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f49d5: mov dl, byte ptr [edi + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x30u))) & 0xffu);
/* 6f49d8: mov byte ptr [esi + 0x30], dl */
  W8((uint32_t)(esi + 0x30u), (edx & 0xffu));
/* 6f49db: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f49de: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f49e1: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 6f49e4: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 6f49e7: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 6f49ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f49eb: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 6f49ee: mov eax, esi */
  eax = esi;
/* 6f49f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f49f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4a20(void) {
  LOAD_REGS();
L_6f4a20: /* 6f4a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4a21: mov esi, ecx */
  esi = ecx;
/* 6f4a23: call 0x6c25b8 */
  esp -= 4; W32(esp, 0x6f4a28u); SPILL(); f_6c25b8(); if (g_unwind) return; RELOAD();
/* 6f4a28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4a2d: je 0x6f4a3b */
  if (zf) goto L_6f4a3b;
L_6f4a2f: /* 6f4a2f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 6f4a31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4a32: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f4a38u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f4a38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f4a3b: /* 6f4a3b: mov eax, esi */
  eax = esi;
/* 6f4a3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4a3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4a60(void) {
  LOAD_REGS();
L_6f4a60: /* 6f4a60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f4a61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f4a65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4a68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4a69: mov esi, ecx */
  esi = ecx;
/* 6f4a6b: je 0x6f4a9d */
  if (zf) goto L_6f4a9d;
L_6f4a6d: /* 6f4a6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f4a70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4a71: push 0x6c25b8 */
  { uint32_t v = 0x6c25b8u; esp -= 4; W32(esp, v); }
/* 6f4a76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f4a79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4a7a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 6f4a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4a7d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f4a82u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f4a82: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4a85: je 0x6f4a95 */
  if (zf) goto L_6f4a95;
L_6f4a87: /* 6f4a87: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f4a8d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f4a8f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f4a91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4a92: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f4a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f4a95: /* 6f4a95: mov eax, edi */
  eax = edi;
/* 6f4a97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4a98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4a99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f4a9a: ret 4 */
  esp += 8; SPILL(); return;
L_6f4a9d: /* 6f4a9d: mov ecx, esi */
  ecx = esi;
/* 6f4a9f: call 0x6c25b8 */
  esp -= 4; W32(esp, 0x6f4aa4u); SPILL(); f_6c25b8(); if (g_unwind) return; RELOAD();
/* 6f4aa4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4aa7: je 0x6f4ab5 */
  if (zf) goto L_6f4ab5;
L_6f4aa9: /* 6f4aa9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 6f4aab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4aac: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f4ab2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f4ab2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f4ab5: /* 6f4ab5: mov eax, esi */
  eax = esi;
/* 6f4ab7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4ab8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f4ab9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4ae0(void) {
  LOAD_REGS();
L_6f4ae0: /* 6f4ae0: mov eax, 0xb7b560 */
  eax = 0xb7b560u;
/* 6f4ae5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4b00(void) {
  LOAD_REGS();
L_6f4b00: /* 6f4b00: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f4b05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f4b07: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f4b0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f4b0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4b11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4b13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4b14: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f4b18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f4b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4b1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4b1d: push 0xb7b560 */
  { uint32_t v = 0xb7b560u; esp -= 4; W32(esp, v); }
/* 6f4b22: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f4b28u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f4b28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f4b2b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4b40(void) {
  LOAD_REGS();
L_6f4b40: /* 6f4b40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f4b44: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4b60(void) {
  LOAD_REGS();
L_6f4b60: /* 6f4b60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f4b62: push 0x9c11c8 */
  { uint32_t v = 0x9c11c8u; esp -= 4; W32(esp, v); }
/* 6f4b67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f4b6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4b6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f4b75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4b76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4b77: mov esi, ecx */
  esi = ecx;
/* 6f4b79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f4b7d: mov dword ptr [esi], 0x9f6e60 */
  W32((uint32_t)(esi), 0x9f6e60u);
/* 6f4b83: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f4b8b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f4b91u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f4b91: mov ecx, esi */
  ecx = esi;
/* 6f4b93: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f4b9b: call 0x6c1348 */
  esp -= 4; W32(esp, 0x6f4ba0u); SPILL(); f_6c1348(); if (g_unwind) return; RELOAD();
/* 6f4ba0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f4ba4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4ba5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f4bac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f4baf: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4bd0(void) {
  LOAD_REGS();
L_6f4bd0: /* 6f4bd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4bd1: mov esi, ecx */
  esi = ecx;
/* 6f4bd3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f4bd9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f4bd9: mov dword ptr [esi], 0x9f6e60 */
  W32((uint32_t)(esi), 0x9f6e60u);
/* 6f4bdf: mov eax, esi */
  eax = esi;
/* 6f4be1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4be2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4c00(void) {
  LOAD_REGS();
L_6f4c00: /* 6f4c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4c01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4c02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f4c06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4c07: mov esi, ecx */
  esi = ecx;
/* 6f4c09: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f4c0fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f4c0f: mov dword ptr [esi], 0x9f6d50 */
  W32((uint32_t)(esi), 0x9f6d50u);
/* 6f4c15: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f4c18: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f4c1b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f4c1e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 6f4c21: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f4c23: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f4c26: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f4c28: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f4c2b: mov dword ptr [esi], 0x9f6e60 */
  W32((uint32_t)(esi), 0x9f6e60u);
/* 6f4c31: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f4c34: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f4c37: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f4c3a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f4c3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4c3e: mov eax, esi */
  eax = esi;
/* 6f4c40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4c41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4c70(void) {
  LOAD_REGS();
L_6f4c70: /* 6f4c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4c71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4c72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f4c76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4c77: mov esi, ecx */
  esi = ecx;
/* 6f4c79: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f4c7fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f4c7f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f4c82: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f4c85: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f4c88: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 6f4c8b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f4c8d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6f4c90: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f4c92: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6f4c95: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f4c98: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f4c9b: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6f4c9e: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6f4ca1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4ca2: mov eax, esi */
  eax = esi;
/* 6f4ca4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4ca5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4cc0(void) {
  LOAD_REGS();
L_6f4cc0: /* 6f4cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4cc1: mov esi, ecx */
  esi = ecx;
/* 6f4cc3: call 0x6ccfb8 */
  esp -= 4; W32(esp, 0x6f4cc8u); SPILL(); f_6ccfb8(); if (g_unwind) return; RELOAD();
/* 6f4cc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4ccd: je 0x6f4cdb */
  if (zf) goto L_6f4cdb;
L_6f4ccf: /* 6f4ccf: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6f4cd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4cd2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f4cd8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f4cd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f4cdb: /* 6f4cdb: mov eax, esi */
  eax = esi;
/* 6f4cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4cde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4d00(void) {
  LOAD_REGS();
L_6f4d00: /* 6f4d00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f4d01: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f4d05: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4d08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4d09: mov esi, ecx */
  esi = ecx;
/* 6f4d0b: je 0x6f4d3d */
  if (zf) goto L_6f4d3d;
L_6f4d0d: /* 6f4d0d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f4d10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4d11: push 0x6ccfb8 */
  { uint32_t v = 0x6ccfb8u; esp -= 4; W32(esp, v); }
/* 6f4d16: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f4d19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4d1a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6f4d1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4d1d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f4d22u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f4d22: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4d25: je 0x6f4d35 */
  if (zf) goto L_6f4d35;
L_6f4d27: /* 6f4d27: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f4d2d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f4d2f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f4d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4d32: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f4d35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f4d35: /* 6f4d35: mov eax, edi */
  eax = edi;
/* 6f4d37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4d38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4d39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f4d3a: ret 4 */
  esp += 8; SPILL(); return;
L_6f4d3d: /* 6f4d3d: mov ecx, esi */
  ecx = esi;
/* 6f4d3f: call 0x6ccfb8 */
  esp -= 4; W32(esp, 0x6f4d44u); SPILL(); f_6ccfb8(); if (g_unwind) return; RELOAD();
/* 6f4d44: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4d47: je 0x6f4d55 */
  if (zf) goto L_6f4d55;
L_6f4d49: /* 6f4d49: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6f4d4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4d4c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f4d52u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f4d52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f4d55: /* 6f4d55: mov eax, esi */
  eax = esi;
/* 6f4d57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4d58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f4d59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4d80(void) {
  LOAD_REGS();
L_6f4d80: /* 6f4d80: mov eax, 0xb7a5d0 */
  eax = 0xb7a5d0u;
/* 6f4d85: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4da0(void) {
  LOAD_REGS();
L_6f4da0: /* 6f4da0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f4da5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f4da7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f4dab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f4daf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4db1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4db3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4db4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f4db8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f4dba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f4dbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4dbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4dbd: push 0xb7a5d0 */
  { uint32_t v = 0xb7a5d0u; esp -= 4; W32(esp, v); }
/* 6f4dc2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f4dc8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f4dc8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f4dcb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4de0(void) {
  LOAD_REGS();
L_6f4de0: /* 6f4de0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f4de4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4e00(void) {
  LOAD_REGS();
L_6f4e00: /* 6f4e00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f4e02: push 0x9c11e8 */
  { uint32_t v = 0x9c11e8u; esp -= 4; W32(esp, v); }
/* 6f4e07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f4e0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4e0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f4e15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4e16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4e17: mov esi, ecx */
  esi = ecx;
/* 6f4e19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f4e1d: mov dword ptr [esi], 0x9f6ee8 */
  W32((uint32_t)(esi), 0x9f6ee8u);
/* 6f4e23: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f4e2b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f4e31u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f4e31: mov ecx, esi */
  ecx = esi;
/* 6f4e33: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f4e3b: call 0x6c349f */
  esp -= 4; W32(esp, 0x6f4e40u); SPILL(); f_6c349f(); if (g_unwind) return; RELOAD();
/* 6f4e40: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f4e44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4e45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f4e4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f4e4f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4e70(void) {
  LOAD_REGS();
L_6f4e70: /* 6f4e70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f4e72: push 0x9c1208 */
  { uint32_t v = 0x9c1208u; esp -= 4; W32(esp, v); }
/* 6f4e77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f4e7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f4e7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f4e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4e86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4e87: mov esi, ecx */
  esi = ecx;
/* 6f4e89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f4e8d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f4e93u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f4e93: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6f4e96: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f4e9e: mov dword ptr [esi], 0x9f5f40 */
  W32((uint32_t)(esi), 0x9f5f40u);
/* 6f4ea4: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6f4eaau); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6f4eaa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f4eae: mov dword ptr [esi], 0x9f6ee8 */
  W32((uint32_t)(esi), 0x9f6ee8u);
/* 6f4eb4: mov eax, esi */
  eax = esi;
/* 6f4eb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4eb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f4ebe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f4ec1: ret  */
  esp += 4; SPILL(); return;
}

void f_6f4ef0(void) {
  LOAD_REGS();
L_6f4ef0: /* 6f4ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4ef1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4ef2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f4ef6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4ef7: mov esi, ecx */
  esi = ecx;
/* 6f4ef9: call 0x6c9f2a */
  esp -= 4; W32(esp, 0x6f4efeu); SPILL(); f_6c9f2a(); if (g_unwind) return; RELOAD();
/* 6f4efe: mov dword ptr [esi], 0x9f6ee8 */
  W32((uint32_t)(esi), 0x9f6ee8u);
/* 6f4f04: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6f4f07: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6f4f0a: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6f4f0d: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6f4f10: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6f4f13: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6f4f16: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6f4f19: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 6f4f1c: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f4f1e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f4f21: mov ecx, edi */
  ecx = edi;
/* 6f4f23: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6f4f25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4f26: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 6f4f29: mov eax, esi */
  eax = esi;
/* 6f4f2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4f2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4f40(void) {
  LOAD_REGS();
L_6f4f40: /* 6f4f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4f41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4f42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f4f46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f4f47: mov esi, ecx */
  esi = ecx;
/* 6f4f49: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f4f4fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f4f4f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6f4f52: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6f4f55: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6f4f58: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6f4f5b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6f4f5e: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 6f4f61: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6f4f64: mov al, byte ptr [edi + 0x34] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6f4f67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f4f68: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 6f4f6b: mov byte ptr [esi + 0x34], al */
  W8((uint32_t)(esi + 0x34u), (eax & 0xffu));
/* 6f4f6e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6f4f74u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6f4f74: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 6f4f77: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 6f4f7a: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 6f4f7d: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6f4f80: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 6f4f83: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 6f4f86: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 6f4f89: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 6f4f8c: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6f4f8f: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6f4f92: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 6f4f95: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 6f4f98: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6f4f9b: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 6f4f9e: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6f4fa0: mov eax, edi */
  eax = edi;
/* 6f4fa2: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6f4fa5: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6f4fa7: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6f4faa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f4fab: mov eax, esi */
  eax = esi;
/* 6f4fad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4fae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f4fe0(void) {
  LOAD_REGS();
L_6f4fe0: /* 6f4fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4fe1: mov esi, ecx */
  esi = ecx;
/* 6f4fe3: call 0x6c5a56 */
  esp -= 4; W32(esp, 0x6f4fe8u); SPILL(); f_6c5a56(); if (g_unwind) return; RELOAD();
/* 6f4fe8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f4fed: je 0x6f4ffb */
  if (zf) goto L_6f4ffb;
L_6f4fef: /* 6f4fef: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 6f4ff1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f4ff2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f4ff8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f4ff8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f4ffb: /* 6f4ffb: mov eax, esi */
  eax = esi;
/* 6f4ffd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f4ffe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5020(void) {
  LOAD_REGS();
L_6f5020: /* 6f5020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5021: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f5025: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5028: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5029: mov esi, ecx */
  esi = ecx;
/* 6f502b: je 0x6f505d */
  if (zf) goto L_6f505d;
L_6f502d: /* 6f502d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f5030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5031: push 0x6c5a56 */
  { uint32_t v = 0x6c5a56u; esp -= 4; W32(esp, v); }
/* 6f5036: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f5039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f503a: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 6f503c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f503d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f5042u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f5042: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5045: je 0x6f5055 */
  if (zf) goto L_6f5055;
L_6f5047: /* 6f5047: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f504d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f504f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5051: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5052: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5055u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5055: /* 6f5055: mov eax, edi */
  eax = edi;
/* 6f5057: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5058: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5059: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f505a: ret 4 */
  esp += 8; SPILL(); return;
L_6f505d: /* 6f505d: mov ecx, esi */
  ecx = esi;
/* 6f505f: call 0x6c5a56 */
  esp -= 4; W32(esp, 0x6f5064u); SPILL(); f_6c5a56(); if (g_unwind) return; RELOAD();
/* 6f5064: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5067: je 0x6f5075 */
  if (zf) goto L_6f5075;
L_6f5069: /* 6f5069: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 6f506b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f506c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f5072u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f5072: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f5075: /* 6f5075: mov eax, esi */
  eax = esi;
/* 6f5077: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5078: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5079: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f50a0(void) {
  LOAD_REGS();
L_6f50a0: /* 6f50a0: mov eax, ecx */
  eax = ecx;
/* 6f50a2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f50c0(void) {
  LOAD_REGS();
L_6f50c0: /* 6f50c0: xor eax, eax */
  eax = 0;
/* 6f50c2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f50e0(void) {
  LOAD_REGS();
L_6f50e0: /* 6f50e0: xor eax, eax */
  eax = 0;
/* 6f50e2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5100(void) {
  LOAD_REGS();
L_6f5100: /* 6f5100: xor eax, eax */
  eax = 0;
/* 6f5102: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5120(void) {
  LOAD_REGS();
L_6f5120: /* 6f5120: xor eax, eax */
  eax = 0;
/* 6f5122: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5140(void) {
  LOAD_REGS();
L_6f5140: /* 6f5140: xor eax, eax */
  eax = 0;
/* 6f5142: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5160(void) {
  LOAD_REGS();
L_6f5160: /* 6f5160: xor eax, eax */
  eax = 0;
/* 6f5162: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5180(void) {
  LOAD_REGS();
L_6f5180: /* 6f5180: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6f5184: mov eax, ecx */
  eax = ecx;
/* 6f5186: mov dword ptr [eax], 0x9f6f74 */
  W32((uint32_t)(eax), 0x9f6f74u);
/* 6f518c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6f518f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6f5192: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 6f5195: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f5198: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 6f519b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f519e: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 6f51a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f51a2: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f51a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f51a6: lea esi, [edx + 0x14] */
  esi = (uint32_t)(edx + 0x14u);
/* 6f51a9: lea edi, [eax + 0x14] */
  edi = (uint32_t)(eax + 0x14u);
/* 6f51ac: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f51b1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f51b3: lea esi, [edx + 0x54] */
  esi = (uint32_t)(edx + 0x54u);
/* 6f51b6: lea edi, [eax + 0x54] */
  edi = (uint32_t)(eax + 0x54u);
/* 6f51b9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f51be: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f51c0: lea esi, [edx + 0x94] */
  esi = (uint32_t)(edx + 0x94u);
/* 6f51c6: lea edi, [eax + 0x94] */
  edi = (uint32_t)(eax + 0x94u);
/* 6f51cc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f51d1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f51d3: lea esi, [edx + 0xd4] */
  esi = (uint32_t)(edx + 0xd4u);
/* 6f51d9: lea edi, [eax + 0xd4] */
  edi = (uint32_t)(eax + 0xd4u);
/* 6f51df: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f51e4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f51e6: lea esi, [edx + 0x114] */
  esi = (uint32_t)(edx + 0x114u);
/* 6f51ec: lea edi, [eax + 0x114] */
  edi = (uint32_t)(eax + 0x114u);
/* 6f51f2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f51f7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f51f9: lea esi, [edx + 0x154] */
  esi = (uint32_t)(edx + 0x154u);
/* 6f51ff: lea edi, [eax + 0x154] */
  edi = (uint32_t)(eax + 0x154u);
/* 6f5205: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f520a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f520c: lea ecx, [edx + 0x194] */
  ecx = (uint32_t)(edx + 0x194u);
/* 6f5212: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 6f5214: lea esi, [eax + 0x194] */
  esi = (uint32_t)(eax + 0x194u);
/* 6f521a: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f521c: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 6f521f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f5222: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f5225: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f5228: lea ecx, [edx + 0x1a0] */
  ecx = (uint32_t)(edx + 0x1a0u);
/* 6f522e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 6f5230: lea esi, [eax + 0x1a0] */
  esi = (uint32_t)(eax + 0x1a0u);
/* 6f5236: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f5238: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 6f523b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f523e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f5241: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f5244: lea ecx, [edx + 0x1ac] */
  ecx = (uint32_t)(edx + 0x1acu);
/* 6f524a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 6f524c: lea esi, [eax + 0x1ac] */
  esi = (uint32_t)(eax + 0x1acu);
/* 6f5252: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f5254: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 6f5257: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f525a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f525d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f5260: mov edx, dword ptr [edx + 0x1b8] */
  edx = R32((uint32_t)(edx + 0x1b8u));
/* 6f5266: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5267: mov dword ptr [eax + 0x1b8], edx */
  W32((uint32_t)(eax + 0x1b8u), edx);
/* 6f526d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f526e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f52c0(void) {
  LOAD_REGS();
L_6f52c0: /* 6f52c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6f52c4: mov eax, ecx */
  eax = ecx;
/* 6f52c6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6f52c9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6f52cc: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 6f52cf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f52d2: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 6f52d5: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f52d8: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 6f52db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f52dc: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f52df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f52e0: lea esi, [edx + 0x14] */
  esi = (uint32_t)(edx + 0x14u);
/* 6f52e3: lea edi, [eax + 0x14] */
  edi = (uint32_t)(eax + 0x14u);
/* 6f52e6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f52eb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f52ed: lea esi, [edx + 0x54] */
  esi = (uint32_t)(edx + 0x54u);
/* 6f52f0: lea edi, [eax + 0x54] */
  edi = (uint32_t)(eax + 0x54u);
/* 6f52f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f52f8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f52fa: lea esi, [edx + 0x94] */
  esi = (uint32_t)(edx + 0x94u);
/* 6f5300: lea edi, [eax + 0x94] */
  edi = (uint32_t)(eax + 0x94u);
/* 6f5306: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f530b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f530d: lea esi, [edx + 0xd4] */
  esi = (uint32_t)(edx + 0xd4u);
/* 6f5313: lea edi, [eax + 0xd4] */
  edi = (uint32_t)(eax + 0xd4u);
/* 6f5319: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f531e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f5320: lea esi, [edx + 0x114] */
  esi = (uint32_t)(edx + 0x114u);
/* 6f5326: lea edi, [eax + 0x114] */
  edi = (uint32_t)(eax + 0x114u);
/* 6f532c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f5331: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f5333: lea esi, [edx + 0x154] */
  esi = (uint32_t)(edx + 0x154u);
/* 6f5339: lea edi, [eax + 0x154] */
  edi = (uint32_t)(eax + 0x154u);
/* 6f533f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f5344: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f5346: lea ecx, [edx + 0x194] */
  ecx = (uint32_t)(edx + 0x194u);
/* 6f534c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 6f534e: lea esi, [eax + 0x194] */
  esi = (uint32_t)(eax + 0x194u);
/* 6f5354: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f5356: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 6f5359: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f535c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f535f: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f5362: lea ecx, [edx + 0x1a0] */
  ecx = (uint32_t)(edx + 0x1a0u);
/* 6f5368: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 6f536a: lea esi, [eax + 0x1a0] */
  esi = (uint32_t)(eax + 0x1a0u);
/* 6f5370: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f5372: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 6f5375: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f5378: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f537b: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f537e: lea ecx, [edx + 0x1ac] */
  ecx = (uint32_t)(edx + 0x1acu);
/* 6f5384: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 6f5386: lea esi, [eax + 0x1ac] */
  esi = (uint32_t)(eax + 0x1acu);
/* 6f538c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f538e: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 6f5391: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f5394: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f5397: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f539a: mov edx, dword ptr [edx + 0x1b8] */
  edx = R32((uint32_t)(edx + 0x1b8u));
/* 6f53a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f53a1: mov dword ptr [eax + 0x1b8], edx */
  W32((uint32_t)(eax + 0x1b8u), edx);
/* 6f53a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f53a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f53f0(void) {
  LOAD_REGS();
L_6f53f0: /* 6f53f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f53f1: mov esi, ecx */
  esi = ecx;
/* 6f53f3: call 0x6c103c */
  esp -= 4; W32(esp, 0x6f53f8u); SPILL(); f_6c103c(); if (g_unwind) return; RELOAD();
/* 6f53f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f53fd: je 0x6f540c */
  if (zf) goto L_6f540c;
L_6f53ff: /* 6f53ff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5404: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5406: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5408: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5409: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f540cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f540c: /* 6f540c: mov eax, esi */
  eax = esi;
/* 6f540e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f540f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5430(void) {
  LOAD_REGS();
L_6f5430: /* 6f5430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5431: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f5435: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5438: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5439: mov esi, ecx */
  esi = ecx;
/* 6f543b: je 0x6f5470 */
  if (zf) goto L_6f5470;
L_6f543d: /* 6f543d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f5440: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5441: push 0x6c103c */
  { uint32_t v = 0x6c103cu; esp -= 4; W32(esp, v); }
/* 6f5446: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f5449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f544a: push 0x1bc */
  { uint32_t v = 0x1bcu; esp -= 4; W32(esp, v); }
/* 6f544f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5450: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f5455u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f5455: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5458: je 0x6f5468 */
  if (zf) goto L_6f5468;
L_6f545a: /* 6f545a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f5460: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f5462: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5464: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5465: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5468u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5468: /* 6f5468: mov eax, edi */
  eax = edi;
/* 6f546a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f546b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f546c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f546d: ret 4 */
  esp += 8; SPILL(); return;
L_6f5470: /* 6f5470: mov ecx, esi */
  ecx = esi;
/* 6f5472: call 0x6c103c */
  esp -= 4; W32(esp, 0x6f5477u); SPILL(); f_6c103c(); if (g_unwind) return; RELOAD();
/* 6f5477: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f547a: je 0x6f5489 */
  if (zf) goto L_6f5489;
L_6f547c: /* 6f547c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5481: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5483: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5485: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5486: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5489u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5489: /* 6f5489: mov eax, esi */
  eax = esi;
/* 6f548b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f548c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f548d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5465(void) {
  LOAD_REGS();
L_6f5465: /* 6f5465: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5468u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f5468: mov eax, edi */
  eax = edi;
/* 6f546a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f546b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f546c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f546d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f54b0(void) {
  LOAD_REGS();
L_6f54b0: /* 6f54b0: mov eax, ecx */
  eax = ecx;
/* 6f54b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f54b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f54b8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 6f54ba: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f54bd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f54c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f54c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f54c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f54c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f54c4: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 6f54c7: mov edi, edx */
  edi = edx;
/* 6f54c9: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 6f54cb: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* 6f54ce: mov ebx, esi */
  ebx = esi;
/* 6f54d0: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 6f54d2: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 6f54d5: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 6f54d8: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 6f54db: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 6f54de: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 6f54e1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 6f54e4: lea edx, [ecx + 0x18] */
  edx = (uint32_t)(ecx + 0x18u);
/* 6f54e7: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f54e9: lea esi, [eax + 0x18] */
  esi = (uint32_t)(eax + 0x18u);
/* 6f54ec: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f54ee: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f54f1: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f54f4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f54f7: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f54fa: lea edx, [ecx + 0x24] */
  edx = (uint32_t)(ecx + 0x24u);
/* 6f54fd: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f54ff: lea esi, [eax + 0x24] */
  esi = (uint32_t)(eax + 0x24u);
/* 6f5502: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f5504: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f5507: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f550a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f550d: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f5510: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 6f5513: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* 6f5516: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 6f5519: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 6f551c: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 6f551f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5520: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 6f5523: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 6f5526: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5527: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 6f552a: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 6f552d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f552e: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 6f5531: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5532: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5570(void) {
  LOAD_REGS();
L_6f5570: /* 6f5570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5571: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f5575: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5576: mov eax, ecx */
  eax = ecx;
/* 6f5578: mov ecx, 0x11 */
  ecx = 0x11u;
/* 6f557d: mov edi, eax */
  edi = eax;
/* 6f557f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f5581: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5582: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5583: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f55a0(void) {
  LOAD_REGS();
L_6f55a0: /* 6f55a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f55a2: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x6f55a7u); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 6f55a7: ret  */
  esp += 4; SPILL(); return;
}

void f_6f55c0(void) {
  LOAD_REGS();
L_6f55c0: /* 6f55c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f55c2: push 0x9c122c */
  { uint32_t v = 0x9c122cu; esp -= 4; W32(esp, v); }
/* 6f55c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f55cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f55ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f55d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f55d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f55d7: mov esi, ecx */
  esi = ecx;
/* 6f55d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f55dd: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 6f55e0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f55e8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6f55eeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6f55ee: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 6f55f1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f55f9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6f55ffu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6f55ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f5603: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5604: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f560b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f560e: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5630(void) {
  LOAD_REGS();
L_6f5630: /* 6f5630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f5632: push 0x9c1258 */
  { uint32_t v = 0x9c1258u; esp -= 4; W32(esp, v); }
/* 6f5637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f563d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f563e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f5645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f5646: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5647: mov ebx, ecx */
  ebx = ecx;
/* 6f5649: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f564a: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 6f564e: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 6f5651: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5652: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 6f5654: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 6f5657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5658: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 6f565b: lea esi, [ebp + 8] */
  esi = (uint32_t)(ebp + 0x8u);
/* 6f565e: lea edi, [ebx + 8] */
  edi = (uint32_t)(ebx + 0x8u);
/* 6f5661: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f5666: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 6f566a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f566c: lea esi, [ebp + 0x48] */
  esi = (uint32_t)(ebp + 0x48u);
/* 6f566f: lea edi, [ebx + 0x48] */
  edi = (uint32_t)(ebx + 0x48u);
/* 6f5672: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f5677: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 6f567f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f5681: mov edx, dword ptr [ebp + 0x88] */
  edx = R32((uint32_t)(ebp + 0x88u));
/* 6f5687: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 6f568d: lea esi, [ebp + 0x8c] */
  esi = (uint32_t)(ebp + 0x8cu);
/* 6f5693: lea edi, [ebx + 0x8c] */
  edi = (uint32_t)(ebx + 0x8cu);
/* 6f5699: mov ecx, 7 */
  ecx = 0x7u;
/* 6f569e: lea eax, [ebp + 0xa8] */
  eax = (uint32_t)(ebp + 0xa8u);
/* 6f56a4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f56a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f56a7: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 6f56ad: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 6f56b2: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x6f56b8u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 6f56b8: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* 6f56be: mov dword ptr [ebx + 0xb8], ecx */
  W32((uint32_t)(ebx + 0xb8u), ecx);
/* 6f56c4: mov edx, dword ptr [ebp + 0xbc] */
  edx = R32((uint32_t)(ebp + 0xbcu));
/* 6f56ca: mov dword ptr [ebx + 0xbc], edx */
  W32((uint32_t)(ebx + 0xbcu), edx);
/* 6f56d0: mov eax, dword ptr [ebp + 0xc0] */
  eax = R32((uint32_t)(ebp + 0xc0u));
/* 6f56d6: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* 6f56dc: lea esi, [ebp + 0xc4] */
  esi = (uint32_t)(ebp + 0xc4u);
/* 6f56e2: lea edi, [ebx + 0xc4] */
  edi = (uint32_t)(ebx + 0xc4u);
/* 6f56e8: add ebp, 0xe0 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 6f56ee: mov ecx, 7 */
  ecx = 0x7u;
/* 6f56f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f56f5: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 6f56f8: lea ecx, [ebx + 0xe0] */
  ecx = (uint32_t)(ebx + 0xe0u);
/* 6f56fe: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f5700: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 6f5703: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 6f5706: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 6f5709: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f570a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f570b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f570e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f5712: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f5713: mov eax, ebx */
  eax = ebx;
/* 6f5715: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5716: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f571d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f5720: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5770(void) {
  LOAD_REGS();
L_6f5770: /* 6f5770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5771: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f5775: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5776: mov eax, ecx */
  eax = ecx;
/* 6f5778: mov ecx, 0x3b */
  ecx = 0x3bu;
/* 6f577d: mov edi, eax */
  edi = eax;
/* 6f577f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f5781: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5782: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5783: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f57a0(void) {
  LOAD_REGS();
L_6f57a0: /* 6f57a0: mov eax, 1 */
  eax = 0x1u;
/* 6f57a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f57c0(void) {
  LOAD_REGS();
L_6f57c0: /* 6f57c0: mov eax, ecx */
  eax = ecx;
/* 6f57c2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f57e0(void) {
  LOAD_REGS();
L_6f57e0: /* 6f57e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f57e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f57e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f57e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f57e7: mov esi, ecx */
  esi = ecx;
/* 6f57e9: call 0x6c8aad */
  esp -= 4; W32(esp, 0x6f57eeu); SPILL(); f_6c8aad(); if (g_unwind) return; RELOAD();
/* 6f57ee: mov dword ptr [esi], 0x9f6fa0 */
  W32((uint32_t)(esi), 0x9f6fa0u);
/* 6f57f4: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 6f57fa: mov dword ptr [esi + 0x1bc], eax */
  W32((uint32_t)(esi + 0x1bcu), eax);
/* 6f5800: mov ecx, dword ptr [edi + 0x1c0] */
  ecx = R32((uint32_t)(edi + 0x1c0u));
/* 6f5806: mov dword ptr [esi + 0x1c0], ecx */
  W32((uint32_t)(esi + 0x1c0u), ecx);
/* 6f580c: mov edx, dword ptr [edi + 0x1c4] */
  edx = R32((uint32_t)(edi + 0x1c4u));
/* 6f5812: mov dword ptr [esi + 0x1c4], edx */
  W32((uint32_t)(esi + 0x1c4u), edx);
/* 6f5818: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 6f581e: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 6f5824: mov ecx, dword ptr [edi + 0x1cc] */
  ecx = R32((uint32_t)(edi + 0x1ccu));
/* 6f582a: mov dword ptr [esi + 0x1cc], ecx */
  W32((uint32_t)(esi + 0x1ccu), ecx);
/* 6f5830: mov edx, dword ptr [edi + 0x1d0] */
  edx = R32((uint32_t)(edi + 0x1d0u));
/* 6f5836: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5837: mov dword ptr [esi + 0x1d0], edx */
  W32((uint32_t)(esi + 0x1d0u), edx);
/* 6f583d: mov eax, esi */
  eax = esi;
/* 6f583f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5840: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5870(void) {
  LOAD_REGS();
L_6f5870: /* 6f5870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5872: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f5876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5877: mov esi, ecx */
  esi = ecx;
/* 6f5879: call 0x6c1d57 */
  esp -= 4; W32(esp, 0x6f587eu); SPILL(); f_6c1d57(); if (g_unwind) return; RELOAD();
/* 6f587e: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 6f5884: mov dword ptr [esi + 0x1bc], eax */
  W32((uint32_t)(esi + 0x1bcu), eax);
/* 6f588a: mov ecx, dword ptr [edi + 0x1c0] */
  ecx = R32((uint32_t)(edi + 0x1c0u));
/* 6f5890: mov dword ptr [esi + 0x1c0], ecx */
  W32((uint32_t)(esi + 0x1c0u), ecx);
/* 6f5896: mov edx, dword ptr [edi + 0x1c4] */
  edx = R32((uint32_t)(edi + 0x1c4u));
/* 6f589c: mov dword ptr [esi + 0x1c4], edx */
  W32((uint32_t)(esi + 0x1c4u), edx);
/* 6f58a2: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 6f58a8: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 6f58ae: mov ecx, dword ptr [edi + 0x1cc] */
  ecx = R32((uint32_t)(edi + 0x1ccu));
/* 6f58b4: mov dword ptr [esi + 0x1cc], ecx */
  W32((uint32_t)(esi + 0x1ccu), ecx);
/* 6f58ba: mov edx, dword ptr [edi + 0x1d0] */
  edx = R32((uint32_t)(edi + 0x1d0u));
/* 6f58c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f58c1: mov dword ptr [esi + 0x1d0], edx */
  W32((uint32_t)(esi + 0x1d0u), edx);
/* 6f58c7: mov eax, esi */
  eax = esi;
/* 6f58c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f58ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f58f0(void) {
  LOAD_REGS();
L_6f58f0: /* 6f58f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f58f1: mov esi, ecx */
  esi = ecx;
/* 6f58f3: call 0x6c6474 */
  esp -= 4; W32(esp, 0x6f58f8u); SPILL(); f_6c6474(); if (g_unwind) return; RELOAD();
/* 6f58f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f58fd: je 0x6f590c */
  if (zf) goto L_6f590c;
L_6f58ff: /* 6f58ff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5904: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5906: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5909: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f590cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f590c: /* 6f590c: mov eax, esi */
  eax = esi;
/* 6f590e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f590f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5930(void) {
  LOAD_REGS();
L_6f5930: /* 6f5930: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5931: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f5935: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5938: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5939: mov esi, ecx */
  esi = ecx;
/* 6f593b: je 0x6f5970 */
  if (zf) goto L_6f5970;
L_6f593d: /* 6f593d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f5940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5941: push 0x6c6474 */
  { uint32_t v = 0x6c6474u; esp -= 4; W32(esp, v); }
/* 6f5946: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f5949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f594a: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 6f594f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5950: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f5955u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f5955: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5958: je 0x6f5968 */
  if (zf) goto L_6f5968;
L_6f595a: /* 6f595a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f5960: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f5962: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5964: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5965: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5968: /* 6f5968: mov eax, edi */
  eax = edi;
/* 6f596a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f596b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f596c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f596d: ret 4 */
  esp += 8; SPILL(); return;
L_6f5970: /* 6f5970: mov ecx, esi */
  ecx = esi;
/* 6f5972: call 0x6c6474 */
  esp -= 4; W32(esp, 0x6f5977u); SPILL(); f_6c6474(); if (g_unwind) return; RELOAD();
/* 6f5977: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f597a: je 0x6f5989 */
  if (zf) goto L_6f5989;
L_6f597c: /* 6f597c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5981: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5983: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5985: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5986: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5989u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5989: /* 6f5989: mov eax, esi */
  eax = esi;
/* 6f598b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f598c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f598d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f59b0(void) {
  LOAD_REGS();
L_6f59b0: /* 6f59b0: mov eax, ecx */
  eax = ecx;
/* 6f59b2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f59d0(void) {
  LOAD_REGS();
L_6f59d0: /* 6f59d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f59d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f59d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f59d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f59d7: mov esi, ecx */
  esi = ecx;
/* 6f59d9: call 0x6c29cd */
  esp -= 4; W32(esp, 0x6f59deu); SPILL(); f_6c29cd(); if (g_unwind) return; RELOAD();
/* 6f59de: mov dword ptr [esi], 0x9f6fe0 */
  W32((uint32_t)(esi), 0x9f6fe0u);
/* 6f59e4: lea eax, [edi + 0x1d4] */
  eax = (uint32_t)(edi + 0x1d4u);
/* 6f59ea: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f59ec: lea ecx, [esi + 0x1d4] */
  ecx = (uint32_t)(esi + 0x1d4u);
/* 6f59f2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f59f4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f59f7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f59fa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f59fd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f5a00: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* 6f5a06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5a07: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 6f5a0d: mov eax, esi */
  eax = esi;
/* 6f5a0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5a10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5a40(void) {
  LOAD_REGS();
L_6f5a40: /* 6f5a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5a41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5a42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f5a46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5a47: mov esi, ecx */
  esi = ecx;
/* 6f5a49: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x6f5a4eu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 6f5a4e: lea eax, [edi + 0x1d4] */
  eax = (uint32_t)(edi + 0x1d4u);
/* 6f5a54: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f5a56: lea ecx, [esi + 0x1d4] */
  ecx = (uint32_t)(esi + 0x1d4u);
/* 6f5a5c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f5a5e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f5a61: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f5a64: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f5a67: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f5a6a: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* 6f5a70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5a71: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 6f5a77: mov eax, esi */
  eax = esi;
/* 6f5a79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5a7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5a90(void) {
  LOAD_REGS();
L_6f5a90: /* 6f5a90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5a91: mov esi, ecx */
  esi = ecx;
/* 6f5a93: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x6f5a98u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 6f5a98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5a9d: je 0x6f5aac */
  if (zf) goto L_6f5aac;
L_6f5a9f: /* 6f5a9f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5aa4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5aa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5aa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5aa9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5aacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5aac: /* 6f5aac: mov eax, esi */
  eax = esi;
/* 6f5aae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5aaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5ad0(void) {
  LOAD_REGS();
L_6f5ad0: /* 6f5ad0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5ad1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f5ad5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5ad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5ad9: mov esi, ecx */
  esi = ecx;
/* 6f5adb: je 0x6f5b10 */
  if (zf) goto L_6f5b10;
L_6f5add: /* 6f5add: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f5ae0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5ae1: push 0x6c82c9 */
  { uint32_t v = 0x6c82c9u; esp -= 4; W32(esp, v); }
/* 6f5ae6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f5ae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f5aea: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* 6f5aef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5af0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f5af5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f5af5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5af8: je 0x6f5b08 */
  if (zf) goto L_6f5b08;
L_6f5afa: /* 6f5afa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f5b00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f5b02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5b04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5b05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5b08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5b08: /* 6f5b08: mov eax, edi */
  eax = edi;
/* 6f5b0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5b0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5b0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5b0d: ret 4 */
  esp += 8; SPILL(); return;
L_6f5b10: /* 6f5b10: mov ecx, esi */
  ecx = esi;
/* 6f5b12: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x6f5b17u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 6f5b17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5b1a: je 0x6f5b29 */
  if (zf) goto L_6f5b29;
L_6f5b1c: /* 6f5b1c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5b21: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5b23: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5b25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5b26: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5b29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5b29: /* 6f5b29: mov eax, esi */
  eax = esi;
/* 6f5b2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5b2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5b2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5b50(void) {
  LOAD_REGS();
L_6f5b50: /* 6f5b50: jmp 0x6c82c9 */
  SPILL(); f_6c82c9(); return;
}

void f_6f5b70(void) {
  LOAD_REGS();
L_6f5b70: /* 6f5b70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f5b74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f5b76: mov esi, ecx */
  esi = ecx;
/* 6f5b78: call 0x6c794b */
  esp -= 4; W32(esp, 0x6f5b7du); SPILL(); f_6c794b(); if (g_unwind) return; RELOAD();
/* 6f5b7d: mov dword ptr [esi], 0x9f7024 */
  W32((uint32_t)(esi), 0x9f7024u);
/* 6f5b83: mov eax, esi */
  eax = esi;
/* 6f5b85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5b86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5ba0(void) {
  LOAD_REGS();
L_6f5ba0: /* 6f5ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5ba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5ba2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f5ba6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5ba7: mov esi, ecx */
  esi = ecx;
/* 6f5ba9: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x6f5baeu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 6f5bae: lea eax, [edi + 0x1d4] */
  eax = (uint32_t)(edi + 0x1d4u);
/* 6f5bb4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f5bb6: lea ecx, [esi + 0x1d4] */
  ecx = (uint32_t)(esi + 0x1d4u);
/* 6f5bbc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f5bbe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f5bc1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f5bc4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f5bc7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f5bca: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* 6f5bd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5bd1: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 6f5bd7: mov eax, esi */
  eax = esi;
/* 6f5bd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5bda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5bf0(void) {
  LOAD_REGS();
L_6f5bf0: /* 6f5bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5bf1: mov esi, ecx */
  esi = ecx;
/* 6f5bf3: call 0x6ca38f */
  esp -= 4; W32(esp, 0x6f5bf8u); SPILL(); f_6ca38f(); if (g_unwind) return; RELOAD();
/* 6f5bf8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5bfd: je 0x6f5c0c */
  if (zf) goto L_6f5c0c;
L_6f5bff: /* 6f5bff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5c04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5c06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5c08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5c09: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5c0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5c0c: /* 6f5c0c: mov eax, esi */
  eax = esi;
/* 6f5c0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5c0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5c30(void) {
  LOAD_REGS();
L_6f5c30: /* 6f5c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5c31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f5c35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5c39: mov esi, ecx */
  esi = ecx;
/* 6f5c3b: je 0x6f5c70 */
  if (zf) goto L_6f5c70;
L_6f5c3d: /* 6f5c3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f5c40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5c41: push 0x6ca38f */
  { uint32_t v = 0x6ca38fu; esp -= 4; W32(esp, v); }
/* 6f5c46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f5c49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f5c4a: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* 6f5c4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5c50: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f5c55u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f5c55: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5c58: je 0x6f5c68 */
  if (zf) goto L_6f5c68;
L_6f5c5a: /* 6f5c5a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f5c60: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f5c62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5c64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5c65: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5c68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5c68: /* 6f5c68: mov eax, edi */
  eax = edi;
/* 6f5c6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5c6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5c6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5c6d: ret 4 */
  esp += 8; SPILL(); return;
L_6f5c70: /* 6f5c70: mov ecx, esi */
  ecx = esi;
/* 6f5c72: call 0x6ca38f */
  esp -= 4; W32(esp, 0x6f5c77u); SPILL(); f_6ca38f(); if (g_unwind) return; RELOAD();
/* 6f5c77: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5c7a: je 0x6f5c89 */
  if (zf) goto L_6f5c89;
L_6f5c7c: /* 6f5c7c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5c81: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5c83: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5c85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5c86: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5c89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5c89: /* 6f5c89: mov eax, esi */
  eax = esi;
/* 6f5c8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5c8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5c8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5cb0(void) {
  LOAD_REGS();
L_6f5cb0: /* 6f5cb0: mov eax, ecx */
  eax = ecx;
/* 6f5cb2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5cd0(void) {
  LOAD_REGS();
L_6f5cd0: /* 6f5cd0: jmp 0x6c82c9 */
  SPILL(); f_6c82c9(); return;
}

void f_6f5cf0(void) {
  LOAD_REGS();
L_6f5cf0: /* 6f5cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5cf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5cf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f5cf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5cf7: mov esi, ecx */
  esi = ecx;
/* 6f5cf9: call 0x6c794b */
  esp -= 4; W32(esp, 0x6f5cfeu); SPILL(); f_6c794b(); if (g_unwind) return; RELOAD();
/* 6f5cfe: mov dword ptr [esi], 0x9f7068 */
  W32((uint32_t)(esi), 0x9f7068u);
/* 6f5d04: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* 6f5d0a: mov dword ptr [esi + 0x1e4], eax */
  W32((uint32_t)(esi + 0x1e4u), eax);
/* 6f5d10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5d11: mov eax, esi */
  eax = esi;
/* 6f5d13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5d14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5d30(void) {
  LOAD_REGS();
L_6f5d30: /* 6f5d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5d32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f5d36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5d37: mov esi, ecx */
  esi = ecx;
/* 6f5d39: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x6f5d3eu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 6f5d3e: lea eax, [edi + 0x1d4] */
  eax = (uint32_t)(edi + 0x1d4u);
/* 6f5d44: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f5d46: lea ecx, [esi + 0x1d4] */
  ecx = (uint32_t)(esi + 0x1d4u);
/* 6f5d4c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f5d4e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f5d51: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f5d54: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f5d57: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f5d5a: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* 6f5d60: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 6f5d66: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* 6f5d6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5d6d: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* 6f5d73: mov eax, esi */
  eax = esi;
/* 6f5d75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5d76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5da0(void) {
  LOAD_REGS();
L_6f5da0: /* 6f5da0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5da1: mov esi, ecx */
  esi = ecx;
/* 6f5da3: call 0x6c212b */
  esp -= 4; W32(esp, 0x6f5da8u); SPILL(); f_6c212b(); if (g_unwind) return; RELOAD();
/* 6f5da8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5dad: je 0x6f5dbc */
  if (zf) goto L_6f5dbc;
L_6f5daf: /* 6f5daf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5db4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5db6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5db8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5db9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5dbc: /* 6f5dbc: mov eax, esi */
  eax = esi;
/* 6f5dbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5dbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5de0(void) {
  LOAD_REGS();
L_6f5de0: /* 6f5de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5de1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f5de5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5de8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5de9: mov esi, ecx */
  esi = ecx;
/* 6f5deb: je 0x6f5e20 */
  if (zf) goto L_6f5e20;
L_6f5ded: /* 6f5ded: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f5df0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5df1: push 0x6c212b */
  { uint32_t v = 0x6c212bu; esp -= 4; W32(esp, v); }
/* 6f5df6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f5df9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f5dfa: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* 6f5dff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5e00: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f5e05u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f5e05: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5e08: je 0x6f5e18 */
  if (zf) goto L_6f5e18;
L_6f5e0a: /* 6f5e0a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f5e10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f5e12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5e14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5e15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5e18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5e18: /* 6f5e18: mov eax, edi */
  eax = edi;
/* 6f5e1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5e1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5e1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5e1d: ret 4 */
  esp += 8; SPILL(); return;
L_6f5e20: /* 6f5e20: mov ecx, esi */
  ecx = esi;
/* 6f5e22: call 0x6c212b */
  esp -= 4; W32(esp, 0x6f5e27u); SPILL(); f_6c212b(); if (g_unwind) return; RELOAD();
/* 6f5e27: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5e2a: je 0x6f5e39 */
  if (zf) goto L_6f5e39;
L_6f5e2c: /* 6f5e2c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5e31: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5e33: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5e36: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5e39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5e39: /* 6f5e39: mov eax, esi */
  eax = esi;
/* 6f5e3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5e3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5e3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5e60(void) {
  LOAD_REGS();
L_6f5e60: /* 6f5e60: mov eax, ecx */
  eax = ecx;
/* 6f5e62: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5e80(void) {
  LOAD_REGS();
L_6f5e80: /* 6f5e80: jmp 0x6c6474 */
  SPILL(); f_6c6474(); return;
}

void f_6f5ea0(void) {
  LOAD_REGS();
L_6f5ea0: /* 6f5ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f5ea4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5ea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f5ea6: mov esi, ecx */
  esi = ecx;
/* 6f5ea8: call 0x6c29cd */
  esp -= 4; W32(esp, 0x6f5eadu); SPILL(); f_6c29cd(); if (g_unwind) return; RELOAD();
/* 6f5ead: mov dword ptr [esi], 0x9f70ac */
  W32((uint32_t)(esi), 0x9f70acu);
/* 6f5eb3: mov eax, esi */
  eax = esi;
/* 6f5eb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5eb6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5ed0(void) {
  LOAD_REGS();
L_6f5ed0: /* 6f5ed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f5ed4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f5ed6: mov esi, ecx */
  esi = ecx;
/* 6f5ed8: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x6f5eddu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 6f5edd: mov eax, esi */
  eax = esi;
/* 6f5edf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5ee0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5f00(void) {
  LOAD_REGS();
L_6f5f00: /* 6f5f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5f01: mov esi, ecx */
  esi = ecx;
/* 6f5f03: call 0x6c3f2b */
  esp -= 4; W32(esp, 0x6f5f08u); SPILL(); f_6c3f2b(); if (g_unwind) return; RELOAD();
/* 6f5f08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5f0d: je 0x6f5f1c */
  if (zf) goto L_6f5f1c;
L_6f5f0f: /* 6f5f0f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5f14: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5f16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5f18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5f19: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5f1c: /* 6f5f1c: mov eax, esi */
  eax = esi;
/* 6f5f1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5f1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5f40(void) {
  LOAD_REGS();
L_6f5f40: /* 6f5f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f5f41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f5f45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5f49: mov esi, ecx */
  esi = ecx;
/* 6f5f4b: je 0x6f5f80 */
  if (zf) goto L_6f5f80;
L_6f5f4d: /* 6f5f4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f5f50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5f51: push 0x6c3f2b */
  { uint32_t v = 0x6c3f2bu; esp -= 4; W32(esp, v); }
/* 6f5f56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f5f59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f5f5a: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 6f5f5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5f60: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f5f65u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f5f65: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5f68: je 0x6f5f78 */
  if (zf) goto L_6f5f78;
L_6f5f6a: /* 6f5f6a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f5f70: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f5f72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5f74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f5f75: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5f78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5f78: /* 6f5f78: mov eax, edi */
  eax = edi;
/* 6f5f7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f5f7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5f7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5f7d: ret 4 */
  esp += 8; SPILL(); return;
L_6f5f80: /* 6f5f80: mov ecx, esi */
  ecx = esi;
/* 6f5f82: call 0x6c3f2b */
  esp -= 4; W32(esp, 0x6f5f87u); SPILL(); f_6c3f2b(); if (g_unwind) return; RELOAD();
/* 6f5f87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f5f8a: je 0x6f5f99 */
  if (zf) goto L_6f5f99;
L_6f5f8c: /* 6f5f8c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f5f91: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f5f93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f5f95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f5f96: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f5f99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f5f99: /* 6f5f99: mov eax, esi */
  eax = esi;
/* 6f5f9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f5f9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f5f9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f5fc0(void) {
  LOAD_REGS();
L_6f5fc0: /* 6f5fc0: mov eax, ecx */
  eax = ecx;
/* 6f5fc2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f5fe0(void) {
  LOAD_REGS();
L_6f5fe0: /* 6f5fe0: jmp 0x6c6474 */
  SPILL(); f_6c6474(); return;
}

void f_6f6000(void) {
  LOAD_REGS();
L_6f6000: /* 6f6000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6001: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6002: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f6006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6007: mov esi, ecx */
  esi = ecx;
/* 6f6009: call 0x6c29cd */
  esp -= 4; W32(esp, 0x6f600eu); SPILL(); f_6c29cd(); if (g_unwind) return; RELOAD();
/* 6f600e: mov dword ptr [esi], 0x9f70ec */
  W32((uint32_t)(esi), 0x9f70ecu);
/* 6f6014: mov eax, dword ptr [edi + 0x1d4] */
  eax = R32((uint32_t)(edi + 0x1d4u));
/* 6f601a: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 6f6020: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6021: mov eax, esi */
  eax = esi;
/* 6f6023: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6024: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6040(void) {
  LOAD_REGS();
L_6f6040: /* 6f6040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6041: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6042: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f6046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6047: mov esi, ecx */
  esi = ecx;
/* 6f6049: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x6f604eu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 6f604e: mov eax, dword ptr [edi + 0x1d4] */
  eax = R32((uint32_t)(edi + 0x1d4u));
/* 6f6054: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 6f605a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f605b: mov eax, esi */
  eax = esi;
/* 6f605d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f605e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6080(void) {
  LOAD_REGS();
L_6f6080: /* 6f6080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6081: mov esi, ecx */
  esi = ecx;
/* 6f6083: call 0x6c8f76 */
  esp -= 4; W32(esp, 0x6f6088u); SPILL(); f_6c8f76(); if (g_unwind) return; RELOAD();
/* 6f6088: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f608d: je 0x6f609c */
  if (zf) goto L_6f609c;
L_6f608f: /* 6f608f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f6094: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f6096: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f6098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6099: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f609cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f609c: /* 6f609c: mov eax, esi */
  eax = esi;
/* 6f609e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f609f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f60c0(void) {
  LOAD_REGS();
L_6f60c0: /* 6f60c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f60c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f60c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f60c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f60c9: mov esi, ecx */
  esi = ecx;
/* 6f60cb: je 0x6f6100 */
  if (zf) goto L_6f6100;
L_6f60cd: /* 6f60cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f60d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f60d1: push 0x6c8f76 */
  { uint32_t v = 0x6c8f76u; esp -= 4; W32(esp, v); }
/* 6f60d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f60d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f60da: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* 6f60df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f60e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f60e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f60e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f60e8: je 0x6f60f8 */
  if (zf) goto L_6f60f8;
L_6f60ea: /* 6f60ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f60f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f60f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f60f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f60f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f60f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f60f8: /* 6f60f8: mov eax, edi */
  eax = edi;
/* 6f60fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f60fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f60fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f60fd: ret 4 */
  esp += 8; SPILL(); return;
L_6f6100: /* 6f6100: mov ecx, esi */
  ecx = esi;
/* 6f6102: call 0x6c8f76 */
  esp -= 4; W32(esp, 0x6f6107u); SPILL(); f_6c8f76(); if (g_unwind) return; RELOAD();
/* 6f6107: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f610a: je 0x6f6119 */
  if (zf) goto L_6f6119;
L_6f610c: /* 6f610c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f6111: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f6113: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f6115: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6116: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f6119u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f6119: /* 6f6119: mov eax, esi */
  eax = esi;
/* 6f611b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f611c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f611d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6140(void) {
  LOAD_REGS();
L_6f6140: /* 6f6140: mov eax, ecx */
  eax = ecx;
/* 6f6142: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6160(void) {
  LOAD_REGS();
L_6f6160: /* 6f6160: jmp 0x6c6474 */
  SPILL(); f_6c6474(); return;
}

void f_6f6180(void) {
  LOAD_REGS();
L_6f6180: /* 6f6180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f6184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6185: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f6186: mov esi, ecx */
  esi = ecx;
/* 6f6188: call 0x6c29cd */
  esp -= 4; W32(esp, 0x6f618du); SPILL(); f_6c29cd(); if (g_unwind) return; RELOAD();
/* 6f618d: mov dword ptr [esi], 0x9f712c */
  W32((uint32_t)(esi), 0x9f712cu);
/* 6f6193: mov eax, esi */
  eax = esi;
/* 6f6195: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6196: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f61b0(void) {
  LOAD_REGS();
L_6f61b0: /* 6f61b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f61b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f61b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f61b6: mov esi, ecx */
  esi = ecx;
/* 6f61b8: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x6f61bdu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 6f61bd: mov eax, esi */
  eax = esi;
/* 6f61bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f61c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f61e0(void) {
  LOAD_REGS();
L_6f61e0: /* 6f61e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f61e1: mov esi, ecx */
  esi = ecx;
/* 6f61e3: call 0x6c6f3c */
  esp -= 4; W32(esp, 0x6f61e8u); SPILL(); f_6c6f3c(); if (g_unwind) return; RELOAD();
/* 6f61e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f61ed: je 0x6f61fc */
  if (zf) goto L_6f61fc;
L_6f61ef: /* 6f61ef: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f61f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f61f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f61f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f61f9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f61fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f61fc: /* 6f61fc: mov eax, esi */
  eax = esi;
/* 6f61fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f61ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6220(void) {
  LOAD_REGS();
L_6f6220: /* 6f6220: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f6221: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f6225: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6229: mov esi, ecx */
  esi = ecx;
/* 6f622b: je 0x6f6260 */
  if (zf) goto L_6f6260;
L_6f622d: /* 6f622d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f6230: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6231: push 0x6c6f3c */
  { uint32_t v = 0x6c6f3cu; esp -= 4; W32(esp, v); }
/* 6f6236: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f6239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f623a: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 6f623f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6240: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f6245u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f6245: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6248: je 0x6f6258 */
  if (zf) goto L_6f6258;
L_6f624a: /* 6f624a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f6250: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f6252: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f6254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6255: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f6258u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f6258: /* 6f6258: mov eax, edi */
  eax = edi;
/* 6f625a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f625b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f625c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f625d: ret 4 */
  esp += 8; SPILL(); return;
L_6f6260: /* 6f6260: mov ecx, esi */
  ecx = esi;
/* 6f6262: call 0x6c6f3c */
  esp -= 4; W32(esp, 0x6f6267u); SPILL(); f_6c6f3c(); if (g_unwind) return; RELOAD();
/* 6f6267: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f626a: je 0x6f6279 */
  if (zf) goto L_6f6279;
L_6f626c: /* 6f626c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f6271: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f6273: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f6275: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6276: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f6279u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f6279: /* 6f6279: mov eax, esi */
  eax = esi;
/* 6f627b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f627c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f627d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f62a0(void) {
  LOAD_REGS();
L_6f62a0: /* 6f62a0: mov eax, 0xac3a60 */
  eax = 0xac3a60u;
/* 6f62a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f62c0(void) {
  LOAD_REGS();
L_6f62c0: /* 6f62c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f62c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f62c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f62c6: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f62cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f62cd: push 0xac3a60 */
  { uint32_t v = 0xac3a60u; esp -= 4; W32(esp, v); }
/* 6f62d2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f62d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f62d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f62d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f62d9: je 0x6f62f1 */
  if (zf) goto L_6f62f1;
L_6f62db: /* 6f62db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f62dc: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f62e1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f62e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f62e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f62e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f62e8: je 0x6f62f1 */
  if (zf) goto L_6f62f1;
L_6f62ea: /* 6f62ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f62eb: xor eax, eax */
  eax = 0;
/* 6f62ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f62ee: ret 4 */
  esp += 8; SPILL(); return;
L_6f62f1: /* 6f62f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f62f2: mov eax, 1 */
  eax = 0x1u;
/* 6f62f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f62f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6310(void) {
  LOAD_REGS();
L_6f6310: /* 6f6310: mov eax, ecx */
  eax = ecx;
/* 6f6312: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6316: mov dword ptr [eax], 0x9f716c */
  W32((uint32_t)(eax), 0x9f716cu);
/* 6f631c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f631f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6340(void) {
  LOAD_REGS();
L_6f6340: /* 6f6340: mov eax, ecx */
  eax = ecx;
/* 6f6342: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6346: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f634c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f634f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6352: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6355: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6358: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f635b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f635e: mov dword ptr [eax], 0x9f716c */
  W32((uint32_t)(eax), 0x9f716cu);
/* 6f6364: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f6367: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f636a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6380(void) {
  LOAD_REGS();
L_6f6380: /* 6f6380: mov eax, ecx */
  eax = ecx;
/* 6f6382: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6386: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6389: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f638c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f638f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6392: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6395: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6398: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f639b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f639e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f63c0(void) {
  LOAD_REGS();
L_6f63c0: /* 6f63c0: mov eax, 0xac3a78 */
  eax = 0xac3a78u;
/* 6f63c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f63e0(void) {
  LOAD_REGS();
L_6f63e0: /* 6f63e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f63e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f63e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f63e6: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f63ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f63ed: push 0xac3a78 */
  { uint32_t v = 0xac3a78u; esp -= 4; W32(esp, v); }
/* 6f63f2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f63f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f63f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f63f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f63f9: je 0x6f6411 */
  if (zf) goto L_6f6411;
L_6f63fb: /* 6f63fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f63fc: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6401: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6403u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6403: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6406: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6408: je 0x6f6411 */
  if (zf) goto L_6f6411;
L_6f640a: /* 6f640a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f640b: xor eax, eax */
  eax = 0;
/* 6f640d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f640e: ret 4 */
  esp += 8; SPILL(); return;
L_6f6411: /* 6f6411: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6412: mov eax, 1 */
  eax = 0x1u;
/* 6f6417: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6418: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6430(void) {
  LOAD_REGS();
L_6f6430: /* 6f6430: mov eax, ecx */
  eax = ecx;
/* 6f6432: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6436: mov dword ptr [eax], 0x9f7180 */
  W32((uint32_t)(eax), 0x9f7180u);
/* 6f643c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f643f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6460(void) {
  LOAD_REGS();
L_6f6460: /* 6f6460: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 6f6463: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6480(void) {
  LOAD_REGS();
L_6f6480: /* 6f6480: mov eax, ecx */
  eax = ecx;
/* 6f6482: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6486: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f648c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f648f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6492: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6495: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6498: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f649b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f649e: mov dword ptr [eax], 0x9f7180 */
  W32((uint32_t)(eax), 0x9f7180u);
/* 6f64a4: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f64a7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f64aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f64c0(void) {
  LOAD_REGS();
L_6f64c0: /* 6f64c0: mov eax, ecx */
  eax = ecx;
/* 6f64c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f64c6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f64c9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f64cc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f64cf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f64d2: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f64d5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f64d8: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f64db: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f64de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6500(void) {
  LOAD_REGS();
L_6f6500: /* 6f6500: mov eax, 0xac3a88 */
  eax = 0xac3a88u;
/* 6f6505: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6520(void) {
  LOAD_REGS();
L_6f6520: /* 6f6520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6521: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6525: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6526: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f652c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f652d: push 0xac3a88 */
  { uint32_t v = 0xac3a88u; esp -= 4; W32(esp, v); }
/* 6f6532: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6534u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6534: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6539: je 0x6f6551 */
  if (zf) goto L_6f6551;
L_6f653b: /* 6f653b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f653c: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6541: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6543u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6543: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6546: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6548: je 0x6f6551 */
  if (zf) goto L_6f6551;
L_6f654a: /* 6f654a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f654b: xor eax, eax */
  eax = 0;
/* 6f654d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f654e: ret 4 */
  esp += 8; SPILL(); return;
L_6f6551: /* 6f6551: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6552: mov eax, 1 */
  eax = 0x1u;
/* 6f6557: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6558: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6570(void) {
  LOAD_REGS();
L_6f6570: /* 6f6570: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f6573: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f6574: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f6575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6576: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6577: mov edi, ecx */
  edi = ecx;
/* 6f6579: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 6f657d: mov dword ptr [edi], 0x9f7198 */
  W32((uint32_t)(edi), 0x9f7198u);
/* 6f6583: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f6586: mov eax, dword ptr [esi + 0x168] */
  eax = R32((uint32_t)(esi + 0x168u));
/* 6f658c: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 6f6592: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 6f6593: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 6f6595: mov ebp, eax */
  ebp = eax;
/* 6f6597: mov eax, dword ptr [esi + 0x160] */
  eax = R32((uint32_t)(esi + 0x160u));
/* 6f659d: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 6f659f: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 6f65a1: mov eax, ebx */
  eax = ebx;
/* 6f65a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 6f65a4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 6f65a6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 6f65a8: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 6f65aa: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 6f65b0: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 6f65b4: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 6f65b8: mov ebx, dword ptr [esi + 0x8c] */
  ebx = R32((uint32_t)(esi + 0x8cu));
/* 6f65be: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 6f65c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 6f65c3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 6f65c7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 6f65c9: mov ebp, eax */
  ebp = eax;
/* 6f65cb: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 6f65d1: mov eax, ebx */
  eax = ebx;
/* 6f65d3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 6f65d4: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 6f65d6: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 6f65d8: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 6f65da: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 6f65de: mov ebx, dword ptr [esi + 0x164] */
  ebx = R32((uint32_t)(esi + 0x164u));
/* 6f65e4: sar ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* 6f65e6: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 6f65e8: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 6f65ea: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 6f65ee: lea esi, [ecx + 0x194] */
  esi = (uint32_t)(ecx + 0x194u);
/* 6f65f4: mov edx, esi */
  edx = esi;
/* 6f65f6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 6f65f8: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 6f65fb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 6f65fd: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 6f6600: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 6f6603: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f6606: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6609: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6f660c: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 6f660f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6611: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 6f6615: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 6f6619: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 6f661f: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 6f6621: fchs  */
  ST0 = -ST0;
/* 6f6623: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 6f6627: je 0x6f6646 */
  if (zf) goto L_6f6646;
L_6f6629: /* 6f6629: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 6f662f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f6632: je 0x6f663e */
  if (zf) goto L_6f663e;
L_6f6634: /* 6f6634: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f6637: je 0x6f663e */
  if (zf) goto L_6f663e;
L_6f6639: /* 6f6639: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f663c: jne 0x6f6646 */
  if (!zf) goto L_6f6646;
L_6f663e: /* 6f663e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 6f6644: jmp 0x6f664d */
  goto L_6f664d;
L_6f6646: /* 6f6646: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 6f664b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
L_6f664d: /* 6f664d: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 6f6651: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 6f6653: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f6656: mov eax, esp */
  eax = esp;
/* 6f6658: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 6f665a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f665d: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 6f6664: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 6f6667: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 6f666b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f666c: call 0x6c7018 */
  esp -= 4; W32(esp, 0x6f6671u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 6f6671: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 6f6673: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 6f6675: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 6f6678: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 6f667c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 6f6680: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 6f6683: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 6f6686: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 6f668a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 6f668d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6f6691: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 6f6694: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f6696: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 6f6699: mov eax, edi */
  eax = edi;
/* 6f669b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f669c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f669d: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 6f66a1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 6f66a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f66a6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f66a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f66aa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f66ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6700(void) {
  LOAD_REGS();
L_6f6700: /* 6f6700: mov eax, ecx */
  eax = ecx;
/* 6f6702: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6706: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f670c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f670f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6712: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6715: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6718: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f671b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f671e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f671f: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 6f6722: mov dword ptr [eax], 0x9f7198 */
  W32((uint32_t)(eax), 0x9f7198u);
/* 6f6728: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6729: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f672b: lea esi, [eax + 0xc] */
  esi = (uint32_t)(eax + 0xcu);
/* 6f672e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f6730: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f6733: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f6736: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f6739: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f673c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6f673f: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6f6741: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 6f6744: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6f6746: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f6749: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6f674c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f674f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6750: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f6753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6754: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6780(void) {
  LOAD_REGS();
L_6f6780: /* 6f6780: mov eax, ecx */
  eax = ecx;
/* 6f6782: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6786: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6789: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f678c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f678f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6792: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6795: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6799: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 6f679c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f679d: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f679f: lea esi, [eax + 0xc] */
  esi = (uint32_t)(eax + 0xcu);
/* 6f67a2: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f67a4: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f67a7: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f67aa: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f67ad: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f67b0: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6f67b3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6f67b5: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 6f67b8: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6f67ba: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f67bd: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6f67c0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f67c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f67c4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f67c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f67c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f67f0(void) {
  LOAD_REGS();
L_6f67f0: /* 6f67f0: mov eax, 0xac3a9c */
  eax = 0xac3a9cu;
/* 6f67f5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6810(void) {
  LOAD_REGS();
L_6f6810: /* 6f6810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6811: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6815: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6816: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f681c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f681d: push 0xac3a9c */
  { uint32_t v = 0xac3a9cu; esp -= 4; W32(esp, v); }
/* 6f6822: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6824u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6824: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6827: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6829: je 0x6f6841 */
  if (zf) goto L_6f6841;
L_6f682b: /* 6f682b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f682c: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6831: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6833u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6833: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6838: je 0x6f6841 */
  if (zf) goto L_6f6841;
L_6f683a: /* 6f683a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f683b: xor eax, eax */
  eax = 0;
/* 6f683d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f683e: ret 4 */
  esp += 8; SPILL(); return;
L_6f6841: /* 6f6841: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6842: mov eax, 1 */
  eax = 0x1u;
/* 6f6847: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6848: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6860(void) {
  LOAD_REGS();
L_6f6860: /* 6f6860: mov eax, ecx */
  eax = ecx;
/* 6f6862: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6866: mov dword ptr [eax], 0x9f71ac */
  W32((uint32_t)(eax), 0x9f71acu);
/* 6f686c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f686f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6890(void) {
  LOAD_REGS();
L_6f6890: /* 6f6890: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 6f6893: ret  */
  esp += 4; SPILL(); return;
}

void f_6f68b0(void) {
  LOAD_REGS();
L_6f68b0: /* 6f68b0: mov eax, ecx */
  eax = ecx;
/* 6f68b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f68b6: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f68bc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f68bf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f68c2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f68c5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f68c8: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f68cb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f68ce: mov dword ptr [eax], 0x9f71ac */
  W32((uint32_t)(eax), 0x9f71acu);
/* 6f68d4: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f68d7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f68da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f68f0(void) {
  LOAD_REGS();
L_6f68f0: /* 6f68f0: mov eax, ecx */
  eax = ecx;
/* 6f68f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f68f6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f68f9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f68fc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f68ff: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6902: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6905: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6908: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f690b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f690e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6930(void) {
  LOAD_REGS();
L_6f6930: /* 6f6930: mov eax, 0xac3ab4 */
  eax = 0xac3ab4u;
/* 6f6935: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6950(void) {
  LOAD_REGS();
L_6f6950: /* 6f6950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6951: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6955: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6956: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f695c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f695d: push 0xac3ab4 */
  { uint32_t v = 0xac3ab4u; esp -= 4; W32(esp, v); }
/* 6f6962: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6964u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6964: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6967: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6969: je 0x6f6981 */
  if (zf) goto L_6f6981;
L_6f696b: /* 6f696b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f696c: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6971: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6973u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6973: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6976: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6978: je 0x6f6981 */
  if (zf) goto L_6f6981;
L_6f697a: /* 6f697a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f697b: xor eax, eax */
  eax = 0;
/* 6f697d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f697e: ret 4 */
  esp += 8; SPILL(); return;
L_6f6981: /* 6f6981: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6982: mov eax, 1 */
  eax = 0x1u;
/* 6f6987: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6988: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f69a0(void) {
  LOAD_REGS();
L_6f69a0: /* 6f69a0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 6f69a4: mov eax, ecx */
  eax = ecx;
/* 6f69a6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f69aa: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f69ad: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f69b1: mov dword ptr [eax], 0x9f71c0 */
  W32((uint32_t)(eax), 0x9f71c0u);
/* 6f69b7: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 6f69ba: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 6f69bd: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6f69d0(void) {
  LOAD_REGS();
L_6f69d0: /* 6f69d0: mov eax, ecx */
  eax = ecx;
/* 6f69d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f69d6: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f69dc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f69df: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f69e2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f69e5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f69e8: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f69eb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f69ee: mov dword ptr [eax], 0x9f71c0 */
  W32((uint32_t)(eax), 0x9f71c0u);
/* 6f69f4: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f69f7: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f69fa: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 6f69fd: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 6f6a00: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 6f6a03: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 6f6a06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6a20(void) {
  LOAD_REGS();
L_6f6a20: /* 6f6a20: mov eax, ecx */
  eax = ecx;
/* 6f6a22: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6a26: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6a29: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6a2c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6a2f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6a32: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6a35: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6a38: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f6a3b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f6a3e: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 6f6a41: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 6f6a44: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 6f6a47: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 6f6a4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6a60(void) {
  LOAD_REGS();
L_6f6a60: /* 6f6a60: mov eax, 0xac3ae0 */
  eax = 0xac3ae0u;
/* 6f6a65: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6a80(void) {
  LOAD_REGS();
L_6f6a80: /* 6f6a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6a81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6a85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6a86: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f6a8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6a8d: push 0xac3ae0 */
  { uint32_t v = 0xac3ae0u; esp -= 4; W32(esp, v); }
/* 6f6a92: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6a94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6a94: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6a97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6a99: je 0x6f6ab1 */
  if (zf) goto L_6f6ab1;
L_6f6a9b: /* 6f6a9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6a9c: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6aa1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6aa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6aa3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6aa6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6aa8: je 0x6f6ab1 */
  if (zf) goto L_6f6ab1;
L_6f6aaa: /* 6f6aaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6aab: xor eax, eax */
  eax = 0;
/* 6f6aad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6aae: ret 4 */
  esp += 8; SPILL(); return;
L_6f6ab1: /* 6f6ab1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6ab2: mov eax, 1 */
  eax = 0x1u;
/* 6f6ab7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6ab8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6ad0(void) {
  LOAD_REGS();
L_6f6ad0: /* 6f6ad0: mov eax, ecx */
  eax = ecx;
/* 6f6ad2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6ad6: mov dword ptr [eax], 0x9f71d4 */
  W32((uint32_t)(eax), 0x9f71d4u);
/* 6f6adc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6adf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6b00(void) {
  LOAD_REGS();
L_6f6b00: /* 6f6b00: mov eax, ecx */
  eax = ecx;
/* 6f6b02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6b06: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f6b0c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6b0f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6b12: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6b15: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6b18: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6b1b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6b1e: mov dword ptr [eax], 0x9f71d4 */
  W32((uint32_t)(eax), 0x9f71d4u);
/* 6f6b24: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f6b27: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6b2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6b40(void) {
  LOAD_REGS();
L_6f6b40: /* 6f6b40: mov eax, ecx */
  eax = ecx;
/* 6f6b42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6b46: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6b49: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6b4c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6b4f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6b52: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6b55: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6b58: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f6b5b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6b5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6b80(void) {
  LOAD_REGS();
L_6f6b80: /* 6f6b80: mov eax, 0xac3b08 */
  eax = 0xac3b08u;
/* 6f6b85: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6ba0(void) {
  LOAD_REGS();
L_6f6ba0: /* 6f6ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6ba1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6ba5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6ba6: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f6bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6bad: push 0xac3b08 */
  { uint32_t v = 0xac3b08u; esp -= 4; W32(esp, v); }
/* 6f6bb2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6bb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6bb4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6bb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6bb9: je 0x6f6bd1 */
  if (zf) goto L_6f6bd1;
L_6f6bbb: /* 6f6bbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6bbc: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6bc1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6bc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6bc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6bc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6bc8: je 0x6f6bd1 */
  if (zf) goto L_6f6bd1;
L_6f6bca: /* 6f6bca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6bcb: xor eax, eax */
  eax = 0;
/* 6f6bcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6bce: ret 4 */
  esp += 8; SPILL(); return;
L_6f6bd1: /* 6f6bd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6bd2: mov eax, 1 */
  eax = 0x1u;
/* 6f6bd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6bd8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6bf0(void) {
  LOAD_REGS();
L_6f6bf0: /* 6f6bf0: mov eax, ecx */
  eax = ecx;
/* 6f6bf2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6bf6: mov dword ptr [eax], 0x9f71e8 */
  W32((uint32_t)(eax), 0x9f71e8u);
/* 6f6bfc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6bff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6c20(void) {
  LOAD_REGS();
L_6f6c20: /* 6f6c20: mov eax, ecx */
  eax = ecx;
/* 6f6c22: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6c26: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f6c2c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6c2f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6c32: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6c35: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6c38: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6c3b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6c3e: mov dword ptr [eax], 0x9f71e8 */
  W32((uint32_t)(eax), 0x9f71e8u);
/* 6f6c44: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f6c47: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6c4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6c60(void) {
  LOAD_REGS();
L_6f6c60: /* 6f6c60: mov eax, ecx */
  eax = ecx;
/* 6f6c62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6c66: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6c69: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6c6c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6c6f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6c72: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6c75: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6c78: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f6c7b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6c7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6ca0(void) {
  LOAD_REGS();
L_6f6ca0: /* 6f6ca0: mov eax, 0xac3b2c */
  eax = 0xac3b2cu;
/* 6f6ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6cc0(void) {
  LOAD_REGS();
L_6f6cc0: /* 6f6cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6cc1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6cc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6cc6: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f6ccc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6ccd: push 0xac3b2c */
  { uint32_t v = 0xac3b2cu; esp -= 4; W32(esp, v); }
/* 6f6cd2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6cd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6cd4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6cd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6cd9: je 0x6f6cf1 */
  if (zf) goto L_6f6cf1;
L_6f6cdb: /* 6f6cdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6cdc: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6ce1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6ce3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6ce3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6ce6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6ce8: je 0x6f6cf1 */
  if (zf) goto L_6f6cf1;
L_6f6cea: /* 6f6cea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6ceb: xor eax, eax */
  eax = 0;
/* 6f6ced: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6cee: ret 4 */
  esp += 8; SPILL(); return;
L_6f6cf1: /* 6f6cf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6cf2: mov eax, 1 */
  eax = 0x1u;
/* 6f6cf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6cf8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6d10(void) {
  LOAD_REGS();
L_6f6d10: /* 6f6d10: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f6d14: mov eax, ecx */
  eax = ecx;
/* 6f6d16: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6d1a: mov dword ptr [eax], 0x9f71fc */
  W32((uint32_t)(eax), 0x9f71fcu);
/* 6f6d20: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6d23: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 6f6d26: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f6d40(void) {
  LOAD_REGS();
L_6f6d40: /* 6f6d40: mov eax, ecx */
  eax = ecx;
/* 6f6d42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6d46: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f6d4c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6d4f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6d52: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6d55: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6d58: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6d5b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6d5e: mov dword ptr [eax], 0x9f71fc */
  W32((uint32_t)(eax), 0x9f71fcu);
/* 6f6d64: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f6d67: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f6d6a: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f6d6d: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f6d70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6d90(void) {
  LOAD_REGS();
L_6f6d90: /* 6f6d90: mov eax, ecx */
  eax = ecx;
/* 6f6d92: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6d96: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6d99: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6d9c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6d9f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6da2: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6da5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6da8: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f6dab: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f6dae: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f6db1: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f6db4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6dd0(void) {
  LOAD_REGS();
L_6f6dd0: /* 6f6dd0: mov eax, 0xac3b50 */
  eax = 0xac3b50u;
/* 6f6dd5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6df0(void) {
  LOAD_REGS();
L_6f6df0: /* 6f6df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6df1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6df5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6df6: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f6dfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6dfd: push 0xac3b50 */
  { uint32_t v = 0xac3b50u; esp -= 4; W32(esp, v); }
/* 6f6e02: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6e04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6e04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6e07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6e09: je 0x6f6e21 */
  if (zf) goto L_6f6e21;
L_6f6e0b: /* 6f6e0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6e0c: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6e11: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6e13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6e13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6e16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6e18: je 0x6f6e21 */
  if (zf) goto L_6f6e21;
L_6f6e1a: /* 6f6e1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6e1b: xor eax, eax */
  eax = 0;
/* 6f6e1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6e1e: ret 4 */
  esp += 8; SPILL(); return;
L_6f6e21: /* 6f6e21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6e22: mov eax, 1 */
  eax = 0x1u;
/* 6f6e27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6e28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6e40(void) {
  LOAD_REGS();
L_6f6e40: /* 6f6e40: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6f6e44: mov eax, ecx */
  eax = ecx;
/* 6f6e46: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f6e4a: mov dword ptr [eax], 0x9f7210 */
  W32((uint32_t)(eax), 0x9f7210u);
/* 6f6e50: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6e53: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 6f6e56: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f6e70(void) {
  LOAD_REGS();
L_6f6e70: /* 6f6e70: mov eax, ecx */
  eax = ecx;
/* 6f6e72: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6e76: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f6e7c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6e7f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6e82: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6e85: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6e88: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6e8b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6e8e: mov dword ptr [eax], 0x9f7210 */
  W32((uint32_t)(eax), 0x9f7210u);
/* 6f6e94: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f6e97: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f6e9a: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f6e9d: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f6ea0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6ec0(void) {
  LOAD_REGS();
L_6f6ec0: /* 6f6ec0: mov eax, ecx */
  eax = ecx;
/* 6f6ec2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6ec6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6ec9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6ecc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6ecf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6ed2: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6ed5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6ed8: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f6edb: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f6ede: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f6ee1: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f6ee4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6f00(void) {
  LOAD_REGS();
L_6f6f00: /* 6f6f00: mov eax, 0xac3b7c */
  eax = 0xac3b7cu;
/* 6f6f05: ret  */
  esp += 4; SPILL(); return;
}

void f_6f6f20(void) {
  LOAD_REGS();
L_6f6f20: /* 6f6f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6f21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f6f25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f6f26: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 6f6f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6f2d: push 0xac3b7c */
  { uint32_t v = 0xac3b7cu; esp -= 4; W32(esp, v); }
/* 6f6f32: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6f34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6f34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6f37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6f39: je 0x6f6f51 */
  if (zf) goto L_6f6f51;
L_6f6f3b: /* 6f6f3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f6f3c: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 6f6f41: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f6f43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f6f43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f6f46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f6f48: je 0x6f6f51 */
  if (zf) goto L_6f6f51;
L_6f6f4a: /* 6f6f4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6f4b: xor eax, eax */
  eax = 0;
/* 6f6f4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6f4e: ret 4 */
  esp += 8; SPILL(); return;
L_6f6f51: /* 6f6f51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f6f52: mov eax, 1 */
  eax = 0x1u;
/* 6f6f57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f6f58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6f70(void) {
  LOAD_REGS();
L_6f6f70: /* 6f6f70: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f6f74: mov eax, ecx */
  eax = ecx;
/* 6f6f76: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6f7a: mov dword ptr [eax], 0x9f7224 */
  W32((uint32_t)(eax), 0x9f7224u);
/* 6f6f80: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f6f83: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 6f6f86: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f6fa0(void) {
  LOAD_REGS();
L_6f6fa0: /* 6f6fa0: mov eax, ecx */
  eax = ecx;
/* 6f6fa2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6fa6: mov dword ptr [eax], 0x9f6d3c */
  W32((uint32_t)(eax), 0x9f6d3cu);
/* 6f6fac: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6faf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6fb2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6fb5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6fb8: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f6fbb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f6fbe: mov dword ptr [eax], 0x9f7224 */
  W32((uint32_t)(eax), 0x9f7224u);
/* 6f6fc4: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f6fc7: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f6fca: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f6fcd: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f6fd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f6ff0(void) {
  LOAD_REGS();
L_6f6ff0: /* 6f6ff0: mov eax, ecx */
  eax = ecx;
/* 6f6ff2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f6ff6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6ff9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f6ffc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f6fff: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f7002: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f7005: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f7008: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6f700b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f700e: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6f7011: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6f7014: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7030(void) {
  LOAD_REGS();
L_6f7030: /* 6f7030: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f7034: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7037: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6f703b: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 6f703e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f703f: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x6f7042u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7042: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7044: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6f7047: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7048: mov ecx, eax */
  ecx = eax;
/* 6f704a: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x6f704du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f704d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f704e: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7060(void) {
  LOAD_REGS();
L_6f7060: /* 6f7060: mov eax, ecx */
  eax = ecx;
/* 6f7062: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7080(void) {
  LOAD_REGS();
L_6f7080: /* 6f7080: mov eax, ecx */
  eax = ecx;
/* 6f7082: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f7086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7087: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6f7089: mov edx, eax */
  edx = eax;
/* 6f708b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6f708d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f7090: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6f7093: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 6f7096: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 6f7099: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6f709c: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 6f709f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f70a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f70c0(void) {
  LOAD_REGS();
L_6f70c0: /* 6f70c0: mov eax, ecx */
  eax = ecx;
/* 6f70c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f70c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f70c8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 6f70ca: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 6f70cd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6f70d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f70f0(void) {
  LOAD_REGS();
L_6f70f0: /* 6f70f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f70f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f70f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f70f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f70f8: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 6f70fc: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 6f70fe: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 6f7101: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f7102: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x6f7105u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7105: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7107: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6f710a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f710b: mov ecx, eax */
  ecx = eax;
/* 6f710d: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x6f7110u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7110: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7112: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f7115: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7116: mov ecx, eax */
  ecx = eax;
/* 6f7118: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x6f711bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f711b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f711c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f711d: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7130(void) {
  LOAD_REGS();
L_6f7130: /* 6f7130: mov eax, 0xcc8788 */
  eax = 0xcc8788u;
/* 6f7135: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7150(void) {
  LOAD_REGS();
L_6f7150: /* 6f7150: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f7155: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f7157: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f715b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f715f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7161: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7163: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7164: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f7168: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f716a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f716b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f716c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f716d: push 0xcc8788 */
  { uint32_t v = 0xcc8788u; esp -= 4; W32(esp, v); }
/* 6f7172: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f7178u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f7178: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f717b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7190(void) {
  LOAD_REGS();
L_6f7190: /* 6f7190: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f7194: ret  */
  esp += 4; SPILL(); return;
}

void f_6f71b0(void) {
  LOAD_REGS();
L_6f71b0: /* 6f71b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f71b2: push 0x9c1278 */
  { uint32_t v = 0x9c1278u; esp -= 4; W32(esp, v); }
/* 6f71b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f71bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f71be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f71c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f71c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f71c7: mov esi, ecx */
  esi = ecx;
/* 6f71c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f71cd: mov dword ptr [esi], 0x9f7238 */
  W32((uint32_t)(esi), 0x9f7238u);
/* 6f71d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f71db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f71e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f71e1: mov ecx, esi */
  ecx = esi;
/* 6f71e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f71eb: call 0x6c41ec */
  esp -= 4; W32(esp, 0x6f71f0u); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 6f71f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f71f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f71f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f71fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f71ff: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7220(void) {
  LOAD_REGS();
L_6f7220: /* 6f7220: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f7224: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7226: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f7229: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f722a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 6f722e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f722f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f7230: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6f7234: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f7235: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x6f7238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7238: mov ecx, eax */
  ecx = eax;
/* 6f723a: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x6f7240u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 6f7240: mov eax, esi */
  eax = esi;
/* 6f7242: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7243: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f7246: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7260(void) {
  LOAD_REGS();
L_6f7260: /* 6f7260: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f7264: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7266: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f7269: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f726a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 6f726e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f726f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f7270: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6f7274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f7275: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x6f7278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7278: mov ecx, eax */
  ecx = eax;
/* 6f727a: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x6f7280u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 6f7280: mov eax, esi */
  eax = esi;
/* 6f7282: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7283: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f7286: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f72a0(void) {
  LOAD_REGS();
L_6f72a0: /* 6f72a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f72a1: mov esi, ecx */
  esi = ecx;
/* 6f72a3: call 0x6cc93c */
  esp -= 4; W32(esp, 0x6f72a8u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 6f72a8: mov dword ptr [esi], 0x9f7238 */
  W32((uint32_t)(esi), 0x9f7238u);
/* 6f72ae: mov eax, esi */
  eax = esi;
/* 6f72b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f72b1: ret  */
  esp += 4; SPILL(); return;
}

void f_6f72d0(void) {
  LOAD_REGS();
L_6f72d0: /* 6f72d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f72d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f72d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f72d6: mov esi, ecx */
  esi = ecx;
/* 6f72d8: call 0x6c67fd */
  esp -= 4; W32(esp, 0x6f72ddu); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 6f72dd: mov dword ptr [esi], 0x9f7238 */
  W32((uint32_t)(esi), 0x9f7238u);
/* 6f72e3: mov eax, esi */
  eax = esi;
/* 6f72e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f72e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7300(void) {
  LOAD_REGS();
L_6f7300: /* 6f7300: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f7301: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f7302: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6f7306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7307: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7308: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f7309: mov ebx, ecx */
  ebx = ecx;
/* 6f730b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f7311u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f7311: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 6f7314: add ebp, 0x44 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 6f7317: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 6f731a: mov ecx, 7 */
  ecx = 0x7u;
/* 6f731f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f7321: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 6f7324: lea eax, [ebx + 0x44] */
  eax = (uint32_t)(ebx + 0x44u);
/* 6f7327: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f7329: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 6f732c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f732f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 6f7332: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f7333: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f7336: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 6f7339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f733a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f733d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f733e: mov eax, ebx */
  eax = ebx;
/* 6f7340: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f7341: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7370(void) {
  LOAD_REGS();
L_6f7370: /* 6f7370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7371: mov esi, ecx */
  esi = ecx;
/* 6f7373: call 0x6cce28 */
  esp -= 4; W32(esp, 0x6f7378u); SPILL(); f_6cce28(); if (g_unwind) return; RELOAD();
/* 6f7378: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f737d: je 0x6f738b */
  if (zf) goto L_6f738b;
L_6f737f: /* 6f737f: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6f7381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7382: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f7388u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f7388: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f738b: /* 6f738b: mov eax, esi */
  eax = esi;
/* 6f738d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f738e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f73b0(void) {
  LOAD_REGS();
L_6f73b0: /* 6f73b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f73b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f73b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f73b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f73b9: mov esi, ecx */
  esi = ecx;
/* 6f73bb: je 0x6f73ed */
  if (zf) goto L_6f73ed;
L_6f73bd: /* 6f73bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f73c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f73c1: push 0x6cce28 */
  { uint32_t v = 0x6cce28u; esp -= 4; W32(esp, v); }
/* 6f73c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f73c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f73ca: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6f73cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f73cd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f73d2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f73d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f73d5: je 0x6f73e5 */
  if (zf) goto L_6f73e5;
L_6f73d7: /* 6f73d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f73dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f73df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f73e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f73e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f73e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f73e5: /* 6f73e5: mov eax, edi */
  eax = edi;
/* 6f73e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f73e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f73e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f73ea: ret 4 */
  esp += 8; SPILL(); return;
L_6f73ed: /* 6f73ed: mov ecx, esi */
  ecx = esi;
/* 6f73ef: call 0x6cce28 */
  esp -= 4; W32(esp, 0x6f73f4u); SPILL(); f_6cce28(); if (g_unwind) return; RELOAD();
/* 6f73f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f73f7: je 0x6f7405 */
  if (zf) goto L_6f7405;
L_6f73f9: /* 6f73f9: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6f73fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f73fc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f7402u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f7402: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f7405: /* 6f7405: mov eax, esi */
  eax = esi;
/* 6f7407: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7408: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f7409: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7430(void) {
  LOAD_REGS();
L_6f7430: /* 6f7430: mov eax, 0xb90e50 */
  eax = 0xb90e50u;
/* 6f7435: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7450(void) {
  LOAD_REGS();
L_6f7450: /* 6f7450: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f7455: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f7457: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f745b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f745f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7461: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7463: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7464: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f7468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f746a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f746b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f746c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f746d: push 0xb90e50 */
  { uint32_t v = 0xb90e50u; esp -= 4; W32(esp, v); }
/* 6f7472: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f7478u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f7478: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f747b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7490(void) {
  LOAD_REGS();
L_6f7490: /* 6f7490: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f7494: ret  */
  esp += 4; SPILL(); return;
}

void f_6f74b0(void) {
  LOAD_REGS();
L_6f74b0: /* 6f74b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f74b4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f74b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f74ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f74bb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x6f74beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f74be: ret  */
  esp += 4; SPILL(); return;
}

void f_6f74d0(void) {
  LOAD_REGS();
L_6f74d0: /* 6f74d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f74d2: push 0x9c1298 */
  { uint32_t v = 0x9c1298u; esp -= 4; W32(esp, v); }
/* 6f74d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f74dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f74de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f74e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f74e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f74e7: mov esi, ecx */
  esi = ecx;
/* 6f74e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f74ed: mov dword ptr [esi], 0x9f72e0 */
  W32((uint32_t)(esi), 0x9f72e0u);
/* 6f74f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f74fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f7501u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f7501: mov ecx, esi */
  ecx = esi;
/* 6f7503: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f750b: call 0x6c41ec */
  esp -= 4; W32(esp, 0x6f7510u); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 6f7510: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f7514: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7515: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f751c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f751f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7540(void) {
  LOAD_REGS();
L_6f7540: /* 6f7540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7541: mov esi, ecx */
  esi = ecx;
/* 6f7543: call 0x6cc93c */
  esp -= 4; W32(esp, 0x6f7548u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 6f7548: mov dword ptr [esi], 0x9f72e0 */
  W32((uint32_t)(esi), 0x9f72e0u);
/* 6f754e: mov dword ptr [esi + 0x54], 0 */
  W32((uint32_t)(esi + 0x54u), 0x0u);
/* 6f7555: mov eax, esi */
  eax = esi;
/* 6f7557: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7558: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7570(void) {
  LOAD_REGS();
L_6f7570: /* 6f7570: xor eax, eax */
  eax = 0;
/* 6f7572: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7590(void) {
  LOAD_REGS();
L_6f7590: /* 6f7590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7592: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f7596: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7597: mov esi, ecx */
  esi = ecx;
/* 6f7599: call 0x6c67fd */
  esp -= 4; W32(esp, 0x6f759eu); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 6f759e: mov dword ptr [esi], 0x9f72e0 */
  W32((uint32_t)(esi), 0x9f72e0u);
/* 6f75a4: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6f75a7: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6f75aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f75ab: mov eax, esi */
  eax = esi;
/* 6f75ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f75ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f75d0(void) {
  LOAD_REGS();
L_6f75d0: /* 6f75d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f75d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f75d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6f75d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f75d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f75d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f75d9: mov ebx, ecx */
  ebx = ecx;
/* 6f75db: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f75e1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f75e1: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 6f75e4: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 6f75e7: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 6f75ea: mov ecx, 7 */
  ecx = 0x7u;
/* 6f75ef: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f75f1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f75f3: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 6f75f6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f75f8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f75fb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f75fe: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 6f7601: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f7604: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 6f7607: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f7608: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 6f760b: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6f760e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f760f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f7610: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6f7613: mov eax, ebx */
  eax = ebx;
/* 6f7615: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f7616: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7640(void) {
  LOAD_REGS();
L_6f7640: /* 6f7640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7641: mov esi, ecx */
  esi = ecx;
/* 6f7643: call 0x6c42fa */
  esp -= 4; W32(esp, 0x6f7648u); SPILL(); f_6c42fa(); if (g_unwind) return; RELOAD();
/* 6f7648: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f764d: je 0x6f765b */
  if (zf) goto L_6f765b;
L_6f764f: /* 6f764f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6f7651: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7652: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f7658u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f7658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f765b: /* 6f765b: mov eax, esi */
  eax = esi;
/* 6f765d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f765e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7680(void) {
  LOAD_REGS();
L_6f7680: /* 6f7680: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f7681: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f7685: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f7688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7689: mov esi, ecx */
  esi = ecx;
/* 6f768b: je 0x6f76bd */
  if (zf) goto L_6f76bd;
L_6f768d: /* 6f768d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f7690: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7691: push 0x6c42fa */
  { uint32_t v = 0x6c42fau; esp -= 4; W32(esp, v); }
/* 6f7696: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f7699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f769a: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6f769c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f769d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f76a2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f76a2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f76a5: je 0x6f76b5 */
  if (zf) goto L_6f76b5;
L_6f76a7: /* 6f76a7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f76ad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f76af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f76b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f76b2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f76b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f76b5: /* 6f76b5: mov eax, edi */
  eax = edi;
/* 6f76b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f76b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f76b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f76ba: ret 4 */
  esp += 8; SPILL(); return;
L_6f76bd: /* 6f76bd: mov ecx, esi */
  ecx = esi;
/* 6f76bf: call 0x6c42fa */
  esp -= 4; W32(esp, 0x6f76c4u); SPILL(); f_6c42fa(); if (g_unwind) return; RELOAD();
/* 6f76c4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f76c7: je 0x6f76d5 */
  if (zf) goto L_6f76d5;
L_6f76c9: /* 6f76c9: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6f76cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f76cc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f76d2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f76d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f76d5: /* 6f76d5: mov eax, esi */
  eax = esi;
/* 6f76d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f76d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f76d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7700(void) {
  LOAD_REGS();
L_6f7700: /* 6f7700: mov eax, 0xb90920 */
  eax = 0xb90920u;
/* 6f7705: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7720(void) {
  LOAD_REGS();
L_6f7720: /* 6f7720: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f7725: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f7727: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f772b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f772f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7731: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7734: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f7738: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f773a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f773b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f773c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f773d: push 0xb90920 */
  { uint32_t v = 0xb90920u; esp -= 4; W32(esp, v); }
/* 6f7742: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f7748u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f7748: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f774b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7760(void) {
  LOAD_REGS();
L_6f7760: /* 6f7760: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f7764: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7780(void) {
  LOAD_REGS();
L_6f7780: /* 6f7780: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f7784: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f7788: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f778a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f778b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x6f778eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f778e: ret  */
  esp += 4; SPILL(); return;
}

void f_6f77a0(void) {
  LOAD_REGS();
L_6f77a0: /* 6f77a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f77a2: push 0x9c12b8 */
  { uint32_t v = 0x9c12b8u; esp -= 4; W32(esp, v); }
/* 6f77a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f77ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f77ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f77b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f77b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f77b7: mov esi, ecx */
  esi = ecx;
/* 6f77b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f77bd: mov dword ptr [esi], 0x9f7398 */
  W32((uint32_t)(esi), 0x9f7398u);
/* 6f77c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f77cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f77d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f77d1: mov ecx, esi */
  ecx = esi;
/* 6f77d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f77db: call 0x6c41ec */
  esp -= 4; W32(esp, 0x6f77e0u); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 6f77e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f77e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f77e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f77ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f77ef: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7810(void) {
  LOAD_REGS();
L_6f7810: /* 6f7810: xor eax, eax */
  eax = 0;
/* 6f7812: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7830(void) {
  LOAD_REGS();
L_6f7830: /* 6f7830: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7850(void) {
  LOAD_REGS();
L_6f7850: /* 6f7850: xor eax, eax */
  eax = 0;
/* 6f7852: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7870(void) {
  LOAD_REGS();
L_6f7870: /* 6f7870: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7890(void) {
  LOAD_REGS();
L_6f7890: /* 6f7890: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f78b0(void) {
  LOAD_REGS();
L_6f78b0: /* 6f78b0: xor eax, eax */
  eax = 0;
/* 6f78b2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f78d0(void) {
  LOAD_REGS();
L_6f78d0: /* 6f78d0: xor eax, eax */
  eax = 0;
/* 6f78d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f78f0(void) {
  LOAD_REGS();
L_6f78f0: /* 6f78f0: xor eax, eax */
  eax = 0;
/* 6f78f2: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_6f7910(void) {
  LOAD_REGS();
L_6f7910: /* 6f7910: xor eax, eax */
  eax = 0;
/* 6f7912: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7930(void) {
  LOAD_REGS();
L_6f7930: /* 6f7930: xor eax, eax */
  eax = 0;
/* 6f7932: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7950(void) {
  LOAD_REGS();
L_6f7950: /* 6f7950: xor eax, eax */
  eax = 0;
/* 6f7952: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7970(void) {
  LOAD_REGS();
L_6f7970: /* 6f7970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7971: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f7975: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7977: mov ecx, esi */
  ecx = esi;
/* 6f7979: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6f797fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6f797f: mov eax, esi */
  eax = esi;
/* 6f7981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7982: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f79a0(void) {
  LOAD_REGS();
L_6f79a0: /* 6f79a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f79a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f79a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f79a7: mov ecx, esi */
  ecx = esi;
/* 6f79a9: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6f79afu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6f79af: mov eax, esi */
  eax = esi;
/* 6f79b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f79b2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f79d0(void) {
  LOAD_REGS();
L_6f79d0: /* 6f79d0: xor eax, eax */
  eax = 0;
/* 6f79d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f79f0(void) {
  LOAD_REGS();
L_6f79f0: /* 6f79f0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 6f79f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7a10(void) {
  LOAD_REGS();
L_6f7a10: /* 6f7a10: fld dword ptr [0x9f74fc] */
  { double v = F32((uint32_t)(0x9f74fcu)); FPUSH(v); }
/* 6f7a16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7a30(void) {
  LOAD_REGS();
L_6f7a30: /* 6f7a30: xor eax, eax */
  eax = 0;
/* 6f7a32: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7a50(void) {
  LOAD_REGS();
L_6f7a50: /* 6f7a50: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 6f7a56: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7a70(void) {
  LOAD_REGS();
L_6f7a70: /* 6f7a70: mov eax, 0xb08944 */
  eax = 0xb08944u;
/* 6f7a75: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7a90(void) {
  LOAD_REGS();
L_6f7a90: /* 6f7a90: xor eax, eax */
  eax = 0;
/* 6f7a92: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7ab0(void) {
  LOAD_REGS();
L_6f7ab0: /* 6f7ab0: xor eax, eax */
  eax = 0;
/* 6f7ab2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7ad0(void) {
  LOAD_REGS();
L_6f7ad0: /* 6f7ad0: xor eax, eax */
  eax = 0;
/* 6f7ad2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7af0(void) {
  LOAD_REGS();
L_6f7af0: /* 6f7af0: xor eax, eax */
  eax = 0;
/* 6f7af2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7b10(void) {
  LOAD_REGS();
L_6f7b10: /* 6f7b10: xor eax, eax */
  eax = 0;
/* 6f7b12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7b30(void) {
  LOAD_REGS();
L_6f7b30: /* 6f7b30: xor eax, eax */
  eax = 0;
/* 6f7b32: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7b50(void) {
  LOAD_REGS();
L_6f7b50: /* 6f7b50: xor eax, eax */
  eax = 0;
/* 6f7b52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7b70(void) {
  LOAD_REGS();
L_6f7b70: /* 6f7b70: xor eax, eax */
  eax = 0;
/* 6f7b72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7b90(void) {
  LOAD_REGS();
L_6f7b90: /* 6f7b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7b91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f7b95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f7b97: mov ecx, esi */
  ecx = esi;
/* 6f7b99: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6f7b9fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6f7b9f: mov eax, esi */
  eax = esi;
/* 6f7ba1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7ba2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7bc0(void) {
  LOAD_REGS();
L_6f7bc0: /* 6f7bc0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 6f7bc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7be0(void) {
  LOAD_REGS();
L_6f7be0: /* 6f7be0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 6f7be6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7c00(void) {
  LOAD_REGS();
L_6f7c00: /* 6f7c00: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6f7c20(void) {
  LOAD_REGS();
L_6f7c20: /* 6f7c20: xor eax, eax */
  eax = 0;
/* 6f7c22: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6f7c40(void) {
  LOAD_REGS();
L_6f7c40: /* 6f7c40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7c42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7c43: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x6f7c49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7c49: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 6f7c4d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 6f7c51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7c52: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7c54: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f7c57: mov ecx, esp */
  ecx = esp;
/* 6f7c59: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 6f7c5b: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 6f7c5f: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 6f7c62: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 6f7c66: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 6f7c69: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 6f7c6d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f7c70: mov ecx, esp */
  ecx = esp;
/* 6f7c72: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 6f7c74: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 6f7c78: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 6f7c7b: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 6f7c7f: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 6f7c82: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 6f7c86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7c87: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 6f7c8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7c8c: mov ecx, eax */
  ecx = eax;
/* 6f7c8e: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x6f7c91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7c91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7c92: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_6f7cc0(void) {
  LOAD_REGS();
L_6f7cc0: /* 6f7cc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7cc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7cc3: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x6f7cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7cc9: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 6f7ccd: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 6f7cd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7cd2: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 6f7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7cd7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f7cda: mov ecx, esp */
  ecx = esp;
/* 6f7cdc: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 6f7cde: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 6f7ce2: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 6f7ce5: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 6f7ce9: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 6f7cec: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 6f7cf0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7cf2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f7cf5: mov ecx, esp */
  ecx = esp;
/* 6f7cf7: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 6f7cf9: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 6f7cfd: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 6f7d00: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 6f7d04: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 6f7d07: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 6f7d0b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f7d0e: mov ecx, esp */
  ecx = esp;
/* 6f7d10: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 6f7d12: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 6f7d16: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 6f7d19: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 6f7d1d: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 6f7d20: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 6f7d24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7d25: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 6f7d29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7d2a: mov ecx, eax */
  ecx = eax;
/* 6f7d2c: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x6f7d2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7d2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7d30: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_6f7d60(void) {
  LOAD_REGS();
L_6f7d60: /* 6f7d60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7d63: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x6f7d69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7d69: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f7d6d: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f7d71: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7d73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7d74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7d75: mov ecx, eax */
  ecx = eax;
/* 6f7d77: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x6f7d7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7d7a: mov eax, esi */
  eax = esi;
/* 6f7d7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7d7d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7d90(void) {
  LOAD_REGS();
L_6f7d90: /* 6f7d90: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7d92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7d93: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x6f7d99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7d99: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f7d9d: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f7da1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7da3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7da4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7da5: mov ecx, eax */
  ecx = eax;
/* 6f7da7: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x6f7daau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7daa: mov eax, esi */
  eax = esi;
/* 6f7dac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7dad: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7dc0(void) {
  LOAD_REGS();
L_6f7dc0: /* 6f7dc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f7dc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7dc3: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x6f7dc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7dc9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f7dcd: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f7dd1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f7dd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7dd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7dd5: mov ecx, eax */
  ecx = eax;
/* 6f7dd7: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x6f7ddau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f7dda: mov eax, esi */
  eax = esi;
/* 6f7ddc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7ddd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7df0(void) {
  LOAD_REGS();
L_6f7df0: /* 6f7df0: xor eax, eax */
  eax = 0;
/* 6f7df2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f7e10(void) {
  LOAD_REGS();
L_6f7e10: /* 6f7e10: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_6f7e30(void) {
  LOAD_REGS();
L_6f7e30: /* 6f7e30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f7e31: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f7e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7e36: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 6f7e3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7e3d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f7e42: mov edi, eax */
  edi = eax;
/* 6f7e44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f7e46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f7e47: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 6f7e4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7e50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6f7e51: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7e70(void) {
  LOAD_REGS();
L_6f7e70: /* 6f7e70: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_6f7e90(void) {
  LOAD_REGS();
L_6f7e90: /* 6f7e90: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6f7eb0(void) {
  LOAD_REGS();
L_6f7eb0: /* 6f7eb0: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7ed0(void) {
  LOAD_REGS();
L_6f7ed0: /* 6f7ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7ed1: mov esi, ecx */
  esi = ecx;
/* 6f7ed3: call 0x6cc93c */
  esp -= 4; W32(esp, 0x6f7ed8u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 6f7ed8: mov dword ptr [esi], 0x9f7398 */
  W32((uint32_t)(esi), 0x9f7398u);
/* 6f7ede: mov eax, esi */
  eax = esi;
/* 6f7ee0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7ee1: ret  */
  esp += 4; SPILL(); return;
}

void f_6f7f00(void) {
  LOAD_REGS();
L_6f7f00: /* 6f7f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f7f04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7f05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f7f06: mov esi, ecx */
  esi = ecx;
/* 6f7f08: call 0x6c67fd */
  esp -= 4; W32(esp, 0x6f7f0du); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 6f7f0d: mov dword ptr [esi], 0x9f7398 */
  W32((uint32_t)(esi), 0x9f7398u);
/* 6f7f13: mov eax, esi */
  eax = esi;
/* 6f7f15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7f16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7f30(void) {
  LOAD_REGS();
L_6f7f30: /* 6f7f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f7f31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f7f32: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6f7f36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7f37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7f38: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f7f39: mov ebx, ecx */
  ebx = ecx;
/* 6f7f3b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f7f41u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f7f41: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 6f7f44: add ebp, 0x44 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 6f7f47: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 6f7f4a: mov ecx, 7 */
  ecx = 0x7u;
/* 6f7f4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f7f51: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 6f7f54: lea eax, [ebx + 0x44] */
  eax = (uint32_t)(ebx + 0x44u);
/* 6f7f57: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f7f59: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 6f7f5c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f7f5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 6f7f62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f7f63: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f7f66: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 6f7f69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7f6a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6f7f6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f7f6e: mov eax, ebx */
  eax = ebx;
/* 6f7f70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f7f71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7fa0(void) {
  LOAD_REGS();
L_6f7fa0: /* 6f7fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7fa1: mov esi, ecx */
  esi = ecx;
/* 6f7fa3: call 0x6c2cca */
  esp -= 4; W32(esp, 0x6f7fa8u); SPILL(); f_6c2cca(); if (g_unwind) return; RELOAD();
/* 6f7fa8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f7fad: je 0x6f7fbb */
  if (zf) goto L_6f7fbb;
L_6f7faf: /* 6f7faf: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6f7fb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7fb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f7fb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f7fb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f7fbb: /* 6f7fbb: mov eax, esi */
  eax = esi;
/* 6f7fbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f7fbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f7fe0(void) {
  LOAD_REGS();
L_6f7fe0: /* 6f7fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f7fe1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f7fe5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f7fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7fe9: mov esi, ecx */
  esi = ecx;
/* 6f7feb: je 0x6f801d */
  if (zf) goto L_6f801d;
L_6f7fed: /* 6f7fed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f7ff0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f7ff1: push 0x6c2cca */
  { uint32_t v = 0x6c2ccau; esp -= 4; W32(esp, v); }
/* 6f7ff6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f7ff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f7ffa: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6f7ffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f7ffd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f8002u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f8002: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f8005: je 0x6f8015 */
  if (zf) goto L_6f8015;
L_6f8007: /* 6f8007: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f800d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f800f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f8011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8012: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f8015u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f8015: /* 6f8015: mov eax, edi */
  eax = edi;
/* 6f8017: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8018: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8019: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f801a: ret 4 */
  esp += 8; SPILL(); return;
L_6f801d: /* 6f801d: mov ecx, esi */
  ecx = esi;
/* 6f801f: call 0x6c2cca */
  esp -= 4; W32(esp, 0x6f8024u); SPILL(); f_6c2cca(); if (g_unwind) return; RELOAD();
/* 6f8024: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f8027: je 0x6f8035 */
  if (zf) goto L_6f8035;
L_6f8029: /* 6f8029: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6f802b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f802c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f8032u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f8032: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f8035: /* 6f8035: mov eax, esi */
  eax = esi;
/* 6f8037: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8038: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f8039: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8060(void) {
  LOAD_REGS();
L_6f8060: /* 6f8060: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6f8064: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f8065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8066: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6f806c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f806d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6f8071: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 6f8074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8075: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 6f8078: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8079: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f807a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f807b: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 6f807e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8080u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8080: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8084: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8086u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8086: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8089: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f808a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f808cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f808c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f808f: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 6f8092: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8093: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f8096: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8097: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 6f809a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f809b: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 6f809e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f809f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f80a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f80a1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f80a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f80a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f80a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f80a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f80a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f80a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f80ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f80ad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f80afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f80af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f80b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f80b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f80b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f80b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f80b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f80b9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f80bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f80bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f80be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f80bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f80c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f80c1: ret  */
  esp += 4; SPILL(); return;
}

void f_6f80f0(void) {
  LOAD_REGS();
L_6f80f0: /* 6f80f0: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 6f80f3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 6f80f6: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8110(void) {
  LOAD_REGS();
L_6f8110: /* 6f8110: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 6f8113: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8130(void) {
  LOAD_REGS();
L_6f8130: /* 6f8130: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f8132: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x6f8135u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8135: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6f8138: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8150(void) {
  LOAD_REGS();
L_6f8150: /* 6f8150: mov eax, 0x20 */
  eax = 0x20u;
/* 6f8155: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8170(void) {
  LOAD_REGS();
L_6f8170: /* 6f8170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f8174: mov ecx, 1 */
  ecx = 0x1u;
/* 6f8179: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f817b: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 6f8182: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f8185: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f8188: mov dword ptr [eax + 0x10], 2 */
  W32((uint32_t)(eax + 0x10u), 0x2u);
/* 6f818f: mov dword ptr [eax + 0x14], 4 */
  W32((uint32_t)(eax + 0x14u), 0x4u);
/* 6f8196: mov eax, 3 */
  eax = 0x3u;
/* 6f819b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f81b0(void) {
  LOAD_REGS();
L_6f81b0: /* 6f81b0: mov eax, ecx */
  eax = ecx;
/* 6f81b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f81b6: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 6f81b9: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 6f81bc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f81bf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f81c2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f81c5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f81c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f81e0(void) {
  LOAD_REGS();
L_6f81e0: /* 6f81e0: mov eax, ecx */
  eax = ecx;
/* 6f81e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f81e6: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 6f81e9: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 6f81ec: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 6f81f0: mov word ptr [eax + 2], dx */
  W16((uint32_t)(eax + 0x2u), (edx & 0xffffu));
/* 6f81f4: mov dx, word ptr [ecx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 6f81f8: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 6f81fc: mov cx, word ptr [ecx + 6] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 6f8200: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
/* 6f8204: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8220(void) {
  LOAD_REGS();
L_6f8220: /* 6f8220: mov eax, 0xb85470 */
  eax = 0xb85470u;
/* 6f8225: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8240(void) {
  LOAD_REGS();
L_6f8240: /* 6f8240: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f8245: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f8247: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f824b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f824f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f8251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f8253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8254: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f8258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f825a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f825b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f825c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f825d: push 0xb85470 */
  { uint32_t v = 0xb85470u; esp -= 4; W32(esp, v); }
/* 6f8262: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f8268u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f8268: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f826b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8280(void) {
  LOAD_REGS();
L_6f8280: /* 6f8280: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f8284: ret  */
  esp += 4; SPILL(); return;
}

void f_6f82a0(void) {
  LOAD_REGS();
L_6f82a0: /* 6f82a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f82a2: push 0x9c12d8 */
  { uint32_t v = 0x9c12d8u; esp -= 4; W32(esp, v); }
/* 6f82a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f82ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f82ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f82b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f82b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f82b7: mov esi, ecx */
  esi = ecx;
/* 6f82b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f82bd: mov dword ptr [esi], 0x9f7500 */
  W32((uint32_t)(esi), 0x9f7500u);
/* 6f82c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f82cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f82d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f82d1: mov ecx, esi */
  ecx = esi;
/* 6f82d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f82db: call 0x6c2cca */
  esp -= 4; W32(esp, 0x6f82e0u); SPILL(); f_6c2cca(); if (g_unwind) return; RELOAD();
/* 6f82e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f82e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f82e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f82ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f82ef: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8310(void) {
  LOAD_REGS();
L_6f8310: /* 6f8310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8311: mov esi, ecx */
  esi = ecx;
/* 6f8313: call 0x6cc93c */
  esp -= 4; W32(esp, 0x6f8318u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 6f8318: mov dword ptr [esi], 0x9f7500 */
  W32((uint32_t)(esi), 0x9f7500u);
/* 6f831e: mov eax, esi */
  eax = esi;
/* 6f8320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8321: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8340(void) {
  LOAD_REGS();
L_6f8340: /* 6f8340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f8344: mov dword ptr [ecx + 0x5c], eax */
  W32((uint32_t)(ecx + 0x5cu), eax);
/* 6f8347: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8360(void) {
  LOAD_REGS();
L_6f8360: /* 6f8360: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 6f8363: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8380(void) {
  LOAD_REGS();
L_6f8380: /* 6f8380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f8384: mov dword ptr [ecx + 0x54], eax */
  W32((uint32_t)(ecx + 0x54u), eax);
/* 6f8387: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f83a0(void) {
  LOAD_REGS();
L_6f83a0: /* 6f83a0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 6f83a3: ret  */
  esp += 4; SPILL(); return;
}

void f_6f83c0(void) {
  LOAD_REGS();
L_6f83c0: /* 6f83c0: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* 6f83c3: ret  */
  esp += 4; SPILL(); return;
}

void f_6f83e0(void) {
  LOAD_REGS();
L_6f83e0: /* 6f83e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f83e4: mov dword ptr [ecx + 0x58], eax */
  W32((uint32_t)(ecx + 0x58u), eax);
/* 6f83e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8400(void) {
  LOAD_REGS();
L_6f8400: /* 6f8400: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_6f8420(void) {
  LOAD_REGS();
L_6f8420: /* 6f8420: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6f8440(void) {
  LOAD_REGS();
L_6f8440: /* 6f8440: xor eax, eax */
  eax = 0;
/* 6f8442: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8460(void) {
  LOAD_REGS();
L_6f8460: /* 6f8460: xor eax, eax */
  eax = 0;
/* 6f8462: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6f8480(void) {
  LOAD_REGS();
L_6f8480: /* 6f8480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8481: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8482: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f8486: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8487: mov esi, ecx */
  esi = ecx;
/* 6f8489: call 0x6c67fd */
  esp -= 4; W32(esp, 0x6f848eu); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 6f848e: mov dword ptr [esi], 0x9f7500 */
  W32((uint32_t)(esi), 0x9f7500u);
/* 6f8494: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6f8497: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6f849a: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 6f849d: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 6f84a0: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6f84a3: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6f84a6: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 6f84a9: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 6f84ac: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 6f84af: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 6f84b2: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 6f84b5: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* 6f84b8: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 6f84bb: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 6f84be: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 6f84c1: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 6f84c4: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* 6f84c7: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* 6f84ca: mov eax, dword ptr [edi + 0x78] */
  eax = R32((uint32_t)(edi + 0x78u));
/* 6f84cd: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 6f84d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f84d1: mov eax, esi */
  eax = esi;
/* 6f84d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f84d4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8500(void) {
  LOAD_REGS();
L_6f8500: /* 6f8500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f8501: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f8502: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6f8506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8508: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f8509: mov ebx, ecx */
  ebx = ecx;
/* 6f850b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f8511u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f8511: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 6f8514: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 6f8517: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 6f851a: mov ecx, 7 */
  ecx = 0x7u;
/* 6f851f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f8521: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f8523: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 6f8526: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f8528: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f852b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f852e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 6f8531: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f8534: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 6f8537: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 6f853a: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6f853d: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6f8540: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 6f8543: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 6f8546: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 6f8549: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* 6f854c: mov ecx, dword ptr [ebp + 0x60] */
  ecx = R32((uint32_t)(ebp + 0x60u));
/* 6f854f: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* 6f8552: mov edx, dword ptr [ebp + 0x64] */
  edx = R32((uint32_t)(ebp + 0x64u));
/* 6f8555: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* 6f8558: mov eax, dword ptr [ebp + 0x68] */
  eax = R32((uint32_t)(ebp + 0x68u));
/* 6f855b: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* 6f855e: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 6f8561: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 6f8564: mov edx, dword ptr [ebp + 0x70] */
  edx = R32((uint32_t)(ebp + 0x70u));
/* 6f8567: mov dword ptr [ebx + 0x70], edx */
  W32((uint32_t)(ebx + 0x70u), edx);
/* 6f856a: mov eax, dword ptr [ebp + 0x74] */
  eax = R32((uint32_t)(ebp + 0x74u));
/* 6f856d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f856e: mov dword ptr [ebx + 0x74], eax */
  W32((uint32_t)(ebx + 0x74u), eax);
/* 6f8571: mov ecx, dword ptr [ebp + 0x78] */
  ecx = R32((uint32_t)(ebp + 0x78u));
/* 6f8574: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8575: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f8576: mov dword ptr [ebx + 0x78], ecx */
  W32((uint32_t)(ebx + 0x78u), ecx);
/* 6f8579: mov eax, ebx */
  eax = ebx;
/* 6f857b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f857c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f85a0(void) {
  LOAD_REGS();
L_6f85a0: /* 6f85a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f85a1: mov esi, ecx */
  esi = ecx;
/* 6f85a3: call 0x6ccc84 */
  esp -= 4; W32(esp, 0x6f85a8u); SPILL(); f_6ccc84(); if (g_unwind) return; RELOAD();
/* 6f85a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f85ad: je 0x6f85bb */
  if (zf) goto L_6f85bb;
L_6f85af: /* 6f85af: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 6f85b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f85b2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f85b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f85b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f85bb: /* 6f85bb: mov eax, esi */
  eax = esi;
/* 6f85bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f85be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f85e0(void) {
  LOAD_REGS();
L_6f85e0: /* 6f85e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f85e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f85e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f85e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f85e9: mov esi, ecx */
  esi = ecx;
/* 6f85eb: je 0x6f861d */
  if (zf) goto L_6f861d;
L_6f85ed: /* 6f85ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f85f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f85f1: push 0x6ccc84 */
  { uint32_t v = 0x6ccc84u; esp -= 4; W32(esp, v); }
/* 6f85f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f85f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f85fa: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 6f85fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f85fd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f8602u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f8602: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f8605: je 0x6f8615 */
  if (zf) goto L_6f8615;
L_6f8607: /* 6f8607: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f860d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f860f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f8611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8612: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f8615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f8615: /* 6f8615: mov eax, edi */
  eax = edi;
/* 6f8617: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8618: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8619: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f861a: ret 4 */
  esp += 8; SPILL(); return;
L_6f861d: /* 6f861d: mov ecx, esi */
  ecx = esi;
/* 6f861f: call 0x6ccc84 */
  esp -= 4; W32(esp, 0x6f8624u); SPILL(); f_6ccc84(); if (g_unwind) return; RELOAD();
/* 6f8624: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f8627: je 0x6f8635 */
  if (zf) goto L_6f8635;
L_6f8629: /* 6f8629: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 6f862b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f862c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f8632u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f8632: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f8635: /* 6f8635: mov eax, esi */
  eax = esi;
/* 6f8637: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8638: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f8639: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8660(void) {
  LOAD_REGS();
L_6f8660: /* 6f8660: mov eax, 0xb859a0 */
  eax = 0xb859a0u;
/* 6f8665: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8680(void) {
  LOAD_REGS();
L_6f8680: /* 6f8680: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f8685: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f8687: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f868b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f868f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f8691: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f8693: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8694: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f8698: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f869a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f869b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f869c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f869d: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 6f86a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f86a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f86a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f86ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6f86c0(void) {
  LOAD_REGS();
L_6f86c0: /* 6f86c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f86c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f86e0(void) {
  LOAD_REGS();
L_6f86e0: /* 6f86e0: mov eax, 0xb85470 */
  eax = 0xb85470u;
/* 6f86e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8700(void) {
  LOAD_REGS();
L_6f8700: /* 6f8700: xor eax, eax */
  eax = 0;
/* 6f8702: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8720(void) {
  LOAD_REGS();
L_6f8720: /* 6f8720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8721: mov esi, ecx */
  esi = ecx;
/* 6f8723: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6f8726: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6f872cu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6f872c: mov eax, esi */
  eax = esi;
/* 6f872e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f872f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8740(void) {
  LOAD_REGS();
L_6f8740: /* 6f8740: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f8743: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8744: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 6f8748: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8749: mov ecx, esi */
  ecx = esi;
/* 6f874b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x6f8751u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 6f8751: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f8753: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 6f8759: je 0x6f879c */
  if (zf) goto L_6f879c;
L_6f875b: /* 6f875b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 6f875f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8761: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f8763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8763: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6f8767: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8769: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f876bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f876b: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 6f876f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f8770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8771: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f8773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8773: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 6f8777: mov cx, word ptr [esp + 0x20] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x20u))) & 0xffffu);
/* 6f877c: mov dx, word ptr [esp + 0x24] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x24u))) & 0xffffu);
/* 6f8781: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 6f8784: mov cx, word ptr [esp + 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 6f8789: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f878c: mov word ptr [eax + 2], dx */
  W16((uint32_t)(eax + 0x2u), (edx & 0xffffu));
/* 6f8790: mov word ptr [eax + 4], cx */
  W16((uint32_t)(eax + 0x4u), (ecx & 0xffffu));
/* 6f8794: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8795: mov eax, esi */
  eax = esi;
/* 6f8797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8798: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f879b: ret  */
  esp += 4; SPILL(); return;
L_6f879c: /* 6f879c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 6f87a0: xor edx, edx */
  edx = 0;
/* 6f87a2: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 6f87a5: xor ecx, ecx */
  ecx = 0;
/* 6f87a7: mov cx, word ptr [eax + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 6f87ab: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 6f87af: xor edx, edx */
  edx = 0;
/* 6f87b1: mov dx, word ptr [eax + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 6f87b5: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 6f87b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f87bb: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 6f87bf: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 6f87c3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f87c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f87c5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6f87c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f87ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f87cb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f87cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f87cd: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 6f87d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f87d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f87d3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f87d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f87d5: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f87d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f87d9: mov eax, esi */
  eax = esi;
/* 6f87db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f87dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f87df: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8810(void) {
  LOAD_REGS();
L_6f8810: /* 6f8810: mov eax, ecx */
  eax = ecx;
/* 6f8812: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8830(void) {
  LOAD_REGS();
L_6f8830: /* 6f8830: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 6f8833: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 6f8836: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8850(void) {
  LOAD_REGS();
L_6f8850: /* 6f8850: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 6f8853: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8870(void) {
  LOAD_REGS();
L_6f8870: /* 6f8870: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f8874: mov ecx, 1 */
  ecx = 0x1u;
/* 6f8879: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f887b: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 6f8882: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f8885: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6f8888: mov dword ptr [eax + 0x10], 2 */
  W32((uint32_t)(eax + 0x10u), 0x2u);
/* 6f888f: mov dword ptr [eax + 0x14], 4 */
  W32((uint32_t)(eax + 0x14u), 0x4u);
/* 6f8896: mov eax, 3 */
  eax = 0x3u;
/* 6f889b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f88b0(void) {
  LOAD_REGS();
L_6f88b0: /* 6f88b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f88b1: mov esi, ecx */
  esi = ecx;
/* 6f88b3: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6f88b9u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6f88b9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 6f88bc: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6f88c2u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6f88c2: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 6f88c5: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6f88cbu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6f88cb: mov eax, esi */
  eax = esi;
/* 6f88cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f88ce: ret  */
  esp += 4; SPILL(); return;
}

void f_6f88e0(void) {
  LOAD_REGS();
L_6f88e0: /* 6f88e0: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8900(void) {
  LOAD_REGS();
L_6f8900: /* 6f8900: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 6f8902: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 6f8905: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 6f8908: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 6f890a: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 6f890c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 6f890e: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 6f8914: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 6f8916: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 6f8918: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 6f891a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 6f891c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 6f891e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 6f8920: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 6f8922: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6f8924: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 6f892a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 6f892c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f892f: jne 0x6f8935 */
  if (!zf) goto L_6f8935;
L_6f8931: /* 6f8931: fsqrt  */
  ST0 = sqrt(ST0);
/* 6f8933: jmp 0x6f893d */
  goto L_6f893d;
L_6f8935: /* 6f8935: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6f8937: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
L_6f893d: /* 6f893d: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 6f8940: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6f8943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8944: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f8948: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8949: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 6f894c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f894d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f894f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8951: mov ecx, esi */
  ecx = esi;
/* 6f8953: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x6f8959u); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 6f8959: mov eax, esi */
  eax = esi;
/* 6f895b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f895c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8980(void) {
  LOAD_REGS();
L_6f8980: /* 6f8980: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f8984: mov eax, ecx */
  eax = ecx;
/* 6f8986: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f898a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6f898c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6f8990: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6f8993: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6f8996: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6f89b0(void) {
  LOAD_REGS();
L_6f89b0: /* 6f89b0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6f89b4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f89b8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f89bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f89bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f89bd: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 6f89c1: mov esi, ecx */
  esi = ecx;
/* 6f89c3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 6f89c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f89c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f89c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f89ca: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 6f89ce: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x6f89d4u); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 6f89d4: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 6f89d8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 6f89de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 6f89e0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 6f89e3: jp 0x6f8a0d */
  if (pf) goto L_6f8a0d;
L_6f89e5: /* 6f89e5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 6f89e9: fchs  */
  ST0 = -ST0;
/* 6f89eb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 6f89ef: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 6f89f3: fchs  */
  ST0 = -ST0;
/* 6f89f5: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 6f89f9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6f89fd: fchs  */
  ST0 = -ST0;
/* 6f89ff: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 6f8a03: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 6f8a07: fchs  */
  ST0 = -ST0;
/* 6f8a09: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_6f8a0d: /* 6f8a0d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6f8a11: call dword ptr [0xcfa35c] */
  esp -= 4; W32(esp, 0x6f8a17u); SPILL(); f_4e39c7(); if (g_unwind) return; /* Core!?Normalize@FQuat@@QAEHXZ */ RELOAD();
/* 6f8a17: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 6f8a1b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 6f8a1f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6f8a23: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 6f8a27: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 6f8a2b: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6f8a2f: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 6f8a33: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f8a37: mov ecx, esi */
  ecx = esi;
/* 6f8a39: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f8a3b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 6f8a3f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 6f8a42: mov eax, esi */
  eax = esi;
/* 6f8a44: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f8a47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8a48: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8a4b: ret 0x10 */
  esp += 20; SPILL(); return;
}
