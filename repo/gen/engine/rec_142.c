#include "recomp.h"
#include "rec_mod.h"

void f_979cf0(void) {
  LOAD_REGS();
L_979cf0: /* 979cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979cf1: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 979cf3: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x979cf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 979cf9: mov esi, eax */
  esi = eax;
/* 979cfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979cfc: call 0x979d20 */
  esp -= 4; W32(esp, 0x979d01u); SPILL(); f_979d20(); if (g_unwind) return; RELOAD();
/* 979d01: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 979d05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979d06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979d07: call 0x97da00 */
  esp -= 4; W32(esp, 0x979d0cu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 979d0c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 979d10: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 979d13: mov eax, esi */
  eax = esi;
/* 979d15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979d16: ret 8 */
  esp += 12; SPILL(); return;
}

void f_979d20(void) {
  LOAD_REGS();
L_979d20: /* 979d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979d24: xor ecx, ecx */
  ecx = 0;
/* 979d26: mov edx, 0x3ecccccd */
  edx = 0x3ecccccdu;
/* 979d2b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 979d2d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 979d30: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 979d33: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 979d36: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 979d39: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 979d3c: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 979d3f: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 979d42: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 979d45: mov dword ptr [eax + 0x48], 0x3f800000 */
  W32((uint32_t)(eax + 0x48u), 0x3f800000u);
/* 979d4c: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 979d4f: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
/* 979d52: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 979d55: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 979d58: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 979d5b: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* 979d5e: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 979d61: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 979d64: mov dword ptr [eax + 0x1c], 0x3f800000 */
  W32((uint32_t)(eax + 0x1cu), 0x3f800000u);
/* 979d6b: mov dword ptr [eax + 0x20], 0x3f800000 */
  W32((uint32_t)(eax + 0x20u), 0x3f800000u);
/* 979d72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979d80(void) {
  LOAD_REGS();
L_979d80: /* 979d80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979d81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979d82: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 979d84: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x979d8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 979d8a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 979d8e: mov esi, eax */
  esi = eax;
/* 979d90: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 979d92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979d93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979d94: call 0x97da00 */
  esp -= 4; W32(esp, 0x979d99u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 979d99: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 979d9c: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 979d9f: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 979da2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979da3: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 979da6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979da7: call 0x97da00 */
  esp -= 4; W32(esp, 0x979dacu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 979dac: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 979daf: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 979db2: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 979db5: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 979db8: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 979dbb: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 979dbe: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 979dc1: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 979dc4: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 979dc7: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 979dca: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 979dcd: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 979dd0: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 979dd3: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 979dd6: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 979dd9: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 979ddc: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 979ddf: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 979de2: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 979de5: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 979de8: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 979deb: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 979dee: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 979df1: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 979df4: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 979df7: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 979dfa: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 979dfd: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 979e00: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 979e03: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 979e06: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 979e09: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 979e0c: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 979e0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 979e10: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 979e13: mov eax, esi */
  eax = esi;
/* 979e15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979e16: ret 8 */
  esp += 12; SPILL(); return;
}

void f_979e20(void) {
  LOAD_REGS();
L_979e20: /* 979e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979e21: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 979e25: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 979e28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 979e29: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 979e2d: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 979e30: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 979e34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 979e36: je 0x979e45 */
  if (zf) goto L_979e45;
L_979e38: /* 979e38: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 979e3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979e3c: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 979e3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979e40: call 0x97da00 */
  esp -= 4; W32(esp, 0x979e45u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_979e45: /* 979e45: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 979e48: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 979e4b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 979e4e: mov dword ptr [edi + 0x14], ecx */
  W32((uint32_t)(edi + 0x14u), ecx);
/* 979e51: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 979e54: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 979e57: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 979e5a: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 979e5d: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 979e60: mov dword ptr [edi + 0x3c], ecx */
  W32((uint32_t)(edi + 0x3cu), ecx);
/* 979e63: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 979e66: mov dword ptr [edi + 0x44], edx */
  W32((uint32_t)(edi + 0x44u), edx);
/* 979e69: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 979e6c: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* 979e6f: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 979e72: mov dword ptr [edi + 0x4c], ecx */
  W32((uint32_t)(edi + 0x4cu), ecx);
/* 979e75: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 979e78: mov dword ptr [edi + 0x50], edx */
  W32((uint32_t)(edi + 0x50u), edx);
/* 979e7b: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 979e7e: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 979e81: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 979e84: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 979e87: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 979e8a: mov dword ptr [edi + 0x2c], edx */
  W32((uint32_t)(edi + 0x2cu), edx);
/* 979e8d: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 979e90: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
/* 979e93: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 979e96: mov dword ptr [edi + 0x34], ecx */
  W32((uint32_t)(edi + 0x34u), ecx);
/* 979e99: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 979e9c: mov dword ptr [edi + 0x38], edx */
  W32((uint32_t)(edi + 0x38u), edx);
/* 979e9f: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 979ea2: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 979ea5: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 979ea8: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* 979eab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 979eac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979ead: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_979eb0(void) {
  LOAD_REGS();
L_979eb0: /* 979eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979eb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 979eb5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 979eb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979eb8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x979ebeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 979ebe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 979ec1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 979ec3: je 0x979ecc */
  if (zf) goto L_979ecc;
L_979ec5: /* 979ec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 979ec6: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x979eccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_979ecc: /* 979ecc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 979ecd: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x979ed3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 979ed3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 979ed4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979ee0(void) {
  LOAD_REGS();
L_979ee0: /* 979ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979ee4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 979ee6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979ef0(void) {
  LOAD_REGS();
L_979ef0: /* 979ef0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979ef4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 979ef7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979f00(void) {
  LOAD_REGS();
L_979f00: /* 979f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979f04: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 979f07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979f10(void) {
  LOAD_REGS();
L_979f10: /* 979f10: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 979f14: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 979f17: xor eax, eax */
  eax = 0;
/* 979f19: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 979f1b: jne 0x979f20 */
  if (!zf) goto L_979f20;
L_979f1d: /* 979f1d: ret 4 */
  esp += 8; SPILL(); return;
L_979f20: /* 979f20: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 979f23: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 979f25: je 0x979f2e */
  if (zf) goto L_979f2e;
L_979f27: /* 979f27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 979f28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 979f29: call 0x97c330 */
  esp -= 4; W32(esp, 0x979f2eu); SPILL(); f_97c330(); if (g_unwind) return; RELOAD();
L_979f2e: /* 979f2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979f40(void) {
  LOAD_REGS();
L_979f40: /* 979f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979f44: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 979f47: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 979f4b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 979f4d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 979f50: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 979f53: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 979f56: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 979f59: ret 8 */
  esp += 12; SPILL(); return;
}

void f_979f60(void) {
  LOAD_REGS();
L_979f60: /* 979f60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979f64: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 979f67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979f70(void) {
  LOAD_REGS();
L_979f70: /* 979f70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979f74: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 979f77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979f80(void) {
  LOAD_REGS();
L_979f80: /* 979f80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 979f84: xor ecx, ecx */
  ecx = 0;
/* 979f86: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 979f89: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 979f8c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 979f8f: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 979f92: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 979f95: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 979f98: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 979f9c: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 979fa1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 979fa3: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 979fa6: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 979fa9: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 979fac: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 979fae: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 979fb1: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 979fb4: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 979fb7: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 979fba: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 979fbd: fst dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0);
/* 979fc0: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 979fc3: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 979fc6: fst dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0);
/* 979fc9: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 979fcc: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 979fcf: fst dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0);
/* 979fd2: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 979fd5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_979fe0(void) {
  LOAD_REGS();
L_979fe0: /* 979fe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979fe4: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 979fe7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_979ff0(void) {
  LOAD_REGS();
L_979ff0: /* 979ff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 979ff4: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* 979ff7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a000(void) {
  LOAD_REGS();
L_97a000: /* 97a000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a004: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 97a007: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a00b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97a00d: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 97a010: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97a013: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* 97a016: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97a019: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a020(void) {
  LOAD_REGS();
L_97a020: /* 97a020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a024: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 97a027: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a030(void) {
  LOAD_REGS();
L_97a030: /* 97a030: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97a031: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 97a035: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97a036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a037: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a038: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97a03c: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 97a03e: mov esi, ebx */
  esi = ebx;
/* 97a040: mov eax, ebp */
  eax = ebp;
L_97a042: /* 97a042: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97a044: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97a046: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97a048: jne 0x97a066 */
  if (!zf) goto L_97a066;
L_97a04a: /* 97a04a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97a04c: je 0x97a062 */
  if (zf) goto L_97a062;
L_97a04e: /* 97a04e: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97a051: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97a053: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97a056: jne 0x97a066 */
  if (!zf) goto L_97a066;
L_97a058: /* 97a058: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97a05b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97a05e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97a060: jne 0x97a042 */
  if (!zf) goto L_97a042;
L_97a062: /* 97a062: xor eax, eax */
  eax = 0;
/* 97a064: jmp 0x97a06b */
  goto L_97a06b;
L_97a066: /* 97a066: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97a068: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97a06b: /* 97a06b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a06d: je 0x97a0a8 */
  if (zf) goto L_97a0a8;
L_97a06f: /* 97a06f: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97a072: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a074: je 0x97a08d */
  if (zf) goto L_97a08d;
L_97a076: /* 97a076: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97a077: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97a078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a079: call 0x97cf50 */
  esp -= 4; W32(esp, 0x97a07eu); SPILL(); f_97cf50(); if (g_unwind) return; RELOAD();
/* 97a07e: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97a081: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 97a084: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97a086: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a087: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a088: call 0x975020 */
  esp -= 4; W32(esp, 0x97a08du); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
L_97a08d: /* 97a08d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97a08e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a08f: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a094u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a094: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97a097: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a099: je 0x97a0a8 */
  if (zf) goto L_97a0a8;
L_97a09b: /* 97a09b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 97a09e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97a0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a0a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a0a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a0a3: call 0x974f00 */
  esp -= 4; W32(esp, 0x97a0a8u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
L_97a0a8: /* 97a0a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97a0a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a0aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97a0ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97a0ac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a0b0(void) {
  LOAD_REGS();
L_97a0b0: /* 97a0b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a0b4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a0b8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 97a0bb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a0c0(void) {
  LOAD_REGS();
L_97a0c0: /* 97a0c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a0c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a0c6: je 0x97a0d3 */
  if (zf) goto L_97a0d3;
L_97a0c8: /* 97a0c8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97a0ca: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 97a0ce: jmp 0x97a0e0 */
  goto L_97a0e0;
L_97a0d3: /* 97a0d3: ret 8 */
  esp += 12; SPILL(); return;
L_97a0e0: /* 97a0e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a0e4: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97a0e7: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97a0eb: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97a0f0(void) {
  LOAD_REGS();
L_97a0f0: /* 97a0f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a0f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97a0f6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a0fa: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 97a0fd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 97a100: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 97a103: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 97a106: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 97a109: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a110(void) {
  LOAD_REGS();
L_97a110: /* 97a110: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a114: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a118: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 97a11b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a120(void) {
  LOAD_REGS();
L_97a120: /* 97a120: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a124: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a128: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 97a12b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a130(void) {
  LOAD_REGS();
L_97a130: /* 97a130: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a134: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97a136: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a13a: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 97a13d: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 97a140: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 97a143: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 97a146: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 97a149: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 97a14c: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 97a14f: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 97a152: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 97a155: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 97a158: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 97a15b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a160(void) {
  LOAD_REGS();
L_97a160: /* 97a160: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a164: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a168: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* 97a16b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a170(void) {
  LOAD_REGS();
L_97a170: /* 97a170: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a174: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a178: fstp dword ptr [eax + 0x40] */
  WF32((uint32_t)(eax + 0x40u), ST0); FPOP();
/* 97a17b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a180(void) {
  LOAD_REGS();
L_97a180: /* 97a180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a184: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a188: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97a18c: fstp dword ptr [eax + 0x44] */
  WF32((uint32_t)(eax + 0x44u), ST0); FPOP();
/* 97a18f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 97a193: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 97a196: mov dword ptr [eax + 0x4c], edx */
  W32((uint32_t)(eax + 0x4cu), edx);
/* 97a199: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_97a1a0(void) {
  LOAD_REGS();
L_97a1a0: /* 97a1a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a1a4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a1a8: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 97a1ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a1b0(void) {
  LOAD_REGS();
L_97a1b0: /* 97a1b0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97a1b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a1b4: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 97a1b8: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 97a1bb: mov eax, 3 */
  eax = 0x3u;
L_97a1c0: /* 97a1c0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97a1c1: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a1c5: jne 0x97a1c0 */
  if (!zf) goto L_97a1c0;
L_97a1c7: /* 97a1c7: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97a1cb: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 97a1ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a1cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a1d0: call 0x979f80 */
  esp -= 4; W32(esp, 0x97a1d5u); SPILL(); f_979f80(); if (g_unwind) return; RELOAD();
/* 97a1d5: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 97a1d9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a1dd: mov eax, 5 */
  eax = 0x5u;
/* 97a1e2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97a1e6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 97a1ea: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97a1ee: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97a1f2: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
L_97a1f6: /* 97a1f6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97a1f7: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 97a1f9: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a1fd: fxch st(6) */
  { double t = ST0; ST0 = STI(6); STI(6) = t; }
/* 97a1ff: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 97a201: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a205: fxch st(5) */
  { double t = ST0; ST0 = STI(5); STI(5) = t; }
/* 97a207: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 97a209: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a20d: fxch st(4) */
  { double t = ST0; ST0 = STI(4); STI(4) = t; }
/* 97a20f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 97a211: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a215: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 97a217: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 97a219: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a21d: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 97a21f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 97a221: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a225: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 97a227: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a22b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 97a22f: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a233: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 97a237: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 97a23b: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 97a23f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 97a243: jne 0x97a1f6 */
  if (!zf) goto L_97a1f6;
L_97a245: /* 97a245: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 97a249: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 97a24d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a24e: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 97a252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a253: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 97a257: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 97a25b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 97a25f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97a263: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 97a267: call 0x97a130 */
  esp -= 4; W32(esp, 0x97a26cu); SPILL(); f_97a130(); if (g_unwind) return; RELOAD();
/* 97a26c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97a270: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 97a273: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 97a276: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97a27a: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 97a27d: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 97a280: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97a284: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 97a287: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 97a28a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a28b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97a28e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a2a0(void) {
  LOAD_REGS();
L_97a2a0: /* 97a2a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a2a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a2a2: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 97a2a4: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97a2aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97a2aa: mov esi, eax */
  esi = eax;
/* 97a2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a2ad: call 0x97a350 */
  esp -= 4; W32(esp, 0x97a2b2u); SPILL(); f_97a350(); if (g_unwind) return; RELOAD();
/* 97a2b2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 97a2b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a2b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a2b8: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a2bdu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a2bd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97a2c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97a2c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a2c4: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 97a2c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a2c8: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a2cdu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a2cd: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97a2d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a2d3: je 0x97a33f */
  if (zf) goto L_97a33f;
L_97a2d5: /* 97a2d5: push 0x3a83126f */
  { uint32_t v = 0x3a83126fu; esp -= 4; W32(esp, v); }
/* 97a2da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a2db: call 0x974160 */
  esp -= 4; W32(esp, 0x97a2e0u); SPILL(); f_974160(); if (g_unwind) return; RELOAD();
/* 97a2e0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97a2e2: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 97a2e5: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 97a2e8: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 97a2eb: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97a2ee: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 97a2f1: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 97a2f4: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 97a2f7: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 97a2fa: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 97a2fd: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 97a300: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 97a303: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 97a306: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 97a309: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 97a30c: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 97a30f: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 97a312: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 97a315: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 97a318: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 97a31b: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 97a31e: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 97a321: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 97a324: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 97a327: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 97a32a: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 97a32d: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 97a330: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 97a333: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 97a336: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 97a339: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 97a33c: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
L_97a33f: /* 97a33f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97a340: mov eax, esi */
  eax = esi;
/* 97a342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a343: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97a350(void) {
  LOAD_REGS();
L_97a350: /* 97a350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a354: xor ecx, ecx */
  ecx = 0;
/* 97a356: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 97a358: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97a35b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 97a35e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97a361: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 97a364: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 97a369: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 97a36c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 97a36f: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 97a372: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 97a375: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 97a378: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 97a37b: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 97a37e: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 97a381: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 97a384: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 97a387: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 97a38a: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 97a38d: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 97a390: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 97a393: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 97a396: mov dword ptr [eax + 0x50], edx */
  W32((uint32_t)(eax + 0x50u), edx);
/* 97a399: mov dword ptr [eax + 0x54], edx */
  W32((uint32_t)(eax + 0x54u), edx);
/* 97a39c: mov dword ptr [eax + 0x58], ecx */
  W32((uint32_t)(eax + 0x58u), ecx);
/* 97a39f: mov dword ptr [eax + 0x5c], ecx */
  W32((uint32_t)(eax + 0x5cu), ecx);
/* 97a3a2: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 97a3a5: mov dword ptr [eax + 0x64], 0xffffffff */
  W32((uint32_t)(eax + 0x64u), 0xffffffffu);
/* 97a3ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a3b0(void) {
  LOAD_REGS();
L_97a3b0: /* 97a3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a3b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a3b2: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 97a3b4: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97a3bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97a3ba: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97a3be: mov esi, eax */
  esi = eax;
/* 97a3c0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97a3c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a3c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a3c4: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a3c9u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a3c9: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 97a3cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a3cd: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 97a3d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a3d1: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a3d6u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a3d6: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 97a3d9: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 97a3dc: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 97a3df: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 97a3e2: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 97a3e5: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 97a3e8: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 97a3eb: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 97a3ee: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 97a3f1: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 97a3f4: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 97a3f7: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 97a3fa: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 97a3fd: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 97a400: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 97a403: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 97a406: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 97a409: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 97a40c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 97a40f: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 97a412: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 97a415: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 97a418: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 97a41b: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 97a41e: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 97a421: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 97a424: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 97a427: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 97a42a: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 97a42d: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 97a430: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 97a433: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 97a436: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 97a439: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a43a: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 97a43d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a43e: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a443u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a443: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 97a446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a447: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 97a44a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a44b: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a450u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a450: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 97a453: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 97a456: fld dword ptr [edi + 0x60] */
  { double v = F32((uint32_t)(edi + 0x60u)); FPUSH(v); }
/* 97a459: fld dword ptr [edi + 0x5c] */
  { double v = F32((uint32_t)(edi + 0x5cu)); FPUSH(v); }
/* 97a45c: mov eax, esi */
  eax = esi;
/* 97a45e: fld dword ptr [edi + 0x58] */
  { double v = F32((uint32_t)(edi + 0x58u)); FPUSH(v); }
/* 97a461: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97a462: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
/* 97a465: fstp dword ptr [esi + 0x5c] */
  WF32((uint32_t)(esi + 0x5cu), ST0); FPOP();
/* 97a468: fstp dword ptr [esi + 0x60] */
  WF32((uint32_t)(esi + 0x60u), ST0); FPOP();
/* 97a46b: mov dword ptr [esi + 0x64], 0xffffffff */
  W32((uint32_t)(esi + 0x64u), 0xffffffffu);
/* 97a472: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a473: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a480(void) {
  LOAD_REGS();
L_97a480: /* 97a480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a481: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97a485: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97a487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a488: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97a48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97a48e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97a491: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a492: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97a498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97a498: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 97a49b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a49d: je 0x97a4a6 */
  if (zf) goto L_97a4a6;
L_97a49f: /* 97a49f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a4a0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97a4a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97a4a6: /* 97a4a6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 97a4a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a4ab: je 0x97a4b4 */
  if (zf) goto L_97a4b4;
L_97a4ad: /* 97a4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a4ae: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97a4b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97a4b4: /* 97a4b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a4b5: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97a4bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97a4bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a4bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a4c0(void) {
  LOAD_REGS();
L_97a4c0: /* 97a4c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a4c4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97a4c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a4d0(void) {
  LOAD_REGS();
L_97a4d0: /* 97a4d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a4d4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97a4d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a4e0(void) {
  LOAD_REGS();
L_97a4e0: /* 97a4e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a4e4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 97a4e7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 97a4ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a4eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a4ec: call 0x97c350 */
  esp -= 4; W32(esp, 0x97a4f1u); SPILL(); f_97c350(); if (g_unwind) return; RELOAD();
/* 97a4f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a500(void) {
  LOAD_REGS();
L_97a500: /* 97a500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a501: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97a505: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97a508: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a509: xor edi, edi */
  edi = 0;
/* 97a50b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a50d: jne 0x97a514 */
  if (!zf) goto L_97a514;
L_97a50f: /* 97a50f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97a510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a511: ret 4 */
  esp += 8; SPILL(); return;
L_97a514: /* 97a514: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97a517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a518: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a519: call 0x97c350 */
  esp -= 4; W32(esp, 0x97a51eu); SPILL(); f_97c350(); if (g_unwind) return; RELOAD();
/* 97a51e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 97a521: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a523: je 0x97a531 */
  if (zf) goto L_97a531;
L_97a525: /* 97a525: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 97a528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a529: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a52a: call 0x97c330 */
  esp -= 4; W32(esp, 0x97a52fu); SPILL(); f_97c330(); if (g_unwind) return; RELOAD();
/* 97a52f: mov edi, eax */
  edi = eax;
L_97a531: /* 97a531: mov eax, edi */
  eax = edi;
/* 97a533: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97a534: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a535: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a540(void) {
  LOAD_REGS();
L_97a540: /* 97a540: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a544: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97a547: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a550(void) {
  LOAD_REGS();
L_97a550: /* 97a550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a554: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 97a557: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a55b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97a55d: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 97a560: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97a563: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* 97a566: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97a569: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a570(void) {
  LOAD_REGS();
L_97a570: /* 97a570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a574: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 97a577: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a580(void) {
  LOAD_REGS();
L_97a580: /* 97a580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a584: fld dword ptr [eax + 0x54] */
  { double v = F32((uint32_t)(eax + 0x54u)); FPUSH(v); }
/* 97a587: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a590(void) {
  LOAD_REGS();
L_97a590: /* 97a590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a594: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 97a597: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a59b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97a59d: mov edx, dword ptr [eax + 0x5c] */
  edx = R32((uint32_t)(eax + 0x5cu));
/* 97a5a0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97a5a3: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 97a5a6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97a5a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a5b0(void) {
  LOAD_REGS();
L_97a5b0: /* 97a5b0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97a5b4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 97a5b7: xor eax, eax */
  eax = 0;
/* 97a5b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a5bb: jne 0x97a5c0 */
  if (!zf) goto L_97a5c0;
L_97a5bd: /* 97a5bd: ret 4 */
  esp += 8; SPILL(); return;
L_97a5c0: /* 97a5c0: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 97a5c3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a5c5: je 0x97a5ce */
  if (zf) goto L_97a5ce;
L_97a5c7: /* 97a5c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a5c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a5c9: call 0x97c390 */
  esp -= 4; W32(esp, 0x97a5ceu); SPILL(); f_97c390(); if (g_unwind) return; RELOAD();
L_97a5ce: /* 97a5ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a5e0(void) {
  LOAD_REGS();
L_97a5e0: /* 97a5e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a5e4: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 97a5e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a5f0(void) {
  LOAD_REGS();
L_97a5f0: /* 97a5f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a5f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a5f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97a5fa: jne 0x97a604 */
  if (!zf) goto L_97a604;
L_97a5fc: /* 97a5fc: mov eax, 1 */
  eax = 0x1u;
/* 97a601: ret 8 */
  esp += 12; SPILL(); return;
L_97a604: /* 97a604: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97a608: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a609: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97a60d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a60e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a60f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a610: call 0x97a630 */
  esp -= 4; W32(esp, 0x97a615u); SPILL(); f_97a630(); if (g_unwind) return; RELOAD();
/* 97a615: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97a619: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97a61b: and eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97a61f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97a622: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 97a624: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97a626: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97a627: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a630(void) {
  LOAD_REGS();
L_97a630: /* 97a630: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a634: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a635: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97a639: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 97a63c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a63d: mov edi, dword ptr [eax + 0x64] */
  edi = R32((uint32_t)(eax + 0x64u));
/* 97a640: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97a643: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 97a646: mov edx, edi */
  edx = edi;
/* 97a648: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97a64a: jle 0x97a650 */
  if ((zf || sf != of)) goto L_97a650;
L_97a64c: /* 97a64c: mov edx, ecx */
  edx = ecx;
/* 97a64e: mov ecx, edi */
  ecx = edi;
L_97a650: /* 97a650: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 97a653: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97a655: mov ecx, eax */
  ecx = eax;
/* 97a657: and ecx, 0x8000001f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000001fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 97a65d: jns 0x97a664 */
  if (!sf) goto L_97a664;
L_97a65f: /* 97a65f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97a660: or ecx, 0xffffffe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a | b);
  cf = 0;
  ecx = r;
  }
/* 97a663: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ecx = r;
  }
L_97a664: /* 97a664: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 97a669: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 97a66b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 97a66f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97a670: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97a672: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 97a673: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 97a676: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97a678: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 97a67b: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 97a67e: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 97a681: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 97a684: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 97a688: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97a68a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a68b: ret  */
  esp += 4; SPILL(); return;
}

void f_97a690(void) {
  LOAD_REGS();
L_97a690: /* 97a690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a694: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 97a697: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a6a0(void) {
  LOAD_REGS();
L_97a6a0: /* 97a6a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97a6a1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 97a6a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97a6a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a6a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a6a8: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97a6ac: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 97a6ae: mov esi, ebx */
  esi = ebx;
/* 97a6b0: mov eax, ebp */
  eax = ebp;
L_97a6b2: /* 97a6b2: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97a6b4: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97a6b6: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97a6b8: jne 0x97a6d6 */
  if (!zf) goto L_97a6d6;
L_97a6ba: /* 97a6ba: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97a6bc: je 0x97a6d2 */
  if (zf) goto L_97a6d2;
L_97a6be: /* 97a6be: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97a6c1: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97a6c3: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97a6c6: jne 0x97a6d6 */
  if (!zf) goto L_97a6d6;
L_97a6c8: /* 97a6c8: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97a6cb: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97a6ce: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97a6d0: jne 0x97a6b2 */
  if (!zf) goto L_97a6b2;
L_97a6d2: /* 97a6d2: xor eax, eax */
  eax = 0;
/* 97a6d4: jmp 0x97a6db */
  goto L_97a6db;
L_97a6d6: /* 97a6d6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97a6d8: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97a6db: /* 97a6db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a6dd: je 0x97a718 */
  if (zf) goto L_97a718;
L_97a6df: /* 97a6df: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97a6e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a6e4: je 0x97a6fd */
  if (zf) goto L_97a6fd;
L_97a6e6: /* 97a6e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97a6e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97a6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a6e9: call 0x97cfe0 */
  esp -= 4; W32(esp, 0x97a6eeu); SPILL(); f_97cfe0(); if (g_unwind) return; RELOAD();
/* 97a6ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97a6f1: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 97a6f4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97a6f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a6f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a6f8: call 0x975020 */
  esp -= 4; W32(esp, 0x97a6fdu); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
L_97a6fd: /* 97a6fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97a6fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a6ff: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a704u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a704: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97a707: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a709: je 0x97a718 */
  if (zf) goto L_97a718;
L_97a70b: /* 97a70b: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 97a70e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97a710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a713: call 0x974f00 */
  esp -= 4; W32(esp, 0x97a718u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
L_97a718: /* 97a718: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97a719: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a71a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97a71b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97a71c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a720(void) {
  LOAD_REGS();
L_97a720: /* 97a720: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a724: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97a727: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97a72b: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97a730(void) {
  LOAD_REGS();
L_97a730: /* 97a730: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a734: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a738: fstp dword ptr [eax + 0x54] */
  WF32((uint32_t)(eax + 0x54u), ST0); FPOP();
/* 97a73b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a740(void) {
  LOAD_REGS();
L_97a740: /* 97a740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a744: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a748: fmul dword ptr [eax + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x44u)));
/* 97a74b: fstp dword ptr [eax + 0x44] */
  WF32((uint32_t)(eax + 0x44u), ST0); FPOP();
/* 97a74e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a752: fmul dword ptr [eax + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x48u)));
/* 97a755: fstp dword ptr [eax + 0x48] */
  WF32((uint32_t)(eax + 0x48u), ST0); FPOP();
/* 97a758: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a75c: fmul dword ptr [eax + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4cu)));
/* 97a75f: fstp dword ptr [eax + 0x4c] */
  WF32((uint32_t)(eax + 0x4cu), ST0); FPOP();
/* 97a762: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a766: fmul dword ptr [eax + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x54u)));
/* 97a769: fstp dword ptr [eax + 0x54] */
  WF32((uint32_t)(eax + 0x54u), ST0); FPOP();
/* 97a76c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a770: fmul dword ptr [eax + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x58u)));
/* 97a773: fstp dword ptr [eax + 0x58] */
  WF32((uint32_t)(eax + 0x58u), ST0); FPOP();
/* 97a776: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a77a: fmul dword ptr [eax + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x5cu)));
/* 97a77d: fstp dword ptr [eax + 0x5c] */
  WF32((uint32_t)(eax + 0x5cu), ST0); FPOP();
/* 97a780: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97a784: fmul dword ptr [eax + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x60u)));
/* 97a787: fstp dword ptr [eax + 0x60] */
  WF32((uint32_t)(eax + 0x60u), ST0); FPOP();
/* 97a78a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a790(void) {
  LOAD_REGS();
L_97a790: /* 97a790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a794: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a798: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97a79c: mov dword ptr [eax + 0x58], ecx */
  W32((uint32_t)(eax + 0x58u), ecx);
/* 97a79f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97a7a3: mov dword ptr [eax + 0x5c], edx */
  W32((uint32_t)(eax + 0x5cu), edx);
/* 97a7a6: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 97a7a9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_97a7b0(void) {
  LOAD_REGS();
L_97a7b0: /* 97a7b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a7b4: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97a7b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a7b8: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 97a7bc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 97a7be: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 97a7c0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 97a7c3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 97a7c6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97a7c9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97a7cc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 97a7cf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 97a7d2: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 97a7d5: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 97a7d8: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 97a7db: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 97a7de: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 97a7e1: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 97a7e4: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 97a7e7: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 97a7ea: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 97a7ed: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 97a7f0: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 97a7f3: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 97a7f6: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 97a7f9: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 97a7fc: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 97a7ff: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 97a802: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 97a805: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 97a808: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 97a80b: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 97a80e: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 97a811: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 97a814: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 97a817: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a818: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 97a81b: call 0x974230 */
  esp -= 4; W32(esp, 0x97a820u); SPILL(); f_974230(); if (g_unwind) return; RELOAD();
/* 97a820: push 0x3a83126f */
  { uint32_t v = 0x3a83126fu; esp -= 4; W32(esp, v); }
/* 97a825: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a826: call 0x974160 */
  esp -= 4; W32(esp, 0x97a82bu); SPILL(); f_974160(); if (g_unwind) return; RELOAD();
/* 97a82b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a82c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a830(void) {
  LOAD_REGS();
L_97a830: /* 97a830: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a834: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a838: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97a83c: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 97a83f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97a843: mov dword ptr [eax + 0x48], edx */
  W32((uint32_t)(eax + 0x48u), edx);
/* 97a846: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 97a849: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_97a850(void) {
  LOAD_REGS();
L_97a850: /* 97a850: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a854: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a856: je 0x97a863 */
  if (zf) goto L_97a863;
L_97a858: /* 97a858: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97a85a: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 97a85e: jmp 0x97a870 */
  SPILL(); f_97a870(); return;
L_97a863: /* 97a863: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 97a86b: jmp 0x97a870 */
  SPILL(); f_97a870(); return;
}

void f_97a870(void) {
  LOAD_REGS();
L_97a870: /* 97a870: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a874: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97a877: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97a87b: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97a880(void) {
  LOAD_REGS();
L_97a880: /* 97a880: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a886: je 0x97a893 */
  if (zf) goto L_97a893;
L_97a888: /* 97a888: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97a88a: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 97a88e: jmp 0x97a8a0 */
  goto L_97a8a0;
L_97a893: /* 97a893: ret 8 */
  esp += 12; SPILL(); return;
L_97a8a0: /* 97a8a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a8a4: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97a8a7: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97a8ab: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97a8b0(void) {
  LOAD_REGS();
L_97a8b0: /* 97a8b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97a8b4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97a8b8: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97a8ba: je 0x97a906 */
  if (zf) goto L_97a906;
L_97a8bc: /* 97a8bc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97a8bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a8c1: je 0x97a8cd */
  if (zf) goto L_97a8cd;
L_97a8c3: /* 97a8c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a8c4: mov esi, dword ptr [eax + 0x4c] */
  esi = R32((uint32_t)(eax + 0x4cu));
/* 97a8c7: cmp esi, dword ptr [eax + 0x50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97a8ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a8cb: jg 0x97a906 */
  if ((!zf && sf == of)) goto L_97a906;
L_97a8cd: /* 97a8cd: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97a8d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a8d2: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97a8d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a8d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a8d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a8d9: call 0x97a630 */
  esp -= 4; W32(esp, 0x97a8deu); SPILL(); f_97a630(); if (g_unwind) return; RELOAD();
/* 97a8de: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 97a8e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97a8e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a8e7: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97a8eb: je 0x97a8fc */
  if (zf) goto L_97a8fc;
L_97a8ed: /* 97a8ed: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97a8f1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97a8f3: not ecx */
  ecx = ~ecx;
/* 97a8f5: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 97a8f7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97a8f9: ret 0xc */
  esp += 16; SPILL(); return;
L_97a8fc: /* 97a8fc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97a8fe: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97a902: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97a904: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_97a906: /* 97a906: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97a910(void) {
  LOAD_REGS();
L_97a910: /* 97a910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a911: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97a915: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97a918: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a91a: je 0x97a94c */
  if (zf) goto L_97a94c;
L_97a91c: /* 97a91c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 97a920: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a921: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a922: call 0x97c300 */
  esp -= 4; W32(esp, 0x97a927u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97a927: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97a92b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a92c: call 0x97c320 */
  esp -= 4; W32(esp, 0x97a931u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97a931: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a933: je 0x97a94c */
  if (zf) goto L_97a94c;
L_97a935: /* 97a935: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97a937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a938: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a939: call 0x97a8b0 */
  esp -= 4; W32(esp, 0x97a93eu); SPILL(); f_97a8b0(); if (g_unwind) return; RELOAD();
/* 97a93e: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97a942: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a943: call 0x97c320 */
  esp -= 4; W32(esp, 0x97a948u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97a948: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97a94a: jne 0x97a935 */
  if (!zf) goto L_97a935;
L_97a94c: /* 97a94c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a94d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97a950(void) {
  LOAD_REGS();
L_97a950: /* 97a950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a951: push 0xd0 */
  { uint32_t v = 0xd0u; esp -= 4; W32(esp, v); }
/* 97a956: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97a95cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97a95c: mov esi, eax */
  esi = eax;
/* 97a95e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97a962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a963: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a964: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a969u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a969: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97a96d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a96e: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 97a971: call 0x97b190 */
  esp -= 4; W32(esp, 0x97a976u); SPILL(); f_97b190(); if (g_unwind) return; RELOAD();
/* 97a976: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a977: call 0x97b1e0 */
  esp -= 4; W32(esp, 0x97a97cu); SPILL(); f_97b1e0(); if (g_unwind) return; RELOAD();
/* 97a97c: mov eax, esi */
  eax = esi;
/* 97a97e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97a97f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97a990(void) {
  LOAD_REGS();
L_97a990: /* 97a990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97a991: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97a992: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a993: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97a994: push 0xd0 */
  { uint32_t v = 0xd0u; esp -= 4; W32(esp, v); }
/* 97a999: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97a99fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97a99f: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97a9a3: mov esi, eax */
  esi = eax;
/* 97a9a5: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 97a9a8: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 97a9ab: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97a9ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a9ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97a9af: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a9b4u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a9b4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 97a9b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a9b8: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 97a9bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97a9bc: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a9c1u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a9c1: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 97a9c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97a9c5: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 97a9c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97a9c9: call 0x97da00 */
  esp -= 4; W32(esp, 0x97a9ceu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97a9ce: mov edx, edi */
  edx = edi;
/* 97a9d0: lea ecx, [edi + 0x30] */
  ecx = (uint32_t)(edi + 0x30u);
/* 97a9d3: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 97a9d6: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 97a9d8: mov ebx, 2 */
  ebx = 0x2u;
/* 97a9dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_97a9e0: /* 97a9e0: mov ebp, dword ptr [ecx - 0x1c] */
  ebp = R32((uint32_t)(ecx + 0xffffffe4u));
/* 97a9e3: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 97a9e6: mov ebp, dword ptr [edx + eax] */
  ebp = R32((uint32_t)(edx + eax));
/* 97a9e9: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 97a9eb: mov ebp, dword ptr [ecx - 0x14] */
  ebp = R32((uint32_t)(ecx + 0xffffffecu));
/* 97a9ee: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 97a9f1: mov ebp, dword ptr [ecx - 4] */
  ebp = R32((uint32_t)(ecx + 0xfffffffcu));
/* 97a9f4: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 97a9f7: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 97a9f9: mov dword ptr [eax + 0x18], ebp */
  W32((uint32_t)(eax + 0x18u), ebp);
/* 97a9fc: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
/* 97a9ff: mov dword ptr [eax + 0x1c], ebp */
  W32((uint32_t)(eax + 0x1cu), ebp);
/* 97aa02: mov ebp, dword ptr [ecx + 0x14] */
  ebp = R32((uint32_t)(ecx + 0x14u));
/* 97aa05: mov dword ptr [eax + 0x2c], ebp */
  W32((uint32_t)(eax + 0x2cu), ebp);
/* 97aa08: mov ebp, dword ptr [ecx + 0x18] */
  ebp = R32((uint32_t)(ecx + 0x18u));
/* 97aa0b: mov dword ptr [eax + 0x30], ebp */
  W32((uint32_t)(eax + 0x30u), ebp);
/* 97aa0e: mov ebp, dword ptr [ecx + 0x1c] */
  ebp = R32((uint32_t)(ecx + 0x1cu));
/* 97aa11: mov dword ptr [eax + 0x34], ebp */
  W32((uint32_t)(eax + 0x34u), ebp);
/* 97aa14: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97aa17: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97aa1a: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 97aa1b: jne 0x97a9e0 */
  if (!zf) goto L_97a9e0;
L_97aa1d: /* 97aa1d: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 97aa20: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 97aa23: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 97aa26: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 97aa29: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 97aa2c: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 97aa2f: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 97aa32: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 97aa35: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 97aa38: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 97aa3b: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 97aa3e: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 97aa41: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 97aa44: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 97aa47: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 97aa4a: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 97aa4d: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 97aa50: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 97aa53: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 97aa59: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 97aa5f: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 97aa65: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 97aa6b: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 97aa71: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 97aa77: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 97aa7d: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 97aa83: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 97aa89: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 97aa8f: mov edx, dword ptr [edi + 0x94] */
  edx = R32((uint32_t)(edi + 0x94u));
/* 97aa95: mov dword ptr [esi + 0x94], edx */
  W32((uint32_t)(esi + 0x94u), edx);
/* 97aa9b: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 97aaa1: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* 97aaa7: mov ecx, dword ptr [edi + 0x9c] */
  ecx = R32((uint32_t)(edi + 0x9cu));
/* 97aaad: mov dword ptr [esi + 0x9c], ecx */
  W32((uint32_t)(esi + 0x9cu), ecx);
/* 97aab3: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 97aab9: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 97aabf: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 97aac5: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 97aacb: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* 97aad1: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* 97aad7: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 97aadd: mov dword ptr [esi + 0xac], edx */
  W32((uint32_t)(esi + 0xacu), edx);
/* 97aae3: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 97aae9: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* 97aaef: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 97aaf5: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* 97aafb: mov edx, dword ptr [edi + 0xb8] */
  edx = R32((uint32_t)(edi + 0xb8u));
/* 97ab01: mov dword ptr [esi + 0xb8], edx */
  W32((uint32_t)(esi + 0xb8u), edx);
/* 97ab07: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 97ab0d: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* 97ab13: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 97ab19: mov dword ptr [esi + 0xc0], ecx */
  W32((uint32_t)(esi + 0xc0u), ecx);
/* 97ab1f: mov edx, dword ptr [edi + 0xc4] */
  edx = R32((uint32_t)(edi + 0xc4u));
/* 97ab25: mov dword ptr [esi + 0xc4], edx */
  W32((uint32_t)(esi + 0xc4u), edx);
/* 97ab2b: mov eax, dword ptr [edi + 0xc8] */
  eax = R32((uint32_t)(edi + 0xc8u));
/* 97ab31: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* 97ab37: mov ecx, dword ptr [edi + 0xcc] */
  ecx = R32((uint32_t)(edi + 0xccu));
/* 97ab3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ab3e: mov dword ptr [esi + 0xcc], ecx */
  W32((uint32_t)(esi + 0xccu), ecx);
/* 97ab44: mov eax, esi */
  eax = esi;
/* 97ab46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ab47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97ab48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97ab49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97ab50(void) {
  LOAD_REGS();
L_97ab50: /* 97ab50: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97ab54: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 97ab57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ab58: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97ab5c: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 97ab5f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 97ab63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ab65: je 0x97abc0 */
  if (zf) goto L_97abc0;
L_97ab67: /* 97ab67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ab68: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97ab69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ab6a: mov edi, edx */
  edi = edx;
/* 97ab6c: lea ecx, [edx + 0x30] */
  ecx = (uint32_t)(edx + 0x30u);
/* 97ab6f: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 97ab72: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 97ab74: mov ebx, 2 */
  ebx = 0x2u;
/* 97ab79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97ab80: /* 97ab80: mov ebp, dword ptr [ecx - 0x1c] */
  ebp = R32((uint32_t)(ecx + 0xffffffe4u));
/* 97ab83: mov dword ptr [eax - 4], ebp */
  W32((uint32_t)(eax + 0xfffffffcu), ebp);
/* 97ab86: mov ebp, dword ptr [edi + eax] */
  ebp = R32((uint32_t)(edi + eax));
/* 97ab89: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 97ab8b: mov ebp, dword ptr [ecx - 0x14] */
  ebp = R32((uint32_t)(ecx + 0xffffffecu));
/* 97ab8e: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 97ab91: mov ebp, dword ptr [ecx - 4] */
  ebp = R32((uint32_t)(ecx + 0xfffffffcu));
/* 97ab94: mov dword ptr [eax + 0x14], ebp */
  W32((uint32_t)(eax + 0x14u), ebp);
/* 97ab97: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 97ab99: mov dword ptr [eax + 0x18], ebp */
  W32((uint32_t)(eax + 0x18u), ebp);
/* 97ab9c: mov ebp, dword ptr [ecx + 4] */
  ebp = R32((uint32_t)(ecx + 0x4u));
/* 97ab9f: mov dword ptr [eax + 0x1c], ebp */
  W32((uint32_t)(eax + 0x1cu), ebp);
/* 97aba2: mov ebp, dword ptr [ecx + 0x14] */
  ebp = R32((uint32_t)(ecx + 0x14u));
/* 97aba5: mov dword ptr [eax + 0x2c], ebp */
  W32((uint32_t)(eax + 0x2cu), ebp);
/* 97aba8: mov ebp, dword ptr [ecx + 0x18] */
  ebp = R32((uint32_t)(ecx + 0x18u));
/* 97abab: mov dword ptr [eax + 0x30], ebp */
  W32((uint32_t)(eax + 0x30u), ebp);
/* 97abae: mov ebp, dword ptr [ecx + 0x1c] */
  ebp = R32((uint32_t)(ecx + 0x1cu));
/* 97abb1: mov dword ptr [eax + 0x34], ebp */
  W32((uint32_t)(eax + 0x34u), ebp);
/* 97abb4: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97abb7: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97abba: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 97abbb: jne 0x97ab80 */
  if (!zf) goto L_97ab80;
L_97abbd: /* 97abbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97abbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97abbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_97abc0: /* 97abc0: mov ecx, dword ptr [edx + 0x5c] */
  ecx = R32((uint32_t)(edx + 0x5cu));
/* 97abc3: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 97abc6: mov eax, dword ptr [edx + 0x60] */
  eax = R32((uint32_t)(edx + 0x60u));
/* 97abc9: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 97abcc: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 97abcf: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 97abd2: mov eax, dword ptr [edx + 0x68] */
  eax = R32((uint32_t)(edx + 0x68u));
/* 97abd5: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 97abd8: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* 97abdb: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 97abde: mov eax, dword ptr [edx + 0x70] */
  eax = R32((uint32_t)(edx + 0x70u));
/* 97abe1: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 97abe4: mov ecx, dword ptr [edx + 0x74] */
  ecx = R32((uint32_t)(edx + 0x74u));
/* 97abe7: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 97abea: mov eax, dword ptr [edx + 0x78] */
  eax = R32((uint32_t)(edx + 0x78u));
/* 97abed: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 97abf0: mov ecx, dword ptr [edx + 0x7c] */
  ecx = R32((uint32_t)(edx + 0x7cu));
/* 97abf3: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 97abf6: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 97abfc: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 97ac02: mov ecx, dword ptr [edx + 0x84] */
  ecx = R32((uint32_t)(edx + 0x84u));
/* 97ac08: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 97ac0e: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 97ac14: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 97ac1a: mov ecx, dword ptr [edx + 0x8c] */
  ecx = R32((uint32_t)(edx + 0x8cu));
/* 97ac20: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* 97ac26: mov eax, dword ptr [edx + 0x90] */
  eax = R32((uint32_t)(edx + 0x90u));
/* 97ac2c: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 97ac32: mov ecx, dword ptr [edx + 0x94] */
  ecx = R32((uint32_t)(edx + 0x94u));
/* 97ac38: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 97ac3e: mov eax, dword ptr [edx + 0x98] */
  eax = R32((uint32_t)(edx + 0x98u));
/* 97ac44: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* 97ac4a: mov ecx, dword ptr [edx + 0x9c] */
  ecx = R32((uint32_t)(edx + 0x9cu));
/* 97ac50: mov dword ptr [esi + 0x9c], ecx */
  W32((uint32_t)(esi + 0x9cu), ecx);
/* 97ac56: mov eax, dword ptr [edx + 0xa0] */
  eax = R32((uint32_t)(edx + 0xa0u));
/* 97ac5c: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* 97ac62: mov ecx, dword ptr [edx + 0xa4] */
  ecx = R32((uint32_t)(edx + 0xa4u));
/* 97ac68: mov dword ptr [esi + 0xa4], ecx */
  W32((uint32_t)(esi + 0xa4u), ecx);
/* 97ac6e: mov eax, dword ptr [edx + 0xa8] */
  eax = R32((uint32_t)(edx + 0xa8u));
/* 97ac74: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 97ac7a: mov ecx, dword ptr [edx + 0xac] */
  ecx = R32((uint32_t)(edx + 0xacu));
/* 97ac80: mov dword ptr [esi + 0xac], ecx */
  W32((uint32_t)(esi + 0xacu), ecx);
/* 97ac86: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 97ac8c: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* 97ac92: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 97ac98: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* 97ac9e: mov eax, dword ptr [edx + 0xb8] */
  eax = R32((uint32_t)(edx + 0xb8u));
/* 97aca4: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 97acaa: mov ecx, dword ptr [edx + 0xbc] */
  ecx = R32((uint32_t)(edx + 0xbcu));
/* 97acb0: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 97acb6: mov eax, dword ptr [edx + 0xc0] */
  eax = R32((uint32_t)(edx + 0xc0u));
/* 97acbc: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 97acc2: mov ecx, dword ptr [edx + 0xc4] */
  ecx = R32((uint32_t)(edx + 0xc4u));
/* 97acc8: mov dword ptr [esi + 0xc4], ecx */
  W32((uint32_t)(esi + 0xc4u), ecx);
/* 97acce: mov eax, dword ptr [edx + 0xc8] */
  eax = R32((uint32_t)(edx + 0xc8u));
/* 97acd4: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* 97acda: mov ecx, dword ptr [edx + 0xcc] */
  ecx = R32((uint32_t)(edx + 0xccu));
/* 97ace0: mov dword ptr [esi + 0xcc], ecx */
  W32((uint32_t)(esi + 0xccu), ecx);
/* 97ace6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ace7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97acf0(void) {
  LOAD_REGS();
L_97acf0: /* 97acf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97acf1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97acf5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97acf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97acf9: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97acffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97acff: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 97ad02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ad04: je 0x97ad0d */
  if (zf) goto L_97ad0d;
L_97ad06: /* 97ad06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ad07: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97ad0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97ad0d: /* 97ad0d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 97ad0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ad10: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97ad16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97ad16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ad17: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97ad1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97ad1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ad1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97ad30(void) {
  LOAD_REGS();
L_97ad30: /* 97ad30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97ad34: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97ad36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97ad40(void) {
  LOAD_REGS();
L_97ad40: /* 97ad40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97ad44: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 97ad47: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97ad50(void) {
  LOAD_REGS();
L_97ad50: /* 97ad50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97ad54: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97ad58: mov eax, dword ptr [ecx + eax*4 + 4] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 97ad5c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97ad60(void) {
  LOAD_REGS();
L_97ad60: /* 97ad60: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97ad64: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 97ad67: xor eax, eax */
  eax = 0;
/* 97ad69: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ad6b: jne 0x97ad70 */
  if (!zf) goto L_97ad70;
L_97ad6d: /* 97ad6d: ret 8 */
  esp += 12; SPILL(); return;
L_97ad70: /* 97ad70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ad71: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 97ad75: mov edx, dword ptr [edx + esi*4 + 4] */
  edx = R32((uint32_t)(edx + esi*4 + 0x4u));
/* 97ad79: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ad7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ad7c: je 0x97ad6d */
  if (zf) goto L_97ad6d;
L_97ad7e: /* 97ad7e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 97ad82: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97ad86: jmp 0x97c390 */
  SPILL(); f_97c390(); return;
}

void f_97ad90(void) {
  LOAD_REGS();
L_97ad90: /* 97ad90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97ad94: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97ad98: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 97ad9b: mov edx, dword ptr [ecx + eax*4 + 0x14] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x14u));
/* 97ad9f: lea eax, [ecx + eax*4 + 0x14] */
  eax = (uint32_t)(ecx + eax*4 + 0x14u);
/* 97ada3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97ada7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97ada9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 97adac: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97adaf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97adb2: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97adb5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97adc0(void) {
  LOAD_REGS();
L_97adc0: /* 97adc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97adc4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97adc8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 97adcb: mov edx, dword ptr [ecx + eax*4 + 0x2c] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x2cu));
/* 97adcf: lea eax, [ecx + eax*4 + 0x2c] */
  eax = (uint32_t)(ecx + eax*4 + 0x2cu);
/* 97add3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97add7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97add9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 97addc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97addf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97ade2: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97ade5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97adf0(void) {
  LOAD_REGS();
L_97adf0: /* 97adf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97adf4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97adf8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 97adfb: mov edx, dword ptr [ecx + eax*4 + 0x44] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x44u));
/* 97adff: lea eax, [ecx + eax*4 + 0x44] */
  eax = (uint32_t)(ecx + eax*4 + 0x44u);
/* 97ae03: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97ae07: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97ae09: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 97ae0c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97ae0f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97ae12: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97ae15: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97ae20(void) {
  LOAD_REGS();
L_97ae20: /* 97ae20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97ae24: sub eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 97ae27: je 0x97ae49 */
  if (zf) goto L_97ae49;
L_97ae29: /* 97ae29: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97ae2a: je 0x97ae31 */
  if (zf) goto L_97ae31;
L_97ae2c: /* 97ae2c: xor eax, eax */
  eax = 0;
/* 97ae2e: ret 0xc */
  esp += 16; SPILL(); return;
L_97ae31: /* 97ae31: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97ae35: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 97ae3b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97ae3f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97ae41: mov eax, 1 */
  eax = 0x1u;
/* 97ae46: ret 0xc */
  esp += 16; SPILL(); return;
L_97ae49: /* 97ae49: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97ae4d: mov ecx, dword ptr [eax + 0xc4] */
  ecx = R32((uint32_t)(eax + 0xc4u));
/* 97ae53: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97ae57: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97ae59: mov eax, 1 */
  eax = 0x1u;
/* 97ae5e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97ae70(void) {
  LOAD_REGS();
L_97ae70: /* 97ae70: xor eax, eax */
  eax = 0;
/* 97ae72: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97ae80(void) {
  LOAD_REGS();
L_97ae80: /* 97ae80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97ae84: sub eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 97ae87: je 0x97aec6 */
  if (zf) goto L_97aec6;
L_97ae89: /* 97ae89: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97ae8a: je 0x97aeae */
  if (zf) goto L_97aeae;
L_97ae8c: /* 97ae8c: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 97ae8f: je 0x97ae96 */
  if (zf) goto L_97ae96;
L_97ae91: /* 97ae91: xor eax, eax */
  eax = 0;
/* 97ae93: ret 0xc */
  esp += 16; SPILL(); return;
L_97ae96: /* 97ae96: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97ae9a: mov ecx, dword ptr [eax + 0xcc] */
  ecx = R32((uint32_t)(eax + 0xccu));
/* 97aea0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97aea4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97aea6: mov eax, 1 */
  eax = 0x1u;
/* 97aeab: ret 0xc */
  esp += 16; SPILL(); return;
L_97aeae: /* 97aeae: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97aeb2: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 97aeb8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97aebc: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97aebe: mov eax, 1 */
  eax = 0x1u;
/* 97aec3: ret 0xc */
  esp += 16; SPILL(); return;
L_97aec6: /* 97aec6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97aeca: mov ecx, dword ptr [eax + 0x98] */
  ecx = R32((uint32_t)(eax + 0x98u));
/* 97aed0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97aed4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97aed6: mov eax, 1 */
  eax = 0x1u;
/* 97aedb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97aee0(void) {
  LOAD_REGS();
L_97aee0: /* 97aee0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97aee4: cmp eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97aee7: ja 0x97b119 */
  if ((!cf && !zf)) goto L_97b119;
L_97aeed: /* 97aeed: jmp dword ptr [eax*4 + 0x97b120] */
  switch (R32((uint32_t)(eax*4 + 0x97b120u))) {
    case 0x97aef4u: goto L_97aef4;
    case 0x97af09u: goto L_97af09;
    case 0x97af1eu: goto L_97af1e;
    case 0x97af33u: goto L_97af33;
    case 0x97af48u: goto L_97af48;
    case 0x97af5du: goto L_97af5d;
    case 0x97af72u: goto L_97af72;
    case 0x97af87u: goto L_97af87;
    case 0x97af9cu: goto L_97af9c;
    case 0x97afb1u: goto L_97afb1;
    case 0x97afc9u: goto L_97afc9;
    case 0x97afe1u: goto L_97afe1;
    case 0x97aff9u: goto L_97aff9;
    case 0x97b011u: goto L_97b011;
    case 0x97b029u: goto L_97b029;
    case 0x97b041u: goto L_97b041;
    case 0x97b059u: goto L_97b059;
    case 0x97b071u: goto L_97b071;
    case 0x97b089u: goto L_97b089;
    case 0x97b0a1u: goto L_97b0a1;
    case 0x97b0b9u: goto L_97b0b9;
    case 0x97b0d1u: goto L_97b0d1;
    case 0x97b0e9u: goto L_97b0e9;
    case 0x97b101u: goto L_97b101;
    case 0x97b119u: goto L_97b119;
    default: guest_badjump(0x97aeed, R32((uint32_t)(eax*4 + 0x97b120u))); return;
  }
L_97aef4: /* 97aef4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97aef8: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 97aefb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97aeff: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af01: mov eax, 1 */
  eax = 0x1u;
/* 97af06: ret 0xc */
  esp += 16; SPILL(); return;
L_97af09: /* 97af09: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97af0d: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 97af10: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97af14: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af16: mov eax, 1 */
  eax = 0x1u;
/* 97af1b: ret 0xc */
  esp += 16; SPILL(); return;
L_97af1e: /* 97af1e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97af22: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 97af25: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97af29: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af2b: mov eax, 1 */
  eax = 0x1u;
/* 97af30: ret 0xc */
  esp += 16; SPILL(); return;
L_97af33: /* 97af33: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97af37: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 97af3a: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97af3e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af40: mov eax, 1 */
  eax = 0x1u;
/* 97af45: ret 0xc */
  esp += 16; SPILL(); return;
L_97af48: /* 97af48: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97af4c: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 97af4f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97af53: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af55: mov eax, 1 */
  eax = 0x1u;
/* 97af5a: ret 0xc */
  esp += 16; SPILL(); return;
L_97af5d: /* 97af5d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97af61: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 97af64: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97af68: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af6a: mov eax, 1 */
  eax = 0x1u;
/* 97af6f: ret 0xc */
  esp += 16; SPILL(); return;
L_97af72: /* 97af72: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97af76: mov ecx, dword ptr [eax + 0x74] */
  ecx = R32((uint32_t)(eax + 0x74u));
/* 97af79: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97af7d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af7f: mov eax, 1 */
  eax = 0x1u;
/* 97af84: ret 0xc */
  esp += 16; SPILL(); return;
L_97af87: /* 97af87: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97af8b: mov ecx, dword ptr [eax + 0x78] */
  ecx = R32((uint32_t)(eax + 0x78u));
/* 97af8e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97af92: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97af94: mov eax, 1 */
  eax = 0x1u;
/* 97af99: ret 0xc */
  esp += 16; SPILL(); return;
L_97af9c: /* 97af9c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97afa0: mov ecx, dword ptr [eax + 0x7c] */
  ecx = R32((uint32_t)(eax + 0x7cu));
/* 97afa3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97afa7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97afa9: mov eax, 1 */
  eax = 0x1u;
/* 97afae: ret 0xc */
  esp += 16; SPILL(); return;
L_97afb1: /* 97afb1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97afb5: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 97afbb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97afbf: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97afc1: mov eax, 1 */
  eax = 0x1u;
/* 97afc6: ret 0xc */
  esp += 16; SPILL(); return;
L_97afc9: /* 97afc9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97afcd: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 97afd3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97afd7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97afd9: mov eax, 1 */
  eax = 0x1u;
/* 97afde: ret 0xc */
  esp += 16; SPILL(); return;
L_97afe1: /* 97afe1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97afe5: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 97afeb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97afef: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97aff1: mov eax, 1 */
  eax = 0x1u;
/* 97aff6: ret 0xc */
  esp += 16; SPILL(); return;
L_97aff9: /* 97aff9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97affd: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 97b003: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b007: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b009: mov eax, 1 */
  eax = 0x1u;
/* 97b00e: ret 0xc */
  esp += 16; SPILL(); return;
L_97b011: /* 97b011: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b015: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* 97b01b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b01f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b021: mov eax, 1 */
  eax = 0x1u;
/* 97b026: ret 0xc */
  esp += 16; SPILL(); return;
L_97b029: /* 97b029: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b02d: mov ecx, dword ptr [eax + 0x94] */
  ecx = R32((uint32_t)(eax + 0x94u));
/* 97b033: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b037: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b039: mov eax, 1 */
  eax = 0x1u;
/* 97b03e: ret 0xc */
  esp += 16; SPILL(); return;
L_97b041: /* 97b041: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b045: mov ecx, dword ptr [eax + 0xa0] */
  ecx = R32((uint32_t)(eax + 0xa0u));
/* 97b04b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b04f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b051: mov eax, 1 */
  eax = 0x1u;
/* 97b056: ret 0xc */
  esp += 16; SPILL(); return;
L_97b059: /* 97b059: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b05d: mov ecx, dword ptr [eax + 0xa4] */
  ecx = R32((uint32_t)(eax + 0xa4u));
/* 97b063: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b067: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b069: mov eax, 1 */
  eax = 0x1u;
/* 97b06e: ret 0xc */
  esp += 16; SPILL(); return;
L_97b071: /* 97b071: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b075: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 97b07b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b07f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b081: mov eax, 1 */
  eax = 0x1u;
/* 97b086: ret 0xc */
  esp += 16; SPILL(); return;
L_97b089: /* 97b089: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b08d: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* 97b093: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b097: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b099: mov eax, 1 */
  eax = 0x1u;
/* 97b09e: ret 0xc */
  esp += 16; SPILL(); return;
L_97b0a1: /* 97b0a1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b0a5: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 97b0ab: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b0af: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b0b1: mov eax, 1 */
  eax = 0x1u;
/* 97b0b6: ret 0xc */
  esp += 16; SPILL(); return;
L_97b0b9: /* 97b0b9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b0bd: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 97b0c3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b0c7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b0c9: mov eax, 1 */
  eax = 0x1u;
/* 97b0ce: ret 0xc */
  esp += 16; SPILL(); return;
L_97b0d1: /* 97b0d1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b0d5: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 97b0db: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b0df: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b0e1: mov eax, 1 */
  eax = 0x1u;
/* 97b0e6: ret 0xc */
  esp += 16; SPILL(); return;
L_97b0e9: /* 97b0e9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b0ed: mov ecx, dword ptr [eax + 0xbc] */
  ecx = R32((uint32_t)(eax + 0xbcu));
/* 97b0f3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b0f7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b0f9: mov eax, 1 */
  eax = 0x1u;
/* 97b0fe: ret 0xc */
  esp += 16; SPILL(); return;
L_97b101: /* 97b101: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b105: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 97b10b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b10f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97b111: mov eax, 1 */
  eax = 0x1u;
/* 97b116: ret 0xc */
  esp += 16; SPILL(); return;
L_97b119: /* 97b119: xor eax, eax */
  eax = 0;
/* 97b11b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97b190(void) {
  LOAD_REGS();
L_97b190: /* 97b190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b194: xor ecx, ecx */
  ecx = 0;
/* 97b196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b197: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97b19a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97b19d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 97b1a0: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97b1a3: mov edx, 2 */
  edx = 0x2u;
/* 97b1a8: mov esi, 0x3f800000 */
  esi = 0x3f800000u;
/* 97b1ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_97b1b0: /* 97b1b0: mov dword ptr [eax - 8], ecx */
  W32((uint32_t)(eax + 0xfffffff8u), ecx);
/* 97b1b3: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 97b1b6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 97b1b8: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 97b1bb: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 97b1be: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 97b1c1: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 97b1c4: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 97b1c7: mov dword ptr [eax + 0x30], esi */
  W32((uint32_t)(eax + 0x30u), esi);
/* 97b1ca: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97b1cd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 97b1ce: jne 0x97b1b0 */
  if (!zf) goto L_97b1b0;
L_97b1d0: /* 97b1d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b1d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97b1e0(void) {
  LOAD_REGS();
L_97b1e0: /* 97b1e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b1e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97b1e5: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 97b1e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b1e9: xor edi, edi */
  edi = 0;
/* 97b1eb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 97b1ec: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97b1ef: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* 97b1f2: mov dword ptr [esi + 0x64], edi */
  W32((uint32_t)(esi + 0x64u), edi);
/* 97b1f5: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* 97b1f8: mov dword ptr [esi + 0x70], edi */
  W32((uint32_t)(esi + 0x70u), edi);
/* 97b1fb: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* 97b1fe: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* 97b201: mov dword ptr [esi + 0x7c], edi */
  W32((uint32_t)(esi + 0x7cu), edi);
/* 97b204: mov dword ptr [esi + 0x78], edi */
  W32((uint32_t)(esi + 0x78u), edi);
/* 97b207: mov dword ptr [esi + 0x74], edi */
  W32((uint32_t)(esi + 0x74u), edi);
/* 97b20a: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* 97b210: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* 97b216: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 97b21c: mov dword ptr [esi + 0x94], edi */
  W32((uint32_t)(esi + 0x94u), edi);
/* 97b222: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 97b228: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* 97b22e: mov dword ptr [esi + 0x98], edi */
  W32((uint32_t)(esi + 0x98u), edi);
/* 97b234: mov dword ptr [esi + 0x9c], edi */
  W32((uint32_t)(esi + 0x9cu), edi);
/* 97b23a: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* 97b240: mov dword ptr [esi + 0xa4], edi */
  W32((uint32_t)(esi + 0xa4u), edi);
/* 97b246: mov dword ptr [esi + 0xa0], edi */
  W32((uint32_t)(esi + 0xa0u), edi);
/* 97b24c: mov dword ptr [esi + 0xb4], edi */
  W32((uint32_t)(esi + 0xb4u), edi);
/* 97b252: mov dword ptr [esi + 0xb0], edi */
  W32((uint32_t)(esi + 0xb0u), edi);
/* 97b258: mov dword ptr [esi + 0xac], edi */
  W32((uint32_t)(esi + 0xacu), edi);
/* 97b25e: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
/* 97b264: mov dword ptr [esi + 0xb8], edi */
  W32((uint32_t)(esi + 0xb8u), edi);
/* 97b26a: mov dword ptr [esi + 0xc0], edi */
  W32((uint32_t)(esi + 0xc0u), edi);
/* 97b270: mov dword ptr [esi + 0xc4], edi */
  W32((uint32_t)(esi + 0xc4u), edi);
/* 97b276: mov dword ptr [esi + 0xc8], edi */
  W32((uint32_t)(esi + 0xc8u), edi);
/* 97b27c: mov dword ptr [esi + 0xcc], edi */
  W32((uint32_t)(esi + 0xccu), edi);
/* 97b282: ja 0x97b530 */
  if ((!cf && !zf)) goto L_97b530;
L_97b288: /* 97b288: jmp dword ptr [eax*4 + 0x97b538] */
  switch (R32((uint32_t)(eax*4 + 0x97b538u))) {
    case 0x97b28fu: goto L_97b28f;
    case 0x97b2a5u: goto L_97b2a5;
    case 0x97b330u: goto L_97b330;
    case 0x97b34eu: goto L_97b34e;
    case 0x97b395u: goto L_97b395;
    case 0x97b3f9u: goto L_97b3f9;
    case 0x97b46cu: goto L_97b46c;
    case 0x97b494u: goto L_97b494;
    case 0x97b530u: goto L_97b530;
    default: guest_badjump(0x97b288, R32((uint32_t)(eax*4 + 0x97b538u))); return;
  }
L_97b28f: /* 97b28f: push 0x3fc90fdb */
  { uint32_t v = 0x3fc90fdbu; esp -= 4; W32(esp, v); }
/* 97b294: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b295: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b296: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b29bu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b29b: push 0xbfc90fdb */
  { uint32_t v = 0xbfc90fdbu; esp -= 4; W32(esp, v); }
/* 97b2a0: jmp 0x97b3a6 */
  goto L_97b3a6;
L_97b2a5: /* 97b2a5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b2aa: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 97b2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b2ad: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b2b2u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b2b2: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b2b7: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97b2b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b2ba: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b2bfu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b2bf: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b2c4: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 97b2c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b2c7: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b2ccu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b2cc: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b2d1: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 97b2d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b2d4: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b2d9u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b2d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b2da: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 97b2dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b2dd: call 0x97b780 */
  esp -= 4; W32(esp, 0x97b2e2u); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 97b2e2: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b2e7: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97b2e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b2ea: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b2efu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b2ef: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 97b2f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b2f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b2f6: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b2fbu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b2fb: push 0xbf000000 */
  { uint32_t v = 0xbf000000u; esp -= 4; W32(esp, v); }
/* 97b300: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97b302: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b303: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b308u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b308: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b309: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* 97b30b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b30c: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b311u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b311: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b316: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97b318: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b319: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b31eu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b31e: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b323: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97b325: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b326: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b32bu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b32b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b32c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b32d: ret 4 */
  esp += 8; SPILL(); return;
L_97b330: /* 97b330: push 0x3fc90fdb */
  { uint32_t v = 0x3fc90fdbu; esp -= 4; W32(esp, v); }
/* 97b335: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b336: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b337: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b33cu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b33c: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b341: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97b343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b344: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b349u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b349: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b34a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b34b: ret 4 */
  esp += 8; SPILL(); return;
L_97b34e: /* 97b34e: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b353: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97b355: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b356: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b35bu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b35b: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b360: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 97b362: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b363: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b368u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b368: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b36d: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 97b36f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b370: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b375u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b375: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b376: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 97b378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b379: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b37eu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b37e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b37f: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 97b381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b382: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b387u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b387: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b388: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 97b38a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b38b: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b390u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b390: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b391: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b392: ret 4 */
  esp += 8; SPILL(); return;
L_97b395: /* 97b395: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 97b39a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b39b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b39c: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b3a1u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b3a1: push 0xbf000000 */
  { uint32_t v = 0xbf000000u; esp -= 4; W32(esp, v); }
L_97b3a6: /* 97b3a6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97b3a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3a9: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b3aeu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b3ae: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b3b3: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97b3b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3b6: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b3bbu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b3bb: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b3c0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97b3c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3c3: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b3c8u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b3c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b3c9: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 97b3cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3cc: call 0x97b780 */
  esp -= 4; W32(esp, 0x97b3d1u); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 97b3d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b3d2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 97b3d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3d5: call 0x97b780 */
  esp -= 4; W32(esp, 0x97b3dau); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 97b3da: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b3df: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 97b3e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3e2: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b3e7u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b3e7: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b3ec: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97b3ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3ef: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b3f4u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b3f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b3f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b3f6: ret 4 */
  esp += 8; SPILL(); return;
L_97b3f9: /* 97b3f9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 97b3fb: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 97b3fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b3fe: call 0x97b740 */
  esp -= 4; W32(esp, 0x97b403u); SPILL(); f_97b740(); if (g_unwind) return; RELOAD();
/* 97b403: push 0x3f490fdb */
  { uint32_t v = 0x3f490fdbu; esp -= 4; W32(esp, v); }
/* 97b408: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b409: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b40a: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b40fu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b40f: push 0x3f490fdb */
  { uint32_t v = 0x3f490fdbu; esp -= 4; W32(esp, v); }
/* 97b414: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97b416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b417: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b41cu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b41c: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b421: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97b423: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b424: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b429u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b429: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b42e: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97b430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b431: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b436u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b436: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 97b438: push 0x1b */
  { uint32_t v = 0x1bu; esp -= 4; W32(esp, v); }
/* 97b43a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b43b: call 0x97b740 */
  esp -= 4; W32(esp, 0x97b440u); SPILL(); f_97b740(); if (g_unwind) return; RELOAD();
/* 97b440: push 0x3fc90fdb */
  { uint32_t v = 0x3fc90fdbu; esp -= 4; W32(esp, v); }
/* 97b445: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 97b447: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b448: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b44du); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b44d: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b452: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97b454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b455: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b45au); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b45a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b45f: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 97b461: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b462: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b467u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b467: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b468: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b469: ret 4 */
  esp += 8; SPILL(); return;
L_97b46c: /* 97b46c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b46d: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 97b46f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b470: call 0x97b780 */
  esp -= 4; W32(esp, 0x97b475u); SPILL(); f_97b780(); if (g_unwind) return; RELOAD();
/* 97b475: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b47a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97b47c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b47d: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b482u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b482: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b487: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97b489: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b48a: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b48fu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b48f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b490: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b491: ret 4 */
  esp += 8; SPILL(); return;
L_97b494: /* 97b494: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b499: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97b49b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b49c: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4a1u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4a1: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b4a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97b4a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b4a9: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4aeu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4ae: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b4b3: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 97b4b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b4b6: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4bbu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4bb: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b4c0: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 97b4c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b4c3: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4c8u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4c8: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b4cd: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 97b4cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b4d0: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4d5u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4d5: push 0x447a0000 */
  { uint32_t v = 0x447a0000u; esp -= 4; W32(esp, v); }
/* 97b4da: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 97b4dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b4dd: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4e2u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4e2: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b4e7: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 97b4e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b4ea: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4efu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4ef: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b4f4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 97b4f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b4f7: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b4fcu); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b4fc: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b501: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 97b503: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b504: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b509u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b509: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b50e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97b510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b511: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b516u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b516: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b51b: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 97b51d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b51e: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b523u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
/* 97b523: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 97b528: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 97b52a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b52b: call 0x97b7d0 */
  esp -= 4; W32(esp, 0x97b530u); SPILL(); f_97b7d0(); if (g_unwind) return; RELOAD();
L_97b530: /* 97b530: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b531: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b532: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97b560(void) {
  LOAD_REGS();
L_97b560: /* 97b560: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b564: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97b568: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97b569: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 97b56c: call 0x97b1e0 */
  esp -= 4; W32(esp, 0x97b571u); SPILL(); f_97b1e0(); if (g_unwind) return; RELOAD();
/* 97b571: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97b580(void) {
  LOAD_REGS();
L_97b580: /* 97b580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97b581: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 97b585: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97b586: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b587: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b588: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97b58c: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 97b58e: mov esi, ebx */
  esi = ebx;
/* 97b590: mov eax, ebp */
  eax = ebp;
L_97b592: /* 97b592: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97b594: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97b596: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97b598: jne 0x97b5b6 */
  if (!zf) goto L_97b5b6;
L_97b59a: /* 97b59a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97b59c: je 0x97b5b2 */
  if (zf) goto L_97b5b2;
L_97b59e: /* 97b59e: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97b5a1: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97b5a3: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97b5a6: jne 0x97b5b6 */
  if (!zf) goto L_97b5b6;
L_97b5a8: /* 97b5a8: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97b5ab: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97b5ae: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97b5b0: jne 0x97b592 */
  if (!zf) goto L_97b592;
L_97b5b2: /* 97b5b2: xor eax, eax */
  eax = 0;
/* 97b5b4: jmp 0x97b5bb */
  goto L_97b5bb;
L_97b5b6: /* 97b5b6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97b5b8: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97b5bb: /* 97b5bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97b5bd: je 0x97b5eb */
  if (zf) goto L_97b5eb;
L_97b5bf: /* 97b5bf: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 97b5c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97b5c4: je 0x97b5d0 */
  if (zf) goto L_97b5d0;
L_97b5c6: /* 97b5c6: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 97b5c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97b5ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97b5cb: call 0x975020 */
  esp -= 4; W32(esp, 0x97b5d0u); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
L_97b5d0: /* 97b5d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97b5d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b5d2: call 0x97da00 */
  esp -= 4; W32(esp, 0x97b5d7u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97b5d7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 97b5da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97b5dc: je 0x97b5eb */
  if (zf) goto L_97b5eb;
L_97b5de: /* 97b5de: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 97b5e1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97b5e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97b5e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97b5e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97b5e6: call 0x974f00 */
  esp -= 4; W32(esp, 0x97b5ebu); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
L_97b5eb: /* 97b5eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97b5ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97b5ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97b5ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97b5ef: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97b600(void) {
  LOAD_REGS();
L_97b600: /* 97b600: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97b604: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97b606: je 0x97b613 */
  if (zf) goto L_97b613;
L_97b608: /* 97b608: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97b60a: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 97b60e: jmp 0x97b620 */
  SPILL(); f_97b620(); return;
L_97b613: /* 97b613: xor eax, eax */
  eax = 0;
/* 97b615: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 97b619: jmp 0x97b620 */
  SPILL(); f_97b620(); return;
}

void f_97b620(void) {
  LOAD_REGS();
L_97b620: /* 97b620: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 97b624: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97b626: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97b62a: jne 0x97b630 */
  if (!zf) goto L_97b630;
L_97b62c: /* 97b62c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97b62e: je 0x97b63f */
  if (zf) goto L_97b63f;
L_97b630: /* 97b630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97b631: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97b635: lea edx, [ecx + eax*4 + 4] */
  edx = (uint32_t)(ecx + eax*4 + 0x4u);
/* 97b639: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97b63a: call 0x97da00 */
  esp -= 4; W32(esp, 0x97b63fu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_97b63f: /* 97b63f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97b650(void) {
  LOAD_REGS();
L_97b650: /* 97b650: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97b654: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b658: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b65c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 97b65f: lea eax, [ecx + eax*4 + 0x14] */
  eax = (uint32_t)(ecx + eax*4 + 0x14u);
/* 97b663: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97b667: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97b669: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 97b66d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97b670: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 97b673: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_97b680(void) {
  LOAD_REGS();
L_97b680: /* 97b680: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97b684: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b688: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b68c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 97b68f: lea eax, [ecx + eax*4 + 0x2c] */
  eax = (uint32_t)(ecx + eax*4 + 0x2cu);
/* 97b693: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97b697: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97b699: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 97b69d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97b6a0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 97b6a3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_97b6b0(void) {
  LOAD_REGS();
L_97b6b0: /* 97b6b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97b6b4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b6b8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b6bc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 97b6bf: lea eax, [ecx + eax*4 + 0x44] */
  eax = (uint32_t)(ecx + eax*4 + 0x44u);
/* 97b6c3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97b6c7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97b6c9: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 97b6cd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97b6d0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 97b6d3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_97b6e0(void) {
  LOAD_REGS();
L_97b6e0: /* 97b6e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b6e4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b6e8: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 97b6eb: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 97b6ee: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b6f2: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 97b6f5: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 97b6f8: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b6fc: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 97b6ff: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 97b702: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b706: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 97b709: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 97b70c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b710: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 97b713: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 97b716: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b71a: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 97b71d: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 97b720: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 97b723: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97b726: jne 0x97b73c */
  if (!zf) goto L_97b73c;
L_97b728: /* 97b728: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b72c: fmul dword ptr [eax + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x5cu)));
/* 97b72f: fstp dword ptr [eax + 0x5c] */
  WF32((uint32_t)(eax + 0x5cu), ST0); FPOP();
/* 97b732: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97b736: fmul dword ptr [eax + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x60u)));
/* 97b739: fstp dword ptr [eax + 0x60] */
  WF32((uint32_t)(eax + 0x60u), ST0); FPOP();
L_97b73c: /* 97b73c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97b740(void) {
  LOAD_REGS();
L_97b740: /* 97b740: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97b744: sub eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 97b747: je 0x97b75d */
  if (zf) goto L_97b75d;
L_97b749: /* 97b749: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97b74a: jne 0x97b76b */
  if (!zf) goto L_97b76b;
L_97b74c: /* 97b74c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 97b750: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b754: mov dword ptr [ecx + 0xc8], eax */
  W32((uint32_t)(ecx + 0xc8u), eax);
/* 97b75a: ret 0xc */
  esp += 16; SPILL(); return;
L_97b75d: /* 97b75d: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b761: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b765: mov dword ptr [eax + 0xc4], edx */
  W32((uint32_t)(eax + 0xc4u), edx);
L_97b76b: /* 97b76b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97b770(void) {
  LOAD_REGS();
L_97b770: /* 97b770: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97b780(void) {
  LOAD_REGS();
L_97b780: /* 97b780: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97b784: sub eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 97b787: je 0x97b7b3 */
  if (zf) goto L_97b7b3;
L_97b789: /* 97b789: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97b78a: je 0x97b7a2 */
  if (zf) goto L_97b7a2;
L_97b78c: /* 97b78c: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 97b78f: jne 0x97b7c1 */
  if (!zf) goto L_97b7c1;
L_97b791: /* 97b791: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 97b795: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b799: mov dword ptr [ecx + 0xcc], eax */
  W32((uint32_t)(ecx + 0xccu), eax);
/* 97b79f: ret 0xc */
  esp += 16; SPILL(); return;
L_97b7a2: /* 97b7a2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97b7a6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b7aa: mov dword ptr [eax + 0x9c], edx */
  W32((uint32_t)(eax + 0x9cu), edx);
/* 97b7b0: ret 0xc */
  esp += 16; SPILL(); return;
L_97b7b3: /* 97b7b3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97b7b7: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b7bb: mov dword ptr [edx + 0x98], ecx */
  W32((uint32_t)(edx + 0x98u), ecx);
L_97b7c1: /* 97b7c1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97b7d0(void) {
  LOAD_REGS();
L_97b7d0: /* 97b7d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97b7d4: cmp eax, 0x19 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97b7d7: ja 0x97b95e */
  if ((!cf && !zf)) goto L_97b95e;
L_97b7dd: /* 97b7dd: jmp dword ptr [eax*4 + 0x97b964] */
  switch (R32((uint32_t)(eax*4 + 0x97b964u))) {
    case 0x97b7e4u: goto L_97b7e4;
    case 0x97b7f2u: goto L_97b7f2;
    case 0x97b800u: goto L_97b800;
    case 0x97b80eu: goto L_97b80e;
    case 0x97b81cu: goto L_97b81c;
    case 0x97b82au: goto L_97b82a;
    case 0x97b838u: goto L_97b838;
    case 0x97b846u: goto L_97b846;
    case 0x97b854u: goto L_97b854;
    case 0x97b862u: goto L_97b862;
    case 0x97b873u: goto L_97b873;
    case 0x97b884u: goto L_97b884;
    case 0x97b895u: goto L_97b895;
    case 0x97b8a6u: goto L_97b8a6;
    case 0x97b8b7u: goto L_97b8b7;
    case 0x97b8c8u: goto L_97b8c8;
    case 0x97b8d9u: goto L_97b8d9;
    case 0x97b8eau: goto L_97b8ea;
    case 0x97b8fbu: goto L_97b8fb;
    case 0x97b90cu: goto L_97b90c;
    case 0x97b91du: goto L_97b91d;
    case 0x97b92eu: goto L_97b92e;
    case 0x97b93fu: goto L_97b93f;
    case 0x97b950u: goto L_97b950;
    case 0x97b95eu: goto L_97b95e;
    default: guest_badjump(0x97b7dd, R32((uint32_t)(eax*4 + 0x97b964u))); return;
  }
L_97b7e4: /* 97b7e4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b7e8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b7ec: fstp dword ptr [eax + 0x5c] */
  WF32((uint32_t)(eax + 0x5cu), ST0); FPOP();
/* 97b7ef: ret 0xc */
  esp += 16; SPILL(); return;
L_97b7f2: /* 97b7f2: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b7f6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b7fa: fstp dword ptr [ecx + 0x60] */
  WF32((uint32_t)(ecx + 0x60u), ST0); FPOP();
/* 97b7fd: ret 0xc */
  esp += 16; SPILL(); return;
L_97b800: /* 97b800: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b804: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b808: fstp dword ptr [edx + 0x64] */
  WF32((uint32_t)(edx + 0x64u), ST0); FPOP();
/* 97b80b: ret 0xc */
  esp += 16; SPILL(); return;
L_97b80e: /* 97b80e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b812: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b816: fstp dword ptr [eax + 0x68] */
  WF32((uint32_t)(eax + 0x68u), ST0); FPOP();
/* 97b819: ret 0xc */
  esp += 16; SPILL(); return;
L_97b81c: /* 97b81c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b820: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b824: fstp dword ptr [ecx + 0x6c] */
  WF32((uint32_t)(ecx + 0x6cu), ST0); FPOP();
/* 97b827: ret 0xc */
  esp += 16; SPILL(); return;
L_97b82a: /* 97b82a: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b82e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b832: fstp dword ptr [edx + 0x70] */
  WF32((uint32_t)(edx + 0x70u), ST0); FPOP();
/* 97b835: ret 0xc */
  esp += 16; SPILL(); return;
L_97b838: /* 97b838: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b83c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b840: fstp dword ptr [eax + 0x74] */
  WF32((uint32_t)(eax + 0x74u), ST0); FPOP();
/* 97b843: ret 0xc */
  esp += 16; SPILL(); return;
L_97b846: /* 97b846: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b84a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b84e: fstp dword ptr [ecx + 0x78] */
  WF32((uint32_t)(ecx + 0x78u), ST0); FPOP();
/* 97b851: ret 0xc */
  esp += 16; SPILL(); return;
L_97b854: /* 97b854: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b858: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b85c: fstp dword ptr [edx + 0x7c] */
  WF32((uint32_t)(edx + 0x7cu), ST0); FPOP();
/* 97b85f: ret 0xc */
  esp += 16; SPILL(); return;
L_97b862: /* 97b862: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b866: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b86a: fstp dword ptr [eax + 0x80] */
  WF32((uint32_t)(eax + 0x80u), ST0); FPOP();
/* 97b870: ret 0xc */
  esp += 16; SPILL(); return;
L_97b873: /* 97b873: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b877: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b87b: fstp dword ptr [ecx + 0x84] */
  WF32((uint32_t)(ecx + 0x84u), ST0); FPOP();
/* 97b881: ret 0xc */
  esp += 16; SPILL(); return;
L_97b884: /* 97b884: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b888: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b88c: fstp dword ptr [edx + 0x88] */
  WF32((uint32_t)(edx + 0x88u), ST0); FPOP();
/* 97b892: ret 0xc */
  esp += 16; SPILL(); return;
L_97b895: /* 97b895: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b899: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b89d: fstp dword ptr [eax + 0x8c] */
  WF32((uint32_t)(eax + 0x8cu), ST0); FPOP();
/* 97b8a3: ret 0xc */
  esp += 16; SPILL(); return;
L_97b8a6: /* 97b8a6: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b8aa: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b8ae: fstp dword ptr [ecx + 0x90] */
  WF32((uint32_t)(ecx + 0x90u), ST0); FPOP();
/* 97b8b4: ret 0xc */
  esp += 16; SPILL(); return;
L_97b8b7: /* 97b8b7: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b8bb: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b8bf: fstp dword ptr [edx + 0x94] */
  WF32((uint32_t)(edx + 0x94u), ST0); FPOP();
/* 97b8c5: ret 0xc */
  esp += 16; SPILL(); return;
L_97b8c8: /* 97b8c8: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b8cc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b8d0: fstp dword ptr [eax + 0xa0] */
  WF32((uint32_t)(eax + 0xa0u), ST0); FPOP();
/* 97b8d6: ret 0xc */
  esp += 16; SPILL(); return;
L_97b8d9: /* 97b8d9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b8dd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b8e1: fstp dword ptr [ecx + 0xa4] */
  WF32((uint32_t)(ecx + 0xa4u), ST0); FPOP();
/* 97b8e7: ret 0xc */
  esp += 16; SPILL(); return;
L_97b8ea: /* 97b8ea: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b8ee: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b8f2: fstp dword ptr [edx + 0xa8] */
  WF32((uint32_t)(edx + 0xa8u), ST0); FPOP();
/* 97b8f8: ret 0xc */
  esp += 16; SPILL(); return;
L_97b8fb: /* 97b8fb: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b8ff: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b903: fstp dword ptr [eax + 0xac] */
  WF32((uint32_t)(eax + 0xacu), ST0); FPOP();
/* 97b909: ret 0xc */
  esp += 16; SPILL(); return;
L_97b90c: /* 97b90c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b910: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b914: fstp dword ptr [ecx + 0xb0] */
  WF32((uint32_t)(ecx + 0xb0u), ST0); FPOP();
/* 97b91a: ret 0xc */
  esp += 16; SPILL(); return;
L_97b91d: /* 97b91d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b921: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b925: fstp dword ptr [edx + 0xb4] */
  WF32((uint32_t)(edx + 0xb4u), ST0); FPOP();
/* 97b92b: ret 0xc */
  esp += 16; SPILL(); return;
L_97b92e: /* 97b92e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b932: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97b936: fstp dword ptr [eax + 0xb8] */
  WF32((uint32_t)(eax + 0xb8u), ST0); FPOP();
/* 97b93c: ret 0xc */
  esp += 16; SPILL(); return;
L_97b93f: /* 97b93f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b943: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97b947: fstp dword ptr [ecx + 0xbc] */
  WF32((uint32_t)(ecx + 0xbcu), ST0); FPOP();
/* 97b94d: ret 0xc */
  esp += 16; SPILL(); return;
L_97b950: /* 97b950: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97b954: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97b958: fstp dword ptr [edx + 0xc0] */
  WF32((uint32_t)(edx + 0xc0u), ST0); FPOP();
L_97b95e: /* 97b95e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97b9d0(void) {
  LOAD_REGS();
L_97b9d0: /* 97b9d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97b9d1: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 97b9d3: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97b9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97b9d9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97b9db: mov esi, eax */
  esi = eax;
/* 97b9dd: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97b9e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97b9e3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97b9e5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 97b9e8: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97b9eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97b9ee: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97b9f0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 97b9f3: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97b9f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97b9f9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97b9fb: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 97b9fe: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97ba04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97ba04: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97ba06: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 97ba09: call 0x974dc0 */
  esp -= 4; W32(esp, 0x97ba0eu); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 97ba0e: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97ba10: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 97ba13: call 0x974dc0 */
  esp -= 4; W32(esp, 0x97ba18u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 97ba18: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97ba1a: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 97ba1d: call 0x974dc0 */
  esp -= 4; W32(esp, 0x97ba22u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 97ba22: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 97ba24: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 97ba27: call 0x974dc0 */
  esp -= 4; W32(esp, 0x97ba2cu); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 97ba2c: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 97ba31: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 97ba34: mov dword ptr [esi + 0x50], 0x100 */
  W32((uint32_t)(esi + 0x50u), 0x100u);
/* 97ba3b: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97ba41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97ba41: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 97ba44: call 0x99c640 */
  esp -= 4; W32(esp, 0x97ba49u); SPILL(); f_99c640(); if (g_unwind) return; RELOAD();
/* 97ba49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ba4a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 97ba4d: call 0x97ba70 */
  esp -= 4; W32(esp, 0x97ba52u); SPILL(); f_97ba70(); if (g_unwind) return; RELOAD();
/* 97ba52: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97ba56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ba57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ba58: call 0x97da00 */
  esp -= 4; W32(esp, 0x97ba5du); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97ba5d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97ba61: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 97ba64: mov eax, esi */
  eax = esi;
/* 97ba66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ba67: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97ba70(void) {
  LOAD_REGS();
L_97ba70: /* 97ba70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ba71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ba72: xor eax, eax */
  eax = 0;
/* 97ba74: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 97ba78: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 97ba7b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 97ba7d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 97ba80: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 97ba83: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 97ba86: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 97ba89: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 97ba8c: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 97ba8f: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 97ba92: mov ecx, 0x3f800000 */
  ecx = 0x3f800000u;
/* 97ba97: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 97ba9a: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 97ba9d: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 97baa0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97baa3: mov dword ptr [ecx], ecx */
  W32((uint32_t)(ecx), ecx);
/* 97baa5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97baa8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97baaa: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 97baad: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97bab0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 97bab3: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97bab6: mov dword ptr [ecx], ecx */
  W32((uint32_t)(ecx), ecx);
/* 97bab8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97babb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97babd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 97bac0: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97bac3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 97bac6: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 97bac9: mov dword ptr [ecx], ecx */
  W32((uint32_t)(ecx), ecx);
/* 97bacb: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 97bace: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97bad0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 97bad3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 97bad6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 97bad9: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97badc: mov dword ptr [ecx], ecx */
  W32((uint32_t)(ecx), ecx);
/* 97bade: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97bae1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97bae3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 97bae6: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97bae9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 97baec: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 97baef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97baf0: call 0x99c8a0 */
  esp -= 4; W32(esp, 0x97baf5u); SPILL(); f_99c8a0(); if (g_unwind) return; RELOAD();
/* 97baf5: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 97baf8: mov edi, dword ptr [esi + 0x30] */
  edi = R32((uint32_t)(esi + 0x30u));
/* 97bafb: imul eax, eax */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(eax);
  eax = (uint32_t)r;
  }
/* 97bafe: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 97baff: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 97bb02: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97bb04: mov ecx, eax */
  ecx = eax;
/* 97bb06: sar ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 97bb09: mov edx, ecx */
  edx = ecx;
/* 97bb0b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97bb0e: xor eax, eax */
  eax = 0;
/* 97bb10: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 97bb12: mov ecx, edx */
  ecx = edx;
/* 97bb14: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 97bb17: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 97bb19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97bb1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97bb1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97bb20(void) {
  LOAD_REGS();
L_97bb20: /* 97bb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97bb21: mov ebp, esp */
  ebp = esp;
/* 97bb23: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97bb26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bb27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bb28: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97bb2b: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 97bb2e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 97bb30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bb32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bb33: call 0x97b9d0 */
  esp -= 4; W32(esp, 0x97bb38u); SPILL(); f_97b9d0(); if (g_unwind) return; RELOAD();
/* 97bb38: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 97bb3b: mov ebx, eax */
  ebx = eax;
/* 97bb3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bb3e: lea eax, [ebx + 0x2c] */
  eax = (uint32_t)(ebx + 0x2cu);
/* 97bb41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bb42: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 97bb45: call 0x97da00 */
  esp -= 4; W32(esp, 0x97bb4au); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97bb4a: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 97bb4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bb4e: lea edx, [ebx + 0x28] */
  edx = (uint32_t)(ebx + 0x28u);
/* 97bb51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bb52: call 0x97da00 */
  esp -= 4; W32(esp, 0x97bb57u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97bb57: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 97bb5a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 97bb5d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bb5f: mov dword ptr [ebx + 0x3c], eax */
  W32((uint32_t)(ebx + 0x3cu), eax);
/* 97bb62: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 97bb65: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 97bb68: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 97bb6b: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 97bb6e: je 0x97bd2e */
  if (zf) goto L_97bd2e;
L_97bb74: /* 97bb74: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 97bb77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bb78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bb79: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97bb7eu); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97bb7e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 97bb81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bb82: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97bb87u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97bb87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bb89: je 0x97bbab */
  if (zf) goto L_97bbab;
L_97bb8b: /* 97bb8b: nop  */
/* 97bb8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97bb90: /* 97bb90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bb91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bb92: call 0x97a990 */
  esp -= 4; W32(esp, 0x97bb97u); SPILL(); f_97a990(); if (g_unwind) return; RELOAD();
/* 97bb97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bb98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bb99: call 0x97cae0 */
  esp -= 4; W32(esp, 0x97bb9eu); SPILL(); f_97cae0(); if (g_unwind) return; RELOAD();
/* 97bb9e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 97bba1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bba2: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97bba7u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97bba7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bba9: jne 0x97bb90 */
  if (!zf) goto L_97bb90;
L_97bbab: /* 97bbab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bbac: call 0x97c260 */
  esp -= 4; W32(esp, 0x97bbb1u); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 97bbb1: mov edi, eax */
  edi = eax;
/* 97bbb3: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 97bbba: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97bbbd: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97bbc0: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 97bbc3: call 0x99cc00 */
  esp -= 4; W32(esp, 0x97bbc8u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 97bbc8: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 97bbcf: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97bbd2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97bbd5: mov dword ptr [ebp - 4], esp */
  W32((uint32_t)(ebp + 0xfffffffcu), esp);
/* 97bbd8: call 0x99cc00 */
  esp -= 4; W32(esp, 0x97bbddu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 97bbdd: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 97bbe0: mov dword ptr [ebp - 8], esp */
  W32((uint32_t)(ebp + 0xfffffff8u), esp);
/* 97bbe3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bbe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bbe5: call 0x97c510 */
  esp -= 4; W32(esp, 0x97bbeau); SPILL(); f_97c510(); if (g_unwind) return; RELOAD();
/* 97bbea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97bbec: jle 0x97bcc0 */
  if ((zf || sf != of)) goto L_97bcc0;
L_97bbf2: /* 97bbf2: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 97bbf5: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 97bbf8: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 97bbfa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 97bbfd: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 97bc00: jmp 0x97bc05 */
  goto L_97bc05;
L_97bc02: /* 97bc02: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_97bc05: /* 97bc05: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 97bc08: mov edx, dword ptr [eax + esi] */
  edx = R32((uint32_t)(eax + esi));
/* 97bc0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bc0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bc0d: call 0x97a3b0 */
  esp -= 4; W32(esp, 0x97bc12u); SPILL(); f_97a3b0(); if (g_unwind) return; RELOAD();
/* 97bc12: mov edi, eax */
  edi = eax;
/* 97bc14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bc15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bc16: call 0x97cba0 */
  esp -= 4; W32(esp, 0x97bc1bu); SPILL(); f_97cba0(); if (g_unwind) return; RELOAD();
/* 97bc1b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 97bc1e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 97bc20: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97bc23: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 97bc24: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 97bc27: jne 0x97bc02 */
  if (!zf) goto L_97bc02;
L_97bc29: /* 97bc29: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 97bc2c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97bc2e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 97bc31: jle 0x97bcc0 */
  if ((zf || sf != of)) goto L_97bcc0;
L_97bc37: /* 97bc37: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 97bc3a: mov eax, 1 */
  eax = 0x1u;
/* 97bc3f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97bc42: mov dword ptr [ebp - 0xc], 0 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x0u);
/* 97bc49: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 97bc4c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 97bc4f: nop  */
L_97bc50: /* 97bc50: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97bc52: jge 0x97bca0 */
  if ((sf == of)) goto L_97bca0;
L_97bc54: /* 97bc54: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 97bc57: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 97bc5a: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 97bc5d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 97bc60: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 97bc62: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_97bc64: /* 97bc64: mov edx, dword ptr [esi + ebx] */
  edx = R32((uint32_t)(esi + ebx));
/* 97bc67: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 97bc6a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 97bc6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bc6e: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 97bc71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bc72: call 0x97a5f0 */
  esp -= 4; W32(esp, 0x97bc77u); SPILL(); f_97a5f0(); if (g_unwind) return; RELOAD();
/* 97bc77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bc79: jne 0x97bc8e */
  if (!zf) goto L_97bc8e;
L_97bc7b: /* 97bc7b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 97bc7e: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 97bc81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bc82: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97bc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bc85: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 97bc88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bc89: call 0x97a8b0 */
  esp -= 4; W32(esp, 0x97bc8eu); SPILL(); f_97a8b0(); if (g_unwind) return; RELOAD();
L_97bc8e: /* 97bc8e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97bc91: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 97bc92: jne 0x97bc64 */
  if (!zf) goto L_97bc64;
L_97bc94: /* 97bc94: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 97bc97: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 97bc9a: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 97bc9d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_97bca0: /* 97bca0: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 97bca3: mov ecx, 4 */
  ecx = 0x4u;
/* 97bca8: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97bcaa: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 97bcad: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 97bcb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97bcb1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 97bcb3: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 97bcb6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97bcb8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 97bcbb: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 97bcbe: jl 0x97bc50 */
  if ((sf != of)) goto L_97bc50;
L_97bcc0: /* 97bcc0: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 97bcc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bcc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bcc5: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97bccau); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97bcca: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 97bccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bcce: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97bcd3u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97bcd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bcd5: je 0x97bcf5 */
  if (zf) goto L_97bcf5;
L_97bcd7: /* 97bcd7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 97bcda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bcdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bcdc: call 0x979d80 */
  esp -= 4; W32(esp, 0x97bce1u); SPILL(); f_979d80(); if (g_unwind) return; RELOAD();
/* 97bce1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bce2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bce3: call 0x97ca20 */
  esp -= 4; W32(esp, 0x97bce8u); SPILL(); f_97ca20(); if (g_unwind) return; RELOAD();
/* 97bce8: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 97bceb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bcec: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97bcf1u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97bcf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bcf3: jne 0x97bcd7 */
  if (!zf) goto L_97bcd7;
L_97bcf5: /* 97bcf5: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 97bcf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bcf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bcfa: call 0x97c270 */
  esp -= 4; W32(esp, 0x97bcffu); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97bcff: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 97bd02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bd03: call 0x97c290 */
  esp -= 4; W32(esp, 0x97bd08u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97bd08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bd0a: je 0x97bd2e */
  if (zf) goto L_97bd2e;
L_97bd0c: /* 97bd0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97bd10: /* 97bd10: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 97bd13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bd14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bd15: call 0x97d1c0 */
  esp -= 4; W32(esp, 0x97bd1au); SPILL(); f_97d1c0(); if (g_unwind) return; RELOAD();
/* 97bd1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bd1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bd1c: call 0x97c960 */
  esp -= 4; W32(esp, 0x97bd21u); SPILL(); f_97c960(); if (g_unwind) return; RELOAD();
/* 97bd21: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 97bd24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bd25: call 0x97c290 */
  esp -= 4; W32(esp, 0x97bd2au); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97bd2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bd2c: jne 0x97bd10 */
  if (!zf) goto L_97bd10;
L_97bd2e: /* 97bd2e: mov eax, ebx */
  eax = ebx;
/* 97bd30: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* 97bd33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97bd34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97bd35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97bd36: mov esp, ebp */
  esp = ebp;
/* 97bd38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97bd39: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97bd40(void) {
  LOAD_REGS();
L_97bd40: /* 97bd40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bd41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97bd45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bd46: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97bd4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bd4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bd4c: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97bd51u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97bd51: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97bd55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bd56: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97bd5bu); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97bd5b: mov edi, eax */
  edi = eax;
/* 97bd5d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bd5f: je 0x97bd88 */
  if (zf) goto L_97bd88;
L_97bd61: /* 97bd61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bd62: call 0x97cb40 */
  esp -= 4; W32(esp, 0x97bd67u); SPILL(); f_97cb40(); if (g_unwind) return; RELOAD();
/* 97bd67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bd68: call 0x97acf0 */
  esp -= 4; W32(esp, 0x97bd6du); SPILL(); f_97acf0(); if (g_unwind) return; RELOAD();
/* 97bd6d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97bd71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bd72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bd73: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97bd78u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97bd78: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97bd7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bd7d: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97bd82u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97bd82: mov edi, eax */
  edi = eax;
/* 97bd84: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bd86: jne 0x97bd61 */
  if (!zf) goto L_97bd61;
L_97bd88: /* 97bd88: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97bd8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bd8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bd8e: call 0x97c300 */
  esp -= 4; W32(esp, 0x97bd93u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97bd93: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97bd97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bd98: call 0x97c320 */
  esp -= 4; W32(esp, 0x97bd9du); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97bd9d: mov edi, eax */
  edi = eax;
/* 97bd9f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bda1: je 0x97bdca */
  if (zf) goto L_97bdca;
L_97bda3: /* 97bda3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bda4: call 0x97cc20 */
  esp -= 4; W32(esp, 0x97bda9u); SPILL(); f_97cc20(); if (g_unwind) return; RELOAD();
/* 97bda9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bdaa: call 0x97a480 */
  esp -= 4; W32(esp, 0x97bdafu); SPILL(); f_97a480(); if (g_unwind) return; RELOAD();
/* 97bdaf: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97bdb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bdb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bdb5: call 0x97c300 */
  esp -= 4; W32(esp, 0x97bdbau); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97bdba: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97bdbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bdbf: call 0x97c320 */
  esp -= 4; W32(esp, 0x97bdc4u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97bdc4: mov edi, eax */
  edi = eax;
/* 97bdc6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bdc8: jne 0x97bda3 */
  if (!zf) goto L_97bda3;
L_97bdca: /* 97bdca: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97bdce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bdcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bdd0: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97bdd5u); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97bdd5: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97bdd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bdda: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97bddfu); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97bddf: mov edi, eax */
  edi = eax;
/* 97bde1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bde3: je 0x97be0c */
  if (zf) goto L_97be0c;
L_97bde5: /* 97bde5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bde6: call 0x97ca80 */
  esp -= 4; W32(esp, 0x97bdebu); SPILL(); f_97ca80(); if (g_unwind) return; RELOAD();
/* 97bdeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bdec: call 0x979eb0 */
  esp -= 4; W32(esp, 0x97bdf1u); SPILL(); f_979eb0(); if (g_unwind) return; RELOAD();
/* 97bdf1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97bdf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bdf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bdf7: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97bdfcu); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97bdfc: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97be00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97be01: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97be06u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97be06: mov edi, eax */
  edi = eax;
/* 97be08: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97be0a: jne 0x97bde5 */
  if (!zf) goto L_97bde5;
L_97be0c: /* 97be0c: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97be10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97be11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97be12: call 0x97c270 */
  esp -= 4; W32(esp, 0x97be17u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97be17: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97be1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97be1c: call 0x97c290 */
  esp -= 4; W32(esp, 0x97be21u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97be21: mov edi, eax */
  edi = eax;
/* 97be23: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97be25: je 0x97be4e */
  if (zf) goto L_97be4e;
L_97be27: /* 97be27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97be28: call 0x97c9c0 */
  esp -= 4; W32(esp, 0x97be2du); SPILL(); f_97c9c0(); if (g_unwind) return; RELOAD();
/* 97be2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97be2e: call 0x97d270 */
  esp -= 4; W32(esp, 0x97be33u); SPILL(); f_97d270(); if (g_unwind) return; RELOAD();
/* 97be33: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97be37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97be38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97be39: call 0x97c270 */
  esp -= 4; W32(esp, 0x97be3eu); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97be3e: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97be42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97be43: call 0x97c290 */
  esp -= 4; W32(esp, 0x97be48u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97be48: mov edi, eax */
  edi = eax;
/* 97be4a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97be4c: jne 0x97be27 */
  if (!zf) goto L_97be27;
L_97be4e: /* 97be4e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97be50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97be52: je 0x97be5b */
  if (zf) goto L_97be5b;
L_97be54: /* 97be54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97be55: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97be5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97be5b: /* 97be5b: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 97be5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97be60: je 0x97be69 */
  if (zf) goto L_97be69;
L_97be62: /* 97be62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97be63: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97be69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97be69: /* 97be69: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 97be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97be6e: je 0x97be77 */
  if (zf) goto L_97be77;
L_97be70: /* 97be70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97be71: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97be77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97be77: /* 97be77: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97be7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97be7b: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97be81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97be81: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 97be84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97be85: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97be8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97be8b: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 97be8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97be8f: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97be95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97be95: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97be98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97be99: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97be9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97be9f: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 97bea2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bea3: call 0x974e30 */
  esp -= 4; W32(esp, 0x97bea8u); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 97bea8: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 97beab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97beac: call 0x974e30 */
  esp -= 4; W32(esp, 0x97beb1u); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 97beb1: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 97beb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97beb5: call 0x974e30 */
  esp -= 4; W32(esp, 0x97bebau); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 97beba: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 97bebd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bebe: call 0x974e30 */
  esp -= 4; W32(esp, 0x97bec3u); SPILL(); f_974e30(); if (g_unwind) return; RELOAD();
/* 97bec3: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 97bec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bec7: call 0x99c8e0 */
  esp -= 4; W32(esp, 0x97beccu); SPILL(); f_99c8e0(); if (g_unwind) return; RELOAD();
/* 97becc: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 97becf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bed0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97bed6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97bed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bed7: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97beddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97bedd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97bede: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97bedf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97bef0(void) {
  LOAD_REGS();
L_97bef0: /* 97bef0: sub esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97bef6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bef7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97bef8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bef9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97befa: push 0x61 */
  { uint32_t v = 0x61u; esp -= 4; W32(esp, v); }
/* 97befc: call 0x974dc0 */
  esp -= 4; W32(esp, 0x97bf01u); SPILL(); f_974dc0(); if (g_unwind) return; RELOAD();
/* 97bf01: push 0x974da0 */
  { uint32_t v = 0x974da0u; esp -= 4; W32(esp, v); }
/* 97bf06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bf07: call 0x974ed0 */
  esp -= 4; W32(esp, 0x97bf0cu); SPILL(); f_974ed0(); if (g_unwind) return; RELOAD();
/* 97bf0c: mov ebx, dword ptr [esp + 0x120] */
  ebx = R32((uint32_t)(esp + 0x120u));
/* 97bf13: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97bf17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bf18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bf19: call 0x97c270 */
  esp -= 4; W32(esp, 0x97bf1eu); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97bf1e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97bf22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bf23: call 0x97c290 */
  esp -= 4; W32(esp, 0x97bf28u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97bf28: mov esi, dword ptr [esp + 0x11c] */
  esi = R32((uint32_t)(esp + 0x11cu));
/* 97bf2f: mov edi, eax */
  edi = eax;
/* 97bf31: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bf33: je 0x97bf60 */
  if (zf) goto L_97bf60;
L_97bf35: /* 97bf35: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97bf37: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 97bf3c: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 97bf40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bf41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bf42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bf43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bf44: call 0x97c670 */
  esp -= 4; W32(esp, 0x97bf49u); SPILL(); f_97c670(); if (g_unwind) return; RELOAD();
/* 97bf49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bf4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bf4b: call 0x97d410 */
  esp -= 4; W32(esp, 0x97bf50u); SPILL(); f_97d410(); if (g_unwind) return; RELOAD();
/* 97bf50: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97bf54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bf55: call 0x97c290 */
  esp -= 4; W32(esp, 0x97bf5au); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97bf5a: mov edi, eax */
  edi = eax;
/* 97bf5c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bf5e: jne 0x97bf35 */
  if (!zf) goto L_97bf35;
L_97bf60: /* 97bf60: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97bf64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bf65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bf66: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97bf6bu); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97bf6b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97bf6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bf70: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97bf75u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97bf75: mov edi, eax */
  edi = eax;
/* 97bf77: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bf79: je 0x97bfab */
  if (zf) goto L_97bfab;
L_97bf7b: /* 97bf7b: nop  */
/* 97bf7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97bf80: /* 97bf80: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97bf82: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 97bf87: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 97bf8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bf8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bf8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bf8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bf8f: call 0x97c7b0 */
  esp -= 4; W32(esp, 0x97bf94u); SPILL(); f_97c7b0(); if (g_unwind) return; RELOAD();
/* 97bf94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bf95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bf96: call 0x97a030 */
  esp -= 4; W32(esp, 0x97bf9bu); SPILL(); f_97a030(); if (g_unwind) return; RELOAD();
/* 97bf9b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97bf9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bfa0: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97bfa5u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97bfa5: mov edi, eax */
  edi = eax;
/* 97bfa7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bfa9: jne 0x97bf80 */
  if (!zf) goto L_97bf80;
L_97bfab: /* 97bfab: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97bfaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bfb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bfb1: call 0x97c300 */
  esp -= 4; W32(esp, 0x97bfb6u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97bfb6: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97bfba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bfbb: call 0x97c320 */
  esp -= 4; W32(esp, 0x97bfc0u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97bfc0: mov edi, eax */
  edi = eax;
/* 97bfc2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bfc4: je 0x97bff1 */
  if (zf) goto L_97bff1;
L_97bfc6: /* 97bfc6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97bfc8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 97bfcd: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 97bfd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bfd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97bfd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bfd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97bfd5: call 0x97c810 */
  esp -= 4; W32(esp, 0x97bfdau); SPILL(); f_97c810(); if (g_unwind) return; RELOAD();
/* 97bfda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bfdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97bfdc: call 0x97a6a0 */
  esp -= 4; W32(esp, 0x97bfe1u); SPILL(); f_97a6a0(); if (g_unwind) return; RELOAD();
/* 97bfe1: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97bfe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97bfe6: call 0x97c320 */
  esp -= 4; W32(esp, 0x97bfebu); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97bfeb: mov edi, eax */
  edi = eax;
/* 97bfed: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97bfef: jne 0x97bfc6 */
  if (!zf) goto L_97bfc6;
L_97bff1: /* 97bff1: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97bff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97bff6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97bff7: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97bffcu); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97bffc: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97c000: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c001: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97c006u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97c006: mov edi, eax */
  edi = eax;
/* 97c008: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c00a: je 0x97c03b */
  if (zf) goto L_97c03b;
L_97c00c: /* 97c00c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97c010: /* 97c010: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97c012: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 97c017: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 97c01b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c01c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c01d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c01e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c01f: call 0x97c870 */
  esp -= 4; W32(esp, 0x97c024u); SPILL(); f_97c870(); if (g_unwind) return; RELOAD();
/* 97c024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c025: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c026: call 0x97b580 */
  esp -= 4; W32(esp, 0x97c02bu); SPILL(); f_97b580(); if (g_unwind) return; RELOAD();
/* 97c02b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97c02f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c030: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97c035u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97c035: mov edi, eax */
  edi = eax;
/* 97c037: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c039: jne 0x97c010 */
  if (!zf) goto L_97c010;
L_97c03b: /* 97c03b: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c03f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c041: call 0x97c270 */
  esp -= 4; W32(esp, 0x97c046u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97c046: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97c04a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c04b: call 0x97c290 */
  esp -= 4; W32(esp, 0x97c050u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97c050: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c052: je 0x97c071 */
  if (zf) goto L_97c071;
L_97c054: /* 97c054: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97c056: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c057: call 0x97d1c0 */
  esp -= 4; W32(esp, 0x97c05cu); SPILL(); f_97d1c0(); if (g_unwind) return; RELOAD();
/* 97c05c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c05d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c05e: call 0x97c960 */
  esp -= 4; W32(esp, 0x97c063u); SPILL(); f_97c960(); if (g_unwind) return; RELOAD();
/* 97c063: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97c067: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c068: call 0x97c290 */
  esp -= 4; W32(esp, 0x97c06du); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97c06d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c06f: jne 0x97c054 */
  if (!zf) goto L_97c054;
L_97c071: /* 97c071: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c075: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c076: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c077: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97c07cu); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97c07c: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97c080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c081: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97c086u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97c086: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c088: je 0x97c0ad */
  if (zf) goto L_97c0ad;
L_97c08a: /* 97c08a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_97c090: /* 97c090: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97c092: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c093: call 0x979d80 */
  esp -= 4; W32(esp, 0x97c098u); SPILL(); f_979d80(); if (g_unwind) return; RELOAD();
/* 97c098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c099: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c09a: call 0x97ca20 */
  esp -= 4; W32(esp, 0x97c09fu); SPILL(); f_97ca20(); if (g_unwind) return; RELOAD();
/* 97c09f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97c0a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c0a4: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97c0a9u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97c0a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c0ab: jne 0x97c090 */
  if (!zf) goto L_97c090;
L_97c0ad: /* 97c0ad: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c0b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c0b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c0b3: call 0x97c300 */
  esp -= 4; W32(esp, 0x97c0b8u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97c0b8: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97c0bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c0bd: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c0c2u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c0c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c0c4: je 0x97c0e3 */
  if (zf) goto L_97c0e3;
L_97c0c6: /* 97c0c6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97c0c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c0c9: call 0x97a3b0 */
  esp -= 4; W32(esp, 0x97c0ceu); SPILL(); f_97a3b0(); if (g_unwind) return; RELOAD();
/* 97c0ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c0cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c0d0: call 0x97cba0 */
  esp -= 4; W32(esp, 0x97c0d5u); SPILL(); f_97cba0(); if (g_unwind) return; RELOAD();
/* 97c0d5: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97c0d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c0da: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c0dfu); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c0df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c0e1: jne 0x97c0c6 */
  if (!zf) goto L_97c0c6;
L_97c0e3: /* 97c0e3: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c0e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c0e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c0e9: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97c0eeu); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97c0ee: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97c0f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c0f3: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97c0f8u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97c0f8: mov edi, eax */
  edi = eax;
/* 97c0fa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c0fc: je 0x97c11f */
  if (zf) goto L_97c11f;
L_97c0fe: /* 97c0fe: mov edi, edi */
  edi = edi;
L_97c100: /* 97c100: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97c102: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c103: call 0x97a990 */
  esp -= 4; W32(esp, 0x97c108u); SPILL(); f_97a990(); if (g_unwind) return; RELOAD();
/* 97c108: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c109: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c10a: call 0x97cae0 */
  esp -= 4; W32(esp, 0x97c10fu); SPILL(); f_97cae0(); if (g_unwind) return; RELOAD();
/* 97c10f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97c113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c114: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97c119u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97c119: mov edi, eax */
  edi = eax;
/* 97c11b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c11d: jne 0x97c100 */
  if (!zf) goto L_97c100;
L_97c11f: /* 97c11f: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 97c123: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c124: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c125: call 0x97c300 */
  esp -= 4; W32(esp, 0x97c12au); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97c12a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97c12e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c12f: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c134u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c134: mov ebp, eax */
  ebp = eax;
/* 97c136: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c138: je 0x97c1c6 */
  if (zf) goto L_97c1c6;
L_97c13e: /* 97c13e: mov edi, edi */
  edi = edi;
L_97c140: /* 97c140: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97c144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c145: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c146: call 0x97c300 */
  esp -= 4; W32(esp, 0x97c14bu); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97c14b: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c14f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c150: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c155u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c155: mov edi, eax */
  edi = eax;
/* 97c157: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c159: je 0x97c1b2 */
  if (zf) goto L_97c1b2;
L_97c15b: /* 97c15b: nop  */
/* 97c15c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97c160: /* 97c160: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c161: call 0x97a690 */
  esp -= 4; W32(esp, 0x97c166u); SPILL(); f_97a690(); if (g_unwind) return; RELOAD();
/* 97c166: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97c167: mov ebx, eax */
  ebx = eax;
/* 97c169: call 0x97a690 */
  esp -= 4; W32(esp, 0x97c16eu); SPILL(); f_97a690(); if (g_unwind) return; RELOAD();
/* 97c16e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97c170: jge 0x97c19b */
  if ((sf == of)) goto L_97c19b;
L_97c172: /* 97c172: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c173: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97c174: call 0x97a5f0 */
  esp -= 4; W32(esp, 0x97c179u); SPILL(); f_97a5f0(); if (g_unwind) return; RELOAD();
/* 97c179: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c17b: jne 0x97c19b */
  if (!zf) goto L_97c19b;
L_97c17d: /* 97c17d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 97c180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c182: call 0x97c390 */
  esp -= 4; W32(esp, 0x97c187u); SPILL(); f_97c390(); if (g_unwind) return; RELOAD();
/* 97c187: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97c189: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c18a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c18b: mov ebx, eax */
  ebx = eax;
/* 97c18d: call 0x97c390 */
  esp -= 4; W32(esp, 0x97c192u); SPILL(); f_97c390(); if (g_unwind) return; RELOAD();
/* 97c192: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97c194: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c195: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c196: call 0x97a8b0 */
  esp -= 4; W32(esp, 0x97c19bu); SPILL(); f_97a8b0(); if (g_unwind) return; RELOAD();
L_97c19b: /* 97c19b: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c19f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c1a0: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c1a5u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c1a5: mov edi, eax */
  edi = eax;
/* 97c1a7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c1a9: jne 0x97c160 */
  if (!zf) goto L_97c160;
L_97c1ab: /* 97c1ab: mov ebx, dword ptr [esp + 0x120] */
  ebx = R32((uint32_t)(esp + 0x120u));
L_97c1b2: /* 97c1b2: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97c1b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c1b7: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c1bcu); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c1bc: mov ebp, eax */
  ebp = eax;
/* 97c1be: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c1c0: jne 0x97c140 */
  if (!zf) goto L_97c140;
L_97c1c6: /* 97c1c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c1c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c1c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97c1c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c1ca: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c1d0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c1e0(void) {
  LOAD_REGS();
L_97c1e0: /* 97c1e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c1e4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97c1e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c1f0(void) {
  LOAD_REGS();
L_97c1f0: /* 97c1f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c1f4: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 97c1f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c200(void) {
  LOAD_REGS();
L_97c200: /* 97c200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c204: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 97c207: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c210(void) {
  LOAD_REGS();
L_97c210: /* 97c210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c214: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 97c217: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c220(void) {
  LOAD_REGS();
L_97c220: /* 97c220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c224: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 97c227: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c230(void) {
  LOAD_REGS();
L_97c230: /* 97c230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c234: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 97c237: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c240(void) {
  LOAD_REGS();
L_97c240: /* 97c240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c244: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 97c247: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c250(void) {
  LOAD_REGS();
L_97c250: /* 97c250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c254: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 97c257: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c260(void) {
  LOAD_REGS();
L_97c260: /* 97c260: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c264: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* 97c267: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c270(void) {
  LOAD_REGS();
L_97c270: /* 97c270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c274: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 97c277: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97c279: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c27d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97c27f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c290(void) {
  LOAD_REGS();
L_97c290: /* 97c290: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c294: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 97c296: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97c299: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97c29b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97c29d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c2a0(void) {
  LOAD_REGS();
L_97c2a0: /* 97c2a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c2a4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 97c2a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97c2a9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c2ad: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97c2af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c2c0(void) {
  LOAD_REGS();
L_97c2c0: /* 97c2c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c2c4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 97c2c6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97c2c9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97c2cb: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97c2cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c2d0(void) {
  LOAD_REGS();
L_97c2d0: /* 97c2d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c2d4: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 97c2d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97c2d9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c2dd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97c2df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c2f0(void) {
  LOAD_REGS();
L_97c2f0: /* 97c2f0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c2f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 97c2f6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97c2f9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97c2fb: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97c2fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c300(void) {
  LOAD_REGS();
L_97c300: /* 97c300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c304: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 97c307: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97c309: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c30d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97c30f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c320(void) {
  LOAD_REGS();
L_97c320: /* 97c320: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c324: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 97c326: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97c329: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97c32b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97c32d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c330(void) {
  LOAD_REGS();
L_97c330: /* 97c330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c334: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 97c337: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97c33b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c33c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c33d: call 0x974fe0 */
  esp -= 4; W32(esp, 0x97c342u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 97c342: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c350(void) {
  LOAD_REGS();
L_97c350: /* 97c350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c354: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 97c357: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97c35b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c35c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c35d: call 0x974fe0 */
  esp -= 4; W32(esp, 0x97c362u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 97c362: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c370(void) {
  LOAD_REGS();
L_97c370: /* 97c370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c374: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 97c377: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97c37b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c37d: call 0x974fe0 */
  esp -= 4; W32(esp, 0x97c382u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 97c382: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c390(void) {
  LOAD_REGS();
L_97c390: /* 97c390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c394: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 97c397: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97c39b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c39c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c39d: call 0x974fe0 */
  esp -= 4; W32(esp, 0x97c3a2u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 97c3a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c3b0(void) {
  LOAD_REGS();
L_97c3b0: /* 97c3b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c3b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c3b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97c3b6: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97c3ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c3bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c3bc: call 0x97c270 */
  esp -= 4; W32(esp, 0x97c3c1u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97c3c1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97c3c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c3c6: call 0x97c290 */
  esp -= 4; W32(esp, 0x97c3cbu); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97c3cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c3cd: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97c3d1: je 0x97c3ea */
  if (zf) goto L_97c3ea;
L_97c3d3: /* 97c3d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c3d4: mov esi, ebx */
  esi = ebx;
L_97c3d6: /* 97c3d6: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c3da: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 97c3dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c3dd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c3e0: call 0x97c290 */
  esp -= 4; W32(esp, 0x97c3e5u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97c3e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c3e7: jne 0x97c3d6 */
  if (!zf) goto L_97c3d6;
L_97c3e9: /* 97c3e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97c3ea: /* 97c3ea: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 97c3ed: push 0x97c410 */
  { uint32_t v = 0x97c410u; esp -= 4; W32(esp, v); }
/* 97c3f2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97c3f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c3f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c3f6: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x97c3fcu); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 97c3fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c3ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c400: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c401: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c410(void) {
  LOAD_REGS();
L_97c410: /* 97c410: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c414: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97c416: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c41a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 97c41c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97c41e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c41f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c420: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_97c422: /* 97c422: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97c424: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97c426: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c428: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c42a: jne 0x97c44b */
  if (!zf) goto L_97c44b;
L_97c42c: /* 97c42c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c42e: je 0x97c446 */
  if (zf) goto L_97c446;
L_97c430: /* 97c430: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97c433: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97c436: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c438: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c43a: jne 0x97c44b */
  if (!zf) goto L_97c44b;
L_97c43c: /* 97c43c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c43f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c442: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c444: jne 0x97c422 */
  if (!zf) goto L_97c422;
L_97c446: /* 97c446: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c447: xor eax, eax */
  eax = 0;
/* 97c449: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c44a: ret  */
  esp += 4; SPILL(); return;
L_97c44b: /* 97c44b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97c44d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c44e: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97c451: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c452: ret  */
  esp += 4; SPILL(); return;
}

void f_97c460(void) {
  LOAD_REGS();
L_97c460: /* 97c460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c461: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c462: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97c466: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97c46a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c46b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c46c: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97c471u); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97c471: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97c475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c476: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97c47bu); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97c47b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c47d: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97c481: je 0x97c49a */
  if (zf) goto L_97c49a;
L_97c483: /* 97c483: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c484: mov esi, ebx */
  esi = ebx;
L_97c486: /* 97c486: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c48a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 97c48c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c48d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c490: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97c495u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97c495: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c497: jne 0x97c486 */
  if (!zf) goto L_97c486;
L_97c499: /* 97c499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97c49a: /* 97c49a: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 97c49d: push 0x97c4c0 */
  { uint32_t v = 0x97c4c0u; esp -= 4; W32(esp, v); }
/* 97c4a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97c4a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c4a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c4a6: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x97c4acu); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 97c4ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c4af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c4b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c4b1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c4c0(void) {
  LOAD_REGS();
L_97c4c0: /* 97c4c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c4c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97c4c6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c4ca: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 97c4cc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97c4ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c4cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c4d0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_97c4d2: /* 97c4d2: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97c4d4: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97c4d6: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c4d8: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c4da: jne 0x97c4fb */
  if (!zf) goto L_97c4fb;
L_97c4dc: /* 97c4dc: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c4de: je 0x97c4f6 */
  if (zf) goto L_97c4f6;
L_97c4e0: /* 97c4e0: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97c4e3: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97c4e6: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c4e8: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c4ea: jne 0x97c4fb */
  if (!zf) goto L_97c4fb;
L_97c4ec: /* 97c4ec: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c4ef: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c4f2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c4f4: jne 0x97c4d2 */
  if (!zf) goto L_97c4d2;
L_97c4f6: /* 97c4f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c4f7: xor eax, eax */
  eax = 0;
/* 97c4f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c4fa: ret  */
  esp += 4; SPILL(); return;
L_97c4fb: /* 97c4fb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97c4fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c4fe: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97c501: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c502: ret  */
  esp += 4; SPILL(); return;
}

void f_97c510(void) {
  LOAD_REGS();
L_97c510: /* 97c510: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c511: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c512: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97c516: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97c51a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c51b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c51c: call 0x97c300 */
  esp -= 4; W32(esp, 0x97c521u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97c521: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97c525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c526: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c52bu); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c52b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c52d: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97c531: je 0x97c54a */
  if (zf) goto L_97c54a;
L_97c533: /* 97c533: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c534: mov esi, ebx */
  esi = ebx;
L_97c536: /* 97c536: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c53a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 97c53c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c53d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c540: call 0x97c320 */
  esp -= 4; W32(esp, 0x97c545u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97c545: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c547: jne 0x97c536 */
  if (!zf) goto L_97c536;
L_97c549: /* 97c549: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97c54a: /* 97c54a: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 97c54d: push 0x97c570 */
  { uint32_t v = 0x97c570u; esp -= 4; W32(esp, v); }
/* 97c552: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97c554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c555: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c556: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x97c55cu); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 97c55c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c55f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c560: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c561: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c570(void) {
  LOAD_REGS();
L_97c570: /* 97c570: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c574: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97c576: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c57a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 97c57c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97c57e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c57f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c580: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_97c582: /* 97c582: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97c584: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97c586: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c588: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c58a: jne 0x97c5ab */
  if (!zf) goto L_97c5ab;
L_97c58c: /* 97c58c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c58e: je 0x97c5a6 */
  if (zf) goto L_97c5a6;
L_97c590: /* 97c590: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97c593: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97c596: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c598: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c59a: jne 0x97c5ab */
  if (!zf) goto L_97c5ab;
L_97c59c: /* 97c59c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c59f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c5a2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c5a4: jne 0x97c582 */
  if (!zf) goto L_97c582;
L_97c5a6: /* 97c5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c5a7: xor eax, eax */
  eax = 0;
/* 97c5a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c5aa: ret  */
  esp += 4; SPILL(); return;
L_97c5ab: /* 97c5ab: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97c5ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c5ae: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97c5b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c5b2: ret  */
  esp += 4; SPILL(); return;
}

void f_97c5c0(void) {
  LOAD_REGS();
L_97c5c0: /* 97c5c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c5c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c5c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97c5c6: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97c5ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c5cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c5cc: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97c5d1u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97c5d1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97c5d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c5d6: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97c5dbu); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97c5db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c5dd: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97c5e1: je 0x97c5fa */
  if (zf) goto L_97c5fa;
L_97c5e3: /* 97c5e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c5e4: mov esi, ebx */
  esi = ebx;
L_97c5e6: /* 97c5e6: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c5ea: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 97c5ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c5ed: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c5f0: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97c5f5u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97c5f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c5f7: jne 0x97c5e6 */
  if (!zf) goto L_97c5e6;
L_97c5f9: /* 97c5f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97c5fa: /* 97c5fa: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 97c5fd: push 0x97c620 */
  { uint32_t v = 0x97c620u; esp -= 4; W32(esp, v); }
/* 97c602: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97c604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c605: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c606: call dword ptr [0xcfb068] */
  esp -= 4; W32(esp, 0x97c60cu); SPILL(); f_40317f(); if (g_unwind) return; /* MSVCR70!qsort */ RELOAD();
/* 97c60c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c60f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c610: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c611: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c620(void) {
  LOAD_REGS();
L_97c620: /* 97c620: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c624: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97c626: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97c62a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 97c62c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97c62e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c62f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c630: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
L_97c632: /* 97c632: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97c634: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97c636: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c638: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c63a: jne 0x97c65b */
  if (!zf) goto L_97c65b;
L_97c63c: /* 97c63c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c63e: je 0x97c656 */
  if (zf) goto L_97c656;
L_97c640: /* 97c640: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97c643: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97c646: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97c648: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97c64a: jne 0x97c65b */
  if (!zf) goto L_97c65b;
L_97c64c: /* 97c64c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c64f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97c652: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c654: jne 0x97c632 */
  if (!zf) goto L_97c632;
L_97c656: /* 97c656: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c657: xor eax, eax */
  eax = 0;
/* 97c659: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c65a: ret  */
  esp += 4; SPILL(); return;
L_97c65b: /* 97c65b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97c65d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c65e: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97c661: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c662: ret  */
  esp += 4; SPILL(); return;
}

void f_97c670(void) {
  LOAD_REGS();
L_97c670: /* 97c670: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97c674: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97c678: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 97c67c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c67d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c67e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c67f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c680: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c681: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x97c687u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 97c687: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 97c68b: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 97c68f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97c692: /* 97c692: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 97c696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c697: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c698: call 0x97c330 */
  esp -= 4; W32(esp, 0x97c69du); SPILL(); f_97c330(); if (g_unwind) return; RELOAD();
/* 97c69d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c69f: jne 0x97c6b4 */
  if (!zf) goto L_97c6b4;
L_97c6a1: /* 97c6a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c6a3: je 0x97c6c3 */
  if (zf) goto L_97c6c3;
L_97c6a5: /* 97c6a5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 97c6a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c6aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c6ab: call 0x97c330 */
  esp -= 4; W32(esp, 0x97c6b0u); SPILL(); f_97c330(); if (g_unwind) return; RELOAD();
/* 97c6b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c6b2: je 0x97c6c3 */
  if (zf) goto L_97c6c3;
L_97c6b4: /* 97c6b4: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 97c6b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c6b9: call 0x97c6d0 */
  esp -= 4; W32(esp, 0x97c6beu); SPILL(); f_97c6d0(); if (g_unwind) return; RELOAD();
/* 97c6be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c6c1: jmp 0x97c692 */
  goto L_97c692;
L_97c6c3: /* 97c6c3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 97c6c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c6c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c6c9: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_97c6d0(void) {
  LOAD_REGS();
L_97c6d0: /* 97c6d0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97c6d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c6d4: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 97c6d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97c6d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c6da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c6db: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 97c6dd: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97c6e0: xor eax, eax */
  eax = 0;
/* 97c6e2: xor ebp, ebp */
  ebp = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97c6e4: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97c6e6: mov edi, dword ptr [0xcfb0b0] */
  edi = R32((uint32_t)(0xcfb0b0u));
/* 97c6ec: not ecx */
  ecx = ~ecx;
/* 97c6ee: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97c6ef: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 97c6f3: lea esi, [ecx - 1] */
  esi = (uint32_t)(ecx + 0xffffffffu);
L_97c6f6: /* 97c6f6: mov eax, dword ptr [0xcfb0ac] */
  eax = R32((uint32_t)(0xcfb0acu));
/* 97c6fb: cmp dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97c6fe: jle 0x97c711 */
  if ((zf || sf != of)) goto L_97c711;
L_97c700: /* 97c700: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 97c702: movsx eax, byte ptr [ecx + esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + esi)));
/* 97c706: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 97c708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c709: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 97c70a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x97c70cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97c70c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c70f: jmp 0x97c727 */
  goto L_97c727;
L_97c711: /* 97c711: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 97c713: movsx eax, byte ptr [edx + esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + esi)));
/* 97c717: mov ecx, dword ptr [0xcfb0a8] */
  ecx = R32((uint32_t)(0xcfb0a8u));
/* 97c71d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97c71f: movzx eax, byte ptr [edx + eax*2] */
  eax = (uint32_t)(R8((uint32_t)(edx + eax*2)));
/* 97c723: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97c726: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_97c727: /* 97c727: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c729: je 0x97c72e */
  if (zf) goto L_97c72e;
L_97c72b: /* 97c72b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 97c72c: jmp 0x97c6f6 */
  goto L_97c6f6;
L_97c72e: /* 97c72e: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97c730: jle 0x97c792 */
  if ((zf || sf != of)) goto L_97c792;
L_97c732: /* 97c732: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 97c734: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 97c738: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 97c73a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c73c: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c740: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_97c742: /* 97c742: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97c744: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* 97c747: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97c748: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c74a: jne 0x97c742 */
  if (!zf) goto L_97c742;
L_97c74c: /* 97c74c: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c750: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c751: call dword ptr [0xcfb124] */
  esp -= 4; W32(esp, 0x97c757u); SPILL(); f_4152ea(); if (g_unwind) return; /* MSVCR70!atoi */ RELOAD();
/* 97c757: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97c758: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c759: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 97c75d: push 0xafddb8 */
  { uint32_t v = 0xafddb8u; esp -= 4; W32(esp, v); }
/* 97c762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c763: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97c769u); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97c769: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 97c76b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 97c76f: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 97c771: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c774: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97c778: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c77a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_97c780: /* 97c780: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 97c782: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 97c783: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 97c785: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97c786: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97c788: jne 0x97c780 */
  if (!zf) goto L_97c780;
L_97c78a: /* 97c78a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c78b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c78c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97c78d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c78e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c791: ret  */
  esp += 4; SPILL(); return;
L_97c792: /* 97c792: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 97c794: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97c797: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97c799: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97c79b: mov cx, word ptr [0xb03014] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb03014u))) & 0xffffu);
/* 97c7a2: mov word ptr [edi - 1], cx */
  W16((uint32_t)(edi + 0xffffffffu), (ecx & 0xffffu));
/* 97c7a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c7a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c7a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97c7a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c7aa: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c7ad: ret  */
  esp += 4; SPILL(); return;
}

void f_97c7b0(void) {
  LOAD_REGS();
L_97c7b0: /* 97c7b0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97c7b4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97c7b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c7b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c7ba: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97c7be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c7bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c7c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c7c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c7c2: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x97c7c8u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 97c7c8: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 97c7cc: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 97c7d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97c7d3: /* 97c7d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c7d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c7d5: call 0x97c350 */
  esp -= 4; W32(esp, 0x97c7dau); SPILL(); f_97c350(); if (g_unwind) return; RELOAD();
/* 97c7da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c7dc: jne 0x97c7ed */
  if (!zf) goto L_97c7ed;
L_97c7de: /* 97c7de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c7e0: je 0x97c7fc */
  if (zf) goto L_97c7fc;
L_97c7e2: /* 97c7e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c7e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c7e4: call 0x97c350 */
  esp -= 4; W32(esp, 0x97c7e9u); SPILL(); f_97c350(); if (g_unwind) return; RELOAD();
/* 97c7e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c7eb: je 0x97c7fc */
  if (zf) goto L_97c7fc;
L_97c7ed: /* 97c7ed: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 97c7f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c7f2: call 0x97c6d0 */
  esp -= 4; W32(esp, 0x97c7f7u); SPILL(); f_97c6d0(); if (g_unwind) return; RELOAD();
/* 97c7f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c7fa: jmp 0x97c7d3 */
  goto L_97c7d3;
L_97c7fc: /* 97c7fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c7fd: mov eax, esi */
  eax = esi;
/* 97c7ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c800: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c801: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_97c810(void) {
  LOAD_REGS();
L_97c810: /* 97c810: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97c814: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97c818: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c819: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c81a: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97c81e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c822: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x97c828u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 97c828: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 97c82c: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 97c830: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97c833: /* 97c833: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c835: call 0x97c390 */
  esp -= 4; W32(esp, 0x97c83au); SPILL(); f_97c390(); if (g_unwind) return; RELOAD();
/* 97c83a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c83c: jne 0x97c84d */
  if (!zf) goto L_97c84d;
L_97c83e: /* 97c83e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c840: je 0x97c85c */
  if (zf) goto L_97c85c;
L_97c842: /* 97c842: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c843: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c844: call 0x97c390 */
  esp -= 4; W32(esp, 0x97c849u); SPILL(); f_97c390(); if (g_unwind) return; RELOAD();
/* 97c849: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c84b: je 0x97c85c */
  if (zf) goto L_97c85c;
L_97c84d: /* 97c84d: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 97c851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c852: call 0x97c6d0 */
  esp -= 4; W32(esp, 0x97c857u); SPILL(); f_97c6d0(); if (g_unwind) return; RELOAD();
/* 97c857: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c85a: jmp 0x97c833 */
  goto L_97c833;
L_97c85c: /* 97c85c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c85d: mov eax, esi */
  eax = esi;
/* 97c85f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c860: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c861: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_97c870(void) {
  LOAD_REGS();
L_97c870: /* 97c870: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 97c874: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97c878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c879: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c87a: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97c87e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c882: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x97c888u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 97c888: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 97c88c: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 97c890: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97c893: /* 97c893: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c894: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97c895: call 0x97c370 */
  esp -= 4; W32(esp, 0x97c89au); SPILL(); f_97c370(); if (g_unwind) return; RELOAD();
/* 97c89a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c89c: jne 0x97c8ad */
  if (!zf) goto L_97c8ad;
L_97c89e: /* 97c89e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c8a0: je 0x97c8bc */
  if (zf) goto L_97c8bc;
L_97c8a2: /* 97c8a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c8a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c8a4: call 0x97c370 */
  esp -= 4; W32(esp, 0x97c8a9u); SPILL(); f_97c370(); if (g_unwind) return; RELOAD();
/* 97c8a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c8ab: je 0x97c8bc */
  if (zf) goto L_97c8bc;
L_97c8ad: /* 97c8ad: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 97c8b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c8b2: call 0x97c6d0 */
  esp -= 4; W32(esp, 0x97c8b7u); SPILL(); f_97c6d0(); if (g_unwind) return; RELOAD();
/* 97c8b7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97c8ba: jmp 0x97c893 */
  goto L_97c893;
L_97c8bc: /* 97c8bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c8bd: mov eax, esi */
  eax = esi;
/* 97c8bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c8c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97c8c1: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_97c8d0(void) {
  LOAD_REGS();
L_97c8d0: /* 97c8d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97c8d4: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 97c8d7: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 97c8da: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c8dc: add eax, dword ptr [ecx + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c8df: add eax, dword ptr [ecx + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x40u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97c8e2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 97c8e4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 97c8e6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97c8e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c8f0(void) {
  LOAD_REGS();
L_97c8f0: /* 97c8f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c8f4: fld dword ptr [eax + 0x54] */
  { double v = F32((uint32_t)(eax + 0x54u)); FPUSH(v); }
/* 97c8f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c900(void) {
  LOAD_REGS();
L_97c900: /* 97c900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c904: fld dword ptr [eax + 0x58] */
  { double v = F32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* 97c907: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97c910(void) {
  LOAD_REGS();
L_97c910: /* 97c910: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97c920(void) {
  LOAD_REGS();
L_97c920: /* 97c920: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97c924: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97c928: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* 97c92b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c930(void) {
  LOAD_REGS();
L_97c930: /* 97c930: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97c934: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97c937: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97c93b: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97c940(void) {
  LOAD_REGS();
L_97c940: /* 97c940: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97c944: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97c947: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97c94b: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97c950(void) {
  LOAD_REGS();
L_97c950: /* 97c950: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97c954: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97c958: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* 97c95b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c960(void) {
  LOAD_REGS();
L_97c960: /* 97c960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c961: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97c965: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c966: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 97c96a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97c96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c96f: je 0x97c97f */
  if (zf) goto L_97c97f;
L_97c971: /* 97c971: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97c973: je 0x97c9b9 */
  if (zf) goto L_97c9b9;
L_97c975: /* 97c975: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c977: je 0x97c97f */
  if (zf) goto L_97c97f;
L_97c979: /* 97c979: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c97a: call 0x97c9c0 */
  esp -= 4; W32(esp, 0x97c97fu); SPILL(); f_97c9c0(); if (g_unwind) return; RELOAD();
L_97c97f: /* 97c97f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97c981: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97c987u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97c987: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 97c98a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97c98d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 97c990: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 97c993: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97c996: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 97c999: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97c99b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97c99e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97c9a1: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97c9a4: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97c9a6: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 97c9a9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97c9ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c9ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c9ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97c9ae: call 0x974f00 */
  esp -= 4; W32(esp, 0x97c9b3u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 97c9b3: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 97c9b6: inc dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x40u), r);
  }
L_97c9b9: /* 97c9b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97c9ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97c9bb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97c9c0(void) {
  LOAD_REGS();
L_97c9c0: /* 97c9c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97c9c1: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 97c9c5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97c9c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97c9ca: je 0x97ca14 */
  if (zf) goto L_97ca14;
L_97c9cc: /* 97c9cc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97c9cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97c9d0: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 97c9d2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97c9d4: je 0x97c9e1 */
  if (zf) goto L_97c9e1;
L_97c9d6: /* 97c9d6: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97c9d9: je 0x97c9e1 */
  if (zf) goto L_97c9e1;
L_97c9db: /* 97c9db: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 97c9dd: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97c9df: jne 0x97c9d6 */
  if (!zf) goto L_97c9d6;
L_97c9e1: /* 97c9e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97c9e3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97c9e6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97c9e9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97c9ec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97c9ee: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97c9f0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 97c9f3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 97c9f6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97c9f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97c9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97c9fa: call 0x975020 */
  esp -= 4; W32(esp, 0x97c9ffu); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 97c9ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ca00: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97ca06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97ca06: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97ca09: dec dword ptr [eax + 0x40] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 97ca0c: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 97ca13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97ca14: /* 97ca14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ca15: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97ca20(void) {
  LOAD_REGS();
L_97ca20: /* 97ca20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ca21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97ca25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ca26: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 97ca2a: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97ca2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ca2f: je 0x97ca37 */
  if (zf) goto L_97ca37;
L_97ca31: /* 97ca31: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97ca33: je 0x97ca79 */
  if (zf) goto L_97ca79;
L_97ca35: /* 97ca35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_97ca37: /* 97ca37: je 0x97ca3f */
  if (zf) goto L_97ca3f;
L_97ca39: /* 97ca39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ca3a: call 0x97ca80 */
  esp -= 4; W32(esp, 0x97ca3fu); SPILL(); f_97ca80(); if (g_unwind) return; RELOAD();
L_97ca3f: /* 97ca3f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97ca41: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97ca47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97ca47: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 97ca4a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97ca4d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 97ca50: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 97ca53: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97ca56: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 97ca59: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97ca5b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97ca5e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97ca61: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 97ca64: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97ca66: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 97ca69: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97ca6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ca6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ca6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ca6e: call 0x974f00 */
  esp -= 4; W32(esp, 0x97ca73u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 97ca73: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 97ca76: inc dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x44u), r);
  }
L_97ca79: /* 97ca79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ca7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ca7b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97ca80(void) {
  LOAD_REGS();
L_97ca80: /* 97ca80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ca81: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 97ca85: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97ca88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ca8a: je 0x97cad4 */
  if (zf) goto L_97cad4;
L_97ca8c: /* 97ca8c: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 97ca8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ca90: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 97ca92: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97ca94: je 0x97caa1 */
  if (zf) goto L_97caa1;
L_97ca96: /* 97ca96: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97ca99: je 0x97caa1 */
  if (zf) goto L_97caa1;
L_97ca9b: /* 97ca9b: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 97ca9d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97ca9f: jne 0x97ca96 */
  if (!zf) goto L_97ca96;
L_97caa1: /* 97caa1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97caa3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97caa6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97caa9: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97caac: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97caae: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97cab0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 97cab3: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 97cab6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97cab8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cab9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97caba: call 0x975020 */
  esp -= 4; W32(esp, 0x97cabfu); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 97cabf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cac0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97cac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97cac6: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97cac9: dec dword ptr [eax + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x44u), r);
  }
/* 97cacc: mov dword ptr [edi + 8], 0 */
  W32((uint32_t)(edi + 0x8u), 0x0u);
/* 97cad3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97cad4: /* 97cad4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97cad5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97cae0(void) {
  LOAD_REGS();
L_97cae0: /* 97cae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cae1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97cae5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cae6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 97caea: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 97caed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97caef: je 0x97caf7 */
  if (zf) goto L_97caf7;
L_97caf1: /* 97caf1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97caf3: je 0x97cb39 */
  if (zf) goto L_97cb39;
L_97caf5: /* 97caf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_97caf7: /* 97caf7: je 0x97caff */
  if (zf) goto L_97caff;
L_97caf9: /* 97caf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cafa: call 0x97cb40 */
  esp -= 4; W32(esp, 0x97caffu); SPILL(); f_97cb40(); if (g_unwind) return; RELOAD();
L_97caff: /* 97caff: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97cb01: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97cb07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97cb07: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 97cb0a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97cb0d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 97cb10: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 97cb13: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97cb16: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 97cb19: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97cb1b: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97cb1e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97cb21: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 97cb24: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97cb26: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 97cb29: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97cb2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cb2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cb2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cb2e: call 0x974f00 */
  esp -= 4; W32(esp, 0x97cb33u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 97cb33: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 97cb36: inc dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x48u), r);
  }
L_97cb39: /* 97cb39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97cb3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cb3b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97cb40(void) {
  LOAD_REGS();
L_97cb40: /* 97cb40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cb41: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 97cb45: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 97cb48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cb4a: je 0x97cb94 */
  if (zf) goto L_97cb94;
L_97cb4c: /* 97cb4c: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 97cb4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cb50: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 97cb52: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97cb54: je 0x97cb61 */
  if (zf) goto L_97cb61;
L_97cb56: /* 97cb56: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97cb59: je 0x97cb61 */
  if (zf) goto L_97cb61;
L_97cb5b: /* 97cb5b: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 97cb5d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97cb5f: jne 0x97cb56 */
  if (!zf) goto L_97cb56;
L_97cb61: /* 97cb61: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97cb63: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97cb66: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97cb69: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97cb6c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97cb6e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97cb70: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 97cb73: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 97cb76: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97cb78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cb79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cb7a: call 0x975020 */
  esp -= 4; W32(esp, 0x97cb7fu); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 97cb7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cb80: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97cb86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97cb86: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 97cb89: dec dword ptr [eax + 0x48] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x48u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x48u), r);
  }
/* 97cb8c: mov dword ptr [edi + 0xc], 0 */
  W32((uint32_t)(edi + 0xcu), 0x0u);
/* 97cb93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97cb94: /* 97cb94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97cb95: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97cba0(void) {
  LOAD_REGS();
L_97cba0: /* 97cba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cba1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97cba5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cba6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 97cbaa: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97cbad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cbaf: je 0x97cbcb */
  if (zf) goto L_97cbcb;
L_97cbb1: /* 97cbb1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97cbb3: je 0x97cc11 */
  if (zf) goto L_97cc11;
L_97cbb5: /* 97cbb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cbb7: je 0x97cbcb */
  if (zf) goto L_97cbcb;
L_97cbb9: /* 97cbb9: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 97cbbc: cmp ecx, dword ptr [eax + 0x50] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97cbbf: jge 0x97cc11 */
  if ((sf == of)) goto L_97cc11;
L_97cbc1: /* 97cbc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cbc3: je 0x97cbcb */
  if (zf) goto L_97cbcb;
L_97cbc5: /* 97cbc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cbc6: call 0x97cc20 */
  esp -= 4; W32(esp, 0x97cbcbu); SPILL(); f_97cc20(); if (g_unwind) return; RELOAD();
L_97cbcb: /* 97cbcb: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97cbcd: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97cbd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97cbd3: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 97cbd6: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 97cbd9: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 97cbdc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97cbdf: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 97cbe2: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 97cbe5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 97cbe7: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 97cbea: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 97cbed: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 97cbf0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 97cbf2: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 97cbf5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97cbf7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cbf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cbf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cbfa: call 0x974f00 */
  esp -= 4; W32(esp, 0x97cbffu); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
/* 97cbff: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 97cc02: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 97cc05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cc06: call 0x99c770 */
  esp -= 4; W32(esp, 0x97cc0bu); SPILL(); f_99c770(); if (g_unwind) return; RELOAD();
/* 97cc0b: mov dword ptr [edi + 0x64], eax */
  W32((uint32_t)(edi + 0x64u), eax);
/* 97cc0e: inc dword ptr [esi + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4cu), r);
  }
L_97cc11: /* 97cc11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97cc12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cc13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97cc20(void) {
  LOAD_REGS();
L_97cc20: /* 97cc20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cc21: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 97cc25: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97cc28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cc2a: je 0x97cc91 */
  if (zf) goto L_97cc91;
L_97cc2c: /* 97cc2c: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 97cc2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cc30: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 97cc32: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97cc34: je 0x97cc41 */
  if (zf) goto L_97cc41;
L_97cc36: /* 97cc36: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97cc39: je 0x97cc41 */
  if (zf) goto L_97cc41;
L_97cc3b: /* 97cc3b: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 97cc3d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97cc3f: jne 0x97cc36 */
  if (!zf) goto L_97cc36;
L_97cc41: /* 97cc41: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97cc43: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 97cc46: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97cc49: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97cc4c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97cc4e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97cc50: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 97cc53: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 97cc56: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97cc58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cc59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cc5a: call 0x975020 */
  esp -= 4; W32(esp, 0x97cc5fu); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 97cc5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cc60: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97cc66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97cc66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cc67: call 0x97a910 */
  esp -= 4; W32(esp, 0x97cc6cu); SPILL(); f_97a910(); if (g_unwind) return; RELOAD();
/* 97cc6c: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 97cc6f: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 97cc72: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* 97cc75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cc76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cc77: call 0x99c860 */
  esp -= 4; W32(esp, 0x97cc7cu); SPILL(); f_99c860(); if (g_unwind) return; RELOAD();
/* 97cc7c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97cc7f: mov dword ptr [edi + 0x64], 0xffffffff */
  W32((uint32_t)(edi + 0x64u), 0xffffffffu);
/* 97cc86: dec dword ptr [eax + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x4cu), r);
  }
/* 97cc89: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 97cc90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97cc91: /* 97cc91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97cc92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97cca0(void) {
  LOAD_REGS();
L_97cca0: /* 97cca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cca1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97cca5: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97cca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ccaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ccab: call 0x97c270 */
  esp -= 4; W32(esp, 0x97ccb0u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97ccb0: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 97ccb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ccb5: call 0x97c290 */
  esp -= 4; W32(esp, 0x97ccbau); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97ccba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ccbc: je 0x97ccdf */
  if (zf) goto L_97ccdf;
L_97ccbe: /* 97ccbe: mov edi, edi */
  edi = edi;
L_97ccc0: /* 97ccc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ccc1: call 0x97c9c0 */
  esp -= 4; W32(esp, 0x97ccc6u); SPILL(); f_97c9c0(); if (g_unwind) return; RELOAD();
/* 97ccc6: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97ccca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cccb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cccc: call 0x97c270 */
  esp -= 4; W32(esp, 0x97ccd1u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97ccd1: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97ccd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ccd6: call 0x97c290 */
  esp -= 4; W32(esp, 0x97ccdbu); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97ccdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ccdd: jne 0x97ccc0 */
  if (!zf) goto L_97ccc0;
L_97ccdf: /* 97ccdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cce0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97ccf0(void) {
  LOAD_REGS();
L_97ccf0: /* 97ccf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ccf1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97ccf5: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97ccf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ccfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ccfb: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97cd00u); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97cd00: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 97cd04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cd05: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97cd0au); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97cd0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cd0c: je 0x97cd2f */
  if (zf) goto L_97cd2f;
L_97cd0e: /* 97cd0e: mov edi, edi */
  edi = edi;
L_97cd10: /* 97cd10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cd11: call 0x97ca80 */
  esp -= 4; W32(esp, 0x97cd16u); SPILL(); f_97ca80(); if (g_unwind) return; RELOAD();
/* 97cd16: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97cd1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cd1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cd1c: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97cd21u); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97cd21: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97cd25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cd26: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97cd2bu); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97cd2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cd2d: jne 0x97cd10 */
  if (!zf) goto L_97cd10;
L_97cd2f: /* 97cd2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cd30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97cd40(void) {
  LOAD_REGS();
L_97cd40: /* 97cd40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cd41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97cd45: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97cd49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cd4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cd4b: call 0x97c300 */
  esp -= 4; W32(esp, 0x97cd50u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97cd50: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 97cd54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cd55: call 0x97c320 */
  esp -= 4; W32(esp, 0x97cd5au); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97cd5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cd5c: je 0x97cd7f */
  if (zf) goto L_97cd7f;
L_97cd5e: /* 97cd5e: mov edi, edi */
  edi = edi;
L_97cd60: /* 97cd60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cd61: call 0x97cc20 */
  esp -= 4; W32(esp, 0x97cd66u); SPILL(); f_97cc20(); if (g_unwind) return; RELOAD();
/* 97cd66: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97cd6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cd6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cd6c: call 0x97c300 */
  esp -= 4; W32(esp, 0x97cd71u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97cd71: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97cd75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cd76: call 0x97c320 */
  esp -= 4; W32(esp, 0x97cd7bu); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97cd7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cd7d: jne 0x97cd60 */
  if (!zf) goto L_97cd60;
L_97cd7f: /* 97cd7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cd80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97cd90(void) {
  LOAD_REGS();
L_97cd90: /* 97cd90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cd91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97cd95: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97cd99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cd9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cd9b: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97cda0u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97cda0: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 97cda4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cda5: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97cdaau); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97cdaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cdac: je 0x97cdcf */
  if (zf) goto L_97cdcf;
L_97cdae: /* 97cdae: mov edi, edi */
  edi = edi;
L_97cdb0: /* 97cdb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cdb1: call 0x97cb40 */
  esp -= 4; W32(esp, 0x97cdb6u); SPILL(); f_97cb40(); if (g_unwind) return; RELOAD();
/* 97cdb6: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97cdba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cdbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cdbc: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97cdc1u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97cdc1: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97cdc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cdc6: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97cdcbu); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97cdcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cdcd: jne 0x97cdb0 */
  if (!zf) goto L_97cdb0;
L_97cdcf: /* 97cdcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cdd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97cde0(void) {
  LOAD_REGS();
L_97cde0: /* 97cde0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cde1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cde2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97cde6: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97cdea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cdeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cdec: call 0x97c270 */
  esp -= 4; W32(esp, 0x97cdf1u); SPILL(); f_97c270(); if (g_unwind) return; RELOAD();
/* 97cdf1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97cdf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cdf6: call 0x97c290 */
  esp -= 4; W32(esp, 0x97cdfbu); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97cdfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cdfd: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97ce01: je 0x97ce18 */
  if (zf) goto L_97ce18;
L_97ce03: /* 97ce03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ce04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ce05: call 0x97d5e0 */
  esp -= 4; W32(esp, 0x97ce0au); SPILL(); f_97d5e0(); if (g_unwind) return; RELOAD();
/* 97ce0a: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97ce0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ce0f: call 0x97c290 */
  esp -= 4; W32(esp, 0x97ce14u); SPILL(); f_97c290(); if (g_unwind) return; RELOAD();
/* 97ce14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ce16: jne 0x97ce03 */
  if (!zf) goto L_97ce03;
L_97ce18: /* 97ce18: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97ce1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ce1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ce1e: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97ce23u); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97ce23: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97ce27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ce28: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97ce2du); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97ce2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ce2f: je 0x97ce46 */
  if (zf) goto L_97ce46;
L_97ce31: /* 97ce31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ce32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ce33: call 0x97a1b0 */
  esp -= 4; W32(esp, 0x97ce38u); SPILL(); f_97a1b0(); if (g_unwind) return; RELOAD();
/* 97ce38: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97ce3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ce3d: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97ce42u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97ce42: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ce44: jne 0x97ce31 */
  if (!zf) goto L_97ce31;
L_97ce46: /* 97ce46: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97ce4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ce4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ce4c: call 0x97c300 */
  esp -= 4; W32(esp, 0x97ce51u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97ce51: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97ce55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ce56: call 0x97c320 */
  esp -= 4; W32(esp, 0x97ce5bu); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97ce5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ce5d: je 0x97ce75 */
  if (zf) goto L_97ce75;
L_97ce5f: /* 97ce5f: nop  */
L_97ce60: /* 97ce60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ce61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ce62: call 0x97a740 */
  esp -= 4; W32(esp, 0x97ce67u); SPILL(); f_97a740(); if (g_unwind) return; RELOAD();
/* 97ce67: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97ce6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ce6c: call 0x97c320 */
  esp -= 4; W32(esp, 0x97ce71u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97ce71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ce73: jne 0x97ce60 */
  if (!zf) goto L_97ce60;
L_97ce75: /* 97ce75: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97ce79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ce7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ce7b: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97ce80u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97ce80: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97ce84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ce85: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97ce8au); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97ce8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97ce8c: je 0x97cea5 */
  if (zf) goto L_97cea5;
L_97ce8e: /* 97ce8e: mov edi, edi */
  edi = edi;
L_97ce90: /* 97ce90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ce91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ce92: call 0x97b6e0 */
  esp -= 4; W32(esp, 0x97ce97u); SPILL(); f_97b6e0(); if (g_unwind) return; RELOAD();
/* 97ce97: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97ce9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ce9c: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97cea1u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97cea1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cea3: jne 0x97ce90 */
  if (!zf) goto L_97ce90;
L_97cea5: /* 97cea5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 97cea9: fmul dword ptr [edi + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3cu)));
/* 97ceac: fstp dword ptr [edi + 0x3c] */
  WF32((uint32_t)(edi + 0x3cu), ST0); FPOP();
/* 97ceaf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ceb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ceb1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97cec0(void) {
  LOAD_REGS();
L_97cec0: /* 97cec0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97cec4: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97cec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cec9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ceca: call 0x97c2a0 */
  esp -= 4; W32(esp, 0x97cecfu); SPILL(); f_97c2a0(); if (g_unwind) return; RELOAD();
/* 97cecf: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 97ced3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ced4: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97ced9u); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97ced9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cedb: je 0x97cf46 */
  if (zf) goto L_97cf46;
L_97cedd: /* 97cedd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97cede: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97cee2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97cee3: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 97cee7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cee8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cee9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97cef0: /* 97cef0: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 97cef3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97cef5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cef7: je 0x97cf34 */
  if (zf) goto L_97cf34;
L_97cef9: /* 97cef9: mov esi, ebp */
  esi = ebp;
/* 97cefb: nop  */
/* 97cefc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97cf00: /* 97cf00: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97cf02: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97cf04: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97cf06: jne 0x97cf24 */
  if (!zf) goto L_97cf24;
L_97cf08: /* 97cf08: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97cf0a: je 0x97cf20 */
  if (zf) goto L_97cf20;
L_97cf0c: /* 97cf0c: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97cf0f: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97cf11: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97cf14: jne 0x97cf24 */
  if (!zf) goto L_97cf24;
L_97cf16: /* 97cf16: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97cf19: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97cf1c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97cf1e: jne 0x97cf00 */
  if (!zf) goto L_97cf00;
L_97cf20: /* 97cf20: xor eax, eax */
  eax = 0;
/* 97cf22: jmp 0x97cf29 */
  goto L_97cf29;
L_97cf24: /* 97cf24: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97cf26: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97cf29: /* 97cf29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cf2b: jne 0x97cf34 */
  if (!zf) goto L_97cf34;
L_97cf2d: /* 97cf2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97cf2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cf2f: call 0x97da00 */
  esp -= 4; W32(esp, 0x97cf34u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_97cf34: /* 97cf34: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97cf38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cf39: call 0x97c2c0 */
  esp -= 4; W32(esp, 0x97cf3eu); SPILL(); f_97c2c0(); if (g_unwind) return; RELOAD();
/* 97cf3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cf40: jne 0x97cef0 */
  if (!zf) goto L_97cef0;
L_97cf42: /* 97cf42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97cf43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cf44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97cf45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_97cf46: /* 97cf46: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97cf50(void) {
  LOAD_REGS();
L_97cf50: /* 97cf50: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97cf54: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97cf58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cf59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cf5a: call 0x97c300 */
  esp -= 4; W32(esp, 0x97cf5fu); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97cf5f: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 97cf63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97cf64: call 0x97c320 */
  esp -= 4; W32(esp, 0x97cf69u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97cf69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cf6b: je 0x97cfd6 */
  if (zf) goto L_97cfd6;
L_97cf6d: /* 97cf6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97cf6e: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97cf72: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97cf73: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 97cf77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cf78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cf79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97cf80: /* 97cf80: lea edi, [eax + 8] */
  edi = (uint32_t)(eax + 0x8u);
/* 97cf83: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97cf85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cf87: je 0x97cfc4 */
  if (zf) goto L_97cfc4;
L_97cf89: /* 97cf89: mov esi, ebp */
  esi = ebp;
/* 97cf8b: nop  */
/* 97cf8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97cf90: /* 97cf90: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97cf92: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97cf94: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97cf96: jne 0x97cfb4 */
  if (!zf) goto L_97cfb4;
L_97cf98: /* 97cf98: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97cf9a: je 0x97cfb0 */
  if (zf) goto L_97cfb0;
L_97cf9c: /* 97cf9c: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97cf9f: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97cfa1: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97cfa4: jne 0x97cfb4 */
  if (!zf) goto L_97cfb4;
L_97cfa6: /* 97cfa6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97cfa9: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97cfac: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97cfae: jne 0x97cf90 */
  if (!zf) goto L_97cf90;
L_97cfb0: /* 97cfb0: xor eax, eax */
  eax = 0;
/* 97cfb2: jmp 0x97cfb9 */
  goto L_97cfb9;
L_97cfb4: /* 97cfb4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97cfb6: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97cfb9: /* 97cfb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cfbb: jne 0x97cfc4 */
  if (!zf) goto L_97cfc4;
L_97cfbd: /* 97cfbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97cfbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cfbf: call 0x97da00 */
  esp -= 4; W32(esp, 0x97cfc4u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_97cfc4: /* 97cfc4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97cfc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cfc9: call 0x97c320 */
  esp -= 4; W32(esp, 0x97cfceu); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97cfce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97cfd0: jne 0x97cf80 */
  if (!zf) goto L_97cf80;
L_97cfd2: /* 97cfd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97cfd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97cfd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97cfd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_97cfd6: /* 97cfd6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97cfe0(void) {
  LOAD_REGS();
L_97cfe0: /* 97cfe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97cfe1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 97cfe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97cfe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97cfe7: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97cfeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97cfec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97cfed: call 0x97c2d0 */
  esp -= 4; W32(esp, 0x97cff2u); SPILL(); f_97c2d0(); if (g_unwind) return; RELOAD();
/* 97cff2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97cff6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97cff7: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97cffcu); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97cffc: mov edi, eax */
  edi = eax;
/* 97cffe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d000: je 0x97d0ad */
  if (zf) goto L_97d0ad;
L_97d006: /* 97d006: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_97d007: /* 97d007: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97d00a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d00c: lea ebp, [edi + 4] */
  ebp = (uint32_t)(edi + 0x4u);
/* 97d00f: je 0x97d04d */
  if (zf) goto L_97d04d;
L_97d011: /* 97d011: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
L_97d015: /* 97d015: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97d017: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d019: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d01b: jne 0x97d039 */
  if (!zf) goto L_97d039;
L_97d01d: /* 97d01d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d01f: je 0x97d035 */
  if (zf) goto L_97d035;
L_97d021: /* 97d021: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97d024: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d026: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d029: jne 0x97d039 */
  if (!zf) goto L_97d039;
L_97d02b: /* 97d02b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97d02e: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d031: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d033: jne 0x97d015 */
  if (!zf) goto L_97d015;
L_97d035: /* 97d035: xor eax, eax */
  eax = 0;
/* 97d037: jmp 0x97d03e */
  goto L_97d03e;
L_97d039: /* 97d039: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97d03b: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97d03e: /* 97d03e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d040: jne 0x97d04d */
  if (!zf) goto L_97d04d;
L_97d042: /* 97d042: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 97d046: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d047: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97d048: call 0x97da00 */
  esp -= 4; W32(esp, 0x97d04du); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_97d04d: /* 97d04d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 97d050: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 97d053: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d055: je 0x97d098 */
  if (zf) goto L_97d098;
L_97d057: /* 97d057: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97d05b: nop  */
/* 97d05c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97d060: /* 97d060: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97d062: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d064: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d066: jne 0x97d084 */
  if (!zf) goto L_97d084;
L_97d068: /* 97d068: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d06a: je 0x97d080 */
  if (zf) goto L_97d080;
L_97d06c: /* 97d06c: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97d06f: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d071: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d074: jne 0x97d084 */
  if (!zf) goto L_97d084;
L_97d076: /* 97d076: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97d079: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d07c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d07e: jne 0x97d060 */
  if (!zf) goto L_97d060;
L_97d080: /* 97d080: xor eax, eax */
  eax = 0;
/* 97d082: jmp 0x97d089 */
  goto L_97d089;
L_97d084: /* 97d084: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97d086: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97d089: /* 97d089: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d08b: jne 0x97d098 */
  if (!zf) goto L_97d098;
L_97d08d: /* 97d08d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 97d091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d092: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d093: call 0x97da00 */
  esp -= 4; W32(esp, 0x97d098u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_97d098: /* 97d098: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97d09c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d09d: call 0x97c2f0 */
  esp -= 4; W32(esp, 0x97d0a2u); SPILL(); f_97c2f0(); if (g_unwind) return; RELOAD();
/* 97d0a2: mov edi, eax */
  edi = eax;
/* 97d0a4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d0a6: jne 0x97d007 */
  if (!zf) goto L_97d007;
L_97d0ac: /* 97d0ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_97d0ad: /* 97d0ad: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97d0b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d0b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d0b3: call 0x97c300 */
  esp -= 4; W32(esp, 0x97d0b8u); SPILL(); f_97c300(); if (g_unwind) return; RELOAD();
/* 97d0b8: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97d0bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d0bd: call 0x97c320 */
  esp -= 4; W32(esp, 0x97d0c2u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97d0c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d0c4: je 0x97d11d */
  if (zf) goto L_97d11d;
L_97d0c6: /* 97d0c6: lea edi, [eax + 0x10] */
  edi = (uint32_t)(eax + 0x10u);
/* 97d0c9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97d0cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d0cd: je 0x97d10f */
  if (zf) goto L_97d10f;
L_97d0cf: /* 97d0cf: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_97d0d3: /* 97d0d3: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97d0d5: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97d0d7: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d0d9: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d0db: jne 0x97d0fb */
  if (!zf) goto L_97d0fb;
L_97d0dd: /* 97d0dd: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d0df: je 0x97d0f7 */
  if (zf) goto L_97d0f7;
L_97d0e1: /* 97d0e1: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97d0e4: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97d0e7: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d0e9: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d0eb: jne 0x97d0fb */
  if (!zf) goto L_97d0fb;
L_97d0ed: /* 97d0ed: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97d0f0: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d0f3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d0f5: jne 0x97d0d3 */
  if (!zf) goto L_97d0d3;
L_97d0f7: /* 97d0f7: xor eax, eax */
  eax = 0;
/* 97d0f9: jmp 0x97d100 */
  goto L_97d100;
L_97d0fb: /* 97d0fb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97d0fd: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97d100: /* 97d100: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d102: jne 0x97d10f */
  if (!zf) goto L_97d10f;
L_97d104: /* 97d104: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 97d108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d109: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d10a: call 0x97da00 */
  esp -= 4; W32(esp, 0x97d10fu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_97d10f: /* 97d10f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97d113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d114: call 0x97c320 */
  esp -= 4; W32(esp, 0x97d119u); SPILL(); f_97c320(); if (g_unwind) return; RELOAD();
/* 97d119: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d11b: jne 0x97d0c6 */
  if (!zf) goto L_97d0c6;
L_97d11d: /* 97d11d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d11e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d11f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d120: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97d130(void) {
  LOAD_REGS();
L_97d130: /* 97d130: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97d134: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d138: fstp dword ptr [eax + 0x54] */
  WF32((uint32_t)(eax + 0x54u), ST0); FPOP();
/* 97d13b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d140(void) {
  LOAD_REGS();
L_97d140: /* 97d140: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97d144: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d148: fstp dword ptr [eax + 0x58] */
  WF32((uint32_t)(eax + 0x58u), ST0); FPOP();
/* 97d14b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d150(void) {
  LOAD_REGS();
L_97d150: /* 97d150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d151: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 97d153: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97d159u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d159: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97d15b: mov esi, eax */
  esi = eax;
/* 97d15d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97d163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d163: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d164: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 97d167: call 0x97d180 */
  esp -= 4; W32(esp, 0x97d16cu); SPILL(); f_97d180(); if (g_unwind) return; RELOAD();
/* 97d16c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97d170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d172: call 0x97da00 */
  esp -= 4; W32(esp, 0x97d177u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97d177: mov eax, esi */
  eax = esi;
/* 97d179: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d17a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d180(void) {
  LOAD_REGS();
L_97d180: /* 97d180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d184: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 97d187: xor ecx, ecx */
  ecx = 0;
/* 97d189: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 97d18b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97d18e: mov dword ptr [edx], edx */
  W32((uint32_t)(edx), edx);
/* 97d190: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 97d193: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d194: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 97d196: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 97d199: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 97d19c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 97d19f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 97d1a2: mov dword ptr [eax + 0x10], 0x3f800000 */
  W32((uint32_t)(eax + 0x10u), 0x3f800000u);
/* 97d1a9: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 97d1ac: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 97d1af: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 97d1b2: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 97d1b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d1b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d1c0(void) {
  LOAD_REGS();
L_97d1c0: /* 97d1c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d1c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d1c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d1c3: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 97d1c5: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97d1cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d1cb: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97d1cd: mov esi, eax */
  esi = eax;
/* 97d1cf: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97d1d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d1d5: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 97d1d9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 97d1dc: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 97d1de: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 97d1e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97d1e3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97d1e6: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97d1e9: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* 97d1f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97d1f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d1f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d1f4: call 0x97da00 */
  esp -= 4; W32(esp, 0x97d1f9u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97d1f9: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 97d1fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d1fd: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 97d200: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d201: call 0x97da00 */
  esp -= 4; W32(esp, 0x97d206u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97d206: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 97d209: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 97d20d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d20f: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 97d212: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 97d215: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 97d218: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 97d21b: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 97d21e: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 97d221: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 97d224: je 0x97d25c */
  if (zf) goto L_97d25c;
L_97d226: /* 97d226: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97d22a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d22b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d22c: call 0x97d340 */
  esp -= 4; W32(esp, 0x97d231u); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 97d231: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97d235: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d236: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d23bu); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d23b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d23d: je 0x97d25c */
  if (zf) goto L_97d25c;
L_97d23f: /* 97d23f: nop  */
L_97d240: /* 97d240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d241: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d242: call 0x97daf0 */
  esp -= 4; W32(esp, 0x97d247u); SPILL(); f_97daf0(); if (g_unwind) return; RELOAD();
/* 97d247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d249: call 0x97d4d0 */
  esp -= 4; W32(esp, 0x97d24eu); SPILL(); f_97d4d0(); if (g_unwind) return; RELOAD();
/* 97d24e: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97d252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d253: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d258u); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d258: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d25a: jne 0x97d240 */
  if (!zf) goto L_97d240;
L_97d25c: /* 97d25c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d25d: mov eax, esi */
  eax = esi;
/* 97d25f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d260: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d261: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d270(void) {
  LOAD_REGS();
L_97d270: /* 97d270: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d271: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 97d275: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d277: je 0x97d2e5 */
  if (zf) goto L_97d2e5;
L_97d279: /* 97d279: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d27a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97d27e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d27f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d280: call 0x97d340 */
  esp -= 4; W32(esp, 0x97d285u); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 97d285: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97d289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d28a: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d28fu); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d28f: mov esi, eax */
  esi = eax;
/* 97d291: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d293: je 0x97d2bc */
  if (zf) goto L_97d2bc;
L_97d295: /* 97d295: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d296: call 0x97d590 */
  esp -= 4; W32(esp, 0x97d29bu); SPILL(); f_97d590(); if (g_unwind) return; RELOAD();
/* 97d29b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d29c: call 0x97dbd0 */
  esp -= 4; W32(esp, 0x97d2a1u); SPILL(); f_97dbd0(); if (g_unwind) return; RELOAD();
/* 97d2a1: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97d2a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d2a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d2a7: call 0x97d340 */
  esp -= 4; W32(esp, 0x97d2acu); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 97d2ac: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97d2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d2b1: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d2b6u); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d2b6: mov esi, eax */
  esi = eax;
/* 97d2b8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d2ba: jne 0x97d295 */
  if (!zf) goto L_97d295;
L_97d2bc: /* 97d2bc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97d2be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d2bf: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d2c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d2c5: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 97d2c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d2c9: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d2cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d2cf: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 97d2d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d2d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d2d5: je 0x97d2de */
  if (zf) goto L_97d2de;
L_97d2d7: /* 97d2d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d2d8: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d2deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97d2de: /* 97d2de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d2df: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d2e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97d2e5: /* 97d2e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d2e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d2f0(void) {
  LOAD_REGS();
L_97d2f0: /* 97d2f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d2f4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97d2f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d300(void) {
  LOAD_REGS();
L_97d300: /* 97d300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d304: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 97d307: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d310(void) {
  LOAD_REGS();
L_97d310: /* 97d310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d314: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 97d317: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d320(void) {
  LOAD_REGS();
L_97d320: /* 97d320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d324: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 97d327: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97d32b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97d32d: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 97d330: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97d333: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 97d336: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97d339: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d340(void) {
  LOAD_REGS();
L_97d340: /* 97d340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d344: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 97d347: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97d349: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97d34d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97d34f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d360(void) {
  LOAD_REGS();
L_97d360: /* 97d360: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97d364: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 97d366: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97d369: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97d36b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97d36d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d370(void) {
  LOAD_REGS();
L_97d370: /* 97d370: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97d374: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d375: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97d376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d377: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d378: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97d37c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d37d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d37e: call 0x97d340 */
  esp -= 4; W32(esp, 0x97d383u); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 97d383: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 97d387: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d388: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d38du); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d38d: mov edi, eax */
  edi = eax;
/* 97d38f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d391: je 0x97d3e1 */
  if (zf) goto L_97d3e1;
L_97d393: /* 97d393: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_97d397: /* 97d397: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97d399: mov esi, ebp */
  esi = ebp;
/* 97d39b: nop  */
/* 97d39c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97d3a0: /* 97d3a0: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 97d3a2: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97d3a4: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 97d3a6: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d3a8: jne 0x97d3c8 */
  if (!zf) goto L_97d3c8;
L_97d3aa: /* 97d3aa: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d3ac: je 0x97d3c4 */
  if (zf) goto L_97d3c4;
L_97d3ae: /* 97d3ae: mov al, byte ptr [ecx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 97d3b1: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97d3b4: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 97d3b6: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d3b8: jne 0x97d3c8 */
  if (!zf) goto L_97d3c8;
L_97d3ba: /* 97d3ba: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97d3bd: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d3c0: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d3c2: jne 0x97d3a0 */
  if (!zf) goto L_97d3a0;
L_97d3c4: /* 97d3c4: xor ecx, ecx */
  ecx = 0;
/* 97d3c6: jmp 0x97d3cd */
  goto L_97d3cd;
L_97d3c8: /* 97d3c8: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  ecx = r;
  }
/* 97d3ca: sbb ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
L_97d3cd: /* 97d3cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d3cf: je 0x97d3ea */
  if (zf) goto L_97d3ea;
L_97d3d1: /* 97d3d1: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97d3d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d3d6: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d3dbu); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d3db: mov edi, eax */
  edi = eax;
/* 97d3dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d3df: jne 0x97d397 */
  if (!zf) goto L_97d397;
L_97d3e1: /* 97d3e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d3e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d3e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97d3e4: xor eax, eax */
  eax = 0;
/* 97d3e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d3e7: ret 8 */
  esp += 12; SPILL(); return;
L_97d3ea: /* 97d3ea: mov eax, edi */
  eax = edi;
/* 97d3ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d3ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d3ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97d3ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d3f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d400(void) {
  LOAD_REGS();
L_97d400: /* 97d400: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d404: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 97d407: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d410(void) {
  LOAD_REGS();
L_97d410: /* 97d410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d411: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 97d415: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97d416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d417: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d418: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97d41c: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 97d41e: mov esi, ebx */
  esi = ebx;
/* 97d420: mov eax, ebp */
  eax = ebp;
L_97d422: /* 97d422: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97d424: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d426: cmp dl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d428: jne 0x97d446 */
  if (!zf) goto L_97d446;
L_97d42a: /* 97d42a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d42c: je 0x97d442 */
  if (zf) goto L_97d442;
L_97d42e: /* 97d42e: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97d431: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97d433: cmp dl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d436: jne 0x97d446 */
  if (!zf) goto L_97d446;
L_97d438: /* 97d438: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97d43b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d43e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d440: jne 0x97d422 */
  if (!zf) goto L_97d422;
L_97d442: /* 97d442: xor eax, eax */
  eax = 0;
/* 97d444: jmp 0x97d44b */
  goto L_97d44b;
L_97d446: /* 97d446: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97d448: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97d44b: /* 97d44b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d44d: je 0x97d488 */
  if (zf) goto L_97d488;
L_97d44f: /* 97d44f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97d452: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d454: je 0x97d46d */
  if (zf) goto L_97d46d;
L_97d456: /* 97d456: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d457: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97d458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d459: call 0x97cec0 */
  esp -= 4; W32(esp, 0x97d45eu); SPILL(); f_97cec0(); if (g_unwind) return; RELOAD();
/* 97d45e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97d461: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 97d464: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97d466: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d467: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d468: call 0x975020 */
  esp -= 4; W32(esp, 0x97d46du); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
L_97d46d: /* 97d46d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d46e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d46f: call 0x97da00 */
  esp -= 4; W32(esp, 0x97d474u); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97d474: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97d477: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d479: je 0x97d488 */
  if (zf) goto L_97d488;
L_97d47b: /* 97d47b: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 97d47e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97d480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d481: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d482: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d483: call 0x974f00 */
  esp -= 4; W32(esp, 0x97d488u); SPILL(); f_974f00(); if (g_unwind) return; RELOAD();
L_97d488: /* 97d488: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d489: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d48a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97d48b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d48c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d490(void) {
  LOAD_REGS();
L_97d490: /* 97d490: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97d494: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97d497: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 97d49b: jmp 0x97da00 */
  SPILL(); f_97da00(); return;
}

void f_97d4a0(void) {
  LOAD_REGS();
L_97d4a0: /* 97d4a0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97d4a4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d4a8: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 97d4ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d4b0(void) {
  LOAD_REGS();
L_97d4b0: /* 97d4b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d4b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97d4b8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97d4bc: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 97d4bf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97d4c3: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 97d4c6: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 97d4c9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_97d4d0(void) {
  LOAD_REGS();
L_97d4d0: /* 97d4d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d4d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d4d2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97d4d6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 97d4d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d4db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d4dc: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97d4e0: je 0x97d4f4 */
  if (zf) goto L_97d4f4;
L_97d4e2: /* 97d4e2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d4e4: je 0x97d57d */
  if (zf) goto L_97d57d;
L_97d4ea: /* 97d4ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d4ec: je 0x97d4f4 */
  if (zf) goto L_97d4f4;
L_97d4ee: /* 97d4ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d4ef: call 0x97d590 */
  esp -= 4; W32(esp, 0x97d4f4u); SPILL(); f_97d590(); if (g_unwind) return; RELOAD();
L_97d4f4: /* 97d4f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97d4f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d4f6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97d4f8: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97d4feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d4fe: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 97d501: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 97d504: mov ebp, dword ptr [edi + 8] */
  ebp = R32((uint32_t)(edi + 0x8u));
/* 97d507: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 97d50a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d50c: je 0x97d561 */
  if (zf) goto L_97d561;
L_97d50e: /* 97d50e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 97d510: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_97d514: /* 97d514: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97d518: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97d51a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_97d520: /* 97d520: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 97d522: mov dl, bl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 97d524: cmp bl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d526: jne 0x97d544 */
  if (!zf) goto L_97d544;
L_97d528: /* 97d528: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d52a: je 0x97d540 */
  if (zf) goto L_97d540;
L_97d52c: /* 97d52c: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 97d52f: mov dl, bl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 97d531: cmp bl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d534: jne 0x97d544 */
  if (!zf) goto L_97d544;
L_97d536: /* 97d536: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97d539: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d53c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d53e: jne 0x97d520 */
  if (!zf) goto L_97d520;
L_97d540: /* 97d540: xor ecx, ecx */
  ecx = 0;
/* 97d542: jmp 0x97d549 */
  goto L_97d549;
L_97d544: /* 97d544: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  ecx = r;
  }
/* 97d546: sbb ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
L_97d549: /* 97d549: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97d54b: jle 0x97d559 */
  if ((zf || sf != of)) goto L_97d559;
L_97d54d: /* 97d54d: mov edi, ebp */
  edi = ebp;
/* 97d54f: mov ebp, dword ptr [edi + 8] */
  ebp = R32((uint32_t)(edi + 0x8u));
/* 97d552: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 97d555: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d557: jne 0x97d514 */
  if (!zf) goto L_97d514;
L_97d559: /* 97d559: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97d55d: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
L_97d561: /* 97d561: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 97d564: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97d567: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 97d56a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97d56c: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 97d56f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 97d571: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 97d574: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 97d577: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97d578: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d579: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 97d57c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_97d57d: /* 97d57d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d57e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d57f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 97d580: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d590(void) {
  LOAD_REGS();
L_97d590: /* 97d590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d591: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97d595: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97d598: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d59a: je 0x97d5d3 */
  if (zf) goto L_97d5d3;
L_97d59c: /* 97d59c: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 97d59f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 97d5a1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d5a3: je 0x97d5b0 */
  if (zf) goto L_97d5b0;
L_97d5a5: /* 97d5a5: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d5a8: je 0x97d5b0 */
  if (zf) goto L_97d5b0;
L_97d5aa: /* 97d5aa: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97d5ac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d5ae: jne 0x97d5a5 */
  if (!zf) goto L_97d5a5;
L_97d5b0: /* 97d5b0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97d5b2: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 97d5b5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 97d5b8: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 97d5bb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97d5bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d5be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97d5c0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d5c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d5c6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97d5c9: dec dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x20u), r);
  }
/* 97d5cc: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_97d5d3: /* 97d5d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d5d4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d5e0(void) {
  LOAD_REGS();
L_97d5e0: /* 97d5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d5e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97d5e5: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97d5e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d5ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d5eb: call 0x97d340 */
  esp -= 4; W32(esp, 0x97d5f0u); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 97d5f0: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 97d5f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d5f5: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d5fau); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d5fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d5fc: je 0x97d619 */
  if (zf) goto L_97d619;
L_97d5fe: /* 97d5fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d5ff: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_97d603: /* 97d603: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d605: call 0x97de80 */
  esp -= 4; W32(esp, 0x97d60au); SPILL(); f_97de80(); if (g_unwind) return; RELOAD();
/* 97d60a: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97d60e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d60f: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d614u); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d614: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d616: jne 0x97d603 */
  if (!zf) goto L_97d603;
L_97d618: /* 97d618: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_97d619: /* 97d619: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97d61d: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 97d620: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 97d623: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97d627: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 97d62a: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 97d62d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97d631: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 97d634: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 97d637: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 97d63b: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 97d63e: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 97d641: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d642: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d650(void) {
  LOAD_REGS();
L_97d650: /* 97d650: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97d654: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97d658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d659: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d65a: call 0x97d340 */
  esp -= 4; W32(esp, 0x97d65fu); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 97d65f: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 97d663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d664: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d669u); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d669: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d66b: je 0x97d688 */
  if (zf) goto L_97d688;
L_97d66d: /* 97d66d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d66e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_97d672: /* 97d672: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d674: call 0x97de80 */
  esp -= 4; W32(esp, 0x97d679u); SPILL(); f_97de80(); if (g_unwind) return; RELOAD();
/* 97d679: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97d67d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d67e: call 0x97d360 */
  esp -= 4; W32(esp, 0x97d683u); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97d683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d685: jne 0x97d672 */
  if (!zf) goto L_97d672;
L_97d687: /* 97d687: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97d688: /* 97d688: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d690(void) {
  LOAD_REGS();
L_97d690: /* 97d690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d691: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 97d693: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97d699u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d699: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97d69b: mov esi, eax */
  esi = eax;
/* 97d69d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97d6a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d6a3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 97d6a5: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* 97d6a7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97d6a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97d6ab: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97d6ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 97d6b0: xor eax, eax */
  eax = 0;
/* 97d6b2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 97d6b5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 97d6b8: mov eax, esi */
  eax = esi;
/* 97d6ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d6bb: ret  */
  esp += 4; SPILL(); return;
}

void f_97d6c0(void) {
  LOAD_REGS();
L_97d6c0: /* 97d6c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d6c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97d6c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d6c6: call 0x97d6e0 */
  esp -= 4; W32(esp, 0x97d6cbu); SPILL(); f_97d6e0(); if (g_unwind) return; RELOAD();
/* 97d6cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97d6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d6ce: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d6d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d6d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d6d5: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d6dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d6db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d6dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d6e0(void) {
  LOAD_REGS();
L_97d6e0: /* 97d6e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d6e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d6e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 97d6e6: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97d6ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d6eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d6ec: call 0x97d800 */
  esp -= 4; W32(esp, 0x97d6f1u); SPILL(); f_97d800(); if (g_unwind) return; RELOAD();
/* 97d6f1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97d6f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d6f6: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d6fbu); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d6fb: mov esi, eax */
  esi = eax;
/* 97d6fd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d6ff: je 0x97d728 */
  if (zf) goto L_97d728;
L_97d701: /* 97d701: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d702: call 0x97d9b0 */
  esp -= 4; W32(esp, 0x97d707u); SPILL(); f_97d9b0(); if (g_unwind) return; RELOAD();
/* 97d707: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d708: call 0x97bd40 */
  esp -= 4; W32(esp, 0x97d70du); SPILL(); f_97bd40(); if (g_unwind) return; RELOAD();
/* 97d70d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97d711: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d712: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d713: call 0x97d800 */
  esp -= 4; W32(esp, 0x97d718u); SPILL(); f_97d800(); if (g_unwind) return; RELOAD();
/* 97d718: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97d71c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d71d: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d722u); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d722: mov esi, eax */
  esi = eax;
/* 97d724: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d726: jne 0x97d701 */
  if (!zf) goto L_97d701;
L_97d728: /* 97d728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d72a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d730(void) {
  LOAD_REGS();
L_97d730: /* 97d730: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d731: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d732: call 0x97d690 */
  esp -= 4; W32(esp, 0x97d737u); SPILL(); f_97d690(); if (g_unwind) return; RELOAD();
/* 97d737: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97d73b: mov esi, eax */
  esi = eax;
/* 97d73d: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97d741: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d743: call 0x97d800 */
  esp -= 4; W32(esp, 0x97d748u); SPILL(); f_97d800(); if (g_unwind) return; RELOAD();
/* 97d748: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 97d74c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d74d: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d752u); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d752: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d754: je 0x97d773 */
  if (zf) goto L_97d773;
L_97d756: /* 97d756: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97d758: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d759: call 0x97bb20 */
  esp -= 4; W32(esp, 0x97d75eu); SPILL(); f_97bb20(); if (g_unwind) return; RELOAD();
/* 97d75e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d75f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d760: call 0x97d900 */
  esp -= 4; W32(esp, 0x97d765u); SPILL(); f_97d900(); if (g_unwind) return; RELOAD();
/* 97d765: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97d769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d76a: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d76fu); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d76f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d771: jne 0x97d756 */
  if (!zf) goto L_97d756;
L_97d773: /* 97d773: mov eax, esi */
  eax = esi;
/* 97d775: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d776: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 97d777: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d780(void) {
  LOAD_REGS();
L_97d780: /* 97d780: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97d784: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97d788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d789: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d78a: call 0x97d800 */
  esp -= 4; W32(esp, 0x97d78fu); SPILL(); f_97d800(); if (g_unwind) return; RELOAD();
/* 97d78f: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97d793: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d794: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d799u); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d79b: je 0x97d7c0 */
  if (zf) goto L_97d7c0;
L_97d79d: /* 97d79d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d79e: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
L_97d7a2: /* 97d7a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97d7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d7a5: call 0x97bb20 */
  esp -= 4; W32(esp, 0x97d7aau); SPILL(); f_97bb20(); if (g_unwind) return; RELOAD();
/* 97d7aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d7ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d7ac: call 0x97d900 */
  esp -= 4; W32(esp, 0x97d7b1u); SPILL(); f_97d900(); if (g_unwind) return; RELOAD();
/* 97d7b1: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 97d7b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d7b6: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d7bbu); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d7bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d7bd: jne 0x97d7a2 */
  if (!zf) goto L_97d7a2;
L_97d7bf: /* 97d7bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97d7c0: /* 97d7c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d7d0(void) {
  LOAD_REGS();
L_97d7d0: /* 97d7d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97d7d4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 97d7d7: xor eax, eax */
  eax = 0;
/* 97d7d9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d7db: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 97d7de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d7f0(void) {
  LOAD_REGS();
L_97d7f0: /* 97d7f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d7f4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 97d7f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d800(void) {
  LOAD_REGS();
L_97d800: /* 97d800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97d804: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97d806: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97d808: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97d80c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 97d80e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d820(void) {
  LOAD_REGS();
L_97d820: /* 97d820: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97d824: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 97d826: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 97d829: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97d82b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97d82d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97d830(void) {
  LOAD_REGS();
L_97d830: /* 97d830: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97d834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d835: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97d839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d83a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d83b: call 0x97d800 */
  esp -= 4; W32(esp, 0x97d840u); SPILL(); f_97d800(); if (g_unwind) return; RELOAD();
/* 97d840: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 97d844: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d845: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d84au); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d84a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d84c: je 0x97d865 */
  if (zf) goto L_97d865;
L_97d84e: /* 97d84e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_97d852: /* 97d852: cmp dword ptr [eax + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d855: je 0x97d867 */
  if (zf) goto L_97d867;
L_97d857: /* 97d857: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 97d85b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d85c: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d861u); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d861: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d863: jne 0x97d852 */
  if (!zf) goto L_97d852;
L_97d865: /* 97d865: xor eax, eax */
  eax = 0;
L_97d867: /* 97d867: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d868: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d870(void) {
  LOAD_REGS();
L_97d870: /* 97d870: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97d874: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d875: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97d876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d877: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d878: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97d87c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d87d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d87e: call 0x97d800 */
  esp -= 4; W32(esp, 0x97d883u); SPILL(); f_97d800(); if (g_unwind) return; RELOAD();
/* 97d883: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 97d887: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97d888: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d88du); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d88d: mov edi, eax */
  edi = eax;
/* 97d88f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d891: je 0x97d8e1 */
  if (zf) goto L_97d8e1;
L_97d893: /* 97d893: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_97d897: /* 97d897: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97d899: mov esi, ebp */
  esi = ebp;
/* 97d89b: nop  */
/* 97d89c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97d8a0: /* 97d8a0: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 97d8a2: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97d8a4: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 97d8a6: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d8a8: jne 0x97d8c8 */
  if (!zf) goto L_97d8c8;
L_97d8aa: /* 97d8aa: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d8ac: je 0x97d8c4 */
  if (zf) goto L_97d8c4;
L_97d8ae: /* 97d8ae: mov al, byte ptr [ecx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 97d8b1: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97d8b4: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 97d8b6: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d8b8: jne 0x97d8c8 */
  if (!zf) goto L_97d8c8;
L_97d8ba: /* 97d8ba: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97d8bd: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d8c0: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d8c2: jne 0x97d8a0 */
  if (!zf) goto L_97d8a0;
L_97d8c4: /* 97d8c4: xor ecx, ecx */
  ecx = 0;
/* 97d8c6: jmp 0x97d8cd */
  goto L_97d8cd;
L_97d8c8: /* 97d8c8: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  ecx = r;
  }
/* 97d8ca: sbb ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
L_97d8cd: /* 97d8cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d8cf: je 0x97d8ea */
  if (zf) goto L_97d8ea;
L_97d8d1: /* 97d8d1: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97d8d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97d8d6: call 0x97d820 */
  esp -= 4; W32(esp, 0x97d8dbu); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97d8db: mov edi, eax */
  edi = eax;
/* 97d8dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d8df: jne 0x97d897 */
  if (!zf) goto L_97d897;
L_97d8e1: /* 97d8e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d8e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d8e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97d8e4: xor eax, eax */
  eax = 0;
/* 97d8e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d8e7: ret 8 */
  esp += 12; SPILL(); return;
L_97d8ea: /* 97d8ea: mov eax, edi */
  eax = edi;
/* 97d8ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d8ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d8ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97d8ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d8f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d900(void) {
  LOAD_REGS();
L_97d900: /* 97d900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97d901: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 97d905: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d906: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97d90a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97d90d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d90f: je 0x97d923 */
  if (zf) goto L_97d923;
L_97d911: /* 97d911: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d913: je 0x97d9a6 */
  if (zf) goto L_97d9a6;
L_97d919: /* 97d919: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d91b: je 0x97d923 */
  if (zf) goto L_97d923;
L_97d91d: /* 97d91d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d91e: call 0x97d9b0 */
  esp -= 4; W32(esp, 0x97d923u); SPILL(); f_97d9b0(); if (g_unwind) return; RELOAD();
L_97d923: /* 97d923: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97d924: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97d925: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97d927: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 97d92a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97d930u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d930: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 97d933: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 97d935: mov ebp, dword ptr [edi + 8] */
  ebp = R32((uint32_t)(edi + 0x8u));
/* 97d938: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 97d93b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d93d: je 0x97d98d */
  if (zf) goto L_97d98d;
L_97d93f: /* 97d93f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 97d941: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_97d945: /* 97d945: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97d949: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 97d94b: nop  */
/* 97d94c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97d950: /* 97d950: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 97d952: mov dl, bl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 97d954: cmp bl, byte ptr [esi] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d956: jne 0x97d974 */
  if (!zf) goto L_97d974;
L_97d958: /* 97d958: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d95a: je 0x97d970 */
  if (zf) goto L_97d970;
L_97d95c: /* 97d95c: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 97d95f: mov dl, bl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 97d961: cmp bl, byte ptr [esi + 1] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97d964: jne 0x97d974 */
  if (!zf) goto L_97d974;
L_97d966: /* 97d966: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97d969: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97d96c: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97d96e: jne 0x97d950 */
  if (!zf) goto L_97d950;
L_97d970: /* 97d970: xor ecx, ecx */
  ecx = 0;
/* 97d972: jmp 0x97d979 */
  goto L_97d979;
L_97d974: /* 97d974: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  ecx = r;
  }
/* 97d976: sbb ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
L_97d979: /* 97d979: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97d97b: jle 0x97d989 */
  if ((zf || sf != of)) goto L_97d989;
L_97d97d: /* 97d97d: mov edi, ebp */
  edi = ebp;
/* 97d97f: mov ebp, dword ptr [edi + 8] */
  ebp = R32((uint32_t)(edi + 0x8u));
/* 97d982: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 97d985: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d987: jne 0x97d945 */
  if (!zf) goto L_97d945;
L_97d989: /* 97d989: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_97d98d: /* 97d98d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 97d990: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 97d993: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 97d996: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 97d998: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 97d99b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 97d99d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 97d9a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97d9a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97d9a2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 97d9a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_97d9a6: /* 97d9a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d9a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97d9a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97d9b0(void) {
  LOAD_REGS();
L_97d9b0: /* 97d9b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97d9b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97d9b5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97d9b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97d9ba: je 0x97d9f2 */
  if (zf) goto L_97d9f2;
L_97d9bc: /* 97d9bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97d9be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 97d9c0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d9c2: je 0x97d9cf */
  if (zf) goto L_97d9cf;
L_97d9c4: /* 97d9c4: cmp dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d9c7: je 0x97d9cf */
  if (zf) goto L_97d9cf;
L_97d9c9: /* 97d9c9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97d9cb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97d9cd: jne 0x97d9c4 */
  if (!zf) goto L_97d9c4;
L_97d9cf: /* 97d9cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 97d9d1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 97d9d4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 97d9d7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 97d9da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97d9dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97d9dd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97d9df: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97d9e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97d9e5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97d9e8: dec dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 97d9eb: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_97d9f2: /* 97d9f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97d9f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97da00(void) {
  LOAD_REGS();
L_97da00: /* 97da00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97da01: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 97da05: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 97da07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97da09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97da0a: je 0x97da19 */
  if (zf) goto L_97da19;
L_97da0c: /* 97da0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97da0d: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97da13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97da13: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
L_97da19: /* 97da19: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97da1d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97da1f: je 0x97da4a */
  if (zf) goto L_97da4a;
L_97da21: /* 97da21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97da22: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97da25: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97da27: mov edi, esi */
  edi = esi;
/* 97da29: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97da2b: not ecx */
  ecx = ~ecx;
/* 97da2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97da2e: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97da34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97da34: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 97da36: mov ecx, esi */
  ecx = esi;
/* 97da38: mov edx, eax */
  edx = eax;
/* 97da3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97da3b: nop  */
/* 97da3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97da40: /* 97da40: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 97da42: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 97da43: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 97da45: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 97da46: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97da48: jne 0x97da40 */
  if (!zf) goto L_97da40;
L_97da4a: /* 97da4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97da4b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97da4c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97da50(void) {
  LOAD_REGS();
L_97da50: /* 97da50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97da51: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 97da53: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97da59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97da59: mov esi, eax */
  esi = eax;
/* 97da5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97da5c: call 0x97da80 */
  esp -= 4; W32(esp, 0x97da61u); SPILL(); f_97da80(); if (g_unwind) return; RELOAD();
/* 97da61: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97da65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97da66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97da67: call 0x97da00 */
  esp -= 4; W32(esp, 0x97da6cu); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97da6c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 97da70: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 97da73: mov eax, esi */
  eax = esi;
/* 97da75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97da76: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97da80(void) {
  LOAD_REGS();
L_97da80: /* 97da80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97da81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97da85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97da86: xor edi, edi */
  edi = 0;
/* 97da88: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 97da8a: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 97da8c: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 97da8f: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 97da92: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* 97da99: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97da9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97da9f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 97daa2: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 97daa5: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 97daaa: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 97daad: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 97dab0: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 97dab3: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 97dab6: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 97dab9: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 97dabc: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 97dabf: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 97dac2: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 97dac5: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 97dac8: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 97dacb: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 97dace: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 97dad1: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 97dad4: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* 97dad7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97dad8: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 97dadb: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 97dade: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 97dae1: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 97dae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dae5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97daf0(void) {
  LOAD_REGS();
L_97daf0: /* 97daf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97daf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97daf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97daf3: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 97daf5: call dword ptr [0xb0219c] */
  { uint32_t t = R32((uint32_t)(0xb0219cu)); esp -= 4; W32(esp, 0x97dafbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97dafb: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97daff: mov ebx, eax */
  ebx = eax;
/* 97db01: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97db03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97db04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97db05: call 0x97da00 */
  esp -= 4; W32(esp, 0x97db0au); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
/* 97db0a: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 97db0d: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 97db10: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 97db13: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 97db16: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 97db19: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 97db1c: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 97db1f: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 97db22: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 97db25: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 97db28: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 97db2b: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 97db2e: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 97db31: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 97db34: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 97db37: mov dword ptr [ebx + 0x30], edx */
  W32((uint32_t)(ebx + 0x30u), edx);
/* 97db3a: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 97db3d: mov dword ptr [ebx + 0x34], eax */
  W32((uint32_t)(ebx + 0x34u), eax);
/* 97db40: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 97db43: mov dword ptr [ebx + 0x38], ecx */
  W32((uint32_t)(ebx + 0x38u), ecx);
/* 97db46: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 97db49: mov dword ptr [ebx + 0x3c], edx */
  W32((uint32_t)(ebx + 0x3cu), edx);
/* 97db4c: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 97db4f: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 97db52: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 97db55: mov dword ptr [ebx + 0x44], ecx */
  W32((uint32_t)(ebx + 0x44u), ecx);
/* 97db58: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 97db5b: mov dword ptr [ebx + 0x48], edx */
  W32((uint32_t)(ebx + 0x48u), edx);
/* 97db5e: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 97db61: mov dword ptr [ebx + 0x4c], eax */
  W32((uint32_t)(ebx + 0x4cu), eax);
/* 97db64: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 97db67: mov dword ptr [ebx + 0x50], ecx */
  W32((uint32_t)(ebx + 0x50u), ecx);
/* 97db6a: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 97db6d: mov dword ptr [ebx + 0x54], edx */
  W32((uint32_t)(ebx + 0x54u), edx);
/* 97db70: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 97db73: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 97db76: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 97db79: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* 97db7c: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 97db7f: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* 97db82: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 97db85: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 97db88: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 97db8b: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 97db8e: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 97db91: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 97db94: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 97db97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97db98: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97db9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97db9e: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 97dba1: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 97dba4: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 97dba7: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 97dbaa: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 97dbad: mov edi, eax */
  edi = eax;
/* 97dbaf: mov eax, ecx */
  eax = ecx;
/* 97dbb1: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97dbb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 97dbb6: mov ecx, eax */
  ecx = eax;
/* 97dbb8: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 97dbbb: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 97dbbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97dbbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dbbf: mov eax, ebx */
  eax = ebx;
/* 97dbc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97dbc2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97dbd0(void) {
  LOAD_REGS();
L_97dbd0: /* 97dbd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dbd1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97dbd5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97dbd7: je 0x97dbf3 */
  if (zf) goto L_97dbf3;
L_97dbd9: /* 97dbd9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 97dbdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97dbdd: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97dbe3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97dbe3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 97dbe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97dbe6: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97dbecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97dbec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dbed: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97dbf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97dbf3: /* 97dbf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dbf4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dc00(void) {
  LOAD_REGS();
L_97dc00: /* 97dc00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dc04: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 97dc07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dc10(void) {
  LOAD_REGS();
L_97dc10: /* 97dc10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dc14: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97dc16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dc20(void) {
  LOAD_REGS();
L_97dc20: /* 97dc20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dc24: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 97dc27: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dc30(void) {
  LOAD_REGS();
L_97dc30: /* 97dc30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dc34: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 97dc37: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97dc3b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97dc3d: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 97dc40: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97dc43: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 97dc46: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97dc49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97dc50(void) {
  LOAD_REGS();
L_97dc50: /* 97dc50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dc54: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 97dc57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dc60(void) {
  LOAD_REGS();
L_97dc60: /* 97dc60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 97dc64: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97dc68: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 97dc6e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 97dc71: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97dc80(void) {
  LOAD_REGS();
L_97dc80: /* 97dc80: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 97dc84: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 97dc87: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 97dc89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dc8a: cmp ecx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97dc8d: jne 0x97dc95 */
  if (!zf) goto L_97dc95;
L_97dc8f: /* 97dc8f: xor eax, eax */
  eax = 0;
/* 97dc91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dc92: ret 4 */
  esp += 8; SPILL(); return;
L_97dc95: /* 97dc95: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97dc98: lea esi, [ecx + ecx*2] */
  esi = (uint32_t)(ecx + ecx*2);
/* 97dc9b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 97dc9c: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 97dc9f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 97dca1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dca2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dcb0(void) {
  LOAD_REGS();
L_97dcb0: /* 97dcb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dcb4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 97dcb7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dcc0(void) {
  LOAD_REGS();
L_97dcc0: /* 97dcc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dcc4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97dcc7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dcd0(void) {
  LOAD_REGS();
L_97dcd0: /* 97dcd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dcd4: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97dcd7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97dce0(void) {
  LOAD_REGS();
L_97dce0: /* 97dce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97dce1: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 97dce5: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 97dce8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dce9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97dcea: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 97dcee: mov esi, edi */
  esi = edi;
/* 97dcf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_97dcf1: /* 97dcf1: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 97dcf3: mov bl, byte ptr [esi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 97dcf5: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97dcf7: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97dcf9: jne 0x97dd19 */
  if (!zf) goto L_97dd19;
L_97dcfb: /* 97dcfb: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97dcfd: je 0x97dd15 */
  if (zf) goto L_97dd15;
L_97dcff: /* 97dcff: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 97dd02: mov bl, byte ptr [esi + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 97dd05: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 97dd07: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 97dd09: jne 0x97dd19 */
  if (!zf) goto L_97dd19;
L_97dd0b: /* 97dd0b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97dd0e: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 97dd11: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97dd13: jne 0x97dcf1 */
  if (!zf) goto L_97dcf1;
L_97dd15: /* 97dd15: xor eax, eax */
  eax = 0;
/* 97dd17: jmp 0x97dd1e */
  goto L_97dd1e;
L_97dd19: /* 97dd19: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 97dd1b: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_97dd1e: /* 97dd1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97dd20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97dd21: je 0x97dd2a */
  if (zf) goto L_97dd2a;
L_97dd23: /* 97dd23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97dd24: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97dd25: call 0x97da00 */
  esp -= 4; W32(esp, 0x97dd2au); SPILL(); f_97da00(); if (g_unwind) return; RELOAD();
L_97dd2a: /* 97dd2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97dd2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dd2c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97dd2d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97dd30(void) {
  LOAD_REGS();
L_97dd30: /* 97dd30: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97dd34: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dd38: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 97dd3b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97dd40(void) {
  LOAD_REGS();
L_97dd40: /* 97dd40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dd44: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97dd48: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 97dd4c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 97dd4f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 97dd53: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 97dd56: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 97dd59: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_97dd60(void) {
  LOAD_REGS();
L_97dd60: /* 97dd60: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 97dd64: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97dd68: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 97dd6b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97dd70(void) {
  LOAD_REGS();
L_97dd70: /* 97dd70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dd71: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97dd75: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 97dd78: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97dd7b: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 97dd7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97dd7f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 97dd82: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 97dd86: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 97dd89: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 97dd8b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 97dd8d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 97dd90: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 97dd93: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 97dd96: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 97dd99: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 97dd9c: cmp dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97dd9f: jl 0x97ddba */
  if ((sf != of)) goto L_97ddba;
L_97dda1: /* 97dda1: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 97dda4: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97dda6: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 97dda9: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 97ddac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97ddad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97ddae: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 97ddb1: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x97ddb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97ddb7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_97ddba: /* 97ddba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ddbb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97ddc0(void) {
  LOAD_REGS();
L_97ddc0: /* 97ddc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97ddc1: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 97ddc5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97ddc6: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 97ddca: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 97ddcd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ddce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97ddcf: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 97ddd2: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 97ddd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97ddd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97ddd7: call dword ptr [0xb021ac] */
  { uint32_t t = R32((uint32_t)(0xb021acu)); esp -= 4; W32(esp, 0x97ddddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97dddd: mov ecx, esi */
  ecx = esi;
/* 97dddf: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 97dde3: mov edx, ecx */
  edx = ecx;
/* 97dde5: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 97dde8: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 97ddeb: mov edi, eax */
  edi = eax;
/* 97dded: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 97ddef: mov ecx, edx */
  ecx = edx;
/* 97ddf1: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 97ddf4: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 97ddf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97ddf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97ddf8: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 97ddfb: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 97ddfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97ddff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97de00: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97de10(void) {
  LOAD_REGS();
L_97de10: /* 97de10: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 97de14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97de16: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 97de1a: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 97de1d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 97de20: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 97de23: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 97de26: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 97de29: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 97de2c: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* 97de2f: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 97de32: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 97de35: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 97de38: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 97de3b: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 97de3e: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 97de41: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 97de44: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
/* 97de47: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 97de4a: mov dword ptr [eax + 0x44], edx */
  W32((uint32_t)(eax + 0x44u), edx);
/* 97de4d: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 97de50: mov dword ptr [eax + 0x48], edx */
  W32((uint32_t)(eax + 0x48u), edx);
/* 97de53: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 97de56: mov dword ptr [eax + 0x4c], edx */
  W32((uint32_t)(eax + 0x4cu), edx);
/* 97de59: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 97de5c: mov dword ptr [eax + 0x50], edx */
  W32((uint32_t)(eax + 0x50u), edx);
/* 97de5f: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 97de62: mov dword ptr [eax + 0x54], edx */
  W32((uint32_t)(eax + 0x54u), edx);
/* 97de65: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 97de68: mov dword ptr [eax + 0x58], edx */
  W32((uint32_t)(eax + 0x58u), edx);
/* 97de6b: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 97de6e: mov dword ptr [eax + 0x5c], edx */
  W32((uint32_t)(eax + 0x5cu), edx);
/* 97de71: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 97de74: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 97de77: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97de80(void) {
  LOAD_REGS();
L_97de80: /* 97de80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97de83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97de84: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 97de88: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 97de8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97de8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97de8e: call 0x97dc60 */
  esp -= 4; W32(esp, 0x97de93u); SPILL(); f_97dc60(); if (g_unwind) return; RELOAD();
/* 97de93: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 97de97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97de98: call 0x97dc80 */
  esp -= 4; W32(esp, 0x97de9du); SPILL(); f_97dc80(); if (g_unwind) return; RELOAD();
/* 97de9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97de9f: je 0x97decb */
  if (zf) goto L_97decb;
L_97dea1: /* 97dea1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97dea5: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 97dea9: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 97deab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97deac: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 97deae: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97deb2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 97deb5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 97deb8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 97debc: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 97debf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 97dec2: call 0x97dc80 */
  esp -= 4; W32(esp, 0x97dec7u); SPILL(); f_97dc80(); if (g_unwind) return; RELOAD();
/* 97dec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97dec9: jne 0x97dea1 */
  if (!zf) goto L_97dea1;
L_97decb: /* 97decb: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97decf: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 97ded2: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 97ded5: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97ded9: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 97dedc: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 97dedf: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97dee3: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 97dee6: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 97dee9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97deed: fmul dword ptr [esi + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x54u)));
/* 97def0: fstp dword ptr [esi + 0x54] */
  WF32((uint32_t)(esi + 0x54u), ST0); FPOP();
/* 97def3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97def7: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 97defa: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
/* 97defd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 97df01: fmul dword ptr [esi + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x5cu)));
/* 97df04: fstp dword ptr [esi + 0x5c] */
  WF32((uint32_t)(esi + 0x5cu), ST0); FPOP();
/* 97df07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97df08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97df0b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97df10(void) {
  LOAD_REGS();
L_97df10: /* 97df10: mov eax, dword ptr [0xb03018] */
  eax = R32((uint32_t)(0xb03018u));
/* 97df15: ret  */
  esp += 4; SPILL(); return;
}

void f_97df20(void) {
  LOAD_REGS();
L_97df20: /* 97df20: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 97df22: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97df28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97df28: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97df2c: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 97df30: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 97df32: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 97df35: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97df40(void) {
  LOAD_REGS();
L_97df40: /* 97df40: jmp dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); SPILL(); call_ind(t); return; }
}

void f_97df50(void) {
  LOAD_REGS();
L_97df50: /* 97df50: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97df53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97df54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97df55: xor ebp, ebp */
  ebp = 0;
/* 97df57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97df58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97df59: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97df5a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97df5b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97df5c: push 0xb03050 */
  { uint32_t v = 0xb03050u; esp -= 4; W32(esp, v); }
/* 97df61: xor eax, eax */
  eax = 0;
/* 97df63: mov dword ptr [esp + 0x20], 0xb03048 */
  W32((uint32_t)(esp + 0x20u), 0xb03048u);
/* 97df6b: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 97df6f: mov dword ptr [esp + 0x28], 0x9822a0 */
  W32((uint32_t)(esp + 0x28u), 0x9822a0u);
/* 97df77: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 97df7b: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 97df7f: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 97df83: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 97df87: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 97df8b: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 97df8f: mov dword ptr [esp + 0x44], 2 */
  W32((uint32_t)(esp + 0x44u), 0x2u);
/* 97df97: mov ecx, 6 */
  ecx = 0x6u;
/* 97df9c: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* 97dfa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97dfa1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 97dfa3: call 0x982310 */
  esp -= 4; W32(esp, 0x97dfa8u); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 97dfa8: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 97dfac: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97dfae: mov ebx, eax */
  ebx = eax;
/* 97dfb0: jne 0x97dfbe */
  if (!zf) goto L_97dfbe;
L_97dfb2: /* 97dfb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97dfb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dfb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97dfb5: xor eax, eax */
  eax = 0;
/* 97dfb7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97dfb8: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97dfbb: ret 8 */
  esp += 12; SPILL(); return;
L_97dfbe: /* 97dfbe: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 97dfc2: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97dfc4: jne 0x97dfd2 */
  if (!zf) goto L_97dfd2;
L_97dfc6: /* 97dfc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97dfc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97dfc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97dfc9: xor eax, eax */
  eax = 0;
/* 97dfcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97dfcc: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97dfcf: ret 8 */
  esp += 12; SPILL(); return;
L_97dfd2: /* 97dfd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97dfd3: call 0x983e20 */
  esp -= 4; W32(esp, 0x97dfd8u); SPILL(); f_983e20(); if (g_unwind) return; RELOAD();
/* 97dfd8: mov esi, eax */
  esi = eax;
/* 97dfda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dfdb: call 0x97e080 */
  esp -= 4; W32(esp, 0x97dfe0u); SPILL(); f_97e080(); if (g_unwind) return; RELOAD();
/* 97dfe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97dfe1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dfe2: call 0x983eb0 */
  esp -= 4; W32(esp, 0x97dfe7u); SPILL(); f_983eb0(); if (g_unwind) return; RELOAD();
/* 97dfe7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97dfe8: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97dfec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97dfed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dfee: call 0x983f10 */
  esp -= 4; W32(esp, 0x97dff3u); SPILL(); f_983f10(); if (g_unwind) return; RELOAD();
/* 97dff3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97dff5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97dff6: je 0x97e026 */
  if (zf) goto L_97e026;
L_97dff8: /* 97dff8: call 0x983ee0 */
  esp -= 4; W32(esp, 0x97dffdu); SPILL(); f_983ee0(); if (g_unwind) return; RELOAD();
/* 97dffd: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 97e001: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97e003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e004: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e005: push 0xb0302c */
  { uint32_t v = 0xb0302cu; esp -= 4; W32(esp, v); }
/* 97e00a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97e00c: call 0x971e20 */
  esp -= 4; W32(esp, 0x97e011u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 97e011: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e014: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e015: call 0x983ea0 */
  esp -= 4; W32(esp, 0x97e01au); SPILL(); f_983ea0(); if (g_unwind) return; RELOAD();
/* 97e01a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e01b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e01c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e01d: xor eax, eax */
  eax = 0;
/* 97e01f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e020: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e023: ret 8 */
  esp += 12; SPILL(); return;
L_97e026: /* 97e026: call 0x983ea0 */
  esp -= 4; W32(esp, 0x97e02bu); SPILL(); f_983ea0(); if (g_unwind) return; RELOAD();
/* 97e02b: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 97e02e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97e030: je 0x97e052 */
  if (zf) goto L_97e052;
L_97e032: /* 97e032: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 97e034: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97e036: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e037: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97e03a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e03b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e03c: call dword ptr [0xb03020] */
  { uint32_t t = R32((uint32_t)(0xb03020u)); esp -= 4; W32(esp, 0x97e042u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e042: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 97e044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e045: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e046: call 0x97d900 */
  esp -= 4; W32(esp, 0x97e04bu); SPILL(); f_97d900(); if (g_unwind) return; RELOAD();
/* 97e04b: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 97e04e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97e050: jne 0x97e032 */
  if (!zf) goto L_97e032;
L_97e052: /* 97e052: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e053: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e054: push 0x9823b0 */
  { uint32_t v = 0x9823b0u; esp -= 4; W32(esp, v); }
/* 97e059: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e05a: call 0x982710 */
  esp -= 4; W32(esp, 0x97e05fu); SPILL(); f_982710(); if (g_unwind) return; RELOAD();
/* 97e05f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e062: call 0x9823b0 */
  esp -= 4; W32(esp, 0x97e067u); SPILL(); f_9823b0(); if (g_unwind) return; RELOAD();
/* 97e067: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e068: call 0x982350 */
  esp -= 4; W32(esp, 0x97e06du); SPILL(); f_982350(); if (g_unwind) return; RELOAD();
/* 97e06d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e06e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e06f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e070: mov eax, 1 */
  eax = 0x1u;
/* 97e075: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e076: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e079: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97e080(void) {
  LOAD_REGS();
L_97e080: /* 97e080: xor eax, eax */
  eax = 0;
/* 97e082: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97e090(void) {
  LOAD_REGS();
L_97e090: /* 97e090: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e093: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e094: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e095: xor ebp, ebp */
  ebp = 0;
/* 97e097: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e098: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e099: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e09a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e09b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e09c: push 0xb03050 */
  { uint32_t v = 0xb03050u; esp -= 4; W32(esp, v); }
/* 97e0a1: xor eax, eax */
  eax = 0;
/* 97e0a3: mov dword ptr [esp + 0x20], 0xb03048 */
  W32((uint32_t)(esp + 0x20u), 0xb03048u);
/* 97e0ab: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 97e0af: mov dword ptr [esp + 0x28], 0x9822a0 */
  W32((uint32_t)(esp + 0x28u), 0x9822a0u);
/* 97e0b7: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 97e0bb: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 97e0bf: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 97e0c3: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 97e0c7: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 97e0cb: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 97e0cf: mov dword ptr [esp + 0x44], 2 */
  W32((uint32_t)(esp + 0x44u), 0x2u);
/* 97e0d7: mov ecx, 6 */
  ecx = 0x6u;
/* 97e0dc: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* 97e0e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e0e1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 97e0e3: call 0x982310 */
  esp -= 4; W32(esp, 0x97e0e8u); SPILL(); f_982310(); if (g_unwind) return; RELOAD();
/* 97e0e8: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 97e0ec: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97e0ee: mov edi, eax */
  edi = eax;
/* 97e0f0: jne 0x97e0fe */
  if (!zf) goto L_97e0fe;
L_97e0f2: /* 97e0f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e0f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e0f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e0f5: xor eax, eax */
  eax = 0;
/* 97e0f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e0f8: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e0fb: ret 8 */
  esp += 12; SPILL(); return;
L_97e0fe: /* 97e0fe: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 97e102: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 97e104: jne 0x97e112 */
  if (!zf) goto L_97e112;
L_97e106: /* 97e106: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e107: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e108: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e109: xor eax, eax */
  eax = 0;
/* 97e10b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e10c: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e10f: ret 8 */
  esp += 12; SPILL(); return;
L_97e112: /* 97e112: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e113: call 0x983e20 */
  esp -= 4; W32(esp, 0x97e118u); SPILL(); f_983e20(); if (g_unwind) return; RELOAD();
/* 97e118: mov esi, eax */
  esi = eax;
/* 97e11a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e11b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e11c: call 0x983eb0 */
  esp -= 4; W32(esp, 0x97e121u); SPILL(); f_983eb0(); if (g_unwind) return; RELOAD();
/* 97e121: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e122: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 97e126: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e127: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e128: call 0x983f10 */
  esp -= 4; W32(esp, 0x97e12du); SPILL(); f_983f10(); if (g_unwind) return; RELOAD();
/* 97e12d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e12f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e130: je 0x97e160 */
  if (zf) goto L_97e160;
L_97e132: /* 97e132: call 0x983ee0 */
  esp -= 4; W32(esp, 0x97e137u); SPILL(); f_983ee0(); if (g_unwind) return; RELOAD();
/* 97e137: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 97e13b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97e13d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e13e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e13f: push 0xb0302c */
  { uint32_t v = 0xb0302cu; esp -= 4; W32(esp, v); }
/* 97e144: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 97e146: call 0x971e20 */
  esp -= 4; W32(esp, 0x97e14bu); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 97e14b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e14e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e14f: call 0x983ea0 */
  esp -= 4; W32(esp, 0x97e154u); SPILL(); f_983ea0(); if (g_unwind) return; RELOAD();
/* 97e154: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e155: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e156: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e157: xor eax, eax */
  eax = 0;
/* 97e159: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e15a: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e15d: ret 8 */
  esp += 12; SPILL(); return;
L_97e160: /* 97e160: call 0x983ea0 */
  esp -= 4; W32(esp, 0x97e165u); SPILL(); f_983ea0(); if (g_unwind) return; RELOAD();
/* 97e165: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97e168: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e16a: je 0x97e187 */
  if (zf) goto L_97e187;
L_97e16c: /* 97e16c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 97e16e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 97e170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e171: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 97e174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e176: call dword ptr [0xb03020] */
  { uint32_t t = R32((uint32_t)(0xb03020u)); esp -= 4; W32(esp, 0x97e17cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e17c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 97e17e: mov ebp, eax */
  ebp = eax;
/* 97e180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e181: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e182: call 0x97d900 */
  esp -= 4; W32(esp, 0x97e187u); SPILL(); f_97d900(); if (g_unwind) return; RELOAD();
L_97e187: /* 97e187: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97e189: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97e18b: push 0x9823b0 */
  { uint32_t v = 0x9823b0u; esp -= 4; W32(esp, v); }
/* 97e190: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e191: call 0x982710 */
  esp -= 4; W32(esp, 0x97e196u); SPILL(); f_982710(); if (g_unwind) return; RELOAD();
/* 97e196: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97e198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97e19a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e19b: call 0x9823b0 */
  esp -= 4; W32(esp, 0x97e1a0u); SPILL(); f_9823b0(); if (g_unwind) return; RELOAD();
/* 97e1a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e1a1: call 0x982350 */
  esp -= 4; W32(esp, 0x97e1a6u); SPILL(); f_982350(); if (g_unwind) return; RELOAD();
/* 97e1a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e1a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e1a8: mov eax, ebp */
  eax = ebp;
/* 97e1aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e1ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e1ac: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e1af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97e1c0(void) {
  LOAD_REGS();
L_97e1c0: /* 97e1c0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 97e1c2: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97e1c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e1c8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 97e1cc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 97e1ce: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 97e1d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97e1e0(void) {
  LOAD_REGS();
L_97e1e0: /* 97e1e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e1e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 97e1e5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97e1e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e1ea: je 0x97e1f3 */
  if (zf) goto L_97e1f3;
L_97e1ec: /* 97e1ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e1ed: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97e1f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97e1f3: /* 97e1f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e1f4: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97e1fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e1fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e1fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_97e200(void) {
  LOAD_REGS();
L_97e200: /* 97e200: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e206: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e207: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e209: mov edi, dword ptr [esp + 0x418] */
  edi = R32((uint32_t)(esp + 0x418u));
/* 97e210: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e211: call 0x984070 */
  esp -= 4; W32(esp, 0x97e216u); SPILL(); f_984070(); if (g_unwind) return; RELOAD();
/* 97e216: mov ebx, dword ptr [0xcfb078] */
  ebx = R32((uint32_t)(0xcfb078u));
/* 97e21c: mov esi, eax */
  esi = eax;
/* 97e21e: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97e222: push 0xb03074 */
  { uint32_t v = 0xb03074u; esp -= 4; W32(esp, v); }
/* 97e227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e228: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97e22au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e22a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e22d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e22e: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97e231: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97e233: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
/* 97e237: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97e239: not ecx */
  ecx = ~ecx;
/* 97e23b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 97e23d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 97e23e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e23f: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 97e243: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e244: call 0x975650 */
  esp -= 4; W32(esp, 0x97e249u); SPILL(); f_975650(); if (g_unwind) return; RELOAD();
/* 97e249: mov edi, dword ptr [esp + 0x414] */
  edi = R32((uint32_t)(esp + 0x414u));
/* 97e250: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 97e253: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e255: je 0x97e261 */
  if (zf) goto L_97e261;
L_97e257: /* 97e257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e258: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e259: call 0x9841f0 */
  esp -= 4; W32(esp, 0x97e25eu); SPILL(); f_9841f0(); if (g_unwind) return; RELOAD();
/* 97e25e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97e261: /* 97e261: call 0x97df10 */
  esp -= 4; W32(esp, 0x97e266u); SPILL(); f_97df10(); if (g_unwind) return; RELOAD();
/* 97e266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e267: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 97e26b: push 0xb03058 */
  { uint32_t v = 0xb03058u; esp -= 4; W32(esp, v); }
/* 97e270: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e271: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97e273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e273: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 97e277: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e278: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 97e27a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e27b: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e280u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e280: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 97e282: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e285: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e286: mov ebx, eax */
  ebx = eax;
/* 97e288: call 0x97d7f0 */
  esp -= 4; W32(esp, 0x97e28du); SPILL(); f_97d7f0(); if (g_unwind) return; RELOAD();
/* 97e28d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97e28f: jle 0x97e2c7 */
  if ((zf || sf != of)) goto L_97e2c7;
L_97e291: /* 97e291: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 97e293: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97e297: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e298: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e299: call 0x97d800 */
  esp -= 4; W32(esp, 0x97e29eu); SPILL(); f_97d800(); if (g_unwind) return; RELOAD();
/* 97e29e: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 97e2a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e2a3: call 0x97d820 */
  esp -= 4; W32(esp, 0x97e2a8u); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97e2a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e2aa: je 0x97e2c7 */
  if (zf) goto L_97e2c7;
L_97e2ac: /* 97e2ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97e2b0: /* 97e2b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e2b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e2b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e2b3: call dword ptr [0xb03024] */
  { uint32_t t = R32((uint32_t)(0xb03024u)); esp -= 4; W32(esp, 0x97e2b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e2b9: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 97e2bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e2be: call 0x97d820 */
  esp -= 4; W32(esp, 0x97e2c3u); SPILL(); f_97d820(); if (g_unwind) return; RELOAD();
/* 97e2c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e2c5: jne 0x97e2b0 */
  if (!zf) goto L_97e2b0;
L_97e2c7: /* 97e2c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e2c8: call 0x984090 */
  esp -= 4; W32(esp, 0x97e2cdu); SPILL(); f_984090(); if (g_unwind) return; RELOAD();
/* 97e2cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e2ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e2cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e2d0: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e2d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_97e2e0(void) {
  LOAD_REGS();
L_97e2e0: /* 97e2e0: mov eax, 0x1000 */
  eax = 0x1000u;
/* 97e2e5: call 0x99cc00 */
  esp -= 4; W32(esp, 0x97e2eau); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 97e2ea: mov ecx, dword ptr [esp + 0x1008] */
  ecx = R32((uint32_t)(esp + 0x1008u));
/* 97e2f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e2f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e2f3: lea eax, [esp + 0x1014] */
  eax = (uint32_t)(esp + 0x1014u);
/* 97e2fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e2fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e2fc: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97e300: push 0xfff */
  { uint32_t v = 0xfffu; esp -= 4; W32(esp, v); }
/* 97e305: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e306: call dword ptr [0xcfb0dc] */
  esp -= 4; W32(esp, 0x97e30cu); SPILL(); f_42ba9c(); if (g_unwind) return; /* MSVCR70!_vsnprintf */ RELOAD();
/* 97e30c: mov esi, dword ptr [esp + 0x101c] */
  esi = R32((uint32_t)(esp + 0x101cu));
/* 97e313: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 97e316: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e319: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e31b: je 0x97e324 */
  if (zf) goto L_97e324;
L_97e31d: /* 97e31d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e31e: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x97e324u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_97e324: /* 97e324: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 97e327: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 97e329: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 97e32d: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 97e32f: not ecx */
  ecx = ~ecx;
/* 97e331: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e332: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x97e338u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e338: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e339: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 97e33c: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 97e340: mov edx, eax */
  edx = eax;
/* 97e342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_97e343: /* 97e343: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 97e345: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 97e346: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 97e348: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 97e349: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 97e34b: jne 0x97e343 */
  if (!zf) goto L_97e343;
L_97e34d: /* 97e34d: add esp, 0x1000 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e353: ret  */
  esp += 4; SPILL(); return;
}

void f_97e360(void) {
  LOAD_REGS();
L_97e360: /* 97e360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e361: mov ebp, esp */
  ebp = esp;
/* 97e363: sub esp, 0x408 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e369: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e36a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 97e36d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e36e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e36f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e370: call 0x97c1e0 */
  esp -= 4; W32(esp, 0x97e375u); SPILL(); f_97c1e0(); if (g_unwind) return; RELOAD();
/* 97e375: mov edi, dword ptr [0xcfb078] */
  edi = R32((uint32_t)(0xcfb078u));
/* 97e37b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e37c: lea eax, [ebp - 0x408] */
  eax = (uint32_t)(ebp + 0xfffffbf8u);
/* 97e382: push 0xb03104 */
  { uint32_t v = 0xb03104u; esp -= 4; W32(esp, v); }
/* 97e387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e388: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x97e38au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e38a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e38d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e38e: lea esi, [ebp + eax - 0x408] */
  esi = (uint32_t)(ebp + eax + 0xfffffbf8u);
/* 97e395: call 0x97c200 */
  esp -= 4; W32(esp, 0x97e39au); SPILL(); f_97c200(); if (g_unwind) return; RELOAD();
/* 97e39a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e39c: je 0x97e3ac */
  if (zf) goto L_97e3ac;
L_97e39e: /* 97e39e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e39f: push 0xb030f4 */
  { uint32_t v = 0xb030f4u; esp -= 4; W32(esp, v); }
/* 97e3a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e3a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x97e3a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e3a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e3aa: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_97e3ac: /* 97e3ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e3ad: call 0x97c210 */
  esp -= 4; W32(esp, 0x97e3b2u); SPILL(); f_97c210(); if (g_unwind) return; RELOAD();
/* 97e3b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e3b4: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 97e3b7: je 0x97e3d6 */
  if (zf) goto L_97e3d6;
L_97e3b9: /* 97e3b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e3ba: call 0x97c220 */
  esp -= 4; W32(esp, 0x97e3bfu); SPILL(); f_97c220(); if (g_unwind) return; RELOAD();
/* 97e3bf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 97e3c2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e3c5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e3c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e3c9: push 0xb030d8 */
  { uint32_t v = 0xb030d8u; esp -= 4; W32(esp, v); }
/* 97e3ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e3cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x97e3d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e3d1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e3d4: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_97e3d6: /* 97e3d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e3d7: call 0x97c900 */
  esp -= 4; W32(esp, 0x97e3dcu); SPILL(); f_97c900(); if (g_unwind) return; RELOAD();
/* 97e3dc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e3df: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e3e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e3e3: call 0x97c8f0 */
  esp -= 4; W32(esp, 0x97e3e8u); SPILL(); f_97c8f0(); if (g_unwind) return; RELOAD();
/* 97e3e8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e3eb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e3ee: push 0xb030b0 */
  { uint32_t v = 0xb030b0u; esp -= 4; W32(esp, v); }
/* 97e3f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e3f4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x97e3f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e3f6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97e3f9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 97e3fc: lea edx, [ebp - 0x408] */
  edx = (uint32_t)(ebp + 0xfffffbf8u);
/* 97e402: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e404: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e405: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e40au); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e40a: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e40d: mov esi, eax */
  esi = eax;
/* 97e40f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e410: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 97e413: call 0x97c230 */
  esp -= 4; W32(esp, 0x97e418u); SPILL(); f_97c230(); if (g_unwind) return; RELOAD();
/* 97e418: mov edi, eax */
  edi = eax;
/* 97e41a: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 97e421: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97e424: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97e427: call 0x99cc00 */
  esp -= 4; W32(esp, 0x97e42cu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 97e42c: mov eax, esp */
  eax = esp;
/* 97e42e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e42f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e430: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 97e433: call 0x97c3b0 */
  esp -= 4; W32(esp, 0x97e438u); SPILL(); f_97c3b0(); if (g_unwind) return; RELOAD();
/* 97e438: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97e43a: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 97e441: jle 0x97e462 */
  if ((zf || sf != of)) goto L_97e462;
L_97e443: /* 97e443: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 97e446: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 97e449: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 97e44c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 97e44f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e450: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e452: call 0x97e5f0 */
  esp -= 4; W32(esp, 0x97e457u); SPILL(); f_97e5f0(); if (g_unwind) return; RELOAD();
/* 97e457: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 97e45a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97e45b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97e45d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 97e460: jl 0x97e443 */
  if ((sf != of)) goto L_97e443;
L_97e462: /* 97e462: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e463: call 0x97c240 */
  esp -= 4; W32(esp, 0x97e468u); SPILL(); f_97c240(); if (g_unwind) return; RELOAD();
/* 97e468: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 97e46b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 97e46e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97e471: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97e474: call 0x99cc00 */
  esp -= 4; W32(esp, 0x97e479u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 97e479: mov eax, esp */
  eax = esp;
/* 97e47b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e47c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e47d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 97e480: call 0x97c460 */
  esp -= 4; W32(esp, 0x97e485u); SPILL(); f_97c460(); if (g_unwind) return; RELOAD();
/* 97e485: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 97e488: xor edi, edi */
  edi = 0;
/* 97e48a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97e48c: jle 0x97e4a9 */
  if ((zf || sf != of)) goto L_97e4a9;
L_97e48e: /* 97e48e: mov edi, edi */
  edi = edi;
L_97e490: /* 97e490: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97e493: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 97e496: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 97e499: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e49a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e49b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e49c: call 0x97eae0 */
  esp -= 4; W32(esp, 0x97e4a1u); SPILL(); f_97eae0(); if (g_unwind) return; RELOAD();
/* 97e4a1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 97e4a4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 97e4a5: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97e4a7: jl 0x97e490 */
  if ((sf != of)) goto L_97e490;
L_97e4a9: /* 97e4a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e4aa: call 0x97c260 */
  esp -= 4; W32(esp, 0x97e4afu); SPILL(); f_97c260(); if (g_unwind) return; RELOAD();
/* 97e4af: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 97e4b2: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 97e4b5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97e4b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97e4bb: call 0x99cc00 */
  esp -= 4; W32(esp, 0x97e4c0u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 97e4c0: mov edi, esp */
  edi = esp;
/* 97e4c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e4c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e4c4: call 0x97c510 */
  esp -= 4; W32(esp, 0x97e4c9u); SPILL(); f_97c510(); if (g_unwind) return; RELOAD();
/* 97e4c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 97e4cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97e4ce: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 97e4d5: jle 0x97e597 */
  if ((zf || sf != of)) goto L_97e597;
L_97e4db: /* 97e4db: nop  */
/* 97e4dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97e4e0: /* 97e4e0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97e4e3: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 97e4e6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 97e4e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e4ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e4eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e4ec: call 0x97ed30 */
  esp -= 4; W32(esp, 0x97e4f1u); SPILL(); f_97ed30(); if (g_unwind) return; RELOAD();
/* 97e4f1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 97e4f4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 97e4f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 97e4f8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97e4fa: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 97e4fd: jl 0x97e4e0 */
  if ((sf != of)) goto L_97e4e0;
L_97e4ff: /* 97e4ff: mov eax, ecx */
  eax = ecx;
/* 97e501: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97e503: jle 0x97e597 */
  if ((zf || sf != of)) goto L_97e597;
L_97e509: /* 97e509: mov esi, 1 */
  esi = 0x1u;
/* 97e50e: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 97e511: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
L_97e514: /* 97e514: cmp esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97e517: jge 0x97e57d */
  if ((sf == of)) goto L_97e57d;
L_97e519: /* 97e519: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_97e520: /* 97e520: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 97e523: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97e526: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97e528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e529: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e52a: call 0x97a5f0 */
  esp -= 4; W32(esp, 0x97e52fu); SPILL(); f_97a5f0(); if (g_unwind) return; RELOAD();
/* 97e52f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e531: jne 0x97e572 */
  if (!zf) goto L_97e572;
L_97e533: /* 97e533: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 97e536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e537: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x97e53cu); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 97e53c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97e53f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 97e541: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e542: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e543: call 0x97a4c0 */
  esp -= 4; W32(esp, 0x97e548u); SPILL(); f_97a4c0(); if (g_unwind) return; RELOAD();
/* 97e548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e549: lea eax, [ebp - 0x408] */
  eax = (uint32_t)(ebp + 0xfffffbf8u);
/* 97e54f: push 0xb0308c */
  { uint32_t v = 0xb0308cu; esp -= 4; W32(esp, v); }
/* 97e554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e555: call dword ptr [0xcfb078] */
  esp -= 4; W32(esp, 0x97e55bu); SPILL(); f_42b5eb(); if (g_unwind) return; /* MSVCR70!sprintf */ RELOAD();
/* 97e55b: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 97e55e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 97e561: lea ecx, [ebp - 0x408] */
  ecx = (uint32_t)(ebp + 0xfffffbf8u);
/* 97e567: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e568: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e56a: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e56fu); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e56f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97e572: /* 97e572: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 97e575: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 97e576: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97e578: jl 0x97e520 */
  if ((sf != of)) goto L_97e520;
L_97e57a: /* 97e57a: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
L_97e57d: /* 97e57d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 97e580: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 97e583: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 97e586: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 97e587: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 97e58a: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 97e58d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97e58f: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 97e592: jl 0x97e514 */
  if ((sf != of)) goto L_97e514;
L_97e594: /* 97e594: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
L_97e597: /* 97e597: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e598: call 0x97c250 */
  esp -= 4; W32(esp, 0x97e59du); SPILL(); f_97c250(); if (g_unwind) return; RELOAD();
/* 97e59d: mov edi, eax */
  edi = eax;
/* 97e59f: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 97e5a6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 97e5a9: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 97e5ac: call 0x99cc00 */
  esp -= 4; W32(esp, 0x97e5b1u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 97e5b1: mov eax, esp */
  eax = esp;
/* 97e5b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e5b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e5b5: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 97e5b8: call 0x97c5c0 */
  esp -= 4; W32(esp, 0x97e5bdu); SPILL(); f_97c5c0(); if (g_unwind) return; RELOAD();
/* 97e5bd: xor ebx, ebx */
  ebx = 0;
/* 97e5bf: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 97e5c1: jle 0x97e5d9 */
  if ((zf || sf != of)) goto L_97e5d9;
L_97e5c3: /* 97e5c3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 97e5c6: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 97e5c9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 97e5cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e5cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e5ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e5cf: call 0x97ee90 */
  esp -= 4; W32(esp, 0x97e5d4u); SPILL(); f_97ee90(); if (g_unwind) return; RELOAD();
/* 97e5d4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 97e5d5: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 97e5d7: jl 0x97e5c3 */
  if ((sf != of)) goto L_97e5c3;
L_97e5d9: /* 97e5d9: mov eax, esi */
  eax = esi;
/* 97e5db: lea esp, [ebp - 0x414] */
  esp = (uint32_t)(ebp + 0xfffffbecu);
/* 97e5e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e5e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e5e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e5e4: mov esp, ebp */
  esp = ebp;
/* 97e5e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e5e7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_97e5f0(void) {
  LOAD_REGS();
L_97e5f0: /* 97e5f0: sub esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e5f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e5f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e5f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e5f9: mov esi, dword ptr [esp + 0x424] */
  esi = R32((uint32_t)(esp + 0x424u));
/* 97e600: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e602: call 0x97d2f0 */
  esp -= 4; W32(esp, 0x97e607u); SPILL(); f_97d2f0(); if (g_unwind) return; RELOAD();
/* 97e607: mov ebx, dword ptr [0xcfb078] */
  ebx = R32((uint32_t)(0xcfb078u));
/* 97e60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e60e: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 97e612: push 0xb03150 */
  { uint32_t v = 0xb03150u; esp -= 4; W32(esp, v); }
/* 97e617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e618: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97e61au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e61a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e61d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e61e: lea ebp, [esp + eax + 0x24] */
  ebp = (uint32_t)(esp + eax + 0x24u);
/* 97e622: call 0x97d300 */
  esp -= 4; W32(esp, 0x97e627u); SPILL(); f_97d300(); if (g_unwind) return; RELOAD();
/* 97e627: mov edi, eax */
  edi = eax;
/* 97e629: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e62b: je 0x97e66a */
  if (zf) goto L_97e66a;
L_97e62d: /* 97e62d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 97e631: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e632: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e633: call 0x97d320 */
  esp -= 4; W32(esp, 0x97e638u); SPILL(); f_97d320(); if (g_unwind) return; RELOAD();
/* 97e638: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 97e63c: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e63f: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 97e643: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 97e647: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 97e64b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 97e64f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e652: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e653: call 0x97d310 */
  esp -= 4; W32(esp, 0x97e658u); SPILL(); f_97d310(); if (g_unwind) return; RELOAD();
/* 97e658: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 97e65b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 97e65e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e65f: push 0xb03114 */
  { uint32_t v = 0xb03114u; esp -= 4; W32(esp, v); }
/* 97e664: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 97e665: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x97e667u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 97e667: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_97e66a: /* 97e66a: mov eax, dword ptr [esp + 0x42c] */
  eax = R32((uint32_t)(esp + 0x42cu));
/* 97e671: mov ebx, dword ptr [esp + 0x424] */
  ebx = R32((uint32_t)(esp + 0x424u));
/* 97e678: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 97e67c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e67d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e67e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e67f: call 0x9840c0 */
  esp -= 4; W32(esp, 0x97e684u); SPILL(); f_9840c0(); if (g_unwind) return; RELOAD();
/* 97e684: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e687: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 97e68b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 97e68c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 97e68d: mov edi, eax */
  edi = eax;
/* 97e68f: call 0x97d340 */
  esp -= 4; W32(esp, 0x97e694u); SPILL(); f_97d340(); if (g_unwind) return; RELOAD();
/* 97e694: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 97e698: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 97e699: call 0x97d360 */
  esp -= 4; W32(esp, 0x97e69eu); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97e69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e6a0: je 0x97e6b8 */
  if (zf) goto L_97e6b8;
L_97e6a2: /* 97e6a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 97e6a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e6a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 97e6a5: call 0x97e6d0 */
  esp -= 4; W32(esp, 0x97e6aau); SPILL(); f_97e6d0(); if (g_unwind) return; RELOAD();
/* 97e6aa: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 97e6ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 97e6af: call 0x97d360 */
  esp -= 4; W32(esp, 0x97e6b4u); SPILL(); f_97d360(); if (g_unwind) return; RELOAD();
/* 97e6b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 97e6b6: jne 0x97e6a2 */
  if (!zf) goto L_97e6a2;
L_97e6b8: /* 97e6b8: mov eax, edi */
  eax = edi;
/* 97e6ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 97e6bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 97e6bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 97e6bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 97e6be: add esp, 0x410 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x410u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 97e6c4: ret 0xc */
  esp += 16; SPILL(); return;
}
